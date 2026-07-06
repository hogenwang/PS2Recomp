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

// Function: sub_0015F6D0
// Address: 0x15f6d0 - 0x1601a0
void sub_0015F6D0_0x15f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F6D0_0x15f6d0");
#endif

    switch (ctx->pc) {
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f6d4u: goto label_15f6d4;
        case 0x15f6d8u: goto label_15f6d8;
        case 0x15f6dcu: goto label_15f6dc;
        case 0x15f6e0u: goto label_15f6e0;
        case 0x15f6e4u: goto label_15f6e4;
        case 0x15f6e8u: goto label_15f6e8;
        case 0x15f6ecu: goto label_15f6ec;
        case 0x15f6f0u: goto label_15f6f0;
        case 0x15f6f4u: goto label_15f6f4;
        case 0x15f6f8u: goto label_15f6f8;
        case 0x15f6fcu: goto label_15f6fc;
        case 0x15f700u: goto label_15f700;
        case 0x15f704u: goto label_15f704;
        case 0x15f708u: goto label_15f708;
        case 0x15f70cu: goto label_15f70c;
        case 0x15f710u: goto label_15f710;
        case 0x15f714u: goto label_15f714;
        case 0x15f718u: goto label_15f718;
        case 0x15f71cu: goto label_15f71c;
        case 0x15f720u: goto label_15f720;
        case 0x15f724u: goto label_15f724;
        case 0x15f728u: goto label_15f728;
        case 0x15f72cu: goto label_15f72c;
        case 0x15f730u: goto label_15f730;
        case 0x15f734u: goto label_15f734;
        case 0x15f738u: goto label_15f738;
        case 0x15f73cu: goto label_15f73c;
        case 0x15f740u: goto label_15f740;
        case 0x15f744u: goto label_15f744;
        case 0x15f748u: goto label_15f748;
        case 0x15f74cu: goto label_15f74c;
        case 0x15f750u: goto label_15f750;
        case 0x15f754u: goto label_15f754;
        case 0x15f758u: goto label_15f758;
        case 0x15f75cu: goto label_15f75c;
        case 0x15f760u: goto label_15f760;
        case 0x15f764u: goto label_15f764;
        case 0x15f768u: goto label_15f768;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f770u: goto label_15f770;
        case 0x15f774u: goto label_15f774;
        case 0x15f778u: goto label_15f778;
        case 0x15f77cu: goto label_15f77c;
        case 0x15f780u: goto label_15f780;
        case 0x15f784u: goto label_15f784;
        case 0x15f788u: goto label_15f788;
        case 0x15f78cu: goto label_15f78c;
        case 0x15f790u: goto label_15f790;
        case 0x15f794u: goto label_15f794;
        case 0x15f798u: goto label_15f798;
        case 0x15f79cu: goto label_15f79c;
        case 0x15f7a0u: goto label_15f7a0;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7a8u: goto label_15f7a8;
        case 0x15f7acu: goto label_15f7ac;
        case 0x15f7b0u: goto label_15f7b0;
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f7b8u: goto label_15f7b8;
        case 0x15f7bcu: goto label_15f7bc;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7c4u: goto label_15f7c4;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7ccu: goto label_15f7cc;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f7d4u: goto label_15f7d4;
        case 0x15f7d8u: goto label_15f7d8;
        case 0x15f7dcu: goto label_15f7dc;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f7e8u: goto label_15f7e8;
        case 0x15f7ecu: goto label_15f7ec;
        case 0x15f7f0u: goto label_15f7f0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f7f8u: goto label_15f7f8;
        case 0x15f7fcu: goto label_15f7fc;
        case 0x15f800u: goto label_15f800;
        case 0x15f804u: goto label_15f804;
        case 0x15f808u: goto label_15f808;
        case 0x15f80cu: goto label_15f80c;
        case 0x15f810u: goto label_15f810;
        case 0x15f814u: goto label_15f814;
        case 0x15f818u: goto label_15f818;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f820u: goto label_15f820;
        case 0x15f824u: goto label_15f824;
        case 0x15f828u: goto label_15f828;
        case 0x15f82cu: goto label_15f82c;
        case 0x15f830u: goto label_15f830;
        case 0x15f834u: goto label_15f834;
        case 0x15f838u: goto label_15f838;
        case 0x15f83cu: goto label_15f83c;
        case 0x15f840u: goto label_15f840;
        case 0x15f844u: goto label_15f844;
        case 0x15f848u: goto label_15f848;
        case 0x15f84cu: goto label_15f84c;
        case 0x15f850u: goto label_15f850;
        case 0x15f854u: goto label_15f854;
        case 0x15f858u: goto label_15f858;
        case 0x15f85cu: goto label_15f85c;
        case 0x15f860u: goto label_15f860;
        case 0x15f864u: goto label_15f864;
        case 0x15f868u: goto label_15f868;
        case 0x15f86cu: goto label_15f86c;
        case 0x15f870u: goto label_15f870;
        case 0x15f874u: goto label_15f874;
        case 0x15f878u: goto label_15f878;
        case 0x15f87cu: goto label_15f87c;
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        case 0x15f930u: goto label_15f930;
        case 0x15f934u: goto label_15f934;
        case 0x15f938u: goto label_15f938;
        case 0x15f93cu: goto label_15f93c;
        case 0x15f940u: goto label_15f940;
        case 0x15f944u: goto label_15f944;
        case 0x15f948u: goto label_15f948;
        case 0x15f94cu: goto label_15f94c;
        case 0x15f950u: goto label_15f950;
        case 0x15f954u: goto label_15f954;
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        case 0x15fae0u: goto label_15fae0;
        case 0x15fae4u: goto label_15fae4;
        case 0x15fae8u: goto label_15fae8;
        case 0x15faecu: goto label_15faec;
        case 0x15faf0u: goto label_15faf0;
        case 0x15faf4u: goto label_15faf4;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fafcu: goto label_15fafc;
        case 0x15fb00u: goto label_15fb00;
        case 0x15fb04u: goto label_15fb04;
        case 0x15fb08u: goto label_15fb08;
        case 0x15fb0cu: goto label_15fb0c;
        case 0x15fb10u: goto label_15fb10;
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb18u: goto label_15fb18;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb20u: goto label_15fb20;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb2cu: goto label_15fb2c;
        case 0x15fb30u: goto label_15fb30;
        case 0x15fb34u: goto label_15fb34;
        case 0x15fb38u: goto label_15fb38;
        case 0x15fb3cu: goto label_15fb3c;
        case 0x15fb40u: goto label_15fb40;
        case 0x15fb44u: goto label_15fb44;
        case 0x15fb48u: goto label_15fb48;
        case 0x15fb4cu: goto label_15fb4c;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb54u: goto label_15fb54;
        case 0x15fb58u: goto label_15fb58;
        case 0x15fb5cu: goto label_15fb5c;
        case 0x15fb60u: goto label_15fb60;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb68u: goto label_15fb68;
        case 0x15fb6cu: goto label_15fb6c;
        case 0x15fb70u: goto label_15fb70;
        case 0x15fb74u: goto label_15fb74;
        case 0x15fb78u: goto label_15fb78;
        case 0x15fb7cu: goto label_15fb7c;
        case 0x15fb80u: goto label_15fb80;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fb88u: goto label_15fb88;
        case 0x15fb8cu: goto label_15fb8c;
        case 0x15fb90u: goto label_15fb90;
        case 0x15fb94u: goto label_15fb94;
        case 0x15fb98u: goto label_15fb98;
        case 0x15fb9cu: goto label_15fb9c;
        case 0x15fba0u: goto label_15fba0;
        case 0x15fba4u: goto label_15fba4;
        case 0x15fba8u: goto label_15fba8;
        case 0x15fbacu: goto label_15fbac;
        case 0x15fbb0u: goto label_15fbb0;
        case 0x15fbb4u: goto label_15fbb4;
        case 0x15fbb8u: goto label_15fbb8;
        case 0x15fbbcu: goto label_15fbbc;
        case 0x15fbc0u: goto label_15fbc0;
        case 0x15fbc4u: goto label_15fbc4;
        case 0x15fbc8u: goto label_15fbc8;
        case 0x15fbccu: goto label_15fbcc;
        case 0x15fbd0u: goto label_15fbd0;
        case 0x15fbd4u: goto label_15fbd4;
        case 0x15fbd8u: goto label_15fbd8;
        case 0x15fbdcu: goto label_15fbdc;
        case 0x15fbe0u: goto label_15fbe0;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbe8u: goto label_15fbe8;
        case 0x15fbecu: goto label_15fbec;
        case 0x15fbf0u: goto label_15fbf0;
        case 0x15fbf4u: goto label_15fbf4;
        case 0x15fbf8u: goto label_15fbf8;
        case 0x15fbfcu: goto label_15fbfc;
        case 0x15fc00u: goto label_15fc00;
        case 0x15fc04u: goto label_15fc04;
        case 0x15fc08u: goto label_15fc08;
        case 0x15fc0cu: goto label_15fc0c;
        case 0x15fc10u: goto label_15fc10;
        case 0x15fc14u: goto label_15fc14;
        case 0x15fc18u: goto label_15fc18;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fc20u: goto label_15fc20;
        case 0x15fc24u: goto label_15fc24;
        case 0x15fc28u: goto label_15fc28;
        case 0x15fc2cu: goto label_15fc2c;
        case 0x15fc30u: goto label_15fc30;
        case 0x15fc34u: goto label_15fc34;
        case 0x15fc38u: goto label_15fc38;
        case 0x15fc3cu: goto label_15fc3c;
        case 0x15fc40u: goto label_15fc40;
        case 0x15fc44u: goto label_15fc44;
        case 0x15fc48u: goto label_15fc48;
        case 0x15fc4cu: goto label_15fc4c;
        case 0x15fc50u: goto label_15fc50;
        case 0x15fc54u: goto label_15fc54;
        case 0x15fc58u: goto label_15fc58;
        case 0x15fc5cu: goto label_15fc5c;
        case 0x15fc60u: goto label_15fc60;
        case 0x15fc64u: goto label_15fc64;
        case 0x15fc68u: goto label_15fc68;
        case 0x15fc6cu: goto label_15fc6c;
        case 0x15fc70u: goto label_15fc70;
        case 0x15fc74u: goto label_15fc74;
        case 0x15fc78u: goto label_15fc78;
        case 0x15fc7cu: goto label_15fc7c;
        case 0x15fc80u: goto label_15fc80;
        case 0x15fc84u: goto label_15fc84;
        case 0x15fc88u: goto label_15fc88;
        case 0x15fc8cu: goto label_15fc8c;
        case 0x15fc90u: goto label_15fc90;
        case 0x15fc94u: goto label_15fc94;
        case 0x15fc98u: goto label_15fc98;
        case 0x15fc9cu: goto label_15fc9c;
        case 0x15fca0u: goto label_15fca0;
        case 0x15fca4u: goto label_15fca4;
        case 0x15fca8u: goto label_15fca8;
        case 0x15fcacu: goto label_15fcac;
        case 0x15fcb0u: goto label_15fcb0;
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcb8u: goto label_15fcb8;
        case 0x15fcbcu: goto label_15fcbc;
        case 0x15fcc0u: goto label_15fcc0;
        case 0x15fcc4u: goto label_15fcc4;
        case 0x15fcc8u: goto label_15fcc8;
        case 0x15fcccu: goto label_15fccc;
        case 0x15fcd0u: goto label_15fcd0;
        case 0x15fcd4u: goto label_15fcd4;
        case 0x15fcd8u: goto label_15fcd8;
        case 0x15fcdcu: goto label_15fcdc;
        case 0x15fce0u: goto label_15fce0;
        case 0x15fce4u: goto label_15fce4;
        case 0x15fce8u: goto label_15fce8;
        case 0x15fcecu: goto label_15fcec;
        case 0x15fcf0u: goto label_15fcf0;
        case 0x15fcf4u: goto label_15fcf4;
        case 0x15fcf8u: goto label_15fcf8;
        case 0x15fcfcu: goto label_15fcfc;
        case 0x15fd00u: goto label_15fd00;
        case 0x15fd04u: goto label_15fd04;
        case 0x15fd08u: goto label_15fd08;
        case 0x15fd0cu: goto label_15fd0c;
        case 0x15fd10u: goto label_15fd10;
        case 0x15fd14u: goto label_15fd14;
        case 0x15fd18u: goto label_15fd18;
        case 0x15fd1cu: goto label_15fd1c;
        case 0x15fd20u: goto label_15fd20;
        case 0x15fd24u: goto label_15fd24;
        case 0x15fd28u: goto label_15fd28;
        case 0x15fd2cu: goto label_15fd2c;
        case 0x15fd30u: goto label_15fd30;
        case 0x15fd34u: goto label_15fd34;
        case 0x15fd38u: goto label_15fd38;
        case 0x15fd3cu: goto label_15fd3c;
        case 0x15fd40u: goto label_15fd40;
        case 0x15fd44u: goto label_15fd44;
        case 0x15fd48u: goto label_15fd48;
        case 0x15fd4cu: goto label_15fd4c;
        case 0x15fd50u: goto label_15fd50;
        case 0x15fd54u: goto label_15fd54;
        case 0x15fd58u: goto label_15fd58;
        case 0x15fd5cu: goto label_15fd5c;
        case 0x15fd60u: goto label_15fd60;
        case 0x15fd64u: goto label_15fd64;
        case 0x15fd68u: goto label_15fd68;
        case 0x15fd6cu: goto label_15fd6c;
        case 0x15fd70u: goto label_15fd70;
        case 0x15fd74u: goto label_15fd74;
        case 0x15fd78u: goto label_15fd78;
        case 0x15fd7cu: goto label_15fd7c;
        case 0x15fd80u: goto label_15fd80;
        case 0x15fd84u: goto label_15fd84;
        case 0x15fd88u: goto label_15fd88;
        case 0x15fd8cu: goto label_15fd8c;
        case 0x15fd90u: goto label_15fd90;
        case 0x15fd94u: goto label_15fd94;
        case 0x15fd98u: goto label_15fd98;
        case 0x15fd9cu: goto label_15fd9c;
        case 0x15fda0u: goto label_15fda0;
        case 0x15fda4u: goto label_15fda4;
        case 0x15fda8u: goto label_15fda8;
        case 0x15fdacu: goto label_15fdac;
        case 0x15fdb0u: goto label_15fdb0;
        case 0x15fdb4u: goto label_15fdb4;
        case 0x15fdb8u: goto label_15fdb8;
        case 0x15fdbcu: goto label_15fdbc;
        case 0x15fdc0u: goto label_15fdc0;
        case 0x15fdc4u: goto label_15fdc4;
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdccu: goto label_15fdcc;
        case 0x15fdd0u: goto label_15fdd0;
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fdd8u: goto label_15fdd8;
        case 0x15fddcu: goto label_15fddc;
        case 0x15fde0u: goto label_15fde0;
        case 0x15fde4u: goto label_15fde4;
        case 0x15fde8u: goto label_15fde8;
        case 0x15fdecu: goto label_15fdec;
        case 0x15fdf0u: goto label_15fdf0;
        case 0x15fdf4u: goto label_15fdf4;
        case 0x15fdf8u: goto label_15fdf8;
        case 0x15fdfcu: goto label_15fdfc;
        case 0x15fe00u: goto label_15fe00;
        case 0x15fe04u: goto label_15fe04;
        case 0x15fe08u: goto label_15fe08;
        case 0x15fe0cu: goto label_15fe0c;
        case 0x15fe10u: goto label_15fe10;
        case 0x15fe14u: goto label_15fe14;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fe1cu: goto label_15fe1c;
        case 0x15fe20u: goto label_15fe20;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe28u: goto label_15fe28;
        case 0x15fe2cu: goto label_15fe2c;
        case 0x15fe30u: goto label_15fe30;
        case 0x15fe34u: goto label_15fe34;
        case 0x15fe38u: goto label_15fe38;
        case 0x15fe3cu: goto label_15fe3c;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe44u: goto label_15fe44;
        case 0x15fe48u: goto label_15fe48;
        case 0x15fe4cu: goto label_15fe4c;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe54u: goto label_15fe54;
        case 0x15fe58u: goto label_15fe58;
        case 0x15fe5cu: goto label_15fe5c;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe64u: goto label_15fe64;
        case 0x15fe68u: goto label_15fe68;
        case 0x15fe6cu: goto label_15fe6c;
        case 0x15fe70u: goto label_15fe70;
        case 0x15fe74u: goto label_15fe74;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fe7cu: goto label_15fe7c;
        case 0x15fe80u: goto label_15fe80;
        case 0x15fe84u: goto label_15fe84;
        case 0x15fe88u: goto label_15fe88;
        case 0x15fe8cu: goto label_15fe8c;
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        case 0x15fed8u: goto label_15fed8;
        case 0x15fedcu: goto label_15fedc;
        case 0x15fee0u: goto label_15fee0;
        case 0x15fee4u: goto label_15fee4;
        case 0x15fee8u: goto label_15fee8;
        case 0x15feecu: goto label_15feec;
        case 0x15fef0u: goto label_15fef0;
        case 0x15fef4u: goto label_15fef4;
        case 0x15fef8u: goto label_15fef8;
        case 0x15fefcu: goto label_15fefc;
        case 0x15ff00u: goto label_15ff00;
        case 0x15ff04u: goto label_15ff04;
        case 0x15ff08u: goto label_15ff08;
        case 0x15ff0cu: goto label_15ff0c;
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff18u: goto label_15ff18;
        case 0x15ff1cu: goto label_15ff1c;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff24u: goto label_15ff24;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff2cu: goto label_15ff2c;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff34u: goto label_15ff34;
        case 0x15ff38u: goto label_15ff38;
        case 0x15ff3cu: goto label_15ff3c;
        case 0x15ff40u: goto label_15ff40;
        case 0x15ff44u: goto label_15ff44;
        case 0x15ff48u: goto label_15ff48;
        case 0x15ff4cu: goto label_15ff4c;
        case 0x15ff50u: goto label_15ff50;
        case 0x15ff54u: goto label_15ff54;
        case 0x15ff58u: goto label_15ff58;
        case 0x15ff5cu: goto label_15ff5c;
        case 0x15ff60u: goto label_15ff60;
        case 0x15ff64u: goto label_15ff64;
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff6cu: goto label_15ff6c;
        case 0x15ff70u: goto label_15ff70;
        case 0x15ff74u: goto label_15ff74;
        case 0x15ff78u: goto label_15ff78;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ff84u: goto label_15ff84;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff8cu: goto label_15ff8c;
        case 0x15ff90u: goto label_15ff90;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff98u: goto label_15ff98;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15ffa4u: goto label_15ffa4;
        case 0x15ffa8u: goto label_15ffa8;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffb0u: goto label_15ffb0;
        case 0x15ffb4u: goto label_15ffb4;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffbcu: goto label_15ffbc;
        case 0x15ffc0u: goto label_15ffc0;
        case 0x15ffc4u: goto label_15ffc4;
        case 0x15ffc8u: goto label_15ffc8;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffd0u: goto label_15ffd0;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15ffd8u: goto label_15ffd8;
        case 0x15ffdcu: goto label_15ffdc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffe4u: goto label_15ffe4;
        case 0x15ffe8u: goto label_15ffe8;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff0u: goto label_15fff0;
        case 0x15fff4u: goto label_15fff4;
        case 0x15fff8u: goto label_15fff8;
        case 0x15fffcu: goto label_15fffc;
        case 0x160000u: goto label_160000;
        case 0x160004u: goto label_160004;
        case 0x160008u: goto label_160008;
        case 0x16000cu: goto label_16000c;
        case 0x160010u: goto label_160010;
        case 0x160014u: goto label_160014;
        case 0x160018u: goto label_160018;
        case 0x16001cu: goto label_16001c;
        case 0x160020u: goto label_160020;
        case 0x160024u: goto label_160024;
        case 0x160028u: goto label_160028;
        case 0x16002cu: goto label_16002c;
        case 0x160030u: goto label_160030;
        case 0x160034u: goto label_160034;
        case 0x160038u: goto label_160038;
        case 0x16003cu: goto label_16003c;
        case 0x160040u: goto label_160040;
        case 0x160044u: goto label_160044;
        case 0x160048u: goto label_160048;
        case 0x16004cu: goto label_16004c;
        case 0x160050u: goto label_160050;
        case 0x160054u: goto label_160054;
        case 0x160058u: goto label_160058;
        case 0x16005cu: goto label_16005c;
        case 0x160060u: goto label_160060;
        case 0x160064u: goto label_160064;
        case 0x160068u: goto label_160068;
        case 0x16006cu: goto label_16006c;
        case 0x160070u: goto label_160070;
        case 0x160074u: goto label_160074;
        case 0x160078u: goto label_160078;
        case 0x16007cu: goto label_16007c;
        case 0x160080u: goto label_160080;
        case 0x160084u: goto label_160084;
        case 0x160088u: goto label_160088;
        case 0x16008cu: goto label_16008c;
        case 0x160090u: goto label_160090;
        case 0x160094u: goto label_160094;
        case 0x160098u: goto label_160098;
        case 0x16009cu: goto label_16009c;
        case 0x1600a0u: goto label_1600a0;
        case 0x1600a4u: goto label_1600a4;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600acu: goto label_1600ac;
        case 0x1600b0u: goto label_1600b0;
        case 0x1600b4u: goto label_1600b4;
        case 0x1600b8u: goto label_1600b8;
        case 0x1600bcu: goto label_1600bc;
        case 0x1600c0u: goto label_1600c0;
        case 0x1600c4u: goto label_1600c4;
        case 0x1600c8u: goto label_1600c8;
        case 0x1600ccu: goto label_1600cc;
        case 0x1600d0u: goto label_1600d0;
        case 0x1600d4u: goto label_1600d4;
        case 0x1600d8u: goto label_1600d8;
        case 0x1600dcu: goto label_1600dc;
        case 0x1600e0u: goto label_1600e0;
        case 0x1600e4u: goto label_1600e4;
        case 0x1600e8u: goto label_1600e8;
        case 0x1600ecu: goto label_1600ec;
        case 0x1600f0u: goto label_1600f0;
        case 0x1600f4u: goto label_1600f4;
        case 0x1600f8u: goto label_1600f8;
        case 0x1600fcu: goto label_1600fc;
        case 0x160100u: goto label_160100;
        case 0x160104u: goto label_160104;
        case 0x160108u: goto label_160108;
        case 0x16010cu: goto label_16010c;
        case 0x160110u: goto label_160110;
        case 0x160114u: goto label_160114;
        case 0x160118u: goto label_160118;
        case 0x16011cu: goto label_16011c;
        case 0x160120u: goto label_160120;
        case 0x160124u: goto label_160124;
        case 0x160128u: goto label_160128;
        case 0x16012cu: goto label_16012c;
        case 0x160130u: goto label_160130;
        case 0x160134u: goto label_160134;
        case 0x160138u: goto label_160138;
        case 0x16013cu: goto label_16013c;
        case 0x160140u: goto label_160140;
        case 0x160144u: goto label_160144;
        case 0x160148u: goto label_160148;
        case 0x16014cu: goto label_16014c;
        case 0x160150u: goto label_160150;
        case 0x160154u: goto label_160154;
        case 0x160158u: goto label_160158;
        case 0x16015cu: goto label_16015c;
        case 0x160160u: goto label_160160;
        case 0x160164u: goto label_160164;
        case 0x160168u: goto label_160168;
        case 0x16016cu: goto label_16016c;
        case 0x160170u: goto label_160170;
        case 0x160174u: goto label_160174;
        case 0x160178u: goto label_160178;
        case 0x16017cu: goto label_16017c;
        case 0x160180u: goto label_160180;
        case 0x160184u: goto label_160184;
        case 0x160188u: goto label_160188;
        case 0x16018cu: goto label_16018c;
        case 0x160190u: goto label_160190;
        case 0x160194u: goto label_160194;
        case 0x160198u: goto label_160198;
        case 0x16019cu: goto label_16019c;
        default: break;
    }

    ctx->pc = 0x15f6d0u;

