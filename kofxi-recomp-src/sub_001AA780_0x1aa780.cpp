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

// Function: sub_001AA780
// Address: 0x1aa780 - 0x1aae50
void sub_001AA780_0x1aa780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA780_0x1aa780");
#endif

    switch (ctx->pc) {
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa784u: goto label_1aa784;
        case 0x1aa788u: goto label_1aa788;
        case 0x1aa78cu: goto label_1aa78c;
        case 0x1aa790u: goto label_1aa790;
        case 0x1aa794u: goto label_1aa794;
        case 0x1aa798u: goto label_1aa798;
        case 0x1aa79cu: goto label_1aa79c;
        case 0x1aa7a0u: goto label_1aa7a0;
        case 0x1aa7a4u: goto label_1aa7a4;
        case 0x1aa7a8u: goto label_1aa7a8;
        case 0x1aa7acu: goto label_1aa7ac;
        case 0x1aa7b0u: goto label_1aa7b0;
        case 0x1aa7b4u: goto label_1aa7b4;
        case 0x1aa7b8u: goto label_1aa7b8;
        case 0x1aa7bcu: goto label_1aa7bc;
        case 0x1aa7c0u: goto label_1aa7c0;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7c8u: goto label_1aa7c8;
        case 0x1aa7ccu: goto label_1aa7cc;
        case 0x1aa7d0u: goto label_1aa7d0;
        case 0x1aa7d4u: goto label_1aa7d4;
        case 0x1aa7d8u: goto label_1aa7d8;
        case 0x1aa7dcu: goto label_1aa7dc;
        case 0x1aa7e0u: goto label_1aa7e0;
        case 0x1aa7e4u: goto label_1aa7e4;
        case 0x1aa7e8u: goto label_1aa7e8;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa7f0u: goto label_1aa7f0;
        case 0x1aa7f4u: goto label_1aa7f4;
        case 0x1aa7f8u: goto label_1aa7f8;
        case 0x1aa7fcu: goto label_1aa7fc;
        case 0x1aa800u: goto label_1aa800;
        case 0x1aa804u: goto label_1aa804;
        case 0x1aa808u: goto label_1aa808;
        case 0x1aa80cu: goto label_1aa80c;
        case 0x1aa810u: goto label_1aa810;
        case 0x1aa814u: goto label_1aa814;
        case 0x1aa818u: goto label_1aa818;
        case 0x1aa81cu: goto label_1aa81c;
        case 0x1aa820u: goto label_1aa820;
        case 0x1aa824u: goto label_1aa824;
        case 0x1aa828u: goto label_1aa828;
        case 0x1aa82cu: goto label_1aa82c;
        case 0x1aa830u: goto label_1aa830;
        case 0x1aa834u: goto label_1aa834;
        case 0x1aa838u: goto label_1aa838;
        case 0x1aa83cu: goto label_1aa83c;
        case 0x1aa840u: goto label_1aa840;
        case 0x1aa844u: goto label_1aa844;
        case 0x1aa848u: goto label_1aa848;
        case 0x1aa84cu: goto label_1aa84c;
        case 0x1aa850u: goto label_1aa850;
        case 0x1aa854u: goto label_1aa854;
        case 0x1aa858u: goto label_1aa858;
        case 0x1aa85cu: goto label_1aa85c;
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa864u: goto label_1aa864;
        case 0x1aa868u: goto label_1aa868;
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa870u: goto label_1aa870;
        case 0x1aa874u: goto label_1aa874;
        case 0x1aa878u: goto label_1aa878;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa880u: goto label_1aa880;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa888u: goto label_1aa888;
        case 0x1aa88cu: goto label_1aa88c;
        case 0x1aa890u: goto label_1aa890;
        case 0x1aa894u: goto label_1aa894;
        case 0x1aa898u: goto label_1aa898;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a0u: goto label_1aa8a0;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8a8u: goto label_1aa8a8;
        case 0x1aa8acu: goto label_1aa8ac;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8b4u: goto label_1aa8b4;
        case 0x1aa8b8u: goto label_1aa8b8;
        case 0x1aa8bcu: goto label_1aa8bc;
        case 0x1aa8c0u: goto label_1aa8c0;
        case 0x1aa8c4u: goto label_1aa8c4;
        case 0x1aa8c8u: goto label_1aa8c8;
        case 0x1aa8ccu: goto label_1aa8cc;
        case 0x1aa8d0u: goto label_1aa8d0;
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8d8u: goto label_1aa8d8;
        case 0x1aa8dcu: goto label_1aa8dc;
        case 0x1aa8e0u: goto label_1aa8e0;
        case 0x1aa8e4u: goto label_1aa8e4;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa8ecu: goto label_1aa8ec;
        case 0x1aa8f0u: goto label_1aa8f0;
        case 0x1aa8f4u: goto label_1aa8f4;
        case 0x1aa8f8u: goto label_1aa8f8;
        case 0x1aa8fcu: goto label_1aa8fc;
        case 0x1aa900u: goto label_1aa900;
        case 0x1aa904u: goto label_1aa904;
        case 0x1aa908u: goto label_1aa908;
        case 0x1aa90cu: goto label_1aa90c;
        case 0x1aa910u: goto label_1aa910;
        case 0x1aa914u: goto label_1aa914;
        case 0x1aa918u: goto label_1aa918;
        case 0x1aa91cu: goto label_1aa91c;
        case 0x1aa920u: goto label_1aa920;
        case 0x1aa924u: goto label_1aa924;
        case 0x1aa928u: goto label_1aa928;
        case 0x1aa92cu: goto label_1aa92c;
        case 0x1aa930u: goto label_1aa930;
        case 0x1aa934u: goto label_1aa934;
        case 0x1aa938u: goto label_1aa938;
        case 0x1aa93cu: goto label_1aa93c;
        case 0x1aa940u: goto label_1aa940;
        case 0x1aa944u: goto label_1aa944;
        case 0x1aa948u: goto label_1aa948;
        case 0x1aa94cu: goto label_1aa94c;
        case 0x1aa950u: goto label_1aa950;
        case 0x1aa954u: goto label_1aa954;
        case 0x1aa958u: goto label_1aa958;
        case 0x1aa95cu: goto label_1aa95c;
        case 0x1aa960u: goto label_1aa960;
        case 0x1aa964u: goto label_1aa964;
        case 0x1aa968u: goto label_1aa968;
        case 0x1aa96cu: goto label_1aa96c;
        case 0x1aa970u: goto label_1aa970;
        case 0x1aa974u: goto label_1aa974;
        case 0x1aa978u: goto label_1aa978;
        case 0x1aa97cu: goto label_1aa97c;
        case 0x1aa980u: goto label_1aa980;
        case 0x1aa984u: goto label_1aa984;
        case 0x1aa988u: goto label_1aa988;
        case 0x1aa98cu: goto label_1aa98c;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa994u: goto label_1aa994;
        case 0x1aa998u: goto label_1aa998;
        case 0x1aa99cu: goto label_1aa99c;
        case 0x1aa9a0u: goto label_1aa9a0;
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9a8u: goto label_1aa9a8;
        case 0x1aa9acu: goto label_1aa9ac;
        case 0x1aa9b0u: goto label_1aa9b0;
        case 0x1aa9b4u: goto label_1aa9b4;
        case 0x1aa9b8u: goto label_1aa9b8;
        case 0x1aa9bcu: goto label_1aa9bc;
        case 0x1aa9c0u: goto label_1aa9c0;
        case 0x1aa9c4u: goto label_1aa9c4;
        case 0x1aa9c8u: goto label_1aa9c8;
        case 0x1aa9ccu: goto label_1aa9cc;
        case 0x1aa9d0u: goto label_1aa9d0;
        case 0x1aa9d4u: goto label_1aa9d4;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9dcu: goto label_1aa9dc;
        case 0x1aa9e0u: goto label_1aa9e0;
        case 0x1aa9e4u: goto label_1aa9e4;
        case 0x1aa9e8u: goto label_1aa9e8;
        case 0x1aa9ecu: goto label_1aa9ec;
        case 0x1aa9f0u: goto label_1aa9f0;
        case 0x1aa9f4u: goto label_1aa9f4;
        case 0x1aa9f8u: goto label_1aa9f8;
        case 0x1aa9fcu: goto label_1aa9fc;
        case 0x1aaa00u: goto label_1aaa00;
        case 0x1aaa04u: goto label_1aaa04;
        case 0x1aaa08u: goto label_1aaa08;
        case 0x1aaa0cu: goto label_1aaa0c;
        case 0x1aaa10u: goto label_1aaa10;
        case 0x1aaa14u: goto label_1aaa14;
        case 0x1aaa18u: goto label_1aaa18;
        case 0x1aaa1cu: goto label_1aaa1c;
        case 0x1aaa20u: goto label_1aaa20;
        case 0x1aaa24u: goto label_1aaa24;
        case 0x1aaa28u: goto label_1aaa28;
        case 0x1aaa2cu: goto label_1aaa2c;
        case 0x1aaa30u: goto label_1aaa30;
        case 0x1aaa34u: goto label_1aaa34;
        case 0x1aaa38u: goto label_1aaa38;
        case 0x1aaa3cu: goto label_1aaa3c;
        case 0x1aaa40u: goto label_1aaa40;
        case 0x1aaa44u: goto label_1aaa44;
        case 0x1aaa48u: goto label_1aaa48;
        case 0x1aaa4cu: goto label_1aaa4c;
        case 0x1aaa50u: goto label_1aaa50;
        case 0x1aaa54u: goto label_1aaa54;
        case 0x1aaa58u: goto label_1aaa58;
        case 0x1aaa5cu: goto label_1aaa5c;
        case 0x1aaa60u: goto label_1aaa60;
        case 0x1aaa64u: goto label_1aaa64;
        case 0x1aaa68u: goto label_1aaa68;
        case 0x1aaa6cu: goto label_1aaa6c;
        case 0x1aaa70u: goto label_1aaa70;
        case 0x1aaa74u: goto label_1aaa74;
        case 0x1aaa78u: goto label_1aaa78;
        case 0x1aaa7cu: goto label_1aaa7c;
        case 0x1aaa80u: goto label_1aaa80;
        case 0x1aaa84u: goto label_1aaa84;
        case 0x1aaa88u: goto label_1aaa88;
        case 0x1aaa8cu: goto label_1aaa8c;
        case 0x1aaa90u: goto label_1aaa90;
        case 0x1aaa94u: goto label_1aaa94;
        case 0x1aaa98u: goto label_1aaa98;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaaa0u: goto label_1aaaa0;
        case 0x1aaaa4u: goto label_1aaaa4;
        case 0x1aaaa8u: goto label_1aaaa8;
        case 0x1aaaacu: goto label_1aaaac;
        case 0x1aaab0u: goto label_1aaab0;
        case 0x1aaab4u: goto label_1aaab4;
        case 0x1aaab8u: goto label_1aaab8;
        case 0x1aaabcu: goto label_1aaabc;
        case 0x1aaac0u: goto label_1aaac0;
        case 0x1aaac4u: goto label_1aaac4;
        case 0x1aaac8u: goto label_1aaac8;
        case 0x1aaaccu: goto label_1aaacc;
        case 0x1aaad0u: goto label_1aaad0;
        case 0x1aaad4u: goto label_1aaad4;
        case 0x1aaad8u: goto label_1aaad8;
        case 0x1aaadcu: goto label_1aaadc;
        case 0x1aaae0u: goto label_1aaae0;
        case 0x1aaae4u: goto label_1aaae4;
        case 0x1aaae8u: goto label_1aaae8;
        case 0x1aaaecu: goto label_1aaaec;
        case 0x1aaaf0u: goto label_1aaaf0;
        case 0x1aaaf4u: goto label_1aaaf4;
        case 0x1aaaf8u: goto label_1aaaf8;
        case 0x1aaafcu: goto label_1aaafc;
        case 0x1aab00u: goto label_1aab00;
        case 0x1aab04u: goto label_1aab04;
        case 0x1aab08u: goto label_1aab08;
        case 0x1aab0cu: goto label_1aab0c;
        case 0x1aab10u: goto label_1aab10;
        case 0x1aab14u: goto label_1aab14;
        case 0x1aab18u: goto label_1aab18;
        case 0x1aab1cu: goto label_1aab1c;
        case 0x1aab20u: goto label_1aab20;
        case 0x1aab24u: goto label_1aab24;
        case 0x1aab28u: goto label_1aab28;
        case 0x1aab2cu: goto label_1aab2c;
        case 0x1aab30u: goto label_1aab30;
        case 0x1aab34u: goto label_1aab34;
        case 0x1aab38u: goto label_1aab38;
        case 0x1aab3cu: goto label_1aab3c;
        case 0x1aab40u: goto label_1aab40;
        case 0x1aab44u: goto label_1aab44;
        case 0x1aab48u: goto label_1aab48;
        case 0x1aab4cu: goto label_1aab4c;
        case 0x1aab50u: goto label_1aab50;
        case 0x1aab54u: goto label_1aab54;
        case 0x1aab58u: goto label_1aab58;
        case 0x1aab5cu: goto label_1aab5c;
        case 0x1aab60u: goto label_1aab60;
        case 0x1aab64u: goto label_1aab64;
        case 0x1aab68u: goto label_1aab68;
        case 0x1aab6cu: goto label_1aab6c;
        case 0x1aab70u: goto label_1aab70;
        case 0x1aab74u: goto label_1aab74;
        case 0x1aab78u: goto label_1aab78;
        case 0x1aab7cu: goto label_1aab7c;
        case 0x1aab80u: goto label_1aab80;
        case 0x1aab84u: goto label_1aab84;
        case 0x1aab88u: goto label_1aab88;
        case 0x1aab8cu: goto label_1aab8c;
        case 0x1aab90u: goto label_1aab90;
        case 0x1aab94u: goto label_1aab94;
        case 0x1aab98u: goto label_1aab98;
        case 0x1aab9cu: goto label_1aab9c;
        case 0x1aaba0u: goto label_1aaba0;
        case 0x1aaba4u: goto label_1aaba4;
        case 0x1aaba8u: goto label_1aaba8;
        case 0x1aabacu: goto label_1aabac;
        case 0x1aabb0u: goto label_1aabb0;
        case 0x1aabb4u: goto label_1aabb4;
        case 0x1aabb8u: goto label_1aabb8;
        case 0x1aabbcu: goto label_1aabbc;
        case 0x1aabc0u: goto label_1aabc0;
        case 0x1aabc4u: goto label_1aabc4;
        case 0x1aabc8u: goto label_1aabc8;
        case 0x1aabccu: goto label_1aabcc;
        case 0x1aabd0u: goto label_1aabd0;
        case 0x1aabd4u: goto label_1aabd4;
        case 0x1aabd8u: goto label_1aabd8;
        case 0x1aabdcu: goto label_1aabdc;
        case 0x1aabe0u: goto label_1aabe0;
        case 0x1aabe4u: goto label_1aabe4;
        case 0x1aabe8u: goto label_1aabe8;
        case 0x1aabecu: goto label_1aabec;
        case 0x1aabf0u: goto label_1aabf0;
        case 0x1aabf4u: goto label_1aabf4;
        case 0x1aabf8u: goto label_1aabf8;
        case 0x1aabfcu: goto label_1aabfc;
        case 0x1aac00u: goto label_1aac00;
        case 0x1aac04u: goto label_1aac04;
        case 0x1aac08u: goto label_1aac08;
        case 0x1aac0cu: goto label_1aac0c;
        case 0x1aac10u: goto label_1aac10;
        case 0x1aac14u: goto label_1aac14;
        case 0x1aac18u: goto label_1aac18;
        case 0x1aac1cu: goto label_1aac1c;
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac24u: goto label_1aac24;
        case 0x1aac28u: goto label_1aac28;
        case 0x1aac2cu: goto label_1aac2c;
        case 0x1aac30u: goto label_1aac30;
        case 0x1aac34u: goto label_1aac34;
        case 0x1aac38u: goto label_1aac38;
        case 0x1aac3cu: goto label_1aac3c;
        case 0x1aac40u: goto label_1aac40;
        case 0x1aac44u: goto label_1aac44;
        case 0x1aac48u: goto label_1aac48;
        case 0x1aac4cu: goto label_1aac4c;
        case 0x1aac50u: goto label_1aac50;
        case 0x1aac54u: goto label_1aac54;
        case 0x1aac58u: goto label_1aac58;
        case 0x1aac5cu: goto label_1aac5c;
        case 0x1aac60u: goto label_1aac60;
        case 0x1aac64u: goto label_1aac64;
        case 0x1aac68u: goto label_1aac68;
        case 0x1aac6cu: goto label_1aac6c;
        case 0x1aac70u: goto label_1aac70;
        case 0x1aac74u: goto label_1aac74;
        case 0x1aac78u: goto label_1aac78;
        case 0x1aac7cu: goto label_1aac7c;
        case 0x1aac80u: goto label_1aac80;
        case 0x1aac84u: goto label_1aac84;
        case 0x1aac88u: goto label_1aac88;
        case 0x1aac8cu: goto label_1aac8c;
        case 0x1aac90u: goto label_1aac90;
        case 0x1aac94u: goto label_1aac94;
        case 0x1aac98u: goto label_1aac98;
        case 0x1aac9cu: goto label_1aac9c;
        case 0x1aaca0u: goto label_1aaca0;
        case 0x1aaca4u: goto label_1aaca4;
        case 0x1aaca8u: goto label_1aaca8;
        case 0x1aacacu: goto label_1aacac;
        case 0x1aacb0u: goto label_1aacb0;
        case 0x1aacb4u: goto label_1aacb4;
        case 0x1aacb8u: goto label_1aacb8;
        case 0x1aacbcu: goto label_1aacbc;
        case 0x1aacc0u: goto label_1aacc0;
        case 0x1aacc4u: goto label_1aacc4;
        case 0x1aacc8u: goto label_1aacc8;
        case 0x1aacccu: goto label_1aaccc;
        case 0x1aacd0u: goto label_1aacd0;
        case 0x1aacd4u: goto label_1aacd4;
        case 0x1aacd8u: goto label_1aacd8;
        case 0x1aacdcu: goto label_1aacdc;
        case 0x1aace0u: goto label_1aace0;
        case 0x1aace4u: goto label_1aace4;
        case 0x1aace8u: goto label_1aace8;
        case 0x1aacecu: goto label_1aacec;
        case 0x1aacf0u: goto label_1aacf0;
        case 0x1aacf4u: goto label_1aacf4;
        case 0x1aacf8u: goto label_1aacf8;
        case 0x1aacfcu: goto label_1aacfc;
        case 0x1aad00u: goto label_1aad00;
        case 0x1aad04u: goto label_1aad04;
        case 0x1aad08u: goto label_1aad08;
        case 0x1aad0cu: goto label_1aad0c;
        case 0x1aad10u: goto label_1aad10;
        case 0x1aad14u: goto label_1aad14;
        case 0x1aad18u: goto label_1aad18;
        case 0x1aad1cu: goto label_1aad1c;
        case 0x1aad20u: goto label_1aad20;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad28u: goto label_1aad28;
        case 0x1aad2cu: goto label_1aad2c;
        case 0x1aad30u: goto label_1aad30;
        case 0x1aad34u: goto label_1aad34;
        case 0x1aad38u: goto label_1aad38;
        case 0x1aad3cu: goto label_1aad3c;
        case 0x1aad40u: goto label_1aad40;
        case 0x1aad44u: goto label_1aad44;
        case 0x1aad48u: goto label_1aad48;
        case 0x1aad4cu: goto label_1aad4c;
        case 0x1aad50u: goto label_1aad50;
        case 0x1aad54u: goto label_1aad54;
        case 0x1aad58u: goto label_1aad58;
        case 0x1aad5cu: goto label_1aad5c;
        case 0x1aad60u: goto label_1aad60;
        case 0x1aad64u: goto label_1aad64;
        case 0x1aad68u: goto label_1aad68;
        case 0x1aad6cu: goto label_1aad6c;
        case 0x1aad70u: goto label_1aad70;
        case 0x1aad74u: goto label_1aad74;
        case 0x1aad78u: goto label_1aad78;
        case 0x1aad7cu: goto label_1aad7c;
        case 0x1aad80u: goto label_1aad80;
        case 0x1aad84u: goto label_1aad84;
        case 0x1aad88u: goto label_1aad88;
        case 0x1aad8cu: goto label_1aad8c;
        case 0x1aad90u: goto label_1aad90;
        case 0x1aad94u: goto label_1aad94;
        case 0x1aad98u: goto label_1aad98;
        case 0x1aad9cu: goto label_1aad9c;
        case 0x1aada0u: goto label_1aada0;
        case 0x1aada4u: goto label_1aada4;
        case 0x1aada8u: goto label_1aada8;
        case 0x1aadacu: goto label_1aadac;
        case 0x1aadb0u: goto label_1aadb0;
        case 0x1aadb4u: goto label_1aadb4;
        case 0x1aadb8u: goto label_1aadb8;
        case 0x1aadbcu: goto label_1aadbc;
        case 0x1aadc0u: goto label_1aadc0;
        case 0x1aadc4u: goto label_1aadc4;
        case 0x1aadc8u: goto label_1aadc8;
        case 0x1aadccu: goto label_1aadcc;
        case 0x1aadd0u: goto label_1aadd0;
        case 0x1aadd4u: goto label_1aadd4;
        case 0x1aadd8u: goto label_1aadd8;
        case 0x1aaddcu: goto label_1aaddc;
        case 0x1aade0u: goto label_1aade0;
        case 0x1aade4u: goto label_1aade4;
        case 0x1aade8u: goto label_1aade8;
        case 0x1aadecu: goto label_1aadec;
        case 0x1aadf0u: goto label_1aadf0;
        case 0x1aadf4u: goto label_1aadf4;
        case 0x1aadf8u: goto label_1aadf8;
        case 0x1aadfcu: goto label_1aadfc;
        case 0x1aae00u: goto label_1aae00;
        case 0x1aae04u: goto label_1aae04;
        case 0x1aae08u: goto label_1aae08;
        case 0x1aae0cu: goto label_1aae0c;
        case 0x1aae10u: goto label_1aae10;
        case 0x1aae14u: goto label_1aae14;
        case 0x1aae18u: goto label_1aae18;
        case 0x1aae1cu: goto label_1aae1c;
        case 0x1aae20u: goto label_1aae20;
        case 0x1aae24u: goto label_1aae24;
        case 0x1aae28u: goto label_1aae28;
        case 0x1aae2cu: goto label_1aae2c;
        case 0x1aae30u: goto label_1aae30;
        case 0x1aae34u: goto label_1aae34;
        case 0x1aae38u: goto label_1aae38;
        case 0x1aae3cu: goto label_1aae3c;
        case 0x1aae40u: goto label_1aae40;
        case 0x1aae44u: goto label_1aae44;
        case 0x1aae48u: goto label_1aae48;
        case 0x1aae4cu: goto label_1aae4c;
        default: break;
    }

    ctx->pc = 0x1aa780u;

