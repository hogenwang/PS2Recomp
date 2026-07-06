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

// Function: sub_002FAB40
// Address: 0x2fab40 - 0x2fb600
void sub_002FAB40_0x2fab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAB40_0x2fab40");
#endif

    switch (ctx->pc) {
        case 0x2fab40u: goto label_2fab40;
        case 0x2fab44u: goto label_2fab44;
        case 0x2fab48u: goto label_2fab48;
        case 0x2fab4cu: goto label_2fab4c;
        case 0x2fab50u: goto label_2fab50;
        case 0x2fab54u: goto label_2fab54;
        case 0x2fab58u: goto label_2fab58;
        case 0x2fab5cu: goto label_2fab5c;
        case 0x2fab60u: goto label_2fab60;
        case 0x2fab64u: goto label_2fab64;
        case 0x2fab68u: goto label_2fab68;
        case 0x2fab6cu: goto label_2fab6c;
        case 0x2fab70u: goto label_2fab70;
        case 0x2fab74u: goto label_2fab74;
        case 0x2fab78u: goto label_2fab78;
        case 0x2fab7cu: goto label_2fab7c;
        case 0x2fab80u: goto label_2fab80;
        case 0x2fab84u: goto label_2fab84;
        case 0x2fab88u: goto label_2fab88;
        case 0x2fab8cu: goto label_2fab8c;
        case 0x2fab90u: goto label_2fab90;
        case 0x2fab94u: goto label_2fab94;
        case 0x2fab98u: goto label_2fab98;
        case 0x2fab9cu: goto label_2fab9c;
        case 0x2faba0u: goto label_2faba0;
        case 0x2faba4u: goto label_2faba4;
        case 0x2faba8u: goto label_2faba8;
        case 0x2fabacu: goto label_2fabac;
        case 0x2fabb0u: goto label_2fabb0;
        case 0x2fabb4u: goto label_2fabb4;
        case 0x2fabb8u: goto label_2fabb8;
        case 0x2fabbcu: goto label_2fabbc;
        case 0x2fabc0u: goto label_2fabc0;
        case 0x2fabc4u: goto label_2fabc4;
        case 0x2fabc8u: goto label_2fabc8;
        case 0x2fabccu: goto label_2fabcc;
        case 0x2fabd0u: goto label_2fabd0;
        case 0x2fabd4u: goto label_2fabd4;
        case 0x2fabd8u: goto label_2fabd8;
        case 0x2fabdcu: goto label_2fabdc;
        case 0x2fabe0u: goto label_2fabe0;
        case 0x2fabe4u: goto label_2fabe4;
        case 0x2fabe8u: goto label_2fabe8;
        case 0x2fabecu: goto label_2fabec;
        case 0x2fabf0u: goto label_2fabf0;
        case 0x2fabf4u: goto label_2fabf4;
        case 0x2fabf8u: goto label_2fabf8;
        case 0x2fabfcu: goto label_2fabfc;
        case 0x2fac00u: goto label_2fac00;
        case 0x2fac04u: goto label_2fac04;
        case 0x2fac08u: goto label_2fac08;
        case 0x2fac0cu: goto label_2fac0c;
        case 0x2fac10u: goto label_2fac10;
        case 0x2fac14u: goto label_2fac14;
        case 0x2fac18u: goto label_2fac18;
        case 0x2fac1cu: goto label_2fac1c;
        case 0x2fac20u: goto label_2fac20;
        case 0x2fac24u: goto label_2fac24;
        case 0x2fac28u: goto label_2fac28;
        case 0x2fac2cu: goto label_2fac2c;
        case 0x2fac30u: goto label_2fac30;
        case 0x2fac34u: goto label_2fac34;
        case 0x2fac38u: goto label_2fac38;
        case 0x2fac3cu: goto label_2fac3c;
        case 0x2fac40u: goto label_2fac40;
        case 0x2fac44u: goto label_2fac44;
        case 0x2fac48u: goto label_2fac48;
        case 0x2fac4cu: goto label_2fac4c;
        case 0x2fac50u: goto label_2fac50;
        case 0x2fac54u: goto label_2fac54;
        case 0x2fac58u: goto label_2fac58;
        case 0x2fac5cu: goto label_2fac5c;
        case 0x2fac60u: goto label_2fac60;
        case 0x2fac64u: goto label_2fac64;
        case 0x2fac68u: goto label_2fac68;
        case 0x2fac6cu: goto label_2fac6c;
        case 0x2fac70u: goto label_2fac70;
        case 0x2fac74u: goto label_2fac74;
        case 0x2fac78u: goto label_2fac78;
        case 0x2fac7cu: goto label_2fac7c;
        case 0x2fac80u: goto label_2fac80;
        case 0x2fac84u: goto label_2fac84;
        case 0x2fac88u: goto label_2fac88;
        case 0x2fac8cu: goto label_2fac8c;
        case 0x2fac90u: goto label_2fac90;
        case 0x2fac94u: goto label_2fac94;
        case 0x2fac98u: goto label_2fac98;
        case 0x2fac9cu: goto label_2fac9c;
        case 0x2faca0u: goto label_2faca0;
        case 0x2faca4u: goto label_2faca4;
        case 0x2faca8u: goto label_2faca8;
        case 0x2facacu: goto label_2facac;
        case 0x2facb0u: goto label_2facb0;
        case 0x2facb4u: goto label_2facb4;
        case 0x2facb8u: goto label_2facb8;
        case 0x2facbcu: goto label_2facbc;
        case 0x2facc0u: goto label_2facc0;
        case 0x2facc4u: goto label_2facc4;
        case 0x2facc8u: goto label_2facc8;
        case 0x2facccu: goto label_2faccc;
        case 0x2facd0u: goto label_2facd0;
        case 0x2facd4u: goto label_2facd4;
        case 0x2facd8u: goto label_2facd8;
        case 0x2facdcu: goto label_2facdc;
        case 0x2face0u: goto label_2face0;
        case 0x2face4u: goto label_2face4;
        case 0x2face8u: goto label_2face8;
        case 0x2facecu: goto label_2facec;
        case 0x2facf0u: goto label_2facf0;
        case 0x2facf4u: goto label_2facf4;
        case 0x2facf8u: goto label_2facf8;
        case 0x2facfcu: goto label_2facfc;
        case 0x2fad00u: goto label_2fad00;
        case 0x2fad04u: goto label_2fad04;
        case 0x2fad08u: goto label_2fad08;
        case 0x2fad0cu: goto label_2fad0c;
        case 0x2fad10u: goto label_2fad10;
        case 0x2fad14u: goto label_2fad14;
        case 0x2fad18u: goto label_2fad18;
        case 0x2fad1cu: goto label_2fad1c;
        case 0x2fad20u: goto label_2fad20;
        case 0x2fad24u: goto label_2fad24;
        case 0x2fad28u: goto label_2fad28;
        case 0x2fad2cu: goto label_2fad2c;
        case 0x2fad30u: goto label_2fad30;
        case 0x2fad34u: goto label_2fad34;
        case 0x2fad38u: goto label_2fad38;
        case 0x2fad3cu: goto label_2fad3c;
        case 0x2fad40u: goto label_2fad40;
        case 0x2fad44u: goto label_2fad44;
        case 0x2fad48u: goto label_2fad48;
        case 0x2fad4cu: goto label_2fad4c;
        case 0x2fad50u: goto label_2fad50;
        case 0x2fad54u: goto label_2fad54;
        case 0x2fad58u: goto label_2fad58;
        case 0x2fad5cu: goto label_2fad5c;
        case 0x2fad60u: goto label_2fad60;
        case 0x2fad64u: goto label_2fad64;
        case 0x2fad68u: goto label_2fad68;
        case 0x2fad6cu: goto label_2fad6c;
        case 0x2fad70u: goto label_2fad70;
        case 0x2fad74u: goto label_2fad74;
        case 0x2fad78u: goto label_2fad78;
        case 0x2fad7cu: goto label_2fad7c;
        case 0x2fad80u: goto label_2fad80;
        case 0x2fad84u: goto label_2fad84;
        case 0x2fad88u: goto label_2fad88;
        case 0x2fad8cu: goto label_2fad8c;
        case 0x2fad90u: goto label_2fad90;
        case 0x2fad94u: goto label_2fad94;
        case 0x2fad98u: goto label_2fad98;
        case 0x2fad9cu: goto label_2fad9c;
        case 0x2fada0u: goto label_2fada0;
        case 0x2fada4u: goto label_2fada4;
        case 0x2fada8u: goto label_2fada8;
        case 0x2fadacu: goto label_2fadac;
        case 0x2fadb0u: goto label_2fadb0;
        case 0x2fadb4u: goto label_2fadb4;
        case 0x2fadb8u: goto label_2fadb8;
        case 0x2fadbcu: goto label_2fadbc;
        case 0x2fadc0u: goto label_2fadc0;
        case 0x2fadc4u: goto label_2fadc4;
        case 0x2fadc8u: goto label_2fadc8;
        case 0x2fadccu: goto label_2fadcc;
        case 0x2fadd0u: goto label_2fadd0;
        case 0x2fadd4u: goto label_2fadd4;
        case 0x2fadd8u: goto label_2fadd8;
        case 0x2faddcu: goto label_2faddc;
        case 0x2fade0u: goto label_2fade0;
        case 0x2fade4u: goto label_2fade4;
        case 0x2fade8u: goto label_2fade8;
        case 0x2fadecu: goto label_2fadec;
        case 0x2fadf0u: goto label_2fadf0;
        case 0x2fadf4u: goto label_2fadf4;
        case 0x2fadf8u: goto label_2fadf8;
        case 0x2fadfcu: goto label_2fadfc;
        case 0x2fae00u: goto label_2fae00;
        case 0x2fae04u: goto label_2fae04;
        case 0x2fae08u: goto label_2fae08;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae10u: goto label_2fae10;
        case 0x2fae14u: goto label_2fae14;
        case 0x2fae18u: goto label_2fae18;
        case 0x2fae1cu: goto label_2fae1c;
        case 0x2fae20u: goto label_2fae20;
        case 0x2fae24u: goto label_2fae24;
        case 0x2fae28u: goto label_2fae28;
        case 0x2fae2cu: goto label_2fae2c;
        case 0x2fae30u: goto label_2fae30;
        case 0x2fae34u: goto label_2fae34;
        case 0x2fae38u: goto label_2fae38;
        case 0x2fae3cu: goto label_2fae3c;
        case 0x2fae40u: goto label_2fae40;
        case 0x2fae44u: goto label_2fae44;
        case 0x2fae48u: goto label_2fae48;
        case 0x2fae4cu: goto label_2fae4c;
        case 0x2fae50u: goto label_2fae50;
        case 0x2fae54u: goto label_2fae54;
        case 0x2fae58u: goto label_2fae58;
        case 0x2fae5cu: goto label_2fae5c;
        case 0x2fae60u: goto label_2fae60;
        case 0x2fae64u: goto label_2fae64;
        case 0x2fae68u: goto label_2fae68;
        case 0x2fae6cu: goto label_2fae6c;
        case 0x2fae70u: goto label_2fae70;
        case 0x2fae74u: goto label_2fae74;
        case 0x2fae78u: goto label_2fae78;
        case 0x2fae7cu: goto label_2fae7c;
        case 0x2fae80u: goto label_2fae80;
        case 0x2fae84u: goto label_2fae84;
        case 0x2fae88u: goto label_2fae88;
        case 0x2fae8cu: goto label_2fae8c;
        case 0x2fae90u: goto label_2fae90;
        case 0x2fae94u: goto label_2fae94;
        case 0x2fae98u: goto label_2fae98;
        case 0x2fae9cu: goto label_2fae9c;
        case 0x2faea0u: goto label_2faea0;
        case 0x2faea4u: goto label_2faea4;
        case 0x2faea8u: goto label_2faea8;
        case 0x2faeacu: goto label_2faeac;
        case 0x2faeb0u: goto label_2faeb0;
        case 0x2faeb4u: goto label_2faeb4;
        case 0x2faeb8u: goto label_2faeb8;
        case 0x2faebcu: goto label_2faebc;
        case 0x2faec0u: goto label_2faec0;
        case 0x2faec4u: goto label_2faec4;
        case 0x2faec8u: goto label_2faec8;
        case 0x2faeccu: goto label_2faecc;
        case 0x2faed0u: goto label_2faed0;
        case 0x2faed4u: goto label_2faed4;
        case 0x2faed8u: goto label_2faed8;
        case 0x2faedcu: goto label_2faedc;
        case 0x2faee0u: goto label_2faee0;
        case 0x2faee4u: goto label_2faee4;
        case 0x2faee8u: goto label_2faee8;
        case 0x2faeecu: goto label_2faeec;
        case 0x2faef0u: goto label_2faef0;
        case 0x2faef4u: goto label_2faef4;
        case 0x2faef8u: goto label_2faef8;
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf00u: goto label_2faf00;
        case 0x2faf04u: goto label_2faf04;
        case 0x2faf08u: goto label_2faf08;
        case 0x2faf0cu: goto label_2faf0c;
        case 0x2faf10u: goto label_2faf10;
        case 0x2faf14u: goto label_2faf14;
        case 0x2faf18u: goto label_2faf18;
        case 0x2faf1cu: goto label_2faf1c;
        case 0x2faf20u: goto label_2faf20;
        case 0x2faf24u: goto label_2faf24;
        case 0x2faf28u: goto label_2faf28;
        case 0x2faf2cu: goto label_2faf2c;
        case 0x2faf30u: goto label_2faf30;
        case 0x2faf34u: goto label_2faf34;
        case 0x2faf38u: goto label_2faf38;
        case 0x2faf3cu: goto label_2faf3c;
        case 0x2faf40u: goto label_2faf40;
        case 0x2faf44u: goto label_2faf44;
        case 0x2faf48u: goto label_2faf48;
        case 0x2faf4cu: goto label_2faf4c;
        case 0x2faf50u: goto label_2faf50;
        case 0x2faf54u: goto label_2faf54;
        case 0x2faf58u: goto label_2faf58;
        case 0x2faf5cu: goto label_2faf5c;
        case 0x2faf60u: goto label_2faf60;
        case 0x2faf64u: goto label_2faf64;
        case 0x2faf68u: goto label_2faf68;
        case 0x2faf6cu: goto label_2faf6c;
        case 0x2faf70u: goto label_2faf70;
        case 0x2faf74u: goto label_2faf74;
        case 0x2faf78u: goto label_2faf78;
        case 0x2faf7cu: goto label_2faf7c;
        case 0x2faf80u: goto label_2faf80;
        case 0x2faf84u: goto label_2faf84;
        case 0x2faf88u: goto label_2faf88;
        case 0x2faf8cu: goto label_2faf8c;
        case 0x2faf90u: goto label_2faf90;
        case 0x2faf94u: goto label_2faf94;
        case 0x2faf98u: goto label_2faf98;
        case 0x2faf9cu: goto label_2faf9c;
        case 0x2fafa0u: goto label_2fafa0;
        case 0x2fafa4u: goto label_2fafa4;
        case 0x2fafa8u: goto label_2fafa8;
        case 0x2fafacu: goto label_2fafac;
        case 0x2fafb0u: goto label_2fafb0;
        case 0x2fafb4u: goto label_2fafb4;
        case 0x2fafb8u: goto label_2fafb8;
        case 0x2fafbcu: goto label_2fafbc;
        case 0x2fafc0u: goto label_2fafc0;
        case 0x2fafc4u: goto label_2fafc4;
        case 0x2fafc8u: goto label_2fafc8;
        case 0x2fafccu: goto label_2fafcc;
        case 0x2fafd0u: goto label_2fafd0;
        case 0x2fafd4u: goto label_2fafd4;
        case 0x2fafd8u: goto label_2fafd8;
        case 0x2fafdcu: goto label_2fafdc;
        case 0x2fafe0u: goto label_2fafe0;
        case 0x2fafe4u: goto label_2fafe4;
        case 0x2fafe8u: goto label_2fafe8;
        case 0x2fafecu: goto label_2fafec;
        case 0x2faff0u: goto label_2faff0;
        case 0x2faff4u: goto label_2faff4;
        case 0x2faff8u: goto label_2faff8;
        case 0x2faffcu: goto label_2faffc;
        case 0x2fb000u: goto label_2fb000;
        case 0x2fb004u: goto label_2fb004;
        case 0x2fb008u: goto label_2fb008;
        case 0x2fb00cu: goto label_2fb00c;
        case 0x2fb010u: goto label_2fb010;
        case 0x2fb014u: goto label_2fb014;
        case 0x2fb018u: goto label_2fb018;
        case 0x2fb01cu: goto label_2fb01c;
        case 0x2fb020u: goto label_2fb020;
        case 0x2fb024u: goto label_2fb024;
        case 0x2fb028u: goto label_2fb028;
        case 0x2fb02cu: goto label_2fb02c;
        case 0x2fb030u: goto label_2fb030;
        case 0x2fb034u: goto label_2fb034;
        case 0x2fb038u: goto label_2fb038;
        case 0x2fb03cu: goto label_2fb03c;
        case 0x2fb040u: goto label_2fb040;
        case 0x2fb044u: goto label_2fb044;
        case 0x2fb048u: goto label_2fb048;
        case 0x2fb04cu: goto label_2fb04c;
        case 0x2fb050u: goto label_2fb050;
        case 0x2fb054u: goto label_2fb054;
        case 0x2fb058u: goto label_2fb058;
        case 0x2fb05cu: goto label_2fb05c;
        case 0x2fb060u: goto label_2fb060;
        case 0x2fb064u: goto label_2fb064;
        case 0x2fb068u: goto label_2fb068;
        case 0x2fb06cu: goto label_2fb06c;
        case 0x2fb070u: goto label_2fb070;
        case 0x2fb074u: goto label_2fb074;
        case 0x2fb078u: goto label_2fb078;
        case 0x2fb07cu: goto label_2fb07c;
        case 0x2fb080u: goto label_2fb080;
        case 0x2fb084u: goto label_2fb084;
        case 0x2fb088u: goto label_2fb088;
        case 0x2fb08cu: goto label_2fb08c;
        case 0x2fb090u: goto label_2fb090;
        case 0x2fb094u: goto label_2fb094;
        case 0x2fb098u: goto label_2fb098;
        case 0x2fb09cu: goto label_2fb09c;
        case 0x2fb0a0u: goto label_2fb0a0;
        case 0x2fb0a4u: goto label_2fb0a4;
        case 0x2fb0a8u: goto label_2fb0a8;
        case 0x2fb0acu: goto label_2fb0ac;
        case 0x2fb0b0u: goto label_2fb0b0;
        case 0x2fb0b4u: goto label_2fb0b4;
        case 0x2fb0b8u: goto label_2fb0b8;
        case 0x2fb0bcu: goto label_2fb0bc;
        case 0x2fb0c0u: goto label_2fb0c0;
        case 0x2fb0c4u: goto label_2fb0c4;
        case 0x2fb0c8u: goto label_2fb0c8;
        case 0x2fb0ccu: goto label_2fb0cc;
        case 0x2fb0d0u: goto label_2fb0d0;
        case 0x2fb0d4u: goto label_2fb0d4;
        case 0x2fb0d8u: goto label_2fb0d8;
        case 0x2fb0dcu: goto label_2fb0dc;
        case 0x2fb0e0u: goto label_2fb0e0;
        case 0x2fb0e4u: goto label_2fb0e4;
        case 0x2fb0e8u: goto label_2fb0e8;
        case 0x2fb0ecu: goto label_2fb0ec;
        case 0x2fb0f0u: goto label_2fb0f0;
        case 0x2fb0f4u: goto label_2fb0f4;
        case 0x2fb0f8u: goto label_2fb0f8;
        case 0x2fb0fcu: goto label_2fb0fc;
        case 0x2fb100u: goto label_2fb100;
        case 0x2fb104u: goto label_2fb104;
        case 0x2fb108u: goto label_2fb108;
        case 0x2fb10cu: goto label_2fb10c;
        case 0x2fb110u: goto label_2fb110;
        case 0x2fb114u: goto label_2fb114;
        case 0x2fb118u: goto label_2fb118;
        case 0x2fb11cu: goto label_2fb11c;
        case 0x2fb120u: goto label_2fb120;
        case 0x2fb124u: goto label_2fb124;
        case 0x2fb128u: goto label_2fb128;
        case 0x2fb12cu: goto label_2fb12c;
        case 0x2fb130u: goto label_2fb130;
        case 0x2fb134u: goto label_2fb134;
        case 0x2fb138u: goto label_2fb138;
        case 0x2fb13cu: goto label_2fb13c;
        case 0x2fb140u: goto label_2fb140;
        case 0x2fb144u: goto label_2fb144;
        case 0x2fb148u: goto label_2fb148;
        case 0x2fb14cu: goto label_2fb14c;
        case 0x2fb150u: goto label_2fb150;
        case 0x2fb154u: goto label_2fb154;
        case 0x2fb158u: goto label_2fb158;
        case 0x2fb15cu: goto label_2fb15c;
        case 0x2fb160u: goto label_2fb160;
        case 0x2fb164u: goto label_2fb164;
        case 0x2fb168u: goto label_2fb168;
        case 0x2fb16cu: goto label_2fb16c;
        case 0x2fb170u: goto label_2fb170;
        case 0x2fb174u: goto label_2fb174;
        case 0x2fb178u: goto label_2fb178;
        case 0x2fb17cu: goto label_2fb17c;
        case 0x2fb180u: goto label_2fb180;
        case 0x2fb184u: goto label_2fb184;
        case 0x2fb188u: goto label_2fb188;
        case 0x2fb18cu: goto label_2fb18c;
        case 0x2fb190u: goto label_2fb190;
        case 0x2fb194u: goto label_2fb194;
        case 0x2fb198u: goto label_2fb198;
        case 0x2fb19cu: goto label_2fb19c;
        case 0x2fb1a0u: goto label_2fb1a0;
        case 0x2fb1a4u: goto label_2fb1a4;
        case 0x2fb1a8u: goto label_2fb1a8;
        case 0x2fb1acu: goto label_2fb1ac;
        case 0x2fb1b0u: goto label_2fb1b0;
        case 0x2fb1b4u: goto label_2fb1b4;
        case 0x2fb1b8u: goto label_2fb1b8;
        case 0x2fb1bcu: goto label_2fb1bc;
        case 0x2fb1c0u: goto label_2fb1c0;
        case 0x2fb1c4u: goto label_2fb1c4;
        case 0x2fb1c8u: goto label_2fb1c8;
        case 0x2fb1ccu: goto label_2fb1cc;
        case 0x2fb1d0u: goto label_2fb1d0;
        case 0x2fb1d4u: goto label_2fb1d4;
        case 0x2fb1d8u: goto label_2fb1d8;
        case 0x2fb1dcu: goto label_2fb1dc;
        case 0x2fb1e0u: goto label_2fb1e0;
        case 0x2fb1e4u: goto label_2fb1e4;
        case 0x2fb1e8u: goto label_2fb1e8;
        case 0x2fb1ecu: goto label_2fb1ec;
        case 0x2fb1f0u: goto label_2fb1f0;
        case 0x2fb1f4u: goto label_2fb1f4;
        case 0x2fb1f8u: goto label_2fb1f8;
        case 0x2fb1fcu: goto label_2fb1fc;
        case 0x2fb200u: goto label_2fb200;
        case 0x2fb204u: goto label_2fb204;
        case 0x2fb208u: goto label_2fb208;
        case 0x2fb20cu: goto label_2fb20c;
        case 0x2fb210u: goto label_2fb210;
        case 0x2fb214u: goto label_2fb214;
        case 0x2fb218u: goto label_2fb218;
        case 0x2fb21cu: goto label_2fb21c;
        case 0x2fb220u: goto label_2fb220;
        case 0x2fb224u: goto label_2fb224;
        case 0x2fb228u: goto label_2fb228;
        case 0x2fb22cu: goto label_2fb22c;
        case 0x2fb230u: goto label_2fb230;
        case 0x2fb234u: goto label_2fb234;
        case 0x2fb238u: goto label_2fb238;
        case 0x2fb23cu: goto label_2fb23c;
        case 0x2fb240u: goto label_2fb240;
        case 0x2fb244u: goto label_2fb244;
        case 0x2fb248u: goto label_2fb248;
        case 0x2fb24cu: goto label_2fb24c;
        case 0x2fb250u: goto label_2fb250;
        case 0x2fb254u: goto label_2fb254;
        case 0x2fb258u: goto label_2fb258;
        case 0x2fb25cu: goto label_2fb25c;
        case 0x2fb260u: goto label_2fb260;
        case 0x2fb264u: goto label_2fb264;
        case 0x2fb268u: goto label_2fb268;
        case 0x2fb26cu: goto label_2fb26c;
        case 0x2fb270u: goto label_2fb270;
        case 0x2fb274u: goto label_2fb274;
        case 0x2fb278u: goto label_2fb278;
        case 0x2fb27cu: goto label_2fb27c;
        case 0x2fb280u: goto label_2fb280;
        case 0x2fb284u: goto label_2fb284;
        case 0x2fb288u: goto label_2fb288;
        case 0x2fb28cu: goto label_2fb28c;
        case 0x2fb290u: goto label_2fb290;
        case 0x2fb294u: goto label_2fb294;
        case 0x2fb298u: goto label_2fb298;
        case 0x2fb29cu: goto label_2fb29c;
        case 0x2fb2a0u: goto label_2fb2a0;
        case 0x2fb2a4u: goto label_2fb2a4;
        case 0x2fb2a8u: goto label_2fb2a8;
        case 0x2fb2acu: goto label_2fb2ac;
        case 0x2fb2b0u: goto label_2fb2b0;
        case 0x2fb2b4u: goto label_2fb2b4;
        case 0x2fb2b8u: goto label_2fb2b8;
        case 0x2fb2bcu: goto label_2fb2bc;
        case 0x2fb2c0u: goto label_2fb2c0;
        case 0x2fb2c4u: goto label_2fb2c4;
        case 0x2fb2c8u: goto label_2fb2c8;
        case 0x2fb2ccu: goto label_2fb2cc;
        case 0x2fb2d0u: goto label_2fb2d0;
        case 0x2fb2d4u: goto label_2fb2d4;
        case 0x2fb2d8u: goto label_2fb2d8;
        case 0x2fb2dcu: goto label_2fb2dc;
        case 0x2fb2e0u: goto label_2fb2e0;
        case 0x2fb2e4u: goto label_2fb2e4;
        case 0x2fb2e8u: goto label_2fb2e8;
        case 0x2fb2ecu: goto label_2fb2ec;
        case 0x2fb2f0u: goto label_2fb2f0;
        case 0x2fb2f4u: goto label_2fb2f4;
        case 0x2fb2f8u: goto label_2fb2f8;
        case 0x2fb2fcu: goto label_2fb2fc;
        case 0x2fb300u: goto label_2fb300;
        case 0x2fb304u: goto label_2fb304;
        case 0x2fb308u: goto label_2fb308;
        case 0x2fb30cu: goto label_2fb30c;
        case 0x2fb310u: goto label_2fb310;
        case 0x2fb314u: goto label_2fb314;
        case 0x2fb318u: goto label_2fb318;
        case 0x2fb31cu: goto label_2fb31c;
        case 0x2fb320u: goto label_2fb320;
        case 0x2fb324u: goto label_2fb324;
        case 0x2fb328u: goto label_2fb328;
        case 0x2fb32cu: goto label_2fb32c;
        case 0x2fb330u: goto label_2fb330;
        case 0x2fb334u: goto label_2fb334;
        case 0x2fb338u: goto label_2fb338;
        case 0x2fb33cu: goto label_2fb33c;
        case 0x2fb340u: goto label_2fb340;
        case 0x2fb344u: goto label_2fb344;
        case 0x2fb348u: goto label_2fb348;
        case 0x2fb34cu: goto label_2fb34c;
        case 0x2fb350u: goto label_2fb350;
        case 0x2fb354u: goto label_2fb354;
        case 0x2fb358u: goto label_2fb358;
        case 0x2fb35cu: goto label_2fb35c;
        case 0x2fb360u: goto label_2fb360;
        case 0x2fb364u: goto label_2fb364;
        case 0x2fb368u: goto label_2fb368;
        case 0x2fb36cu: goto label_2fb36c;
        case 0x2fb370u: goto label_2fb370;
        case 0x2fb374u: goto label_2fb374;
        case 0x2fb378u: goto label_2fb378;
        case 0x2fb37cu: goto label_2fb37c;
        case 0x2fb380u: goto label_2fb380;
        case 0x2fb384u: goto label_2fb384;
        case 0x2fb388u: goto label_2fb388;
        case 0x2fb38cu: goto label_2fb38c;
        case 0x2fb390u: goto label_2fb390;
        case 0x2fb394u: goto label_2fb394;
        case 0x2fb398u: goto label_2fb398;
        case 0x2fb39cu: goto label_2fb39c;
        case 0x2fb3a0u: goto label_2fb3a0;
        case 0x2fb3a4u: goto label_2fb3a4;
        case 0x2fb3a8u: goto label_2fb3a8;
        case 0x2fb3acu: goto label_2fb3ac;
        case 0x2fb3b0u: goto label_2fb3b0;
        case 0x2fb3b4u: goto label_2fb3b4;
        case 0x2fb3b8u: goto label_2fb3b8;
        case 0x2fb3bcu: goto label_2fb3bc;
        case 0x2fb3c0u: goto label_2fb3c0;
        case 0x2fb3c4u: goto label_2fb3c4;
        case 0x2fb3c8u: goto label_2fb3c8;
        case 0x2fb3ccu: goto label_2fb3cc;
        case 0x2fb3d0u: goto label_2fb3d0;
        case 0x2fb3d4u: goto label_2fb3d4;
        case 0x2fb3d8u: goto label_2fb3d8;
        case 0x2fb3dcu: goto label_2fb3dc;
        case 0x2fb3e0u: goto label_2fb3e0;
        case 0x2fb3e4u: goto label_2fb3e4;
        case 0x2fb3e8u: goto label_2fb3e8;
        case 0x2fb3ecu: goto label_2fb3ec;
        case 0x2fb3f0u: goto label_2fb3f0;
        case 0x2fb3f4u: goto label_2fb3f4;
        case 0x2fb3f8u: goto label_2fb3f8;
        case 0x2fb3fcu: goto label_2fb3fc;
        case 0x2fb400u: goto label_2fb400;
        case 0x2fb404u: goto label_2fb404;
        case 0x2fb408u: goto label_2fb408;
        case 0x2fb40cu: goto label_2fb40c;
        case 0x2fb410u: goto label_2fb410;
        case 0x2fb414u: goto label_2fb414;
        case 0x2fb418u: goto label_2fb418;
        case 0x2fb41cu: goto label_2fb41c;
        case 0x2fb420u: goto label_2fb420;
        case 0x2fb424u: goto label_2fb424;
        case 0x2fb428u: goto label_2fb428;
        case 0x2fb42cu: goto label_2fb42c;
        case 0x2fb430u: goto label_2fb430;
        case 0x2fb434u: goto label_2fb434;
        case 0x2fb438u: goto label_2fb438;
        case 0x2fb43cu: goto label_2fb43c;
        case 0x2fb440u: goto label_2fb440;
        case 0x2fb444u: goto label_2fb444;
        case 0x2fb448u: goto label_2fb448;
        case 0x2fb44cu: goto label_2fb44c;
        case 0x2fb450u: goto label_2fb450;
        case 0x2fb454u: goto label_2fb454;
        case 0x2fb458u: goto label_2fb458;
        case 0x2fb45cu: goto label_2fb45c;
        case 0x2fb460u: goto label_2fb460;
        case 0x2fb464u: goto label_2fb464;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb46cu: goto label_2fb46c;
        case 0x2fb470u: goto label_2fb470;
        case 0x2fb474u: goto label_2fb474;
        case 0x2fb478u: goto label_2fb478;
        case 0x2fb47cu: goto label_2fb47c;
        case 0x2fb480u: goto label_2fb480;
        case 0x2fb484u: goto label_2fb484;
        case 0x2fb488u: goto label_2fb488;
        case 0x2fb48cu: goto label_2fb48c;
        case 0x2fb490u: goto label_2fb490;
        case 0x2fb494u: goto label_2fb494;
        case 0x2fb498u: goto label_2fb498;
        case 0x2fb49cu: goto label_2fb49c;
        case 0x2fb4a0u: goto label_2fb4a0;
        case 0x2fb4a4u: goto label_2fb4a4;
        case 0x2fb4a8u: goto label_2fb4a8;
        case 0x2fb4acu: goto label_2fb4ac;
        case 0x2fb4b0u: goto label_2fb4b0;
        case 0x2fb4b4u: goto label_2fb4b4;
        case 0x2fb4b8u: goto label_2fb4b8;
        case 0x2fb4bcu: goto label_2fb4bc;
        case 0x2fb4c0u: goto label_2fb4c0;
        case 0x2fb4c4u: goto label_2fb4c4;
        case 0x2fb4c8u: goto label_2fb4c8;
        case 0x2fb4ccu: goto label_2fb4cc;
        case 0x2fb4d0u: goto label_2fb4d0;
        case 0x2fb4d4u: goto label_2fb4d4;
        case 0x2fb4d8u: goto label_2fb4d8;
        case 0x2fb4dcu: goto label_2fb4dc;
        case 0x2fb4e0u: goto label_2fb4e0;
        case 0x2fb4e4u: goto label_2fb4e4;
        case 0x2fb4e8u: goto label_2fb4e8;
        case 0x2fb4ecu: goto label_2fb4ec;
        case 0x2fb4f0u: goto label_2fb4f0;
        case 0x2fb4f4u: goto label_2fb4f4;
        case 0x2fb4f8u: goto label_2fb4f8;
        case 0x2fb4fcu: goto label_2fb4fc;
        case 0x2fb500u: goto label_2fb500;
        case 0x2fb504u: goto label_2fb504;
        case 0x2fb508u: goto label_2fb508;
        case 0x2fb50cu: goto label_2fb50c;
        case 0x2fb510u: goto label_2fb510;
        case 0x2fb514u: goto label_2fb514;
        case 0x2fb518u: goto label_2fb518;
        case 0x2fb51cu: goto label_2fb51c;
        case 0x2fb520u: goto label_2fb520;
        case 0x2fb524u: goto label_2fb524;
        case 0x2fb528u: goto label_2fb528;
        case 0x2fb52cu: goto label_2fb52c;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb534u: goto label_2fb534;
        case 0x2fb538u: goto label_2fb538;
        case 0x2fb53cu: goto label_2fb53c;
        case 0x2fb540u: goto label_2fb540;
        case 0x2fb544u: goto label_2fb544;
        case 0x2fb548u: goto label_2fb548;
        case 0x2fb54cu: goto label_2fb54c;
        case 0x2fb550u: goto label_2fb550;
        case 0x2fb554u: goto label_2fb554;
        case 0x2fb558u: goto label_2fb558;
        case 0x2fb55cu: goto label_2fb55c;
        case 0x2fb560u: goto label_2fb560;
        case 0x2fb564u: goto label_2fb564;
        case 0x2fb568u: goto label_2fb568;
        case 0x2fb56cu: goto label_2fb56c;
        case 0x2fb570u: goto label_2fb570;
        case 0x2fb574u: goto label_2fb574;
        case 0x2fb578u: goto label_2fb578;
        case 0x2fb57cu: goto label_2fb57c;
        case 0x2fb580u: goto label_2fb580;
        case 0x2fb584u: goto label_2fb584;
        case 0x2fb588u: goto label_2fb588;
        case 0x2fb58cu: goto label_2fb58c;
        case 0x2fb590u: goto label_2fb590;
        case 0x2fb594u: goto label_2fb594;
        case 0x2fb598u: goto label_2fb598;
        case 0x2fb59cu: goto label_2fb59c;
        case 0x2fb5a0u: goto label_2fb5a0;
        case 0x2fb5a4u: goto label_2fb5a4;
        case 0x2fb5a8u: goto label_2fb5a8;
        case 0x2fb5acu: goto label_2fb5ac;
        case 0x2fb5b0u: goto label_2fb5b0;
        case 0x2fb5b4u: goto label_2fb5b4;
        case 0x2fb5b8u: goto label_2fb5b8;
        case 0x2fb5bcu: goto label_2fb5bc;
        case 0x2fb5c0u: goto label_2fb5c0;
        case 0x2fb5c4u: goto label_2fb5c4;
        case 0x2fb5c8u: goto label_2fb5c8;
        case 0x2fb5ccu: goto label_2fb5cc;
        case 0x2fb5d0u: goto label_2fb5d0;
        case 0x2fb5d4u: goto label_2fb5d4;
        case 0x2fb5d8u: goto label_2fb5d8;
        case 0x2fb5dcu: goto label_2fb5dc;
        case 0x2fb5e0u: goto label_2fb5e0;
        case 0x2fb5e4u: goto label_2fb5e4;
        case 0x2fb5e8u: goto label_2fb5e8;
        case 0x2fb5ecu: goto label_2fb5ec;
        case 0x2fb5f0u: goto label_2fb5f0;
        case 0x2fb5f4u: goto label_2fb5f4;
        case 0x2fb5f8u: goto label_2fb5f8;
        case 0x2fb5fcu: goto label_2fb5fc;
        default: break;
    }

    ctx->pc = 0x2fab40u;

