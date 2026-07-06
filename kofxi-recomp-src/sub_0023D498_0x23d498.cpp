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

// Function: sub_0023D498
// Address: 0x23d498 - 0x23e428
void sub_0023D498_0x23d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D498_0x23d498");
#endif

    switch (ctx->pc) {
        case 0x23d498u: goto label_23d498;
        case 0x23d49cu: goto label_23d49c;
        case 0x23d4a0u: goto label_23d4a0;
        case 0x23d4a4u: goto label_23d4a4;
        case 0x23d4a8u: goto label_23d4a8;
        case 0x23d4acu: goto label_23d4ac;
        case 0x23d4b0u: goto label_23d4b0;
        case 0x23d4b4u: goto label_23d4b4;
        case 0x23d4b8u: goto label_23d4b8;
        case 0x23d4bcu: goto label_23d4bc;
        case 0x23d4c0u: goto label_23d4c0;
        case 0x23d4c4u: goto label_23d4c4;
        case 0x23d4c8u: goto label_23d4c8;
        case 0x23d4ccu: goto label_23d4cc;
        case 0x23d4d0u: goto label_23d4d0;
        case 0x23d4d4u: goto label_23d4d4;
        case 0x23d4d8u: goto label_23d4d8;
        case 0x23d4dcu: goto label_23d4dc;
        case 0x23d4e0u: goto label_23d4e0;
        case 0x23d4e4u: goto label_23d4e4;
        case 0x23d4e8u: goto label_23d4e8;
        case 0x23d4ecu: goto label_23d4ec;
        case 0x23d4f0u: goto label_23d4f0;
        case 0x23d4f4u: goto label_23d4f4;
        case 0x23d4f8u: goto label_23d4f8;
        case 0x23d4fcu: goto label_23d4fc;
        case 0x23d500u: goto label_23d500;
        case 0x23d504u: goto label_23d504;
        case 0x23d508u: goto label_23d508;
        case 0x23d50cu: goto label_23d50c;
        case 0x23d510u: goto label_23d510;
        case 0x23d514u: goto label_23d514;
        case 0x23d518u: goto label_23d518;
        case 0x23d51cu: goto label_23d51c;
        case 0x23d520u: goto label_23d520;
        case 0x23d524u: goto label_23d524;
        case 0x23d528u: goto label_23d528;
        case 0x23d52cu: goto label_23d52c;
        case 0x23d530u: goto label_23d530;
        case 0x23d534u: goto label_23d534;
        case 0x23d538u: goto label_23d538;
        case 0x23d53cu: goto label_23d53c;
        case 0x23d540u: goto label_23d540;
        case 0x23d544u: goto label_23d544;
        case 0x23d548u: goto label_23d548;
        case 0x23d54cu: goto label_23d54c;
        case 0x23d550u: goto label_23d550;
        case 0x23d554u: goto label_23d554;
        case 0x23d558u: goto label_23d558;
        case 0x23d55cu: goto label_23d55c;
        case 0x23d560u: goto label_23d560;
        case 0x23d564u: goto label_23d564;
        case 0x23d568u: goto label_23d568;
        case 0x23d56cu: goto label_23d56c;
        case 0x23d570u: goto label_23d570;
        case 0x23d574u: goto label_23d574;
        case 0x23d578u: goto label_23d578;
        case 0x23d57cu: goto label_23d57c;
        case 0x23d580u: goto label_23d580;
        case 0x23d584u: goto label_23d584;
        case 0x23d588u: goto label_23d588;
        case 0x23d58cu: goto label_23d58c;
        case 0x23d590u: goto label_23d590;
        case 0x23d594u: goto label_23d594;
        case 0x23d598u: goto label_23d598;
        case 0x23d59cu: goto label_23d59c;
        case 0x23d5a0u: goto label_23d5a0;
        case 0x23d5a4u: goto label_23d5a4;
        case 0x23d5a8u: goto label_23d5a8;
        case 0x23d5acu: goto label_23d5ac;
        case 0x23d5b0u: goto label_23d5b0;
        case 0x23d5b4u: goto label_23d5b4;
        case 0x23d5b8u: goto label_23d5b8;
        case 0x23d5bcu: goto label_23d5bc;
        case 0x23d5c0u: goto label_23d5c0;
        case 0x23d5c4u: goto label_23d5c4;
        case 0x23d5c8u: goto label_23d5c8;
        case 0x23d5ccu: goto label_23d5cc;
        case 0x23d5d0u: goto label_23d5d0;
        case 0x23d5d4u: goto label_23d5d4;
        case 0x23d5d8u: goto label_23d5d8;
        case 0x23d5dcu: goto label_23d5dc;
        case 0x23d5e0u: goto label_23d5e0;
        case 0x23d5e4u: goto label_23d5e4;
        case 0x23d5e8u: goto label_23d5e8;
        case 0x23d5ecu: goto label_23d5ec;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d5f4u: goto label_23d5f4;
        case 0x23d5f8u: goto label_23d5f8;
        case 0x23d5fcu: goto label_23d5fc;
        case 0x23d600u: goto label_23d600;
        case 0x23d604u: goto label_23d604;
        case 0x23d608u: goto label_23d608;
        case 0x23d60cu: goto label_23d60c;
        case 0x23d610u: goto label_23d610;
        case 0x23d614u: goto label_23d614;
        case 0x23d618u: goto label_23d618;
        case 0x23d61cu: goto label_23d61c;
        case 0x23d620u: goto label_23d620;
        case 0x23d624u: goto label_23d624;
        case 0x23d628u: goto label_23d628;
        case 0x23d62cu: goto label_23d62c;
        case 0x23d630u: goto label_23d630;
        case 0x23d634u: goto label_23d634;
        case 0x23d638u: goto label_23d638;
        case 0x23d63cu: goto label_23d63c;
        case 0x23d640u: goto label_23d640;
        case 0x23d644u: goto label_23d644;
        case 0x23d648u: goto label_23d648;
        case 0x23d64cu: goto label_23d64c;
        case 0x23d650u: goto label_23d650;
        case 0x23d654u: goto label_23d654;
        case 0x23d658u: goto label_23d658;
        case 0x23d65cu: goto label_23d65c;
        case 0x23d660u: goto label_23d660;
        case 0x23d664u: goto label_23d664;
        case 0x23d668u: goto label_23d668;
        case 0x23d66cu: goto label_23d66c;
        case 0x23d670u: goto label_23d670;
        case 0x23d674u: goto label_23d674;
        case 0x23d678u: goto label_23d678;
        case 0x23d67cu: goto label_23d67c;
        case 0x23d680u: goto label_23d680;
        case 0x23d684u: goto label_23d684;
        case 0x23d688u: goto label_23d688;
        case 0x23d68cu: goto label_23d68c;
        case 0x23d690u: goto label_23d690;
        case 0x23d694u: goto label_23d694;
        case 0x23d698u: goto label_23d698;
        case 0x23d69cu: goto label_23d69c;
        case 0x23d6a0u: goto label_23d6a0;
        case 0x23d6a4u: goto label_23d6a4;
        case 0x23d6a8u: goto label_23d6a8;
        case 0x23d6acu: goto label_23d6ac;
        case 0x23d6b0u: goto label_23d6b0;
        case 0x23d6b4u: goto label_23d6b4;
        case 0x23d6b8u: goto label_23d6b8;
        case 0x23d6bcu: goto label_23d6bc;
        case 0x23d6c0u: goto label_23d6c0;
        case 0x23d6c4u: goto label_23d6c4;
        case 0x23d6c8u: goto label_23d6c8;
        case 0x23d6ccu: goto label_23d6cc;
        case 0x23d6d0u: goto label_23d6d0;
        case 0x23d6d4u: goto label_23d6d4;
        case 0x23d6d8u: goto label_23d6d8;
        case 0x23d6dcu: goto label_23d6dc;
        case 0x23d6e0u: goto label_23d6e0;
        case 0x23d6e4u: goto label_23d6e4;
        case 0x23d6e8u: goto label_23d6e8;
        case 0x23d6ecu: goto label_23d6ec;
        case 0x23d6f0u: goto label_23d6f0;
        case 0x23d6f4u: goto label_23d6f4;
        case 0x23d6f8u: goto label_23d6f8;
        case 0x23d6fcu: goto label_23d6fc;
        case 0x23d700u: goto label_23d700;
        case 0x23d704u: goto label_23d704;
        case 0x23d708u: goto label_23d708;
        case 0x23d70cu: goto label_23d70c;
        case 0x23d710u: goto label_23d710;
        case 0x23d714u: goto label_23d714;
        case 0x23d718u: goto label_23d718;
        case 0x23d71cu: goto label_23d71c;
        case 0x23d720u: goto label_23d720;
        case 0x23d724u: goto label_23d724;
        case 0x23d728u: goto label_23d728;
        case 0x23d72cu: goto label_23d72c;
        case 0x23d730u: goto label_23d730;
        case 0x23d734u: goto label_23d734;
        case 0x23d738u: goto label_23d738;
        case 0x23d73cu: goto label_23d73c;
        case 0x23d740u: goto label_23d740;
        case 0x23d744u: goto label_23d744;
        case 0x23d748u: goto label_23d748;
        case 0x23d74cu: goto label_23d74c;
        case 0x23d750u: goto label_23d750;
        case 0x23d754u: goto label_23d754;
        case 0x23d758u: goto label_23d758;
        case 0x23d75cu: goto label_23d75c;
        case 0x23d760u: goto label_23d760;
        case 0x23d764u: goto label_23d764;
        case 0x23d768u: goto label_23d768;
        case 0x23d76cu: goto label_23d76c;
        case 0x23d770u: goto label_23d770;
        case 0x23d774u: goto label_23d774;
        case 0x23d778u: goto label_23d778;
        case 0x23d77cu: goto label_23d77c;
        case 0x23d780u: goto label_23d780;
        case 0x23d784u: goto label_23d784;
        case 0x23d788u: goto label_23d788;
        case 0x23d78cu: goto label_23d78c;
        case 0x23d790u: goto label_23d790;
        case 0x23d794u: goto label_23d794;
        case 0x23d798u: goto label_23d798;
        case 0x23d79cu: goto label_23d79c;
        case 0x23d7a0u: goto label_23d7a0;
        case 0x23d7a4u: goto label_23d7a4;
        case 0x23d7a8u: goto label_23d7a8;
        case 0x23d7acu: goto label_23d7ac;
        case 0x23d7b0u: goto label_23d7b0;
        case 0x23d7b4u: goto label_23d7b4;
        case 0x23d7b8u: goto label_23d7b8;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7c0u: goto label_23d7c0;
        case 0x23d7c4u: goto label_23d7c4;
        case 0x23d7c8u: goto label_23d7c8;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7d0u: goto label_23d7d0;
        case 0x23d7d4u: goto label_23d7d4;
        case 0x23d7d8u: goto label_23d7d8;
        case 0x23d7dcu: goto label_23d7dc;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d7e4u: goto label_23d7e4;
        case 0x23d7e8u: goto label_23d7e8;
        case 0x23d7ecu: goto label_23d7ec;
        case 0x23d7f0u: goto label_23d7f0;
        case 0x23d7f4u: goto label_23d7f4;
        case 0x23d7f8u: goto label_23d7f8;
        case 0x23d7fcu: goto label_23d7fc;
        case 0x23d800u: goto label_23d800;
        case 0x23d804u: goto label_23d804;
        case 0x23d808u: goto label_23d808;
        case 0x23d80cu: goto label_23d80c;
        case 0x23d810u: goto label_23d810;
        case 0x23d814u: goto label_23d814;
        case 0x23d818u: goto label_23d818;
        case 0x23d81cu: goto label_23d81c;
        case 0x23d820u: goto label_23d820;
        case 0x23d824u: goto label_23d824;
        case 0x23d828u: goto label_23d828;
        case 0x23d82cu: goto label_23d82c;
        case 0x23d830u: goto label_23d830;
        case 0x23d834u: goto label_23d834;
        case 0x23d838u: goto label_23d838;
        case 0x23d83cu: goto label_23d83c;
        case 0x23d840u: goto label_23d840;
        case 0x23d844u: goto label_23d844;
        case 0x23d848u: goto label_23d848;
        case 0x23d84cu: goto label_23d84c;
        case 0x23d850u: goto label_23d850;
        case 0x23d854u: goto label_23d854;
        case 0x23d858u: goto label_23d858;
        case 0x23d85cu: goto label_23d85c;
        case 0x23d860u: goto label_23d860;
        case 0x23d864u: goto label_23d864;
        case 0x23d868u: goto label_23d868;
        case 0x23d86cu: goto label_23d86c;
        case 0x23d870u: goto label_23d870;
        case 0x23d874u: goto label_23d874;
        case 0x23d878u: goto label_23d878;
        case 0x23d87cu: goto label_23d87c;
        case 0x23d880u: goto label_23d880;
        case 0x23d884u: goto label_23d884;
        case 0x23d888u: goto label_23d888;
        case 0x23d88cu: goto label_23d88c;
        case 0x23d890u: goto label_23d890;
        case 0x23d894u: goto label_23d894;
        case 0x23d898u: goto label_23d898;
        case 0x23d89cu: goto label_23d89c;
        case 0x23d8a0u: goto label_23d8a0;
        case 0x23d8a4u: goto label_23d8a4;
        case 0x23d8a8u: goto label_23d8a8;
        case 0x23d8acu: goto label_23d8ac;
        case 0x23d8b0u: goto label_23d8b0;
        case 0x23d8b4u: goto label_23d8b4;
        case 0x23d8b8u: goto label_23d8b8;
        case 0x23d8bcu: goto label_23d8bc;
        case 0x23d8c0u: goto label_23d8c0;
        case 0x23d8c4u: goto label_23d8c4;
        case 0x23d8c8u: goto label_23d8c8;
        case 0x23d8ccu: goto label_23d8cc;
        case 0x23d8d0u: goto label_23d8d0;
        case 0x23d8d4u: goto label_23d8d4;
        case 0x23d8d8u: goto label_23d8d8;
        case 0x23d8dcu: goto label_23d8dc;
        case 0x23d8e0u: goto label_23d8e0;
        case 0x23d8e4u: goto label_23d8e4;
        case 0x23d8e8u: goto label_23d8e8;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d8f0u: goto label_23d8f0;
        case 0x23d8f4u: goto label_23d8f4;
        case 0x23d8f8u: goto label_23d8f8;
        case 0x23d8fcu: goto label_23d8fc;
        case 0x23d900u: goto label_23d900;
        case 0x23d904u: goto label_23d904;
        case 0x23d908u: goto label_23d908;
        case 0x23d90cu: goto label_23d90c;
        case 0x23d910u: goto label_23d910;
        case 0x23d914u: goto label_23d914;
        case 0x23d918u: goto label_23d918;
        case 0x23d91cu: goto label_23d91c;
        case 0x23d920u: goto label_23d920;
        case 0x23d924u: goto label_23d924;
        case 0x23d928u: goto label_23d928;
        case 0x23d92cu: goto label_23d92c;
        case 0x23d930u: goto label_23d930;
        case 0x23d934u: goto label_23d934;
        case 0x23d938u: goto label_23d938;
        case 0x23d93cu: goto label_23d93c;
        case 0x23d940u: goto label_23d940;
        case 0x23d944u: goto label_23d944;
        case 0x23d948u: goto label_23d948;
        case 0x23d94cu: goto label_23d94c;
        case 0x23d950u: goto label_23d950;
        case 0x23d954u: goto label_23d954;
        case 0x23d958u: goto label_23d958;
        case 0x23d95cu: goto label_23d95c;
        case 0x23d960u: goto label_23d960;
        case 0x23d964u: goto label_23d964;
        case 0x23d968u: goto label_23d968;
        case 0x23d96cu: goto label_23d96c;
        case 0x23d970u: goto label_23d970;
        case 0x23d974u: goto label_23d974;
        case 0x23d978u: goto label_23d978;
        case 0x23d97cu: goto label_23d97c;
        case 0x23d980u: goto label_23d980;
        case 0x23d984u: goto label_23d984;
        case 0x23d988u: goto label_23d988;
        case 0x23d98cu: goto label_23d98c;
        case 0x23d990u: goto label_23d990;
        case 0x23d994u: goto label_23d994;
        case 0x23d998u: goto label_23d998;
        case 0x23d99cu: goto label_23d99c;
        case 0x23d9a0u: goto label_23d9a0;
        case 0x23d9a4u: goto label_23d9a4;
        case 0x23d9a8u: goto label_23d9a8;
        case 0x23d9acu: goto label_23d9ac;
        case 0x23d9b0u: goto label_23d9b0;
        case 0x23d9b4u: goto label_23d9b4;
        case 0x23d9b8u: goto label_23d9b8;
        case 0x23d9bcu: goto label_23d9bc;
        case 0x23d9c0u: goto label_23d9c0;
        case 0x23d9c4u: goto label_23d9c4;
        case 0x23d9c8u: goto label_23d9c8;
        case 0x23d9ccu: goto label_23d9cc;
        case 0x23d9d0u: goto label_23d9d0;
        case 0x23d9d4u: goto label_23d9d4;
        case 0x23d9d8u: goto label_23d9d8;
        case 0x23d9dcu: goto label_23d9dc;
        case 0x23d9e0u: goto label_23d9e0;
        case 0x23d9e4u: goto label_23d9e4;
        case 0x23d9e8u: goto label_23d9e8;
        case 0x23d9ecu: goto label_23d9ec;
        case 0x23d9f0u: goto label_23d9f0;
        case 0x23d9f4u: goto label_23d9f4;
        case 0x23d9f8u: goto label_23d9f8;
        case 0x23d9fcu: goto label_23d9fc;
        case 0x23da00u: goto label_23da00;
        case 0x23da04u: goto label_23da04;
        case 0x23da08u: goto label_23da08;
        case 0x23da0cu: goto label_23da0c;
        case 0x23da10u: goto label_23da10;
        case 0x23da14u: goto label_23da14;
        case 0x23da18u: goto label_23da18;
        case 0x23da1cu: goto label_23da1c;
        case 0x23da20u: goto label_23da20;
        case 0x23da24u: goto label_23da24;
        case 0x23da28u: goto label_23da28;
        case 0x23da2cu: goto label_23da2c;
        case 0x23da30u: goto label_23da30;
        case 0x23da34u: goto label_23da34;
        case 0x23da38u: goto label_23da38;
        case 0x23da3cu: goto label_23da3c;
        case 0x23da40u: goto label_23da40;
        case 0x23da44u: goto label_23da44;
        case 0x23da48u: goto label_23da48;
        case 0x23da4cu: goto label_23da4c;
        case 0x23da50u: goto label_23da50;
        case 0x23da54u: goto label_23da54;
        case 0x23da58u: goto label_23da58;
        case 0x23da5cu: goto label_23da5c;
        case 0x23da60u: goto label_23da60;
        case 0x23da64u: goto label_23da64;
        case 0x23da68u: goto label_23da68;
        case 0x23da6cu: goto label_23da6c;
        case 0x23da70u: goto label_23da70;
        case 0x23da74u: goto label_23da74;
        case 0x23da78u: goto label_23da78;
        case 0x23da7cu: goto label_23da7c;
        case 0x23da80u: goto label_23da80;
        case 0x23da84u: goto label_23da84;
        case 0x23da88u: goto label_23da88;
        case 0x23da8cu: goto label_23da8c;
        case 0x23da90u: goto label_23da90;
        case 0x23da94u: goto label_23da94;
        case 0x23da98u: goto label_23da98;
        case 0x23da9cu: goto label_23da9c;
        case 0x23daa0u: goto label_23daa0;
        case 0x23daa4u: goto label_23daa4;
        case 0x23daa8u: goto label_23daa8;
        case 0x23daacu: goto label_23daac;
        case 0x23dab0u: goto label_23dab0;
        case 0x23dab4u: goto label_23dab4;
        case 0x23dab8u: goto label_23dab8;
        case 0x23dabcu: goto label_23dabc;
        case 0x23dac0u: goto label_23dac0;
        case 0x23dac4u: goto label_23dac4;
        case 0x23dac8u: goto label_23dac8;
        case 0x23daccu: goto label_23dacc;
        case 0x23dad0u: goto label_23dad0;
        case 0x23dad4u: goto label_23dad4;
        case 0x23dad8u: goto label_23dad8;
        case 0x23dadcu: goto label_23dadc;
        case 0x23dae0u: goto label_23dae0;
        case 0x23dae4u: goto label_23dae4;
        case 0x23dae8u: goto label_23dae8;
        case 0x23daecu: goto label_23daec;
        case 0x23daf0u: goto label_23daf0;
        case 0x23daf4u: goto label_23daf4;
        case 0x23daf8u: goto label_23daf8;
        case 0x23dafcu: goto label_23dafc;
        case 0x23db00u: goto label_23db00;
        case 0x23db04u: goto label_23db04;
        case 0x23db08u: goto label_23db08;
        case 0x23db0cu: goto label_23db0c;
        case 0x23db10u: goto label_23db10;
        case 0x23db14u: goto label_23db14;
        case 0x23db18u: goto label_23db18;
        case 0x23db1cu: goto label_23db1c;
        case 0x23db20u: goto label_23db20;
        case 0x23db24u: goto label_23db24;
        case 0x23db28u: goto label_23db28;
        case 0x23db2cu: goto label_23db2c;
        case 0x23db30u: goto label_23db30;
        case 0x23db34u: goto label_23db34;
        case 0x23db38u: goto label_23db38;
        case 0x23db3cu: goto label_23db3c;
        case 0x23db40u: goto label_23db40;
        case 0x23db44u: goto label_23db44;
        case 0x23db48u: goto label_23db48;
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db54u: goto label_23db54;
        case 0x23db58u: goto label_23db58;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23db64u: goto label_23db64;
        case 0x23db68u: goto label_23db68;
        case 0x23db6cu: goto label_23db6c;
        case 0x23db70u: goto label_23db70;
        case 0x23db74u: goto label_23db74;
        case 0x23db78u: goto label_23db78;
        case 0x23db7cu: goto label_23db7c;
        case 0x23db80u: goto label_23db80;
        case 0x23db84u: goto label_23db84;
        case 0x23db88u: goto label_23db88;
        case 0x23db8cu: goto label_23db8c;
        case 0x23db90u: goto label_23db90;
        case 0x23db94u: goto label_23db94;
        case 0x23db98u: goto label_23db98;
        case 0x23db9cu: goto label_23db9c;
        case 0x23dba0u: goto label_23dba0;
        case 0x23dba4u: goto label_23dba4;
        case 0x23dba8u: goto label_23dba8;
        case 0x23dbacu: goto label_23dbac;
        case 0x23dbb0u: goto label_23dbb0;
        case 0x23dbb4u: goto label_23dbb4;
        case 0x23dbb8u: goto label_23dbb8;
        case 0x23dbbcu: goto label_23dbbc;
        case 0x23dbc0u: goto label_23dbc0;
        case 0x23dbc4u: goto label_23dbc4;
        case 0x23dbc8u: goto label_23dbc8;
        case 0x23dbccu: goto label_23dbcc;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbd4u: goto label_23dbd4;
        case 0x23dbd8u: goto label_23dbd8;
        case 0x23dbdcu: goto label_23dbdc;
        case 0x23dbe0u: goto label_23dbe0;
        case 0x23dbe4u: goto label_23dbe4;
        case 0x23dbe8u: goto label_23dbe8;
        case 0x23dbecu: goto label_23dbec;
        case 0x23dbf0u: goto label_23dbf0;
        case 0x23dbf4u: goto label_23dbf4;
        case 0x23dbf8u: goto label_23dbf8;
        case 0x23dbfcu: goto label_23dbfc;
        case 0x23dc00u: goto label_23dc00;
        case 0x23dc04u: goto label_23dc04;
        case 0x23dc08u: goto label_23dc08;
        case 0x23dc0cu: goto label_23dc0c;
        case 0x23dc10u: goto label_23dc10;
        case 0x23dc14u: goto label_23dc14;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc1cu: goto label_23dc1c;
        case 0x23dc20u: goto label_23dc20;
        case 0x23dc24u: goto label_23dc24;
        case 0x23dc28u: goto label_23dc28;
        case 0x23dc2cu: goto label_23dc2c;
        case 0x23dc30u: goto label_23dc30;
        case 0x23dc34u: goto label_23dc34;
        case 0x23dc38u: goto label_23dc38;
        case 0x23dc3cu: goto label_23dc3c;
        case 0x23dc40u: goto label_23dc40;
        case 0x23dc44u: goto label_23dc44;
        case 0x23dc48u: goto label_23dc48;
        case 0x23dc4cu: goto label_23dc4c;
        case 0x23dc50u: goto label_23dc50;
        case 0x23dc54u: goto label_23dc54;
        case 0x23dc58u: goto label_23dc58;
        case 0x23dc5cu: goto label_23dc5c;
        case 0x23dc60u: goto label_23dc60;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dc6cu: goto label_23dc6c;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        case 0x23dc84u: goto label_23dc84;
        case 0x23dc88u: goto label_23dc88;
        case 0x23dc8cu: goto label_23dc8c;
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        case 0x23ddb8u: goto label_23ddb8;
        case 0x23ddbcu: goto label_23ddbc;
        case 0x23ddc0u: goto label_23ddc0;
        case 0x23ddc4u: goto label_23ddc4;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23ddccu: goto label_23ddcc;
        case 0x23ddd0u: goto label_23ddd0;
        case 0x23ddd4u: goto label_23ddd4;
        case 0x23ddd8u: goto label_23ddd8;
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde0u: goto label_23dde0;
        case 0x23dde4u: goto label_23dde4;
        case 0x23dde8u: goto label_23dde8;
        case 0x23ddecu: goto label_23ddec;
        case 0x23ddf0u: goto label_23ddf0;
        case 0x23ddf4u: goto label_23ddf4;
        case 0x23ddf8u: goto label_23ddf8;
        case 0x23ddfcu: goto label_23ddfc;
        case 0x23de00u: goto label_23de00;
        case 0x23de04u: goto label_23de04;
        case 0x23de08u: goto label_23de08;
        case 0x23de0cu: goto label_23de0c;
        case 0x23de10u: goto label_23de10;
        case 0x23de14u: goto label_23de14;
        case 0x23de18u: goto label_23de18;
        case 0x23de1cu: goto label_23de1c;
        case 0x23de20u: goto label_23de20;
        case 0x23de24u: goto label_23de24;
        case 0x23de28u: goto label_23de28;
        case 0x23de2cu: goto label_23de2c;
        case 0x23de30u: goto label_23de30;
        case 0x23de34u: goto label_23de34;
        case 0x23de38u: goto label_23de38;
        case 0x23de3cu: goto label_23de3c;
        case 0x23de40u: goto label_23de40;
        case 0x23de44u: goto label_23de44;
        case 0x23de48u: goto label_23de48;
        case 0x23de4cu: goto label_23de4c;
        case 0x23de50u: goto label_23de50;
        case 0x23de54u: goto label_23de54;
        case 0x23de58u: goto label_23de58;
        case 0x23de5cu: goto label_23de5c;
        case 0x23de60u: goto label_23de60;
        case 0x23de64u: goto label_23de64;
        case 0x23de68u: goto label_23de68;
        case 0x23de6cu: goto label_23de6c;
        case 0x23de70u: goto label_23de70;
        case 0x23de74u: goto label_23de74;
        case 0x23de78u: goto label_23de78;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de80u: goto label_23de80;
        case 0x23de84u: goto label_23de84;
        case 0x23de88u: goto label_23de88;
        case 0x23de8cu: goto label_23de8c;
        case 0x23de90u: goto label_23de90;
        case 0x23de94u: goto label_23de94;
        case 0x23de98u: goto label_23de98;
        case 0x23de9cu: goto label_23de9c;
        case 0x23dea0u: goto label_23dea0;
        case 0x23dea4u: goto label_23dea4;
        case 0x23dea8u: goto label_23dea8;
        case 0x23deacu: goto label_23deac;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deb4u: goto label_23deb4;
        case 0x23deb8u: goto label_23deb8;
        case 0x23debcu: goto label_23debc;
        case 0x23dec0u: goto label_23dec0;
        case 0x23dec4u: goto label_23dec4;
        case 0x23dec8u: goto label_23dec8;
        case 0x23deccu: goto label_23decc;
        case 0x23ded0u: goto label_23ded0;
        case 0x23ded4u: goto label_23ded4;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dedcu: goto label_23dedc;
        case 0x23dee0u: goto label_23dee0;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dee8u: goto label_23dee8;
        case 0x23deecu: goto label_23deec;
        case 0x23def0u: goto label_23def0;
        case 0x23def4u: goto label_23def4;
        case 0x23def8u: goto label_23def8;
        case 0x23defcu: goto label_23defc;
        case 0x23df00u: goto label_23df00;
        case 0x23df04u: goto label_23df04;
        case 0x23df08u: goto label_23df08;
        case 0x23df0cu: goto label_23df0c;
        case 0x23df10u: goto label_23df10;
        case 0x23df14u: goto label_23df14;
        case 0x23df18u: goto label_23df18;
        case 0x23df1cu: goto label_23df1c;
        case 0x23df20u: goto label_23df20;
        case 0x23df24u: goto label_23df24;
        case 0x23df28u: goto label_23df28;
        case 0x23df2cu: goto label_23df2c;
        case 0x23df30u: goto label_23df30;
        case 0x23df34u: goto label_23df34;
        case 0x23df38u: goto label_23df38;
        case 0x23df3cu: goto label_23df3c;
        case 0x23df40u: goto label_23df40;
        case 0x23df44u: goto label_23df44;
        case 0x23df48u: goto label_23df48;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df50u: goto label_23df50;
        case 0x23df54u: goto label_23df54;
        case 0x23df58u: goto label_23df58;
        case 0x23df5cu: goto label_23df5c;
        case 0x23df60u: goto label_23df60;
        case 0x23df64u: goto label_23df64;
        case 0x23df68u: goto label_23df68;
        case 0x23df6cu: goto label_23df6c;
        case 0x23df70u: goto label_23df70;
        case 0x23df74u: goto label_23df74;
        case 0x23df78u: goto label_23df78;
        case 0x23df7cu: goto label_23df7c;
        case 0x23df80u: goto label_23df80;
        case 0x23df84u: goto label_23df84;
        case 0x23df88u: goto label_23df88;
        case 0x23df8cu: goto label_23df8c;
        case 0x23df90u: goto label_23df90;
        case 0x23df94u: goto label_23df94;
        case 0x23df98u: goto label_23df98;
        case 0x23df9cu: goto label_23df9c;
        case 0x23dfa0u: goto label_23dfa0;
        case 0x23dfa4u: goto label_23dfa4;
        case 0x23dfa8u: goto label_23dfa8;
        case 0x23dfacu: goto label_23dfac;
        case 0x23dfb0u: goto label_23dfb0;
        case 0x23dfb4u: goto label_23dfb4;
        case 0x23dfb8u: goto label_23dfb8;
        case 0x23dfbcu: goto label_23dfbc;
        case 0x23dfc0u: goto label_23dfc0;
        case 0x23dfc4u: goto label_23dfc4;
        case 0x23dfc8u: goto label_23dfc8;
        case 0x23dfccu: goto label_23dfcc;
        case 0x23dfd0u: goto label_23dfd0;
        case 0x23dfd4u: goto label_23dfd4;
        case 0x23dfd8u: goto label_23dfd8;
        case 0x23dfdcu: goto label_23dfdc;
        case 0x23dfe0u: goto label_23dfe0;
        case 0x23dfe4u: goto label_23dfe4;
        case 0x23dfe8u: goto label_23dfe8;
        case 0x23dfecu: goto label_23dfec;
        case 0x23dff0u: goto label_23dff0;
        case 0x23dff4u: goto label_23dff4;
        case 0x23dff8u: goto label_23dff8;
        case 0x23dffcu: goto label_23dffc;
        case 0x23e000u: goto label_23e000;
        case 0x23e004u: goto label_23e004;
        case 0x23e008u: goto label_23e008;
        case 0x23e00cu: goto label_23e00c;
        case 0x23e010u: goto label_23e010;
        case 0x23e014u: goto label_23e014;
        case 0x23e018u: goto label_23e018;
        case 0x23e01cu: goto label_23e01c;
        case 0x23e020u: goto label_23e020;
        case 0x23e024u: goto label_23e024;
        case 0x23e028u: goto label_23e028;
        case 0x23e02cu: goto label_23e02c;
        case 0x23e030u: goto label_23e030;
        case 0x23e034u: goto label_23e034;
        case 0x23e038u: goto label_23e038;
        case 0x23e03cu: goto label_23e03c;
        case 0x23e040u: goto label_23e040;
        case 0x23e044u: goto label_23e044;
        case 0x23e048u: goto label_23e048;
        case 0x23e04cu: goto label_23e04c;
        case 0x23e050u: goto label_23e050;
        case 0x23e054u: goto label_23e054;
        case 0x23e058u: goto label_23e058;
        case 0x23e05cu: goto label_23e05c;
        case 0x23e060u: goto label_23e060;
        case 0x23e064u: goto label_23e064;
        case 0x23e068u: goto label_23e068;
        case 0x23e06cu: goto label_23e06c;
        case 0x23e070u: goto label_23e070;
        case 0x23e074u: goto label_23e074;
        case 0x23e078u: goto label_23e078;
        case 0x23e07cu: goto label_23e07c;
        case 0x23e080u: goto label_23e080;
        case 0x23e084u: goto label_23e084;
        case 0x23e088u: goto label_23e088;
        case 0x23e08cu: goto label_23e08c;
        case 0x23e090u: goto label_23e090;
        case 0x23e094u: goto label_23e094;
        case 0x23e098u: goto label_23e098;
        case 0x23e09cu: goto label_23e09c;
        case 0x23e0a0u: goto label_23e0a0;
        case 0x23e0a4u: goto label_23e0a4;
        case 0x23e0a8u: goto label_23e0a8;
        case 0x23e0acu: goto label_23e0ac;
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e0b4u: goto label_23e0b4;
        case 0x23e0b8u: goto label_23e0b8;
        case 0x23e0bcu: goto label_23e0bc;
        case 0x23e0c0u: goto label_23e0c0;
        case 0x23e0c4u: goto label_23e0c4;
        case 0x23e0c8u: goto label_23e0c8;
        case 0x23e0ccu: goto label_23e0cc;
        case 0x23e0d0u: goto label_23e0d0;
        case 0x23e0d4u: goto label_23e0d4;
        case 0x23e0d8u: goto label_23e0d8;
        case 0x23e0dcu: goto label_23e0dc;
        case 0x23e0e0u: goto label_23e0e0;
        case 0x23e0e4u: goto label_23e0e4;
        case 0x23e0e8u: goto label_23e0e8;
        case 0x23e0ecu: goto label_23e0ec;
        case 0x23e0f0u: goto label_23e0f0;
        case 0x23e0f4u: goto label_23e0f4;
        case 0x23e0f8u: goto label_23e0f8;
        case 0x23e0fcu: goto label_23e0fc;
        case 0x23e100u: goto label_23e100;
        case 0x23e104u: goto label_23e104;
        case 0x23e108u: goto label_23e108;
        case 0x23e10cu: goto label_23e10c;
        case 0x23e110u: goto label_23e110;
        case 0x23e114u: goto label_23e114;
        case 0x23e118u: goto label_23e118;
        case 0x23e11cu: goto label_23e11c;
        case 0x23e120u: goto label_23e120;
        case 0x23e124u: goto label_23e124;
        case 0x23e128u: goto label_23e128;
        case 0x23e12cu: goto label_23e12c;
        case 0x23e130u: goto label_23e130;
        case 0x23e134u: goto label_23e134;
        case 0x23e138u: goto label_23e138;
        case 0x23e13cu: goto label_23e13c;
        case 0x23e140u: goto label_23e140;
        case 0x23e144u: goto label_23e144;
        case 0x23e148u: goto label_23e148;
        case 0x23e14cu: goto label_23e14c;
        case 0x23e150u: goto label_23e150;
        case 0x23e154u: goto label_23e154;
        case 0x23e158u: goto label_23e158;
        case 0x23e15cu: goto label_23e15c;
        case 0x23e160u: goto label_23e160;
        case 0x23e164u: goto label_23e164;
        case 0x23e168u: goto label_23e168;
        case 0x23e16cu: goto label_23e16c;
        case 0x23e170u: goto label_23e170;
        case 0x23e174u: goto label_23e174;
        case 0x23e178u: goto label_23e178;
        case 0x23e17cu: goto label_23e17c;
        case 0x23e180u: goto label_23e180;
        case 0x23e184u: goto label_23e184;
        case 0x23e188u: goto label_23e188;
        case 0x23e18cu: goto label_23e18c;
        case 0x23e190u: goto label_23e190;
        case 0x23e194u: goto label_23e194;
        case 0x23e198u: goto label_23e198;
        case 0x23e19cu: goto label_23e19c;
        case 0x23e1a0u: goto label_23e1a0;
        case 0x23e1a4u: goto label_23e1a4;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1acu: goto label_23e1ac;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1b4u: goto label_23e1b4;
        case 0x23e1b8u: goto label_23e1b8;
        case 0x23e1bcu: goto label_23e1bc;
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c4u: goto label_23e1c4;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1d0u: goto label_23e1d0;
        case 0x23e1d4u: goto label_23e1d4;
        case 0x23e1d8u: goto label_23e1d8;
        case 0x23e1dcu: goto label_23e1dc;
        case 0x23e1e0u: goto label_23e1e0;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e1e8u: goto label_23e1e8;
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e1f0u: goto label_23e1f0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e200u: goto label_23e200;
        case 0x23e204u: goto label_23e204;
        case 0x23e208u: goto label_23e208;
        case 0x23e20cu: goto label_23e20c;
        case 0x23e210u: goto label_23e210;
        case 0x23e214u: goto label_23e214;
        case 0x23e218u: goto label_23e218;
        case 0x23e21cu: goto label_23e21c;
        case 0x23e220u: goto label_23e220;
        case 0x23e224u: goto label_23e224;
        case 0x23e228u: goto label_23e228;
        case 0x23e22cu: goto label_23e22c;
        case 0x23e230u: goto label_23e230;
        case 0x23e234u: goto label_23e234;
        case 0x23e238u: goto label_23e238;
        case 0x23e23cu: goto label_23e23c;
        case 0x23e240u: goto label_23e240;
        case 0x23e244u: goto label_23e244;
        case 0x23e248u: goto label_23e248;
        case 0x23e24cu: goto label_23e24c;
        case 0x23e250u: goto label_23e250;
        case 0x23e254u: goto label_23e254;
        case 0x23e258u: goto label_23e258;
        case 0x23e25cu: goto label_23e25c;
        case 0x23e260u: goto label_23e260;
        case 0x23e264u: goto label_23e264;
        case 0x23e268u: goto label_23e268;
        case 0x23e26cu: goto label_23e26c;
        case 0x23e270u: goto label_23e270;
        case 0x23e274u: goto label_23e274;
        case 0x23e278u: goto label_23e278;
        case 0x23e27cu: goto label_23e27c;
        case 0x23e280u: goto label_23e280;
        case 0x23e284u: goto label_23e284;
        case 0x23e288u: goto label_23e288;
        case 0x23e28cu: goto label_23e28c;
        case 0x23e290u: goto label_23e290;
        case 0x23e294u: goto label_23e294;
        case 0x23e298u: goto label_23e298;
        case 0x23e29cu: goto label_23e29c;
        case 0x23e2a0u: goto label_23e2a0;
        case 0x23e2a4u: goto label_23e2a4;
        case 0x23e2a8u: goto label_23e2a8;
        case 0x23e2acu: goto label_23e2ac;
        case 0x23e2b0u: goto label_23e2b0;
        case 0x23e2b4u: goto label_23e2b4;
        case 0x23e2b8u: goto label_23e2b8;
        case 0x23e2bcu: goto label_23e2bc;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2c4u: goto label_23e2c4;
        case 0x23e2c8u: goto label_23e2c8;
        case 0x23e2ccu: goto label_23e2cc;
        case 0x23e2d0u: goto label_23e2d0;
        case 0x23e2d4u: goto label_23e2d4;
        case 0x23e2d8u: goto label_23e2d8;
        case 0x23e2dcu: goto label_23e2dc;
        case 0x23e2e0u: goto label_23e2e0;
        case 0x23e2e4u: goto label_23e2e4;
        case 0x23e2e8u: goto label_23e2e8;
        case 0x23e2ecu: goto label_23e2ec;
        case 0x23e2f0u: goto label_23e2f0;
        case 0x23e2f4u: goto label_23e2f4;
        case 0x23e2f8u: goto label_23e2f8;
        case 0x23e2fcu: goto label_23e2fc;
        case 0x23e300u: goto label_23e300;
        case 0x23e304u: goto label_23e304;
        case 0x23e308u: goto label_23e308;
        case 0x23e30cu: goto label_23e30c;
        case 0x23e310u: goto label_23e310;
        case 0x23e314u: goto label_23e314;
        case 0x23e318u: goto label_23e318;
        case 0x23e31cu: goto label_23e31c;
        case 0x23e320u: goto label_23e320;
        case 0x23e324u: goto label_23e324;
        case 0x23e328u: goto label_23e328;
        case 0x23e32cu: goto label_23e32c;
        case 0x23e330u: goto label_23e330;
        case 0x23e334u: goto label_23e334;
        case 0x23e338u: goto label_23e338;
        case 0x23e33cu: goto label_23e33c;
        case 0x23e340u: goto label_23e340;
        case 0x23e344u: goto label_23e344;
        case 0x23e348u: goto label_23e348;
        case 0x23e34cu: goto label_23e34c;
        case 0x23e350u: goto label_23e350;
        case 0x23e354u: goto label_23e354;
        case 0x23e358u: goto label_23e358;
        case 0x23e35cu: goto label_23e35c;
        case 0x23e360u: goto label_23e360;
        case 0x23e364u: goto label_23e364;
        case 0x23e368u: goto label_23e368;
        case 0x23e36cu: goto label_23e36c;
        case 0x23e370u: goto label_23e370;
        case 0x23e374u: goto label_23e374;
        case 0x23e378u: goto label_23e378;
        case 0x23e37cu: goto label_23e37c;
        case 0x23e380u: goto label_23e380;
        case 0x23e384u: goto label_23e384;
        case 0x23e388u: goto label_23e388;
        case 0x23e38cu: goto label_23e38c;
        case 0x23e390u: goto label_23e390;
        case 0x23e394u: goto label_23e394;
        case 0x23e398u: goto label_23e398;
        case 0x23e39cu: goto label_23e39c;
        case 0x23e3a0u: goto label_23e3a0;
        case 0x23e3a4u: goto label_23e3a4;
        case 0x23e3a8u: goto label_23e3a8;
        case 0x23e3acu: goto label_23e3ac;
        case 0x23e3b0u: goto label_23e3b0;
        case 0x23e3b4u: goto label_23e3b4;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e3bcu: goto label_23e3bc;
        case 0x23e3c0u: goto label_23e3c0;
        case 0x23e3c4u: goto label_23e3c4;
        case 0x23e3c8u: goto label_23e3c8;
        case 0x23e3ccu: goto label_23e3cc;
        case 0x23e3d0u: goto label_23e3d0;
        case 0x23e3d4u: goto label_23e3d4;
        case 0x23e3d8u: goto label_23e3d8;
        case 0x23e3dcu: goto label_23e3dc;
        case 0x23e3e0u: goto label_23e3e0;
        case 0x23e3e4u: goto label_23e3e4;
        case 0x23e3e8u: goto label_23e3e8;
        case 0x23e3ecu: goto label_23e3ec;
        case 0x23e3f0u: goto label_23e3f0;
        case 0x23e3f4u: goto label_23e3f4;
        case 0x23e3f8u: goto label_23e3f8;
        case 0x23e3fcu: goto label_23e3fc;
        case 0x23e400u: goto label_23e400;
        case 0x23e404u: goto label_23e404;
        case 0x23e408u: goto label_23e408;
        case 0x23e40cu: goto label_23e40c;
        case 0x23e410u: goto label_23e410;
        case 0x23e414u: goto label_23e414;
        case 0x23e418u: goto label_23e418;
        case 0x23e41cu: goto label_23e41c;
        case 0x23e420u: goto label_23e420;
        case 0x23e424u: goto label_23e424;
        default: break;
    }

    ctx->pc = 0x23d498u;