label_15f6d0:
    // 0x15f6d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_15f6d4:
    // 0x15f6d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15f6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15f6d8:
    // 0x15f6d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15f6dc:
    // 0x15f6dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15f6e0:
    // 0x15f6e0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x15f6e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f6e4:
    // 0x15f6e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15f6e8:
    // 0x15f6e8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15f6e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15f6ec:
    // 0x15f6ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15f6f0:
    // 0x15f6f0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x15f6f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15f6f4:
    // 0x15f6f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15f6f8:
    // 0x15f6f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15f6f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f6fc:
    // 0x15f6fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15f700:
    // 0x15f700: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15f700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f704:
    // 0x15f704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15f708:
    // 0x15f708: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x15f708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15f70c:
    // 0x15f70c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15f710:
    // 0x15f710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15f714:
    // 0x15f714: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x15f714u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
label_15f718:
    // 0x15f718: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x15f718u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
label_15f71c:
    // 0x15f71c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f720:
    // 0x15f720: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x15f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_15f724:
    // 0x15f724: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15f724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15f728:
    // 0x15f728: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15f728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15f72c:
    // 0x15f72c: 0xa0820015  sb          $v0, 0x15($a0)
    ctx->pc = 0x15f72cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 2));
label_15f730:
    // 0x15f730: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f734:
    // 0x15f734: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15f738:
    // 0x15f738: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15f738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15f73c:
    // 0x15f73c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x15f73cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_15f740:
    // 0x15f740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15f744:
    // 0x15f744: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15f744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15f748:
    // 0x15f748: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x15f748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_15f74c:
    // 0x15f74c: 0x3043e000  andi        $v1, $v0, 0xE000
    ctx->pc = 0x15f74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_15f750:
    // 0x15f750: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x15f750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_15f754:
    // 0x15f754: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15f754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15f758:
    // 0x15f758: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_15f75c:
    // 0x15f75c: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x15f75cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