label_2fab40:
    // 0x2fab40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2fab44:
    // 0x2fab44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2fab48:
    // 0x2fab48: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2fab48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_2fab4c:
    // 0x2fab4c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2fab50:
    // 0x2fab50: 0x8e420668  lw          $v0, 0x668($s2)
    ctx->pc = 0x2fab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
label_2fab54:
    // 0x2fab54: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2fab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2fab58:
    // 0x2fab58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2fab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2fab5c:
    // 0x2fab5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2fab5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2fab60:
    // 0x2fab60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2fab64:
    // 0x2fab64: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fab68:
    if (ctx->pc == 0x2FAB68u) {
        ctx->pc = 0x2FAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB64u;
        // 0x2fab68: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB6Cu;
        goto label_2fab6c;
    }
    ctx->pc = 0x2FAB64u;
    {
        const bool branch_taken_0x2fab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB64u;
        // 0x2fab68: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab64) {
            ctx->pc = 0x2FABE8u;
            goto label_2fabe8;
        }
    }
    ctx->pc = 0x2FAB6Cu;
label_2fab6c:
    // 0x2fab6c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2fab6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_2fab70:
    // 0x2fab70: 0x8e220684  lw          $v0, 0x684($s1)
    ctx->pc = 0x2fab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_2fab74:
    // 0x2fab74: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_2fab78:
    if (ctx->pc == 0x2FAB78u) {
        ctx->pc = 0x2FAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB74u;
        // 0x2fab78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB7Cu;
        goto label_2fab7c;
    }
    ctx->pc = 0x2FAB74u;
    {
        const bool branch_taken_0x2fab74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB74u;
        // 0x2fab78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab74) {
            ctx->pc = 0x2FABC8u;
            goto label_2fabc8;
        }
    }
    ctx->pc = 0x2FAB7Cu;
label_2fab7c:
    // 0x2fab7c: 0x3c1301cb  lui         $s3, 0x1CB
    ctx->pc = 0x2fab7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)459 << 16));
label_2fab80:
    // 0x2fab80: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2fab80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_2fab84:
    // 0x2fab84: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2fab84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_2fab88:
    // 0x2fab88: 0x8e430668  lw          $v1, 0x668($s2)
    ctx->pc = 0x2fab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
label_2fab8c:
    // 0x2fab8c: 0x0  nop
    ctx->pc = 0x2fab8cu;
    // NOP
label_2fab90:
    // 0x2fab90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2fab90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2fab94:
    // 0x2fab94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fab98:
    // 0x2fab98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fab9c:
    // 0x2fab9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2faba0:
    if (ctx->pc == 0x2FABA0u) {
        ctx->pc = 0x2FABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB9Cu;
        // 0x2faba0: 0x8e220684  lw          $v0, 0x684($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABA4u;
        goto label_2faba4;
    }
    ctx->pc = 0x2FAB9Cu;
    {
        const bool branch_taken_0x2fab9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB9Cu;
        // 0x2faba0: 0x8e220684  lw          $v0, 0x684($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab9c) {
            ctx->pc = 0x2FABB0u;
            goto label_2fabb0;
        }
    }
    ctx->pc = 0x2FABA4u;
label_2faba4:
    // 0x2faba4: 0xc0b1608  jal         func_2C5820
label_2faba8:
    if (ctx->pc == 0x2FABA8u) {
        ctx->pc = 0x2FABACu;
        goto label_2fabac;
    }
    ctx->pc = 0x2FABA4u;
    SET_GPR_U32(ctx, 31, 0x2FABACu);
    ctx->pc = 0x2C5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5820u, 0x2FABA4u, 0x2FABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABACu;
label_2fabac:
    // 0x2fabac: 0x8e220684  lw          $v0, 0x684($s1)
    ctx->pc = 0x2fabacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_2fabb0:
    // 0x2fabb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fabb4:
    // 0x2fabb4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2fabb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fabb8:
    // 0x2fabb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2fabbc:
    if (ctx->pc == 0x2FABBCu) {
        ctx->pc = 0x2FABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABB8u;
        // 0x2fabbc: 0x8e430668  lw          $v1, 0x668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABC0u;
        goto label_2fabc0;
    }
    ctx->pc = 0x2FABB8u;
    {
        const bool branch_taken_0x2fabb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABB8u;
        // 0x2fabbc: 0x8e430668  lw          $v1, 0x668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabb8) {
            ctx->pc = 0x2FAB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fab90;
        }
    }
    ctx->pc = 0x2FABC0u;
label_2fabc0:
    // 0x2fabc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2fabc4:
    if (ctx->pc == 0x2FABC4u) {
        ctx->pc = 0x2FABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABC0u;
        // 0x2fabc4: 0x8e6206d8  lw          $v0, 0x6D8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABC8u;
        goto label_2fabc8;
    }
    ctx->pc = 0x2FABC0u;
    {
        const bool branch_taken_0x2fabc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABC0u;
        // 0x2fabc4: 0x8e6206d8  lw          $v0, 0x6D8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabc0) {
            ctx->pc = 0x2FABD8u;
            goto label_2fabd8;
        }
    }
    ctx->pc = 0x2FABC8u;
label_2fabc8:
    // 0x2fabc8: 0x3c1301cb  lui         $s3, 0x1CB
    ctx->pc = 0x2fabc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)459 << 16));
label_2fabcc:
    // 0x2fabcc: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2fabccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_2fabd0:
    // 0x2fabd0: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2fabd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_2fabd4:
    // 0x2fabd4: 0x8e6206d8  lw          $v0, 0x6D8($s3)
    ctx->pc = 0x2fabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1752)));
label_2fabd8:
    // 0x2fabd8: 0x40f809  jalr        $v0
label_2fabdc:
    if (ctx->pc == 0x2FABDCu) {
        ctx->pc = 0x2FABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABD8u;
        // 0x2fabdc: 0x8e440668  lw          $a0, 0x668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABE0u;
        goto label_2fabe0;
    }
    ctx->pc = 0x2FABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FABE0u);
        ctx->pc = 0x2FABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABD8u;
        // 0x2fabdc: 0x8e440668  lw          $a0, 0x668($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FABD8u, 0x2FABE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FABE0u;
label_2fabe0:
    // 0x2fabe0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fabe4:
    if (ctx->pc == 0x2FABE4u) {
        ctx->pc = 0x2FABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABE0u;
        // 0x2fabe4: 0xae400668  sw          $zero, 0x668($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABE8u;
        goto label_2fabe8;
    }
    ctx->pc = 0x2FABE0u;
    {
        const bool branch_taken_0x2fabe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABE0u;
        // 0x2fabe4: 0xae400668  sw          $zero, 0x668($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabe0) {
            ctx->pc = 0x2FABF0u;
            goto label_2fabf0;
        }
    }
    ctx->pc = 0x2FABE8u;
label_2fabe8:
    // 0x2fabe8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2fabe8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_2fabec:
    // 0x2fabec: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2fabecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_2fabf0:
    // 0x2fabf0: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x2fabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
label_2fabf4:
    // 0x2fabf4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2fabf8:
    if (ctx->pc == 0x2FABF8u) {
        ctx->pc = 0x2FABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABF4u;
        // 0x2fabf8: 0x8ea40694  lw          $a0, 0x694($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1684)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABFCu;
        goto label_2fabfc;
    }
    ctx->pc = 0x2FABF4u;
    {
        const bool branch_taken_0x2fabf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fabf4) {
            ctx->pc = 0x2FABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FABF4u;
            // 0x2fabf8: 0x8ea40694  lw          $a0, 0x694($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAC0Cu;
            goto label_2fac0c;
        }
    }
    ctx->pc = 0x2FABFCu;
label_2fabfc:
    // 0x2fabfc: 0xc0b1608  jal         func_2C5820
label_2fac00:
    if (ctx->pc == 0x2FAC00u) {
        ctx->pc = 0x2FAC04u;
        goto label_2fac04;
    }
    ctx->pc = 0x2FABFCu;
    SET_GPR_U32(ctx, 31, 0x2FAC04u);
    ctx->pc = 0x2C5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5820u, 0x2FABFCu, 0x2FAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC04u;
label_2fac04:
    // 0x2fac04: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x2fac04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
label_2fac08:
    // 0x2fac08: 0x8ea40694  lw          $a0, 0x694($s5)
    ctx->pc = 0x2fac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1684)));
label_2fac0c:
    // 0x2fac0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2fac10:
    if (ctx->pc == 0x2FAC10u) {
        ctx->pc = 0x2FAC14u;
        goto label_2fac14;
    }
    ctx->pc = 0x2FAC0Cu;
    {
        const bool branch_taken_0x2fac0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac0c) {
            ctx->pc = 0x2FAC20u;
            goto label_2fac20;
        }
    }
    ctx->pc = 0x2FAC14u;
label_2fac14:
    // 0x2fac14: 0xc0a734a  jal         func_29CD28
label_2fac18:
    if (ctx->pc == 0x2FAC18u) {
        ctx->pc = 0x2FAC1Cu;
        goto label_2fac1c;
    }
    ctx->pc = 0x2FAC14u;
    SET_GPR_U32(ctx, 31, 0x2FAC1Cu);
    ctx->pc = 0x29CD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD28u, 0x2FAC14u, 0x2FAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC1Cu;
label_2fac1c:
    // 0x2fac1c: 0xaea00694  sw          $zero, 0x694($s5)
    ctx->pc = 0x2fac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1684), GPR_U32(ctx, 0));
label_2fac20:
    // 0x2fac20: 0xc0abe1a  jal         func_2AF868
label_2fac24:
    if (ctx->pc == 0x2FAC24u) {
        ctx->pc = 0x2FAC28u;
        goto label_2fac28;
    }
    ctx->pc = 0x2FAC20u;
    SET_GPR_U32(ctx, 31, 0x2FAC28u);
    ctx->pc = 0x2AF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF868u, 0x2FAC20u, 0x2FAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC28u;
label_2fac28:
    // 0x2fac28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fac28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2fac2c:
    // 0x2fac2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fac2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac30:
    // 0x2fac30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2fac30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fac34:
    // 0x2fac34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2fac34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fac38:
    // 0x2fac38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2fac38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fac3c:
    // 0x2fac3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fac3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fac40:
    // 0x2fac40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fac40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fac44:
    // 0x2fac44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fac44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fac48:
    // 0x2fac48: 0x3e00008  jr          $ra