label_1aa780:
    // 0x1aa780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aa784:
    // 0x1aa784: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1aa784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1aa788:
    // 0x1aa788: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aa788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aa78c:
    // 0x1aa78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa790:
    // 0x1aa790: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1aa790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1aa794:
    // 0x1aa794: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1aa794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aa798:
    // 0x1aa798: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1aa798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1aa79c:
    // 0x1aa79c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1aa79cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7a0:
    // 0x1aa7a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1aa7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1aa7a4:
    // 0x1aa7a4: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x1aa7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7a8:
    // 0x1aa7a8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1aa7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1aa7ac:
    // 0x1aa7ac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1aa7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7b0:
    // 0x1aa7b0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1aa7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1aa7b4:
    // 0x1aa7b4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1aa7b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7b8:
    // 0x1aa7b8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1aa7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1aa7bc:
    // 0x1aa7bc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1aa7bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7c0:
    // 0x1aa7c0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1aa7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1aa7c4:
    // 0x1aa7c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1aa7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7c8:
    // 0x1aa7c8: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1aa7cc:
    // 0x1aa7cc: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1aa7d0:
    // 0x1aa7d0: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x1aa7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1aa7d4:
    // 0x1aa7d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa7d8:
    if (ctx->pc == 0x1AA7D8u) {
        ctx->pc = 0x1AA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D4u;
        // 0x1aa7d8: 0x8faa0060  lw          $t2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7DCu;
        goto label_1aa7dc;
    }
    ctx->pc = 0x1AA7D4u;
    {
        const bool branch_taken_0x1aa7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D4u;
        // 0x1aa7d8: 0x8faa0060  lw          $t2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7d4) {
            ctx->pc = 0x1AA7E8u;
            goto label_1aa7e8;
        }
    }
    ctx->pc = 0x1AA7DCu;