label_15f760:
    // 0x15f760: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x15f760u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_15f764:
    // 0x15f764: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15f764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_15f768:
    // 0x15f768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15f76c:
    if (ctx->pc == 0x15F76Cu) {
        ctx->pc = 0x15F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F768u;
        // 0x15f76c: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F770u;
        goto label_15f770;
    }
    ctx->pc = 0x15F768u;
    {
        const bool branch_taken_0x15f768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F768u;
        // 0x15f76c: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f768) {
            ctx->pc = 0x15F778u;
            goto label_15f778;
        }
    }
    ctx->pc = 0x15F770u;
label_15f770:
    // 0x15f770: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_15f774:
    // 0x15f774: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x15f774u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_15f778:
    // 0x15f778: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f77c:
    // 0x15f77c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15f77cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15f780:
    // 0x15f780: 0xa2a30016  sb          $v1, 0x16($s5)
    ctx->pc = 0x15f780u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 22), (uint8_t)GPR_U32(ctx, 3));
label_15f784:
    // 0x15f784: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f788:
    // 0x15f788: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f78c:
    // 0x15f78c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f790:
    // 0x15f790: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f794:
    // 0x15f794: 0xa2a30017  sb          $v1, 0x17($s5)
    ctx->pc = 0x15f794u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 23), (uint8_t)GPR_U32(ctx, 3));
label_15f798:
    // 0x15f798: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f79c:
    // 0x15f79c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f7a0:
    // 0x15f7a0: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f7a4:
    // 0x15f7a4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f7a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f7a8:
    // 0x15f7a8: 0xa2a30018  sb          $v1, 0x18($s5)
    ctx->pc = 0x15f7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 24), (uint8_t)GPR_U32(ctx, 3));
label_15f7ac:
    // 0x15f7ac: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f7b0:
    // 0x15f7b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f7b4:
    // 0x15f7b4: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f7b8:
    // 0x15f7b8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f7b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f7bc:
    // 0x15f7bc: 0xa2a30019  sb          $v1, 0x19($s5)
    ctx->pc = 0x15f7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 25), (uint8_t)GPR_U32(ctx, 3));
label_15f7c0:
    // 0x15f7c0: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f7c4:
    // 0x15f7c4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f7c8:
    // 0x15f7c8: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f7cc:
    // 0x15f7cc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f7ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f7d0:
    // 0x15f7d0: 0xa2a3001a  sb          $v1, 0x1A($s5)
    ctx->pc = 0x15f7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 26), (uint8_t)GPR_U32(ctx, 3));
label_15f7d4:
    // 0x15f7d4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f7d8:
    // 0x15f7d8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f7dc:
    // 0x15f7dc: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f7e0:
    // 0x15f7e0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f7e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f7e4:
    // 0x15f7e4: 0xa2a3001b  sb          $v1, 0x1B($s5)
    ctx->pc = 0x15f7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 27), (uint8_t)GPR_U32(ctx, 3));
label_15f7e8:
    // 0x15f7e8: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f7ec:
    // 0x15f7ec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f7f0:
    // 0x15f7f0: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f7f4:
    // 0x15f7f4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f7f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f7f8:
    // 0x15f7f8: 0xa2a3001c  sb          $v1, 0x1C($s5)
    ctx->pc = 0x15f7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 28), (uint8_t)GPR_U32(ctx, 3));
label_15f7fc:
    // 0x15f7fc: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f800:
    // 0x15f800: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f804:
    // 0x15f804: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f808:
    // 0x15f808: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f80c:
    // 0x15f80c: 0xa2a3001d  sb          $v1, 0x1D($s5)
    ctx->pc = 0x15f80cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 29), (uint8_t)GPR_U32(ctx, 3));
label_15f810:
    // 0x15f810: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f814:
    // 0x15f814: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f818:
    // 0x15f818: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f81c:
    // 0x15f81c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f81cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f820:
    // 0x15f820: 0xa2a3001e  sb          $v1, 0x1E($s5)
    ctx->pc = 0x15f820u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 30), (uint8_t)GPR_U32(ctx, 3));
label_15f824:
    // 0x15f824: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f828:
    // 0x15f828: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f82c:
    // 0x15f82c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f830:
    // 0x15f830: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x15f830u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_15f834:
    // 0x15f834: 0xa2a3001f  sb          $v1, 0x1F($s5)
    ctx->pc = 0x15f834u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 31), (uint8_t)GPR_U32(ctx, 3));
label_15f838:
    // 0x15f838: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f83c:
    // 0x15f83c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15f840:
    // 0x15f840: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15f840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15f844:
    // 0x15f844: 0x92a4001e  lbu         $a0, 0x1E($s5)
    ctx->pc = 0x15f844u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 30)));
label_15f848:
    // 0x15f848: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x15f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_15f84c:
    // 0x15f84c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_15f850:
    if (ctx->pc == 0x15F850u) {
        ctx->pc = 0x15F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F84Cu;
        // 0x15f850: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F854u;
        goto label_15f854;
    }
    ctx->pc = 0x15F84Cu;
    {
        const bool branch_taken_0x15f84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F84Cu;
        // 0x15f850: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f84c) {
            ctx->pc = 0x15F85Cu;
            goto label_15f85c;
        }
    }
    ctx->pc = 0x15F854u;
label_15f854:
    // 0x15f854: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_15f858:
    // 0x15f858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15f85c:
    // 0x15f85c: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x15f85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_15f860:
    // 0x15f860: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_15f864:
    if (ctx->pc == 0x15F864u) {
        ctx->pc = 0x15F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F860u;
        // 0x15f864: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F868u;
        goto label_15f868;
    }
    ctx->pc = 0x15F860u;
    {
        const bool branch_taken_0x15f860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f860) {
            ctx->pc = 0x15F864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F860u;
            // 0x15f864: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F874u;
            goto label_15f874;
        }
    }
    ctx->pc = 0x15F868u;
label_15f868:
    // 0x15f868: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x15f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_15f86c:
    // 0x15f86c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15f870:
    // 0x15f870: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x15f870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15f874:
    // 0x15f874: 0x1c3c  dsll32      $v1, $zero, 16
    ctx->pc = 0x15f874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 16));
label_15f878:
    // 0x15f878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f87c:
    // 0x15f87c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15f87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15f880:
    // 0x15f880: 0x2402fc00  addiu       $v0, $zero, -0x400
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_15f884:
    // 0x15f884: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15f884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_15f888:
    // 0x15f888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f88c:
    // 0x15f88c: 0xe44004  sllv        $t0, $a0, $a3
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_15f890:
    // 0x15f890: 0xa84024  and         $t0, $a1, $t0
    ctx->pc = 0x15f890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
label_15f894:
    // 0x15f894: 0x11000044  beqz        $t0, . + 4 + (0x44 << 2)
label_15f898:
    if (ctx->pc == 0x15F898u) {
        ctx->pc = 0x15F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F894u;
        // 0x15f898: 0xa0c00011  sb          $zero, 0x11($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F89Cu;
        goto label_15f89c;
    }
    ctx->pc = 0x15F894u;
    {
        const bool branch_taken_0x15f894 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F894u;
        // 0x15f898: 0xa0c00011  sb          $zero, 0x11($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f894) {
            ctx->pc = 0x15F9A8u;
            goto label_15f9a8;
        }
    }
    ctx->pc = 0x15F89Cu;
label_15f89c:
    // 0x15f89c: 0xa0c40011  sb          $a0, 0x11($a2)
    ctx->pc = 0x15f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 17), (uint8_t)GPR_U32(ctx, 4));
label_15f8a0:
    // 0x15f8a0: 0xa0c00015  sb          $zero, 0x15($a2)
    ctx->pc = 0x15f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 21), (uint8_t)GPR_U32(ctx, 0));
label_15f8a4:
    // 0x15f8a4: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f8a8:
    // 0x15f8a8: 0x950c0000  lhu         $t4, 0x0($t0)
    ctx->pc = 0x15f8a8u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_15f8ac:
    // 0x15f8ac: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_15f8b0:
    // 0x15f8b0: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x15f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
label_15f8b4:
    // 0x15f8b4: 0xa0c00012  sb          $zero, 0x12($a2)
    ctx->pc = 0x15f8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 0));
label_15f8b8:
    // 0x15f8b8: 0xc4282  srl         $t0, $t4, 10
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 10));
label_15f8bc:
    // 0x15f8bc: 0x90ca0012  lbu         $t2, 0x12($a2)
    ctx->pc = 0x15f8bcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
label_15f8c0:
    // 0x15f8c0: 0x310b0003  andi        $t3, $t0, 0x3
    ctx->pc = 0x15f8c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_15f8c4:
    // 0x15f8c4: 0xc4302  srl         $t0, $t4, 12
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 12));
label_15f8c8:
    // 0x15f8c8: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x15f8c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_15f8cc:
    // 0x15f8cc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x15f8ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_15f8d0:
    // 0x15f8d0: 0x318803ff  andi        $t0, $t4, 0x3FF
    ctx->pc = 0x15f8d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1023);
label_15f8d4:
    // 0x15f8d4: 0xa0ca0012  sb          $t2, 0x12($a2)
    ctx->pc = 0x15f8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 10));
label_15f8d8:
    // 0x15f8d8: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x15f8d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
label_15f8dc:
    // 0x15f8dc: 0x90cb0012  lbu         $t3, 0x12($a2)
    ctx->pc = 0x15f8dcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
label_15f8e0:
    // 0x15f8e0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_15f8e4:
    // 0x15f8e4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x15f8e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_15f8e8:
    // 0x15f8e8: 0x312c00ff  andi        $t4, $t1, 0xFF
    ctx->pc = 0x15f8e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_15f8ec:
    // 0x15f8ec: 0x685025  or          $t2, $v1, $t0
    ctx->pc = 0x15f8ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_15f8f0:
    // 0x15f8f0: 0xa4c3c  dsll32      $t1, $t2, 16
    ctx->pc = 0x15f8f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 16));
label_15f8f4:
    // 0x15f8f4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x15f8f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_15f8f8:
    // 0x15f8f8: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x15f8f8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_15f8fc:
    // 0x15f8fc: 0xa0cb0012  sb          $t3, 0x12($a2)
    ctx->pc = 0x15f8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 11));
label_15f900:
    // 0x15f900: 0xa4c0000c  sh          $zero, 0xC($a2)
    ctx->pc = 0x15f900u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 0));
label_15f904:
    // 0x15f904: 0x31280200  andi        $t0, $t1, 0x200
    ctx->pc = 0x15f904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)512);