label_2fac4c:
    if (ctx->pc == 0x2FAC4Cu) {
        ctx->pc = 0x2FAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC48u;
        // 0x2fac4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC50u;
        goto label_2fac50;
    }
    ctx->pc = 0x2FAC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC48u;
        // 0x2fac4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAC50u;
label_2fac50:
    // 0x2fac50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fac54:
    // 0x2fac54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fac58:
    // 0x2fac58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fac58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fac5c:
    // 0x2fac5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fac60:
    // 0x2fac60: 0xc0ac54e  jal         func_2B1538
label_2fac64:
    if (ctx->pc == 0x2FAC64u) {
        ctx->pc = 0x2FAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC60u;
        // 0x2fac64: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC68u;
        goto label_2fac68;
    }
    ctx->pc = 0x2FAC60u;
    SET_GPR_U32(ctx, 31, 0x2FAC68u);
    ctx->pc = 0x2FAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC60u;
    // 0x2fac64: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1538u, 0x2FAC60u, 0x2FAC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC68u;
label_2fac68:
    // 0x2fac68: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2fac68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2fac6c:
    // 0x2fac6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fac70:
    // 0x2fac70: 0xc04a78a  jal         func_129E28
label_2fac74:
    if (ctx->pc == 0x2FAC74u) {
        ctx->pc = 0x2FAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC70u;
        // 0x2fac74: 0x24a529f0  addiu       $a1, $a1, 0x29F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC78u;
        goto label_2fac78;
    }
    ctx->pc = 0x2FAC70u;
    SET_GPR_U32(ctx, 31, 0x2FAC78u);
    ctx->pc = 0x2FAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC70u;
    // 0x2fac74: 0x24a529f0  addiu       $a1, $a1, 0x29F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2FAC70u, 0x2FAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC78u;
label_2fac78:
    // 0x2fac78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fac7c:
    if (ctx->pc == 0x2FAC7Cu) {
        ctx->pc = 0x2FAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC78u;
        // 0x2fac7c: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC80u;
        goto label_2fac80;
    }
    ctx->pc = 0x2FAC78u;
    {
        const bool branch_taken_0x2fac78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC78u;
        // 0x2fac7c: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac78) {
            ctx->pc = 0x2FAC88u;
            goto label_2fac88;
        }
    }
    ctx->pc = 0x2FAC80u;
label_2fac80:
    // 0x2fac80: 0x10000016  b           . + 4 + (0x16 << 2)
label_2fac84:
    if (ctx->pc == 0x2FAC84u) {
        ctx->pc = 0x2FAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC80u;
        // 0x2fac84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC88u;
        goto label_2fac88;
    }
    ctx->pc = 0x2FAC80u;
    {
        const bool branch_taken_0x2fac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC80u;
        // 0x2fac84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac80) {
            ctx->pc = 0x2FACDCu;
            goto label_2facdc;
        }
    }
    ctx->pc = 0x2FAC88u;
label_2fac88:
    // 0x2fac88: 0xc0ac54e  jal         func_2B1538
label_2fac8c:
    if (ctx->pc == 0x2FAC8Cu) {
        ctx->pc = 0x2FAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC88u;
        // 0x2fac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC90u;
        goto label_2fac90;
    }
    ctx->pc = 0x2FAC88u;
    SET_GPR_U32(ctx, 31, 0x2FAC90u);
    ctx->pc = 0x2FAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC88u;
    // 0x2fac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1538u, 0x2FAC88u, 0x2FAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC90u;
label_2fac90:
    // 0x2fac90: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2fac90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2fac94:
    // 0x2fac94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fac94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fac98:
    // 0x2fac98: 0xc04a78a  jal         func_129E28
label_2fac9c:
    if (ctx->pc == 0x2FAC9Cu) {
        ctx->pc = 0x2FAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC98u;
        // 0x2fac9c: 0x24a529f8  addiu       $a1, $a1, 0x29F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACA0u;
        goto label_2faca0;
    }
    ctx->pc = 0x2FAC98u;
    SET_GPR_U32(ctx, 31, 0x2FACA0u);
    ctx->pc = 0x2FAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC98u;
    // 0x2fac9c: 0x24a529f8  addiu       $a1, $a1, 0x29F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2FAC98u, 0x2FACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACA0u;
label_2faca0:
    // 0x2faca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2faca4:
    if (ctx->pc == 0x2FACA4u) {
        ctx->pc = 0x2FACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA0u;
        // 0x2faca4: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACA8u;
        goto label_2faca8;
    }
    ctx->pc = 0x2FACA0u;
    {
        const bool branch_taken_0x2faca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA0u;
        // 0x2faca4: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faca0) {
            ctx->pc = 0x2FACB0u;
            goto label_2facb0;
        }
    }
    ctx->pc = 0x2FACA8u;
label_2faca8:
    // 0x2faca8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2facac:
    if (ctx->pc == 0x2FACACu) {
        ctx->pc = 0x2FACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA8u;
        // 0x2facac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACB0u;
        goto label_2facb0;
    }
    ctx->pc = 0x2FACA8u;
    {
        const bool branch_taken_0x2faca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA8u;
        // 0x2facac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faca8) {
            ctx->pc = 0x2FACDCu;
            goto label_2facdc;
        }
    }
    ctx->pc = 0x2FACB0u;
label_2facb0:
    // 0x2facb0: 0xc0ac54e  jal         func_2B1538
label_2facb4:
    if (ctx->pc == 0x2FACB4u) {
        ctx->pc = 0x2FACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACB0u;
        // 0x2facb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACB8u;
        goto label_2facb8;
    }
    ctx->pc = 0x2FACB0u;
    SET_GPR_U32(ctx, 31, 0x2FACB8u);
    ctx->pc = 0x2FACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACB0u;
    // 0x2facb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1538u, 0x2FACB0u, 0x2FACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACB8u;
label_2facb8:
    // 0x2facb8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2facb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2facbc:
    // 0x2facbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2facbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2facc0:
    // 0x2facc0: 0xc04a78a  jal         func_129E28
label_2facc4:
    if (ctx->pc == 0x2FACC4u) {
        ctx->pc = 0x2FACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACC0u;
        // 0x2facc4: 0x24a52a00  addiu       $a1, $a1, 0x2A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACC8u;
        goto label_2facc8;
    }
    ctx->pc = 0x2FACC0u;
    SET_GPR_U32(ctx, 31, 0x2FACC8u);
    ctx->pc = 0x2FACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACC0u;
    // 0x2facc4: 0x24a52a00  addiu       $a1, $a1, 0x2A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2FACC0u, 0x2FACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACC8u;
label_2facc8:
    // 0x2facc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2faccc:
    if (ctx->pc == 0x2FACCCu) {
        ctx->pc = 0x2FACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACC8u;
        // 0x2faccc: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACD0u;
        goto label_2facd0;
    }
    ctx->pc = 0x2FACC8u;
    {
        const bool branch_taken_0x2facc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACC8u;
        // 0x2faccc: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facc8) {
            ctx->pc = 0x2FACD8u;
            goto label_2facd8;
        }
    }
    ctx->pc = 0x2FACD0u;
label_2facd0:
    // 0x2facd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2facd4:
    if (ctx->pc == 0x2FACD4u) {
        ctx->pc = 0x2FACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACD0u;
        // 0x2facd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACD8u;
        goto label_2facd8;
    }
    ctx->pc = 0x2FACD0u;
    {
        const bool branch_taken_0x2facd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACD0u;
        // 0x2facd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facd0) {
            ctx->pc = 0x2FACDCu;
            goto label_2facdc;
        }
    }
    ctx->pc = 0x2FACD8u;
label_2facd8:
    // 0x2facd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2facd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2facdc:
    // 0x2facdc: 0xac6206dc  sw          $v0, 0x6DC($v1)
    ctx->pc = 0x2facdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1756), GPR_U32(ctx, 2));
label_2face0:
    // 0x2face0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2face0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_2face4:
    // 0x2face4: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x2face4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_2face8:
    // 0x2face8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_2facec:
    if (ctx->pc == 0x2FACECu) {
        ctx->pc = 0x2FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACE8u;
        // 0x2facec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACF0u;
        goto label_2facf0;
    }
    ctx->pc = 0x2FACE8u;
    {
        const bool branch_taken_0x2face8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACE8u;
        // 0x2facec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2face8) {
            ctx->pc = 0x2FAD20u;
            goto label_2fad20;
        }
    }
    ctx->pc = 0x2FACF0u;
label_2facf0:
    // 0x2facf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2facf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2facf4:
    // 0x2facf4: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x2facf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_2facf8:
    // 0x2facf8: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_2facfc:
    if (ctx->pc == 0x2FACFCu) {
        ctx->pc = 0x2FAD00u;
        goto label_2fad00;
    }
    ctx->pc = 0x2FACF8u;
    {
        const bool branch_taken_0x2facf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2facf8) {
            ctx->pc = 0x2FAD20u;
            goto label_2fad20;
        }
    }
    ctx->pc = 0x2FAD00u;
label_2fad00:
    // 0x2fad00: 0xc0bf044  jal         func_2FC110
label_2fad04:
    if (ctx->pc == 0x2FAD04u) {
        ctx->pc = 0x2FAD08u;
        goto label_2fad08;
    }
    ctx->pc = 0x2FAD00u;
    SET_GPR_U32(ctx, 31, 0x2FAD08u);
    ctx->pc = 0x2FC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC110u, 0x2FAD00u, 0x2FAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD08u;
label_2fad08:
    // 0x2fad08: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fad08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
label_2fad0c:
    // 0x2fad0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fad10:
    // 0x2fad10: 0x248408e8  addiu       $a0, $a0, 0x8E8
    ctx->pc = 0x2fad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
label_2fad14:
    // 0x2fad14: 0xc049cb6  jal         func_1272D8
label_2fad18:
    if (ctx->pc == 0x2FAD18u) {
        ctx->pc = 0x2FAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD14u;
        // 0x2fad18: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD1Cu;
        goto label_2fad1c;
    }
    ctx->pc = 0x2FAD14u;
    SET_GPR_U32(ctx, 31, 0x2FAD1Cu);
    ctx->pc = 0x2FAD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD14u;
    // 0x2fad18: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FAD14u, 0x2FAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD1Cu;
label_2fad1c:
    // 0x2fad1c: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x2fad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
label_2fad20:
    // 0x2fad20: 0xc0ac604  jal         func_2B1810
label_2fad24:
    if (ctx->pc == 0x2FAD24u) {
        ctx->pc = 0x2FAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD20u;
        // 0x2fad24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD28u;
        goto label_2fad28;
    }
    ctx->pc = 0x2FAD20u;
    SET_GPR_U32(ctx, 31, 0x2FAD28u);
    ctx->pc = 0x2FAD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD20u;
    // 0x2fad24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2FAD20u, 0x2FAD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD28u;
label_2fad28:
    // 0x2fad28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fad28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fad2c:
    // 0x2fad2c: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
label_2fad30:
    // 0x2fad30: 0x8c8208e0  lw          $v0, 0x8E0($a0)
    ctx->pc = 0x2fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2272)));
label_2fad34:
    // 0x2fad34: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2fad38:
    if (ctx->pc == 0x2FAD38u) {
        ctx->pc = 0x2FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD34u;
        // 0x2fad38: 0x28621132  slti        $v0, $v1, 0x1132 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4402) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD3Cu;
        goto label_2fad3c;
    }
    ctx->pc = 0x2FAD34u;
    {
        const bool branch_taken_0x2fad34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD34u;
        // 0x2fad38: 0x28621132  slti        $v0, $v1, 0x1132 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4402) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad34) {
            ctx->pc = 0x2FAD64u;
            goto label_2fad64;
        }
    }
    ctx->pc = 0x2FAD3Cu;
label_2fad3c:
    // 0x2fad3c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fad3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_2fad40:
    // 0x2fad40: 0x8e02066c  lw          $v0, 0x66C($s0)
    ctx->pc = 0x2fad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
label_2fad44:
    // 0x2fad44: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_2fad48:
    if (ctx->pc == 0x2FAD48u) {
        ctx->pc = 0x2FAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD44u;
        // 0x2fad48: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD4Cu;
        goto label_2fad4c;
    }
    ctx->pc = 0x2FAD44u;
    {
        const bool branch_taken_0x2fad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD44u;
        // 0x2fad48: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad44) {
            ctx->pc = 0x2FB0E8u;
            goto label_2fb0e8;
        }
    }
    ctx->pc = 0x2FAD4Cu;
label_2fad4c:
    // 0x2fad4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fad4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fad50:
    // 0x2fad50: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x2fad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
label_2fad54:
    // 0x2fad54: 0xc049cb6  jal         func_1272D8
label_2fad58:
    if (ctx->pc == 0x2FAD58u) {
        ctx->pc = 0x2FAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD54u;
        // 0x2fad58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD5Cu;
        goto label_2fad5c;
    }
    ctx->pc = 0x2FAD54u;
    SET_GPR_U32(ctx, 31, 0x2FAD5Cu);
    ctx->pc = 0x2FAD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD54u;
    // 0x2fad58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FAD54u, 0x2FAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD5Cu;
label_2fad5c:
    // 0x2fad5c: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_2fad60:
    if (ctx->pc == 0x2FAD60u) {
        ctx->pc = 0x2FAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD5Cu;
        // 0x2fad60: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD64u;
        goto label_2fad64;
    }
    ctx->pc = 0x2FAD5Cu;
    {
        const bool branch_taken_0x2fad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD5Cu;
        // 0x2fad60: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad5c) {
            ctx->pc = 0x2FB0E8u;
            goto label_2fb0e8;
        }
    }
    ctx->pc = 0x2FAD64u;
label_2fad64:
    // 0x2fad64: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2fad68:
    if (ctx->pc == 0x2FAD68u) {
        ctx->pc = 0x2FAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD64u;
        // 0x2fad68: 0xac8308e0  sw          $v1, 0x8E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD6Cu;
        goto label_2fad6c;
    }
    ctx->pc = 0x2FAD64u;
    {
        const bool branch_taken_0x2fad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD64u;
        // 0x2fad68: 0xac8308e0  sw          $v1, 0x8E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad64) {
            ctx->pc = 0x2FAE80u;
            goto label_2fae80;
        }
    }
    ctx->pc = 0x2FAD6Cu;
label_2fad6c:
    // 0x2fad6c: 0x28621130  slti        $v0, $v1, 0x1130
    ctx->pc = 0x2fad6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4400) ? 1 : 0);
label_2fad70:
    // 0x2fad70: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_2fad74:
    if (ctx->pc == 0x2FAD74u) {
        ctx->pc = 0x2FAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD70u;
        // 0x2fad74: 0x28621054  slti        $v0, $v1, 0x1054 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4180) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD78u;
        goto label_2fad78;
    }
    ctx->pc = 0x2FAD70u;
    {
        const bool branch_taken_0x2fad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD70u;
        // 0x2fad74: 0x28621054  slti        $v0, $v1, 0x1054 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad70) {
            ctx->pc = 0x2FAF94u;
            goto label_2faf94;
        }
    }
    ctx->pc = 0x2FAD78u;
label_2fad78:
    // 0x2fad78: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2fad7c:
    if (ctx->pc == 0x2FAD7Cu) {
        ctx->pc = 0x2FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD78u;
        // 0x2fad7c: 0x28621050  slti        $v0, $v1, 0x1050 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4176) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD80u;
        goto label_2fad80;
    }
    ctx->pc = 0x2FAD78u;
    {
        const bool branch_taken_0x2fad78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD78u;
        // 0x2fad7c: 0x28621050  slti        $v0, $v1, 0x1050 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4176) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad78) {
            ctx->pc = 0x2FADF0u;
            goto label_2fadf0;
        }
    }
    ctx->pc = 0x2FAD80u;
label_2fad80:
    // 0x2fad80: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_2fad84:
    if (ctx->pc == 0x2FAD84u) {
        ctx->pc = 0x2FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD80u;
        // 0x2fad84: 0x28621022  slti        $v0, $v1, 0x1022 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD88u;
        goto label_2fad88;
    }
    ctx->pc = 0x2FAD80u;
    {
        const bool branch_taken_0x2fad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD80u;
        // 0x2fad84: 0x28621022  slti        $v0, $v1, 0x1022 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad80) {
            ctx->pc = 0x2FB03Cu;
            goto label_2fb03c;
        }
    }
    ctx->pc = 0x2FAD88u;
label_2fad88:
    // 0x2fad88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2fad8c:
    if (ctx->pc == 0x2FAD8Cu) {
        ctx->pc = 0x2FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD88u;
        // 0x2fad8c: 0x28621020  slti        $v0, $v1, 0x1020 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD90u;
        goto label_2fad90;
    }
    ctx->pc = 0x2FAD88u;
    {
        const bool branch_taken_0x2fad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD88u;
        // 0x2fad8c: 0x28621020  slti        $v0, $v1, 0x1020 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad88) {
            ctx->pc = 0x2FADB8u;
            goto label_2fadb8;
        }
    }
    ctx->pc = 0x2FAD90u;
label_2fad90:
    // 0x2fad90: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_2fad94:
    if (ctx->pc == 0x2FAD94u) {
        ctx->pc = 0x2FAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD90u;
        // 0x2fad94: 0x28621012  slti        $v0, $v1, 0x1012 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4114) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD98u;
        goto label_2fad98;
    }
    ctx->pc = 0x2FAD90u;
    {
        const bool branch_taken_0x2fad90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD90u;
        // 0x2fad94: 0x28621012  slti        $v0, $v1, 0x1012 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad90) {
            ctx->pc = 0x2FB004u;
            goto label_2fb004;
        }
    }
    ctx->pc = 0x2FAD98u;
label_2fad98:
    // 0x2fad98: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2fad9c:
    if (ctx->pc == 0x2FAD9Cu) {
        ctx->pc = 0x2FAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD98u;
        // 0x2fad9c: 0x28621010  slti        $v0, $v1, 0x1010 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4112) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADA0u;
        goto label_2fada0;
    }
    ctx->pc = 0x2FAD98u;
    {
        const bool branch_taken_0x2fad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD98u;
        // 0x2fad9c: 0x28621010  slti        $v0, $v1, 0x1010 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad98) {
            ctx->pc = 0x2FB03Cu;
            goto label_2fb03c;
        }
    }
    ctx->pc = 0x2FADA0u;
label_2fada0:
    // 0x2fada0: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_2fada4:
    if (ctx->pc == 0x2FADA4u) {
        ctx->pc = 0x2FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADA0u;
        // 0x2fada4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADA8u;
        goto label_2fada8;
    }
    ctx->pc = 0x2FADA0u;
    {
        const bool branch_taken_0x2fada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADA0u;
        // 0x2fada4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fada0) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FADA8u;
label_2fada8:
    // 0x2fada8: 0xc0bf064  jal         func_2FC190
label_2fadac:
    if (ctx->pc == 0x2FADACu) {
        ctx->pc = 0x2FADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADA8u;
        // 0x2fadac: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADB0u;
        goto label_2fadb0;
    }
    ctx->pc = 0x2FADA8u;
    SET_GPR_U32(ctx, 31, 0x2FADB0u);
    ctx->pc = 0x2FADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADA8u;
    // 0x2fadac: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FADA8u, 0x2FADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADB0u;
label_2fadb0:
    // 0x2fadb0: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2fadb4:
    if (ctx->pc == 0x2FADB4u) {
        ctx->pc = 0x2FADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADB0u;
        // 0x2fadb4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADB8u;
        goto label_2fadb8;
    }
    ctx->pc = 0x2FADB0u;
    {
        const bool branch_taken_0x2fadb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADB0u;
        // 0x2fadb4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadb0) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FADB8u;
label_2fadb8:
    // 0x2fadb8: 0x28621030  slti        $v0, $v1, 0x1030
    ctx->pc = 0x2fadb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4144) ? 1 : 0);
label_2fadbc:
    // 0x2fadbc: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_2fadc0:
    if (ctx->pc == 0x2FADC0u) {
        ctx->pc = 0x2FADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADBCu;
        // 0x2fadc0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADC4u;
        goto label_2fadc4;
    }
    ctx->pc = 0x2FADBCu;
    {
        const bool branch_taken_0x2fadbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADBCu;
        // 0x2fadc0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadbc) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FADC4u;
label_2fadc4:
    // 0x2fadc4: 0x28621032  slti        $v0, $v1, 0x1032
    ctx->pc = 0x2fadc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4146) ? 1 : 0);
label_2fadc8:
    // 0x2fadc8: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
label_2fadcc:
    if (ctx->pc == 0x2FADCCu) {
        ctx->pc = 0x2FADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADC8u;
        // 0x2fadcc: 0x28621042  slti        $v0, $v1, 0x1042 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4162) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADD0u;
        goto label_2fadd0;
    }
    ctx->pc = 0x2FADC8u;
    {
        const bool branch_taken_0x2fadc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADC8u;
        // 0x2fadcc: 0x28621042  slti        $v0, $v1, 0x1042 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4162) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadc8) {
            ctx->pc = 0x2FB014u;
            goto label_2fb014;
        }
    }
    ctx->pc = 0x2FADD0u;
label_2fadd0:
    // 0x2fadd0: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_2fadd4:
    if (ctx->pc == 0x2FADD4u) {
        ctx->pc = 0x2FADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD0u;
        // 0x2fadd4: 0x28621040  slti        $v0, $v1, 0x1040 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4160) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADD8u;
        goto label_2fadd8;
    }
    ctx->pc = 0x2FADD0u;
    {
        const bool branch_taken_0x2fadd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD0u;
        // 0x2fadd4: 0x28621040  slti        $v0, $v1, 0x1040 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4160) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadd0) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FADD8u;
label_2fadd8:
    // 0x2fadd8: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
label_2faddc:
    if (ctx->pc == 0x2FADDCu) {
        ctx->pc = 0x2FADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD8u;
        // 0x2faddc: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADE0u;
        goto label_2fade0;
    }
    ctx->pc = 0x2FADD8u;
    {
        const bool branch_taken_0x2fadd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD8u;
        // 0x2faddc: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadd8) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FADE0u;
label_2fade0:
    // 0x2fade0: 0xc0bf064  jal         func_2FC190
label_2fade4:
    if (ctx->pc == 0x2FADE4u) {
        ctx->pc = 0x2FADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADE0u;
        // 0x2fade4: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADE8u;
        goto label_2fade8;
    }
    ctx->pc = 0x2FADE0u;
    SET_GPR_U32(ctx, 31, 0x2FADE8u);
    ctx->pc = 0x2FADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADE0u;
    // 0x2fade4: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FADE0u, 0x2FADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADE8u;
label_2fade8:
    // 0x2fade8: 0x10000095  b           . + 4 + (0x95 << 2)
label_2fadec:
    if (ctx->pc == 0x2FADECu) {
        ctx->pc = 0x2FADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADE8u;
        // 0x2fadec: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADF0u;
        goto label_2fadf0;
    }
    ctx->pc = 0x2FADE8u;
    {
        const bool branch_taken_0x2fade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADE8u;
        // 0x2fadec: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fade8) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FADF0u;
label_2fadf0:
    // 0x2fadf0: 0x24021090  addiu       $v0, $zero, 0x1090
    ctx->pc = 0x2fadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
label_2fadf4:
    // 0x2fadf4: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
label_2fadf8:
    if (ctx->pc == 0x2FADF8u) {
        ctx->pc = 0x2FADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADF4u;
        // 0x2fadf8: 0x28621091  slti        $v0, $v1, 0x1091 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4241) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FADFCu;
        goto label_2fadfc;
    }
    ctx->pc = 0x2FADF4u;
    {
        const bool branch_taken_0x2fadf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADF4u;
        // 0x2fadf8: 0x28621091  slti        $v0, $v1, 0x1091 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4241) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadf4) {
            ctx->pc = 0x2FB03Cu;
            goto label_2fb03c;
        }
    }
    ctx->pc = 0x2FADFCu;
label_2fadfc:
    // 0x2fadfc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2fae00:
    if (ctx->pc == 0x2FAE00u) {
        ctx->pc = 0x2FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADFCu;
        // 0x2fae00: 0x28621060  slti        $v0, $v1, 0x1060 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4192) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE04u;
        goto label_2fae04;
    }
    ctx->pc = 0x2FADFCu;
    {
        const bool branch_taken_0x2fadfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADFCu;
        // 0x2fae00: 0x28621060  slti        $v0, $v1, 0x1060 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadfc) {
            ctx->pc = 0x2FAE38u;
            goto label_2fae38;
        }
    }
    ctx->pc = 0x2FAE04u;
label_2fae04:
    // 0x2fae04: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
label_2fae08:
    if (ctx->pc == 0x2FAE08u) {
        ctx->pc = 0x2FAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE04u;
        // 0x2fae08: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE0Cu;
        goto label_2fae0c;
    }
    ctx->pc = 0x2FAE04u;
    {
        const bool branch_taken_0x2fae04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE04u;
        // 0x2fae08: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae04) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAE0Cu;
label_2fae0c:
    // 0x2fae0c: 0x28621062  slti        $v0, $v1, 0x1062
    ctx->pc = 0x2fae0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4194) ? 1 : 0);