label_1aa7dc:
    // 0x1aa7dc: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1aa7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_1aa7e0:
    // 0x1aa7e0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1aa7e4:
    if (ctx->pc == 0x1AA7E4u) {
        ctx->pc = 0x1AA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E0u;
        // 0x1aa7e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7E8u;
        goto label_1aa7e8;
    }
    ctx->pc = 0x1AA7E0u;
    {
        const bool branch_taken_0x1aa7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E0u;
        // 0x1aa7e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7e0) {
            ctx->pc = 0x1AA868u;
            goto label_1aa868;
        }
    }
    ctx->pc = 0x1AA7E8u;
label_1aa7e8:
    // 0x1aa7e8: 0xc06a904  jal         func_1AA410
label_1aa7ec:
    if (ctx->pc == 0x1AA7ECu) {
        ctx->pc = 0x1AA7F0u;
        goto label_1aa7f0;
    }
    ctx->pc = 0x1AA7E8u;
    SET_GPR_U32(ctx, 31, 0x1AA7F0u);
    ctx->pc = 0x1AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA410u, 0x1AA7E8u, 0x1AA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7F0u;
label_1aa7f0:
    // 0x1aa7f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7f4:
    // 0x1aa7f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aa7f8:
    // 0x1aa7f8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1aa7fc:
    if (ctx->pc == 0x1AA7FCu) {
        ctx->pc = 0x1AA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7F8u;
        // 0x1aa7fc: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA800u;
        goto label_1aa800;
    }
    ctx->pc = 0x1AA7F8u;
    {
        const bool branch_taken_0x1aa7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7F8u;
        // 0x1aa7fc: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7f8) {
            ctx->pc = 0x1AA868u;
            goto label_1aa868;
        }
    }
    ctx->pc = 0x1AA800u;