label_15f908:
    // 0x15f908: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_15f90c:
    if (ctx->pc == 0x15F90Cu) {
        ctx->pc = 0x15F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F908u;
        // 0x15f90c: 0xa4ca000c  sh          $t2, 0xC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F910u;
        goto label_15f910;
    }
    ctx->pc = 0x15F908u;
    {
        const bool branch_taken_0x15f908 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F908u;
        // 0x15f90c: 0xa4ca000c  sh          $t2, 0xC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f908) {
            ctx->pc = 0x15F918u;
            goto label_15f918;
        }
    }
    ctx->pc = 0x15F910u;
label_15f910:
    // 0x15f910: 0x1224025  or          $t0, $t1, $v0
    ctx->pc = 0x15f910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_15f914:
    // 0x15f914: 0xa4c8000c  sh          $t0, 0xC($a2)
    ctx->pc = 0x15f914u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 8));
label_15f918:
    // 0x15f918: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x15f918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f91c:
    // 0x15f91c: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x15f91cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_15f920:
    // 0x15f920: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x15f920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_15f924:
    // 0x15f924: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x15f924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
label_15f928:
    // 0x15f928: 0x312803ff  andi        $t0, $t1, 0x3FF
    ctx->pc = 0x15f928u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1023);
label_15f92c:
    // 0x15f92c: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x15f92cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
label_15f930:
    // 0x15f930: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x15f930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
label_15f934:
    // 0x15f934: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x15f934u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_15f938:
    // 0x15f938: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x15f938u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_15f93c:
    // 0x15f93c: 0x84c3c  dsll32      $t1, $t0, 16
    ctx->pc = 0x15f93cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 16));
label_15f940:
    // 0x15f940: 0xa4c8000e  sh          $t0, 0xE($a2)
    ctx->pc = 0x15f940u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
label_15f944:
    // 0x15f944: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x15f944u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_15f948:
    // 0x15f948: 0x31280200  andi        $t0, $t1, 0x200
    ctx->pc = 0x15f948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)512);
label_15f94c:
    // 0x15f94c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_15f950:
    if (ctx->pc == 0x15F950u) {
        ctx->pc = 0x15F954u;
        goto label_15f954;
    }
    ctx->pc = 0x15F94Cu;
    {
        const bool branch_taken_0x15f94c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f94c) {
            ctx->pc = 0x15F960u;
            goto label_15f960;
        }
    }
    ctx->pc = 0x15F954u;
label_15f954:
    // 0x15f954: 0x1224025  or          $t0, $t1, $v0
    ctx->pc = 0x15f954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_15f958:
    // 0x15f958: 0xa4c8000e  sh          $t0, 0xE($a2)
    ctx->pc = 0x15f958u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
label_15f95c:
    // 0x15f95c: 0x0  nop
    ctx->pc = 0x15f95cu;
    // NOP
label_15f960:
    // 0x15f960: 0x84c8000e  lh          $t0, 0xE($a2)
    ctx->pc = 0x15f960u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
label_15f964:
    // 0x15f964: 0x84023  negu        $t0, $t0
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_15f968:
    // 0x15f968: 0xa4c8000e  sh          $t0, 0xE($a2)
    ctx->pc = 0x15f968u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
label_15f96c:
    // 0x15f96c: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x15f96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f970:
    // 0x15f970: 0x950c0000  lhu         $t4, 0x0($t0)
    ctx->pc = 0x15f970u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_15f974:
    // 0x15f974: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x15f974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_15f978:
    // 0x15f978: 0xc4b02  srl         $t1, $t4, 12
    ctx->pc = 0x15f978u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 12), 12));
label_15f97c:
    // 0x15f97c: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x15f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
label_15f980:
    // 0x15f980: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x15f980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
label_15f984:
    // 0x15f984: 0x90ca0015  lbu         $t2, 0x15($a2)
    ctx->pc = 0x15f984u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 21)));
label_15f988:
    // 0x15f988: 0xc4282  srl         $t0, $t4, 10
    ctx->pc = 0x15f988u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 10));
label_15f98c:
    // 0x15f98c: 0x310b0003  andi        $t3, $t0, 0x3
    ctx->pc = 0x15f98cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_15f990:
    // 0x15f990: 0x318803ff  andi        $t0, $t4, 0x3FF
    ctx->pc = 0x15f990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1023);
label_15f994:
    // 0x15f994: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x15f994u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_15f998:
    // 0x15f998: 0xa0ca0015  sb          $t2, 0x15($a2)
    ctx->pc = 0x15f998u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 21), (uint8_t)GPR_U32(ctx, 10));
label_15f99c:
    // 0x15f99c: 0xa0c90018  sb          $t1, 0x18($a2)
    ctx->pc = 0x15f99cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 24), (uint8_t)GPR_U32(ctx, 9));
label_15f9a0:
    // 0x15f9a0: 0xa4c80008  sh          $t0, 0x8($a2)
    ctx->pc = 0x15f9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 8));
label_15f9a4:
    // 0x15f9a4: 0x0  nop
    ctx->pc = 0x15f9a4u;
    // NOP
label_15f9a8:
    // 0x15f9a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15f9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15f9ac:
    // 0x15f9ac: 0x28e80003  slti        $t0, $a3, 0x3
    ctx->pc = 0x15f9acu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_15f9b0:
    // 0x15f9b0: 0x1500ffb6  bnez        $t0, . + 4 + (-0x4A << 2)
label_15f9b4:
    if (ctx->pc == 0x15F9B4u) {
        ctx->pc = 0x15F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9B0u;
        // 0x15f9b4: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9B8u;
        goto label_15f9b8;
    }
    ctx->pc = 0x15F9B0u;
    {
        const bool branch_taken_0x15f9b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9B0u;
        // 0x15f9b4: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9b0) {
            ctx->pc = 0x15F88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f88c;
        }
    }
    ctx->pc = 0x15F9B8u;
label_15f9b8:
    // 0x15f9b8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f9bc:
    // 0x15f9bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f9c0:
    // 0x15f9c0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x15f9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f9c4:
    // 0x15f9c4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x15f9c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f9c8:
    // 0x15f9c8: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x15f9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
label_15f9cc:
    // 0x15f9cc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x15f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15f9d0:
    // 0x15f9d0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_15f9d4:
    // 0x15f9d4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15f9d8:
    // 0x15f9d8: 0x92a3001c  lbu         $v1, 0x1C($s5)
    ctx->pc = 0x15f9d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_15f9dc:
    // 0x15f9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f9e0:
    // 0x15f9e0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_15f9e4:
    // 0x15f9e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15f9e8:
    // 0x15f9e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_15f9ec:
    if (ctx->pc == 0x15F9ECu) {
        ctx->pc = 0x15F9F0u;
        goto label_15f9f0;
    }
    ctx->pc = 0x15F9E8u;
    {
        const bool branch_taken_0x15f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9e8) {
            ctx->pc = 0x15FAA8u;
            goto label_15faa8;
        }
    }
    ctx->pc = 0x15F9F0u;
label_15f9f0:
    // 0x15f9f0: 0xc057b40  jal         func_15ED00
label_15f9f4:
    if (ctx->pc == 0x15F9F4u) {
        ctx->pc = 0x15F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9F0u;
        // 0x15f9f4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9F8u;
        goto label_15f9f8;
    }
    ctx->pc = 0x15F9F0u;
    SET_GPR_U32(ctx, 31, 0x15F9F8u);
    ctx->pc = 0x15F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9F0u;
    // 0x15f9f4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED00u, 0x15F9F0u, 0x15F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9F8u;
label_15f9f8:
    // 0x15f9f8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x15f9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15f9fc:
    // 0x15f9fc: 0x52202  srl         $a0, $a1, 8
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_15fa00:
    // 0x15fa00: 0x51bc2  srl         $v1, $a1, 15
    ctx->pc = 0x15fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
label_15fa04:
    // 0x15fa04: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x15fa04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_15fa08:
    // 0x15fa08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15fa0c:
    // 0x15fa0c: 0xa2240004  sb          $a0, 0x4($s1)
    ctx->pc = 0x15fa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 4));
label_15fa10:
    // 0x15fa10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fa14:
    // 0x15fa14: 0xa2230005  sb          $v1, 0x5($s1)
    ctx->pc = 0x15fa14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
label_15fa18:
    // 0x15fa18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fa1c:
    // 0x15fa1c: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x15fa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_15fa20:
    // 0x15fa20: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x15fa20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
label_15fa24:
    // 0x15fa24: 0x51982  srl         $v1, $a1, 6
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_15fa28:
    // 0x15fa28: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x15fa28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_15fa2c:
    // 0x15fa2c: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x15fa2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_15fa30:
    // 0x15fa30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15fa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15fa34:
    // 0x15fa34: 0xa2230005  sb          $v1, 0x5($s1)
    ctx->pc = 0x15fa34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
label_15fa38:
    // 0x15fa38: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fa3c:
    // 0x15fa3c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x15fa3cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15fa40:
    // 0x15fa40: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_15fa44:
    // 0x15fa44: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15fa48:
    // 0x15fa48: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x15fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_15fa4c:
    // 0x15fa4c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15fa4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15fa50:
    // 0x15fa50: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15fa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15fa54:
    // 0x15fa54: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x15fa54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_15fa58:
    // 0x15fa58: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15fa58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_15fa5c:
    // 0x15fa5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_15fa60:
    // 0x15fa60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15fa60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_15fa64:
    // 0x15fa64: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x15fa64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
label_15fa68:
    // 0x15fa68: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x15fa68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_15fa6c:
    // 0x15fa6c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_15fa70:
    // 0x15fa70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fa74:
    // 0x15fa74: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x15fa74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_15fa78:
    // 0x15fa78: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_15fa7c:
    // 0x15fa7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fa80:
    // 0x15fa80: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x15fa80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_15fa84:
    // 0x15fa84: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fa88:
    // 0x15fa88: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x15fa88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15fa8c:
    // 0x15fa8c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_15fa90:
    // 0x15fa90: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15fa94:
    // 0x15fa94: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x15fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_15fa98:
    // 0x15fa98: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x15fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
label_15fa9c:
    // 0x15fa9c: 0xa2240008  sb          $a0, 0x8($s1)
    ctx->pc = 0x15fa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 4));
label_15faa0:
    // 0x15faa0: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x15faa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
label_15faa4:
    // 0x15faa4: 0x0  nop
    ctx->pc = 0x15faa4u;
    // NOP
label_15faa8:
    // 0x15faa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15faac:
    // 0x15faac: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x15faacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_15fab0:
    // 0x15fab0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_15fab4:
    if (ctx->pc == 0x15FAB4u) {
        ctx->pc = 0x15FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAB0u;
        // 0x15fab4: 0x2631000a  addiu       $s1, $s1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FAB8u;
        goto label_15fab8;
    }
    ctx->pc = 0x15FAB0u;
    {
        const bool branch_taken_0x15fab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAB0u;
        // 0x15fab4: 0x2631000a  addiu       $s1, $s1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fab0) {
            ctx->pc = 0x15F9D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f9d8;
        }
    }
    ctx->pc = 0x15FAB8u;
label_15fab8:
    // 0x15fab8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15fabc:
    // 0x15fabc: 0x26640028  addiu       $a0, $s3, 0x28
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_15fac0:
    // 0x15fac0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fac4:
    // 0x15fac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fac8:
    // 0x15fac8: 0x92a7001c  lbu         $a3, 0x1C($s5)
    ctx->pc = 0x15fac8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_15facc:
    // 0x15facc: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_15fad0:
    // 0x15fad0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x15fad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_15fad4:
    // 0x15fad4: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_15fad8:
    if (ctx->pc == 0x15FAD8u) {
        ctx->pc = 0x15FADCu;
        goto label_15fadc;
    }
    ctx->pc = 0x15FAD4u;
    {
        const bool branch_taken_0x15fad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fad4) {
            ctx->pc = 0x15FB68u;
            goto label_15fb68;
        }
    }
    ctx->pc = 0x15FADCu;