label_23d498:
    // 0x23d498: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23d498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d49c:
    // 0x23d49c: 0x244402dc  addiu       $a0, $v0, 0x2DC
    ctx->pc = 0x23d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 732));
label_23d4a0:
    // 0x23d4a0: 0xac4002b0  sw          $zero, 0x2B0($v0)
    ctx->pc = 0x23d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
label_23d4a4:
    // 0x23d4a4: 0xac4002b4  sw          $zero, 0x2B4($v0)
    ctx->pc = 0x23d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
label_23d4a8:
    // 0x23d4a8: 0xac400168  sw          $zero, 0x168($v0)
    ctx->pc = 0x23d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 0));
label_23d4ac:
    // 0x23d4ac: 0xac40019c  sw          $zero, 0x19C($v0)
    ctx->pc = 0x23d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 412), GPR_U32(ctx, 0));
label_23d4b0:
    // 0x23d4b0: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x23d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
label_23d4b4:
    // 0x23d4b4: 0x80917b4  j           func_245ED0
label_23d4b8:
    if (ctx->pc == 0x23D4B8u) {
        ctx->pc = 0x23D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4B4u;
        // 0x23d4b8: 0xac400150  sw          $zero, 0x150($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4BCu;
        goto label_23d4bc;
    }
    ctx->pc = 0x23D4B4u;
    ctx->pc = 0x23D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4B4u;
    // 0x23d4b8: 0xac400150  sw          $zero, 0x150($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245ED0u, 0x23D4B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23D4BCu;