label_1aa800:
    // 0x1aa800: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1aa804:
    // 0x1aa804: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_1aa808:
    if (ctx->pc == 0x1AA808u) {
        ctx->pc = 0x1AA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA804u;
        // 0x1aa808: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA80Cu;
        goto label_1aa80c;
    }
    ctx->pc = 0x1AA804u;
    {
        const bool branch_taken_0x1aa804 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA804u;
        // 0x1aa808: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa804) {
            ctx->pc = 0x1AA868u;
            goto label_1aa868;
        }
    }
    ctx->pc = 0x1AA80Cu;
label_1aa80c:
    // 0x1aa80c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1aa80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa810:
    // 0x1aa810: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aa814:
    // 0x1aa814: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x1aa814u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_1aa818:
    // 0x1aa818: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa81c:
    // 0x1aa81c: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x1aa81cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_1aa820:
    // 0x1aa820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aa820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa824:
    // 0x1aa824: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1aa824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_1aa828:
    // 0x1aa828: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1aa828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1aa82c:
    // 0x1aa82c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1aa82cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aa830:
    // 0x1aa830: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x1aa830u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
label_1aa834:
    // 0x1aa834: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1aa834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa838:
    // 0x1aa838: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1aa838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1aa83c:
    // 0x1aa83c: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x1aa83cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_1aa840:
    // 0x1aa840: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x1aa840u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1aa844:
    // 0x1aa844: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1aa848:
    // 0x1aa848: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1aa848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1aa84c:
    // 0x1aa84c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1aa84cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1aa850:
    // 0x1aa850: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x1aa850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1aa854:
    // 0x1aa854: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x1aa854u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1aa858:
    // 0x1aa858: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1aa858u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1aa85c:
    // 0x1aa85c: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x1aa85cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aa860:
    // 0x1aa860: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1aa860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aa864:
    // 0x1aa864: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1aa864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_1aa868:
    // 0x1aa868: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aa868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa86c:
    // 0x1aa86c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1aa86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1aa870:
    // 0x1aa870: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aa870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa874:
    // 0x1aa874: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1aa874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1aa878:
    // 0x1aa878: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1aa878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa87c:
    // 0x1aa87c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1aa87cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1aa880:
    // 0x1aa880: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1aa880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa884:
    // 0x1aa884: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1aa884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1aa888:
    // 0x1aa888: 0x3e00008  jr          $ra
label_1aa88c:
    if (ctx->pc == 0x1AA88Cu) {
        ctx->pc = 0x1AA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA888u;
        // 0x1aa88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA890u;
        goto label_1aa890;
    }
    ctx->pc = 0x1AA888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA888u;
        // 0x1aa88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA890u;
label_1aa890:
    // 0x1aa890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1aa894:
    // 0x1aa894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa898:
    // 0x1aa898: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1aa898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1aa89c:
    // 0x1aa89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8a0:
    // 0x1aa8a0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1aa8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1aa8a4:
    // 0x1aa8a4: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x1aa8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_1aa8a8:
    // 0x1aa8a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1aa8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1aa8ac:
    // 0x1aa8ac: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1aa8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1aa8b0:
    // 0x1aa8b0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1aa8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1aa8b4:
    // 0x1aa8b4: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x1aa8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_1aa8b8:
    // 0x1aa8b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1aa8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1aa8bc:
    // 0x1aa8bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1aa8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8c0:
    // 0x1aa8c0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1aa8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1aa8c4:
    // 0x1aa8c4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1aa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1aa8c8:
    // 0x1aa8c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1aa8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8cc:
    // 0x1aa8cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1aa8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1aa8d0:
    // 0x1aa8d0: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1aa8d4:
    // 0x1aa8d4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1aa8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1aa8d8:
    // 0x1aa8d8: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1aa8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1aa8dc:
    // 0x1aa8dc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1aa8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8e0:
    // 0x1aa8e0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1aa8e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8e4:
    // 0x1aa8e4: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1aa8e8:
    // 0x1aa8e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1aa8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1aa8ec:
    // 0x1aa8ec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1aa8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1aa8f0:
    // 0x1aa8f0: 0xc06a9e0  jal         func_1AA780
label_1aa8f4:
    if (ctx->pc == 0x1AA8F4u) {
        ctx->pc = 0x1AA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8F0u;
        // 0x1aa8f4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8F8u;
        goto label_1aa8f8;
    }
    ctx->pc = 0x1AA8F0u;
    SET_GPR_U32(ctx, 31, 0x1AA8F8u);
    ctx->pc = 0x1AA8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8F0u;
    // 0x1aa8f4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA780u;
    goto label_1aa780;
    ctx->pc = 0x1AA8F8u;
label_1aa8f8:
    // 0x1aa8f8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1aa8fc:
    if (ctx->pc == 0x1AA8FCu) {
        ctx->pc = 0x1AA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8F8u;
        // 0x1aa8fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA900u;
        goto label_1aa900;
    }
    ctx->pc = 0x1AA8F8u;
    {
        const bool branch_taken_0x1aa8f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aa8f8) {
            ctx->pc = 0x1AA8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8F8u;
            // 0x1aa8fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA908u;
            goto label_1aa908;
        }
    }
    ctx->pc = 0x1AA900u;
label_1aa900:
    // 0x1aa900: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1aa904:
    if (ctx->pc == 0x1AA904u) {
        ctx->pc = 0x1AA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA900u;
        // 0x1aa904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA908u;
        goto label_1aa908;
    }
    ctx->pc = 0x1AA900u;
    {
        const bool branch_taken_0x1aa900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA900u;
        // 0x1aa904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa900) {
            ctx->pc = 0x1AA970u;
            goto label_1aa970;
        }
    }
    ctx->pc = 0x1AA908u;
label_1aa908:
    // 0x1aa908: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1aa908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1aa90c:
    // 0x1aa90c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1aa90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1aa910:
    // 0x1aa910: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1aa910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1aa914:
    // 0x1aa914: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1aa914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1aa918:
    // 0x1aa918: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1aa918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_1aa91c:
    // 0x1aa91c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1aa91cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_1aa920:
    // 0x1aa920: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1aa920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_1aa924:
    // 0x1aa924: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1aa924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1aa928:
    // 0x1aa928: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa92c:
    // 0x1aa92c: 0x97a40024  lhu         $a0, 0x24($sp)
    ctx->pc = 0x1aa92cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
label_1aa930:
    // 0x1aa930: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1aa930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1aa934:
    // 0x1aa934: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1aa938:
    // 0x1aa938: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x1aa938u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1aa93c:
    // 0x1aa93c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1aa93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa940:
    // 0x1aa940: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1aa940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1aa944:
    // 0x1aa944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa948:
    // 0x1aa948: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x1aa948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1aa94c:
    // 0x1aa94c: 0xa604009c  sh          $a0, 0x9C($s0)
    ctx->pc = 0x1aa94cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 4));
label_1aa950:
    // 0x1aa950: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1aa950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1aa954:
    // 0x1aa954: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1aa954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_1aa958:
    // 0x1aa958: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x1aa958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