label_15fadc:
    // 0x15fadc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x15fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fae0:
    // 0x15fae0: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x15fae0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_15fae4:
    // 0x15fae4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_15fae8:
    // 0x15fae8: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x15fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_15faec:
    // 0x15faec: 0x72a02  srl         $a1, $a3, 8
    ctx->pc = 0x15faecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_15faf0:
    // 0x15faf0: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x15faf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_15faf4:
    // 0x15faf4: 0xa0870006  sb          $a3, 0x6($a0)
    ctx->pc = 0x15faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 7));
label_15faf8:
    // 0x15faf8: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x15faf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
label_15fafc:
    // 0x15fafc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x15fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fb00:
    // 0x15fb00: 0x94a80000  lhu         $t0, 0x0($a1)
    ctx->pc = 0x15fb00u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_15fb04:
    // 0x15fb04: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x15fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_15fb08:
    // 0x15fb08: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x15fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_15fb0c:
    // 0x15fb0c: 0x82a02  srl         $a1, $t0, 8
    ctx->pc = 0x15fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
label_15fb10:
    // 0x15fb10: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x15fb10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15fb14:
    // 0x15fb14: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x15fb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_15fb18:
    // 0x15fb18: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x15fb18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
label_15fb1c:
    // 0x15fb1c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x15fb1cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_15fb20:
    // 0x15fb20: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x15fb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_15fb24:
    // 0x15fb24: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x15fb24u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_15fb28:
    // 0x15fb28: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x15fb28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
label_15fb2c:
    // 0x15fb2c: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x15fb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
label_15fb30:
    // 0x15fb30: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x15fb30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_15fb34:
    // 0x15fb34: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15fb38:
    // 0x15fb38: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x15fb38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_15fb3c:
    // 0x15fb3c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x15fb3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_15fb40:
    // 0x15fb40: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15fb44:
    // 0x15fb44: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x15fb44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
label_15fb48:
    // 0x15fb48: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x15fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fb4c:
    // 0x15fb4c: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x15fb4cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_15fb50:
    // 0x15fb50: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_15fb54:
    // 0x15fb54: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x15fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_15fb58:
    // 0x15fb58: 0x72a02  srl         $a1, $a3, 8
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_15fb5c:
    // 0x15fb5c: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x15fb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
label_15fb60:
    // 0x15fb60: 0xa0870008  sb          $a3, 0x8($a0)
    ctx->pc = 0x15fb60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 7));
label_15fb64:
    // 0x15fb64: 0xa0860009  sb          $a2, 0x9($a0)
    ctx->pc = 0x15fb64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 6));
label_15fb68:
    // 0x15fb68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15fb6c:
    // 0x15fb6c: 0x28650006  slti        $a1, $v1, 0x6
    ctx->pc = 0x15fb6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_15fb70:
    // 0x15fb70: 0x14a0ffd5  bnez        $a1, . + 4 + (-0x2B << 2)
label_15fb74:
    if (ctx->pc == 0x15FB74u) {
        ctx->pc = 0x15FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB70u;
        // 0x15fb74: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB78u;
        goto label_15fb78;
    }
    ctx->pc = 0x15FB70u;
    {
        const bool branch_taken_0x15fb70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB70u;
        // 0x15fb74: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb70) {
            ctx->pc = 0x15FAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fac8;
        }
    }
    ctx->pc = 0x15FB78u;
label_15fb78:
    // 0x15fb78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15fb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fb7c:
    // 0x15fb7c: 0x92820011  lbu         $v0, 0x11($s4)
    ctx->pc = 0x15fb7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
label_15fb80:
    // 0x15fb80: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15fb84:
    if (ctx->pc == 0x15FB84u) {
        ctx->pc = 0x15FB88u;
        goto label_15fb88;
    }
    ctx->pc = 0x15FB80u;
    {
        const bool branch_taken_0x15fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb80) {
            ctx->pc = 0x15FC08u;
            goto label_15fc08;
        }
    }
    ctx->pc = 0x15FB88u;
label_15fb88:
    // 0x15fb88: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x15fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_15fb8c:
    // 0x15fb8c: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x15fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
label_15fb90:
    // 0x15fb90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_15fb94:
    if (ctx->pc == 0x15FB94u) {
        ctx->pc = 0x15FB98u;
        goto label_15fb98;
    }
    ctx->pc = 0x15FB90u;
    {
        const bool branch_taken_0x15fb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb90) {
            ctx->pc = 0x15FBD0u;
            goto label_15fbd0;
        }
    }
    ctx->pc = 0x15FB98u;
label_15fb98:
    // 0x15fb98: 0x92830018  lbu         $v1, 0x18($s4)
    ctx->pc = 0x15fb98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
label_15fb9c:
    // 0x15fb9c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15fba0:
    // 0x15fba0: 0x24421d20  addiu       $v0, $v0, 0x1D20
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
label_15fba4:
    // 0x15fba4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fba8:
    // 0x15fba8: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x15fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_15fbac:
    // 0x15fbac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fbb0:
    // 0x15fbb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fbb4:
    // 0x15fbb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15fbb8:
    // 0x15fbb8: 0x40f809  jalr        $v0
label_15fbbc:
    if (ctx->pc == 0x15FBBCu) {
        ctx->pc = 0x15FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBB8u;
        // 0x15fbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBC0u;
        goto label_15fbc0;
    }
    ctx->pc = 0x15FBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FBC0u);
        ctx->pc = 0x15FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBB8u;
        // 0x15fbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBB8u, 0x15FBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FBC0u;
label_15fbc0:
    // 0x15fbc0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fbc4:
    // 0x15fbc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15fbc8:
    // 0x15fbc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_15fbcc:
    if (ctx->pc == 0x15FBCCu) {
        ctx->pc = 0x15FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBC8u;
        // 0x15fbcc: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBD0u;
        goto label_15fbd0;
    }
    ctx->pc = 0x15FBC8u;
    {
        const bool branch_taken_0x15fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBC8u;
        // 0x15fbcc: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbc8) {
            ctx->pc = 0x15FC08u;
            goto label_15fc08;
        }
    }
    ctx->pc = 0x15FBD0u;
label_15fbd0:
    // 0x15fbd0: 0x92830018  lbu         $v1, 0x18($s4)
    ctx->pc = 0x15fbd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
label_15fbd4:
    // 0x15fbd4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15fbd8:
    // 0x15fbd8: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fbdc:
    // 0x15fbdc: 0x24421d20  addiu       $v0, $v0, 0x1D20
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
label_15fbe0:
    // 0x15fbe0: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x15fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_15fbe4:
    // 0x15fbe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fbe8:
    // 0x15fbe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fbec:
    // 0x15fbec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15fbf0:
    // 0x15fbf0: 0x40f809  jalr        $v0
label_15fbf4:
    if (ctx->pc == 0x15FBF4u) {
        ctx->pc = 0x15FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBF0u;
        // 0x15fbf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBF8u;
        goto label_15fbf8;
    }
    ctx->pc = 0x15FBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FBF8u);
        ctx->pc = 0x15FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBF0u;
        // 0x15fbf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBF0u, 0x15FBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FBF8u;
label_15fbf8:
    // 0x15fbf8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fbfc:
    // 0x15fbfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15fc00:
    // 0x15fc00: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15fc04:
    // 0x15fc04: 0x0  nop
    ctx->pc = 0x15fc04u;
    // NOP
label_15fc08:
    // 0x15fc08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15fc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15fc0c:
    // 0x15fc0c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x15fc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_15fc10:
    // 0x15fc10: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_15fc14:
    if (ctx->pc == 0x15FC14u) {
        ctx->pc = 0x15FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC10u;
        // 0x15fc14: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC18u;
        goto label_15fc18;
    }
    ctx->pc = 0x15FC10u;
    {
        const bool branch_taken_0x15fc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC10u;
        // 0x15fc14: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc10) {
            ctx->pc = 0x15FB7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fb7c;
        }
    }
    ctx->pc = 0x15FC18u;
label_15fc18:
    // 0x15fc18: 0x96a40010  lhu         $a0, 0x10($s5)
    ctx->pc = 0x15fc18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
label_15fc1c:
    // 0x15fc1c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x15fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_15fc20:
    // 0x15fc20: 0x308300f0  andi        $v1, $a0, 0xF0
    ctx->pc = 0x15fc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
label_15fc24:
    // 0x15fc24: 0x3090000f  andi        $s0, $a0, 0xF
    ctx->pc = 0x15fc24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_15fc28:
    // 0x15fc28: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_15fc2c:
    // 0x15fc2c: 0x30424800  andi        $v0, $v0, 0x4800
    ctx->pc = 0x15fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)18432);
label_15fc30:
    // 0x15fc30: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_15fc34:
    if (ctx->pc == 0x15FC34u) {
        ctx->pc = 0x15FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC30u;
        // 0x15fc34: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC38u;
        goto label_15fc38;
    }
    ctx->pc = 0x15FC30u;
    {
        const bool branch_taken_0x15fc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC30u;
        // 0x15fc34: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc30) {
            ctx->pc = 0x15FCA0u;
            goto label_15fca0;
        }
    }
    ctx->pc = 0x15FC38u;
label_15fc38:
    // 0x15fc38: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15fc3c:
    // 0x15fc3c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fc40:
    // 0x15fc40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15fc44:
    // 0x15fc44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15fc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15fc48:
    // 0x15fc48: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15fc4c:
    // 0x15fc4c: 0x24421da0  addiu       $v0, $v0, 0x1DA0
    ctx->pc = 0x15fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7584));
label_15fc50:
    // 0x15fc50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fc54:
    // 0x15fc54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15fc58:
    // 0x15fc58: 0x40f809  jalr        $v0
label_15fc5c:
    if (ctx->pc == 0x15FC5Cu) {
        ctx->pc = 0x15FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC58u;
        // 0x15fc5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC60u;
        goto label_15fc60;
    }
    ctx->pc = 0x15FC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FC60u);
        ctx->pc = 0x15FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC58u;
        // 0x15fc5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC58u, 0x15FC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC60u;
label_15fc60:
    // 0x15fc60: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x15fc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_15fc64:
    // 0x15fc64: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x15fc64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fc68:
    // 0x15fc68: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fc6c:
    // 0x15fc6c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15fc70:
    // 0x15fc70: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_15fc74:
    // 0x15fc74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fc78:
    // 0x15fc78: 0x24631da0  addiu       $v1, $v1, 0x1DA0
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7584));
label_15fc7c:
    // 0x15fc7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15fc80:
    // 0x15fc80: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15fc84:
    // 0x15fc84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15fc88:
    // 0x15fc88: 0x40f809  jalr        $v0
label_15fc8c:
    if (ctx->pc == 0x15FC8Cu) {
        ctx->pc = 0x15FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC88u;
        // 0x15fc8c: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC90u;
        goto label_15fc90;
    }
    ctx->pc = 0x15FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FC90u);
        ctx->pc = 0x15FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC88u;
        // 0x15fc8c: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC88u, 0x15FC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FC90u;
label_15fc90:
    // 0x15fc90: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fc94:
    // 0x15fc94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15fc98:
    // 0x15fc98: 0x1000001a  b           . + 4 + (0x1A << 2)
label_15fc9c:
    if (ctx->pc == 0x15FC9Cu) {
        ctx->pc = 0x15FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC98u;
        // 0x15fc9c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCA0u;
        goto label_15fca0;
    }
    ctx->pc = 0x15FC98u;
    {
        const bool branch_taken_0x15fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC98u;
        // 0x15fc9c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc98) {
            ctx->pc = 0x15FD04u;
            goto label_15fd04;
        }
    }
    ctx->pc = 0x15FCA0u;
label_15fca0:
    // 0x15fca0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15fca4:
    // 0x15fca4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fca8:
    // 0x15fca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15fcac:
    // 0x15fcac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15fcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15fcb0:
    // 0x15fcb0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15fcb4:
    // 0x15fcb4: 0x24421da0  addiu       $v0, $v0, 0x1DA0
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7584));
label_15fcb8:
    // 0x15fcb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fcbc:
    // 0x15fcbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15fcc0:
    // 0x15fcc0: 0x40f809  jalr        $v0
label_15fcc4:
    if (ctx->pc == 0x15FCC4u) {
        ctx->pc = 0x15FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCC0u;
        // 0x15fcc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCC8u;
        goto label_15fcc8;
    }
    ctx->pc = 0x15FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FCC8u);
        ctx->pc = 0x15FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCC0u;
        // 0x15fcc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FCC0u, 0x15FCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FCC8u;