label_23d4bc:
    // 0x23d4bc: 0x0  nop
    ctx->pc = 0x23d4bcu;
    // NOP
label_23d4c0:
    // 0x23d4c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d4c4:
    // 0x23d4c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23d4c8:
    // 0x23d4c8: 0x808ecbc  j           func_23B2F0
label_23d4cc:
    if (ctx->pc == 0x23D4CCu) {
        ctx->pc = 0x23D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C8u;
        // 0x23d4cc: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4D0u;
        goto label_23d4d0;
    }
    ctx->pc = 0x23D4C8u;
    ctx->pc = 0x23D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4C8u;
    // 0x23d4cc: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B2F0u, 0x23D4C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23D4D0u;
label_23d4d0:
    // 0x23d4d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d4d4:
    // 0x23d4d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23d4d8:
    // 0x23d4d8: 0x808ed18  j           func_23B460
label_23d4dc:
    if (ctx->pc == 0x23D4DCu) {
        ctx->pc = 0x23D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4D8u;
        // 0x23d4dc: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4E0u;
        goto label_23d4e0;
    }
    ctx->pc = 0x23D4D8u;
    ctx->pc = 0x23D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4D8u;
    // 0x23d4dc: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B460u;
    sub_0023B460_0x23b460(rdram, ctx, runtime); return;
    ctx->pc = 0x23D4E0u;
label_23d4e0:
    // 0x23d4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d4e4:
    // 0x23d4e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23d4e8:
    // 0x23d4e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23d4ec:
    // 0x23d4ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d4f0:
    // 0x23d4f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23d4f4:
    // 0x23d4f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d4f8:
    // 0x23d4f8: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x23d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
label_23d4fc:
    // 0x23d4fc: 0x922245f0  lbu         $v0, 0x45F0($s1)
    ctx->pc = 0x23d4fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17904)));
label_23d500:
    // 0x23d500: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23d504:
    if (ctx->pc == 0x23D504u) {
        ctx->pc = 0x23D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D500u;
        // 0x23d504: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D508u;
        goto label_23d508;
    }
    ctx->pc = 0x23D500u;
    {
        const bool branch_taken_0x23d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d500) {
            ctx->pc = 0x23D504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D500u;
            // 0x23d504: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D518u;
            goto label_23d518;
        }
    }
    ctx->pc = 0x23D508u;
label_23d508:
    // 0x23d508: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_23d50c:
    // 0x23d50c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_23d510:
    // 0x23d510: 0x10000005  b           . + 4 + (0x5 << 2)
label_23d514:
    if (ctx->pc == 0x23D514u) {
        ctx->pc = 0x23D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D510u;
        // 0x23d514: 0xae2202b0  sw          $v0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D518u;
        goto label_23d518;
    }
    ctx->pc = 0x23D510u;
    {
        const bool branch_taken_0x23d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D510u;
        // 0x23d514: 0xae2202b0  sw          $v0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d510) {
            ctx->pc = 0x23D528u;
            goto label_23d528;
        }
    }
    ctx->pc = 0x23D518u;
label_23d518:
    // 0x23d518: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23d518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23d51c:
    // 0x23d51c: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x23d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_23d520:
    // 0x23d520: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23d524:
    // 0x23d524: 0xae2302b0  sw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 3));
label_23d528:
    // 0x23d528: 0xc09921a  jal         func_264868
label_23d52c:
    if (ctx->pc == 0x23D52Cu) {
        ctx->pc = 0x23D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D528u;
        // 0x23d52c: 0x262445f1  addiu       $a0, $s1, 0x45F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17905));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D530u;
        goto label_23d530;
    }
    ctx->pc = 0x23D528u;
    SET_GPR_U32(ctx, 31, 0x23D530u);
    ctx->pc = 0x23D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D528u;
    // 0x23d52c: 0x262445f1  addiu       $a0, $s1, 0x45F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17905));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x23D528u, 0x23D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D530u;
label_23d530:
    // 0x23d530: 0xc08b5fe  jal         func_22D7F8
label_23d534:
    if (ctx->pc == 0x23D534u) {
        ctx->pc = 0x23D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D530u;
        // 0x23d534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D538u;
        goto label_23d538;
    }
    ctx->pc = 0x23D530u;
    SET_GPR_U32(ctx, 31, 0x23D538u);
    ctx->pc = 0x23D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D530u;
    // 0x23d534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D530u, 0x23D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D538u;
label_23d538:
    // 0x23d538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d53c:
    // 0x23d53c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23d540:
    // 0x23d540: 0xae3002b8  sw          $s0, 0x2B8($s1)
    ctx->pc = 0x23d540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 16));
label_23d544:
    // 0x23d544: 0xc08b5fe  jal         func_22D7F8
label_23d548:
    if (ctx->pc == 0x23D548u) {
        ctx->pc = 0x23D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D544u;
        // 0x23d548: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D54Cu;
        goto label_23d54c;
    }
    ctx->pc = 0x23D544u;
    SET_GPR_U32(ctx, 31, 0x23D54Cu);
    ctx->pc = 0x23D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D544u;
    // 0x23d548: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D544u, 0x23D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D54Cu;
label_23d54c:
    // 0x23d54c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23d54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d550:
    // 0x23d550: 0x52120001  beql        $s0, $s2, . + 4 + (0x1 << 2)
label_23d554:
    if (ctx->pc == 0x23D554u) {
        ctx->pc = 0x23D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D550u;
        // 0x23d554: 0xae2002b8  sw          $zero, 0x2B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D558u;
        goto label_23d558;
    }
    ctx->pc = 0x23D550u;
    {
        const bool branch_taken_0x23d550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x23d550) {
            ctx->pc = 0x23D554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D550u;
            // 0x23d554: 0xae2002b8  sw          $zero, 0x2B8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D558u;
            goto label_23d558;
        }
    }
    ctx->pc = 0x23D558u;
label_23d558:
    // 0x23d558: 0xc09921a  jal         func_264868
label_23d55c:
    if (ctx->pc == 0x23D55Cu) {
        ctx->pc = 0x23D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D558u;
        // 0x23d55c: 0x26244a09  addiu       $a0, $s1, 0x4A09 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18953));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D560u;
        goto label_23d560;
    }
    ctx->pc = 0x23D558u;
    SET_GPR_U32(ctx, 31, 0x23D560u);
    ctx->pc = 0x23D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D558u;
    // 0x23d55c: 0x26244a09  addiu       $a0, $s1, 0x4A09 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18953));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x23D558u, 0x23D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D560u;
label_23d560:
    // 0x23d560: 0xc08b5fe  jal         func_22D7F8
label_23d564:
    if (ctx->pc == 0x23D564u) {
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D568u;
        goto label_23d568;
    }
    ctx->pc = 0x23D560u;
    SET_GPR_U32(ctx, 31, 0x23D568u);
    ctx->pc = 0x23D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D560u;
    // 0x23d564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D560u, 0x23D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D568u;
label_23d568:
    // 0x23d568: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
label_23d56c:
    if (ctx->pc == 0x23D56Cu) {
        ctx->pc = 0x23D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D568u;
        // 0x23d56c: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D570u;
        goto label_23d570;
    }
    ctx->pc = 0x23D568u;
    {
        const bool branch_taken_0x23d568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x23D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D568u;
        // 0x23d56c: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d568) {
            ctx->pc = 0x23D574u;
            goto label_23d574;
        }
    }
    ctx->pc = 0x23D570u;
label_23d570:
    // 0x23d570: 0xae2002b8  sw          $zero, 0x2B8($s1)
    ctx->pc = 0x23d570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
label_23d574:
    // 0x23d574: 0x922247f1  lbu         $v0, 0x47F1($s1)
    ctx->pc = 0x23d574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18417)));
label_23d578:
    // 0x23d578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23d57c:
    if (ctx->pc == 0x23D57Cu) {
        ctx->pc = 0x23D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D578u;
        // 0x23d57c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D580u;
        goto label_23d580;
    }
    ctx->pc = 0x23D578u;
    {
        const bool branch_taken_0x23d578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D578u;
        // 0x23d57c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d578) {
            ctx->pc = 0x23D590u;
            goto label_23d590;
        }
    }
    ctx->pc = 0x23D580u;
label_23d580:
    // 0x23d580: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x23d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_23d584:
    // 0x23d584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d588:
    // 0x23d588: 0x10000006  b           . + 4 + (0x6 << 2)
label_23d58c:
    if (ctx->pc == 0x23D58Cu) {
        ctx->pc = 0x23D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D588u;
        // 0x23d58c: 0xae2202b0  sw          $v0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D590u;
        goto label_23d590;
    }
    ctx->pc = 0x23D588u;
    {
        const bool branch_taken_0x23d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D588u;
        // 0x23d58c: 0xae2202b0  sw          $v0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d588) {
            ctx->pc = 0x23D5A4u;
            goto label_23d5a4;
        }
    }
    ctx->pc = 0x23D590u;
label_23d590:
    // 0x23d590: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_23d594:
    // 0x23d594: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x23d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_23d598:
    // 0x23d598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23d59c:
    // 0x23d59c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23d5a0:
    // 0x23d5a0: 0xae2302b0  sw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 3));
label_23d5a4:
    // 0x23d5a4: 0xc09921a  jal         func_264868
label_23d5a8:
    if (ctx->pc == 0x23D5A8u) {
        ctx->pc = 0x23D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5A4u;
        // 0x23d5a8: 0x262447f2  addiu       $a0, $s1, 0x47F2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18418));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5ACu;
        goto label_23d5ac;
    }
    ctx->pc = 0x23D5A4u;
    SET_GPR_U32(ctx, 31, 0x23D5ACu);
    ctx->pc = 0x23D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5A4u;
    // 0x23d5a8: 0x262447f2  addiu       $a0, $s1, 0x47F2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18418));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x23D5A4u, 0x23D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5ACu;
label_23d5ac:
    // 0x23d5ac: 0xc08b5fe  jal         func_22D7F8
label_23d5b0:
    if (ctx->pc == 0x23D5B0u) {
        ctx->pc = 0x23D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5ACu;
        // 0x23d5b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5B4u;
        goto label_23d5b4;
    }
    ctx->pc = 0x23D5ACu;
    SET_GPR_U32(ctx, 31, 0x23D5B4u);
    ctx->pc = 0x23D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5ACu;
    // 0x23d5b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D5ACu, 0x23D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5B4u;
label_23d5b4:
    // 0x23d5b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d5b8:
    // 0x23d5b8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23d5bc:
    // 0x23d5bc: 0xae3002c0  sw          $s0, 0x2C0($s1)
    ctx->pc = 0x23d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 16));
label_23d5c0:
    // 0x23d5c0: 0xc08b5fe  jal         func_22D7F8
label_23d5c4:
    if (ctx->pc == 0x23D5C4u) {
        ctx->pc = 0x23D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5C0u;
        // 0x23d5c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5C8u;
        goto label_23d5c8;
    }
    ctx->pc = 0x23D5C0u;
    SET_GPR_U32(ctx, 31, 0x23D5C8u);
    ctx->pc = 0x23D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5C0u;
    // 0x23d5c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D5C0u, 0x23D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5C8u;
label_23d5c8:
    // 0x23d5c8: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_23d5cc:
    if (ctx->pc == 0x23D5CCu) {
        ctx->pc = 0x23D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5C8u;
        // 0x23d5cc: 0xae2002c0  sw          $zero, 0x2C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5D0u;
        goto label_23d5d0;
    }
    ctx->pc = 0x23D5C8u;
    {
        const bool branch_taken_0x23d5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d5c8) {
            ctx->pc = 0x23D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5C8u;
            // 0x23d5cc: 0xae2002c0  sw          $zero, 0x2C0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5D0u;
            goto label_23d5d0;
        }
    }
    ctx->pc = 0x23D5D0u;
label_23d5d0:
    // 0x23d5d0: 0x922248f2  lbu         $v0, 0x48F2($s1)
    ctx->pc = 0x23d5d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18674)));
label_23d5d4:
    // 0x23d5d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_23d5d8:
    if (ctx->pc == 0x23D5D8u) {
        ctx->pc = 0x23D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5D4u;
        // 0x23d5d8: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5DCu;
        goto label_23d5dc;
    }
    ctx->pc = 0x23D5D4u;
    {
        const bool branch_taken_0x23d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d5d4) {
            ctx->pc = 0x23D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5D4u;
            // 0x23d5d8: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5F0u;
            goto label_23d5f0;
        }
    }
    ctx->pc = 0x23D5DCu;
label_23d5dc:
    // 0x23d5dc: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x23d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_23d5e0:
    // 0x23d5e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23d5e4:
    // 0x23d5e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d5e8:
    // 0x23d5e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_23d5ec:
    if (ctx->pc == 0x23D5ECu) {
        ctx->pc = 0x23D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5E8u;
        // 0x23d5ec: 0xae2202b0  sw          $v0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5F0u;
        goto label_23d5f0;
    }
    ctx->pc = 0x23D5E8u;
    {
        const bool branch_taken_0x23d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5E8u;
        // 0x23d5ec: 0xae2202b0  sw          $v0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5e8) {
            ctx->pc = 0x23D600u;
            goto label_23d600;
        }
    }
    ctx->pc = 0x23D5F0u;
label_23d5f0:
    // 0x23d5f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x23d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_23d5f4:
    // 0x23d5f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23d5f8:
    // 0x23d5f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23d5fc:
    // 0x23d5fc: 0xae2302b0  sw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 3));
label_23d600:
    // 0x23d600: 0xc09921a  jal         func_264868
label_23d604:
    if (ctx->pc == 0x23D604u) {
        ctx->pc = 0x23D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D600u;
        // 0x23d604: 0x262448f3  addiu       $a0, $s1, 0x48F3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18675));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D608u;
        goto label_23d608;
    }
    ctx->pc = 0x23D600u;
    SET_GPR_U32(ctx, 31, 0x23D608u);
    ctx->pc = 0x23D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D600u;
    // 0x23d604: 0x262448f3  addiu       $a0, $s1, 0x48F3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18675));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x23D600u, 0x23D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D608u;
label_23d608:
    // 0x23d608: 0xc08b5fe  jal         func_22D7F8
label_23d60c:
    if (ctx->pc == 0x23D60Cu) {
        ctx->pc = 0x23D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D608u;
        // 0x23d60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D610u;
        goto label_23d610;
    }
    ctx->pc = 0x23D608u;
    SET_GPR_U32(ctx, 31, 0x23D610u);
    ctx->pc = 0x23D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D608u;
    // 0x23d60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D608u, 0x23D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D610u;
label_23d610:
    // 0x23d610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d614:
    // 0x23d614: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23d614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23d618:
    // 0x23d618: 0xae3002c4  sw          $s0, 0x2C4($s1)
    ctx->pc = 0x23d618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 16));
label_23d61c:
    // 0x23d61c: 0xc08b5fe  jal         func_22D7F8
label_23d620:
    if (ctx->pc == 0x23D620u) {
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D624u;
        goto label_23d624;
    }
    ctx->pc = 0x23D61Cu;
    SET_GPR_U32(ctx, 31, 0x23D624u);
    ctx->pc = 0x23D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D61Cu;
    // 0x23d620: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23D61Cu, 0x23D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D624u;
label_23d624:
    // 0x23d624: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_23d628:
    if (ctx->pc == 0x23D628u) {
        ctx->pc = 0x23D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D624u;
        // 0x23d628: 0xae2002c4  sw          $zero, 0x2C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D62Cu;
        goto label_23d62c;
    }
    ctx->pc = 0x23D624u;
    {
        const bool branch_taken_0x23d624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d624) {
            ctx->pc = 0x23D628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D624u;
            // 0x23d628: 0xae2002c4  sw          $zero, 0x2C4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D62Cu;
            goto label_23d62c;
        }
    }
    ctx->pc = 0x23D62Cu;
label_23d62c:
    // 0x23d62c: 0x922245ef  lbu         $v0, 0x45EF($s1)
    ctx->pc = 0x23d62cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17903)));
label_23d630:
    // 0x23d630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23d634:
    if (ctx->pc == 0x23D634u) {
        ctx->pc = 0x23D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D630u;
        // 0x23d634: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D638u;
        goto label_23d638;
    }
    ctx->pc = 0x23D630u;
    {
        const bool branch_taken_0x23d630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D630u;
        // 0x23d634: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d630) {
            ctx->pc = 0x23D64Cu;
            goto label_23d64c;
        }
    }
    ctx->pc = 0x23D638u;
label_23d638:
    // 0x23d638: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_23d63c:
    // 0x23d63c: 0x34420f01  ori         $v0, $v0, 0xF01
    ctx->pc = 0x23d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3841);
label_23d640:
    // 0x23d640: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x23d640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_23d644:
    // 0x23d644: 0x10000006  b           . + 4 + (0x6 << 2)
label_23d648:
    if (ctx->pc == 0x23D648u) {
        ctx->pc = 0x23D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D644u;
        // 0x23d648: 0xae2202c8  sw          $v0, 0x2C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D64Cu;
        goto label_23d64c;
    }
    ctx->pc = 0x23D644u;
    {
        const bool branch_taken_0x23d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D644u;
        // 0x23d648: 0xae2202c8  sw          $v0, 0x2C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d644) {
            ctx->pc = 0x23D660u;
            goto label_23d660;
        }
    }
    ctx->pc = 0x23D64Cu;
label_23d64c:
    // 0x23d64c: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_23d650:
    // 0x23d650: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23d654:
    // 0x23d654: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x23d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_23d658:
    // 0x23d658: 0xae2002c8  sw          $zero, 0x2C8($s1)
    ctx->pc = 0x23d658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 0));
label_23d65c:
    // 0x23d65c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23d660:
    // 0x23d660: 0xae2302b0  sw          $v1, 0x2B0($s1)
    ctx->pc = 0x23d660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 3));
label_23d664:
    // 0x23d664: 0x92224a07  lbu         $v0, 0x4A07($s1)
    ctx->pc = 0x23d664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18951)));
label_23d668:
    // 0x23d668: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23d66c:
    if (ctx->pc == 0x23D66Cu) {
        ctx->pc = 0x23D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D668u;
        // 0x23d66c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D670u;
        goto label_23d670;
    }
    ctx->pc = 0x23D668u;
    {
        const bool branch_taken_0x23d668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D668u;
        // 0x23d66c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d668) {
            ctx->pc = 0x23D67Cu;
            goto label_23d67c;
        }
    }
    ctx->pc = 0x23D670u;
label_23d670:
    // 0x23d670: 0x34420f01  ori         $v0, $v0, 0xF01
    ctx->pc = 0x23d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3841);
label_23d674:
    // 0x23d674: 0x10000002  b           . + 4 + (0x2 << 2)
label_23d678:
    if (ctx->pc == 0x23D678u) {
        ctx->pc = 0x23D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D674u;
        // 0x23d678: 0xae2202cc  sw          $v0, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D67Cu;
        goto label_23d67c;
    }
    ctx->pc = 0x23D674u;
    {
        const bool branch_taken_0x23d674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D674u;
        // 0x23d678: 0xae2202cc  sw          $v0, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d674) {
            ctx->pc = 0x23D680u;
            goto label_23d680;
        }
    }
    ctx->pc = 0x23D67Cu;
label_23d67c:
    // 0x23d67c: 0xae2002cc  sw          $zero, 0x2CC($s1)
    ctx->pc = 0x23d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 0));
label_23d680:
    // 0x23d680: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23d680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d684:
    // 0x23d684: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23d688:
    // 0x23d688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d68c:
    // 0x23d68c: 0x248450a8  addiu       $a0, $a0, 0x50A8
    ctx->pc = 0x23d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
label_23d690:
    // 0x23d690: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d694:
    // 0x23d694: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23d694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d698:
    // 0x23d698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d69c:
    // 0x23d69c: 0x808ed76  j           func_23B5D8
label_23d6a0:
    if (ctx->pc == 0x23D6A0u) {
        ctx->pc = 0x23D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D69Cu;
        // 0x23d6a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6A4u;
        goto label_23d6a4;
    }
    ctx->pc = 0x23D69Cu;
    ctx->pc = 0x23D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D69Cu;
    // 0x23d6a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B5D8u, 0x23D69Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23D6A4u;
label_23d6a4:
    // 0x23d6a4: 0x0  nop
    ctx->pc = 0x23d6a4u;
    // NOP
label_23d6a8:
    // 0x23d6a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d6ac:
    // 0x23d6ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23d6b0:
    // 0x23d6b0: 0x808edd8  j           func_23B760
label_23d6b4:
    if (ctx->pc == 0x23D6B4u) {
        ctx->pc = 0x23D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6B0u;
        // 0x23d6b4: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6B8u;
        goto label_23d6b8;
    }
    ctx->pc = 0x23D6B0u;
    ctx->pc = 0x23D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6B0u;
    // 0x23d6b4: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B760u, 0x23D6B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23D6B8u;
label_23d6b8:
    // 0x23d6b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d6bc:
    // 0x23d6bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23d6c0:
    // 0x23d6c0: 0x808ee54  j           func_23B950
label_23d6c4:
    if (ctx->pc == 0x23D6C4u) {
        ctx->pc = 0x23D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6C0u;
        // 0x23d6c4: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6C8u;
        goto label_23d6c8;
    }
    ctx->pc = 0x23D6C0u;
    ctx->pc = 0x23D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6C0u;
    // 0x23d6c4: 0x248450a8  addiu       $a0, $a0, 0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B950u, 0x23D6C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23D6C8u;
label_23d6c8:
    // 0x23d6c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23d6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23d6cc:
    // 0x23d6cc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x23d6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23d6d0:
    // 0x23d6d0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x23d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_23d6d4:
    // 0x23d6d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23d6d8:
    // 0x23d6d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23d6d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d6dc:
    // 0x23d6dc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x23d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_23d6e0:
    // 0x23d6e0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x23d6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23d6e4:
    // 0x23d6e4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23d6e8:
    // 0x23d6e8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x23d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_23d6ec:
    // 0x23d6ec: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x23d6ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_23d6f0:
    // 0x23d6f0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x23d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_23d6f4:
    // 0x23d6f4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x23d6f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d6f8:
    // 0x23d6f8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x23d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_23d6fc:
    // 0x23d6fc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x23d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_23d700:
    // 0x23d700: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x23d700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_23d704:
    // 0x23d704: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_23d708:
    // 0x23d708: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x23d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_23d70c:
    // 0x23d70c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23d710:
    // 0x23d710: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x23d710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_23d714:
    // 0x23d714: 0xc098552  jal         func_261548
label_23d718:
    if (ctx->pc == 0x23D718u) {
        ctx->pc = 0x23D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D714u;
        // 0x23d718: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D71Cu;
        goto label_23d71c;
    }
    ctx->pc = 0x23D714u;
    SET_GPR_U32(ctx, 31, 0x23D71Cu);
    ctx->pc = 0x23D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D714u;
    // 0x23d718: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23D714u, 0x23D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D71Cu;