label_1aa95c:
    // 0x1aa95c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x1aa95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_1aa960:
    // 0x1aa960: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x1aa960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_1aa964:
    // 0x1aa964: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x1aa964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_1aa968:
    // 0x1aa968: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1aa968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1aa96c:
    // 0x1aa96c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1aa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1aa970:
    // 0x1aa970: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1aa970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa974:
    // 0x1aa974: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1aa974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1aa978:
    // 0x1aa978: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1aa978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa97c:
    // 0x1aa97c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1aa97cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1aa980:
    // 0x1aa980: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1aa980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa984:
    // 0x1aa984: 0x3e00008  jr          $ra
label_1aa988:
    if (ctx->pc == 0x1AA988u) {
        ctx->pc = 0x1AA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA984u;
        // 0x1aa988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA98Cu;
        goto label_1aa98c;
    }
    ctx->pc = 0x1AA984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA984u;
        // 0x1aa988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA98Cu;
label_1aa98c:
    // 0x1aa98c: 0x0  nop
    ctx->pc = 0x1aa98cu;
    // NOP
label_1aa990:
    // 0x1aa990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa994:
    // 0x1aa994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa998:
    // 0x1aa998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1aa99c:
    // 0x1aa99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa9a0:
    // 0x1aa9a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1aa9a4:
    // 0x1aa9a4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1aa9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1aa9a8:
    // 0x1aa9a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1aa9ac:
    // 0x1aa9ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1aa9b0:
    // 0x1aa9b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aa9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aa9b4:
    // 0x1aa9b4: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_1aa9b8:
    if (ctx->pc == 0x1AA9B8u) {
        ctx->pc = 0x1AA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B4u;
        // 0x1aa9b8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9BCu;
        goto label_1aa9bc;
    }
    ctx->pc = 0x1AA9B4u;
    {
        const bool branch_taken_0x1aa9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B4u;
        // 0x1aa9b8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9b4) {
            ctx->pc = 0x1AAAE8u;
            goto label_1aaae8;
        }
    }
    ctx->pc = 0x1AA9BCu;
label_1aa9bc:
    // 0x1aa9bc: 0xc06f700  jal         func_1BDC00
label_1aa9c0:
    if (ctx->pc == 0x1AA9C0u) {
        ctx->pc = 0x1AA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9BCu;
        // 0x1aa9c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9C4u;
        goto label_1aa9c4;
    }
    ctx->pc = 0x1AA9BCu;
    SET_GPR_U32(ctx, 31, 0x1AA9C4u);
    ctx->pc = 0x1AA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9BCu;
    // 0x1aa9c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AA9BCu, 0x1AA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9C4u;
label_1aa9c4:
    // 0x1aa9c4: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_1aa9c8:
    if (ctx->pc == 0x1AA9C8u) {
        ctx->pc = 0x1AA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9C4u;
        // 0x1aa9c8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9CCu;
        goto label_1aa9cc;
    }
    ctx->pc = 0x1AA9C4u;
    {
        const bool branch_taken_0x1aa9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9c4) {
            ctx->pc = 0x1AA9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA9C4u;
            // 0x1aa9c8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAAE8u;
            goto label_1aaae8;
        }
    }
    ctx->pc = 0x1AA9CCu;
label_1aa9cc:
    // 0x1aa9cc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1aa9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1aa9d0:
    // 0x1aa9d0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1aa9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1aa9d4:
    // 0x1aa9d4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1aa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1aa9d8:
    // 0x1aa9d8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1aa9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1aa9dc:
    // 0x1aa9dc: 0x40f809  jalr        $v0
label_1aa9e0:
    if (ctx->pc == 0x1AA9E0u) {
        ctx->pc = 0x1AA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9DCu;
        // 0x1aa9e0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9E4u;
        goto label_1aa9e4;
    }
    ctx->pc = 0x1AA9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA9E4u);
        ctx->pc = 0x1AA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9DCu;
        // 0x1aa9e0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA9DCu, 0x1AA9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA9E4u;
label_1aa9e4:
    // 0x1aa9e4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1aa9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aa9e8:
    // 0x1aa9e8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1aa9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1aa9ec:
    // 0x1aa9ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aa9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa9f0:
    // 0x1aa9f0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1aa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1aa9f4:
    // 0x1aa9f4: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1aa9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1aa9f8:
    // 0x1aa9f8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1aa9f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aa9fc:
    // 0x1aa9fc: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1aa9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aaa00:
    // 0x1aaa00: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1aaa04:
    // 0x1aaa04: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1aaa04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1aaa08:
    // 0x1aaa08: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1aaa08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1aaa0c:
    // 0x1aaa0c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1aaa0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1aaa10:
    // 0x1aaa10: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1aaa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aaa14:
    // 0x1aaa14: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1aaa14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_1aaa18:
    // 0x1aaa18: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1aaa18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1aaa1c:
    // 0x1aaa1c: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_1aaa20:
    if (ctx->pc == 0x1AAA20u) {
        ctx->pc = 0x1AAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA1Cu;
        // 0x1aaa20: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA24u;
        goto label_1aaa24;
    }
    ctx->pc = 0x1AAA1Cu;
    {
        const bool branch_taken_0x1aaa1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA1Cu;
        // 0x1aaa20: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa1c) {
            ctx->pc = 0x1AAA90u;
            goto label_1aaa90;
        }
    }
    ctx->pc = 0x1AAA24u;
label_1aaa24:
    // 0x1aaa24: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1aaa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1aaa28:
    // 0x1aaa28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aaa28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa2c:
    // 0x1aaa2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1aaa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1aaa30:
    // 0x1aaa30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aaa34:
    // 0x1aaa34: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_1aaa38:
    if (ctx->pc == 0x1AAA38u) {
        ctx->pc = 0x1AAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA34u;
        // 0x1aaa38: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA3Cu;
        goto label_1aaa3c;
    }
    ctx->pc = 0x1AAA34u;
    {
        const bool branch_taken_0x1aaa34 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA34u;
        // 0x1aaa38: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa34) {
            ctx->pc = 0x1AAAC8u;
            goto label_1aaac8;
        }
    }
    ctx->pc = 0x1AAA3Cu;
label_1aaa3c:
    // 0x1aaa3c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa40:
    // 0x1aaa40: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x1aaa40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1aaa44:
    // 0x1aaa44: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1aaa48:
    // 0x1aaa48: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x1aaa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1aaa4c:
    // 0x1aaa4c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1aaa50:
    // 0x1aaa50: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1aaa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aaa54:
    // 0x1aaa54: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1aaa58:
    // 0x1aaa58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aaa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1aaa5c:
    // 0x1aaa5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1aaa60:
    // 0x1aaa60: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1aaa60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1aaa64:
    // 0x1aaa64: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1aaa64u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aaa68:
    // 0x1aaa68: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1aaa68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1aaa6c:
    // 0x1aaa6c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1aaa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1aaa70:
    // 0x1aaa70: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1aaa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aaa74:
    // 0x1aaa74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aaa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1aaa78:
    // 0x1aaa78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aaa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1aaa7c:
    // 0x1aaa7c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_1aaa80:
    if (ctx->pc == 0x1AAA80u) {
        ctx->pc = 0x1AAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA7Cu;
        // 0x1aaa80: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA84u;
        goto label_1aaa84;
    }
    ctx->pc = 0x1AAA7Cu;
    {
        const bool branch_taken_0x1aaa7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA7Cu;
        // 0x1aaa80: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa7c) {
            ctx->pc = 0x1AAA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aaa40;
        }
    }
    ctx->pc = 0x1AAA84u;
label_1aaa84:
    // 0x1aaa84: 0x10000010  b           . + 4 + (0x10 << 2)
label_1aaa88:
    if (ctx->pc == 0x1AAA88u) {
        ctx->pc = 0x1AAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA84u;
        // 0x1aaa88: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA8Cu;
        goto label_1aaa8c;
    }
    ctx->pc = 0x1AAA84u;
    {
        const bool branch_taken_0x1aaa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA84u;
        // 0x1aaa88: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa84) {
            ctx->pc = 0x1AAAC8u;
            goto label_1aaac8;
        }
    }
    ctx->pc = 0x1AAA8Cu;
label_1aaa8c:
    // 0x1aaa8c: 0x0  nop
    ctx->pc = 0x1aaa8cu;
    // NOP
label_1aaa90:
    // 0x1aaa90: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_1aaa94:
    if (ctx->pc == 0x1AAA94u) {
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA98u;
        goto label_1aaa98;
    }
    ctx->pc = 0x1AAA90u;
    {
        const bool branch_taken_0x1aaa90 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa90) {
            ctx->pc = 0x1AAAC8u;
            goto label_1aaac8;
        }
    }
    ctx->pc = 0x1AAA98u;