label_15fcc8:
    // 0x15fcc8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_15fccc:
    // 0x15fccc: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x15fcccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fcd0:
    // 0x15fcd0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x15fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fcd4:
    // 0x15fcd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15fcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15fcd8:
    // 0x15fcd8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x15fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_15fcdc:
    // 0x15fcdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15fce0:
    // 0x15fce0: 0x24631da0  addiu       $v1, $v1, 0x1DA0
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7584));
label_15fce4:
    // 0x15fce4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15fce8:
    // 0x15fce8: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x15fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15fcec:
    // 0x15fcec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15fcf0:
    // 0x15fcf0: 0x40f809  jalr        $v0
label_15fcf4:
    if (ctx->pc == 0x15FCF4u) {
        ctx->pc = 0x15FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCF0u;
        // 0x15fcf4: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FCF8u;
        goto label_15fcf8;
    }
    ctx->pc = 0x15FCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FCF8u);
        ctx->pc = 0x15FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCF0u;
        // 0x15fcf4: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FCF0u, 0x15FCF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FCF8u;
label_15fcf8:
    // 0x15fcf8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x15fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fcfc:
    // 0x15fcfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15fd00:
    // 0x15fd00: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15fd04:
    // 0x15fd04: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x15fd04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
label_15fd08:
    // 0x15fd08: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_15fd0c:
    // 0x15fd0c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_15fd10:
    if (ctx->pc == 0x15FD10u) {
        ctx->pc = 0x15FD14u;
        goto label_15fd14;
    }
    ctx->pc = 0x15FD0Cu;
    {
        const bool branch_taken_0x15fd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd0c) {
            ctx->pc = 0x15FE10u;
            goto label_15fe10;
        }
    }
    ctx->pc = 0x15FD14u;
label_15fd14:
    // 0x15fd14: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x15fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fd18:
    // 0x15fd18: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x15fd18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_15fd1c:
    // 0x15fd1c: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x15fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_15fd20:
    // 0x15fd20: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x15fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_15fd24:
    // 0x15fd24: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15fd28:
    // 0x15fd28: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x15fd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
label_15fd2c:
    // 0x15fd2c: 0x94d00002  lhu         $s0, 0x2($a2)
    ctx->pc = 0x15fd2cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_15fd30:
    // 0x15fd30: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_15fd34:
    // 0x15fd34: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15fd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15fd38:
    // 0x15fd38: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x15fd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_15fd3c:
    // 0x15fd3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fd40:
    // 0x15fd40: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15fd44:
    // 0x15fd44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15fd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_15fd48:
    // 0x15fd48: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x15fd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
label_15fd4c:
    // 0x15fd4c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x15fd4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_15fd50:
    // 0x15fd50: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x15fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
label_15fd54:
    // 0x15fd54: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15fd54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_15fd58:
    // 0x15fd58: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x15fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_15fd5c:
    // 0x15fd5c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15fd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_15fd60:
    // 0x15fd60: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_15fd64:
    // 0x15fd64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15fd64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_15fd68:
    // 0x15fd68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_15fd6c:
    // 0x15fd6c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x15fd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_15fd70:
    // 0x15fd70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15fd70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15fd74:
    // 0x15fd74: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15fd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_15fd78:
    // 0x15fd78: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x15fd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_15fd7c:
    // 0x15fd7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15fd7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_15fd80:
    // 0x15fd80: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x15fd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_15fd84:
    // 0x15fd84: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x15fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_15fd88:
    // 0x15fd88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15fd8c:
    if (ctx->pc == 0x15FD8Cu) {
        ctx->pc = 0x15FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD88u;
        // 0x15fd8c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FD90u;
        goto label_15fd90;
    }
    ctx->pc = 0x15FD88u;
    {
        const bool branch_taken_0x15fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD88u;
        // 0x15fd8c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd88) {
            ctx->pc = 0x15FDA0u;
            goto label_15fda0;
        }
    }
    ctx->pc = 0x15FD90u;
label_15fd90:
    // 0x15fd90: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x15fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_15fd94:
    // 0x15fd94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_15fd98:
    // 0x15fd98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x15fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_15fd9c:
    // 0x15fd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15fd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_15fda0:
    // 0x15fda0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x15fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_15fda4:
    // 0x15fda4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15fda4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15fda8:
    // 0x15fda8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_15fdac:
    // 0x15fdac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15fdb0:
    if (ctx->pc == 0x15FDB0u) {
        ctx->pc = 0x15FDB4u;
        goto label_15fdb4;
    }
    ctx->pc = 0x15FDACu;
    {
        const bool branch_taken_0x15fdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fdac) {
            ctx->pc = 0x15FDC8u;
            goto label_15fdc8;
        }
    }
    ctx->pc = 0x15FDB4u;
label_15fdb4:
    // 0x15fdb4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_15fdb8:
    // 0x15fdb8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x15fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_15fdbc:
    // 0x15fdbc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x15fdbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_15fdc0:
    // 0x15fdc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15fdc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_15fdc4:
    // 0x15fdc4: 0x0  nop
    ctx->pc = 0x15fdc4u;
    // NOP
label_15fdc8:
    // 0x15fdc8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x15fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_15fdcc:
    // 0x15fdcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15fdccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15fdd0:
    // 0x15fdd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fdd4:
    // 0x15fdd4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x15fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15fdd8:
    // 0x15fdd8: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x15fdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_15fddc:
    // 0x15fddc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x15fddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_15fde0:
    // 0x15fde0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15fde0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15fde4:
    // 0x15fde4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x15fde4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_15fde8:
    // 0x15fde8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15fdec:
    // 0x15fdec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15fdf0:
    // 0x15fdf0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x15fdf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
label_15fdf4:
    // 0x15fdf4: 0xc057b64  jal         func_15ED90
label_15fdf8:
    if (ctx->pc == 0x15FDF8u) {
        ctx->pc = 0x15FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDF4u;
        // 0x15fdf8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDFCu;
        goto label_15fdfc;
    }
    ctx->pc = 0x15FDF4u;
    SET_GPR_U32(ctx, 31, 0x15FDFCu);
    ctx->pc = 0x15FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDF4u;
    // 0x15fdf8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED90u, 0x15FDF4u, 0x15FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDFCu;
label_15fdfc:
    // 0x15fdfc: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x15fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_15fe00:
    // 0x15fe00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15fe00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15fe04:
    // 0x15fe04: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
label_15fe08:
    if (ctx->pc == 0x15FE08u) {
        ctx->pc = 0x15FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE04u;
        // 0x15fe08: 0x8fa600ac  lw          $a2, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE0Cu;
        goto label_15fe0c;
    }
    ctx->pc = 0x15FE04u;
    {
        const bool branch_taken_0x15fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe04) {
            ctx->pc = 0x15FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FE04u;
            // 0x15fe08: 0x8fa600ac  lw          $a2, 0xAC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fd18;
        }
    }
    ctx->pc = 0x15FE0Cu;
label_15fe0c:
    // 0x15fe0c: 0x0  nop
    ctx->pc = 0x15fe0cu;
    // NOP
label_15fe10:
    // 0x15fe10: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x15fe10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
label_15fe14:
    // 0x15fe14: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_15fe18:
    // 0x15fe18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_15fe1c:
    if (ctx->pc == 0x15FE1Cu) {
        ctx->pc = 0x15FE20u;
        goto label_15fe20;
    }
    ctx->pc = 0x15FE18u;
    {
        const bool branch_taken_0x15fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe18) {
            ctx->pc = 0x15FE60u;
            goto label_15fe60;
        }
    }
    ctx->pc = 0x15FE20u;
label_15fe20:
    // 0x15fe20: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x15fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_15fe24:
    // 0x15fe24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15fe28:
    // 0x15fe28: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x15fe28u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_15fe2c:
    // 0x15fe2c: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x15fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_15fe30:
    // 0x15fe30: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_15fe34:
    // 0x15fe34: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x15fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_15fe38:
    // 0x15fe38: 0x94d00002  lhu         $s0, 0x2($a2)
    ctx->pc = 0x15fe38u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_15fe3c:
    // 0x15fe3c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x15fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_15fe40:
    // 0x15fe40: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_15fe44:
    // 0x15fe44: 0xc057ba4  jal         func_15EE90
label_15fe48:
    if (ctx->pc == 0x15FE48u) {
        ctx->pc = 0x15FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE44u;
        // 0x15fe48: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE4Cu;
        goto label_15fe4c;
    }
    ctx->pc = 0x15FE44u;
    SET_GPR_U32(ctx, 31, 0x15FE4Cu);
    ctx->pc = 0x15FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE44u;
    // 0x15fe48: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EE90u, 0x15FE44u, 0x15FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE4Cu;
label_15fe4c:
    // 0x15fe4c: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x15fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
label_15fe50:
    // 0x15fe50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15fe50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15fe54:
    // 0x15fe54: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_15fe58:
    if (ctx->pc == 0x15FE58u) {
        ctx->pc = 0x15FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE54u;
        // 0x15fe58: 0x8fa600ac  lw          $a2, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE5Cu;
        goto label_15fe5c;
    }
    ctx->pc = 0x15FE54u;
    {
        const bool branch_taken_0x15fe54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe54) {
            ctx->pc = 0x15FE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FE54u;
            // 0x15fe58: 0x8fa600ac  lw          $a2, 0xAC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FE24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fe24;
        }
    }
    ctx->pc = 0x15FE5Cu;
label_15fe5c:
    // 0x15fe5c: 0x0  nop
    ctx->pc = 0x15fe5cu;
    // NOP
label_15fe60:
    // 0x15fe60: 0xc05716c  jal         func_15C5B0
label_15fe64:
    if (ctx->pc == 0x15FE64u) {
        ctx->pc = 0x15FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE60u;
        // 0x15fe64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE68u;
        goto label_15fe68;
    }
    ctx->pc = 0x15FE60u;
    SET_GPR_U32(ctx, 31, 0x15FE68u);
    ctx->pc = 0x15FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE60u;
    // 0x15fe64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5B0u, 0x15FE60u, 0x15FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE68u;
label_15fe68:
    // 0x15fe68: 0x92a20016  lbu         $v0, 0x16($s5)
    ctx->pc = 0x15fe68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_15fe6c:
    // 0x15fe6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fe6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fe70:
    // 0x15fe70: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x15fe70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_15fe74:
    // 0x15fe74: 0xc0638d8  jal         func_18E360
label_15fe78:
    if (ctx->pc == 0x15FE78u) {
        ctx->pc = 0x15FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE74u;
        // 0x15fe78: 0x30460007  andi        $a2, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE7Cu;
        goto label_15fe7c;
    }
    ctx->pc = 0x15FE74u;
    SET_GPR_U32(ctx, 31, 0x15FE7Cu);
    ctx->pc = 0x15FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE74u;
    // 0x15fe78: 0x30460007  andi        $a2, $v0, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E360u, 0x15FE74u, 0x15FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE7Cu;
label_15fe7c:
    // 0x15fe7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_15fe80:
    if (ctx->pc == 0x15FE80u) {
        ctx->pc = 0x15FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE7Cu;
        // 0x15fe80: 0x94430000  lhu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE84u;
        goto label_15fe84;
    }
    ctx->pc = 0x15FE7Cu;
    {
        const bool branch_taken_0x15fe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe7c) {
            ctx->pc = 0x15FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FE7Cu;
            // 0x15fe80: 0x94430000  lhu         $v1, 0x0($v0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FE90u;
            goto label_15fe90;
        }
    }
    ctx->pc = 0x15FE84u;
label_15fe84:
    // 0x15fe84: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15fe88:
    // 0x15fe88: 0x24421cf8  addiu       $v0, $v0, 0x1CF8
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7416));
label_15fe8c:
    // 0x15fe8c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x15fe8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15fe90:
    // 0x15fe90: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_15fe94:
    // 0x15fe94: 0xa2630040  sb          $v1, 0x40($s3)
    ctx->pc = 0x15fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 64), (uint8_t)GPR_U32(ctx, 3));
label_15fe98:
    // 0x15fe98: 0xa2600042  sb          $zero, 0x42($s3)
    ctx->pc = 0x15fe98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 66), (uint8_t)GPR_U32(ctx, 0));