label_23d71c:
    // 0x23d71c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23d71cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d720:
    // 0x23d720: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_23d724:
    if (ctx->pc == 0x23D724u) {
        ctx->pc = 0x23D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D720u;
        // 0x23d724: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D728u;
        goto label_23d728;
    }
    ctx->pc = 0x23D720u;
    {
        const bool branch_taken_0x23d720 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D720u;
        // 0x23d724: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d720) {
            ctx->pc = 0x23D730u;
            goto label_23d730;
        }
    }
    ctx->pc = 0x23D728u;
label_23d728:
    // 0x23d728: 0x1000015a  b           . + 4 + (0x15A << 2)
label_23d72c:
    if (ctx->pc == 0x23D72Cu) {
        ctx->pc = 0x23D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D728u;
        // 0x23d72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D730u;
        goto label_23d730;
    }
    ctx->pc = 0x23D728u;
    {
        const bool branch_taken_0x23d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D728u;
        // 0x23d72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d728) {
            ctx->pc = 0x23DC94u;
            goto label_23dc94;
        }
    }
    ctx->pc = 0x23D730u;
label_23d730:
    // 0x23d730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23d734:
    // 0x23d734: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x23d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_23d738:
    // 0x23d738: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23d73c:
    // 0x23d73c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x23d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_23d740:
    // 0x23d740: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x23d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_23d744:
    // 0x23d744: 0x24a55ac8  addiu       $a1, $a1, 0x5AC8
    ctx->pc = 0x23d744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23240));
label_23d748:
    // 0x23d748: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d74c:
    // 0x23d74c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23d74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d750:
    // 0x23d750: 0xc08b5ac  jal         func_22D6B0
label_23d754:
    if (ctx->pc == 0x23D754u) {
        ctx->pc = 0x23D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D750u;
        // 0x23d754: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D758u;
        goto label_23d758;
    }
    ctx->pc = 0x23D750u;
    SET_GPR_U32(ctx, 31, 0x23D758u);
    ctx->pc = 0x23D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D750u;
    // 0x23d754: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D750u, 0x23D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D758u;
label_23d758:
    // 0x23d758: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23d758u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d75c:
    // 0x23d75c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x23d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_23d760:
    // 0x23d760: 0x285e0002  slti        $fp, $v0, 0x2
    ctx->pc = 0x23d760u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23d764:
    // 0x23d764: 0x17c00057  bnez        $fp, . + 4 + (0x57 << 2)
label_23d768:
    if (ctx->pc == 0x23D768u) {
        ctx->pc = 0x23D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D764u;
        // 0x23d768: 0x8fb10010  lw          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D76Cu;
        goto label_23d76c;
    }
    ctx->pc = 0x23D764u;
    {
        const bool branch_taken_0x23d764 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D764u;
        // 0x23d768: 0x8fb10010  lw          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d764) {
            ctx->pc = 0x23D8C4u;
            goto label_23d8c4;
        }
    }
    ctx->pc = 0x23D76Cu;
label_23d76c:
    // 0x23d76c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23d76cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d770:
    // 0x23d770: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_23d774:
    if (ctx->pc == 0x23D774u) {
        ctx->pc = 0x23D778u;
        goto label_23d778;
    }
    ctx->pc = 0x23D770u;
    {
        const bool branch_taken_0x23d770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d770) {
            ctx->pc = 0x23D8C4u;
            goto label_23d8c4;
        }
    }
    ctx->pc = 0x23D778u;
label_23d778:
    // 0x23d778: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23d778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23d77c:
    // 0x23d77c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x23d77cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
label_23d780:
    // 0x23d780: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x23d780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23d784:
    // 0x23d784: 0x0  nop
    ctx->pc = 0x23d784u;
    // NOP
label_23d788:
    // 0x23d788: 0xc09035e  jal         func_240D78
label_23d78c:
    if (ctx->pc == 0x23D78Cu) {
        ctx->pc = 0x23D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D788u;
        // 0x23d78c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D790u;
        goto label_23d790;
    }
    ctx->pc = 0x23D788u;
    SET_GPR_U32(ctx, 31, 0x23D790u);
    ctx->pc = 0x23D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D788u;
    // 0x23d78c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240D78u, 0x23D788u, 0x23D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D790u;
label_23d790:
    // 0x23d790: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23d790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23d794:
    // 0x23d794: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23d794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d798:
    // 0x23d798: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d79c:
    // 0x23d79c: 0xc08b5ac  jal         func_22D6B0
label_23d7a0:
    if (ctx->pc == 0x23D7A0u) {
        ctx->pc = 0x23D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D79Cu;
        // 0x23d7a0: 0x246558b8  addiu       $a1, $v1, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7A4u;
        goto label_23d7a4;
    }
    ctx->pc = 0x23D79Cu;
    SET_GPR_U32(ctx, 31, 0x23D7A4u);
    ctx->pc = 0x23D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D79Cu;
    // 0x23d7a0: 0x246558b8  addiu       $a1, $v1, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D79Cu, 0x23D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7A4u;
label_23d7a4:
    // 0x23d7a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x23d7a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23d7a8:
    // 0x23d7a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d7ac:
    // 0x23d7ac: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_23d7b0:
    if (ctx->pc == 0x23D7B0u) {
        ctx->pc = 0x23D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ACu;
        // 0x23d7b0: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7B4u;
        goto label_23d7b4;
    }
    ctx->pc = 0x23D7ACu;
    {
        const bool branch_taken_0x23d7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ACu;
        // 0x23d7b0: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7ac) {
            ctx->pc = 0x23D814u;
            goto label_23d814;
        }
    }
    ctx->pc = 0x23D7B4u;
label_23d7b4:
    // 0x23d7b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23d7b8:
    if (ctx->pc == 0x23D7B8u) {
        ctx->pc = 0x23D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7B4u;
        // 0x23d7b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7BCu;
        goto label_23d7bc;
    }
    ctx->pc = 0x23D7B4u;
    {
        const bool branch_taken_0x23d7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7B4u;
        // 0x23d7b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7b4) {
            ctx->pc = 0x23D7CCu;
            goto label_23d7cc;
        }
    }
    ctx->pc = 0x23D7BCu;
label_23d7bc:
    // 0x23d7bc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_23d7c0:
    if (ctx->pc == 0x23D7C0u) {
        ctx->pc = 0x23D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7BCu;
        // 0x23d7c0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7C4u;
        goto label_23d7c4;
    }
    ctx->pc = 0x23D7BCu;
    {
        const bool branch_taken_0x23d7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7BCu;
        // 0x23d7c0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7bc) {
            ctx->pc = 0x23D7E8u;
            goto label_23d7e8;
        }
    }
    ctx->pc = 0x23D7C4u;
label_23d7c4:
    // 0x23d7c4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_23d7c8:
    if (ctx->pc == 0x23D7C8u) {
        ctx->pc = 0x23D7CCu;
        goto label_23d7cc;
    }
    ctx->pc = 0x23D7C4u;
    {
        const bool branch_taken_0x23d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d7c4) {
            ctx->pc = 0x23D880u;
            goto label_23d880;
        }
    }
    ctx->pc = 0x23D7CCu;
label_23d7cc:
    // 0x23d7cc: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x23d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_23d7d0:
    // 0x23d7d0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_23d7d4:
    if (ctx->pc == 0x23D7D4u) {
        ctx->pc = 0x23D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7D0u;
        // 0x23d7d4: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7D8u;
        goto label_23d7d8;
    }
    ctx->pc = 0x23D7D0u;
    {
        const bool branch_taken_0x23d7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7D0u;
        // 0x23d7d4: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7d0) {
            ctx->pc = 0x23D828u;
            goto label_23d828;
        }
    }
    ctx->pc = 0x23D7D8u;
label_23d7d8:
    // 0x23d7d8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_23d7dc:
    if (ctx->pc == 0x23D7DCu) {
        ctx->pc = 0x23D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7D8u;
        // 0x23d7dc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7E0u;
        goto label_23d7e0;
    }
    ctx->pc = 0x23D7D8u;
    {
        const bool branch_taken_0x23d7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7D8u;
        // 0x23d7dc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7d8) {
            ctx->pc = 0x23D83Cu;
            goto label_23d83c;
        }
    }
    ctx->pc = 0x23D7E0u;
label_23d7e0:
    // 0x23d7e0: 0x10000027  b           . + 4 + (0x27 << 2)
label_23d7e4:
    if (ctx->pc == 0x23D7E4u) {
        ctx->pc = 0x23D7E8u;
        goto label_23d7e8;
    }
    ctx->pc = 0x23D7E0u;
    {
        const bool branch_taken_0x23d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d7e0) {
            ctx->pc = 0x23D880u;
            goto label_23d880;
        }
    }
    ctx->pc = 0x23D7E8u;
label_23d7e8:
    // 0x23d7e8: 0x92624a07  lbu         $v0, 0x4A07($s3)
    ctx->pc = 0x23d7e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18951)));
label_23d7ec:
    // 0x23d7ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_23d7f0:
    if (ctx->pc == 0x23D7F0u) {
        ctx->pc = 0x23D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ECu;
        // 0x23d7f0: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7F4u;
        goto label_23d7f4;
    }
    ctx->pc = 0x23D7ECu;
    {
        const bool branch_taken_0x23d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ECu;
        // 0x23d7f0: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7ec) {
            ctx->pc = 0x23D848u;
            goto label_23d848;
        }
    }
    ctx->pc = 0x23D7F4u;
label_23d7f4:
    // 0x23d7f4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_23d7f8:
    if (ctx->pc == 0x23D7F8u) {
        ctx->pc = 0x23D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7F4u;
        // 0x23d7f8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7FCu;
        goto label_23d7fc;
    }
    ctx->pc = 0x23D7F4u;
    {
        const bool branch_taken_0x23d7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7F4u;
        // 0x23d7f8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7f4) {
            ctx->pc = 0x23D870u;
            goto label_23d870;
        }
    }
    ctx->pc = 0x23D7FCu;
label_23d7fc:
    // 0x23d7fc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23d7fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d800:
    // 0x23d800: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x23d800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23d804:
    // 0x23d804: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_23d808:
    if (ctx->pc == 0x23D808u) {
        ctx->pc = 0x23D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D804u;
        // 0x23d808: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D80Cu;
        goto label_23d80c;
    }
    ctx->pc = 0x23D804u;
    {
        const bool branch_taken_0x23d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d804) {
            ctx->pc = 0x23D808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D804u;
            // 0x23d808: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8A4u;
            goto label_23d8a4;
        }
    }
    ctx->pc = 0x23D80Cu;
label_23d80c:
    // 0x23d80c: 0x10000018  b           . + 4 + (0x18 << 2)
label_23d810:
    if (ctx->pc == 0x23D810u) {
        ctx->pc = 0x23D814u;
        goto label_23d814;
    }
    ctx->pc = 0x23D80Cu;
    {
        const bool branch_taken_0x23d80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d80c) {
            ctx->pc = 0x23D870u;
            goto label_23d870;
        }
    }
    ctx->pc = 0x23D814u;
label_23d814:
    // 0x23d814: 0x92624a08  lbu         $v0, 0x4A08($s3)
    ctx->pc = 0x23d814u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18952)));
label_23d818:
    // 0x23d818: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23d81c:
    if (ctx->pc == 0x23D81Cu) {
        ctx->pc = 0x23D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D818u;
        // 0x23d81c: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D820u;
        goto label_23d820;
    }
    ctx->pc = 0x23D818u;
    {
        const bool branch_taken_0x23d818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D818u;
        // 0x23d81c: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d818) {
            ctx->pc = 0x23D848u;
            goto label_23d848;
        }
    }
    ctx->pc = 0x23D820u;
label_23d820:
    // 0x23d820: 0x1000000e  b           . + 4 + (0xE << 2)
label_23d824:
    if (ctx->pc == 0x23D824u) {
        ctx->pc = 0x23D828u;
        goto label_23d828;
    }
    ctx->pc = 0x23D820u;
    {
        const bool branch_taken_0x23d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d820) {
            ctx->pc = 0x23D85Cu;
            goto label_23d85c;
        }
    }
    ctx->pc = 0x23D828u;
label_23d828:
    // 0x23d828: 0x92624c09  lbu         $v0, 0x4C09($s3)
    ctx->pc = 0x23d828u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19465)));
label_23d82c:
    // 0x23d82c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23d830:
    if (ctx->pc == 0x23D830u) {
        ctx->pc = 0x23D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D82Cu;
        // 0x23d830: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D834u;
        goto label_23d834;
    }
    ctx->pc = 0x23D82Cu;
    {
        const bool branch_taken_0x23d82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D82Cu;
        // 0x23d830: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d82c) {
            ctx->pc = 0x23D848u;
            goto label_23d848;
        }
    }
    ctx->pc = 0x23D834u;
label_23d834:
    // 0x23d834: 0x10000009  b           . + 4 + (0x9 << 2)
label_23d838:
    if (ctx->pc == 0x23D838u) {
        ctx->pc = 0x23D83Cu;
        goto label_23d83c;
    }
    ctx->pc = 0x23D834u;
    {
        const bool branch_taken_0x23d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d834) {
            ctx->pc = 0x23D85Cu;
            goto label_23d85c;
        }
    }
    ctx->pc = 0x23D83Cu;
label_23d83c:
    // 0x23d83c: 0x92624d0a  lbu         $v0, 0x4D0A($s3)
    ctx->pc = 0x23d83cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19722)));
label_23d840:
    // 0x23d840: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23d844:
    if (ctx->pc == 0x23D844u) {
        ctx->pc = 0x23D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D840u;
        // 0x23d844: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D848u;
        goto label_23d848;
    }
    ctx->pc = 0x23D840u;
    {
        const bool branch_taken_0x23d840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D840u;
        // 0x23d844: 0x2ac20006  slti        $v0, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d840) {
            ctx->pc = 0x23D85Cu;
            goto label_23d85c;
        }
    }
    ctx->pc = 0x23D848u;
label_23d848:
    // 0x23d848: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d84c:
    // 0x23d84c: 0xc08b5ac  jal         func_22D6B0
label_23d850:
    if (ctx->pc == 0x23D850u) {
        ctx->pc = 0x23D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D84Cu;
        // 0x23d850: 0x260558f8  addiu       $a1, $s0, 0x58F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D854u;
        goto label_23d854;
    }
    ctx->pc = 0x23D84Cu;
    SET_GPR_U32(ctx, 31, 0x23D854u);
    ctx->pc = 0x23D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D84Cu;
    // 0x23d850: 0x260558f8  addiu       $a1, $s0, 0x58F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D84Cu, 0x23D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D854u;
label_23d854:
    // 0x23d854: 0x1000000d  b           . + 4 + (0xD << 2)
label_23d858:
    if (ctx->pc == 0x23D858u) {
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0x92260001  lbu         $a2, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D85Cu;
        goto label_23d85c;
    }
    ctx->pc = 0x23D854u;
    {
        const bool branch_taken_0x23d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0x92260001  lbu         $a2, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d854) {
            ctx->pc = 0x23D88Cu;
            goto label_23d88c;
        }
    }
    ctx->pc = 0x23D85Cu;
label_23d85c:
    // 0x23d85c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23d860:
    if (ctx->pc == 0x23D860u) {
        ctx->pc = 0x23D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D85Cu;
        // 0x23d860: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D864u;
        goto label_23d864;
    }
    ctx->pc = 0x23D85Cu;
    {
        const bool branch_taken_0x23d85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D85Cu;
        // 0x23d860: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d85c) {
            ctx->pc = 0x23D870u;
            goto label_23d870;
        }
    }
    ctx->pc = 0x23D864u;
label_23d864:
    // 0x23d864: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23d864u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d868:
    // 0x23d868: 0x5054000f  beql        $v0, $s4, . + 4 + (0xF << 2)
label_23d86c:
    if (ctx->pc == 0x23D86Cu) {
        ctx->pc = 0x23D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D868u;
        // 0x23d86c: 0x2c2b023  subu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D870u;
        goto label_23d870;
    }
    ctx->pc = 0x23D868u;
    {
        const bool branch_taken_0x23d868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x23d868) {
            ctx->pc = 0x23D86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D868u;
            // 0x23d86c: 0x2c2b023  subu        $s6, $s6, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8A8u;
            goto label_23d8a8;
        }
    }
    ctx->pc = 0x23D870u;
label_23d870:
    // 0x23d870: 0xc08b5ac  jal         func_22D6B0
label_23d874:
    if (ctx->pc == 0x23D874u) {
        ctx->pc = 0x23D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D870u;
        // 0x23d874: 0x264558d0  addiu       $a1, $s2, 0x58D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 22736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D878u;
        goto label_23d878;
    }
    ctx->pc = 0x23D870u;
    SET_GPR_U32(ctx, 31, 0x23D878u);
    ctx->pc = 0x23D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D870u;
    // 0x23d874: 0x264558d0  addiu       $a1, $s2, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D870u, 0x23D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D878u;
label_23d878:
    // 0x23d878: 0x10000004  b           . + 4 + (0x4 << 2)
label_23d87c:
    if (ctx->pc == 0x23D87Cu) {
        ctx->pc = 0x23D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D878u;
        // 0x23d87c: 0x92260001  lbu         $a2, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D880u;
        goto label_23d880;
    }
    ctx->pc = 0x23D878u;
    {
        const bool branch_taken_0x23d878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D878u;
        // 0x23d87c: 0x92260001  lbu         $a2, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d878) {
            ctx->pc = 0x23D88Cu;
            goto label_23d88c;
        }
    }
    ctx->pc = 0x23D880u;
label_23d880:
    // 0x23d880: 0xc08b5ac  jal         func_22D6B0
label_23d884:
    if (ctx->pc == 0x23D884u) {
        ctx->pc = 0x23D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D880u;
        // 0x23d884: 0x260558f8  addiu       $a1, $s0, 0x58F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D888u;
        goto label_23d888;
    }
    ctx->pc = 0x23D880u;
    SET_GPR_U32(ctx, 31, 0x23D888u);
    ctx->pc = 0x23D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D880u;
    // 0x23d884: 0x260558f8  addiu       $a1, $s0, 0x58F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D880u, 0x23D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D888u;
label_23d888:
    // 0x23d888: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x23d888u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d88c:
    // 0x23d88c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d890:
    // 0x23d890: 0xc08b4f8  jal         func_22D3E0
label_23d894:
    if (ctx->pc == 0x23D894u) {
        ctx->pc = 0x23D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D890u;
        // 0x23d894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D898u;
        goto label_23d898;
    }
    ctx->pc = 0x23D890u;
    SET_GPR_U32(ctx, 31, 0x23D898u);
    ctx->pc = 0x23D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D890u;
    // 0x23d894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23D890u, 0x23D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D898u;
label_23d898:
    // 0x23d898: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23d898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d89c:
    // 0x23d89c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23d8a0:
    // 0x23d8a0: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x23d8a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_23d8a4:
    // 0x23d8a4: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x23d8a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_23d8a8:
    // 0x23d8a8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23d8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23d8ac:
    // 0x23d8ac: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x23d8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_23d8b0:
    // 0x23d8b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23d8b4:
    if (ctx->pc == 0x23D8B4u) {
        ctx->pc = 0x23D8B8u;
        goto label_23d8b8;
    }
    ctx->pc = 0x23D8B0u;
    {
        const bool branch_taken_0x23d8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d8b0) {
            ctx->pc = 0x23D8C4u;
            goto label_23d8c4;
        }
    }
    ctx->pc = 0x23D8B8u;
label_23d8b8:
    // 0x23d8b8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23d8b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d8bc:
    // 0x23d8bc: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_23d8c0:
    if (ctx->pc == 0x23D8C0u) {
        ctx->pc = 0x23D8C4u;
        goto label_23d8c4;
    }
    ctx->pc = 0x23D8BCu;
    {
        const bool branch_taken_0x23d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d8bc) {
            ctx->pc = 0x23D788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d788;
        }
    }
    ctx->pc = 0x23D8C4u;
label_23d8c4:
    // 0x23d8c4: 0x52e0000c  beql        $s7, $zero, . + 4 + (0xC << 2)
label_23d8c8:
    if (ctx->pc == 0x23D8C8u) {
        ctx->pc = 0x23D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8C4u;
        // 0x23d8c8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8CCu;
        goto label_23d8cc;
    }
    ctx->pc = 0x23D8C4u;
    {
        const bool branch_taken_0x23d8c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d8c4) {
            ctx->pc = 0x23D8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D8C4u;
            // 0x23d8c8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8F8u;
            goto label_23d8f8;
        }
    }
    ctx->pc = 0x23D8CCu;
label_23d8cc:
    // 0x23d8cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23d8d0:
    // 0x23d8d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d8d4:
    // 0x23d8d4: 0xc08b5ac  jal         func_22D6B0
label_23d8d8:
    if (ctx->pc == 0x23D8D8u) {
        ctx->pc = 0x23D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D4u;
        // 0x23d8d8: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8DCu;
        goto label_23d8dc;
    }
    ctx->pc = 0x23D8D4u;
    SET_GPR_U32(ctx, 31, 0x23D8DCu);
    ctx->pc = 0x23D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8D4u;
    // 0x23d8d8: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D8D4u, 0x23D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8DCu;
label_23d8dc:
    // 0x23d8dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23d8e0:
    // 0x23d8e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d8e4:
    // 0x23d8e4: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x23d8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23d8e8:
    // 0x23d8e8: 0x34058021  ori         $a1, $zero, 0x8021
    ctx->pc = 0x23d8e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
label_23d8ec:
    // 0x23d8ec: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x23d8ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_23d8f0:
    // 0x23d8f0: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_23d8f4:
    if (ctx->pc == 0x23D8F4u) {
        ctx->pc = 0x23D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F0u;
        // 0x23d8f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8F8u;
        goto label_23d8f8;
    }
    ctx->pc = 0x23D8F0u;
    {
        const bool branch_taken_0x23d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F0u;
        // 0x23d8f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8f0) {
            ctx->pc = 0x23DC48u;
            goto label_23dc48;
        }
    }
    ctx->pc = 0x23D8F8u;
label_23d8f8:
    // 0x23d8f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d8fc:
    // 0x23d8fc: 0xc08b5ac  jal         func_22D6B0
label_23d900:
    if (ctx->pc == 0x23D900u) {
        ctx->pc = 0x23D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8FCu;
        // 0x23d900: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D904u;
        goto label_23d904;
    }
    ctx->pc = 0x23D8FCu;
    SET_GPR_U32(ctx, 31, 0x23D904u);
    ctx->pc = 0x23D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8FCu;
    // 0x23d900: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D8FCu, 0x23D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D904u;
label_23d904:
    // 0x23d904: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23d908:
    // 0x23d908: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23d90c:
    // 0x23d90c: 0x24a55ae0  addiu       $a1, $a1, 0x5AE0
    ctx->pc = 0x23d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23264));
label_23d910:
    // 0x23d910: 0xc08b5ac  jal         func_22D6B0
label_23d914:
    if (ctx->pc == 0x23D914u) {
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D918u;
        goto label_23d918;
    }
    ctx->pc = 0x23D910u;
    SET_GPR_U32(ctx, 31, 0x23D918u);
    ctx->pc = 0x23D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D910u;
    // 0x23d914: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D910u, 0x23D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D918u;