label_1aaa98:
    // 0x1aaa98: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1aaa98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1aaa9c:
    // 0x1aaa9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1aaa9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1aaaa0:
    // 0x1aaaa0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aaaa4:
    // 0x1aaaa4: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1aaaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1aaaa8:
    // 0x1aaaa8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1aaaa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaaac:
    // 0x1aaaac: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x1aaaacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aaab0:
    // 0x1aaab0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aaab4:
    // 0x1aaab4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1aaab8:
    // 0x1aaab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aaab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1aaabc:
    // 0x1aaabc: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_1aaac0:
    if (ctx->pc == 0x1AAAC0u) {
        ctx->pc = 0x1AAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAABCu;
        // 0x1aaac0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAC4u;
        goto label_1aaac4;
    }
    ctx->pc = 0x1AAABCu;
    {
        const bool branch_taken_0x1aaabc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAABCu;
        // 0x1aaac0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaabc) {
            ctx->pc = 0x1AAA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aaa98;
        }
    }
    ctx->pc = 0x1AAAC4u;
label_1aaac4:
    // 0x1aaac4: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1aaac4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aaac8:
    // 0x1aaac8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aaacc:
    // 0x1aaacc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aaaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aaad0:
    // 0x1aaad0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1aaad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1aaad4:
    // 0x1aaad4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1aaad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1aaad8:
    // 0x1aaad8: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1aaad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1aaadc:
    // 0x1aaadc: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1aaadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1aaae0:
    // 0x1aaae0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aaae4:
    // 0x1aaae4: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1aaae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1aaae8:
    // 0x1aaae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aaaec:
    // 0x1aaaec: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1aaaf0:
    if (ctx->pc == 0x1AAAF0u) {
        ctx->pc = 0x1AAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAECu;
        // 0x1aaaf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAF4u;
        goto label_1aaaf4;
    }
    ctx->pc = 0x1AAAECu;
    {
        const bool branch_taken_0x1aaaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaaec) {
            ctx->pc = 0x1AAAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAAECu;
            // 0x1aaaf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAB14u;
            goto label_1aab14;
        }
    }
    ctx->pc = 0x1AAAF4u;
label_1aaaf4:
    // 0x1aaaf4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1aaaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1aaaf8:
    // 0x1aaaf8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1aaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1aaafc:
    // 0x1aaafc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1aaafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1aab00:
    // 0x1aab00: 0x60f809  jalr        $v1
label_1aab04:
    if (ctx->pc == 0x1AAB04u) {
        ctx->pc = 0x1AAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB00u;
        // 0x1aab04: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB08u;
        goto label_1aab08;
    }
    ctx->pc = 0x1AAB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AAB08u);
        ctx->pc = 0x1AAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB00u;
        // 0x1aab04: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB00u, 0x1AAB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAB08u;
label_1aab08:
    // 0x1aab08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aab0c:
    // 0x1aab0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aab10:
    // 0x1aab10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aab10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aab14:
    // 0x1aab14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aab14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1aab18:
    // 0x1aab18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aab18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aab1c:
    // 0x1aab1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aab1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1aab20:
    // 0x1aab20: 0x3e00008  jr          $ra
label_1aab24:
    if (ctx->pc == 0x1AAB24u) {
        ctx->pc = 0x1AAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB20u;
        // 0x1aab24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB28u;
        goto label_1aab28;
    }
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB20u;
        // 0x1aab24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAB28u;
label_1aab28:
    // 0x1aab28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aab2c:
    // 0x1aab2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aab30:
    // 0x1aab30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1aab34:
    // 0x1aab34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aab34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aab38:
    // 0x1aab38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1aab3c:
    // 0x1aab3c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1aab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1aab40:
    // 0x1aab40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1aab44:
    // 0x1aab44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1aab48:
    // 0x1aab48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aab4c:
    // 0x1aab4c: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_1aab50:
    if (ctx->pc == 0x1AAB50u) {
        ctx->pc = 0x1AAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB4Cu;
        // 0x1aab50: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB54u;
        goto label_1aab54;
    }
    ctx->pc = 0x1AAB4Cu;
    {
        const bool branch_taken_0x1aab4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB4Cu;
        // 0x1aab50: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab4c) {
            ctx->pc = 0x1AAC68u;
            goto label_1aac68;
        }
    }
    ctx->pc = 0x1AAB54u;
label_1aab54:
    // 0x1aab54: 0xc06f700  jal         func_1BDC00
label_1aab58:
    if (ctx->pc == 0x1AAB58u) {
        ctx->pc = 0x1AAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB54u;
        // 0x1aab58: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB5Cu;
        goto label_1aab5c;
    }
    ctx->pc = 0x1AAB54u;
    SET_GPR_U32(ctx, 31, 0x1AAB5Cu);
    ctx->pc = 0x1AAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB54u;
    // 0x1aab58: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AAB54u, 0x1AAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB5Cu;
label_1aab5c:
    // 0x1aab5c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_1aab60:
    if (ctx->pc == 0x1AAB60u) {
        ctx->pc = 0x1AAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB5Cu;
        // 0x1aab60: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB64u;
        goto label_1aab64;
    }
    ctx->pc = 0x1AAB5Cu;
    {
        const bool branch_taken_0x1aab5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aab5c) {
            ctx->pc = 0x1AAB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAB5Cu;
            // 0x1aab60: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC68u;
            goto label_1aac68;
        }
    }
    ctx->pc = 0x1AAB64u;
label_1aab64:
    // 0x1aab64: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1aab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1aab68:
    // 0x1aab68: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1aab6c:
    // 0x1aab6c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1aab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1aab70:
    // 0x1aab70: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1aab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1aab74:
    // 0x1aab74: 0x40f809  jalr        $v0
label_1aab78:
    if (ctx->pc == 0x1AAB78u) {
        ctx->pc = 0x1AAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB74u;
        // 0x1aab78: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB7Cu;
        goto label_1aab7c;
    }
    ctx->pc = 0x1AAB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAB7Cu);
        ctx->pc = 0x1AAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB74u;
        // 0x1aab78: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB74u, 0x1AAB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAB7Cu;
label_1aab7c:
    // 0x1aab7c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1aab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aab80:
    // 0x1aab80: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x1aab80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1aab84:
    // 0x1aab84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aab88:
    // 0x1aab88: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1aab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1aab8c:
    // 0x1aab8c: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x1aab8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1aab90:
    // 0x1aab90: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1aab90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aab94:
    // 0x1aab94: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x1aab94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aab98:
    // 0x1aab98: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1aab98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1aab9c:
    // 0x1aab9c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x1aab9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_1aaba0:
    // 0x1aaba0: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x1aaba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1aaba4:
    // 0x1aaba4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1aaba4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1aaba8:
    // 0x1aaba8: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x1aaba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aabac:
    // 0x1aabac: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x1aabacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_1aabb0:
    // 0x1aabb0: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1aabb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1aabb4:
    // 0x1aabb4: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_1aabb8:
    if (ctx->pc == 0x1AABB8u) {
        ctx->pc = 0x1AABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABB4u;
        // 0x1aabb8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABBCu;
        goto label_1aabbc;
    }
    ctx->pc = 0x1AABB4u;
    {
        const bool branch_taken_0x1aabb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABB4u;
        // 0x1aabb8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabb4) {
            ctx->pc = 0x1AAC18u;
            goto label_1aac18;
        }
    }
    ctx->pc = 0x1AABBCu;
label_1aabbc:
    // 0x1aabbc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1aabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1aabc0:
    // 0x1aabc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aabc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aabc4:
    // 0x1aabc4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1aabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1aabc8:
    // 0x1aabc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aabcc:
    // 0x1aabcc: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_1aabd0:
    if (ctx->pc == 0x1AABD0u) {
        ctx->pc = 0x1AABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABCCu;
        // 0x1aabd0: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABD4u;
        goto label_1aabd4;
    }
    ctx->pc = 0x1AABCCu;
    {
        const bool branch_taken_0x1aabcc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1AABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABCCu;
        // 0x1aabd0: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabcc) {
            ctx->pc = 0x1AAC4Cu;
            goto label_1aac4c;
        }
    }
    ctx->pc = 0x1AABD4u;