label_2fae10:
    // 0x2fae10: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
label_2fae14:
    if (ctx->pc == 0x2FAE14u) {
        ctx->pc = 0x2FAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE10u;
        // 0x2fae14: 0x28621072  slti        $v0, $v1, 0x1072 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4210) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE18u;
        goto label_2fae18;
    }
    ctx->pc = 0x2FAE10u;
    {
        const bool branch_taken_0x2fae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE10u;
        // 0x2fae14: 0x28621072  slti        $v0, $v1, 0x1072 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4210) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae10) {
            ctx->pc = 0x2FB024u;
            goto label_2fb024;
        }
    }
    ctx->pc = 0x2FAE18u;
label_2fae18:
    // 0x2fae18: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
label_2fae1c:
    if (ctx->pc == 0x2FAE1Cu) {
        ctx->pc = 0x2FAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE18u;
        // 0x2fae1c: 0x28621070  slti        $v0, $v1, 0x1070 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4208) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE20u;
        goto label_2fae20;
    }
    ctx->pc = 0x2FAE18u;
    {
        const bool branch_taken_0x2fae18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE18u;
        // 0x2fae1c: 0x28621070  slti        $v0, $v1, 0x1070 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4208) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae18) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAE20u;
label_2fae20:
    // 0x2fae20: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
label_2fae24:
    if (ctx->pc == 0x2FAE24u) {
        ctx->pc = 0x2FAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE20u;
        // 0x2fae24: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE28u;
        goto label_2fae28;
    }
    ctx->pc = 0x2FAE20u;
    {
        const bool branch_taken_0x2fae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE20u;
        // 0x2fae24: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae20) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAE28u;
label_2fae28:
    // 0x2fae28: 0xc0bf064  jal         func_2FC190
label_2fae2c:
    if (ctx->pc == 0x2FAE2Cu) {
        ctx->pc = 0x2FAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE28u;
        // 0x2fae2c: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE30u;
        goto label_2fae30;
    }
    ctx->pc = 0x2FAE28u;
    SET_GPR_U32(ctx, 31, 0x2FAE30u);
    ctx->pc = 0x2FAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE28u;
    // 0x2fae2c: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAE28u, 0x2FAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE30u;
label_2fae30:
    // 0x2fae30: 0x10000083  b           . + 4 + (0x83 << 2)
label_2fae34:
    if (ctx->pc == 0x2FAE34u) {
        ctx->pc = 0x2FAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE30u;
        // 0x2fae34: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE38u;
        goto label_2fae38;
    }
    ctx->pc = 0x2FAE30u;
    {
        const bool branch_taken_0x2fae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE30u;
        // 0x2fae34: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae30) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAE38u;
label_2fae38:
    // 0x2fae38: 0x28621112  slti        $v0, $v1, 0x1112
    ctx->pc = 0x2fae38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4370) ? 1 : 0);
label_2fae3c:
    // 0x2fae3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2fae40:
    if (ctx->pc == 0x2FAE40u) {
        ctx->pc = 0x2FAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE3Cu;
        // 0x2fae40: 0x28621110  slti        $v0, $v1, 0x1110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4368) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE44u;
        goto label_2fae44;
    }
    ctx->pc = 0x2FAE3Cu;
    {
        const bool branch_taken_0x2fae3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE3Cu;
        // 0x2fae40: 0x28621110  slti        $v0, $v1, 0x1110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4368) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae3c) {
            ctx->pc = 0x2FAE5Cu;
            goto label_2fae5c;
        }
    }
    ctx->pc = 0x2FAE44u;
label_2fae44:
    // 0x2fae44: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_2fae48:
    if (ctx->pc == 0x2FAE48u) {
        ctx->pc = 0x2FAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE44u;
        // 0x2fae48: 0x24021091  addiu       $v0, $zero, 0x1091 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE4Cu;
        goto label_2fae4c;
    }
    ctx->pc = 0x2FAE44u;
    {
        const bool branch_taken_0x2fae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE44u;
        // 0x2fae48: 0x24021091  addiu       $v0, $zero, 0x1091 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae44) {
            ctx->pc = 0x2FAF84u;
            goto label_2faf84;
        }
    }
    ctx->pc = 0x2FAE4Cu;
label_2fae4c:
    // 0x2fae4c: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
label_2fae50:
    if (ctx->pc == 0x2FAE50u) {
        ctx->pc = 0x2FAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE4Cu;
        // 0x2fae50: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE54u;
        goto label_2fae54;
    }
    ctx->pc = 0x2FAE4Cu;
    {
        const bool branch_taken_0x2fae4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE4Cu;
        // 0x2fae50: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae4c) {
            ctx->pc = 0x2FB034u;
            goto label_2fb034;
        }
    }
    ctx->pc = 0x2FAE54u;
label_2fae54:
    // 0x2fae54: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2fae58:
    if (ctx->pc == 0x2FAE58u) {
        ctx->pc = 0x2FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE54u;
        // 0x2fae58: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE5Cu;
        goto label_2fae5c;
    }
    ctx->pc = 0x2FAE54u;
    {
        const bool branch_taken_0x2fae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE54u;
        // 0x2fae58: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae54) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAE5Cu;
label_2fae5c:
    // 0x2fae5c: 0x28621122  slti        $v0, $v1, 0x1122
    ctx->pc = 0x2fae5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4386) ? 1 : 0);
label_2fae60:
    // 0x2fae60: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_2fae64:
    if (ctx->pc == 0x2FAE64u) {
        ctx->pc = 0x2FAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE60u;
        // 0x2fae64: 0x28621120  slti        $v0, $v1, 0x1120 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4384) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE68u;
        goto label_2fae68;
    }
    ctx->pc = 0x2FAE60u;
    {
        const bool branch_taken_0x2fae60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE60u;
        // 0x2fae64: 0x28621120  slti        $v0, $v1, 0x1120 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae60) {
            ctx->pc = 0x2FB03Cu;
            goto label_2fb03c;
        }
    }
    ctx->pc = 0x2FAE68u;
label_2fae68:
    // 0x2fae68: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_2fae6c:
    if (ctx->pc == 0x2FAE6Cu) {
        ctx->pc = 0x2FAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE68u;
        // 0x2fae6c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE70u;
        goto label_2fae70;
    }
    ctx->pc = 0x2FAE68u;
    {
        const bool branch_taken_0x2fae68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE68u;
        // 0x2fae6c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae68) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAE70u;
label_2fae70:
    // 0x2fae70: 0xc0bf064  jal         func_2FC190
label_2fae74:
    if (ctx->pc == 0x2FAE74u) {
        ctx->pc = 0x2FAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE70u;
        // 0x2fae74: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE78u;
        goto label_2fae78;
    }
    ctx->pc = 0x2FAE70u;
    SET_GPR_U32(ctx, 31, 0x2FAE78u);
    ctx->pc = 0x2FAE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE70u;
    // 0x2fae74: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAE70u, 0x2FAE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE78u;
label_2fae78:
    // 0x2fae78: 0x10000071  b           . + 4 + (0x71 << 2)
label_2fae7c:
    if (ctx->pc == 0x2FAE7Cu) {
        ctx->pc = 0x2FAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE78u;
        // 0x2fae7c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE80u;
        goto label_2fae80;
    }
    ctx->pc = 0x2FAE78u;
    {
        const bool branch_taken_0x2fae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE78u;
        // 0x2fae7c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae78) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAE80u;
label_2fae80:
    // 0x2fae80: 0x28621192  slti        $v0, $v1, 0x1192
    ctx->pc = 0x2fae80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4498) ? 1 : 0);
label_2fae84:
    // 0x2fae84: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2fae88:
    if (ctx->pc == 0x2FAE88u) {
        ctx->pc = 0x2FAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE84u;
        // 0x2fae88: 0x28621190  slti        $v0, $v1, 0x1190 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4496) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE8Cu;
        goto label_2fae8c;
    }
    ctx->pc = 0x2FAE84u;
    {
        const bool branch_taken_0x2fae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE84u;
        // 0x2fae88: 0x28621190  slti        $v0, $v1, 0x1190 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4496) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae84) {
            ctx->pc = 0x2FAF14u;
            goto label_2faf14;
        }
    }
    ctx->pc = 0x2FAE8Cu;
label_2fae8c:
    // 0x2fae8c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_2fae90:
    if (ctx->pc == 0x2FAE90u) {
        ctx->pc = 0x2FAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE8Cu;
        // 0x2fae90: 0x28621162  slti        $v0, $v1, 0x1162 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4450) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE94u;
        goto label_2fae94;
    }
    ctx->pc = 0x2FAE8Cu;
    {
        const bool branch_taken_0x2fae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE8Cu;
        // 0x2fae90: 0x28621162  slti        $v0, $v1, 0x1162 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4450) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae8c) {
            ctx->pc = 0x2FAFC4u;
            goto label_2fafc4;
        }
    }
    ctx->pc = 0x2FAE94u;
label_2fae94:
    // 0x2fae94: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2fae98:
    if (ctx->pc == 0x2FAE98u) {
        ctx->pc = 0x2FAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE94u;
        // 0x2fae98: 0x28621160  slti        $v0, $v1, 0x1160 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4448) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE9Cu;
        goto label_2fae9c;
    }
    ctx->pc = 0x2FAE94u;
    {
        const bool branch_taken_0x2fae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE94u;
        // 0x2fae98: 0x28621160  slti        $v0, $v1, 0x1160 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae94) {
            ctx->pc = 0x2FAED8u;
            goto label_2faed8;
        }
    }
    ctx->pc = 0x2FAE9Cu;
label_2fae9c:
    // 0x2fae9c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2faea0:
    if (ctx->pc == 0x2FAEA0u) {
        ctx->pc = 0x2FAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE9Cu;
        // 0x2faea0: 0x28621140  slti        $v0, $v1, 0x1140 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4416) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEA4u;
        goto label_2faea4;
    }
    ctx->pc = 0x2FAE9Cu;
    {
        const bool branch_taken_0x2fae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE9Cu;
        // 0x2faea0: 0x28621140  slti        $v0, $v1, 0x1140 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4416) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae9c) {
            ctx->pc = 0x2FAFB4u;
            goto label_2fafb4;
        }
    }
    ctx->pc = 0x2FAEA4u;
label_2faea4:
    // 0x2faea4: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_2faea8:
    if (ctx->pc == 0x2FAEA8u) {
        ctx->pc = 0x2FAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEA4u;
        // 0x2faea8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEACu;
        goto label_2faeac;
    }
    ctx->pc = 0x2FAEA4u;
    {
        const bool branch_taken_0x2faea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEA4u;
        // 0x2faea8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faea4) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAEACu;
label_2faeac:
    // 0x2faeac: 0x28621142  slti        $v0, $v1, 0x1142
    ctx->pc = 0x2faeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4418) ? 1 : 0);
label_2faeb0:
    // 0x2faeb0: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_2faeb4:
    if (ctx->pc == 0x2FAEB4u) {
        ctx->pc = 0x2FAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEB0u;
        // 0x2faeb4: 0x28621152  slti        $v0, $v1, 0x1152 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4434) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEB8u;
        goto label_2faeb8;
    }
    ctx->pc = 0x2FAEB0u;
    {
        const bool branch_taken_0x2faeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEB0u;
        // 0x2faeb4: 0x28621152  slti        $v0, $v1, 0x1152 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4434) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faeb0) {
            ctx->pc = 0x2FAFA4u;
            goto label_2fafa4;
        }
    }
    ctx->pc = 0x2FAEB8u;
label_2faeb8:
    // 0x2faeb8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_2faebc:
    if (ctx->pc == 0x2FAEBCu) {
        ctx->pc = 0x2FAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEB8u;
        // 0x2faebc: 0x28621150  slti        $v0, $v1, 0x1150 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4432) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEC0u;
        goto label_2faec0;
    }
    ctx->pc = 0x2FAEB8u;
    {
        const bool branch_taken_0x2faeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEB8u;
        // 0x2faebc: 0x28621150  slti        $v0, $v1, 0x1150 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4432) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faeb8) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAEC0u;
label_2faec0:
    // 0x2faec0: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_2faec4:
    if (ctx->pc == 0x2FAEC4u) {
        ctx->pc = 0x2FAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEC0u;
        // 0x2faec4: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEC8u;
        goto label_2faec8;
    }
    ctx->pc = 0x2FAEC0u;
    {
        const bool branch_taken_0x2faec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEC0u;
        // 0x2faec4: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faec0) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAEC8u;
label_2faec8:
    // 0x2faec8: 0xc0bf064  jal         func_2FC190
label_2faecc:
    if (ctx->pc == 0x2FAECCu) {
        ctx->pc = 0x2FAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEC8u;
        // 0x2faecc: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAED0u;
        goto label_2faed0;
    }
    ctx->pc = 0x2FAEC8u;
    SET_GPR_U32(ctx, 31, 0x2FAED0u);
    ctx->pc = 0x2FAECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEC8u;
    // 0x2faecc: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAEC8u, 0x2FAED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAED0u;
label_2faed0:
    // 0x2faed0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2faed4:
    if (ctx->pc == 0x2FAED4u) {
        ctx->pc = 0x2FAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAED0u;
        // 0x2faed4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAED8u;
        goto label_2faed8;
    }
    ctx->pc = 0x2FAED0u;
    {
        const bool branch_taken_0x2faed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAED0u;
        // 0x2faed4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faed0) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAED8u;
label_2faed8:
    // 0x2faed8: 0x28621170  slti        $v0, $v1, 0x1170
    ctx->pc = 0x2faed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4464) ? 1 : 0);
label_2faedc:
    // 0x2faedc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_2faee0:
    if (ctx->pc == 0x2FAEE0u) {
        ctx->pc = 0x2FAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEDCu;
        // 0x2faee0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEE4u;
        goto label_2faee4;
    }
    ctx->pc = 0x2FAEDCu;
    {
        const bool branch_taken_0x2faedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEDCu;
        // 0x2faee0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faedc) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAEE4u;
label_2faee4:
    // 0x2faee4: 0x28621173  slti        $v0, $v1, 0x1173
    ctx->pc = 0x2faee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4467) ? 1 : 0);
label_2faee8:
    // 0x2faee8: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_2faeec:
    if (ctx->pc == 0x2FAEECu) {
        ctx->pc = 0x2FAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEE8u;
        // 0x2faeec: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEF0u;
        goto label_2faef0;
    }
    ctx->pc = 0x2FAEE8u;
    {
        const bool branch_taken_0x2faee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEE8u;
        // 0x2faeec: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faee8) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAEF0u;
label_2faef0:
    // 0x2faef0: 0x28621182  slti        $v0, $v1, 0x1182
    ctx->pc = 0x2faef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4482) ? 1 : 0);
label_2faef4:
    // 0x2faef4: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2faef8:
    if (ctx->pc == 0x2FAEF8u) {
        ctx->pc = 0x2FAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEF4u;
        // 0x2faef8: 0x28621180  slti        $v0, $v1, 0x1180 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4480) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEFCu;
        goto label_2faefc;
    }
    ctx->pc = 0x2FAEF4u;
    {
        const bool branch_taken_0x2faef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEF4u;
        // 0x2faef8: 0x28621180  slti        $v0, $v1, 0x1180 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4480) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faef4) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAEFCu;
label_2faefc:
    // 0x2faefc: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_2faf00:
    if (ctx->pc == 0x2FAF00u) {
        ctx->pc = 0x2FAF04u;
        goto label_2faf04;
    }
    ctx->pc = 0x2FAEFCu;
    {
        const bool branch_taken_0x2faefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faefc) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAF04u;
label_2faf04:
    // 0x2faf04: 0xc0bf064  jal         func_2FC190
label_2faf08:
    if (ctx->pc == 0x2FAF08u) {
        ctx->pc = 0x2FAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF04u;
        // 0x2faf08: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF0Cu;
        goto label_2faf0c;
    }
    ctx->pc = 0x2FAF04u;
    SET_GPR_U32(ctx, 31, 0x2FAF0Cu);
    ctx->pc = 0x2FAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF04u;
    // 0x2faf08: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAF04u, 0x2FAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF0Cu;
label_2faf0c:
    // 0x2faf0c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2faf10:
    if (ctx->pc == 0x2FAF10u) {
        ctx->pc = 0x2FAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF0Cu;
        // 0x2faf10: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF14u;
        goto label_2faf14;
    }
    ctx->pc = 0x2FAF0Cu;
    {
        const bool branch_taken_0x2faf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF0Cu;
        // 0x2faf10: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf0c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF14u;
label_2faf14:
    // 0x2faf14: 0x286211c2  slti        $v0, $v1, 0x11C2
    ctx->pc = 0x2faf14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4546) ? 1 : 0);
label_2faf18:
    // 0x2faf18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2faf1c:
    if (ctx->pc == 0x2FAF1Cu) {
        ctx->pc = 0x2FAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF18u;
        // 0x2faf1c: 0x286211c0  slti        $v0, $v1, 0x11C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4544) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF20u;
        goto label_2faf20;
    }
    ctx->pc = 0x2FAF18u;
    {
        const bool branch_taken_0x2faf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF18u;
        // 0x2faf1c: 0x286211c0  slti        $v0, $v1, 0x11C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf18) {
            ctx->pc = 0x2FAF5Cu;
            goto label_2faf5c;
        }
    }
    ctx->pc = 0x2FAF20u;
label_2faf20:
    // 0x2faf20: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2faf24:
    if (ctx->pc == 0x2FAF24u) {
        ctx->pc = 0x2FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF20u;
        // 0x2faf24: 0x286211a0  slti        $v0, $v1, 0x11A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4512) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF28u;
        goto label_2faf28;
    }
    ctx->pc = 0x2FAF20u;
    {
        const bool branch_taken_0x2faf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF20u;
        // 0x2faf24: 0x286211a0  slti        $v0, $v1, 0x11A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf20) {
            ctx->pc = 0x2FAFE4u;
            goto label_2fafe4;
        }
    }
    ctx->pc = 0x2FAF28u;
label_2faf28:
    // 0x2faf28: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_2faf2c:
    if (ctx->pc == 0x2FAF2Cu) {
        ctx->pc = 0x2FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF28u;
        // 0x2faf2c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF30u;
        goto label_2faf30;
    }
    ctx->pc = 0x2FAF28u;
    {
        const bool branch_taken_0x2faf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF28u;
        // 0x2faf2c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf28) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF30u;
label_2faf30:
    // 0x2faf30: 0x286211a2  slti        $v0, $v1, 0x11A2
    ctx->pc = 0x2faf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4514) ? 1 : 0);
label_2faf34:
    // 0x2faf34: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2faf38:
    if (ctx->pc == 0x2FAF38u) {
        ctx->pc = 0x2FAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF34u;
        // 0x2faf38: 0x286211b2  slti        $v0, $v1, 0x11B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4530) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF3Cu;
        goto label_2faf3c;
    }
    ctx->pc = 0x2FAF34u;
    {
        const bool branch_taken_0x2faf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF34u;
        // 0x2faf38: 0x286211b2  slti        $v0, $v1, 0x11B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf34) {
            ctx->pc = 0x2FAFD4u;
            goto label_2fafd4;
        }
    }
    ctx->pc = 0x2FAF3Cu;
label_2faf3c:
    // 0x2faf3c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2faf40:
    if (ctx->pc == 0x2FAF40u) {
        ctx->pc = 0x2FAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF3Cu;
        // 0x2faf40: 0x286211b0  slti        $v0, $v1, 0x11B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4528) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF44u;
        goto label_2faf44;
    }
    ctx->pc = 0x2FAF3Cu;
    {
        const bool branch_taken_0x2faf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF3Cu;
        // 0x2faf40: 0x286211b0  slti        $v0, $v1, 0x11B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf3c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF44u;
label_2faf44:
    // 0x2faf44: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_2faf48:
    if (ctx->pc == 0x2FAF48u) {
        ctx->pc = 0x2FAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF44u;
        // 0x2faf48: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF4Cu;
        goto label_2faf4c;
    }
    ctx->pc = 0x2FAF44u;
    {
        const bool branch_taken_0x2faf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF44u;
        // 0x2faf48: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf44) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAF4Cu;
label_2faf4c:
    // 0x2faf4c: 0xc0bf064  jal         func_2FC190
label_2faf50:
    if (ctx->pc == 0x2FAF50u) {
        ctx->pc = 0x2FAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF4Cu;
        // 0x2faf50: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF54u;
        goto label_2faf54;
    }
    ctx->pc = 0x2FAF4Cu;
    SET_GPR_U32(ctx, 31, 0x2FAF54u);
    ctx->pc = 0x2FAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF4Cu;
    // 0x2faf50: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAF4Cu, 0x2FAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF54u;
label_2faf54:
    // 0x2faf54: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2faf58:
    if (ctx->pc == 0x2FAF58u) {
        ctx->pc = 0x2FAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF54u;
        // 0x2faf58: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF5Cu;
        goto label_2faf5c;
    }
    ctx->pc = 0x2FAF54u;
    {
        const bool branch_taken_0x2faf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF54u;
        // 0x2faf58: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf54) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF5Cu;
label_2faf5c:
    // 0x2faf5c: 0x286211d0  slti        $v0, $v1, 0x11D0
    ctx->pc = 0x2faf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4560) ? 1 : 0);
label_2faf60:
    // 0x2faf60: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_2faf64:
    if (ctx->pc == 0x2FAF64u) {
        ctx->pc = 0x2FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF60u;
        // 0x2faf64: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF68u;
        goto label_2faf68;
    }
    ctx->pc = 0x2FAF60u;
    {
        const bool branch_taken_0x2faf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF60u;
        // 0x2faf64: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf60) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF68u;
label_2faf68:
    // 0x2faf68: 0x286211d2  slti        $v0, $v1, 0x11D2
    ctx->pc = 0x2faf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4562) ? 1 : 0);
label_2faf6c:
    // 0x2faf6c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2faf70:
    if (ctx->pc == 0x2FAF70u) {
        ctx->pc = 0x2FAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF6Cu;
        // 0x2faf70: 0x28621212  slti        $v0, $v1, 0x1212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4626) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF74u;
        goto label_2faf74;
    }
    ctx->pc = 0x2FAF6Cu;
    {
        const bool branch_taken_0x2faf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF6Cu;
        // 0x2faf70: 0x28621212  slti        $v0, $v1, 0x1212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4626) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf6c) {
            ctx->pc = 0x2FAFF4u;
            goto label_2faff4;
        }
    }
    ctx->pc = 0x2FAF74u;