label_23d918:
    // 0x23d918: 0x8fb10010  lw          $s1, 0x10($sp)
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23d91c:
    // 0x23d91c: 0x17c000be  bnez        $fp, . + 4 + (0xBE << 2)
label_23d920:
    if (ctx->pc == 0x23D920u) {
        ctx->pc = 0x23D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D91Cu;
        // 0x23d920: 0x8fb60008  lw          $s6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D924u;
        goto label_23d924;
    }
    ctx->pc = 0x23D91Cu;
    {
        const bool branch_taken_0x23d91c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D91Cu;
        // 0x23d920: 0x8fb60008  lw          $s6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d91c) {
            ctx->pc = 0x23DC18u;
            goto label_23dc18;
        }
    }
    ctx->pc = 0x23D924u;
label_23d924:
    // 0x23d924: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23d924u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23d928:
    // 0x23d928: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
label_23d92c:
    if (ctx->pc == 0x23D92Cu) {
        ctx->pc = 0x23D930u;
        goto label_23d930;
    }
    ctx->pc = 0x23D928u;
    {
        const bool branch_taken_0x23d928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d928) {
            ctx->pc = 0x23DC18u;
            goto label_23dc18;
        }
    }
    ctx->pc = 0x23D930u;
label_23d930:
    // 0x23d930: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x23d930u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23d934:
    // 0x23d934: 0xc09035e  jal         func_240D78
label_23d938:
    if (ctx->pc == 0x23D938u) {
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x923e0001  lbu         $fp, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D93Cu;
        goto label_23d93c;
    }
    ctx->pc = 0x23D934u;
    SET_GPR_U32(ctx, 31, 0x23D93Cu);
    ctx->pc = 0x23D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D934u;
    // 0x23d938: 0x923e0001  lbu         $fp, 0x1($s1) (Delay Slot)
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240D78u, 0x23D934u, 0x23D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D93Cu;
label_23d93c:
    // 0x23d93c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23d940:
    // 0x23d940: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23d940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d944:
    // 0x23d944: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d948:
    // 0x23d948: 0xc08b5ac  jal         func_22D6B0
label_23d94c:
    if (ctx->pc == 0x23D94Cu) {
        ctx->pc = 0x23D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D948u;
        // 0x23d94c: 0x246558b8  addiu       $a1, $v1, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D950u;
        goto label_23d950;
    }
    ctx->pc = 0x23D948u;
    SET_GPR_U32(ctx, 31, 0x23D950u);
    ctx->pc = 0x23D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D948u;
    // 0x23d94c: 0x246558b8  addiu       $a1, $v1, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D948u, 0x23D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D950u;
label_23d950:
    // 0x23d950: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x23d950u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23d954:
    // 0x23d954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d958:
    // 0x23d958: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_23d95c:
    if (ctx->pc == 0x23D95Cu) {
        ctx->pc = 0x23D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D958u;
        // 0x23d95c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D960u;
        goto label_23d960;
    }
    ctx->pc = 0x23D958u;
    {
        const bool branch_taken_0x23d958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D958u;
        // 0x23d95c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d958) {
            ctx->pc = 0x23DA58u;
            goto label_23da58;
        }
    }
    ctx->pc = 0x23D960u;
label_23d960:
    // 0x23d960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23d964:
    if (ctx->pc == 0x23D964u) {
        ctx->pc = 0x23D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D960u;
        // 0x23d964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D968u;
        goto label_23d968;
    }
    ctx->pc = 0x23D960u;
    {
        const bool branch_taken_0x23d960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D960u;
        // 0x23d964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d960) {
            ctx->pc = 0x23D978u;
            goto label_23d978;
        }
    }
    ctx->pc = 0x23D968u;
label_23d968:
    // 0x23d968: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_23d96c:
    if (ctx->pc == 0x23D96Cu) {
        ctx->pc = 0x23D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D968u;
        // 0x23d96c: 0x92220002  lbu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D970u;
        goto label_23d970;
    }
    ctx->pc = 0x23D968u;
    {
        const bool branch_taken_0x23d968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d968) {
            ctx->pc = 0x23D96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D968u;
            // 0x23d96c: 0x92220002  lbu         $v0, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D994u;
            goto label_23d994;
        }
    }
    ctx->pc = 0x23D970u;
label_23d970:
    // 0x23d970: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_23d974:
    if (ctx->pc == 0x23D974u) {
        ctx->pc = 0x23D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D970u;
        // 0x23d974: 0x92a20001  lbu         $v0, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D978u;
        goto label_23d978;
    }
    ctx->pc = 0x23D970u;
    {
        const bool branch_taken_0x23d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D970u;
        // 0x23d974: 0x92a20001  lbu         $v0, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d970) {
            ctx->pc = 0x23DC00u;
            goto label_23dc00;
        }
    }
    ctx->pc = 0x23D978u;
label_23d978:
    // 0x23d978: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_23d97c:
    // 0x23d97c: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
label_23d980:
    if (ctx->pc == 0x23D980u) {
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D984u;
        goto label_23d984;
    }
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23DB50u;
            goto label_23db50;
        }
    }
    ctx->pc = 0x23D984u;
label_23d984:
    // 0x23d984: 0x50620088  beql        $v1, $v0, . + 4 + (0x88 << 2)
label_23d988:
    if (ctx->pc == 0x23D988u) {
        ctx->pc = 0x23D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D984u;
        // 0x23d988: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D98Cu;
        goto label_23d98c;
    }
    ctx->pc = 0x23D984u;
    {
        const bool branch_taken_0x23d984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d984) {
            ctx->pc = 0x23D988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D984u;
            // 0x23d988: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DBA8u;
            goto label_23dba8;
        }
    }
    ctx->pc = 0x23D98Cu;
label_23d98c:
    // 0x23d98c: 0x1000009c  b           . + 4 + (0x9C << 2)
label_23d990:
    if (ctx->pc == 0x23D990u) {
        ctx->pc = 0x23D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D98Cu;
        // 0x23d990: 0x92a20001  lbu         $v0, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D994u;
        goto label_23d994;
    }
    ctx->pc = 0x23D98Cu;
    {
        const bool branch_taken_0x23d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D98Cu;
        // 0x23d990: 0x92a20001  lbu         $v0, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d98c) {
            ctx->pc = 0x23DC00u;
            goto label_23dc00;
        }
    }
    ctx->pc = 0x23D994u;
label_23d994:
    // 0x23d994: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23d994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23d998:
    // 0x23d998: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23d998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23d99c:
    // 0x23d99c: 0x926402ce  lbu         $a0, 0x2CE($s3)
    ctx->pc = 0x23d99cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 718)));
label_23d9a0:
    // 0x23d9a0: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x23d9a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23d9a4:
    // 0x23d9a4: 0x92300004  lbu         $s0, 0x4($s1)
    ctx->pc = 0x23d9a4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23d9a8:
    // 0x23d9a8: 0x92340005  lbu         $s4, 0x5($s1)
    ctx->pc = 0x23d9a8u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23d9ac:
    // 0x23d9ac: 0x16440017  bne         $s2, $a0, . + 4 + (0x17 << 2)
label_23d9b0:
    if (ctx->pc == 0x23D9B0u) {
        ctx->pc = 0x23D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9ACu;
        // 0x23d9b0: 0x8e6302cc  lw          $v1, 0x2CC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9B4u;
        goto label_23d9b4;
    }
    ctx->pc = 0x23D9ACu;
    {
        const bool branch_taken_0x23d9ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x23D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9ACu;
        // 0x23d9b0: 0x8e6302cc  lw          $v1, 0x2CC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9ac) {
            ctx->pc = 0x23DA0Cu;
            goto label_23da0c;
        }
    }
    ctx->pc = 0x23D9B4u;
label_23d9b4:
    // 0x23d9b4: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x23d9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_23d9b8:
    // 0x23d9b8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_23d9bc:
    if (ctx->pc == 0x23D9BCu) {
        ctx->pc = 0x23D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9B8u;
        // 0x23d9bc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9C0u;
        goto label_23d9c0;
    }
    ctx->pc = 0x23D9B8u;
    {
        const bool branch_taken_0x23d9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9B8u;
        // 0x23d9bc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9b8) {
            ctx->pc = 0x23DA10u;
            goto label_23da10;
        }
    }
    ctx->pc = 0x23D9C0u;
label_23d9c0:
    // 0x23d9c0: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x23d9c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
label_23d9c4:
    // 0x23d9c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23d9c8:
    // 0x23d9c8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x23d9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23d9cc:
    // 0x23d9cc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_23d9d0:
    if (ctx->pc == 0x23D9D0u) {
        ctx->pc = 0x23D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9CCu;
        // 0x23d9d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9D4u;
        goto label_23d9d4;
    }
    ctx->pc = 0x23D9CCu;
    {
        const bool branch_taken_0x23d9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9CCu;
        // 0x23d9d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9cc) {
            ctx->pc = 0x23DA14u;
            goto label_23da14;
        }
    }
    ctx->pc = 0x23D9D4u;
label_23d9d4:
    // 0x23d9d4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23d9d8:
    // 0x23d9d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23d9dc:
    // 0x23d9dc: 0x24a55b00  addiu       $a1, $a1, 0x5B00
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
label_23d9e0:
    // 0x23d9e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23d9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d9e4:
    // 0x23d9e4: 0xc08b5ac  jal         func_22D6B0
label_23d9e8:
    if (ctx->pc == 0x23D9E8u) {
        ctx->pc = 0x23D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9E4u;
        // 0x23d9e8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9ECu;
        goto label_23d9ec;
    }
    ctx->pc = 0x23D9E4u;
    SET_GPR_U32(ctx, 31, 0x23D9ECu);
    ctx->pc = 0x23D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9E4u;
    // 0x23d9e8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23D9E4u, 0x23D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9ECu;
label_23d9ec:
    // 0x23d9ec: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x23d9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_23d9f0:
    // 0x23d9f0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_23d9f4:
    // 0x23d9f4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x23d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_23d9f8:
    // 0x23d9f8: 0x3284000f  andi        $a0, $s4, 0xF
    ctx->pc = 0x23d9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_23d9fc:
    // 0x23d9fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23da00:
    // 0x23da00: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23da04:
    // 0x23da04: 0x10000080  b           . + 4 + (0x80 << 2)
label_23da08:
    if (ctx->pc == 0x23DA08u) {
        ctx->pc = 0x23DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA04u;
        // 0x23da08: 0xae6202cc  sw          $v0, 0x2CC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA0Cu;
        goto label_23da0c;
    }
    ctx->pc = 0x23DA04u;
    {
        const bool branch_taken_0x23da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA04u;
        // 0x23da08: 0xae6202cc  sw          $v0, 0x2CC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da04) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DA0Cu;
label_23da0c:
    // 0x23da0c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23da10:
    // 0x23da10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23da10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23da14:
    // 0x23da14: 0x24a55b20  addiu       $a1, $a1, 0x5B20
    ctx->pc = 0x23da14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
label_23da18:
    // 0x23da18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23da18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23da1c:
    // 0x23da1c: 0xc08b5ac  jal         func_22D6B0
label_23da20:
    if (ctx->pc == 0x23DA20u) {
        ctx->pc = 0x23DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA1Cu;
        // 0x23da20: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA24u;
        goto label_23da24;
    }
    ctx->pc = 0x23DA1Cu;
    SET_GPR_U32(ctx, 31, 0x23DA24u);
    ctx->pc = 0x23DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA1Cu;
    // 0x23da20: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DA1Cu, 0x23DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA24u;
label_23da24:
    // 0x23da24: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x23da24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23da28:
    // 0x23da28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23da2c:
    // 0x23da2c: 0xc08b4f8  jal         func_22D3E0
label_23da30:
    if (ctx->pc == 0x23DA30u) {
        ctx->pc = 0x23DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA2Cu;
        // 0x23da30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA34u;
        goto label_23da34;
    }
    ctx->pc = 0x23DA2Cu;
    SET_GPR_U32(ctx, 31, 0x23DA34u);
    ctx->pc = 0x23DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA2Cu;
    // 0x23da30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23DA2Cu, 0x23DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA34u;
label_23da34:
    // 0x23da34: 0xa2a00002  sb          $zero, 0x2($s5)
    ctx->pc = 0x23da34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 0));
label_23da38:
    // 0x23da38: 0x866302ce  lh          $v1, 0x2CE($s3)
    ctx->pc = 0x23da38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 718)));
label_23da3c:
    // 0x23da3c: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x23da3cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
label_23da40:
    // 0x23da40: 0x8e6202cc  lw          $v0, 0x2CC($s3)
    ctx->pc = 0x23da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 716)));
label_23da44:
    // 0x23da44: 0xa2b40005  sb          $s4, 0x5($s5)
    ctx->pc = 0x23da44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 20));
label_23da48:
    // 0x23da48: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_23da4c:
    // 0x23da4c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23da50:
    // 0x23da50: 0x1000006a  b           . + 4 + (0x6A << 2)
label_23da54:
    if (ctx->pc == 0x23DA54u) {
        ctx->pc = 0x23DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA50u;
        // 0x23da54: 0xa2a20004  sb          $v0, 0x4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA58u;
        goto label_23da58;
    }
    ctx->pc = 0x23DA50u;
    {
        const bool branch_taken_0x23da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA50u;
        // 0x23da54: 0xa2a20004  sb          $v0, 0x4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da50) {
            ctx->pc = 0x23DBFCu;
            goto label_23dbfc;
        }
    }
    ctx->pc = 0x23DA58u;
label_23da58:
    // 0x23da58: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x23da58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23da5c:
    // 0x23da5c: 0x26644b09  addiu       $a0, $s3, 0x4B09
    ctx->pc = 0x23da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19209));
label_23da60:
    // 0x23da60: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23da60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23da64:
    // 0x23da64: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23da64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23da68:
    // 0x23da68: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x23da68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_23da6c:
    // 0x23da6c: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x23da6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23da70:
    // 0x23da70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23da74:
    // 0x23da74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23da74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23da78:
    // 0x23da78: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_23da7c:
    // 0x23da7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23da80:
    // 0x23da80: 0xc09921a  jal         func_264868
label_23da84:
    if (ctx->pc == 0x23DA84u) {
        ctx->pc = 0x23DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA80u;
        // 0x23da84: 0xa29025  or          $s2, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA88u;
        goto label_23da88;
    }
    ctx->pc = 0x23DA80u;
    SET_GPR_U32(ctx, 31, 0x23DA88u);
    ctx->pc = 0x23DA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA80u;
    // 0x23da84: 0xa29025  or          $s2, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x23DA80u, 0x23DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA88u;
label_23da88:
    // 0x23da88: 0xc08b5fe  jal         func_22D7F8
label_23da8c:
    if (ctx->pc == 0x23DA8Cu) {
        ctx->pc = 0x23DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA88u;
        // 0x23da8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA90u;
        goto label_23da90;
    }
    ctx->pc = 0x23DA88u;
    SET_GPR_U32(ctx, 31, 0x23DA90u);
    ctx->pc = 0x23DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA88u;
    // 0x23da8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23DA88u, 0x23DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA90u;
label_23da90:
    // 0x23da90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23da94:
    // 0x23da94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23da94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23da98:
    // 0x23da98: 0xc08b5fe  jal         func_22D7F8
label_23da9c:
    if (ctx->pc == 0x23DA9Cu) {
        ctx->pc = 0x23DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA98u;
        // 0x23da9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAA0u;
        goto label_23daa0;
    }
    ctx->pc = 0x23DA98u;
    SET_GPR_U32(ctx, 31, 0x23DAA0u);
    ctx->pc = 0x23DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA98u;
    // 0x23da9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23DA98u, 0x23DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAA0u;
label_23daa0:
    // 0x23daa0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x23daa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23daa4:
    // 0x23daa4: 0x8e6302bc  lw          $v1, 0x2BC($s3)
    ctx->pc = 0x23daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
label_23daa8:
    // 0x23daa8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x23daa8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_23daac:
    // 0x23daac: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x23daacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_23dab0:
    // 0x23dab0: 0x2508024  and         $s0, $s2, $s0
    ctx->pc = 0x23dab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
label_23dab4:
    // 0x23dab4: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
label_23dab8:
    if (ctx->pc == 0x23DAB8u) {
        ctx->pc = 0x23DABCu;
        goto label_23dabc;
    }
    ctx->pc = 0x23DAB4u;
    {
        const bool branch_taken_0x23dab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x23dab4) {
            ctx->pc = 0x23DAE0u;
            goto label_23dae0;
        }
    }
    ctx->pc = 0x23DABCu;
label_23dabc:
    // 0x23dabc: 0xc09044a  jal         func_241128
label_23dac0:
    if (ctx->pc == 0x23DAC0u) {
        ctx->pc = 0x23DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DABCu;
        // 0x23dac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAC4u;
        goto label_23dac4;
    }
    ctx->pc = 0x23DABCu;
    SET_GPR_U32(ctx, 31, 0x23DAC4u);
    ctx->pc = 0x23DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DABCu;
    // 0x23dac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23DABCu, 0x23DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAC4u;
label_23dac4:
    // 0x23dac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23dac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dac8:
    // 0x23dac8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dacc:
    // 0x23dacc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23dad0:
    // 0x23dad0: 0xc08b5ac  jal         func_22D6B0
label_23dad4:
    if (ctx->pc == 0x23DAD4u) {
        ctx->pc = 0x23DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD0u;
        // 0x23dad4: 0x24455b40  addiu       $a1, $v0, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAD8u;
        goto label_23dad8;
    }
    ctx->pc = 0x23DAD0u;
    SET_GPR_U32(ctx, 31, 0x23DAD8u);
    ctx->pc = 0x23DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAD0u;
    // 0x23dad4: 0x24455b40  addiu       $a1, $v0, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DAD0u, 0x23DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAD8u;
label_23dad8:
    // 0x23dad8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_23dadc:
    if (ctx->pc == 0x23DADCu) {
        ctx->pc = 0x23DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD8u;
        // 0x23dadc: 0xae7202bc  sw          $s2, 0x2BC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 700), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAE0u;
        goto label_23dae0;
    }
    ctx->pc = 0x23DAD8u;
    {
        const bool branch_taken_0x23dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD8u;
        // 0x23dadc: 0xae7202bc  sw          $s2, 0x2BC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 700), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dad8) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DAE0u;
label_23dae0:
    // 0x23dae0: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_23dae4:
    if (ctx->pc == 0x23DAE4u) {
        ctx->pc = 0x23DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAE0u;
        // 0x23dae4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAE8u;
        goto label_23dae8;
    }
    ctx->pc = 0x23DAE0u;
    {
        const bool branch_taken_0x23dae0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAE0u;
        // 0x23dae4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dae0) {
            ctx->pc = 0x23DAFCu;
            goto label_23dafc;
        }
    }
    ctx->pc = 0x23DAE8u;
label_23dae8:
    // 0x23dae8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23daec:
    // 0x23daec: 0xc08b5ac  jal         func_22D6B0
label_23daf0:
    if (ctx->pc == 0x23DAF0u) {
        ctx->pc = 0x23DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAECu;
        // 0x23daf0: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAF4u;
        goto label_23daf4;
    }
    ctx->pc = 0x23DAECu;
    SET_GPR_U32(ctx, 31, 0x23DAF4u);
    ctx->pc = 0x23DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAECu;
    // 0x23daf0: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DAECu, 0x23DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAF4u;
label_23daf4:
    // 0x23daf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_23daf8:
    if (ctx->pc == 0x23DAF8u) {
        ctx->pc = 0x23DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAF4u;
        // 0x23daf8: 0x92260001  lbu         $a2, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAFCu;
        goto label_23dafc;
    }
    ctx->pc = 0x23DAF4u;
    {
        const bool branch_taken_0x23daf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAF4u;
        // 0x23daf8: 0x92260001  lbu         $a2, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23daf4) {
            ctx->pc = 0x23DB1Cu;
            goto label_23db1c;
        }
    }
    ctx->pc = 0x23DAFCu;
label_23dafc:
    // 0x23dafc: 0xc09044a  jal         func_241128
label_23db00:
    if (ctx->pc == 0x23DB00u) {
        ctx->pc = 0x23DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAFCu;
        // 0x23db00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB04u;
        goto label_23db04;
    }
    ctx->pc = 0x23DAFCu;
    SET_GPR_U32(ctx, 31, 0x23DB04u);
    ctx->pc = 0x23DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAFCu;
    // 0x23db00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23DAFCu, 0x23DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB04u;
label_23db04:
    // 0x23db04: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23db08:
    // 0x23db08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23db08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23db0c:
    // 0x23db0c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23db10:
    // 0x23db10: 0xc08b5ac  jal         func_22D6B0
label_23db14:
    if (ctx->pc == 0x23DB14u) {
        ctx->pc = 0x23DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB10u;
        // 0x23db14: 0x24655b68  addiu       $a1, $v1, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB18u;
        goto label_23db18;
    }
    ctx->pc = 0x23DB10u;
    SET_GPR_U32(ctx, 31, 0x23DB18u);
    ctx->pc = 0x23DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB10u;
    // 0x23db14: 0x24655b68  addiu       $a1, $v1, 0x5B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DB10u, 0x23DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB18u;
label_23db18:
    // 0x23db18: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x23db18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23db1c:
    // 0x23db1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23db20:
    // 0x23db20: 0xc08b4f8  jal         func_22D3E0
label_23db24:
    if (ctx->pc == 0x23DB24u) {
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB20u;
        // 0x23db24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB28u;
        goto label_23db28;
    }
    ctx->pc = 0x23DB20u;
    SET_GPR_U32(ctx, 31, 0x23DB28u);
    ctx->pc = 0x23DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB20u;
    // 0x23db24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23DB20u, 0x23DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB28u;
label_23db28:
    // 0x23db28: 0x926202bf  lbu         $v0, 0x2BF($s3)
    ctx->pc = 0x23db28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 703)));
label_23db2c:
    // 0x23db2c: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x23db2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_23db30:
    // 0x23db30: 0x966302be  lhu         $v1, 0x2BE($s3)
    ctx->pc = 0x23db30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 702)));
label_23db34:
    // 0x23db34: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x23db34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
label_23db38:
    // 0x23db38: 0x8e6202bc  lw          $v0, 0x2BC($s3)
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 700)));
label_23db3c:
    // 0x23db3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x23db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23db40:
    // 0x23db40: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x23db40u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
label_23db44:
    // 0x23db44: 0x926302bc  lbu         $v1, 0x2BC($s3)
    ctx->pc = 0x23db44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 700)));
label_23db48:
    // 0x23db48: 0x1000002c  b           . + 4 + (0x2C << 2)
label_23db4c:
    if (ctx->pc == 0x23DB4Cu) {
        ctx->pc = 0x23DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB48u;
        // 0x23db4c: 0xa2a30005  sb          $v1, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB50u;
        goto label_23db50;
    }
    ctx->pc = 0x23DB48u;
    {
        const bool branch_taken_0x23db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB48u;
        // 0x23db4c: 0xa2a30005  sb          $v1, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db48) {
            ctx->pc = 0x23DBFCu;
            goto label_23dbfc;
        }
    }
    ctx->pc = 0x23DB50u;