label_1aabd4:
    // 0x1aabd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aabd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aabd8:
    // 0x1aabd8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1aabd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1aabdc:
    // 0x1aabdc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1aabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1aabe0:
    // 0x1aabe0: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1aabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1aabe4:
    // 0x1aabe4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1aabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1aabe8:
    // 0x1aabe8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1aabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aabec:
    // 0x1aabec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aabecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1aabf0:
    // 0x1aabf0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1aabf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1aabf4:
    // 0x1aabf4: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x1aabf4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aabf8:
    // 0x1aabf8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1aabf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1aabfc:
    // 0x1aabfc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1aabfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1aac00:
    // 0x1aac00: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1aac00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aac04:
    // 0x1aac04: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_1aac08:
    if (ctx->pc == 0x1AAC08u) {
        ctx->pc = 0x1AAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC04u;
        // 0x1aac08: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC0Cu;
        goto label_1aac0c;
    }
    ctx->pc = 0x1AAC04u;
    {
        const bool branch_taken_0x1aac04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC04u;
        // 0x1aac08: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac04) {
            ctx->pc = 0x1AABD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aabd8;
        }
    }
    ctx->pc = 0x1AAC0Cu;
label_1aac0c:
    // 0x1aac0c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aac10:
    if (ctx->pc == 0x1AAC10u) {
        ctx->pc = 0x1AAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC0Cu;
        // 0x1aac10: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC14u;
        goto label_1aac14;
    }
    ctx->pc = 0x1AAC0Cu;
    {
        const bool branch_taken_0x1aac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC0Cu;
        // 0x1aac10: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac0c) {
            ctx->pc = 0x1AAC4Cu;
            goto label_1aac4c;
        }
    }
    ctx->pc = 0x1AAC14u;
label_1aac14:
    // 0x1aac14: 0x0  nop
    ctx->pc = 0x1aac14u;
    // NOP
label_1aac18:
    // 0x1aac18: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_1aac1c:
    if (ctx->pc == 0x1AAC1Cu) {
        ctx->pc = 0x1AAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC18u;
        // 0x1aac1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC20u;
        goto label_1aac20;
    }
    ctx->pc = 0x1AAC18u;
    {
        const bool branch_taken_0x1aac18 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1AAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC18u;
        // 0x1aac1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac18) {
            ctx->pc = 0x1AAC4Cu;
            goto label_1aac4c;
        }
    }
    ctx->pc = 0x1AAC20u;
label_1aac20:
    // 0x1aac20: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1aac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1aac24:
    // 0x1aac24: 0x0  nop
    ctx->pc = 0x1aac24u;
    // NOP
label_1aac28:
    // 0x1aac28: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x1aac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_1aac2c:
    // 0x1aac2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1aac30:
    // 0x1aac30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aac30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aac34:
    // 0x1aac34: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x1aac34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aac38:
    // 0x1aac38: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1aac3c:
    // 0x1aac3c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1aac3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1aac40:
    // 0x1aac40: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_1aac44:
    if (ctx->pc == 0x1AAC44u) {
        ctx->pc = 0x1AAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC40u;
        // 0x1aac44: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC48u;
        goto label_1aac48;
    }
    ctx->pc = 0x1AAC40u;
    {
        const bool branch_taken_0x1aac40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC40u;
        // 0x1aac44: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac40) {
            ctx->pc = 0x1AAC28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aac28;
        }
    }
    ctx->pc = 0x1AAC48u;
label_1aac48:
    // 0x1aac48: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1aac48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aac4c:
    // 0x1aac4c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aac50:
    // 0x1aac50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aac54:
    // 0x1aac54: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1aac54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1aac58:
    // 0x1aac58: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1aac58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1aac5c:
    // 0x1aac5c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x1aac5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1aac60:
    // 0x1aac60: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x1aac60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_1aac64:
    // 0x1aac64: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1aac64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1aac68:
    // 0x1aac68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aac6c:
    // 0x1aac6c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1aac70:
    if (ctx->pc == 0x1AAC70u) {
        ctx->pc = 0x1AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC6Cu;
        // 0x1aac70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC74u;
        goto label_1aac74;
    }
    ctx->pc = 0x1AAC6Cu;
    {
        const bool branch_taken_0x1aac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aac6c) {
            ctx->pc = 0x1AAC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC6Cu;
            // 0x1aac70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC94u;
            goto label_1aac94;
        }
    }
    ctx->pc = 0x1AAC74u;
label_1aac74:
    // 0x1aac74: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1aac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1aac78:
    // 0x1aac78: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1aac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1aac7c:
    // 0x1aac7c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1aac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1aac80:
    // 0x1aac80: 0x60f809  jalr        $v1
label_1aac84:
    if (ctx->pc == 0x1AAC84u) {
        ctx->pc = 0x1AAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC80u;
        // 0x1aac84: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC88u;
        goto label_1aac88;
    }
    ctx->pc = 0x1AAC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AAC88u);
        ctx->pc = 0x1AAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC80u;
        // 0x1aac84: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAC80u, 0x1AAC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAC88u;
label_1aac88:
    // 0x1aac88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aac8c:
    // 0x1aac8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aac90:
    // 0x1aac90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aac90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aac94:
    // 0x1aac94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aac94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1aac98:
    // 0x1aac98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aac98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aac9c:
    // 0x1aac9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaca0:
    // 0x1aaca0: 0x3e00008  jr          $ra
label_1aaca4:
    if (ctx->pc == 0x1AACA4u) {
        ctx->pc = 0x1AACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACA0u;
        // 0x1aaca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACA8u;
        goto label_1aaca8;
    }
    ctx->pc = 0x1AACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACA0u;
        // 0x1aaca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AACA8u;
label_1aaca8:
    // 0x1aaca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aacac:
    // 0x1aacac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aacb0:
    // 0x1aacb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aacb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1aacb4:
    // 0x1aacb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aacb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aacb8:
    // 0x1aacb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aacb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1aacbc:
    // 0x1aacbc: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1aacbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1aacc0:
    // 0x1aacc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aacc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1aacc4:
    // 0x1aacc4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aacc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1aacc8:
    // 0x1aacc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aaccc:
    // 0x1aaccc: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_1aacd0:
    if (ctx->pc == 0x1AACD0u) {
        ctx->pc = 0x1AACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACCCu;
        // 0x1aacd0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACD4u;
        goto label_1aacd4;
    }
    ctx->pc = 0x1AACCCu;
    {
        const bool branch_taken_0x1aaccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACCCu;
        // 0x1aacd0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaccc) {
            ctx->pc = 0x1AAE10u;
            goto label_1aae10;
        }
    }
    ctx->pc = 0x1AACD4u;
label_1aacd4:
    // 0x1aacd4: 0xc06f700  jal         func_1BDC00
label_1aacd8:
    if (ctx->pc == 0x1AACD8u) {
        ctx->pc = 0x1AACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACD4u;
        // 0x1aacd8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACDCu;
        goto label_1aacdc;
    }
    ctx->pc = 0x1AACD4u;
    SET_GPR_U32(ctx, 31, 0x1AACDCu);
    ctx->pc = 0x1AACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACD4u;
    // 0x1aacd8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AACD4u, 0x1AACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACDCu;
label_1aacdc:
    // 0x1aacdc: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_1aace0:
    if (ctx->pc == 0x1AACE0u) {
        ctx->pc = 0x1AACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACDCu;
        // 0x1aace0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACE4u;
        goto label_1aace4;
    }
    ctx->pc = 0x1AACDCu;
    {
        const bool branch_taken_0x1aacdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aacdc) {
            ctx->pc = 0x1AACE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AACDCu;
            // 0x1aace0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAE10u;
            goto label_1aae10;
        }
    }
    ctx->pc = 0x1AACE4u;
label_1aace4:
    // 0x1aace4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1aace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1aace8:
    // 0x1aace8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1aace8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1aacec:
    // 0x1aacec: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1aacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1aacf0:
    // 0x1aacf0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1aacf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1aacf4:
    // 0x1aacf4: 0x40f809  jalr        $v0
label_1aacf8:
    if (ctx->pc == 0x1AACF8u) {
        ctx->pc = 0x1AACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACF4u;
        // 0x1aacf8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACFCu;
        goto label_1aacfc;
    }
    ctx->pc = 0x1AACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AACFCu);
        ctx->pc = 0x1AACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACF4u;
        // 0x1aacf8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AACF4u, 0x1AACFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AACFCu;