label_2faf74:
    // 0x2faf74: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2faf78:
    if (ctx->pc == 0x2FAF78u) {
        ctx->pc = 0x2FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF74u;
        // 0x2faf78: 0x28621210  slti        $v0, $v1, 0x1210 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4624) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF7Cu;
        goto label_2faf7c;
    }
    ctx->pc = 0x2FAF74u;
    {
        const bool branch_taken_0x2faf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF74u;
        // 0x2faf78: 0x28621210  slti        $v0, $v1, 0x1210 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf74) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF7Cu;
label_2faf7c:
    // 0x2faf7c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2faf80:
    if (ctx->pc == 0x2FAF80u) {
        ctx->pc = 0x2FAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF7Cu;
        // 0x2faf80: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF84u;
        goto label_2faf84;
    }
    ctx->pc = 0x2FAF7Cu;
    {
        const bool branch_taken_0x2faf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF7Cu;
        // 0x2faf80: 0x8e05066c  lw          $a1, 0x66C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf7c) {
            ctx->pc = 0x2FB044u;
            goto label_2fb044;
        }
    }
    ctx->pc = 0x2FAF84u;
label_2faf84:
    // 0x2faf84: 0xc0bf064  jal         func_2FC190
label_2faf88:
    if (ctx->pc == 0x2FAF88u) {
        ctx->pc = 0x2FAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF84u;
        // 0x2faf88: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF8Cu;
        goto label_2faf8c;
    }
    ctx->pc = 0x2FAF84u;
    SET_GPR_U32(ctx, 31, 0x2FAF8Cu);
    ctx->pc = 0x2FAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF84u;
    // 0x2faf88: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAF84u, 0x2FAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF8Cu;
label_2faf8c:
    // 0x2faf8c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2faf90:
    if (ctx->pc == 0x2FAF90u) {
        ctx->pc = 0x2FAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF8Cu;
        // 0x2faf90: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF94u;
        goto label_2faf94;
    }
    ctx->pc = 0x2FAF8Cu;
    {
        const bool branch_taken_0x2faf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF8Cu;
        // 0x2faf90: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf8c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAF94u;
label_2faf94:
    // 0x2faf94: 0xc0bf064  jal         func_2FC190
label_2faf98:
    if (ctx->pc == 0x2FAF98u) {
        ctx->pc = 0x2FAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF94u;
        // 0x2faf98: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF9Cu;
        goto label_2faf9c;
    }
    ctx->pc = 0x2FAF94u;
    SET_GPR_U32(ctx, 31, 0x2FAF9Cu);
    ctx->pc = 0x2FAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF94u;
    // 0x2faf98: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAF94u, 0x2FAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF9Cu;
label_2faf9c:
    // 0x2faf9c: 0x10000028  b           . + 4 + (0x28 << 2)
label_2fafa0:
    if (ctx->pc == 0x2FAFA0u) {
        ctx->pc = 0x2FAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF9Cu;
        // 0x2fafa0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFA4u;
        goto label_2fafa4;
    }
    ctx->pc = 0x2FAF9Cu;
    {
        const bool branch_taken_0x2faf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF9Cu;
        // 0x2fafa0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf9c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAFA4u;
label_2fafa4:
    // 0x2fafa4: 0xc0bf064  jal         func_2FC190
label_2fafa8:
    if (ctx->pc == 0x2FAFA8u) {
        ctx->pc = 0x2FAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFA4u;
        // 0x2fafa8: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFACu;
        goto label_2fafac;
    }
    ctx->pc = 0x2FAFA4u;
    SET_GPR_U32(ctx, 31, 0x2FAFACu);
    ctx->pc = 0x2FAFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFA4u;
    // 0x2fafa8: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAFA4u, 0x2FAFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFACu;
label_2fafac:
    // 0x2fafac: 0x10000024  b           . + 4 + (0x24 << 2)
label_2fafb0:
    if (ctx->pc == 0x2FAFB0u) {
        ctx->pc = 0x2FAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFACu;
        // 0x2fafb0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFB4u;
        goto label_2fafb4;
    }
    ctx->pc = 0x2FAFACu;
    {
        const bool branch_taken_0x2fafac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFACu;
        // 0x2fafb0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafac) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAFB4u;
label_2fafb4:
    // 0x2fafb4: 0xc0bf064  jal         func_2FC190
label_2fafb8:
    if (ctx->pc == 0x2FAFB8u) {
        ctx->pc = 0x2FAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFB4u;
        // 0x2fafb8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFBCu;
        goto label_2fafbc;
    }
    ctx->pc = 0x2FAFB4u;
    SET_GPR_U32(ctx, 31, 0x2FAFBCu);
    ctx->pc = 0x2FAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFB4u;
    // 0x2fafb8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAFB4u, 0x2FAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFBCu;
label_2fafbc:
    // 0x2fafbc: 0x10000020  b           . + 4 + (0x20 << 2)
label_2fafc0:
    if (ctx->pc == 0x2FAFC0u) {
        ctx->pc = 0x2FAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFBCu;
        // 0x2fafc0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFC4u;
        goto label_2fafc4;
    }
    ctx->pc = 0x2FAFBCu;
    {
        const bool branch_taken_0x2fafbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFBCu;
        // 0x2fafc0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafbc) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAFC4u;
label_2fafc4:
    // 0x2fafc4: 0xc0bf064  jal         func_2FC190
label_2fafc8:
    if (ctx->pc == 0x2FAFC8u) {
        ctx->pc = 0x2FAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFC4u;
        // 0x2fafc8: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFCCu;
        goto label_2fafcc;
    }
    ctx->pc = 0x2FAFC4u;
    SET_GPR_U32(ctx, 31, 0x2FAFCCu);
    ctx->pc = 0x2FAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFC4u;
    // 0x2fafc8: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAFC4u, 0x2FAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFCCu;
label_2fafcc:
    // 0x2fafcc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2fafd0:
    if (ctx->pc == 0x2FAFD0u) {
        ctx->pc = 0x2FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFCCu;
        // 0x2fafd0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFD4u;
        goto label_2fafd4;
    }
    ctx->pc = 0x2FAFCCu;
    {
        const bool branch_taken_0x2fafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFCCu;
        // 0x2fafd0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafcc) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAFD4u;
label_2fafd4:
    // 0x2fafd4: 0xc0bf064  jal         func_2FC190
label_2fafd8:
    if (ctx->pc == 0x2FAFD8u) {
        ctx->pc = 0x2FAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFD4u;
        // 0x2fafd8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFDCu;
        goto label_2fafdc;
    }
    ctx->pc = 0x2FAFD4u;
    SET_GPR_U32(ctx, 31, 0x2FAFDCu);
    ctx->pc = 0x2FAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFD4u;
    // 0x2fafd8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAFD4u, 0x2FAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFDCu;
label_2fafdc:
    // 0x2fafdc: 0x10000018  b           . + 4 + (0x18 << 2)
label_2fafe0:
    if (ctx->pc == 0x2FAFE0u) {
        ctx->pc = 0x2FAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFDCu;
        // 0x2fafe0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFE4u;
        goto label_2fafe4;
    }
    ctx->pc = 0x2FAFDCu;
    {
        const bool branch_taken_0x2fafdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFDCu;
        // 0x2fafe0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafdc) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAFE4u;
label_2fafe4:
    // 0x2fafe4: 0xc0bf064  jal         func_2FC190
label_2fafe8:
    if (ctx->pc == 0x2FAFE8u) {
        ctx->pc = 0x2FAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE4u;
        // 0x2fafe8: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFECu;
        goto label_2fafec;
    }
    ctx->pc = 0x2FAFE4u;
    SET_GPR_U32(ctx, 31, 0x2FAFECu);
    ctx->pc = 0x2FAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFE4u;
    // 0x2fafe8: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAFE4u, 0x2FAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFECu;
label_2fafec:
    // 0x2fafec: 0x10000014  b           . + 4 + (0x14 << 2)
label_2faff0:
    if (ctx->pc == 0x2FAFF0u) {
        ctx->pc = 0x2FAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFECu;
        // 0x2faff0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFF4u;
        goto label_2faff4;
    }
    ctx->pc = 0x2FAFECu;
    {
        const bool branch_taken_0x2fafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFECu;
        // 0x2faff0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafec) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FAFF4u;
label_2faff4:
    // 0x2faff4: 0xc0bf064  jal         func_2FC190
label_2faff8:
    if (ctx->pc == 0x2FAFF8u) {
        ctx->pc = 0x2FAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFF4u;
        // 0x2faff8: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFFCu;
        goto label_2faffc;
    }
    ctx->pc = 0x2FAFF4u;
    SET_GPR_U32(ctx, 31, 0x2FAFFCu);
    ctx->pc = 0x2FAFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFF4u;
    // 0x2faff8: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FAFF4u, 0x2FAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFFCu;
label_2faffc:
    // 0x2faffc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2fb000:
    if (ctx->pc == 0x2FB000u) {
        ctx->pc = 0x2FB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFFCu;
        // 0x2fb000: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB004u;
        goto label_2fb004;
    }
    ctx->pc = 0x2FAFFCu;
    {
        const bool branch_taken_0x2faffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFFCu;
        // 0x2fb000: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faffc) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FB004u;
label_2fb004:
    // 0x2fb004: 0xc0bf064  jal         func_2FC190
label_2fb008:
    if (ctx->pc == 0x2FB008u) {
        ctx->pc = 0x2FB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB004u;
        // 0x2fb008: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB00Cu;
        goto label_2fb00c;
    }
    ctx->pc = 0x2FB004u;
    SET_GPR_U32(ctx, 31, 0x2FB00Cu);
    ctx->pc = 0x2FB008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB004u;
    // 0x2fb008: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB004u, 0x2FB00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB00Cu;
label_2fb00c:
    // 0x2fb00c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2fb010:
    if (ctx->pc == 0x2FB010u) {
        ctx->pc = 0x2FB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB00Cu;
        // 0x2fb010: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB014u;
        goto label_2fb014;
    }
    ctx->pc = 0x2FB00Cu;
    {
        const bool branch_taken_0x2fb00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB00Cu;
        // 0x2fb010: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb00c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FB014u;
label_2fb014:
    // 0x2fb014: 0xc0bf064  jal         func_2FC190
label_2fb018:
    if (ctx->pc == 0x2FB018u) {
        ctx->pc = 0x2FB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB014u;
        // 0x2fb018: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB01Cu;
        goto label_2fb01c;
    }
    ctx->pc = 0x2FB014u;
    SET_GPR_U32(ctx, 31, 0x2FB01Cu);
    ctx->pc = 0x2FB018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB014u;
    // 0x2fb018: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB014u, 0x2FB01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB01Cu;
label_2fb01c:
    // 0x2fb01c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2fb020:
    if (ctx->pc == 0x2FB020u) {
        ctx->pc = 0x2FB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB01Cu;
        // 0x2fb020: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB024u;
        goto label_2fb024;
    }
    ctx->pc = 0x2FB01Cu;
    {
        const bool branch_taken_0x2fb01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB01Cu;
        // 0x2fb020: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb01c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FB024u;
label_2fb024:
    // 0x2fb024: 0xc0bf064  jal         func_2FC190
label_2fb028:
    if (ctx->pc == 0x2FB028u) {
        ctx->pc = 0x2FB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB024u;
        // 0x2fb028: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB02Cu;
        goto label_2fb02c;
    }
    ctx->pc = 0x2FB024u;
    SET_GPR_U32(ctx, 31, 0x2FB02Cu);
    ctx->pc = 0x2FB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB024u;
    // 0x2fb028: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB024u, 0x2FB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB02Cu;
label_2fb02c:
    // 0x2fb02c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fb030:
    if (ctx->pc == 0x2FB030u) {
        ctx->pc = 0x2FB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB02Cu;
        // 0x2fb030: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB034u;
        goto label_2fb034;
    }
    ctx->pc = 0x2FB02Cu;
    {
        const bool branch_taken_0x2fb02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB02Cu;
        // 0x2fb030: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb02c) {
            ctx->pc = 0x2FB040u;
            goto label_2fb040;
        }
    }
    ctx->pc = 0x2FB034u;
label_2fb034:
    // 0x2fb034: 0xc0bf064  jal         func_2FC190
label_2fb038:
    if (ctx->pc == 0x2FB038u) {
        ctx->pc = 0x2FB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB034u;
        // 0x2fb038: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB03Cu;
        goto label_2fb03c;
    }
    ctx->pc = 0x2FB034u;
    SET_GPR_U32(ctx, 31, 0x2FB03Cu);
    ctx->pc = 0x2FB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB034u;
    // 0x2fb038: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB034u, 0x2FB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB03Cu;
label_2fb03c:
    // 0x2fb03c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_2fb040:
    // 0x2fb040: 0x8e05066c  lw          $a1, 0x66C($s0)
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
label_2fb044:
    // 0x2fb044: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
label_2fb048:
    if (ctx->pc == 0x2FB048u) {
        ctx->pc = 0x2FB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB044u;
        // 0x2fb048: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB04Cu;
        goto label_2fb04c;
    }
    ctx->pc = 0x2FB044u;
    {
        const bool branch_taken_0x2fb044 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2FB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB044u;
        // 0x2fb048: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb044) {
            ctx->pc = 0x2FB0A0u;
            goto label_2fb0a0;
        }
    }
    ctx->pc = 0x2FB04Cu;
label_2fb04c:
    // 0x2fb04c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb050:
    // 0x2fb050: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x2fb050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_2fb054:
    // 0x2fb054: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2fb058:
    if (ctx->pc == 0x2FB058u) {
        ctx->pc = 0x2FB05Cu;
        goto label_2fb05c;
    }
    ctx->pc = 0x2FB054u;
    {
        const bool branch_taken_0x2fb054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fb054) {
            ctx->pc = 0x2FB068u;
            goto label_2fb068;
        }
    }
    ctx->pc = 0x2FB05Cu;
label_2fb05c:
    // 0x2fb05c: 0xc0bf044  jal         func_2FC110
label_2fb060:
    if (ctx->pc == 0x2FB060u) {
        ctx->pc = 0x2FB064u;
        goto label_2fb064;
    }
    ctx->pc = 0x2FB05Cu;
    SET_GPR_U32(ctx, 31, 0x2FB064u);
    ctx->pc = 0x2FC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC110u, 0x2FB05Cu, 0x2FB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB064u;
label_2fb064:
    // 0x2fb064: 0x8e05066c  lw          $a1, 0x66C($s0)
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
label_2fb068:
    // 0x2fb068: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2fb06c:
    if (ctx->pc == 0x2FB06Cu) {
        ctx->pc = 0x2FB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB068u;
        // 0x2fb06c: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB070u;
        goto label_2fb070;
    }
    ctx->pc = 0x2FB068u;
    {
        const bool branch_taken_0x2fb068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB068u;
        // 0x2fb06c: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb068) {
            ctx->pc = 0x2FB0A0u;
            goto label_2fb0a0;
        }
    }
    ctx->pc = 0x2FB070u;
label_2fb070:
    // 0x2fb070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb074:
    // 0x2fb074: 0x24840920  addiu       $a0, $a0, 0x920
    ctx->pc = 0x2fb074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2336));
label_2fb078:
    // 0x2fb078: 0xc049cb6  jal         func_1272D8
label_2fb07c:
    if (ctx->pc == 0x2FB07Cu) {
        ctx->pc = 0x2FB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB078u;
        // 0x2fb07c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB080u;
        goto label_2fb080;
    }
    ctx->pc = 0x2FB078u;
    SET_GPR_U32(ctx, 31, 0x2FB080u);
    ctx->pc = 0x2FB07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB078u;
    // 0x2fb07c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FB078u, 0x2FB080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB080u;
label_2fb080:
    // 0x2fb080: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fb080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fb084:
    // 0x2fb084: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fb084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
label_2fb088:
    // 0x2fb088: 0xac60067c  sw          $zero, 0x67C($v1)
    ctx->pc = 0x2fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 0));
label_2fb08c:
    // 0x2fb08c: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x2fb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
label_2fb090:
    // 0x2fb090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb094:
    // 0x2fb094: 0xc049cb6  jal         func_1272D8
label_2fb098:
    if (ctx->pc == 0x2FB098u) {
        ctx->pc = 0x2FB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB094u;
        // 0x2fb098: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB09Cu;
        goto label_2fb09c;
    }
    ctx->pc = 0x2FB094u;
    SET_GPR_U32(ctx, 31, 0x2FB09Cu);
    ctx->pc = 0x2FB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB094u;
    // 0x2fb098: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FB094u, 0x2FB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB09Cu;
label_2fb09c:
    // 0x2fb09c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x2fb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
label_2fb0a0:
    // 0x2fb0a0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fb0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_2fb0a4:
    // 0x2fb0a4: 0x8e050670  lw          $a1, 0x670($s0)
    ctx->pc = 0x2fb0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_2fb0a8:
    // 0x2fb0a8: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
label_2fb0ac:
    if (ctx->pc == 0x2FB0ACu) {
        ctx->pc = 0x2FB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0A8u;
        // 0x2fb0ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB0B0u;
        goto label_2fb0b0;
    }
    ctx->pc = 0x2FB0A8u;
    {
        const bool branch_taken_0x2fb0a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2FB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0A8u;
        // 0x2fb0ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0a8) {
            ctx->pc = 0x2FB0E8u;
            goto label_2fb0e8;
        }
    }
    ctx->pc = 0x2FB0B0u;
label_2fb0b0:
    // 0x2fb0b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fb0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb0b4:
    // 0x2fb0b4: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x2fb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_2fb0b8:
    // 0x2fb0b8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2fb0bc:
    if (ctx->pc == 0x2FB0BCu) {
        ctx->pc = 0x2FB0C0u;
        goto label_2fb0c0;
    }
    ctx->pc = 0x2FB0B8u;
    {
        const bool branch_taken_0x2fb0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fb0b8) {
            ctx->pc = 0x2FB0CCu;
            goto label_2fb0cc;
        }
    }
    ctx->pc = 0x2FB0C0u;
label_2fb0c0:
    // 0x2fb0c0: 0xc0bf044  jal         func_2FC110
label_2fb0c4:
    if (ctx->pc == 0x2FB0C4u) {
        ctx->pc = 0x2FB0C8u;
        goto label_2fb0c8;
    }
    ctx->pc = 0x2FB0C0u;
    SET_GPR_U32(ctx, 31, 0x2FB0C8u);
    ctx->pc = 0x2FC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC110u, 0x2FB0C0u, 0x2FB0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB0C8u;
label_2fb0c8:
    // 0x2fb0c8: 0x8e050670  lw          $a1, 0x670($s0)
    ctx->pc = 0x2fb0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_2fb0cc:
    // 0x2fb0cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2fb0d0:
    if (ctx->pc == 0x2FB0D0u) {
        ctx->pc = 0x2FB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0CCu;
        // 0x2fb0d0: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB0D4u;
        goto label_2fb0d4;
    }
    ctx->pc = 0x2FB0CCu;
    {
        const bool branch_taken_0x2fb0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0CCu;
        // 0x2fb0d0: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0cc) {
            ctx->pc = 0x2FB0E8u;
            goto label_2fb0e8;
        }
    }
    ctx->pc = 0x2FB0D4u;
label_2fb0d4:
    // 0x2fb0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb0d8:
    // 0x2fb0d8: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2fb0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2fb0dc:
    // 0x2fb0dc: 0xc049cb6  jal         func_1272D8
label_2fb0e0:
    if (ctx->pc == 0x2FB0E0u) {
        ctx->pc = 0x2FB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0DCu;
        // 0x2fb0e0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB0E4u;
        goto label_2fb0e4;
    }
    ctx->pc = 0x2FB0DCu;
    SET_GPR_U32(ctx, 31, 0x2FB0E4u);
    ctx->pc = 0x2FB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB0DCu;
    // 0x2fb0e0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FB0DCu, 0x2FB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB0E4u;
label_2fb0e4:
    // 0x2fb0e4: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x2fb0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
label_2fb0e8:
    // 0x2fb0e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fb0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb0ec:
    // 0x2fb0ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fb0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb0f0:
    // 0x2fb0f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fb0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb0f4:
    // 0x2fb0f4: 0x3e00008  jr          $ra
label_2fb0f8:
    if (ctx->pc == 0x2FB0F8u) {
        ctx->pc = 0x2FB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0F4u;
        // 0x2fb0f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB0FCu;
        goto label_2fb0fc;
    }
    ctx->pc = 0x2FB0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0F4u;
        // 0x2fb0f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0FCu;
label_2fb0fc:
    // 0x2fb0fc: 0x0  nop
    ctx->pc = 0x2fb0fcu;
    // NOP
label_2fb100:
    // 0x2fb100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fb104:
    // 0x2fb104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fb108:
    // 0x2fb108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fb108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2fb10c:
    // 0x2fb10c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fb10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fb110:
    // 0x2fb110: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fb110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fb114:
    // 0x2fb114: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fb114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fb118:
    // 0x2fb118: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2fb118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2fb11c:
    // 0x2fb11c: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x2fb11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_2fb120:
    // 0x2fb120: 0x10400130  beqz        $v0, . + 4 + (0x130 << 2)
label_2fb124:
    if (ctx->pc == 0x2FB124u) {
        ctx->pc = 0x2FB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB120u;
        // 0x2fb124: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB128u;
        goto label_2fb128;
    }
    ctx->pc = 0x2FB120u;
    {
        const bool branch_taken_0x2fb120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB120u;
        // 0x2fb124: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb120) {
            ctx->pc = 0x2FB5E4u;
            goto label_2fb5e4;
        }
    }
    ctx->pc = 0x2FB128u;
label_2fb128:
    // 0x2fb128: 0x32130008  andi        $s3, $s0, 0x8
    ctx->pc = 0x2fb128u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_2fb12c:
    // 0x2fb12c: 0x12600079  beqz        $s3, . + 4 + (0x79 << 2)
label_2fb130:
    if (ctx->pc == 0x2FB130u) {
        ctx->pc = 0x2FB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB12Cu;
        // 0x2fb130: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB134u;
        goto label_2fb134;
    }
    ctx->pc = 0x2FB12Cu;
    {
        const bool branch_taken_0x2fb12c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB12Cu;
        // 0x2fb130: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb12c) {
            ctx->pc = 0x2FB314u;
            goto label_2fb314;
        }
    }
    ctx->pc = 0x2FB134u;
label_2fb134:
    // 0x2fb134: 0x2c620065  sltiu       $v0, $v1, 0x65
    ctx->pc = 0x2fb134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_2fb138:
    // 0x2fb138: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_2fb13c:
    if (ctx->pc == 0x2FB13Cu) {
        ctx->pc = 0x2FB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB138u;
        // 0x2fb13c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB140u;
        goto label_2fb140;
    }
    ctx->pc = 0x2FB138u;
    {
        const bool branch_taken_0x2fb138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB138u;
        // 0x2fb13c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb138) {
            ctx->pc = 0x2FB314u;
            goto label_2fb314;
        }
    }
    ctx->pc = 0x2FB140u;
label_2fb140:
    // 0x2fb140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fb140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2fb144:
    // 0x2fb144: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2fb144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
label_2fb148:
    // 0x2fb148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fb148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb14c:
    // 0x2fb14c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb150:
    // 0x2fb150: 0x800008  jr          $a0