label_23db50:
    // 0x23db50: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x23db50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23db54:
    // 0x23db54: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23db54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23db58:
    // 0x23db58: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23db58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23db5c:
    // 0x23db5c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x23db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_23db60:
    // 0x23db60: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x23db60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23db64:
    // 0x23db64: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23db64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23db68:
    // 0x23db68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23db68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23db6c:
    // 0x23db6c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23db6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23db70:
    // 0x23db70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23db74:
    // 0x23db74: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23db78:
    // 0x23db78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23db7c:
    // 0x23db7c: 0xc09044a  jal         func_241128
label_23db80:
    if (ctx->pc == 0x23DB80u) {
        ctx->pc = 0x23DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB7Cu;
        // 0x23db80: 0xae6202c0  sw          $v0, 0x2C0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB84u;
        goto label_23db84;
    }
    ctx->pc = 0x23DB7Cu;
    SET_GPR_U32(ctx, 31, 0x23DB84u);
    ctx->pc = 0x23DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB7Cu;
    // 0x23db80: 0xae6202c0  sw          $v0, 0x2C0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23DB7Cu, 0x23DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB84u;
label_23db84:
    // 0x23db84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23db84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23db88:
    // 0x23db88: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23db8c:
    // 0x23db8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23db90:
    // 0x23db90: 0xc08b5ac  jal         func_22D6B0
label_23db94:
    if (ctx->pc == 0x23DB94u) {
        ctx->pc = 0x23DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB90u;
        // 0x23db94: 0x24455b80  addiu       $a1, $v0, 0x5B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB98u;
        goto label_23db98;
    }
    ctx->pc = 0x23DB90u;
    SET_GPR_U32(ctx, 31, 0x23DB98u);
    ctx->pc = 0x23DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB90u;
    // 0x23db94: 0x24455b80  addiu       $a1, $v0, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DB90u, 0x23DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB98u;
label_23db98:
    // 0x23db98: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_23db9c:
    // 0x23db9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_23dba0:
    // 0x23dba0: 0x10000019  b           . + 4 + (0x19 << 2)
label_23dba4:
    if (ctx->pc == 0x23DBA4u) {
        ctx->pc = 0x23DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBA0u;
        // 0x23dba4: 0xae6202b4  sw          $v0, 0x2B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBA8u;
        goto label_23dba8;
    }
    ctx->pc = 0x23DBA0u;
    {
        const bool branch_taken_0x23dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBA0u;
        // 0x23dba4: 0xae6202b4  sw          $v0, 0x2B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dba0) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DBA8u;
label_23dba8:
    // 0x23dba8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23dba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23dbac:
    // 0x23dbac: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23dbacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23dbb0:
    // 0x23dbb0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x23dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_23dbb4:
    // 0x23dbb4: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x23dbb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23dbb8:
    // 0x23dbb8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23dbbc:
    // 0x23dbbc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23dbc0:
    // 0x23dbc0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23dbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23dbc4:
    // 0x23dbc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23dbc8:
    // 0x23dbc8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23dbcc:
    // 0x23dbcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23dbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dbd0:
    // 0x23dbd0: 0xc09044a  jal         func_241128
label_23dbd4:
    if (ctx->pc == 0x23DBD4u) {
        ctx->pc = 0x23DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD0u;
        // 0x23dbd4: 0xae6202c4  sw          $v0, 0x2C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBD8u;
        goto label_23dbd8;
    }
    ctx->pc = 0x23DBD0u;
    SET_GPR_U32(ctx, 31, 0x23DBD8u);
    ctx->pc = 0x23DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBD0u;
    // 0x23dbd4: 0xae6202c4  sw          $v0, 0x2C4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23DBD0u, 0x23DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBD8u;
label_23dbd8:
    // 0x23dbd8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23dbdc:
    // 0x23dbdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23dbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dbe0:
    // 0x23dbe0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dbe4:
    // 0x23dbe4: 0xc08b5ac  jal         func_22D6B0
label_23dbe8:
    if (ctx->pc == 0x23DBE8u) {
        ctx->pc = 0x23DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE4u;
        // 0x23dbe8: 0x24655ba0  addiu       $a1, $v1, 0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBECu;
        goto label_23dbec;
    }
    ctx->pc = 0x23DBE4u;
    SET_GPR_U32(ctx, 31, 0x23DBECu);
    ctx->pc = 0x23DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBE4u;
    // 0x23dbe8: 0x24655ba0  addiu       $a1, $v1, 0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DBE4u, 0x23DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBECu;
label_23dbec:
    // 0x23dbec: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x23dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_23dbf0:
    // 0x23dbf0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_23dbf4:
    // 0x23dbf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_23dbf8:
    if (ctx->pc == 0x23DBF8u) {
        ctx->pc = 0x23DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF4u;
        // 0x23dbf8: 0xae6202b4  sw          $v0, 0x2B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBFCu;
        goto label_23dbfc;
    }
    ctx->pc = 0x23DBF4u;
    {
        const bool branch_taken_0x23dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF4u;
        // 0x23dbf8: 0xae6202b4  sw          $v0, 0x2B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbf4) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DBFCu;
label_23dbfc:
    // 0x23dbfc: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x23dbfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_23dc00:
    // 0x23dc00: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x23dc00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_23dc04:
    // 0x23dc04: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x23dc04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23dc08:
    // 0x23dc08: 0x2deb023  subu        $s6, $s6, $fp
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_23dc0c:
    // 0x23dc0c: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x23dc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_23dc10:
    // 0x23dc10: 0x1040ff44  beqz        $v0, . + 4 + (-0xBC << 2)
label_23dc14:
    if (ctx->pc == 0x23DC14u) {
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x23e8821  addu        $s1, $s1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC18u;
        goto label_23dc18;
    }
    ctx->pc = 0x23DC10u;
    {
        const bool branch_taken_0x23dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x23e8821  addu        $s1, $s1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc10) {
            ctx->pc = 0x23D924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d924;
        }
    }
    ctx->pc = 0x23DC18u;
label_23dc18:
    // 0x23dc18: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_23dc1c:
    if (ctx->pc == 0x23DC1Cu) {
        ctx->pc = 0x23DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC18u;
        // 0x23dc1c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC20u;
        goto label_23dc20;
    }
    ctx->pc = 0x23DC18u;
    {
        const bool branch_taken_0x23dc18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC18u;
        // 0x23dc1c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc18) {
            ctx->pc = 0x23DC58u;
            goto label_23dc58;
        }
    }
    ctx->pc = 0x23DC20u;
label_23dc20:
    // 0x23dc20: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23dc24:
    // 0x23dc24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dc28:
    // 0x23dc28: 0xc08b5ac  jal         func_22D6B0
label_23dc2c:
    if (ctx->pc == 0x23DC2Cu) {
        ctx->pc = 0x23DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC28u;
        // 0x23dc2c: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC30u;
        goto label_23dc30;
    }
    ctx->pc = 0x23DC28u;
    SET_GPR_U32(ctx, 31, 0x23DC30u);
    ctx->pc = 0x23DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC28u;
    // 0x23dc2c: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DC28u, 0x23DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC30u;
label_23dc30:
    // 0x23dc30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23dc34:
    // 0x23dc34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23dc38:
    // 0x23dc38: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x23dc38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23dc3c:
    // 0x23dc3c: 0x34058021  ori         $a1, $zero, 0x8021
    ctx->pc = 0x23dc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
label_23dc40:
    // 0x23dc40: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x23dc40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_23dc44:
    // 0x23dc44: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23dc48:
    // 0x23dc48: 0xc08e8be  jal         func_23A2F8
label_23dc4c:
    if (ctx->pc == 0x23DC4Cu) {
        ctx->pc = 0x23DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC48u;
        // 0x23dc4c: 0x32e8ffff  andi        $t0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC50u;
        goto label_23dc50;
    }
    ctx->pc = 0x23DC48u;
    SET_GPR_U32(ctx, 31, 0x23DC50u);
    ctx->pc = 0x23DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC48u;
    // 0x23dc4c: 0x32e8ffff  andi        $t0, $s7, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23DC48u, 0x23DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC50u;
label_23dc50:
    // 0x23dc50: 0x1000000d  b           . + 4 + (0xD << 2)
label_23dc54:
    if (ctx->pc == 0x23DC54u) {
        ctx->pc = 0x23DC58u;
        goto label_23dc58;
    }
    ctx->pc = 0x23DC50u;
    {
        const bool branch_taken_0x23dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dc50) {
            ctx->pc = 0x23DC88u;
            goto label_23dc88;
        }
    }
    ctx->pc = 0x23DC58u;
label_23dc58:
    // 0x23dc58: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dc5c:
    // 0x23dc5c: 0xc08b5ac  jal         func_22D6B0
label_23dc60:
    if (ctx->pc == 0x23DC60u) {
        ctx->pc = 0x23DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC5Cu;
        // 0x23dc60: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC64u;
        goto label_23dc64;
    }
    ctx->pc = 0x23DC5Cu;
    SET_GPR_U32(ctx, 31, 0x23DC64u);
    ctx->pc = 0x23DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC5Cu;
    // 0x23dc60: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DC5Cu, 0x23DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC64u;
label_23dc64:
    // 0x23dc64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23dc68:
    // 0x23dc68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23dc6c:
    // 0x23dc6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_23dc70:
    // 0x23dc70: 0x34058021  ori         $a1, $zero, 0x8021
    ctx->pc = 0x23dc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
label_23dc74:
    // 0x23dc74: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x23dc74u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_23dc78:
    // 0x23dc78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23dc7c:
    // 0x23dc7c: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x23dc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23dc80:
    // 0x23dc80: 0xc08e8be  jal         func_23A2F8
label_23dc84:
    if (ctx->pc == 0x23DC84u) {
        ctx->pc = 0x23DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC80u;
        // 0x23dc84: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC88u;
        goto label_23dc88;
    }
    ctx->pc = 0x23DC80u;
    SET_GPR_U32(ctx, 31, 0x23DC88u);
    ctx->pc = 0x23DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC80u;
    // 0x23dc84: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23DC80u, 0x23DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC88u;
label_23dc88:
    // 0x23dc88: 0xc098560  jal         func_261580
label_23dc8c:
    if (ctx->pc == 0x23DC8Cu) {
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC88u;
        // 0x23dc8c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC90u;
        goto label_23dc90;
    }
    ctx->pc = 0x23DC88u;
    SET_GPR_U32(ctx, 31, 0x23DC90u);
    ctx->pc = 0x23DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC88u;
    // 0x23dc8c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x23DC88u, 0x23DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC90u;
label_23dc90:
    // 0x23dc90: 0x2ee20001  sltiu       $v0, $s7, 0x1
    ctx->pc = 0x23dc90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23dc94:
    // 0x23dc94: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23dc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23dc98:
    // 0x23dc98: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23dc98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23dc9c:
    // 0x23dc9c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23dc9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23dca0:
    // 0x23dca0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23dca0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23dca4:
    // 0x23dca4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23dca4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23dca8:
    // 0x23dca8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23dca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23dcac:
    // 0x23dcac: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23dcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23dcb0:
    // 0x23dcb0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23dcb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23dcb4:
    // 0x23dcb4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23dcb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23dcb8:
    // 0x23dcb8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23dcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23dcbc:
    // 0x23dcbc: 0x3e00008  jr          $ra
label_23dcc0:
    if (ctx->pc == 0x23DCC0u) {
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCC4u;
        goto label_23dcc4;
    }
    ctx->pc = 0x23DCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DCC4u;
label_23dcc4:
    // 0x23dcc4: 0x0  nop
    ctx->pc = 0x23dcc4u;
    // NOP
label_23dcc8:
    // 0x23dcc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23dccc:
    // 0x23dccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23dcd0:
    // 0x23dcd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23dcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23dcd4:
    // 0x23dcd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23dcd8:
    // 0x23dcd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23dcdc:
    // 0x23dcdc: 0x24d2fffc  addiu       $s2, $a2, -0x4
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23dce0:
    // 0x23dce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23dce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23dce4:
    // 0x23dce4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23dce8:
    // 0x23dce8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_23dcec:
    // 0x23dcec: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x23dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
label_23dcf0:
    // 0x23dcf0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x23dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_23dcf4:
    // 0x23dcf4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dcf8:
    // 0x23dcf8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x23dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_23dcfc:
    // 0x23dcfc: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x23dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23dd00:
    // 0x23dd00: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23dd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_23dd04:
    // 0x23dd04: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23dd08:
    // 0x23dd08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23dd0c:
    // 0x23dd0c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23dd10:
    // 0x23dd10: 0xc08b5ac  jal         func_22D6B0
label_23dd14:
    if (ctx->pc == 0x23DD14u) {
        ctx->pc = 0x23DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD10u;
        // 0x23dd14: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD18u;
        goto label_23dd18;
    }
    ctx->pc = 0x23DD10u;
    SET_GPR_U32(ctx, 31, 0x23DD18u);
    ctx->pc = 0x23DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD10u;
    // 0x23dd14: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DD10u, 0x23DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD18u;
label_23dd18:
    // 0x23dd18: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23dd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_23dd1c:
    // 0x23dd1c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_23dd20:
    if (ctx->pc == 0x23DD20u) {
        ctx->pc = 0x23DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD1Cu;
        // 0x23dd20: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD24u;
        goto label_23dd24;
    }
    ctx->pc = 0x23DD1Cu;
    {
        const bool branch_taken_0x23dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD1Cu;
        // 0x23dd20: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd1c) {
            ctx->pc = 0x23DE00u;
            goto label_23de00;
        }
    }
    ctx->pc = 0x23DD24u;
label_23dd24:
    // 0x23dd24: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x23dd24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_23dd28:
    // 0x23dd28: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_23dd2c:
    if (ctx->pc == 0x23DD2Cu) {
        ctx->pc = 0x23DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD28u;
        // 0x23dd2c: 0x3c137fff  lui         $s3, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD30u;
        goto label_23dd30;
    }
    ctx->pc = 0x23DD28u;
    {
        const bool branch_taken_0x23dd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD28u;
        // 0x23dd2c: 0x3c137fff  lui         $s3, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd28) {
            ctx->pc = 0x23DE00u;
            goto label_23de00;
        }
    }
    ctx->pc = 0x23DD30u;
label_23dd30:
    // 0x23dd30: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
label_23dd34:
    // 0x23dd34: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x23dd34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_23dd38:
    // 0x23dd38: 0x3c14dfff  lui         $s4, 0xDFFF
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57343 << 16));
label_23dd3c:
    // 0x23dd3c: 0x241e0081  addiu       $fp, $zero, 0x81
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_23dd40:
    // 0x23dd40: 0x24170083  addiu       $s7, $zero, 0x83
    ctx->pc = 0x23dd40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_23dd44:
    // 0x23dd44: 0x36d6fff7  ori         $s6, $s6, 0xFFF7
    ctx->pc = 0x23dd44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65527);
label_23dd48:
    // 0x23dd48: 0x36b5fffb  ori         $s5, $s5, 0xFFFB
    ctx->pc = 0x23dd48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65531);
label_23dd4c:
    // 0x23dd4c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x23dd4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_23dd50:
    // 0x23dd50: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x23dd50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_23dd54:
    // 0x23dd54: 0x0  nop
    ctx->pc = 0x23dd54u;
    // NOP
label_23dd58:
    // 0x23dd58: 0xc09035e  jal         func_240D78
label_23dd5c:
    if (ctx->pc == 0x23DD5Cu) {
        ctx->pc = 0x23DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD58u;
        // 0x23dd5c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD60u;
        goto label_23dd60;
    }
    ctx->pc = 0x23DD58u;
    SET_GPR_U32(ctx, 31, 0x23DD60u);
    ctx->pc = 0x23DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD58u;
    // 0x23dd5c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240D78u, 0x23DD58u, 0x23DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD60u;
label_23dd60:
    // 0x23dd60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23dd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dd64:
    // 0x23dd64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dd68:
    // 0x23dd68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23dd6c:
    // 0x23dd6c: 0xc08b5ac  jal         func_22D6B0
label_23dd70:
    if (ctx->pc == 0x23DD70u) {
        ctx->pc = 0x23DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD6Cu;
        // 0x23dd70: 0x244558b8  addiu       $a1, $v0, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD74u;
        goto label_23dd74;
    }
    ctx->pc = 0x23DD6Cu;
    SET_GPR_U32(ctx, 31, 0x23DD74u);
    ctx->pc = 0x23DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD6Cu;
    // 0x23dd70: 0x244558b8  addiu       $a1, $v0, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DD6Cu, 0x23DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD74u;
label_23dd74:
    // 0x23dd74: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x23dd74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23dd78:
    // 0x23dd78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23dd7c:
    // 0x23dd7c: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_23dd80:
    if (ctx->pc == 0x23DD80u) {
        ctx->pc = 0x23DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD7Cu;
        // 0x23dd80: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD84u;
        goto label_23dd84;
    }
    ctx->pc = 0x23DD7Cu;
    {
        const bool branch_taken_0x23dd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23dd7c) {
            ctx->pc = 0x23DD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD7Cu;
            // 0x23dd80: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDB8u;
            goto label_23ddb8;
        }
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x23dd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_23dd88:
    // 0x23dd88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23dd8c:
    if (ctx->pc == 0x23DD8Cu) {
        ctx->pc = 0x23DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD88u;
        // 0x23dd8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD90u;
        goto label_23dd90;
    }
    ctx->pc = 0x23DD88u;
    {
        const bool branch_taken_0x23dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD88u;
        // 0x23dd8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd88) {
            ctx->pc = 0x23DDA0u;
            goto label_23dda0;
        }
    }
    ctx->pc = 0x23DD90u;
label_23dd90:
    // 0x23dd90: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_23dd94:
    if (ctx->pc == 0x23DD94u) {
        ctx->pc = 0x23DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD90u;
        // 0x23dd94: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD98u;
        goto label_23dd98;
    }
    ctx->pc = 0x23DD90u;
    {
        const bool branch_taken_0x23dd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23dd90) {
            ctx->pc = 0x23DD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD90u;
            // 0x23dd94: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DD98u;
label_23dd98:
    // 0x23dd98: 0x10000011  b           . + 4 + (0x11 << 2)
label_23dd9c:
    if (ctx->pc == 0x23DD9Cu) {
        ctx->pc = 0x23DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD98u;
        // 0x23dd9c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDA0u;
        goto label_23dda0;
    }
    ctx->pc = 0x23DD98u;
    {
        const bool branch_taken_0x23dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD98u;
        // 0x23dd9c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd98) {
            ctx->pc = 0x23DDE0u;
            goto label_23dde0;
        }
    }
    ctx->pc = 0x23DDA0u;
label_23dda0:
    // 0x23dda0: 0x507e000a  beql        $v1, $fp, . + 4 + (0xA << 2)
label_23dda4:
    if (ctx->pc == 0x23DDA4u) {
        ctx->pc = 0x23DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDA0u;
        // 0x23dda4: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDA8u;
        goto label_23dda8;
    }
    ctx->pc = 0x23DDA0u;
    {
        const bool branch_taken_0x23dda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x23dda0) {
            ctx->pc = 0x23DDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDA0u;
            // 0x23dda4: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDCCu;
            goto label_23ddcc;
        }
    }
    ctx->pc = 0x23DDA8u;
label_23dda8:
    // 0x23dda8: 0x5077000a  beql        $v1, $s7, . + 4 + (0xA << 2)
label_23ddac:
    if (ctx->pc == 0x23DDACu) {
        ctx->pc = 0x23DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDA8u;
        // 0x23ddac: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB0u;
        goto label_23ddb0;
    }
    ctx->pc = 0x23DDA8u;
    {
        const bool branch_taken_0x23dda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x23dda8) {
            ctx->pc = 0x23DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDA8u;
            // 0x23ddac: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDD4u;
            goto label_23ddd4;
        }
    }
    ctx->pc = 0x23DDB0u;
label_23ddb0:
    // 0x23ddb0: 0x1000000b  b           . + 4 + (0xB << 2)
label_23ddb4:
    if (ctx->pc == 0x23DDB4u) {
        ctx->pc = 0x23DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB0u;
        // 0x23ddb4: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB8u;
        goto label_23ddb8;
    }
    ctx->pc = 0x23DDB0u;
    {
        const bool branch_taken_0x23ddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB0u;
        // 0x23ddb4: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddb0) {
            ctx->pc = 0x23DDE0u;
            goto label_23dde0;
        }
    }
    ctx->pc = 0x23DDB8u;
label_23ddb8:
    // 0x23ddb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_23ddbc:
    if (ctx->pc == 0x23DDBCu) {
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0x561024  and         $v0, $v0, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDC0u;
        goto label_23ddc0;
    }
    ctx->pc = 0x23DDB8u;
    {
        const bool branch_taken_0x23ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0x561024  and         $v0, $v0, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddb8) {
            ctx->pc = 0x23DDD8u;
            goto label_23ddd8;
        }
    }
    ctx->pc = 0x23DDC0u;
label_23ddc0:
    // 0x23ddc0: 0xae2002c8  sw          $zero, 0x2C8($s1)
    ctx->pc = 0x23ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 0));
label_23ddc4:
    // 0x23ddc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_23ddc8:
    if (ctx->pc == 0x23DDC8u) {
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x551024  and         $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDCCu;
        goto label_23ddcc;
    }
    ctx->pc = 0x23DDC4u;
    {
        const bool branch_taken_0x23ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x551024  and         $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddc4) {
            ctx->pc = 0x23DDD8u;
            goto label_23ddd8;
        }
    }
    ctx->pc = 0x23DDCCu;
label_23ddcc:
    // 0x23ddcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ddd0:
    if (ctx->pc == 0x23DDD0u) {
        ctx->pc = 0x23DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDCCu;
        // 0x23ddd0: 0x541024  and         $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDD4u;
        goto label_23ddd4;
    }
    ctx->pc = 0x23DDCCu;
    {
        const bool branch_taken_0x23ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDCCu;
        // 0x23ddd0: 0x541024  and         $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddcc) {
            ctx->pc = 0x23DDD8u;
            goto label_23ddd8;
        }
    }
    ctx->pc = 0x23DDD4u;
label_23ddd4:
    // 0x23ddd4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x23ddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_23ddd8:
    // 0x23ddd8: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x23ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
label_23dddc:
    // 0x23dddc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x23dddcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_23dde0:
    // 0x23dde0: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x23dde0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_23dde4:
    // 0x23dde4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23dde4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_23dde8:
    // 0x23dde8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23ddec:
    if (ctx->pc == 0x23DDECu) {
        ctx->pc = 0x23DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDE8u;
        // 0x23ddec: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDF0u;
        goto label_23ddf0;
    }
    ctx->pc = 0x23DDE8u;
    {
        const bool branch_taken_0x23dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDE8u;
        // 0x23ddec: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dde8) {
            ctx->pc = 0x23DDFCu;
            goto label_23ddfc;
        }
    }
    ctx->pc = 0x23DDF0u;