label_1aacfc:
    // 0x1aacfc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1aacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aad00:
    // 0x1aad00: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1aad00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1aad04:
    // 0x1aad04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aad08:
    // 0x1aad08: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1aad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1aad0c:
    // 0x1aad0c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1aad0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1aad10:
    // 0x1aad10: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1aad10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aad14:
    // 0x1aad14: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1aad14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aad18:
    // 0x1aad18: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1aad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1aad1c:
    // 0x1aad1c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1aad1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1aad20:
    // 0x1aad20: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1aad20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1aad24:
    // 0x1aad24: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1aad28:
    // 0x1aad28: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1aad28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aad2c:
    // 0x1aad2c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1aad2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_1aad30:
    // 0x1aad30: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_1aad34:
    // 0x1aad34: 0x1486001e  bne         $a0, $a2, . + 4 + (0x1E << 2)
label_1aad38:
    if (ctx->pc == 0x1AAD38u) {
        ctx->pc = 0x1AAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD34u;
        // 0x1aad38: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD3Cu;
        goto label_1aad3c;
    }
    ctx->pc = 0x1AAD34u;
    {
        const bool branch_taken_0x1aad34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD34u;
        // 0x1aad38: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad34) {
            ctx->pc = 0x1AADB0u;
            goto label_1aadb0;
        }
    }
    ctx->pc = 0x1AAD3Cu;
label_1aad3c:
    // 0x1aad3c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1aad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1aad40:
    // 0x1aad40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aad40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aad44:
    // 0x1aad44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1aad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1aad48:
    // 0x1aad48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aad4c:
    // 0x1aad4c: 0x19200029  blez        $t1, . + 4 + (0x29 << 2)
label_1aad50:
    if (ctx->pc == 0x1AAD50u) {
        ctx->pc = 0x1AAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD4Cu;
        // 0x1aad50: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD54u;
        goto label_1aad54;
    }
    ctx->pc = 0x1AAD4Cu;
    {
        const bool branch_taken_0x1aad4c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD4Cu;
        // 0x1aad50: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad4c) {
            ctx->pc = 0x1AADF4u;
            goto label_1aadf4;
        }
    }
    ctx->pc = 0x1AAD54u;
label_1aad54:
    // 0x1aad54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aad58:
    // 0x1aad58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1aad58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aad5c:
    // 0x1aad5c: 0x244ae480  addiu       $t2, $v0, -0x1B80
    ctx->pc = 0x1aad5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
label_1aad60:
    // 0x1aad60: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1aad60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1aad64:
    // 0x1aad64: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1aad64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1aad68:
    // 0x1aad68: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x1aad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1aad6c:
    // 0x1aad6c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1aad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1aad70:
    // 0x1aad70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aad74:
    // 0x1aad74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1aad78:
    // 0x1aad78: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1aad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1aad7c:
    // 0x1aad7c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1aad7cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aad80:
    // 0x1aad80: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1aad80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1aad84:
    // 0x1aad84: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1aad84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1aad88:
    // 0x1aad88: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x1aad88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1aad8c:
    // 0x1aad8c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1aad8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1aad90:
    // 0x1aad90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aad90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aad94:
    // 0x1aad94: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1aad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1aad98:
    // 0x1aad98: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1aad98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1aad9c:
    // 0x1aad9c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_1aada0:
    if (ctx->pc == 0x1AADA0u) {
        ctx->pc = 0x1AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD9Cu;
        // 0x1aada0: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADA4u;
        goto label_1aada4;
    }
    ctx->pc = 0x1AAD9Cu;
    {
        const bool branch_taken_0x1aad9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD9Cu;
        // 0x1aada0: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad9c) {
            ctx->pc = 0x1AAD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aad60;
        }
    }
    ctx->pc = 0x1AADA4u;
label_1aada4:
    // 0x1aada4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1aada8:
    if (ctx->pc == 0x1AADA8u) {
        ctx->pc = 0x1AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADA4u;
        // 0x1aada8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADACu;
        goto label_1aadac;
    }
    ctx->pc = 0x1AADA4u;
    {
        const bool branch_taken_0x1aada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADA4u;
        // 0x1aada8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aada4) {
            ctx->pc = 0x1AADF4u;
            goto label_1aadf4;
        }
    }
    ctx->pc = 0x1AADACu;
label_1aadac:
    // 0x1aadac: 0x0  nop
    ctx->pc = 0x1aadacu;
    // NOP
label_1aadb0:
    // 0x1aadb0: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
label_1aadb4:
    if (ctx->pc == 0x1AADB4u) {
        ctx->pc = 0x1AADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADB0u;
        // 0x1aadb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADB8u;
        goto label_1aadb8;
    }
    ctx->pc = 0x1AADB0u;
    {
        const bool branch_taken_0x1aadb0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADB0u;
        // 0x1aadb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadb0) {
            ctx->pc = 0x1AADF4u;
            goto label_1aadf4;
        }
    }
    ctx->pc = 0x1AADB8u;
label_1aadb8:
    // 0x1aadb8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aadbc:
    // 0x1aadbc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1aadbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1aadc0:
    // 0x1aadc0: 0x2446e480  addiu       $a2, $v0, -0x1B80
    ctx->pc = 0x1aadc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
label_1aadc4:
    // 0x1aadc4: 0x0  nop
    ctx->pc = 0x1aadc4u;
    // NOP
label_1aadc8:
    // 0x1aadc8: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1aadcc:
    // 0x1aadcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1aadccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1aadd0:
    // 0x1aadd0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1aadd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1aadd4:
    // 0x1aadd4: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x1aadd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aadd8:
    // 0x1aadd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aaddc:
    // 0x1aaddc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1aaddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1aade0:
    // 0x1aade0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1aade0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1aade4:
    // 0x1aade4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1aade4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1aade8:
    // 0x1aade8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1aadec:
    if (ctx->pc == 0x1AADECu) {
        ctx->pc = 0x1AADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADE8u;
        // 0x1aadec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADF0u;
        goto label_1aadf0;
    }
    ctx->pc = 0x1AADE8u;
    {
        const bool branch_taken_0x1aade8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADE8u;
        // 0x1aadec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aade8) {
            ctx->pc = 0x1AADC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aadc8;
        }
    }
    ctx->pc = 0x1AADF0u;
label_1aadf0:
    // 0x1aadf0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1aadf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aadf4:
    // 0x1aadf4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1aadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aadf8:
    // 0x1aadf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aadfc:
    // 0x1aadfc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1aadfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1aae00:
    // 0x1aae00: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1aae00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1aae04:
    // 0x1aae04: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1aae04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1aae08:
    // 0x1aae08: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1aae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1aae0c:
    // 0x1aae0c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1aae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1aae10:
    // 0x1aae10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aae14:
    // 0x1aae14: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1aae18:
    if (ctx->pc == 0x1AAE18u) {
        ctx->pc = 0x1AAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE14u;
        // 0x1aae18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE1Cu;
        goto label_1aae1c;
    }
    ctx->pc = 0x1AAE14u;
    {
        const bool branch_taken_0x1aae14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aae14) {
            ctx->pc = 0x1AAE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAE14u;
            // 0x1aae18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAE3Cu;
            goto label_1aae3c;
        }
    }
    ctx->pc = 0x1AAE1Cu;
label_1aae1c:
    // 0x1aae1c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1aae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1aae20:
    // 0x1aae20: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1aae24:
    // 0x1aae24: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1aae28:
    // 0x1aae28: 0x60f809  jalr        $v1
label_1aae2c:
    if (ctx->pc == 0x1AAE2Cu) {
        ctx->pc = 0x1AAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE28u;
        // 0x1aae2c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE30u;
        goto label_1aae30;
    }
    ctx->pc = 0x1AAE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AAE30u);
        ctx->pc = 0x1AAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE28u;
        // 0x1aae2c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE28u, 0x1AAE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAE30u;
label_1aae30:
    // 0x1aae30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aae34:
    // 0x1aae34: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aae34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aae38:
    // 0x1aae38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aae38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aae3c:
    // 0x1aae3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aae3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1aae40:
    // 0x1aae40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aae40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aae44:
    // 0x1aae44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1aae48:
    // 0x1aae48: 0x3e00008  jr          $ra
label_1aae4c:
    if (ctx->pc == 0x1AAE4Cu) {
        ctx->pc = 0x1AAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE48u;
        // 0x1aae4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE50u;
        goto label_fallthrough_0x1aae48;
    }
    ctx->pc = 0x1AAE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE48u;
        // 0x1aae4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aae48:
    ctx->pc = 0x1AAE50u;
}