label_2fb154:
    if (ctx->pc == 0x2FB154u) {
        ctx->pc = 0x2FB158u;
        goto label_2fb158;
    }
    ctx->pc = 0x2FB150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FB158u: goto label_2fb158;
            case 0x2FB168u: goto label_2fb168;
            case 0x2FB178u: goto label_2fb178;
            case 0x2FB188u: goto label_2fb188;
            case 0x2FB198u: goto label_2fb198;
            case 0x2FB1A8u: goto label_2fb1a8;
            case 0x2FB1B0u: goto label_2fb1b0;
            case 0x2FB1C0u: goto label_2fb1c0;
            case 0x2FB1D0u: goto label_2fb1d0;
            case 0x2FB1E0u: goto label_2fb1e0;
            case 0x2FB1F0u: goto label_2fb1f0;
            case 0x2FB200u: goto label_2fb200;
            case 0x2FB210u: goto label_2fb210;
            case 0x2FB220u: goto label_2fb220;
            case 0x2FB230u: goto label_2fb230;
            case 0x2FB240u: goto label_2fb240;
            case 0x2FB250u: goto label_2fb250;
            case 0x2FB260u: goto label_2fb260;
            case 0x2FB270u: goto label_2fb270;
            case 0x2FB280u: goto label_2fb280;
            case 0x2FB290u: goto label_2fb290;
            case 0x2FB2A0u: goto label_2fb2a0;
            case 0x2FB2B0u: goto label_2fb2b0;
            case 0x2FB2C0u: goto label_2fb2c0;
            case 0x2FB2D0u: goto label_2fb2d0;
            case 0x2FB2E0u: goto label_2fb2e0;
            case 0x2FB2FCu: goto label_2fb2fc;
            case 0x2FB30Cu: goto label_2fb30c;
            case 0x2FB314u: goto label_2fb314;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB150u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FB158u;
label_2fb158:
    // 0x2fb158: 0xc0bf064  jal         func_2FC190
label_2fb15c:
    if (ctx->pc == 0x2FB15Cu) {
        ctx->pc = 0x2FB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB158u;
        // 0x2fb15c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB160u;
        goto label_2fb160;
    }
    ctx->pc = 0x2FB158u;
    SET_GPR_U32(ctx, 31, 0x2FB160u);
    ctx->pc = 0x2FB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB158u;
    // 0x2fb15c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB158u, 0x2FB160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB160u;