label_15fe9c:
    // 0x15fe9c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x15fe9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_15fea0:
    // 0x15fea0: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_15fea4:
    // 0x15fea4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15fea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15fea8:
    // 0x15fea8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15fea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15feac:
    // 0x15feac: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x15feacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_15feb0:
    // 0x15feb0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15feb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_15feb4:
    // 0x15feb4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15feb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_15feb8:
    // 0x15feb8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15feb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_15febc:
    // 0x15febc: 0xa664003c  sh          $a0, 0x3C($s3)
    ctx->pc = 0x15febcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 4));
label_15fec0:
    // 0x15fec0: 0xa663003e  sh          $v1, 0x3E($s3)
    ctx->pc = 0x15fec0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 62), (uint16_t)GPR_U32(ctx, 3));
label_15fec4:
    // 0x15fec4: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x15fec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_15fec8:
    // 0x15fec8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fecc:
    // 0x15fecc: 0xa663003c  sh          $v1, 0x3C($s3)
    ctx->pc = 0x15feccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 3));
label_15fed0:
    // 0x15fed0: 0x8663003e  lh          $v1, 0x3E($s3)
    ctx->pc = 0x15fed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
label_15fed4:
    // 0x15fed4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fed8:
    // 0x15fed8: 0xa663003e  sh          $v1, 0x3E($s3)
    ctx->pc = 0x15fed8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 62), (uint16_t)GPR_U32(ctx, 3));
label_15fedc:
    // 0x15fedc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x15fedcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_15fee0:
    // 0x15fee0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_15fee4:
    // 0x15fee4: 0xa2620043  sb          $v0, 0x43($s3)
    ctx->pc = 0x15fee4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 67), (uint8_t)GPR_U32(ctx, 2));
label_15fee8:
    // 0x15fee8: 0xa2630044  sb          $v1, 0x44($s3)
    ctx->pc = 0x15fee8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 3));
label_15feec:
    // 0x15feec: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x15feecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_15fef0:
    // 0x15fef0: 0x3043c000  andi        $v1, $v0, 0xC000
    ctx->pc = 0x15fef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
label_15fef4:
    // 0x15fef4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_15fef8:
    if (ctx->pc == 0x15FEF8u) {
        ctx->pc = 0x15FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEF4u;
        // 0x15fef8: 0x8fa200ac  lw          $v0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEFCu;
        goto label_15fefc;
    }
    ctx->pc = 0x15FEF4u;
    {
        const bool branch_taken_0x15fef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fef4) {
            ctx->pc = 0x15FEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FEF4u;
            // 0x15fef8: 0x8fa200ac  lw          $v0, 0xAC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF1Cu;
            goto label_15ff1c;
        }
    }
    ctx->pc = 0x15FEFCu;
label_15fefc:
    // 0x15fefc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15fefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15ff00:
    // 0x15ff00: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_15ff04:
    if (ctx->pc == 0x15FF04u) {
        ctx->pc = 0x15FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF00u;
        // 0x15ff04: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF08u;
        goto label_15ff08;
    }
    ctx->pc = 0x15FF00u;
    {
        const bool branch_taken_0x15ff00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ff00) {
            ctx->pc = 0x15FF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FF00u;
            // 0x15ff04: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF14u;
            goto label_15ff14;
        }
    }
    ctx->pc = 0x15FF08u;
label_15ff08:
    // 0x15ff08: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_15ff0c:
    // 0x15ff0c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x15ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_15ff10:
    // 0x15ff10: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x15ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_15ff14:
    // 0x15ff14: 0x10000003  b           . + 4 + (0x3 << 2)
label_15ff18:
    if (ctx->pc == 0x15FF18u) {
        ctx->pc = 0x15FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF14u;
        // 0x15ff18: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF1Cu;
        goto label_15ff1c;
    }
    ctx->pc = 0x15FF14u;
    {
        const bool branch_taken_0x15ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF14u;
        // 0x15ff18: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff14) {
            ctx->pc = 0x15FF24u;
            goto label_15ff24;
        }
    }
    ctx->pc = 0x15FF1Cu;
label_15ff1c:
    // 0x15ff1c: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_15ff20:
    // 0x15ff20: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x15ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_15ff24:
    // 0x15ff24: 0x92a2001d  lbu         $v0, 0x1D($s5)
    ctx->pc = 0x15ff24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 29)));
label_15ff28:
    // 0x15ff28: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_15ff2c:
    // 0x15ff2c: 0xa262008a  sb          $v0, 0x8A($s3)
    ctx->pc = 0x15ff2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 2));
label_15ff30:
    // 0x15ff30: 0x92a3001b  lbu         $v1, 0x1B($s5)
    ctx->pc = 0x15ff30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 27)));
label_15ff34:
    // 0x15ff34: 0x9262008a  lbu         $v0, 0x8A($s3)
    ctx->pc = 0x15ff34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 138)));
label_15ff38:
    // 0x15ff38: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x15ff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_15ff3c:
    // 0x15ff3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15ff40:
    // 0x15ff40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_15ff44:
    // 0x15ff44: 0xa262008a  sb          $v0, 0x8A($s3)
    ctx->pc = 0x15ff44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 2));
label_15ff48:
    // 0x15ff48: 0x92a2001b  lbu         $v0, 0x1B($s5)
    ctx->pc = 0x15ff48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 27)));
label_15ff4c:
    // 0x15ff4c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x15ff4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_15ff50:
    // 0x15ff50: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x15ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_15ff54:
    // 0x15ff54: 0xa262008d  sb          $v0, 0x8D($s3)
    ctx->pc = 0x15ff54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 141), (uint8_t)GPR_U32(ctx, 2));
label_15ff58:
    // 0x15ff58: 0x92a3001e  lbu         $v1, 0x1E($s5)
    ctx->pc = 0x15ff58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 30)));
label_15ff5c:
    // 0x15ff5c: 0x9262008d  lbu         $v0, 0x8D($s3)
    ctx->pc = 0x15ff5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 141)));
label_15ff60:
    // 0x15ff60: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_15ff64:
    // 0x15ff64: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15ff64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_15ff68:
    // 0x15ff68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15ff6c:
    // 0x15ff6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_15ff70:
    // 0x15ff70: 0xa262008d  sb          $v0, 0x8D($s3)
    ctx->pc = 0x15ff70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 141), (uint8_t)GPR_U32(ctx, 2));
label_15ff74:
    // 0x15ff74: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x15ff74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
label_15ff78:
    // 0x15ff78: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x15ff78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_15ff7c:
    // 0x15ff7c: 0x92a2001b  lbu         $v0, 0x1B($s5)
    ctx->pc = 0x15ff7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 27)));
label_15ff80:
    // 0x15ff80: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15ff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_15ff84:
    // 0x15ff84: 0xa262008e  sb          $v0, 0x8E($s3)
    ctx->pc = 0x15ff84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 142), (uint8_t)GPR_U32(ctx, 2));
label_15ff88:
    // 0x15ff88: 0x92a2001b  lbu         $v0, 0x1B($s5)
    ctx->pc = 0x15ff88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 27)));
label_15ff8c:
    // 0x15ff8c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_15ff90:
    // 0x15ff90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15ff94:
    if (ctx->pc == 0x15FF94u) {
        ctx->pc = 0x15FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF90u;
        // 0x15ff94: 0x96620090  lhu         $v0, 0x90($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF98u;
        goto label_15ff98;
    }
    ctx->pc = 0x15FF90u;
    {
        const bool branch_taken_0x15ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff90) {
            ctx->pc = 0x15FF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FF90u;
            // 0x15ff94: 0x96620090  lhu         $v0, 0x90($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FFA8u;
            goto label_15ffa8;
        }
    }
    ctx->pc = 0x15FF98u;
label_15ff98:
    // 0x15ff98: 0x96620090  lhu         $v0, 0x90($s3)
    ctx->pc = 0x15ff98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
label_15ff9c:
    // 0x15ff9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x15ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_15ffa0:
    // 0x15ffa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_15ffa4:
    if (ctx->pc == 0x15FFA4u) {
        ctx->pc = 0x15FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFA0u;
        // 0x15ffa4: 0xa6620090  sh          $v0, 0x90($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFA8u;
        goto label_15ffa8;
    }
    ctx->pc = 0x15FFA0u;
    {
        const bool branch_taken_0x15ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFA0u;
        // 0x15ffa4: 0xa6620090  sh          $v0, 0x90($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffa0) {
            ctx->pc = 0x15FFB0u;
            goto label_15ffb0;
        }
    }
    ctx->pc = 0x15FFA8u;
label_15ffa8:
    // 0x15ffa8: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x15ffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_15ffac:
    // 0x15ffac: 0xa6620090  sh          $v0, 0x90($s3)
    ctx->pc = 0x15ffacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
label_15ffb0:
    // 0x15ffb0: 0x92a2001f  lbu         $v0, 0x1F($s5)
    ctx->pc = 0x15ffb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 31)));
label_15ffb4:
    // 0x15ffb4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_15ffb8:
    // 0x15ffb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15ffbc:
    if (ctx->pc == 0x15FFBCu) {
        ctx->pc = 0x15FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFB8u;
        // 0x15ffbc: 0x96620090  lhu         $v0, 0x90($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFC0u;
        goto label_15ffc0;
    }
    ctx->pc = 0x15FFB8u;
    {
        const bool branch_taken_0x15ffb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffb8) {
            ctx->pc = 0x15FFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FFB8u;
            // 0x15ffbc: 0x96620090  lhu         $v0, 0x90($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FFD0u;
            goto label_15ffd0;
        }
    }
    ctx->pc = 0x15FFC0u;
label_15ffc0:
    // 0x15ffc0: 0x96620090  lhu         $v0, 0x90($s3)
    ctx->pc = 0x15ffc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
label_15ffc4:
    // 0x15ffc4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x15ffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_15ffc8:
    // 0x15ffc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_15ffcc:
    if (ctx->pc == 0x15FFCCu) {
        ctx->pc = 0x15FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC8u;
        // 0x15ffcc: 0xa6620090  sh          $v0, 0x90($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFD0u;
        goto label_15ffd0;
    }
    ctx->pc = 0x15FFC8u;
    {
        const bool branch_taken_0x15ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC8u;
        // 0x15ffcc: 0xa6620090  sh          $v0, 0x90($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffc8) {
            ctx->pc = 0x15FFD8u;
            goto label_15ffd8;
        }
    }
    ctx->pc = 0x15FFD0u;
label_15ffd0:
    // 0x15ffd0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x15ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_15ffd4:
    // 0x15ffd4: 0xa6620090  sh          $v0, 0x90($s3)
    ctx->pc = 0x15ffd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 2));
label_15ffd8:
    // 0x15ffd8: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_15ffdc:
    // 0x15ffdc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15ffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_15ffe0:
    // 0x15ffe0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_15ffe4:
    if (ctx->pc == 0x15FFE4u) {
        ctx->pc = 0x15FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE0u;
        // 0x15ffe4: 0x8e43049c  lw          $v1, 0x49C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFE8u;
        goto label_15ffe8;
    }
    ctx->pc = 0x15FFE0u;
    {
        const bool branch_taken_0x15ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffe0) {
            ctx->pc = 0x15FFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FFE0u;
            // 0x15ffe4: 0x8e43049c  lw          $v1, 0x49C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160020u;
            goto label_160020;
        }
    }
    ctx->pc = 0x15FFE8u;
label_15ffe8:
    // 0x15ffe8: 0x92a20019  lbu         $v0, 0x19($s5)
    ctx->pc = 0x15ffe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
label_15ffec:
    // 0x15ffec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ffecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_15fff0:
    // 0x15fff0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_15fff4:
    if (ctx->pc == 0x15FFF4u) {
        ctx->pc = 0x15FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFF0u;
        // 0x15fff4: 0x8e43049c  lw          $v1, 0x49C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFF8u;
        goto label_15fff8;
    }
    ctx->pc = 0x15FFF0u;
    {
        const bool branch_taken_0x15fff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fff0) {
            ctx->pc = 0x15FFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FFF0u;
            // 0x15fff4: 0x8e43049c  lw          $v1, 0x49C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160010u;
            goto label_160010;
        }
    }
    ctx->pc = 0x15FFF8u;