label_23ddf0:
    // 0x23ddf0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x23ddf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_23ddf4:
    // 0x23ddf4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_23ddf8:
    if (ctx->pc == 0x23DDF8u) {
        ctx->pc = 0x23DDFCu;
        goto label_23ddfc;
    }
    ctx->pc = 0x23DDF4u;
    {
        const bool branch_taken_0x23ddf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ddf4) {
            ctx->pc = 0x23DD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23dd58;
        }
    }
    ctx->pc = 0x23DDFCu;
label_23ddfc:
    // 0x23ddfc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23de00:
    // 0x23de00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23de00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23de04:
    // 0x23de04: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x23de04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23de08:
    // 0x23de08: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23de0c:
    // 0x23de0c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23de0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23de10:
    // 0x23de10: 0x24a55840  addiu       $a1, $a1, 0x5840
    ctx->pc = 0x23de10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
label_23de14:
    // 0x23de14: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23de14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23de18:
    // 0x23de18: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23de1c:
    // 0x23de1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23de1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23de20:
    // 0x23de20: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23de20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23de24:
    // 0x23de24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23de24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23de28:
    // 0x23de28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23de28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23de2c:
    // 0x23de2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23de2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23de30:
    // 0x23de30: 0x808b5ac  j           func_22D6B0
label_23de34:
    if (ctx->pc == 0x23DE34u) {
        ctx->pc = 0x23DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE30u;
        // 0x23de34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE38u;
        goto label_23de38;
    }
    ctx->pc = 0x23DE30u;
    ctx->pc = 0x23DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE30u;
    // 0x23de34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x23DE38u;
label_23de38:
    // 0x23de38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23de3c:
    // 0x23de3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23de40:
    // 0x23de40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23de44:
    // 0x23de44: 0x24d4fffc  addiu       $s4, $a2, -0x4
    ctx->pc = 0x23de44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_23de48:
    // 0x23de48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23de4c:
    // 0x23de4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23de4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23de50:
    // 0x23de50: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_23de54:
    // 0x23de54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23de54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23de58:
    // 0x23de58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_23de5c:
    // 0x23de5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23de5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23de60:
    // 0x23de60: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x23de60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_23de64:
    // 0x23de64: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x23de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_23de68:
    // 0x23de68: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23de68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23de6c:
    // 0x23de6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23de70:
    // 0x23de70: 0xc098552  jal         func_261548
label_23de74:
    if (ctx->pc == 0x23DE74u) {
        ctx->pc = 0x23DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE70u;
        // 0x23de74: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE78u;
        goto label_23de78;
    }
    ctx->pc = 0x23DE70u;
    SET_GPR_U32(ctx, 31, 0x23DE78u);
    ctx->pc = 0x23DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE70u;
    // 0x23de74: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23DE70u, 0x23DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE78u;
label_23de78:
    // 0x23de78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23de7c:
    // 0x23de7c: 0x12c000c0  beqz        $s6, . + 4 + (0xC0 << 2)
label_23de80:
    if (ctx->pc == 0x23DE80u) {
        ctx->pc = 0x23DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE7Cu;
        // 0x23de80: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE84u;
        goto label_23de84;
    }
    ctx->pc = 0x23DE7Cu;
    {
        const bool branch_taken_0x23de7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE7Cu;
        // 0x23de80: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de7c) {
            ctx->pc = 0x23E180u;
            goto label_23e180;
        }
    }
    ctx->pc = 0x23DE84u;
label_23de84:
    // 0x23de84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23de88:
    // 0x23de88: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
label_23de8c:
    // 0x23de8c: 0xc08b5ac  jal         func_22D6B0
label_23de90:
    if (ctx->pc == 0x23DE90u) {
        ctx->pc = 0x23DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE8Cu;
        // 0x23de90: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE94u;
        goto label_23de94;
    }
    ctx->pc = 0x23DE8Cu;
    SET_GPR_U32(ctx, 31, 0x23DE94u);
    ctx->pc = 0x23DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE8Cu;
    // 0x23de90: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DE8Cu, 0x23DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE94u;
label_23de94:
    // 0x23de94: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x23de94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_23de98:
    // 0x23de98: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
label_23de9c:
    if (ctx->pc == 0x23DE9Cu) {
        ctx->pc = 0x23DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE98u;
        // 0x23de9c: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEA0u;
        goto label_23dea0;
    }
    ctx->pc = 0x23DE98u;
    {
        const bool branch_taken_0x23de98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE98u;
        // 0x23de9c: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de98) {
            ctx->pc = 0x23E13Cu;
            goto label_23e13c;
        }
    }
    ctx->pc = 0x23DEA0u;
label_23dea0:
    // 0x23dea0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23dea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23dea4:
    // 0x23dea4: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_23dea8:
    if (ctx->pc == 0x23DEA8u) {
        ctx->pc = 0x23DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA4u;
        // 0x23dea8: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEACu;
        goto label_23deac;
    }
    ctx->pc = 0x23DEA4u;
    {
        const bool branch_taken_0x23dea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA4u;
        // 0x23dea8: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea4) {
            ctx->pc = 0x23E13Cu;
            goto label_23e13c;
        }
    }
    ctx->pc = 0x23DEACu;
label_23deac:
    // 0x23deac: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x23deacu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
label_23deb0:
    // 0x23deb0: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x23deb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
label_23deb4:
    // 0x23deb4: 0x0  nop
    ctx->pc = 0x23deb4u;
    // NOP
label_23deb8:
    // 0x23deb8: 0xc09035e  jal         func_240D78
label_23debc:
    if (ctx->pc == 0x23DEBCu) {
        ctx->pc = 0x23DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB8u;
        // 0x23debc: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEC0u;
        goto label_23dec0;
    }
    ctx->pc = 0x23DEB8u;
    SET_GPR_U32(ctx, 31, 0x23DEC0u);
    ctx->pc = 0x23DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEB8u;
    // 0x23debc: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240D78u, 0x23DEB8u, 0x23DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEC0u;
label_23dec0:
    // 0x23dec0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23dec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dec4:
    // 0x23dec4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dec8:
    // 0x23dec8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23decc:
    // 0x23decc: 0xc08b5ac  jal         func_22D6B0
label_23ded0:
    if (ctx->pc == 0x23DED0u) {
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0x244558b8  addiu       $a1, $v0, 0x58B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DED4u;
        goto label_23ded4;
    }
    ctx->pc = 0x23DECCu;
    SET_GPR_U32(ctx, 31, 0x23DED4u);
    ctx->pc = 0x23DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DECCu;
    // 0x23ded0: 0x244558b8  addiu       $a1, $v0, 0x58B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DECCu, 0x23DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DED4u;
label_23ded4:
    // 0x23ded4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x23ded4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23ded8:
    // 0x23ded8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23dedc:
    // 0x23dedc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_23dee0:
    if (ctx->pc == 0x23DEE0u) {
        ctx->pc = 0x23DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEDCu;
        // 0x23dee0: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEE4u;
        goto label_23dee4;
    }
    ctx->pc = 0x23DEDCu;
    {
        const bool branch_taken_0x23dedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEDCu;
        // 0x23dee0: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dedc) {
            ctx->pc = 0x23DF18u;
            goto label_23df18;
        }
    }
    ctx->pc = 0x23DEE4u;
label_23dee4:
    // 0x23dee4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23dee8:
    if (ctx->pc == 0x23DEE8u) {
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEECu;
        goto label_23deec;
    }
    ctx->pc = 0x23DEE4u;
    {
        const bool branch_taken_0x23dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dee4) {
            ctx->pc = 0x23DEFCu;
            goto label_23defc;
        }
    }
    ctx->pc = 0x23DEECu;
label_23deec:
    // 0x23deec: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_23def0:
    if (ctx->pc == 0x23DEF0u) {
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0x2a820006  slti        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEF4u;
        goto label_23def4;
    }
    ctx->pc = 0x23DEECu;
    {
        const bool branch_taken_0x23deec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0x2a820006  slti        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deec) {
            ctx->pc = 0x23DFC0u;
            goto label_23dfc0;
        }
    }
    ctx->pc = 0x23DEF4u;
label_23def4:
    // 0x23def4: 0x1000008a  b           . + 4 + (0x8A << 2)
label_23def8:
    if (ctx->pc == 0x23DEF8u) {
        ctx->pc = 0x23DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF4u;
        // 0x23def8: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEFCu;
        goto label_23defc;
    }
    ctx->pc = 0x23DEF4u;
    {
        const bool branch_taken_0x23def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF4u;
        // 0x23def8: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23def4) {
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DEFCu;
label_23defc:
    // 0x23defc: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x23defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_23df00:
    // 0x23df00: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
label_23df04:
    if (ctx->pc == 0x23DF04u) {
        ctx->pc = 0x23DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF00u;
        // 0x23df04: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF08u;
        goto label_23df08;
    }
    ctx->pc = 0x23DF00u;
    {
        const bool branch_taken_0x23df00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF00u;
        // 0x23df04: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df00) {
            ctx->pc = 0x23E050u;
            goto label_23e050;
        }
    }
    ctx->pc = 0x23DF08u;
label_23df08:
    // 0x23df08: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
label_23df0c:
    if (ctx->pc == 0x23DF0Cu) {
        ctx->pc = 0x23DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF08u;
        // 0x23df0c: 0x2a820006  slti        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF10u;
        goto label_23df10;
    }
    ctx->pc = 0x23DF08u;
    {
        const bool branch_taken_0x23df08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF08u;
        // 0x23df0c: 0x2a820006  slti        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df08) {
            ctx->pc = 0x23E0B8u;
            goto label_23e0b8;
        }
    }
    ctx->pc = 0x23DF10u;
label_23df10:
    // 0x23df10: 0x10000083  b           . + 4 + (0x83 << 2)
label_23df14:
    if (ctx->pc == 0x23DF14u) {
        ctx->pc = 0x23DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF10u;
        // 0x23df14: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF18u;
        goto label_23df18;
    }
    ctx->pc = 0x23DF10u;
    {
        const bool branch_taken_0x23df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF10u;
        // 0x23df14: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df10) {
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DF18u;
label_23df18:
    // 0x23df18: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x23df18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_23df1c:
    // 0x23df1c: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
label_23df20:
    if (ctx->pc == 0x23DF20u) {
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF24u;
        goto label_23df24;
    }
    ctx->pc = 0x23DF1Cu;
    {
        const bool branch_taken_0x23df1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df1c) {
            ctx->pc = 0x23DF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF1Cu;
            // 0x23df20: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DF24u;
label_23df24:
    // 0x23df24: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23df24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23df28:
    // 0x23df28: 0x5455007d  bnel        $v0, $s5, . + 4 + (0x7D << 2)
label_23df2c:
    if (ctx->pc == 0x23DF2Cu) {
        ctx->pc = 0x23DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF28u;
        // 0x23df2c: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF30u;
        goto label_23df30;
    }
    ctx->pc = 0x23DF28u;
    {
        const bool branch_taken_0x23df28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x23df28) {
            ctx->pc = 0x23DF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF28u;
            // 0x23df2c: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DF30u;
label_23df30:
    // 0x23df30: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x23df30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23df34:
    // 0x23df34: 0x266446f1  addiu       $a0, $s3, 0x46F1
    ctx->pc = 0x23df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 18161));
label_23df38:
    // 0x23df38: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23df38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23df3c:
    // 0x23df3c: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23df3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23df40:
    // 0x23df40: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_23df44:
    // 0x23df44: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x23df44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23df48:
    // 0x23df48: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23df48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23df4c:
    // 0x23df4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23df50:
    // 0x23df50: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x23df50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_23df54:
    // 0x23df54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23df58:
    // 0x23df58: 0xc09921a  jal         func_264868
label_23df5c:
    if (ctx->pc == 0x23DF5Cu) {
        ctx->pc = 0x23DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF58u;
        // 0x23df5c: 0xa29025  or          $s2, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF60u;
        goto label_23df60;
    }
    ctx->pc = 0x23DF58u;
    SET_GPR_U32(ctx, 31, 0x23DF60u);
    ctx->pc = 0x23DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF58u;
    // 0x23df5c: 0xa29025  or          $s2, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x23DF58u, 0x23DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF60u;
label_23df60:
    // 0x23df60: 0xc08b5fe  jal         func_22D7F8
label_23df64:
    if (ctx->pc == 0x23DF64u) {
        ctx->pc = 0x23DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF60u;
        // 0x23df64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF68u;
        goto label_23df68;
    }
    ctx->pc = 0x23DF60u;
    SET_GPR_U32(ctx, 31, 0x23DF68u);
    ctx->pc = 0x23DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF60u;
    // 0x23df64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23DF60u, 0x23DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF68u;
label_23df68:
    // 0x23df68: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23df6c:
    // 0x23df6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23df6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23df70:
    // 0x23df70: 0xc08b5fe  jal         func_22D7F8
label_23df74:
    if (ctx->pc == 0x23DF74u) {
        ctx->pc = 0x23DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF70u;
        // 0x23df74: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF78u;
        goto label_23df78;
    }
    ctx->pc = 0x23DF70u;
    SET_GPR_U32(ctx, 31, 0x23DF78u);
    ctx->pc = 0x23DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF70u;
    // 0x23df74: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x23DF70u, 0x23DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF78u;
label_23df78:
    // 0x23df78: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x23df78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_23df7c:
    // 0x23df7c: 0x8e6302b8  lw          $v1, 0x2B8($s3)
    ctx->pc = 0x23df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_23df80:
    // 0x23df80: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x23df80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_23df84:
    // 0x23df84: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x23df84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_23df88:
    // 0x23df88: 0x2508024  and         $s0, $s2, $s0
    ctx->pc = 0x23df88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
label_23df8c:
    // 0x23df8c: 0x56030064  bnel        $s0, $v1, . + 4 + (0x64 << 2)
label_23df90:
    if (ctx->pc == 0x23DF90u) {
        ctx->pc = 0x23DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF8Cu;
        // 0x23df90: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF94u;
        goto label_23df94;
    }
    ctx->pc = 0x23DF8Cu;
    {
        const bool branch_taken_0x23df8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x23df8c) {
            ctx->pc = 0x23DF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF8Cu;
            // 0x23df90: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DF94u;
label_23df94:
    // 0x23df94: 0xc09044a  jal         func_241128
label_23df98:
    if (ctx->pc == 0x23DF98u) {
        ctx->pc = 0x23DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF94u;
        // 0x23df98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF9Cu;
        goto label_23df9c;
    }
    ctx->pc = 0x23DF94u;
    SET_GPR_U32(ctx, 31, 0x23DF9Cu);
    ctx->pc = 0x23DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF94u;
    // 0x23df98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23DF94u, 0x23DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF9Cu;
label_23df9c:
    // 0x23df9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23df9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dfa0:
    // 0x23dfa0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23dfa4:
    // 0x23dfa4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23dfa8:
    // 0x23dfa8: 0xc08b5ac  jal         func_22D6B0
label_23dfac:
    if (ctx->pc == 0x23DFACu) {
        ctx->pc = 0x23DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA8u;
        // 0x23dfac: 0x24455bf0  addiu       $a1, $v0, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFB0u;
        goto label_23dfb0;
    }
    ctx->pc = 0x23DFA8u;
    SET_GPR_U32(ctx, 31, 0x23DFB0u);
    ctx->pc = 0x23DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFA8u;
    // 0x23dfac: 0x24455bf0  addiu       $a1, $v0, 0x5BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23DFA8u, 0x23DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFB0u;
label_23dfb0:
    // 0x23dfb0: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x23dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_23dfb4:
    // 0x23dfb4: 0xae7202b8  sw          $s2, 0x2B8($s3)
    ctx->pc = 0x23dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 696), GPR_U32(ctx, 18));
label_23dfb8:
    // 0x23dfb8: 0x10000057  b           . + 4 + (0x57 << 2)
label_23dfbc:
    if (ctx->pc == 0x23DFBCu) {
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFC0u;
        goto label_23dfc0;
    }
    ctx->pc = 0x23DFB8u;
    {
        const bool branch_taken_0x23dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfb8) {
            ctx->pc = 0x23E118u;
            goto label_23e118;
        }
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
label_23dfc4:
    if (ctx->pc == 0x23DFC4u) {
        ctx->pc = 0x23DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC0u;
        // 0x23dfc4: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFC8u;
        goto label_23dfc8;
    }
    ctx->pc = 0x23DFC0u;
    {
        const bool branch_taken_0x23dfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dfc0) {
            ctx->pc = 0x23DFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFC0u;
            // 0x23dfc4: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DFC8u;
label_23dfc8:
    // 0x23dfc8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23dfc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23dfcc:
    // 0x23dfcc: 0x54550054  bnel        $v0, $s5, . + 4 + (0x54 << 2)
label_23dfd0:
    if (ctx->pc == 0x23DFD0u) {
        ctx->pc = 0x23DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFCCu;
        // 0x23dfd0: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFD4u;
        goto label_23dfd4;
    }
    ctx->pc = 0x23DFCCu;
    {
        const bool branch_taken_0x23dfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x23dfcc) {
            ctx->pc = 0x23DFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFCCu;
            // 0x23dfd0: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23DFD4u;
label_23dfd4:
    // 0x23dfd4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x23dfd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23dfd8:
    // 0x23dfd8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23dfd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23dfdc:
    // 0x23dfdc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23dfe0:
    // 0x23dfe0: 0x926402ca  lbu         $a0, 0x2CA($s3)
    ctx->pc = 0x23dfe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 714)));
label_23dfe4:
    // 0x23dfe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23dfe8:
    // 0x23dfe8: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x23dfe8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23dfec:
    // 0x23dfec: 0x92270005  lbu         $a3, 0x5($s1)
    ctx->pc = 0x23dfecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23dff0:
    // 0x23dff0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_23dff4:
    if (ctx->pc == 0x23DFF4u) {
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x8e6602c8  lw          $a2, 0x2C8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFF8u;
        goto label_23dff8;
    }
    ctx->pc = 0x23DFF0u;
    {
        const bool branch_taken_0x23dff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x8e6602c8  lw          $a2, 0x2C8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dff0) {
            ctx->pc = 0x23E018u;
            goto label_23e018;
        }
    }
    ctx->pc = 0x23DFF8u;
label_23dff8:
    // 0x23dff8: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x23dff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_23dffc:
    // 0x23dffc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23e000:
    if (ctx->pc == 0x23E000u) {
        ctx->pc = 0x23E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFFCu;
        // 0x23e000: 0x8e6302b0  lw          $v1, 0x2B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E004u;
        goto label_23e004;
    }
    ctx->pc = 0x23DFFCu;
    {
        const bool branch_taken_0x23dffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dffc) {
            ctx->pc = 0x23E000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFFCu;
            // 0x23e000: 0x8e6302b0  lw          $v1, 0x2B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E01Cu;
            goto label_23e01c;
        }
    }
    ctx->pc = 0x23E004u;
label_23e004:
    // 0x23e004: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
label_23e008:
    // 0x23e008: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23e00c:
    // 0x23e00c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x23e00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23e010:
    // 0x23e010: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23e014:
    if (ctx->pc == 0x23E014u) {
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E018u;
        goto label_23e018;
    }
    ctx->pc = 0x23E010u;
    {
        const bool branch_taken_0x23e010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e010) {
            ctx->pc = 0x23E034u;
            goto label_23e034;
        }
    }
    ctx->pc = 0x23E018u;
label_23e018:
    // 0x23e018: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x23e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_23e01c:
    // 0x23e01c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23e020:
    // 0x23e020: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x23e020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_23e024:
    // 0x23e024: 0xae6002c8  sw          $zero, 0x2C8($s3)
    ctx->pc = 0x23e024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 0));
label_23e028:
    // 0x23e028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23e028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23e02c:
    // 0x23e02c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_23e030:
    if (ctx->pc == 0x23E030u) {
        ctx->pc = 0x23E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E02Cu;
        // 0x23e030: 0xae6302b0  sw          $v1, 0x2B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E034u;
        goto label_23e034;
    }
    ctx->pc = 0x23E02Cu;
    {
        const bool branch_taken_0x23e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E02Cu;
        // 0x23e030: 0xae6302b0  sw          $v1, 0x2B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e02c) {
            ctx->pc = 0x23E11Cu;
            goto label_23e11c;
        }
    }
    ctx->pc = 0x23E034u;
label_23e034:
    // 0x23e034: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23e038:
    // 0x23e038: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23e03c:
    // 0x23e03c: 0x30e4000f  andi        $a0, $a3, 0xF
    ctx->pc = 0x23e03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_23e040:
    // 0x23e040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23e040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23e044:
    // 0x23e044: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23e044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23e048:
    // 0x23e048: 0x10000034  b           . + 4 + (0x34 << 2)
label_23e04c:
    if (ctx->pc == 0x23E04Cu) {
        ctx->pc = 0x23E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E048u;
        // 0x23e04c: 0xae6302c8  sw          $v1, 0x2C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E050u;
        goto label_23e050;
    }
    ctx->pc = 0x23E048u;
    {
        const bool branch_taken_0x23e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E048u;
        // 0x23e04c: 0xae6302c8  sw          $v1, 0x2C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e048) {
            ctx->pc = 0x23E11Cu;
            goto label_23e11c;
        }
    }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x23e050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_23e054:
    // 0x23e054: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_23e058:
    if (ctx->pc == 0x23E058u) {
        ctx->pc = 0x23E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E054u;
        // 0x23e058: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E05Cu;
        goto label_23e05c;
    }
    ctx->pc = 0x23E054u;
    {
        const bool branch_taken_0x23e054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e054) {
            ctx->pc = 0x23E058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E054u;
            // 0x23e058: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E05Cu;
label_23e05c:
    // 0x23e05c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23e05cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23e060:
    // 0x23e060: 0x5455002f  bnel        $v0, $s5, . + 4 + (0x2F << 2)
label_23e064:
    if (ctx->pc == 0x23E064u) {
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E068u;
        goto label_23e068;
    }
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E060u;
            // 0x23e064: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E068u;
label_23e068:
    // 0x23e068: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x23e068u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23e06c:
    // 0x23e06c: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23e06cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23e070:
    // 0x23e070: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23e070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23e074:
    // 0x23e074: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x23e074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_23e078:
    // 0x23e078: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x23e078u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23e07c:
    // 0x23e07c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23e080:
    // 0x23e080: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23e080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23e084:
    // 0x23e084: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23e084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23e088:
    // 0x23e088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23e08c:
    // 0x23e08c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23e090:
    // 0x23e090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e094:
    // 0x23e094: 0xc09044a  jal         func_241128
label_23e098:
    if (ctx->pc == 0x23E098u) {
        ctx->pc = 0x23E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E094u;
        // 0x23e098: 0xae6202c0  sw          $v0, 0x2C0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E09Cu;
        goto label_23e09c;
    }
    ctx->pc = 0x23E094u;
    SET_GPR_U32(ctx, 31, 0x23E09Cu);
    ctx->pc = 0x23E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E094u;
    // 0x23e098: 0xae6202c0  sw          $v0, 0x2C0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23E094u, 0x23E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E09Cu;
label_23e09c:
    // 0x23e09c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e0a0:
    // 0x23e0a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e0a4:
    // 0x23e0a4: 0xc08b5ac  jal         func_22D6B0
label_23e0a8:
    if (ctx->pc == 0x23E0A8u) {
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x27c55b80  addiu       $a1, $fp, 0x5B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0ACu;
        goto label_23e0ac;
    }
    ctx->pc = 0x23E0A4u;
    SET_GPR_U32(ctx, 31, 0x23E0ACu);
    ctx->pc = 0x23E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0A4u;
    // 0x23e0a8: 0x27c55b80  addiu       $a1, $fp, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E0A4u, 0x23E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0ACu;
label_23e0ac:
    // 0x23e0ac: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x23e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_23e0b0:
    // 0x23e0b0: 0x10000019  b           . + 4 + (0x19 << 2)
label_23e0b4:
    if (ctx->pc == 0x23E0B4u) {
        ctx->pc = 0x23E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0B0u;
        // 0x23e0b4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0B8u;
        goto label_23e0b8;
    }
    ctx->pc = 0x23E0B0u;
    {
        const bool branch_taken_0x23e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0B0u;
        // 0x23e0b4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0b0) {
            ctx->pc = 0x23E118u;
            goto label_23e118;
        }
    }
    ctx->pc = 0x23E0B8u;