label_2fb160:
    // 0x2fb160: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2fb164:
    if (ctx->pc == 0x2FB164u) {
        ctx->pc = 0x2FB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB160u;
        // 0x2fb164: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB168u;
        goto label_2fb168;
    }
    ctx->pc = 0x2FB160u;
    {
        const bool branch_taken_0x2fb160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB160u;
        // 0x2fb164: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb160) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB168u;
label_2fb168:
    // 0x2fb168: 0xc0bf064  jal         func_2FC190
label_2fb16c:
    if (ctx->pc == 0x2FB16Cu) {
        ctx->pc = 0x2FB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB168u;
        // 0x2fb16c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB170u;
        goto label_2fb170;
    }
    ctx->pc = 0x2FB168u;
    SET_GPR_U32(ctx, 31, 0x2FB170u);
    ctx->pc = 0x2FB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB168u;
    // 0x2fb16c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB168u, 0x2FB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB170u;
label_2fb170:
    // 0x2fb170: 0x10000069  b           . + 4 + (0x69 << 2)
label_2fb174:
    if (ctx->pc == 0x2FB174u) {
        ctx->pc = 0x2FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB170u;
        // 0x2fb174: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB178u;
        goto label_2fb178;
    }
    ctx->pc = 0x2FB170u;
    {
        const bool branch_taken_0x2fb170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB170u;
        // 0x2fb174: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb170) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB178u;
label_2fb178:
    // 0x2fb178: 0xc0bf064  jal         func_2FC190
label_2fb17c:
    if (ctx->pc == 0x2FB17Cu) {
        ctx->pc = 0x2FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB178u;
        // 0x2fb17c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB180u;
        goto label_2fb180;
    }
    ctx->pc = 0x2FB178u;
    SET_GPR_U32(ctx, 31, 0x2FB180u);
    ctx->pc = 0x2FB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB178u;
    // 0x2fb17c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB178u, 0x2FB180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB180u;
label_2fb180:
    // 0x2fb180: 0x10000065  b           . + 4 + (0x65 << 2)
label_2fb184:
    if (ctx->pc == 0x2FB184u) {
        ctx->pc = 0x2FB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB180u;
        // 0x2fb184: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB188u;
        goto label_2fb188;
    }
    ctx->pc = 0x2FB180u;
    {
        const bool branch_taken_0x2fb180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB180u;
        // 0x2fb184: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb180) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB188u;
label_2fb188:
    // 0x2fb188: 0xc0bf064  jal         func_2FC190
label_2fb18c:
    if (ctx->pc == 0x2FB18Cu) {
        ctx->pc = 0x2FB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB188u;
        // 0x2fb18c: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB190u;
        goto label_2fb190;
    }
    ctx->pc = 0x2FB188u;
    SET_GPR_U32(ctx, 31, 0x2FB190u);
    ctx->pc = 0x2FB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB188u;
    // 0x2fb18c: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB188u, 0x2FB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB190u;
label_2fb190:
    // 0x2fb190: 0x10000061  b           . + 4 + (0x61 << 2)
label_2fb194:
    if (ctx->pc == 0x2FB194u) {
        ctx->pc = 0x2FB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB190u;
        // 0x2fb194: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB198u;
        goto label_2fb198;
    }
    ctx->pc = 0x2FB190u;
    {
        const bool branch_taken_0x2fb190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB190u;
        // 0x2fb194: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb190) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB198u;
label_2fb198:
    // 0x2fb198: 0xc0bf064  jal         func_2FC190
label_2fb19c:
    if (ctx->pc == 0x2FB19Cu) {
        ctx->pc = 0x2FB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB198u;
        // 0x2fb19c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1A0u;
        goto label_2fb1a0;
    }
    ctx->pc = 0x2FB198u;
    SET_GPR_U32(ctx, 31, 0x2FB1A0u);
    ctx->pc = 0x2FB19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB198u;
    // 0x2fb19c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB198u, 0x2FB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1A0u;
label_2fb1a0:
    // 0x2fb1a0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2fb1a4:
    if (ctx->pc == 0x2FB1A4u) {
        ctx->pc = 0x2FB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1A0u;
        // 0x2fb1a4: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1A8u;
        goto label_2fb1a8;
    }
    ctx->pc = 0x2FB1A0u;
    {
        const bool branch_taken_0x2fb1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1A0u;
        // 0x2fb1a4: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1a0) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB1A8u;
label_2fb1a8:
    // 0x2fb1a8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2fb1ac:
    if (ctx->pc == 0x2FB1ACu) {
        ctx->pc = 0x2FB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1A8u;
        // 0x2fb1ac: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1B0u;
        goto label_2fb1b0;
    }
    ctx->pc = 0x2FB1A8u;
    {
        const bool branch_taken_0x2fb1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1A8u;
        // 0x2fb1ac: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1a8) {
            ctx->pc = 0x2FB2E4u;
            goto label_2fb2e4;
        }
    }
    ctx->pc = 0x2FB1B0u;
label_2fb1b0:
    // 0x2fb1b0: 0xc0bf064  jal         func_2FC190
label_2fb1b4:
    if (ctx->pc == 0x2FB1B4u) {
        ctx->pc = 0x2FB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1B0u;
        // 0x2fb1b4: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1B8u;
        goto label_2fb1b8;
    }
    ctx->pc = 0x2FB1B0u;
    SET_GPR_U32(ctx, 31, 0x2FB1B8u);
    ctx->pc = 0x2FB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1B0u;
    // 0x2fb1b4: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB1B0u, 0x2FB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1B8u;
label_2fb1b8:
    // 0x2fb1b8: 0x10000057  b           . + 4 + (0x57 << 2)
label_2fb1bc:
    if (ctx->pc == 0x2FB1BCu) {
        ctx->pc = 0x2FB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1B8u;
        // 0x2fb1bc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1C0u;
        goto label_2fb1c0;
    }
    ctx->pc = 0x2FB1B8u;
    {
        const bool branch_taken_0x2fb1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1B8u;
        // 0x2fb1bc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1b8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB1C0u;
label_2fb1c0:
    // 0x2fb1c0: 0xc0bf064  jal         func_2FC190
label_2fb1c4:
    if (ctx->pc == 0x2FB1C4u) {
        ctx->pc = 0x2FB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1C0u;
        // 0x2fb1c4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1C8u;
        goto label_2fb1c8;
    }
    ctx->pc = 0x2FB1C0u;
    SET_GPR_U32(ctx, 31, 0x2FB1C8u);
    ctx->pc = 0x2FB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1C0u;
    // 0x2fb1c4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB1C0u, 0x2FB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1C8u;
label_2fb1c8:
    // 0x2fb1c8: 0x10000053  b           . + 4 + (0x53 << 2)
label_2fb1cc:
    if (ctx->pc == 0x2FB1CCu) {
        ctx->pc = 0x2FB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1C8u;
        // 0x2fb1cc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1D0u;
        goto label_2fb1d0;
    }
    ctx->pc = 0x2FB1C8u;
    {
        const bool branch_taken_0x2fb1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1C8u;
        // 0x2fb1cc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1c8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB1D0u;
label_2fb1d0:
    // 0x2fb1d0: 0xc0bf064  jal         func_2FC190
label_2fb1d4:
    if (ctx->pc == 0x2FB1D4u) {
        ctx->pc = 0x2FB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1D0u;
        // 0x2fb1d4: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1D8u;
        goto label_2fb1d8;
    }
    ctx->pc = 0x2FB1D0u;
    SET_GPR_U32(ctx, 31, 0x2FB1D8u);
    ctx->pc = 0x2FB1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1D0u;
    // 0x2fb1d4: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB1D0u, 0x2FB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1D8u;
label_2fb1d8:
    // 0x2fb1d8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2fb1dc:
    if (ctx->pc == 0x2FB1DCu) {
        ctx->pc = 0x2FB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1D8u;
        // 0x2fb1dc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1E0u;
        goto label_2fb1e0;
    }
    ctx->pc = 0x2FB1D8u;
    {
        const bool branch_taken_0x2fb1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1D8u;
        // 0x2fb1dc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1d8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB1E0u;
label_2fb1e0:
    // 0x2fb1e0: 0xc0bf064  jal         func_2FC190
label_2fb1e4:
    if (ctx->pc == 0x2FB1E4u) {
        ctx->pc = 0x2FB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1E0u;
        // 0x2fb1e4: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1E8u;
        goto label_2fb1e8;
    }
    ctx->pc = 0x2FB1E0u;
    SET_GPR_U32(ctx, 31, 0x2FB1E8u);
    ctx->pc = 0x2FB1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1E0u;
    // 0x2fb1e4: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB1E0u, 0x2FB1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1E8u;
label_2fb1e8:
    // 0x2fb1e8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2fb1ec:
    if (ctx->pc == 0x2FB1ECu) {
        ctx->pc = 0x2FB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1E8u;
        // 0x2fb1ec: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1F0u;
        goto label_2fb1f0;
    }
    ctx->pc = 0x2FB1E8u;
    {
        const bool branch_taken_0x2fb1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1E8u;
        // 0x2fb1ec: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1e8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB1F0u;
label_2fb1f0:
    // 0x2fb1f0: 0xc0bf064  jal         func_2FC190
label_2fb1f4:
    if (ctx->pc == 0x2FB1F4u) {
        ctx->pc = 0x2FB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1F0u;
        // 0x2fb1f4: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1F8u;
        goto label_2fb1f8;
    }
    ctx->pc = 0x2FB1F0u;
    SET_GPR_U32(ctx, 31, 0x2FB1F8u);
    ctx->pc = 0x2FB1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1F0u;
    // 0x2fb1f4: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB1F0u, 0x2FB1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1F8u;
label_2fb1f8:
    // 0x2fb1f8: 0x10000047  b           . + 4 + (0x47 << 2)
label_2fb1fc:
    if (ctx->pc == 0x2FB1FCu) {
        ctx->pc = 0x2FB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1F8u;
        // 0x2fb1fc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB200u;
        goto label_2fb200;
    }
    ctx->pc = 0x2FB1F8u;
    {
        const bool branch_taken_0x2fb1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1F8u;
        // 0x2fb1fc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1f8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB200u;
label_2fb200:
    // 0x2fb200: 0xc0bf064  jal         func_2FC190
label_2fb204:
    if (ctx->pc == 0x2FB204u) {
        ctx->pc = 0x2FB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB200u;
        // 0x2fb204: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB208u;
        goto label_2fb208;
    }
    ctx->pc = 0x2FB200u;
    SET_GPR_U32(ctx, 31, 0x2FB208u);
    ctx->pc = 0x2FB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB200u;
    // 0x2fb204: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB200u, 0x2FB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB208u;
label_2fb208:
    // 0x2fb208: 0x10000043  b           . + 4 + (0x43 << 2)
label_2fb20c:
    if (ctx->pc == 0x2FB20Cu) {
        ctx->pc = 0x2FB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB208u;
        // 0x2fb20c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB210u;
        goto label_2fb210;
    }
    ctx->pc = 0x2FB208u;
    {
        const bool branch_taken_0x2fb208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB208u;
        // 0x2fb20c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb208) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB210u;
label_2fb210:
    // 0x2fb210: 0xc0bf064  jal         func_2FC190
label_2fb214:
    if (ctx->pc == 0x2FB214u) {
        ctx->pc = 0x2FB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB210u;
        // 0x2fb214: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB218u;
        goto label_2fb218;
    }
    ctx->pc = 0x2FB210u;
    SET_GPR_U32(ctx, 31, 0x2FB218u);
    ctx->pc = 0x2FB214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB210u;
    // 0x2fb214: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB210u, 0x2FB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB218u;
label_2fb218:
    // 0x2fb218: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2fb21c:
    if (ctx->pc == 0x2FB21Cu) {
        ctx->pc = 0x2FB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB218u;
        // 0x2fb21c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB220u;
        goto label_2fb220;
    }
    ctx->pc = 0x2FB218u;
    {
        const bool branch_taken_0x2fb218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB218u;
        // 0x2fb21c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb218) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB220u;
label_2fb220:
    // 0x2fb220: 0xc0bf064  jal         func_2FC190
label_2fb224:
    if (ctx->pc == 0x2FB224u) {
        ctx->pc = 0x2FB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB220u;
        // 0x2fb224: 0x24040081  addiu       $a0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB228u;
        goto label_2fb228;
    }
    ctx->pc = 0x2FB220u;
    SET_GPR_U32(ctx, 31, 0x2FB228u);
    ctx->pc = 0x2FB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB220u;
    // 0x2fb224: 0x24040081  addiu       $a0, $zero, 0x81 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB220u, 0x2FB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB228u;
label_2fb228:
    // 0x2fb228: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2fb22c:
    if (ctx->pc == 0x2FB22Cu) {
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB230u;
        goto label_2fb230;
    }
    ctx->pc = 0x2FB228u;
    {
        const bool branch_taken_0x2fb228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb228) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB230u;
label_2fb230:
    // 0x2fb230: 0xc0bf064  jal         func_2FC190
label_2fb234:
    if (ctx->pc == 0x2FB234u) {
        ctx->pc = 0x2FB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB230u;
        // 0x2fb234: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB238u;
        goto label_2fb238;
    }
    ctx->pc = 0x2FB230u;
    SET_GPR_U32(ctx, 31, 0x2FB238u);
    ctx->pc = 0x2FB234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB230u;
    // 0x2fb234: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB230u, 0x2FB238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB238u;
label_2fb238:
    // 0x2fb238: 0x10000037  b           . + 4 + (0x37 << 2)
label_2fb23c:
    if (ctx->pc == 0x2FB23Cu) {
        ctx->pc = 0x2FB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB238u;
        // 0x2fb23c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB240u;
        goto label_2fb240;
    }
    ctx->pc = 0x2FB238u;
    {
        const bool branch_taken_0x2fb238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB238u;
        // 0x2fb23c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb238) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB240u;
label_2fb240:
    // 0x2fb240: 0xc0bf064  jal         func_2FC190
label_2fb244:
    if (ctx->pc == 0x2FB244u) {
        ctx->pc = 0x2FB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB240u;
        // 0x2fb244: 0x24040083  addiu       $a0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB248u;
        goto label_2fb248;
    }
    ctx->pc = 0x2FB240u;
    SET_GPR_U32(ctx, 31, 0x2FB248u);
    ctx->pc = 0x2FB244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB240u;
    // 0x2fb244: 0x24040083  addiu       $a0, $zero, 0x83 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB240u, 0x2FB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB248u;
label_2fb248:
    // 0x2fb248: 0x10000033  b           . + 4 + (0x33 << 2)
label_2fb24c:
    if (ctx->pc == 0x2FB24Cu) {
        ctx->pc = 0x2FB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB248u;
        // 0x2fb24c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB250u;
        goto label_2fb250;
    }
    ctx->pc = 0x2FB248u;
    {
        const bool branch_taken_0x2fb248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB248u;
        // 0x2fb24c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb248) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB250u;
label_2fb250:
    // 0x2fb250: 0xc0bf064  jal         func_2FC190
label_2fb254:
    if (ctx->pc == 0x2FB254u) {
        ctx->pc = 0x2FB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB250u;
        // 0x2fb254: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB258u;
        goto label_2fb258;
    }
    ctx->pc = 0x2FB250u;
    SET_GPR_U32(ctx, 31, 0x2FB258u);
    ctx->pc = 0x2FB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB250u;
    // 0x2fb254: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB250u, 0x2FB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB258u;
label_2fb258:
    // 0x2fb258: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2fb25c:
    if (ctx->pc == 0x2FB25Cu) {
        ctx->pc = 0x2FB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB258u;
        // 0x2fb25c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB260u;
        goto label_2fb260;
    }
    ctx->pc = 0x2FB258u;
    {
        const bool branch_taken_0x2fb258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB258u;
        // 0x2fb25c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb258) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB260u;
label_2fb260:
    // 0x2fb260: 0xc0bf064  jal         func_2FC190
label_2fb264:
    if (ctx->pc == 0x2FB264u) {
        ctx->pc = 0x2FB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB260u;
        // 0x2fb264: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB268u;
        goto label_2fb268;
    }
    ctx->pc = 0x2FB260u;
    SET_GPR_U32(ctx, 31, 0x2FB268u);
    ctx->pc = 0x2FB264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB260u;
    // 0x2fb264: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB260u, 0x2FB268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB268u;
label_2fb268:
    // 0x2fb268: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2fb26c:
    if (ctx->pc == 0x2FB26Cu) {
        ctx->pc = 0x2FB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB268u;
        // 0x2fb26c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB270u;
        goto label_2fb270;
    }
    ctx->pc = 0x2FB268u;
    {
        const bool branch_taken_0x2fb268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB268u;
        // 0x2fb26c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb268) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB270u;
label_2fb270:
    // 0x2fb270: 0xc0bf064  jal         func_2FC190
label_2fb274:
    if (ctx->pc == 0x2FB274u) {
        ctx->pc = 0x2FB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB270u;
        // 0x2fb274: 0x24040086  addiu       $a0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB278u;
        goto label_2fb278;
    }
    ctx->pc = 0x2FB270u;
    SET_GPR_U32(ctx, 31, 0x2FB278u);
    ctx->pc = 0x2FB274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB270u;
    // 0x2fb274: 0x24040086  addiu       $a0, $zero, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB270u, 0x2FB278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB278u;
label_2fb278:
    // 0x2fb278: 0x10000027  b           . + 4 + (0x27 << 2)
label_2fb27c:
    if (ctx->pc == 0x2FB27Cu) {
        ctx->pc = 0x2FB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB278u;
        // 0x2fb27c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB280u;
        goto label_2fb280;
    }
    ctx->pc = 0x2FB278u;
    {
        const bool branch_taken_0x2fb278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB278u;
        // 0x2fb27c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb278) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB280u;
label_2fb280:
    // 0x2fb280: 0xc0bf064  jal         func_2FC190
label_2fb284:
    if (ctx->pc == 0x2FB284u) {
        ctx->pc = 0x2FB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB280u;
        // 0x2fb284: 0x24040087  addiu       $a0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB288u;
        goto label_2fb288;
    }
    ctx->pc = 0x2FB280u;
    SET_GPR_U32(ctx, 31, 0x2FB288u);
    ctx->pc = 0x2FB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB280u;
    // 0x2fb284: 0x24040087  addiu       $a0, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB280u, 0x2FB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB288u;
label_2fb288:
    // 0x2fb288: 0x10000023  b           . + 4 + (0x23 << 2)
label_2fb28c:
    if (ctx->pc == 0x2FB28Cu) {
        ctx->pc = 0x2FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB288u;
        // 0x2fb28c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB290u;
        goto label_2fb290;
    }
    ctx->pc = 0x2FB288u;
    {
        const bool branch_taken_0x2fb288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB288u;
        // 0x2fb28c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb288) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB290u;
label_2fb290:
    // 0x2fb290: 0xc0bf064  jal         func_2FC190
label_2fb294:
    if (ctx->pc == 0x2FB294u) {
        ctx->pc = 0x2FB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB290u;
        // 0x2fb294: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB298u;
        goto label_2fb298;
    }
    ctx->pc = 0x2FB290u;
    SET_GPR_U32(ctx, 31, 0x2FB298u);
    ctx->pc = 0x2FB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB290u;
    // 0x2fb294: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB290u, 0x2FB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB298u;
label_2fb298:
    // 0x2fb298: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2fb29c:
    if (ctx->pc == 0x2FB29Cu) {
        ctx->pc = 0x2FB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB298u;
        // 0x2fb29c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2A0u;
        goto label_2fb2a0;
    }
    ctx->pc = 0x2FB298u;
    {
        const bool branch_taken_0x2fb298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB298u;
        // 0x2fb29c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb298) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB2A0u;
label_2fb2a0:
    // 0x2fb2a0: 0xc0bf064  jal         func_2FC190
label_2fb2a4:
    if (ctx->pc == 0x2FB2A4u) {
        ctx->pc = 0x2FB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2A0u;
        // 0x2fb2a4: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2A8u;
        goto label_2fb2a8;
    }
    ctx->pc = 0x2FB2A0u;
    SET_GPR_U32(ctx, 31, 0x2FB2A8u);
    ctx->pc = 0x2FB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2A0u;
    // 0x2fb2a4: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB2A0u, 0x2FB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2A8u;
label_2fb2a8:
    // 0x2fb2a8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2fb2ac:
    if (ctx->pc == 0x2FB2ACu) {
        ctx->pc = 0x2FB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2A8u;
        // 0x2fb2ac: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2B0u;
        goto label_2fb2b0;
    }
    ctx->pc = 0x2FB2A8u;
    {
        const bool branch_taken_0x2fb2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2A8u;
        // 0x2fb2ac: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2a8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB2B0u;
label_2fb2b0:
    // 0x2fb2b0: 0xc0bf064  jal         func_2FC190
label_2fb2b4:
    if (ctx->pc == 0x2FB2B4u) {
        ctx->pc = 0x2FB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2B0u;
        // 0x2fb2b4: 0x2404008a  addiu       $a0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2B8u;
        goto label_2fb2b8;
    }
    ctx->pc = 0x2FB2B0u;
    SET_GPR_U32(ctx, 31, 0x2FB2B8u);
    ctx->pc = 0x2FB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2B0u;
    // 0x2fb2b4: 0x2404008a  addiu       $a0, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB2B0u, 0x2FB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2B8u;
label_2fb2b8:
    // 0x2fb2b8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2fb2bc:
    if (ctx->pc == 0x2FB2BCu) {
        ctx->pc = 0x2FB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2B8u;
        // 0x2fb2bc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2C0u;
        goto label_2fb2c0;
    }
    ctx->pc = 0x2FB2B8u;
    {
        const bool branch_taken_0x2fb2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2B8u;
        // 0x2fb2bc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2b8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB2C0u;
label_2fb2c0:
    // 0x2fb2c0: 0xc0bf064  jal         func_2FC190
label_2fb2c4:
    if (ctx->pc == 0x2FB2C4u) {
        ctx->pc = 0x2FB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2C0u;
        // 0x2fb2c4: 0x2404008b  addiu       $a0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2C8u;
        goto label_2fb2c8;
    }
    ctx->pc = 0x2FB2C0u;
    SET_GPR_U32(ctx, 31, 0x2FB2C8u);
    ctx->pc = 0x2FB2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2C0u;
    // 0x2fb2c4: 0x2404008b  addiu       $a0, $zero, 0x8B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB2C0u, 0x2FB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2C8u;
label_2fb2c8:
    // 0x2fb2c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2fb2cc:
    if (ctx->pc == 0x2FB2CCu) {
        ctx->pc = 0x2FB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2C8u;
        // 0x2fb2cc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2D0u;
        goto label_2fb2d0;
    }
    ctx->pc = 0x2FB2C8u;
    {
        const bool branch_taken_0x2fb2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2C8u;
        // 0x2fb2cc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2c8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB2D0u;
label_2fb2d0:
    // 0x2fb2d0: 0xc0bf064  jal         func_2FC190
label_2fb2d4:
    if (ctx->pc == 0x2FB2D4u) {
        ctx->pc = 0x2FB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2D0u;
        // 0x2fb2d4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2D8u;
        goto label_2fb2d8;
    }
    ctx->pc = 0x2FB2D0u;
    SET_GPR_U32(ctx, 31, 0x2FB2D8u);
    ctx->pc = 0x2FB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2D0u;
    // 0x2fb2d4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB2D0u, 0x2FB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2D8u;
label_2fb2d8:
    // 0x2fb2d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2fb2dc:
    if (ctx->pc == 0x2FB2DCu) {
        ctx->pc = 0x2FB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2D8u;
        // 0x2fb2dc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2E0u;
        goto label_2fb2e0;
    }
    ctx->pc = 0x2FB2D8u;
    {
        const bool branch_taken_0x2fb2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2D8u;
        // 0x2fb2dc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2d8) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB2E0u;
label_2fb2e0:
    // 0x2fb2e0: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x2fb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_2fb2e4:
    // 0x2fb2e4: 0xc0bf064  jal         func_2FC190
label_2fb2e8:
    if (ctx->pc == 0x2FB2E8u) {
        ctx->pc = 0x2FB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2E4u;
        // 0x2fb2e8: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2ECu;
        goto label_2fb2ec;
    }
    ctx->pc = 0x2FB2E4u;
    SET_GPR_U32(ctx, 31, 0x2FB2ECu);
    ctx->pc = 0x2FB2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2E4u;
    // 0x2fb2e8: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB2E4u, 0x2FB2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2ECu;
label_2fb2ec:
    // 0x2fb2ec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fb2f0:
    // 0x2fb2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb2f4:
    // 0x2fb2f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2fb2f8:
    if (ctx->pc == 0x2FB2F8u) {
        ctx->pc = 0x2FB2FCu;
        goto label_2fb2fc;
    }
    ctx->pc = 0x2FB2F4u;
    {
        const bool branch_taken_0x2fb2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb2f4) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB2FCu;
label_2fb2fc:
    // 0x2fb2fc: 0xc0bf064  jal         func_2FC190
label_2fb300:
    if (ctx->pc == 0x2FB300u) {
        ctx->pc = 0x2FB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2FCu;
        // 0x2fb300: 0x24040062  addiu       $a0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB304u;
        goto label_2fb304;
    }
    ctx->pc = 0x2FB2FCu;
    SET_GPR_U32(ctx, 31, 0x2FB304u);
    ctx->pc = 0x2FB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2FCu;
    // 0x2fb300: 0x24040062  addiu       $a0, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB2FCu, 0x2FB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB304u;
label_2fb304:
    // 0x2fb304: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fb308:
    if (ctx->pc == 0x2FB308u) {
        ctx->pc = 0x2FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB304u;
        // 0x2fb308: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB30Cu;
        goto label_2fb30c;
    }
    ctx->pc = 0x2FB304u;
    {
        const bool branch_taken_0x2fb304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB304u;
        // 0x2fb308: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb304) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB30Cu;
label_2fb30c:
    // 0x2fb30c: 0xc0bf064  jal         func_2FC190
label_2fb310:
    if (ctx->pc == 0x2FB310u) {
        ctx->pc = 0x2FB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB30Cu;
        // 0x2fb310: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB314u;
        goto label_2fb314;
    }
    ctx->pc = 0x2FB30Cu;
    SET_GPR_U32(ctx, 31, 0x2FB314u);
    ctx->pc = 0x2FB310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB30Cu;
    // 0x2fb310: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB30Cu, 0x2FB314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB314u;
label_2fb314:
    // 0x2fb314: 0x32110004  andi        $s1, $s0, 0x4
    ctx->pc = 0x2fb314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2fb318:
    // 0x2fb318: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
label_2fb31c:
    if (ctx->pc == 0x2FB31Cu) {
        ctx->pc = 0x2FB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB318u;
        // 0x2fb31c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB320u;
        goto label_2fb320;
    }
    ctx->pc = 0x2FB318u;
    {
        const bool branch_taken_0x2fb318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB318u;
        // 0x2fb31c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb318) {
            ctx->pc = 0x2FB4FCu;
            goto label_2fb4fc;
        }
    }
    ctx->pc = 0x2FB320u;
label_2fb320:
    // 0x2fb320: 0x2c620065  sltiu       $v0, $v1, 0x65
    ctx->pc = 0x2fb320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_2fb324:
    // 0x2fb324: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_2fb328:
    if (ctx->pc == 0x2FB328u) {
        ctx->pc = 0x2FB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB324u;
        // 0x2fb328: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB32Cu;
        goto label_2fb32c;
    }
    ctx->pc = 0x2FB324u;
    {
        const bool branch_taken_0x2fb324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB324u;
        // 0x2fb328: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb324) {
            ctx->pc = 0x2FB4FCu;
            goto label_2fb4fc;
        }
    }
    ctx->pc = 0x2FB32Cu;
label_2fb32c:
    // 0x2fb32c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fb32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2fb330:
    // 0x2fb330: 0x24422bb0  addiu       $v0, $v0, 0x2BB0
    ctx->pc = 0x2fb330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11184));
label_2fb334:
    // 0x2fb334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fb334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb338:
    // 0x2fb338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb33c:
    // 0x2fb33c: 0x800008  jr          $a0
label_2fb340:
    if (ctx->pc == 0x2FB340u) {
        ctx->pc = 0x2FB344u;
        goto label_2fb344;
    }
    ctx->pc = 0x2FB33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FB344u: goto label_2fb344;
            case 0x2FB354u: goto label_2fb354;
            case 0x2FB364u: goto label_2fb364;
            case 0x2FB374u: goto label_2fb374;
            case 0x2FB384u: goto label_2fb384;
            case 0x2FB394u: goto label_2fb394;
            case 0x2FB3A4u: goto label_2fb3a4;
            case 0x2FB3B4u: goto label_2fb3b4;
            case 0x2FB3C4u: goto label_2fb3c4;
            case 0x2FB3D4u: goto label_2fb3d4;
            case 0x2FB3E4u: goto label_2fb3e4;
            case 0x2FB3F4u: goto label_2fb3f4;
            case 0x2FB404u: goto label_2fb404;
            case 0x2FB414u: goto label_2fb414;
            case 0x2FB424u: goto label_2fb424;
            case 0x2FB434u: goto label_2fb434;
            case 0x2FB444u: goto label_2fb444;
            case 0x2FB454u: goto label_2fb454;
            case 0x2FB464u: goto label_2fb464;
            case 0x2FB474u: goto label_2fb474;
            case 0x2FB484u: goto label_2fb484;
            case 0x2FB494u: goto label_2fb494;
            case 0x2FB4A4u: goto label_2fb4a4;
            case 0x2FB4B4u: goto label_2fb4b4;
            case 0x2FB4C4u: goto label_2fb4c4;
            case 0x2FB4D4u: goto label_2fb4d4;
            case 0x2FB4E4u: goto label_2fb4e4;
            case 0x2FB4F4u: goto label_2fb4f4;
            case 0x2FB4FCu: goto label_2fb4fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB33Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FB344u;
label_2fb344:
    // 0x2fb344: 0xc0bf064  jal         func_2FC190
label_2fb348:
    if (ctx->pc == 0x2FB348u) {
        ctx->pc = 0x2FB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB344u;
        // 0x2fb348: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB34Cu;
        goto label_2fb34c;
    }
    ctx->pc = 0x2FB344u;
    SET_GPR_U32(ctx, 31, 0x2FB34Cu);
    ctx->pc = 0x2FB348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB344u;
    // 0x2fb348: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB344u, 0x2FB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB34Cu;
label_2fb34c:
    // 0x2fb34c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2fb350:
    if (ctx->pc == 0x2FB350u) {
        ctx->pc = 0x2FB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB34Cu;
        // 0x2fb350: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB354u;
        goto label_2fb354;
    }
    ctx->pc = 0x2FB34Cu;
    {
        const bool branch_taken_0x2fb34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB34Cu;
        // 0x2fb350: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb34c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB354u;
label_2fb354:
    // 0x2fb354: 0xc0bf064  jal         func_2FC190
label_2fb358:
    if (ctx->pc == 0x2FB358u) {
        ctx->pc = 0x2FB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB354u;
        // 0x2fb358: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB35Cu;
        goto label_2fb35c;
    }
    ctx->pc = 0x2FB354u;
    SET_GPR_U32(ctx, 31, 0x2FB35Cu);
    ctx->pc = 0x2FB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB354u;
    // 0x2fb358: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB354u, 0x2FB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB35Cu;
label_2fb35c:
    // 0x2fb35c: 0x10000068  b           . + 4 + (0x68 << 2)
label_2fb360:
    if (ctx->pc == 0x2FB360u) {
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB364u;
        goto label_2fb364;
    }
    ctx->pc = 0x2FB35Cu;
    {
        const bool branch_taken_0x2fb35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb35c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB364u;
label_2fb364:
    // 0x2fb364: 0xc0bf064  jal         func_2FC190
label_2fb368:
    if (ctx->pc == 0x2FB368u) {
        ctx->pc = 0x2FB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB364u;
        // 0x2fb368: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB36Cu;
        goto label_2fb36c;
    }
    ctx->pc = 0x2FB364u;
    SET_GPR_U32(ctx, 31, 0x2FB36Cu);
    ctx->pc = 0x2FB368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB364u;
    // 0x2fb368: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB364u, 0x2FB36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB36Cu;
label_2fb36c:
    // 0x2fb36c: 0x10000064  b           . + 4 + (0x64 << 2)
label_2fb370:
    if (ctx->pc == 0x2FB370u) {
        ctx->pc = 0x2FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB36Cu;
        // 0x2fb370: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB374u;
        goto label_2fb374;
    }
    ctx->pc = 0x2FB36Cu;
    {
        const bool branch_taken_0x2fb36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB36Cu;
        // 0x2fb370: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb36c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB374u;
label_2fb374:
    // 0x2fb374: 0xc0bf064  jal         func_2FC190
label_2fb378:
    if (ctx->pc == 0x2FB378u) {
        ctx->pc = 0x2FB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB374u;
        // 0x2fb378: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB37Cu;
        goto label_2fb37c;
    }
    ctx->pc = 0x2FB374u;
    SET_GPR_U32(ctx, 31, 0x2FB37Cu);
    ctx->pc = 0x2FB378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB374u;
    // 0x2fb378: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB374u, 0x2FB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB37Cu;
label_2fb37c:
    // 0x2fb37c: 0x10000060  b           . + 4 + (0x60 << 2)
label_2fb380:
    if (ctx->pc == 0x2FB380u) {
        ctx->pc = 0x2FB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB37Cu;
        // 0x2fb380: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB384u;
        goto label_2fb384;
    }
    ctx->pc = 0x2FB37Cu;
    {
        const bool branch_taken_0x2fb37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB37Cu;
        // 0x2fb380: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb37c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB384u;
label_2fb384:
    // 0x2fb384: 0xc0bf064  jal         func_2FC190
label_2fb388:
    if (ctx->pc == 0x2FB388u) {
        ctx->pc = 0x2FB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB384u;
        // 0x2fb388: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB38Cu;
        goto label_2fb38c;
    }
    ctx->pc = 0x2FB384u;
    SET_GPR_U32(ctx, 31, 0x2FB38Cu);
    ctx->pc = 0x2FB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB384u;
    // 0x2fb388: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB384u, 0x2FB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB38Cu;
label_2fb38c:
    // 0x2fb38c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2fb390:
    if (ctx->pc == 0x2FB390u) {
        ctx->pc = 0x2FB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB38Cu;
        // 0x2fb390: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB394u;
        goto label_2fb394;
    }
    ctx->pc = 0x2FB38Cu;
    {
        const bool branch_taken_0x2fb38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB38Cu;
        // 0x2fb390: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb38c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB394u;
label_2fb394:
    // 0x2fb394: 0xc0bf064  jal         func_2FC190
label_2fb398:
    if (ctx->pc == 0x2FB398u) {
        ctx->pc = 0x2FB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB394u;
        // 0x2fb398: 0x24040055  addiu       $a0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB39Cu;
        goto label_2fb39c;
    }
    ctx->pc = 0x2FB394u;
    SET_GPR_U32(ctx, 31, 0x2FB39Cu);
    ctx->pc = 0x2FB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB394u;
    // 0x2fb398: 0x24040055  addiu       $a0, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB394u, 0x2FB39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB39Cu;
label_2fb39c:
    // 0x2fb39c: 0x10000058  b           . + 4 + (0x58 << 2)
label_2fb3a0:
    if (ctx->pc == 0x2FB3A0u) {
        ctx->pc = 0x2FB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB39Cu;
        // 0x2fb3a0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3A4u;
        goto label_2fb3a4;
    }
    ctx->pc = 0x2FB39Cu;
    {
        const bool branch_taken_0x2fb39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB39Cu;
        // 0x2fb3a0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb39c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB3A4u;
label_2fb3a4:
    // 0x2fb3a4: 0xc0bf064  jal         func_2FC190
label_2fb3a8:
    if (ctx->pc == 0x2FB3A8u) {
        ctx->pc = 0x2FB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3A4u;
        // 0x2fb3a8: 0x24040056  addiu       $a0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3ACu;
        goto label_2fb3ac;
    }
    ctx->pc = 0x2FB3A4u;
    SET_GPR_U32(ctx, 31, 0x2FB3ACu);
    ctx->pc = 0x2FB3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3A4u;
    // 0x2fb3a8: 0x24040056  addiu       $a0, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB3A4u, 0x2FB3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3ACu;
label_2fb3ac:
    // 0x2fb3ac: 0x10000054  b           . + 4 + (0x54 << 2)
label_2fb3b0:
    if (ctx->pc == 0x2FB3B0u) {
        ctx->pc = 0x2FB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3ACu;
        // 0x2fb3b0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3B4u;
        goto label_2fb3b4;
    }
    ctx->pc = 0x2FB3ACu;
    {
        const bool branch_taken_0x2fb3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3ACu;
        // 0x2fb3b0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3ac) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB3B4u;
label_2fb3b4:
    // 0x2fb3b4: 0xc0bf064  jal         func_2FC190
label_2fb3b8:
    if (ctx->pc == 0x2FB3B8u) {
        ctx->pc = 0x2FB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3B4u;
        // 0x2fb3b8: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3BCu;
        goto label_2fb3bc;
    }
    ctx->pc = 0x2FB3B4u;
    SET_GPR_U32(ctx, 31, 0x2FB3BCu);
    ctx->pc = 0x2FB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3B4u;
    // 0x2fb3b8: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB3B4u, 0x2FB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3BCu;
label_2fb3bc:
    // 0x2fb3bc: 0x10000050  b           . + 4 + (0x50 << 2)
label_2fb3c0:
    if (ctx->pc == 0x2FB3C0u) {
        ctx->pc = 0x2FB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3BCu;
        // 0x2fb3c0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3C4u;
        goto label_2fb3c4;
    }
    ctx->pc = 0x2FB3BCu;
    {
        const bool branch_taken_0x2fb3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3BCu;
        // 0x2fb3c0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3bc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB3C4u;
label_2fb3c4:
    // 0x2fb3c4: 0xc0bf064  jal         func_2FC190
label_2fb3c8:
    if (ctx->pc == 0x2FB3C8u) {
        ctx->pc = 0x2FB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C4u;
        // 0x2fb3c8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3CCu;
        goto label_2fb3cc;
    }
    ctx->pc = 0x2FB3C4u;
    SET_GPR_U32(ctx, 31, 0x2FB3CCu);
    ctx->pc = 0x2FB3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3C4u;
    // 0x2fb3c8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB3C4u, 0x2FB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3CCu;
label_2fb3cc:
    // 0x2fb3cc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2fb3d0:
    if (ctx->pc == 0x2FB3D0u) {
        ctx->pc = 0x2FB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3CCu;
        // 0x2fb3d0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3D4u;
        goto label_2fb3d4;
    }
    ctx->pc = 0x2FB3CCu;
    {
        const bool branch_taken_0x2fb3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3CCu;
        // 0x2fb3d0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3cc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB3D4u;
label_2fb3d4:
    // 0x2fb3d4: 0xc0bf064  jal         func_2FC190
label_2fb3d8:
    if (ctx->pc == 0x2FB3D8u) {
        ctx->pc = 0x2FB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3D4u;
        // 0x2fb3d8: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3DCu;
        goto label_2fb3dc;
    }
    ctx->pc = 0x2FB3D4u;
    SET_GPR_U32(ctx, 31, 0x2FB3DCu);
    ctx->pc = 0x2FB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3D4u;
    // 0x2fb3d8: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB3D4u, 0x2FB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3DCu;
label_2fb3dc:
    // 0x2fb3dc: 0x10000048  b           . + 4 + (0x48 << 2)
label_2fb3e0:
    if (ctx->pc == 0x2FB3E0u) {
        ctx->pc = 0x2FB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3DCu;
        // 0x2fb3e0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3E4u;
        goto label_2fb3e4;
    }
    ctx->pc = 0x2FB3DCu;
    {
        const bool branch_taken_0x2fb3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3DCu;
        // 0x2fb3e0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3dc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB3E4u;
label_2fb3e4:
    // 0x2fb3e4: 0xc0bf064  jal         func_2FC190
label_2fb3e8:
    if (ctx->pc == 0x2FB3E8u) {
        ctx->pc = 0x2FB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3E4u;
        // 0x2fb3e8: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3ECu;
        goto label_2fb3ec;
    }
    ctx->pc = 0x2FB3E4u;
    SET_GPR_U32(ctx, 31, 0x2FB3ECu);
    ctx->pc = 0x2FB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3E4u;
    // 0x2fb3e8: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB3E4u, 0x2FB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3ECu;
label_2fb3ec:
    // 0x2fb3ec: 0x10000044  b           . + 4 + (0x44 << 2)
label_2fb3f0:
    if (ctx->pc == 0x2FB3F0u) {
        ctx->pc = 0x2FB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3ECu;
        // 0x2fb3f0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3F4u;
        goto label_2fb3f4;
    }
    ctx->pc = 0x2FB3ECu;
    {
        const bool branch_taken_0x2fb3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3ECu;
        // 0x2fb3f0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3ec) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB3F4u;
label_2fb3f4:
    // 0x2fb3f4: 0xc0bf064  jal         func_2FC190
label_2fb3f8:
    if (ctx->pc == 0x2FB3F8u) {
        ctx->pc = 0x2FB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3F4u;
        // 0x2fb3f8: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3FCu;
        goto label_2fb3fc;
    }
    ctx->pc = 0x2FB3F4u;
    SET_GPR_U32(ctx, 31, 0x2FB3FCu);
    ctx->pc = 0x2FB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3F4u;
    // 0x2fb3f8: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB3F4u, 0x2FB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3FCu;
label_2fb3fc:
    // 0x2fb3fc: 0x10000040  b           . + 4 + (0x40 << 2)
label_2fb400:
    if (ctx->pc == 0x2FB400u) {
        ctx->pc = 0x2FB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3FCu;
        // 0x2fb400: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB404u;
        goto label_2fb404;
    }
    ctx->pc = 0x2FB3FCu;
    {
        const bool branch_taken_0x2fb3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3FCu;
        // 0x2fb400: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3fc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB404u;
label_2fb404:
    // 0x2fb404: 0xc0bf064  jal         func_2FC190
label_2fb408:
    if (ctx->pc == 0x2FB408u) {
        ctx->pc = 0x2FB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB404u;
        // 0x2fb408: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB40Cu;
        goto label_2fb40c;
    }
    ctx->pc = 0x2FB404u;
    SET_GPR_U32(ctx, 31, 0x2FB40Cu);
    ctx->pc = 0x2FB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB404u;
    // 0x2fb408: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB404u, 0x2FB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB40Cu;
label_2fb40c:
    // 0x2fb40c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2fb410:
    if (ctx->pc == 0x2FB410u) {
        ctx->pc = 0x2FB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB40Cu;
        // 0x2fb410: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB414u;
        goto label_2fb414;
    }
    ctx->pc = 0x2FB40Cu;
    {
        const bool branch_taken_0x2fb40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB40Cu;
        // 0x2fb410: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb40c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB414u;
label_2fb414:
    // 0x2fb414: 0xc0bf064  jal         func_2FC190
label_2fb418:
    if (ctx->pc == 0x2FB418u) {
        ctx->pc = 0x2FB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB414u;
        // 0x2fb418: 0x24040091  addiu       $a0, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB41Cu;
        goto label_2fb41c;
    }
    ctx->pc = 0x2FB414u;
    SET_GPR_U32(ctx, 31, 0x2FB41Cu);
    ctx->pc = 0x2FB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB414u;
    // 0x2fb418: 0x24040091  addiu       $a0, $zero, 0x91 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB414u, 0x2FB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB41Cu;
label_2fb41c:
    // 0x2fb41c: 0x10000038  b           . + 4 + (0x38 << 2)
label_2fb420:
    if (ctx->pc == 0x2FB420u) {
        ctx->pc = 0x2FB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB41Cu;
        // 0x2fb420: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB424u;
        goto label_2fb424;
    }
    ctx->pc = 0x2FB41Cu;
    {
        const bool branch_taken_0x2fb41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB41Cu;
        // 0x2fb420: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb41c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB424u;
label_2fb424:
    // 0x2fb424: 0xc0bf064  jal         func_2FC190
label_2fb428:
    if (ctx->pc == 0x2FB428u) {
        ctx->pc = 0x2FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB424u;
        // 0x2fb428: 0x24040092  addiu       $a0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB42Cu;
        goto label_2fb42c;
    }
    ctx->pc = 0x2FB424u;
    SET_GPR_U32(ctx, 31, 0x2FB42Cu);
    ctx->pc = 0x2FB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB424u;
    // 0x2fb428: 0x24040092  addiu       $a0, $zero, 0x92 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB424u, 0x2FB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB42Cu;
label_2fb42c:
    // 0x2fb42c: 0x10000034  b           . + 4 + (0x34 << 2)
label_2fb430:
    if (ctx->pc == 0x2FB430u) {
        ctx->pc = 0x2FB430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB42Cu;
        // 0x2fb430: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB434u;
        goto label_2fb434;
    }
    ctx->pc = 0x2FB42Cu;
    {
        const bool branch_taken_0x2fb42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB42Cu;
        // 0x2fb430: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb42c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB434u;
label_2fb434:
    // 0x2fb434: 0xc0bf064  jal         func_2FC190
label_2fb438:
    if (ctx->pc == 0x2FB438u) {
        ctx->pc = 0x2FB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB434u;
        // 0x2fb438: 0x24040093  addiu       $a0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB43Cu;
        goto label_2fb43c;
    }
    ctx->pc = 0x2FB434u;
    SET_GPR_U32(ctx, 31, 0x2FB43Cu);
    ctx->pc = 0x2FB438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB434u;
    // 0x2fb438: 0x24040093  addiu       $a0, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB434u, 0x2FB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB43Cu;
label_2fb43c:
    // 0x2fb43c: 0x10000030  b           . + 4 + (0x30 << 2)
label_2fb440:
    if (ctx->pc == 0x2FB440u) {
        ctx->pc = 0x2FB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB43Cu;
        // 0x2fb440: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB444u;
        goto label_2fb444;
    }
    ctx->pc = 0x2FB43Cu;
    {
        const bool branch_taken_0x2fb43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB43Cu;
        // 0x2fb440: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb43c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB444u;
label_2fb444:
    // 0x2fb444: 0xc0bf064  jal         func_2FC190
label_2fb448:
    if (ctx->pc == 0x2FB448u) {
        ctx->pc = 0x2FB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB444u;
        // 0x2fb448: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB44Cu;
        goto label_2fb44c;
    }
    ctx->pc = 0x2FB444u;
    SET_GPR_U32(ctx, 31, 0x2FB44Cu);
    ctx->pc = 0x2FB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB444u;
    // 0x2fb448: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB444u, 0x2FB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB44Cu;
label_2fb44c:
    // 0x2fb44c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2fb450:
    if (ctx->pc == 0x2FB450u) {
        ctx->pc = 0x2FB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB44Cu;
        // 0x2fb450: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB454u;
        goto label_2fb454;
    }
    ctx->pc = 0x2FB44Cu;
    {
        const bool branch_taken_0x2fb44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB44Cu;
        // 0x2fb450: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb44c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB454u;
label_2fb454:
    // 0x2fb454: 0xc0bf064  jal         func_2FC190
label_2fb458:
    if (ctx->pc == 0x2FB458u) {
        ctx->pc = 0x2FB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB454u;
        // 0x2fb458: 0x24040095  addiu       $a0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB45Cu;
        goto label_2fb45c;
    }
    ctx->pc = 0x2FB454u;
    SET_GPR_U32(ctx, 31, 0x2FB45Cu);
    ctx->pc = 0x2FB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB454u;
    // 0x2fb458: 0x24040095  addiu       $a0, $zero, 0x95 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB454u, 0x2FB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB45Cu;
label_2fb45c:
    // 0x2fb45c: 0x10000028  b           . + 4 + (0x28 << 2)
label_2fb460:
    if (ctx->pc == 0x2FB460u) {
        ctx->pc = 0x2FB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB45Cu;
        // 0x2fb460: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB464u;
        goto label_2fb464;
    }
    ctx->pc = 0x2FB45Cu;
    {
        const bool branch_taken_0x2fb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB45Cu;
        // 0x2fb460: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb45c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB464u;
label_2fb464:
    // 0x2fb464: 0xc0bf064  jal         func_2FC190
label_2fb468:
    if (ctx->pc == 0x2FB468u) {
        ctx->pc = 0x2FB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB464u;
        // 0x2fb468: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB46Cu;
        goto label_2fb46c;
    }
    ctx->pc = 0x2FB464u;
    SET_GPR_U32(ctx, 31, 0x2FB46Cu);
    ctx->pc = 0x2FB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB464u;
    // 0x2fb468: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB464u, 0x2FB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB46Cu;
label_2fb46c:
    // 0x2fb46c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2fb470:
    if (ctx->pc == 0x2FB470u) {
        ctx->pc = 0x2FB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB46Cu;
        // 0x2fb470: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB474u;
        goto label_2fb474;
    }
    ctx->pc = 0x2FB46Cu;
    {
        const bool branch_taken_0x2fb46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB46Cu;
        // 0x2fb470: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb46c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB474u;
label_2fb474:
    // 0x2fb474: 0xc0bf064  jal         func_2FC190
label_2fb478:
    if (ctx->pc == 0x2FB478u) {
        ctx->pc = 0x2FB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB474u;
        // 0x2fb478: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB47Cu;
        goto label_2fb47c;
    }
    ctx->pc = 0x2FB474u;
    SET_GPR_U32(ctx, 31, 0x2FB47Cu);
    ctx->pc = 0x2FB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB474u;
    // 0x2fb478: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB474u, 0x2FB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB47Cu;
label_2fb47c:
    // 0x2fb47c: 0x10000020  b           . + 4 + (0x20 << 2)
label_2fb480:
    if (ctx->pc == 0x2FB480u) {
        ctx->pc = 0x2FB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB47Cu;
        // 0x2fb480: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB484u;
        goto label_2fb484;
    }
    ctx->pc = 0x2FB47Cu;
    {
        const bool branch_taken_0x2fb47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB47Cu;
        // 0x2fb480: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb47c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB484u;
label_2fb484:
    // 0x2fb484: 0xc0bf064  jal         func_2FC190
label_2fb488:
    if (ctx->pc == 0x2FB488u) {
        ctx->pc = 0x2FB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB484u;
        // 0x2fb488: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB48Cu;
        goto label_2fb48c;
    }
    ctx->pc = 0x2FB484u;
    SET_GPR_U32(ctx, 31, 0x2FB48Cu);
    ctx->pc = 0x2FB488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB484u;
    // 0x2fb488: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB484u, 0x2FB48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB48Cu;
label_2fb48c:
    // 0x2fb48c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2fb490:
    if (ctx->pc == 0x2FB490u) {
        ctx->pc = 0x2FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB48Cu;
        // 0x2fb490: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB494u;
        goto label_2fb494;
    }
    ctx->pc = 0x2FB48Cu;
    {
        const bool branch_taken_0x2fb48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB48Cu;
        // 0x2fb490: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb48c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB494u;
label_2fb494:
    // 0x2fb494: 0xc0bf064  jal         func_2FC190
label_2fb498:
    if (ctx->pc == 0x2FB498u) {
        ctx->pc = 0x2FB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB494u;
        // 0x2fb498: 0x24040099  addiu       $a0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB49Cu;
        goto label_2fb49c;
    }
    ctx->pc = 0x2FB494u;
    SET_GPR_U32(ctx, 31, 0x2FB49Cu);
    ctx->pc = 0x2FB498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB494u;
    // 0x2fb498: 0x24040099  addiu       $a0, $zero, 0x99 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB494u, 0x2FB49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB49Cu;
label_2fb49c:
    // 0x2fb49c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2fb4a0:
    if (ctx->pc == 0x2FB4A0u) {
        ctx->pc = 0x2FB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB49Cu;
        // 0x2fb4a0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4A4u;
        goto label_2fb4a4;
    }
    ctx->pc = 0x2FB49Cu;
    {
        const bool branch_taken_0x2fb49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB49Cu;
        // 0x2fb4a0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb49c) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4A4u;
label_2fb4a4:
    // 0x2fb4a4: 0xc0bf064  jal         func_2FC190
label_2fb4a8:
    if (ctx->pc == 0x2FB4A8u) {
        ctx->pc = 0x2FB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4A4u;
        // 0x2fb4a8: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4ACu;
        goto label_2fb4ac;
    }
    ctx->pc = 0x2FB4A4u;
    SET_GPR_U32(ctx, 31, 0x2FB4ACu);
    ctx->pc = 0x2FB4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4A4u;
    // 0x2fb4a8: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB4A4u, 0x2FB4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4ACu;
label_2fb4ac:
    // 0x2fb4ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_2fb4b0:
    if (ctx->pc == 0x2FB4B0u) {
        ctx->pc = 0x2FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4ACu;
        // 0x2fb4b0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4B4u;
        goto label_2fb4b4;
    }
    ctx->pc = 0x2FB4ACu;
    {
        const bool branch_taken_0x2fb4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4ACu;
        // 0x2fb4b0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4ac) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4B4u;
label_2fb4b4:
    // 0x2fb4b4: 0xc0bf064  jal         func_2FC190
label_2fb4b8:
    if (ctx->pc == 0x2FB4B8u) {
        ctx->pc = 0x2FB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4B4u;
        // 0x2fb4b8: 0x2404009b  addiu       $a0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4BCu;
        goto label_2fb4bc;
    }
    ctx->pc = 0x2FB4B4u;
    SET_GPR_U32(ctx, 31, 0x2FB4BCu);
    ctx->pc = 0x2FB4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4B4u;
    // 0x2fb4b8: 0x2404009b  addiu       $a0, $zero, 0x9B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB4B4u, 0x2FB4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4BCu;
label_2fb4bc:
    // 0x2fb4bc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2fb4c0:
    if (ctx->pc == 0x2FB4C0u) {
        ctx->pc = 0x2FB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4BCu;
        // 0x2fb4c0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4C4u;
        goto label_2fb4c4;
    }
    ctx->pc = 0x2FB4BCu;
    {
        const bool branch_taken_0x2fb4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4BCu;
        // 0x2fb4c0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4bc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4C4u;
label_2fb4c4:
    // 0x2fb4c4: 0xc0bf064  jal         func_2FC190
label_2fb4c8:
    if (ctx->pc == 0x2FB4C8u) {
        ctx->pc = 0x2FB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4C4u;
        // 0x2fb4c8: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4CCu;
        goto label_2fb4cc;
    }
    ctx->pc = 0x2FB4C4u;
    SET_GPR_U32(ctx, 31, 0x2FB4CCu);
    ctx->pc = 0x2FB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4C4u;
    // 0x2fb4c8: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB4C4u, 0x2FB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4CCu;
label_2fb4cc:
    // 0x2fb4cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2fb4d0:
    if (ctx->pc == 0x2FB4D0u) {
        ctx->pc = 0x2FB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4CCu;
        // 0x2fb4d0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4D4u;
        goto label_2fb4d4;
    }
    ctx->pc = 0x2FB4CCu;
    {
        const bool branch_taken_0x2fb4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4CCu;
        // 0x2fb4d0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4cc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4D4u;
label_2fb4d4:
    // 0x2fb4d4: 0xc0bf064  jal         func_2FC190
label_2fb4d8:
    if (ctx->pc == 0x2FB4D8u) {
        ctx->pc = 0x2FB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4D4u;
        // 0x2fb4d8: 0x24040071  addiu       $a0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4DCu;
        goto label_2fb4dc;
    }
    ctx->pc = 0x2FB4D4u;
    SET_GPR_U32(ctx, 31, 0x2FB4DCu);
    ctx->pc = 0x2FB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4D4u;
    // 0x2fb4d8: 0x24040071  addiu       $a0, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB4D4u, 0x2FB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4DCu;
label_2fb4dc:
    // 0x2fb4dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2fb4e0:
    if (ctx->pc == 0x2FB4E0u) {
        ctx->pc = 0x2FB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4DCu;
        // 0x2fb4e0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4E4u;
        goto label_2fb4e4;
    }
    ctx->pc = 0x2FB4DCu;
    {
        const bool branch_taken_0x2fb4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4DCu;
        // 0x2fb4e0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4dc) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4E4u;
label_2fb4e4:
    // 0x2fb4e4: 0xc0bf064  jal         func_2FC190
label_2fb4e8:
    if (ctx->pc == 0x2FB4E8u) {
        ctx->pc = 0x2FB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4E4u;
        // 0x2fb4e8: 0x24040072  addiu       $a0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4ECu;
        goto label_2fb4ec;
    }
    ctx->pc = 0x2FB4E4u;
    SET_GPR_U32(ctx, 31, 0x2FB4ECu);
    ctx->pc = 0x2FB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4E4u;
    // 0x2fb4e8: 0x24040072  addiu       $a0, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB4E4u, 0x2FB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4ECu;
label_2fb4ec:
    // 0x2fb4ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fb4f0:
    if (ctx->pc == 0x2FB4F0u) {
        ctx->pc = 0x2FB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4ECu;
        // 0x2fb4f0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4F4u;
        goto label_2fb4f4;
    }
    ctx->pc = 0x2FB4ECu;
    {
        const bool branch_taken_0x2fb4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4ECu;
        // 0x2fb4f0: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4ec) {
            ctx->pc = 0x2FB500u;
            goto label_2fb500;
        }
    }
    ctx->pc = 0x2FB4F4u;
label_2fb4f4:
    // 0x2fb4f4: 0xc0bf064  jal         func_2FC190
label_2fb4f8:
    if (ctx->pc == 0x2FB4F8u) {
        ctx->pc = 0x2FB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4F4u;
        // 0x2fb4f8: 0x24040073  addiu       $a0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4FCu;
        goto label_2fb4fc;
    }
    ctx->pc = 0x2FB4F4u;
    SET_GPR_U32(ctx, 31, 0x2FB4FCu);
    ctx->pc = 0x2FB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4F4u;
    // 0x2fb4f8: 0x24040073  addiu       $a0, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC190u, 0x2FB4F4u, 0x2FB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4FCu;
label_2fb4fc:
    // 0x2fb4fc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
label_2fb500:
    // 0x2fb500: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fb500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fb504:
    // 0x2fb504: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x2fb504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_2fb508:
    // 0x2fb508: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
label_2fb50c:
    if (ctx->pc == 0x2FB50Cu) {
        ctx->pc = 0x2FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB508u;
        // 0x2fb50c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB510u;
        goto label_2fb510;
    }
    ctx->pc = 0x2FB508u;
    {
        const bool branch_taken_0x2fb508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB508u;
        // 0x2fb50c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb508) {
            ctx->pc = 0x2FB554u;
            goto label_2fb554;
        }
    }
    ctx->pc = 0x2FB510u;
label_2fb510:
    // 0x2fb510: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fb510u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_2fb514:
    // 0x2fb514: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x2fb514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
label_2fb518:
    // 0x2fb518: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
label_2fb51c:
    if (ctx->pc == 0x2FB51Cu) {
        ctx->pc = 0x2FB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB518u;
        // 0x2fb51c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB520u;
        goto label_2fb520;
    }
    ctx->pc = 0x2FB518u;
    {
        const bool branch_taken_0x2fb518 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB518u;
        // 0x2fb51c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb518) {
            ctx->pc = 0x2FB5E4u;
            goto label_2fb5e4;
        }
    }
    ctx->pc = 0x2FB520u;
label_2fb520:
    // 0x2fb520: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fb520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb524:
    // 0x2fb524: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x2fb524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_2fb528:
    // 0x2fb528: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2fb52c:
    if (ctx->pc == 0x2FB52Cu) {
        ctx->pc = 0x2FB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB528u;
        // 0x2fb52c: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB530u;
        goto label_2fb530;
    }
    ctx->pc = 0x2FB528u;
    {
        const bool branch_taken_0x2fb528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB528u;
        // 0x2fb52c: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb528) {
            ctx->pc = 0x2FB53Cu;
            goto label_2fb53c;
        }
    }
    ctx->pc = 0x2FB530u;
label_2fb530:
    // 0x2fb530: 0xc0bf044  jal         func_2FC110
label_2fb534:
    if (ctx->pc == 0x2FB534u) {
        ctx->pc = 0x2FB538u;
        goto label_2fb538;
    }
    ctx->pc = 0x2FB530u;
    SET_GPR_U32(ctx, 31, 0x2FB538u);
    ctx->pc = 0x2FC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC110u, 0x2FB530u, 0x2FB538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB538u;
label_2fb538:
    // 0x2fb538: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fb538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
label_2fb53c:
    // 0x2fb53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb540:
    // 0x2fb540: 0x248408e8  addiu       $a0, $a0, 0x8E8
    ctx->pc = 0x2fb540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
label_2fb544:
    // 0x2fb544: 0xc049cb6  jal         func_1272D8
label_2fb548:
    if (ctx->pc == 0x2FB548u) {
        ctx->pc = 0x2FB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB544u;
        // 0x2fb548: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB54Cu;
        goto label_2fb54c;
    }
    ctx->pc = 0x2FB544u;
    SET_GPR_U32(ctx, 31, 0x2FB54Cu);
    ctx->pc = 0x2FB548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB544u;
    // 0x2fb548: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FB544u, 0x2FB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB54Cu;
label_2fb54c:
    // 0x2fb54c: 0x10000025  b           . + 4 + (0x25 << 2)
label_2fb550:
    if (ctx->pc == 0x2FB550u) {
        ctx->pc = 0x2FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB54Cu;
        // 0x2fb550: 0xae000678  sw          $zero, 0x678($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB554u;
        goto label_2fb554;
    }
    ctx->pc = 0x2FB54Cu;
    {
        const bool branch_taken_0x2fb54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB54Cu;
        // 0x2fb550: 0xae000678  sw          $zero, 0x678($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb54c) {
            ctx->pc = 0x2FB5E4u;
            goto label_2fb5e4;
        }
    }
    ctx->pc = 0x2FB554u;
label_2fb554:
    // 0x2fb554: 0x8e02066c  lw          $v0, 0x66C($s0)
    ctx->pc = 0x2fb554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
label_2fb558:
    // 0x2fb558: 0x58400011  blezl       $v0, . + 4 + (0x11 << 2)
label_2fb55c:
    if (ctx->pc == 0x2FB55Cu) {
        ctx->pc = 0x2FB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB558u;
        // 0x2fb55c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB560u;
        goto label_2fb560;
    }
    ctx->pc = 0x2FB558u;
    {
        const bool branch_taken_0x2fb558 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fb558) {
            ctx->pc = 0x2FB55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB558u;
            // 0x2fb55c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB5A0u;
            goto label_2fb5a0;
        }
    }
    ctx->pc = 0x2FB560u;
label_2fb560:
    // 0x2fb560: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_2fb564:
    if (ctx->pc == 0x2FB564u) {
        ctx->pc = 0x2FB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB560u;
        // 0x2fb564: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB568u;
        goto label_2fb568;
    }
    ctx->pc = 0x2FB560u;
    {
        const bool branch_taken_0x2fb560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB560u;
        // 0x2fb564: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb560) {
            ctx->pc = 0x2FB59Cu;
            goto label_2fb59c;
        }
    }
    ctx->pc = 0x2FB568u;
label_2fb568:
    // 0x2fb568: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fb568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb56c:
    // 0x2fb56c: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x2fb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_2fb570:
    // 0x2fb570: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2fb574:
    if (ctx->pc == 0x2FB574u) {
        ctx->pc = 0x2FB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB570u;
        // 0x2fb574: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB578u;
        goto label_2fb578;
    }
    ctx->pc = 0x2FB570u;
    {
        const bool branch_taken_0x2fb570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB570u;
        // 0x2fb574: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb570) {
            ctx->pc = 0x2FB584u;
            goto label_2fb584;
        }
    }
    ctx->pc = 0x2FB578u;
label_2fb578:
    // 0x2fb578: 0xc0bf044  jal         func_2FC110
label_2fb57c:
    if (ctx->pc == 0x2FB57Cu) {
        ctx->pc = 0x2FB580u;
        goto label_2fb580;
    }
    ctx->pc = 0x2FB578u;
    SET_GPR_U32(ctx, 31, 0x2FB580u);
    ctx->pc = 0x2FC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC110u, 0x2FB578u, 0x2FB580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB580u;
label_2fb580:
    // 0x2fb580: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fb580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
label_2fb584:
    // 0x2fb584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb588:
    // 0x2fb588: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x2fb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
label_2fb58c:
    // 0x2fb58c: 0xc049cb6  jal         func_1272D8
label_2fb590:
    if (ctx->pc == 0x2FB590u) {
        ctx->pc = 0x2FB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB58Cu;
        // 0x2fb590: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB594u;
        goto label_2fb594;
    }
    ctx->pc = 0x2FB58Cu;
    SET_GPR_U32(ctx, 31, 0x2FB594u);
    ctx->pc = 0x2FB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB58Cu;
    // 0x2fb590: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FB58Cu, 0x2FB594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB594u;
label_2fb594:
    // 0x2fb594: 0x10000013  b           . + 4 + (0x13 << 2)
label_2fb598:
    if (ctx->pc == 0x2FB598u) {
        ctx->pc = 0x2FB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB594u;
        // 0x2fb598: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB59Cu;
        goto label_2fb59c;
    }
    ctx->pc = 0x2FB594u;
    {
        const bool branch_taken_0x2fb594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB594u;
        // 0x2fb598: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb594) {
            ctx->pc = 0x2FB5E4u;
            goto label_2fb5e4;
        }
    }
    ctx->pc = 0x2FB59Cu;
label_2fb59c:
    // 0x2fb59c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fb59cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_2fb5a0:
    // 0x2fb5a0: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x2fb5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_2fb5a4:
    // 0x2fb5a4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_2fb5a8:
    if (ctx->pc == 0x2FB5A8u) {
        ctx->pc = 0x2FB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5A4u;
        // 0x2fb5a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5ACu;
        goto label_2fb5ac;
    }
    ctx->pc = 0x2FB5A4u;
    {
        const bool branch_taken_0x2fb5a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5A4u;
        // 0x2fb5a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5a4) {
            ctx->pc = 0x2FB5E8u;
            goto label_2fb5e8;
        }
    }
    ctx->pc = 0x2FB5ACu;
label_2fb5ac:
    // 0x2fb5ac: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_2fb5b0:
    if (ctx->pc == 0x2FB5B0u) {
        ctx->pc = 0x2FB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5ACu;
        // 0x2fb5b0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5B4u;
        goto label_2fb5b4;
    }
    ctx->pc = 0x2FB5ACu;
    {
        const bool branch_taken_0x2fb5ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5ACu;
        // 0x2fb5b0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5ac) {
            ctx->pc = 0x2FB5E8u;
            goto label_2fb5e8;
        }
    }
    ctx->pc = 0x2FB5B4u;
label_2fb5b4:
    // 0x2fb5b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fb5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb5b8:
    // 0x2fb5b8: 0x8c430680  lw          $v1, 0x680($v0)
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_2fb5bc:
    // 0x2fb5bc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2fb5c0:
    if (ctx->pc == 0x2FB5C0u) {
        ctx->pc = 0x2FB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5BCu;
        // 0x2fb5c0: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5C4u;
        goto label_2fb5c4;
    }
    ctx->pc = 0x2FB5BCu;
    {
        const bool branch_taken_0x2fb5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5BCu;
        // 0x2fb5c0: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5bc) {
            ctx->pc = 0x2FB5D0u;
            goto label_2fb5d0;
        }
    }
    ctx->pc = 0x2FB5C4u;
label_2fb5c4:
    // 0x2fb5c4: 0xc0bf044  jal         func_2FC110
label_2fb5c8:
    if (ctx->pc == 0x2FB5C8u) {
        ctx->pc = 0x2FB5CCu;
        goto label_2fb5cc;
    }
    ctx->pc = 0x2FB5C4u;
    SET_GPR_U32(ctx, 31, 0x2FB5CCu);
    ctx->pc = 0x2FC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC110u, 0x2FB5C4u, 0x2FB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5CCu;
label_2fb5cc:
    // 0x2fb5cc: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
label_2fb5d0:
    // 0x2fb5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5d4:
    // 0x2fb5d4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2fb5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2fb5d8:
    // 0x2fb5d8: 0xc049cb6  jal         func_1272D8
label_2fb5dc:
    if (ctx->pc == 0x2FB5DCu) {
        ctx->pc = 0x2FB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5D8u;
        // 0x2fb5dc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5E0u;
        goto label_2fb5e0;
    }
    ctx->pc = 0x2FB5D8u;
    SET_GPR_U32(ctx, 31, 0x2FB5E0u);
    ctx->pc = 0x2FB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5D8u;
    // 0x2fb5dc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FB5D8u, 0x2FB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5E0u;
label_2fb5e0:
    // 0x2fb5e0: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x2fb5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
label_2fb5e4:
    // 0x2fb5e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fb5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fb5e8:
    // 0x2fb5e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2fb5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fb5ec:
    // 0x2fb5ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fb5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb5f0:
    // 0x2fb5f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fb5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb5f4:
    // 0x2fb5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fb5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb5f8:
    // 0x2fb5f8: 0x3e00008  jr          $ra
label_2fb5fc:
    if (ctx->pc == 0x2FB5FCu) {
        ctx->pc = 0x2FB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5F8u;
        // 0x2fb5fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB600u;
        goto label_fallthrough_0x2fb5f8;
    }
    ctx->pc = 0x2FB5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5F8u;
        // 0x2fb5fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fb5f8:
    ctx->pc = 0x2FB600u;
}