label_15fff8:
    // 0x15fff8: 0x8e43049c  lw          $v1, 0x49C($s2)
    ctx->pc = 0x15fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_15fffc:
    // 0x15fffc: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_160000:
    // 0x160000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_160004:
    // 0x160004: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_160008:
    // 0x160008: 0x10000009  b           . + 4 + (0x9 << 2)
label_16000c:
    if (ctx->pc == 0x16000Cu) {
        ctx->pc = 0x16000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160008u;
        // 0x16000c: 0xae42049c  sw          $v0, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160010u;
        goto label_160010;
    }
    ctx->pc = 0x160008u;
    {
        const bool branch_taken_0x160008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160008u;
        // 0x16000c: 0xae42049c  sw          $v0, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160008) {
            ctx->pc = 0x160030u;
            goto label_160030;
        }
    }
    ctx->pc = 0x160010u;
label_160010:
    // 0x160010: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_160014:
    // 0x160014: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_160018:
    // 0x160018: 0x10000005  b           . + 4 + (0x5 << 2)
label_16001c:
    if (ctx->pc == 0x16001Cu) {
        ctx->pc = 0x16001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160018u;
        // 0x16001c: 0xae42049c  sw          $v0, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160020u;
        goto label_160020;
    }
    ctx->pc = 0x160018u;
    {
        const bool branch_taken_0x160018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160018u;
        // 0x16001c: 0xae42049c  sw          $v0, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160018) {
            ctx->pc = 0x160030u;
            goto label_160030;
        }
    }
    ctx->pc = 0x160020u;
label_160020:
    // 0x160020: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_160024:
    // 0x160024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_160028:
    // 0x160028: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16002c:
    // 0x16002c: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x16002cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_160030:
    // 0x160030: 0x92a20019  lbu         $v0, 0x19($s5)
    ctx->pc = 0x160030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
label_160034:
    // 0x160034: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x160034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_160038:
    // 0x160038: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_16003c:
    if (ctx->pc == 0x16003Cu) {
        ctx->pc = 0x16003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160038u;
        // 0x16003c: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160040u;
        goto label_160040;
    }
    ctx->pc = 0x160038u;
    {
        const bool branch_taken_0x160038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160038) {
            ctx->pc = 0x16003Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160038u;
            // 0x16003c: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160050u;
            goto label_160050;
        }
    }
    ctx->pc = 0x160040u;
label_160040:
    // 0x160040: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x160040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_160044:
    // 0x160044: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x160044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_160048:
    // 0x160048: 0x10000004  b           . + 4 + (0x4 << 2)
label_16004c:
    if (ctx->pc == 0x16004Cu) {
        ctx->pc = 0x16004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160048u;
        // 0x16004c: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160050u;
        goto label_160050;
    }
    ctx->pc = 0x160048u;
    {
        const bool branch_taken_0x160048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160048u;
        // 0x16004c: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160048) {
            ctx->pc = 0x16005Cu;
            goto label_16005c;
        }
    }
    ctx->pc = 0x160050u;
label_160050:
    // 0x160050: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x160050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_160054:
    // 0x160054: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_160058:
    // 0x160058: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x160058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
label_16005c:
    // 0x16005c: 0x8e43049c  lw          $v1, 0x49C($s2)
    ctx->pc = 0x16005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_160060:
    // 0x160060: 0x2402f3ff  addiu       $v0, $zero, -0xC01
    ctx->pc = 0x160060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_160064:
    // 0x160064: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_160068:
    // 0x160068: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x160068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_16006c:
    // 0x16006c: 0x92a20016  lbu         $v0, 0x16($s5)
    ctx->pc = 0x16006cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_160070:
    // 0x160070: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x160070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_160074:
    // 0x160074: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_160078:
    if (ctx->pc == 0x160078u) {
        ctx->pc = 0x160078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160074u;
        // 0x160078: 0x92a20016  lbu         $v0, 0x16($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16007Cu;
        goto label_16007c;
    }
    ctx->pc = 0x160074u;
    {
        const bool branch_taken_0x160074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160074) {
            ctx->pc = 0x160078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160074u;
            // 0x160078: 0x92a20016  lbu         $v0, 0x16($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16008Cu;
            goto label_16008c;
        }
    }
    ctx->pc = 0x16007Cu;
label_16007c:
    // 0x16007c: 0x8e42049c  lw          $v0, 0x49C($s2)
    ctx->pc = 0x16007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_160080:
    // 0x160080: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x160080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_160084:
    // 0x160084: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x160084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_160088:
    // 0x160088: 0x92a20016  lbu         $v0, 0x16($s5)
    ctx->pc = 0x160088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_16008c:
    // 0x16008c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_160090:
    // 0x160090: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_160094:
    if (ctx->pc == 0x160094u) {
        ctx->pc = 0x160094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160090u;
        // 0x160094: 0x92a20019  lbu         $v0, 0x19($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160098u;
        goto label_160098;
    }
    ctx->pc = 0x160090u;
    {
        const bool branch_taken_0x160090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160090) {
            ctx->pc = 0x160094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160090u;
            // 0x160094: 0x92a20019  lbu         $v0, 0x19($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1600A8u;
            goto label_1600a8;
        }
    }
    ctx->pc = 0x160098u;
label_160098:
    // 0x160098: 0x8e42049c  lw          $v0, 0x49C($s2)
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16009c:
    // 0x16009c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1600a0:
    // 0x1600a0: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x1600a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_1600a4:
    // 0x1600a4: 0x92a20019  lbu         $v0, 0x19($s5)
    ctx->pc = 0x1600a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
label_1600a8:
    // 0x1600a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1600a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1600ac:
    // 0x1600ac: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1600b0:
    if (ctx->pc == 0x1600B0u) {
        ctx->pc = 0x1600B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600ACu;
        // 0x1600b0: 0x92620005  lbu         $v0, 0x5($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600B4u;
        goto label_1600b4;
    }
    ctx->pc = 0x1600ACu;
    {
        const bool branch_taken_0x1600ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600ac) {
            ctx->pc = 0x1600B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1600ACu;
            // 0x1600b0: 0x92620005  lbu         $v0, 0x5($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160100u;
            goto label_160100;
        }
    }
    ctx->pc = 0x1600B4u;
label_1600b4:
    // 0x1600b4: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x1600b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_1600b8:
    // 0x1600b8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1600b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1600bc:
    // 0x1600bc: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x1600bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
label_1600c0:
    // 0x1600c0: 0x9262000f  lbu         $v0, 0xF($s3)
    ctx->pc = 0x1600c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_1600c4:
    // 0x1600c4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1600c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1600c8:
    // 0x1600c8: 0xa262000f  sb          $v0, 0xF($s3)
    ctx->pc = 0x1600c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 15), (uint8_t)GPR_U32(ctx, 2));
label_1600cc:
    // 0x1600cc: 0x92620019  lbu         $v0, 0x19($s3)
    ctx->pc = 0x1600ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
label_1600d0:
    // 0x1600d0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1600d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1600d4:
    // 0x1600d4: 0xa2620019  sb          $v0, 0x19($s3)
    ctx->pc = 0x1600d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25), (uint8_t)GPR_U32(ctx, 2));
label_1600d8:
    // 0x1600d8: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x1600d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_1600dc:
    // 0x1600dc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1600dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1600e0:
    // 0x1600e0: 0xa2620023  sb          $v0, 0x23($s3)
    ctx->pc = 0x1600e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
label_1600e4:
    // 0x1600e4: 0x9262002d  lbu         $v0, 0x2D($s3)
    ctx->pc = 0x1600e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
label_1600e8:
    // 0x1600e8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1600e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1600ec:
    // 0x1600ec: 0xa262002d  sb          $v0, 0x2D($s3)
    ctx->pc = 0x1600ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 2));
label_1600f0:
    // 0x1600f0: 0x92620037  lbu         $v0, 0x37($s3)
    ctx->pc = 0x1600f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
label_1600f4:
    // 0x1600f4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1600f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1600f8:
    // 0x1600f8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1600fc:
    if (ctx->pc == 0x1600FCu) {
        ctx->pc = 0x1600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F8u;
        // 0x1600fc: 0xa2620037  sb          $v0, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160100u;
        goto label_160100;
    }
    ctx->pc = 0x1600F8u;
    {
        const bool branch_taken_0x1600f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F8u;
        // 0x1600fc: 0xa2620037  sb          $v0, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f8) {
            ctx->pc = 0x160144u;
            goto label_160144;
        }
    }
    ctx->pc = 0x160100u;
label_160100:
    // 0x160100: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x160100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_160104:
    // 0x160104: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x160104u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
label_160108:
    // 0x160108: 0x9262000f  lbu         $v0, 0xF($s3)
    ctx->pc = 0x160108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_16010c:
    // 0x16010c: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x16010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_160110:
    // 0x160110: 0xa262000f  sb          $v0, 0xF($s3)
    ctx->pc = 0x160110u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 15), (uint8_t)GPR_U32(ctx, 2));
label_160114:
    // 0x160114: 0x92620019  lbu         $v0, 0x19($s3)
    ctx->pc = 0x160114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
label_160118:
    // 0x160118: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x160118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_16011c:
    // 0x16011c: 0xa2620019  sb          $v0, 0x19($s3)
    ctx->pc = 0x16011cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25), (uint8_t)GPR_U32(ctx, 2));
label_160120:
    // 0x160120: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x160120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_160124:
    // 0x160124: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x160124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_160128:
    // 0x160128: 0xa2620023  sb          $v0, 0x23($s3)
    ctx->pc = 0x160128u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
label_16012c:
    // 0x16012c: 0x9262002d  lbu         $v0, 0x2D($s3)
    ctx->pc = 0x16012cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
label_160130:
    // 0x160130: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x160130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_160134:
    // 0x160134: 0xa262002d  sb          $v0, 0x2D($s3)
    ctx->pc = 0x160134u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 45), (uint8_t)GPR_U32(ctx, 2));
label_160138:
    // 0x160138: 0x92620037  lbu         $v0, 0x37($s3)
    ctx->pc = 0x160138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
label_16013c:
    // 0x16013c: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x16013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_160140:
    // 0x160140: 0xa2620037  sb          $v0, 0x37($s3)
    ctx->pc = 0x160140u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 2));
label_160144:
    // 0x160144: 0x92a20019  lbu         $v0, 0x19($s5)
    ctx->pc = 0x160144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
label_160148:
    // 0x160148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16014c:
    // 0x16014c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_160150:
    if (ctx->pc == 0x160150u) {
        ctx->pc = 0x160150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16014Cu;
        // 0x160150: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160154u;
        goto label_160154;
    }
    ctx->pc = 0x16014Cu;
    {
        const bool branch_taken_0x16014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16014c) {
            ctx->pc = 0x160150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16014Cu;
            // 0x160150: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160164u;
            goto label_160164;
        }
    }
    ctx->pc = 0x160154u;
label_160154:
    // 0x160154: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x160154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_160158:
    // 0x160158: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x160158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_16015c:
    // 0x16015c: 0xa242008c  sb          $v0, 0x8C($s2)
    ctx->pc = 0x16015cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
label_160160:
    // 0x160160: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x160160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_160164:
    // 0x160164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160168:
    // 0x160168: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x160168u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16016c:
    // 0x16016c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16016cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_160170:
    // 0x160170: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x160170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_160174:
    // 0x160174: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160174u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_160178:
    // 0x160178: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16017c:
    // 0x16017c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16017cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160180:
    // 0x160180: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160184:
    // 0x160184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160188:
    // 0x160188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16018c:
    // 0x16018c: 0x3e00008  jr          $ra
label_160190:
    if (ctx->pc == 0x160190u) {
        ctx->pc = 0x160190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16018Cu;
        // 0x160190: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160194u;
        goto label_160194;
    }
    ctx->pc = 0x16018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16018Cu;
        // 0x160190: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160194u;
label_160194:
    // 0x160194: 0x0  nop
    ctx->pc = 0x160194u;
    // NOP
label_160198:
    // 0x160198: 0x0  nop
    ctx->pc = 0x160198u;
    // NOP
label_16019c:
    // 0x16019c: 0x0  nop
    ctx->pc = 0x16019cu;
    // NOP
}