label_23e0b8:
    // 0x23e0b8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_23e0bc:
    if (ctx->pc == 0x23E0BCu) {
        ctx->pc = 0x23E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0B8u;
        // 0x23e0bc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0C0u;
        goto label_23e0c0;
    }
    ctx->pc = 0x23E0B8u;
    {
        const bool branch_taken_0x23e0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e0b8) {
            ctx->pc = 0x23E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E0B8u;
            // 0x23e0bc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E0C0u;
label_23e0c0:
    // 0x23e0c0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23e0c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23e0c4:
    // 0x23e0c4: 0x54550016  bnel        $v0, $s5, . + 4 + (0x16 << 2)
label_23e0c8:
    if (ctx->pc == 0x23E0C8u) {
        ctx->pc = 0x23E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C4u;
        // 0x23e0c8: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0CCu;
        goto label_23e0cc;
    }
    ctx->pc = 0x23E0C4u;
    {
        const bool branch_taken_0x23e0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x23e0c4) {
            ctx->pc = 0x23E0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E0C4u;
            // 0x23e0c8: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E0CCu;
label_23e0cc:
    // 0x23e0cc: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x23e0ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23e0d0:
    // 0x23e0d0: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x23e0d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_23e0d4:
    // 0x23e0d4: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x23e0d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23e0d8:
    // 0x23e0d8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x23e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_23e0dc:
    // 0x23e0dc: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x23e0dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_23e0e0:
    // 0x23e0e0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23e0e4:
    // 0x23e0e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_23e0e8:
    // 0x23e0e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23e0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23e0ec:
    // 0x23e0ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23e0f0:
    // 0x23e0f0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23e0f4:
    // 0x23e0f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e0f8:
    // 0x23e0f8: 0xc09044a  jal         func_241128
label_23e0fc:
    if (ctx->pc == 0x23E0FCu) {
        ctx->pc = 0x23E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F8u;
        // 0x23e0fc: 0xae6202c4  sw          $v0, 0x2C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E100u;
        goto label_23e100;
    }
    ctx->pc = 0x23E0F8u;
    SET_GPR_U32(ctx, 31, 0x23E100u);
    ctx->pc = 0x23E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0F8u;
    // 0x23e0fc: 0xae6202c4  sw          $v0, 0x2C4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241128u, 0x23E0F8u, 0x23E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E100u;
label_23e100:
    // 0x23e100: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e104:
    // 0x23e104: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e108:
    // 0x23e108: 0xc08b5ac  jal         func_22D6B0
label_23e10c:
    if (ctx->pc == 0x23E10Cu) {
        ctx->pc = 0x23E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E108u;
        // 0x23e10c: 0x26e55ba0  addiu       $a1, $s7, 0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E110u;
        goto label_23e110;
    }
    ctx->pc = 0x23E108u;
    SET_GPR_U32(ctx, 31, 0x23E110u);
    ctx->pc = 0x23E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E108u;
    // 0x23e10c: 0x26e55ba0  addiu       $a1, $s7, 0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E108u, 0x23E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E110u;
label_23e110:
    // 0x23e110: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x23e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_23e114:
    // 0x23e114: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_23e118:
    // 0x23e118: 0xae6202b4  sw          $v0, 0x2B4($s3)
    ctx->pc = 0x23e118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 692), GPR_U32(ctx, 2));
label_23e11c:
    // 0x23e11c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x23e11cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23e120:
    // 0x23e120: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x23e120u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_23e124:
    // 0x23e124: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x23e124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_23e128:
    // 0x23e128: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23e12c:
    if (ctx->pc == 0x23E12Cu) {
        ctx->pc = 0x23E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E128u;
        // 0x23e12c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E130u;
        goto label_23e130;
    }
    ctx->pc = 0x23E128u;
    {
        const bool branch_taken_0x23e128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E128u;
        // 0x23e12c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e128) {
            ctx->pc = 0x23E13Cu;
            goto label_23e13c;
        }
    }
    ctx->pc = 0x23E130u;
label_23e130:
    // 0x23e130: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23e130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23e134:
    // 0x23e134: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
label_23e138:
    if (ctx->pc == 0x23E138u) {
        ctx->pc = 0x23E13Cu;
        goto label_23e13c;
    }
    ctx->pc = 0x23E134u;
    {
        const bool branch_taken_0x23e134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e134) {
            ctx->pc = 0x23DEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23deb8;
        }
    }
    ctx->pc = 0x23E13Cu;
label_23e13c:
    // 0x23e13c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e140:
    // 0x23e140: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e144:
    // 0x23e144: 0xc08b5ac  jal         func_22D6B0
label_23e148:
    if (ctx->pc == 0x23E148u) {
        ctx->pc = 0x23E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E144u;
        // 0x23e148: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E14Cu;
        goto label_23e14c;
    }
    ctx->pc = 0x23E144u;
    SET_GPR_U32(ctx, 31, 0x23E14Cu);
    ctx->pc = 0x23E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E144u;
    // 0x23e148: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E144u, 0x23E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E14Cu;
label_23e14c:
    // 0x23e14c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23e150:
    // 0x23e150: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23e150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23e154:
    // 0x23e154: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x23e154u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23e158:
    // 0x23e158: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23e158u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23e15c:
    // 0x23e15c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23e15cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23e160:
    // 0x23e160: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23e160u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23e164:
    // 0x23e164: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23e164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e168:
    // 0x23e168: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23e168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23e16c:
    // 0x23e16c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23e16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e170:
    // 0x23e170: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23e170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23e174:
    // 0x23e174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e178:
    // 0x23e178: 0x8098560  j           func_261580
label_23e17c:
    if (ctx->pc == 0x23E17Cu) {
        ctx->pc = 0x23E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E178u;
        // 0x23e17c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E180u;
        goto label_23e180;
    }
    ctx->pc = 0x23E178u;
    ctx->pc = 0x23E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E178u;
    // 0x23e17c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    sub_00261580_0x261580(rdram, ctx, runtime); return;
    ctx->pc = 0x23E180u;
label_23e180:
    // 0x23e180: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23e180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23e184:
    // 0x23e184: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x23e184u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23e188:
    // 0x23e188: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23e188u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23e18c:
    // 0x23e18c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23e18cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23e190:
    // 0x23e190: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23e190u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23e194:
    // 0x23e194: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23e194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e198:
    // 0x23e198: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23e198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23e19c:
    // 0x23e19c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23e19cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e1a0:
    // 0x23e1a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23e1a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23e1a4:
    // 0x23e1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e1a8:
    // 0x23e1a8: 0x3e00008  jr          $ra
label_23e1ac:
    if (ctx->pc == 0x23E1ACu) {
        ctx->pc = 0x23E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A8u;
        // 0x23e1ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1B0u;
        goto label_23e1b0;
    }
    ctx->pc = 0x23E1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A8u;
        // 0x23e1ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23e1b4:
    // 0x23e1b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e1b8:
    // 0x23e1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23e1bc:
    // 0x23e1bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23e1c0:
    // 0x23e1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e1c4:
    // 0x23e1c4: 0xae034e0c  sw          $v1, 0x4E0C($s0)
    ctx->pc = 0x23e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19980), GPR_U32(ctx, 3));
label_23e1c8:
    // 0x23e1c8: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x23e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_23e1cc:
    // 0x23e1cc: 0x8e0502c8  lw          $a1, 0x2C8($s0)
    ctx->pc = 0x23e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_23e1d0:
    // 0x23e1d0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_23e1d4:
    // 0x23e1d4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_23e1d8:
    if (ctx->pc == 0x23E1D8u) {
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1DCu;
        goto label_23e1dc;
    }
    ctx->pc = 0x23E1D4u;
    {
        const bool branch_taken_0x23e1d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d4) {
            ctx->pc = 0x23E1ECu;
            goto label_23e1ec;
        }
    }
    ctx->pc = 0x23E1DCu;
label_23e1dc:
    // 0x23e1dc: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x23e1dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
label_23e1e0:
    // 0x23e1e0: 0x260402dc  addiu       $a0, $s0, 0x2DC
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 732));
label_23e1e4:
    // 0x23e1e4: 0xc0917d4  jal         func_245F50
label_23e1e8:
    if (ctx->pc == 0x23E1E8u) {
        ctx->pc = 0x23E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E4u;
        // 0x23e1e8: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1ECu;
        goto label_23e1ec;
    }
    ctx->pc = 0x23E1E4u;
    SET_GPR_U32(ctx, 31, 0x23E1ECu);
    ctx->pc = 0x23E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1E4u;
    // 0x23e1e8: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F50u, 0x23E1E4u, 0x23E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1ECu;
label_23e1ec:
    // 0x23e1ec: 0x8e024e24  lw          $v0, 0x4E24($s0)
    ctx->pc = 0x23e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20004)));
label_23e1f0:
    // 0x23e1f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23e1f4:
    if (ctx->pc == 0x23E1F4u) {
        ctx->pc = 0x23E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F0u;
        // 0x23e1f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1F8u;
        goto label_23e1f8;
    }
    ctx->pc = 0x23E1F0u;
    {
        const bool branch_taken_0x23e1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F0u;
        // 0x23e1f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1f0) {
            ctx->pc = 0x23E204u;
            goto label_23e204;
        }
    }
    ctx->pc = 0x23E1F8u;
label_23e1f8:
    // 0x23e1f8: 0x40f809  jalr        $v0
label_23e1fc:
    if (ctx->pc == 0x23E1FCu) {
        ctx->pc = 0x23E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F8u;
        // 0x23e1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E200u;
        goto label_23e200;
    }
    ctx->pc = 0x23E1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E200u);
        ctx->pc = 0x23E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F8u;
        // 0x23e1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E1F8u, 0x23E200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E200u;
label_23e200:
    // 0x23e200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23e204:
    // 0x23e204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e208:
    // 0x23e208: 0x3e00008  jr          $ra
label_23e20c:
    if (ctx->pc == 0x23E20Cu) {
        ctx->pc = 0x23E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E208u;
        // 0x23e20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E210u;
        goto label_23e210;
    }
    ctx->pc = 0x23E208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E208u;
        // 0x23e20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E210u;
label_23e210:
    // 0x23e210: 0x8c8302b4  lw          $v1, 0x2B4($a0)
    ctx->pc = 0x23e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
label_23e214:
    // 0x23e214: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23e218:
    // 0x23e218: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x23e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_23e21c:
    // 0x23e21c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23e21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23e220:
    // 0x23e220: 0x3e00008  jr          $ra
label_23e224:
    if (ctx->pc == 0x23E224u) {
        ctx->pc = 0x23E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E220u;
        // 0x23e224: 0xac8302b4  sw          $v1, 0x2B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E228u;
        goto label_23e228;
    }
    ctx->pc = 0x23E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E220u;
        // 0x23e224: 0xac8302b4  sw          $v1, 0x2B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E228u;
label_23e228:
    // 0x23e228: 0x8c82029c  lw          $v0, 0x29C($a0)
    ctx->pc = 0x23e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_23e22c:
    // 0x23e22c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23e230:
    // 0x23e230: 0x3e00008  jr          $ra
label_23e234:
    if (ctx->pc == 0x23E234u) {
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0xac82029c  sw          $v0, 0x29C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E238u;
        goto label_23e238;
    }
    ctx->pc = 0x23E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0xac82029c  sw          $v0, 0x29C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E238u;
label_23e238:
    // 0x23e238: 0x8c83029c  lw          $v1, 0x29C($a0)
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_23e23c:
    // 0x23e23c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23e240:
    // 0x23e240: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x23e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_23e244:
    // 0x23e244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23e244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23e248:
    // 0x23e248: 0x3e00008  jr          $ra
label_23e24c:
    if (ctx->pc == 0x23E24Cu) {
        ctx->pc = 0x23E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E248u;
        // 0x23e24c: 0xac83029c  sw          $v1, 0x29C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E250u;
        goto label_23e250;
    }
    ctx->pc = 0x23E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E248u;
        // 0x23e24c: 0xac83029c  sw          $v1, 0x29C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E250u;
label_23e250:
    // 0x23e250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23e254:
    // 0x23e254: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x23e254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e258:
    // 0x23e258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23e25c:
    // 0x23e25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23e25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e260:
    // 0x23e260: 0x8d4902b0  lw          $t1, 0x2B0($t2)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 688)));
label_23e264:
    // 0x23e264: 0x31220004  andi        $v0, $t1, 0x4
    ctx->pc = 0x23e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
label_23e268:
    // 0x23e268: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_23e26c:
    if (ctx->pc == 0x23E26Cu) {
        ctx->pc = 0x23E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E268u;
        // 0x23e26c: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E270u;
        goto label_23e270;
    }
    ctx->pc = 0x23E268u;
    {
        const bool branch_taken_0x23e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E268u;
        // 0x23e26c: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e268) {
            ctx->pc = 0x23E2B0u;
            goto label_23e2b0;
        }
    }
    ctx->pc = 0x23E270u;
label_23e270:
    // 0x23e270: 0x8d4302c8  lw          $v1, 0x2C8($t2)
    ctx->pc = 0x23e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 712)));
label_23e274:
    // 0x23e274: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x23e274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e278:
    // 0x23e278: 0x914402c8  lbu         $a0, 0x2C8($t2)
    ctx->pc = 0x23e278u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 712)));
label_23e27c:
    // 0x23e27c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23e280:
    // 0x23e280: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x23e280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
label_23e284:
    // 0x23e284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e288:
    // 0x23e288: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_23e28c:
    // 0x23e28c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23e290:
    // 0x23e290: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x23e290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_23e294:
    // 0x23e294: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x23e294u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_23e298:
    // 0x23e298: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x23e298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
label_23e29c:
    // 0x23e29c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x23e29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23e2a0:
    // 0x23e2a0: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x23e2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
label_23e2a4:
    // 0x23e2a4: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x23e2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_23e2a8:
    // 0x23e2a8: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x23e2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
label_23e2ac:
    // 0x23e2ac: 0xa3a40005  sb          $a0, 0x5($sp)
    ctx->pc = 0x23e2acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 4));
label_23e2b0:
    // 0x23e2b0: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x23e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
label_23e2b4:
    // 0x23e2b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23e2b8:
    if (ctx->pc == 0x23E2B8u) {
        ctx->pc = 0x23E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2B4u;
        // 0x23e2b8: 0x3a81821  addu        $v1, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2BCu;
        goto label_23e2bc;
    }
    ctx->pc = 0x23E2B4u;
    {
        const bool branch_taken_0x23e2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2B4u;
        // 0x23e2b8: 0x3a81821  addu        $v1, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2b4) {
            ctx->pc = 0x23E318u;
            goto label_23e318;
        }
    }
    ctx->pc = 0x23E2BCu;
label_23e2bc:
    // 0x23e2bc: 0x8d4502b8  lw          $a1, 0x2B8($t2)
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 696)));
label_23e2c0:
    // 0x23e2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e2c4:
    // 0x23e2c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23e2c8:
    // 0x23e2c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e2cc:
    // 0x23e2cc: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e2d0:
    // 0x23e2d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e2d4:
    // 0x23e2d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23e2d8:
    // 0x23e2d8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23e2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e2dc:
    // 0x23e2dc: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e2e0:
    // 0x23e2e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e2e4:
    // 0x23e2e4: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x23e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_23e2e8:
    // 0x23e2e8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23e2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e2ec:
    // 0x23e2ec: 0x3a83021  addu        $a2, $sp, $t0
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e2f0:
    // 0x23e2f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e2f4:
    // 0x23e2f4: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x23e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23e2f8:
    // 0x23e2f8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23e2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e2fc:
    // 0x23e2fc: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e300:
    // 0x23e300: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e304:
    // 0x23e304: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x23e304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_23e308:
    // 0x23e308: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e30c:
    // 0x23e30c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23e30cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e310:
    // 0x23e310: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23e310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_23e314:
    // 0x23e314: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e318:
    // 0x23e318: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x23e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_23e31c:
    // 0x23e31c: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x23e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_23e320:
    // 0x23e320: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_23e324:
    if (ctx->pc == 0x23E324u) {
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0x3a82021  addu        $a0, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E328u;
        goto label_23e328;
    }
    ctx->pc = 0x23E320u;
    {
        const bool branch_taken_0x23e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0x3a82021  addu        $a0, $sp, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e320) {
            ctx->pc = 0x23E3ECu;
            goto label_23e3ec;
        }
    }
    ctx->pc = 0x23E328u;
label_23e328:
    // 0x23e328: 0x8d4302c0  lw          $v1, 0x2C0($t2)
    ctx->pc = 0x23e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 704)));
label_23e32c:
    // 0x23e32c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e330:
    // 0x23e330: 0x2402ff81  addiu       $v0, $zero, -0x7F
    ctx->pc = 0x23e330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
label_23e334:
    // 0x23e334: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e338:
    // 0x23e338: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23e338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e33c:
    // 0x23e33c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e340:
    // 0x23e340: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x23e340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23e344:
    // 0x23e344: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x23e344u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
label_23e348:
    // 0x23e348: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e34c:
    // 0x23e34c: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x23e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_23e350:
    // 0x23e350: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e354:
    // 0x23e354: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23e354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e358:
    // 0x23e358: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e35c:
    // 0x23e35c: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x23e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_23e360:
    // 0x23e360: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e364:
    // 0x23e364: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x23e364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e368:
    // 0x23e368: 0x3a83021  addu        $a2, $sp, $t0
    ctx->pc = 0x23e368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e36c:
    // 0x23e36c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e370:
    // 0x23e370: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23e370u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_23e374:
    // 0x23e374: 0x914402c0  lbu         $a0, 0x2C0($t2)
    ctx->pc = 0x23e374u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 704)));
label_23e378:
    // 0x23e378: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x23e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e37c:
    // 0x23e37c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23e380:
    // 0x23e380: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e384:
    // 0x23e384: 0x5610019  bgez        $t3, . + 4 + (0x19 << 2)
label_23e388:
    if (ctx->pc == 0x23E388u) {
        ctx->pc = 0x23E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E384u;
        // 0x23e388: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E38Cu;
        goto label_23e38c;
    }
    ctx->pc = 0x23E384u;
    {
        const bool branch_taken_0x23e384 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x23E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E384u;
        // 0x23e388: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e384) {
            ctx->pc = 0x23E3ECu;
            goto label_23e3ec;
        }
    }
    ctx->pc = 0x23E38Cu;
label_23e38c:
    // 0x23e38c: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e390:
    // 0x23e390: 0x8d4502c4  lw          $a1, 0x2C4($t2)
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 708)));
label_23e394:
    // 0x23e394: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e398:
    // 0x23e398: 0x2402ff83  addiu       $v0, $zero, -0x7D
    ctx->pc = 0x23e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967171));
label_23e39c:
    // 0x23e39c: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e3a0:
    // 0x23e3a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23e3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e3a4:
    // 0x23e3a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e3a8:
    // 0x23e3a8: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x23e3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
label_23e3ac:
    // 0x23e3ac: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e3b0:
    // 0x23e3b0: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_23e3b4:
    // 0x23e3b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e3b8:
    // 0x23e3b8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23e3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e3bc:
    // 0x23e3bc: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x23e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e3c0:
    // 0x23e3c0: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x23e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23e3c4:
    // 0x23e3c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e3c8:
    // 0x23e3c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23e3cc:
    // 0x23e3cc: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e3d0:
    // 0x23e3d0: 0x914302c4  lbu         $v1, 0x2C4($t2)
    ctx->pc = 0x23e3d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 708)));
label_23e3d4:
    // 0x23e3d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e3d8:
    // 0x23e3d8: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x23e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_23e3dc:
    // 0x23e3dc: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
label_23e3e0:
    // 0x23e3e0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x23e3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_23e3e4:
    // 0x23e3e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_23e3e8:
    // 0x23e3e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e3ec:
    // 0x23e3ec: 0x8d42013c  lw          $v0, 0x13C($t2)
    ctx->pc = 0x23e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 316)));
label_23e3f0:
    // 0x23e3f0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x23e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23e3f4:
    // 0x23e3f4: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x23e3f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_23e3f8:
    // 0x23e3f8: 0x34058021  ori         $a1, $zero, 0x8021
    ctx->pc = 0x23e3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
label_23e3fc:
    // 0x23e3fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e400:
    // 0x23e400: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e404:
    // 0x23e404: 0xa1420179  sb          $v0, 0x179($t2)
    ctx->pc = 0x23e404u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 377), (uint8_t)GPR_U32(ctx, 2));
label_23e408:
    // 0x23e408: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x23e408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23e40c:
    // 0x23e40c: 0xad42013c  sw          $v0, 0x13C($t2)
    ctx->pc = 0x23e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 316), GPR_U32(ctx, 2));
label_23e410:
    // 0x23e410: 0xc08e8be  jal         func_23A2F8
label_23e414:
    if (ctx->pc == 0x23E414u) {
        ctx->pc = 0x23E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E410u;
        // 0x23e414: 0x90870179  lbu         $a3, 0x179($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 377)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E418u;
        goto label_23e418;
    }
    ctx->pc = 0x23E410u;
    SET_GPR_U32(ctx, 31, 0x23E418u);
    ctx->pc = 0x23E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E410u;
    // 0x23e414: 0x90870179  lbu         $a3, 0x179($a0) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 377)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23E410u, 0x23E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E418u;
label_23e418:
    // 0x23e418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e41c:
    // 0x23e41c: 0x3e00008  jr          $ra
label_23e420:
    if (ctx->pc == 0x23E420u) {
        ctx->pc = 0x23E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E41Cu;
        // 0x23e420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E424u;
        goto label_23e424;
    }
    ctx->pc = 0x23E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E41Cu;
        // 0x23e420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E424u;
label_23e424:
    // 0x23e424: 0x0  nop
    ctx->pc = 0x23e424u;
    // NOP
    if (ctx->pc == 0x23e424u) { ctx->pc = 0x23e428u; }
}
