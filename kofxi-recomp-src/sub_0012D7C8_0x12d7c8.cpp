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

// Function: sub_0012D7C8
// Address: 0x12d7c8 - 0x12e458
void sub_0012D7C8_0x12d7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D7C8_0x12d7c8");
#endif

    switch (ctx->pc) {
        case 0x12d7c8u: goto label_12d7c8;
        case 0x12d7ccu: goto label_12d7cc;
        case 0x12d7d0u: goto label_12d7d0;
        case 0x12d7d4u: goto label_12d7d4;
        case 0x12d7d8u: goto label_12d7d8;
        case 0x12d7dcu: goto label_12d7dc;
        case 0x12d7e0u: goto label_12d7e0;
        case 0x12d7e4u: goto label_12d7e4;
        case 0x12d7e8u: goto label_12d7e8;
        case 0x12d7ecu: goto label_12d7ec;
        case 0x12d7f0u: goto label_12d7f0;
        case 0x12d7f4u: goto label_12d7f4;
        case 0x12d7f8u: goto label_12d7f8;
        case 0x12d7fcu: goto label_12d7fc;
        case 0x12d800u: goto label_12d800;
        case 0x12d804u: goto label_12d804;
        case 0x12d808u: goto label_12d808;
        case 0x12d80cu: goto label_12d80c;
        case 0x12d810u: goto label_12d810;
        case 0x12d814u: goto label_12d814;
        case 0x12d818u: goto label_12d818;
        case 0x12d81cu: goto label_12d81c;
        case 0x12d820u: goto label_12d820;
        case 0x12d824u: goto label_12d824;
        case 0x12d828u: goto label_12d828;
        case 0x12d82cu: goto label_12d82c;
        case 0x12d830u: goto label_12d830;
        case 0x12d834u: goto label_12d834;
        case 0x12d838u: goto label_12d838;
        case 0x12d83cu: goto label_12d83c;
        case 0x12d840u: goto label_12d840;
        case 0x12d844u: goto label_12d844;
        case 0x12d848u: goto label_12d848;
        case 0x12d84cu: goto label_12d84c;
        case 0x12d850u: goto label_12d850;
        case 0x12d854u: goto label_12d854;
        case 0x12d858u: goto label_12d858;
        case 0x12d85cu: goto label_12d85c;
        case 0x12d860u: goto label_12d860;
        case 0x12d864u: goto label_12d864;
        case 0x12d868u: goto label_12d868;
        case 0x12d86cu: goto label_12d86c;
        case 0x12d870u: goto label_12d870;
        case 0x12d874u: goto label_12d874;
        case 0x12d878u: goto label_12d878;
        case 0x12d87cu: goto label_12d87c;
        case 0x12d880u: goto label_12d880;
        case 0x12d884u: goto label_12d884;
        case 0x12d888u: goto label_12d888;
        case 0x12d88cu: goto label_12d88c;
        case 0x12d890u: goto label_12d890;
        case 0x12d894u: goto label_12d894;
        case 0x12d898u: goto label_12d898;
        case 0x12d89cu: goto label_12d89c;
        case 0x12d8a0u: goto label_12d8a0;
        case 0x12d8a4u: goto label_12d8a4;
        case 0x12d8a8u: goto label_12d8a8;
        case 0x12d8acu: goto label_12d8ac;
        case 0x12d8b0u: goto label_12d8b0;
        case 0x12d8b4u: goto label_12d8b4;
        case 0x12d8b8u: goto label_12d8b8;
        case 0x12d8bcu: goto label_12d8bc;
        case 0x12d8c0u: goto label_12d8c0;
        case 0x12d8c4u: goto label_12d8c4;
        case 0x12d8c8u: goto label_12d8c8;
        case 0x12d8ccu: goto label_12d8cc;
        case 0x12d8d0u: goto label_12d8d0;
        case 0x12d8d4u: goto label_12d8d4;
        case 0x12d8d8u: goto label_12d8d8;
        case 0x12d8dcu: goto label_12d8dc;
        case 0x12d8e0u: goto label_12d8e0;
        case 0x12d8e4u: goto label_12d8e4;
        case 0x12d8e8u: goto label_12d8e8;
        case 0x12d8ecu: goto label_12d8ec;
        case 0x12d8f0u: goto label_12d8f0;
        case 0x12d8f4u: goto label_12d8f4;
        case 0x12d8f8u: goto label_12d8f8;
        case 0x12d8fcu: goto label_12d8fc;
        case 0x12d900u: goto label_12d900;
        case 0x12d904u: goto label_12d904;
        case 0x12d908u: goto label_12d908;
        case 0x12d90cu: goto label_12d90c;
        case 0x12d910u: goto label_12d910;
        case 0x12d914u: goto label_12d914;
        case 0x12d918u: goto label_12d918;
        case 0x12d91cu: goto label_12d91c;
        case 0x12d920u: goto label_12d920;
        case 0x12d924u: goto label_12d924;
        case 0x12d928u: goto label_12d928;
        case 0x12d92cu: goto label_12d92c;
        case 0x12d930u: goto label_12d930;
        case 0x12d934u: goto label_12d934;
        case 0x12d938u: goto label_12d938;
        case 0x12d93cu: goto label_12d93c;
        case 0x12d940u: goto label_12d940;
        case 0x12d944u: goto label_12d944;
        case 0x12d948u: goto label_12d948;
        case 0x12d94cu: goto label_12d94c;
        case 0x12d950u: goto label_12d950;
        case 0x12d954u: goto label_12d954;
        case 0x12d958u: goto label_12d958;
        case 0x12d95cu: goto label_12d95c;
        case 0x12d960u: goto label_12d960;
        case 0x12d964u: goto label_12d964;
        case 0x12d968u: goto label_12d968;
        case 0x12d96cu: goto label_12d96c;
        case 0x12d970u: goto label_12d970;
        case 0x12d974u: goto label_12d974;
        case 0x12d978u: goto label_12d978;
        case 0x12d97cu: goto label_12d97c;
        case 0x12d980u: goto label_12d980;
        case 0x12d984u: goto label_12d984;
        case 0x12d988u: goto label_12d988;
        case 0x12d98cu: goto label_12d98c;
        case 0x12d990u: goto label_12d990;
        case 0x12d994u: goto label_12d994;
        case 0x12d998u: goto label_12d998;
        case 0x12d99cu: goto label_12d99c;
        case 0x12d9a0u: goto label_12d9a0;
        case 0x12d9a4u: goto label_12d9a4;
        case 0x12d9a8u: goto label_12d9a8;
        case 0x12d9acu: goto label_12d9ac;
        case 0x12d9b0u: goto label_12d9b0;
        case 0x12d9b4u: goto label_12d9b4;
        case 0x12d9b8u: goto label_12d9b8;
        case 0x12d9bcu: goto label_12d9bc;
        case 0x12d9c0u: goto label_12d9c0;
        case 0x12d9c4u: goto label_12d9c4;
        case 0x12d9c8u: goto label_12d9c8;
        case 0x12d9ccu: goto label_12d9cc;
        case 0x12d9d0u: goto label_12d9d0;
        case 0x12d9d4u: goto label_12d9d4;
        case 0x12d9d8u: goto label_12d9d8;
        case 0x12d9dcu: goto label_12d9dc;
        case 0x12d9e0u: goto label_12d9e0;
        case 0x12d9e4u: goto label_12d9e4;
        case 0x12d9e8u: goto label_12d9e8;
        case 0x12d9ecu: goto label_12d9ec;
        case 0x12d9f0u: goto label_12d9f0;
        case 0x12d9f4u: goto label_12d9f4;
        case 0x12d9f8u: goto label_12d9f8;
        case 0x12d9fcu: goto label_12d9fc;
        case 0x12da00u: goto label_12da00;
        case 0x12da04u: goto label_12da04;
        case 0x12da08u: goto label_12da08;
        case 0x12da0cu: goto label_12da0c;
        case 0x12da10u: goto label_12da10;
        case 0x12da14u: goto label_12da14;
        case 0x12da18u: goto label_12da18;
        case 0x12da1cu: goto label_12da1c;
        case 0x12da20u: goto label_12da20;
        case 0x12da24u: goto label_12da24;
        case 0x12da28u: goto label_12da28;
        case 0x12da2cu: goto label_12da2c;
        case 0x12da30u: goto label_12da30;
        case 0x12da34u: goto label_12da34;
        case 0x12da38u: goto label_12da38;
        case 0x12da3cu: goto label_12da3c;
        case 0x12da40u: goto label_12da40;
        case 0x12da44u: goto label_12da44;
        case 0x12da48u: goto label_12da48;
        case 0x12da4cu: goto label_12da4c;
        case 0x12da50u: goto label_12da50;
        case 0x12da54u: goto label_12da54;
        case 0x12da58u: goto label_12da58;
        case 0x12da5cu: goto label_12da5c;
        case 0x12da60u: goto label_12da60;
        case 0x12da64u: goto label_12da64;
        case 0x12da68u: goto label_12da68;
        case 0x12da6cu: goto label_12da6c;
        case 0x12da70u: goto label_12da70;
        case 0x12da74u: goto label_12da74;
        case 0x12da78u: goto label_12da78;
        case 0x12da7cu: goto label_12da7c;
        case 0x12da80u: goto label_12da80;
        case 0x12da84u: goto label_12da84;
        case 0x12da88u: goto label_12da88;
        case 0x12da8cu: goto label_12da8c;
        case 0x12da90u: goto label_12da90;
        case 0x12da94u: goto label_12da94;
        case 0x12da98u: goto label_12da98;
        case 0x12da9cu: goto label_12da9c;
        case 0x12daa0u: goto label_12daa0;
        case 0x12daa4u: goto label_12daa4;
        case 0x12daa8u: goto label_12daa8;
        case 0x12daacu: goto label_12daac;
        case 0x12dab0u: goto label_12dab0;
        case 0x12dab4u: goto label_12dab4;
        case 0x12dab8u: goto label_12dab8;
        case 0x12dabcu: goto label_12dabc;
        case 0x12dac0u: goto label_12dac0;
        case 0x12dac4u: goto label_12dac4;
        case 0x12dac8u: goto label_12dac8;
        case 0x12daccu: goto label_12dacc;
        case 0x12dad0u: goto label_12dad0;
        case 0x12dad4u: goto label_12dad4;
        case 0x12dad8u: goto label_12dad8;
        case 0x12dadcu: goto label_12dadc;
        case 0x12dae0u: goto label_12dae0;
        case 0x12dae4u: goto label_12dae4;
        case 0x12dae8u: goto label_12dae8;
        case 0x12daecu: goto label_12daec;
        case 0x12daf0u: goto label_12daf0;
        case 0x12daf4u: goto label_12daf4;
        case 0x12daf8u: goto label_12daf8;
        case 0x12dafcu: goto label_12dafc;
        case 0x12db00u: goto label_12db00;
        case 0x12db04u: goto label_12db04;
        case 0x12db08u: goto label_12db08;
        case 0x12db0cu: goto label_12db0c;
        case 0x12db10u: goto label_12db10;
        case 0x12db14u: goto label_12db14;
        case 0x12db18u: goto label_12db18;
        case 0x12db1cu: goto label_12db1c;
        case 0x12db20u: goto label_12db20;
        case 0x12db24u: goto label_12db24;
        case 0x12db28u: goto label_12db28;
        case 0x12db2cu: goto label_12db2c;
        case 0x12db30u: goto label_12db30;
        case 0x12db34u: goto label_12db34;
        case 0x12db38u: goto label_12db38;
        case 0x12db3cu: goto label_12db3c;
        case 0x12db40u: goto label_12db40;
        case 0x12db44u: goto label_12db44;
        case 0x12db48u: goto label_12db48;
        case 0x12db4cu: goto label_12db4c;
        case 0x12db50u: goto label_12db50;
        case 0x12db54u: goto label_12db54;
        case 0x12db58u: goto label_12db58;
        case 0x12db5cu: goto label_12db5c;
        case 0x12db60u: goto label_12db60;
        case 0x12db64u: goto label_12db64;
        case 0x12db68u: goto label_12db68;
        case 0x12db6cu: goto label_12db6c;
        case 0x12db70u: goto label_12db70;
        case 0x12db74u: goto label_12db74;
        case 0x12db78u: goto label_12db78;
        case 0x12db7cu: goto label_12db7c;
        case 0x12db80u: goto label_12db80;
        case 0x12db84u: goto label_12db84;
        case 0x12db88u: goto label_12db88;
        case 0x12db8cu: goto label_12db8c;
        case 0x12db90u: goto label_12db90;
        case 0x12db94u: goto label_12db94;
        case 0x12db98u: goto label_12db98;
        case 0x12db9cu: goto label_12db9c;
        case 0x12dba0u: goto label_12dba0;
        case 0x12dba4u: goto label_12dba4;
        case 0x12dba8u: goto label_12dba8;
        case 0x12dbacu: goto label_12dbac;
        case 0x12dbb0u: goto label_12dbb0;
        case 0x12dbb4u: goto label_12dbb4;
        case 0x12dbb8u: goto label_12dbb8;
        case 0x12dbbcu: goto label_12dbbc;
        case 0x12dbc0u: goto label_12dbc0;
        case 0x12dbc4u: goto label_12dbc4;
        case 0x12dbc8u: goto label_12dbc8;
        case 0x12dbccu: goto label_12dbcc;
        case 0x12dbd0u: goto label_12dbd0;
        case 0x12dbd4u: goto label_12dbd4;
        case 0x12dbd8u: goto label_12dbd8;
        case 0x12dbdcu: goto label_12dbdc;
        case 0x12dbe0u: goto label_12dbe0;
        case 0x12dbe4u: goto label_12dbe4;
        case 0x12dbe8u: goto label_12dbe8;
        case 0x12dbecu: goto label_12dbec;
        case 0x12dbf0u: goto label_12dbf0;
        case 0x12dbf4u: goto label_12dbf4;
        case 0x12dbf8u: goto label_12dbf8;
        case 0x12dbfcu: goto label_12dbfc;
        case 0x12dc00u: goto label_12dc00;
        case 0x12dc04u: goto label_12dc04;
        case 0x12dc08u: goto label_12dc08;
        case 0x12dc0cu: goto label_12dc0c;
        case 0x12dc10u: goto label_12dc10;
        case 0x12dc14u: goto label_12dc14;
        case 0x12dc18u: goto label_12dc18;
        case 0x12dc1cu: goto label_12dc1c;
        case 0x12dc20u: goto label_12dc20;
        case 0x12dc24u: goto label_12dc24;
        case 0x12dc28u: goto label_12dc28;
        case 0x12dc2cu: goto label_12dc2c;
        case 0x12dc30u: goto label_12dc30;
        case 0x12dc34u: goto label_12dc34;
        case 0x12dc38u: goto label_12dc38;
        case 0x12dc3cu: goto label_12dc3c;
        case 0x12dc40u: goto label_12dc40;
        case 0x12dc44u: goto label_12dc44;
        case 0x12dc48u: goto label_12dc48;
        case 0x12dc4cu: goto label_12dc4c;
        case 0x12dc50u: goto label_12dc50;
        case 0x12dc54u: goto label_12dc54;
        case 0x12dc58u: goto label_12dc58;
        case 0x12dc5cu: goto label_12dc5c;
        case 0x12dc60u: goto label_12dc60;
        case 0x12dc64u: goto label_12dc64;
        case 0x12dc68u: goto label_12dc68;
        case 0x12dc6cu: goto label_12dc6c;
        case 0x12dc70u: goto label_12dc70;
        case 0x12dc74u: goto label_12dc74;
        case 0x12dc78u: goto label_12dc78;
        case 0x12dc7cu: goto label_12dc7c;
        case 0x12dc80u: goto label_12dc80;
        case 0x12dc84u: goto label_12dc84;
        case 0x12dc88u: goto label_12dc88;
        case 0x12dc8cu: goto label_12dc8c;
        case 0x12dc90u: goto label_12dc90;
        case 0x12dc94u: goto label_12dc94;
        case 0x12dc98u: goto label_12dc98;
        case 0x12dc9cu: goto label_12dc9c;
        case 0x12dca0u: goto label_12dca0;
        case 0x12dca4u: goto label_12dca4;
        case 0x12dca8u: goto label_12dca8;
        case 0x12dcacu: goto label_12dcac;
        case 0x12dcb0u: goto label_12dcb0;
        case 0x12dcb4u: goto label_12dcb4;
        case 0x12dcb8u: goto label_12dcb8;
        case 0x12dcbcu: goto label_12dcbc;
        case 0x12dcc0u: goto label_12dcc0;
        case 0x12dcc4u: goto label_12dcc4;
        case 0x12dcc8u: goto label_12dcc8;
        case 0x12dcccu: goto label_12dccc;
        case 0x12dcd0u: goto label_12dcd0;
        case 0x12dcd4u: goto label_12dcd4;
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dcdcu: goto label_12dcdc;
        case 0x12dce0u: goto label_12dce0;
        case 0x12dce4u: goto label_12dce4;
        case 0x12dce8u: goto label_12dce8;
        case 0x12dcecu: goto label_12dcec;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dcf4u: goto label_12dcf4;
        case 0x12dcf8u: goto label_12dcf8;
        case 0x12dcfcu: goto label_12dcfc;
        case 0x12dd00u: goto label_12dd00;
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd08u: goto label_12dd08;
        case 0x12dd0cu: goto label_12dd0c;
        case 0x12dd10u: goto label_12dd10;
        case 0x12dd14u: goto label_12dd14;
        case 0x12dd18u: goto label_12dd18;
        case 0x12dd1cu: goto label_12dd1c;
        case 0x12dd20u: goto label_12dd20;
        case 0x12dd24u: goto label_12dd24;
        case 0x12dd28u: goto label_12dd28;
        case 0x12dd2cu: goto label_12dd2c;
        case 0x12dd30u: goto label_12dd30;
        case 0x12dd34u: goto label_12dd34;
        case 0x12dd38u: goto label_12dd38;
        case 0x12dd3cu: goto label_12dd3c;
        case 0x12dd40u: goto label_12dd40;
        case 0x12dd44u: goto label_12dd44;
        case 0x12dd48u: goto label_12dd48;
        case 0x12dd4cu: goto label_12dd4c;
        case 0x12dd50u: goto label_12dd50;
        case 0x12dd54u: goto label_12dd54;
        case 0x12dd58u: goto label_12dd58;
        case 0x12dd5cu: goto label_12dd5c;
        case 0x12dd60u: goto label_12dd60;
        case 0x12dd64u: goto label_12dd64;
        case 0x12dd68u: goto label_12dd68;
        case 0x12dd6cu: goto label_12dd6c;
        case 0x12dd70u: goto label_12dd70;
        case 0x12dd74u: goto label_12dd74;
        case 0x12dd78u: goto label_12dd78;
        case 0x12dd7cu: goto label_12dd7c;
        case 0x12dd80u: goto label_12dd80;
        case 0x12dd84u: goto label_12dd84;
        case 0x12dd88u: goto label_12dd88;
        case 0x12dd8cu: goto label_12dd8c;
        case 0x12dd90u: goto label_12dd90;
        case 0x12dd94u: goto label_12dd94;
        case 0x12dd98u: goto label_12dd98;
        case 0x12dd9cu: goto label_12dd9c;
        case 0x12dda0u: goto label_12dda0;
        case 0x12dda4u: goto label_12dda4;
        case 0x12dda8u: goto label_12dda8;
        case 0x12ddacu: goto label_12ddac;
        case 0x12ddb0u: goto label_12ddb0;
        case 0x12ddb4u: goto label_12ddb4;
        case 0x12ddb8u: goto label_12ddb8;
        case 0x12ddbcu: goto label_12ddbc;
        case 0x12ddc0u: goto label_12ddc0;
        case 0x12ddc4u: goto label_12ddc4;
        case 0x12ddc8u: goto label_12ddc8;
        case 0x12ddccu: goto label_12ddcc;
        case 0x12ddd0u: goto label_12ddd0;
        case 0x12ddd4u: goto label_12ddd4;
        case 0x12ddd8u: goto label_12ddd8;
        case 0x12dddcu: goto label_12dddc;
        case 0x12dde0u: goto label_12dde0;
        case 0x12dde4u: goto label_12dde4;
        case 0x12dde8u: goto label_12dde8;
        case 0x12ddecu: goto label_12ddec;
        case 0x12ddf0u: goto label_12ddf0;
        case 0x12ddf4u: goto label_12ddf4;
        case 0x12ddf8u: goto label_12ddf8;
        case 0x12ddfcu: goto label_12ddfc;
        case 0x12de00u: goto label_12de00;
        case 0x12de04u: goto label_12de04;
        case 0x12de08u: goto label_12de08;
        case 0x12de0cu: goto label_12de0c;
        case 0x12de10u: goto label_12de10;
        case 0x12de14u: goto label_12de14;
        case 0x12de18u: goto label_12de18;
        case 0x12de1cu: goto label_12de1c;
        case 0x12de20u: goto label_12de20;
        case 0x12de24u: goto label_12de24;
        case 0x12de28u: goto label_12de28;
        case 0x12de2cu: goto label_12de2c;
        case 0x12de30u: goto label_12de30;
        case 0x12de34u: goto label_12de34;
        case 0x12de38u: goto label_12de38;
        case 0x12de3cu: goto label_12de3c;
        case 0x12de40u: goto label_12de40;
        case 0x12de44u: goto label_12de44;
        case 0x12de48u: goto label_12de48;
        case 0x12de4cu: goto label_12de4c;
        case 0x12de50u: goto label_12de50;
        case 0x12de54u: goto label_12de54;
        case 0x12de58u: goto label_12de58;
        case 0x12de5cu: goto label_12de5c;
        case 0x12de60u: goto label_12de60;
        case 0x12de64u: goto label_12de64;
        case 0x12de68u: goto label_12de68;
        case 0x12de6cu: goto label_12de6c;
        case 0x12de70u: goto label_12de70;
        case 0x12de74u: goto label_12de74;
        case 0x12de78u: goto label_12de78;
        case 0x12de7cu: goto label_12de7c;
        case 0x12de80u: goto label_12de80;
        case 0x12de84u: goto label_12de84;
        case 0x12de88u: goto label_12de88;
        case 0x12de8cu: goto label_12de8c;
        case 0x12de90u: goto label_12de90;
        case 0x12de94u: goto label_12de94;
        case 0x12de98u: goto label_12de98;
        case 0x12de9cu: goto label_12de9c;
        case 0x12dea0u: goto label_12dea0;
        case 0x12dea4u: goto label_12dea4;
        case 0x12dea8u: goto label_12dea8;
        case 0x12deacu: goto label_12deac;
        case 0x12deb0u: goto label_12deb0;
        case 0x12deb4u: goto label_12deb4;
        case 0x12deb8u: goto label_12deb8;
        case 0x12debcu: goto label_12debc;
        case 0x12dec0u: goto label_12dec0;
        case 0x12dec4u: goto label_12dec4;
        case 0x12dec8u: goto label_12dec8;
        case 0x12deccu: goto label_12decc;
        case 0x12ded0u: goto label_12ded0;
        case 0x12ded4u: goto label_12ded4;
        case 0x12ded8u: goto label_12ded8;
        case 0x12dedcu: goto label_12dedc;
        case 0x12dee0u: goto label_12dee0;
        case 0x12dee4u: goto label_12dee4;
        case 0x12dee8u: goto label_12dee8;
        case 0x12deecu: goto label_12deec;
        case 0x12def0u: goto label_12def0;
        case 0x12def4u: goto label_12def4;
        case 0x12def8u: goto label_12def8;
        case 0x12defcu: goto label_12defc;
        case 0x12df00u: goto label_12df00;
        case 0x12df04u: goto label_12df04;
        case 0x12df08u: goto label_12df08;
        case 0x12df0cu: goto label_12df0c;
        case 0x12df10u: goto label_12df10;
        case 0x12df14u: goto label_12df14;
        case 0x12df18u: goto label_12df18;
        case 0x12df1cu: goto label_12df1c;
        case 0x12df20u: goto label_12df20;
        case 0x12df24u: goto label_12df24;
        case 0x12df28u: goto label_12df28;
        case 0x12df2cu: goto label_12df2c;
        case 0x12df30u: goto label_12df30;
        case 0x12df34u: goto label_12df34;
        case 0x12df38u: goto label_12df38;
        case 0x12df3cu: goto label_12df3c;
        case 0x12df40u: goto label_12df40;
        case 0x12df44u: goto label_12df44;
        case 0x12df48u: goto label_12df48;
        case 0x12df4cu: goto label_12df4c;
        case 0x12df50u: goto label_12df50;
        case 0x12df54u: goto label_12df54;
        case 0x12df58u: goto label_12df58;
        case 0x12df5cu: goto label_12df5c;
        case 0x12df60u: goto label_12df60;
        case 0x12df64u: goto label_12df64;
        case 0x12df68u: goto label_12df68;
        case 0x12df6cu: goto label_12df6c;
        case 0x12df70u: goto label_12df70;
        case 0x12df74u: goto label_12df74;
        case 0x12df78u: goto label_12df78;
        case 0x12df7cu: goto label_12df7c;
        case 0x12df80u: goto label_12df80;
        case 0x12df84u: goto label_12df84;
        case 0x12df88u: goto label_12df88;
        case 0x12df8cu: goto label_12df8c;
        case 0x12df90u: goto label_12df90;
        case 0x12df94u: goto label_12df94;
        case 0x12df98u: goto label_12df98;
        case 0x12df9cu: goto label_12df9c;
        case 0x12dfa0u: goto label_12dfa0;
        case 0x12dfa4u: goto label_12dfa4;
        case 0x12dfa8u: goto label_12dfa8;
        case 0x12dfacu: goto label_12dfac;
        case 0x12dfb0u: goto label_12dfb0;
        case 0x12dfb4u: goto label_12dfb4;
        case 0x12dfb8u: goto label_12dfb8;
        case 0x12dfbcu: goto label_12dfbc;
        case 0x12dfc0u: goto label_12dfc0;
        case 0x12dfc4u: goto label_12dfc4;
        case 0x12dfc8u: goto label_12dfc8;
        case 0x12dfccu: goto label_12dfcc;
        case 0x12dfd0u: goto label_12dfd0;
        case 0x12dfd4u: goto label_12dfd4;
        case 0x12dfd8u: goto label_12dfd8;
        case 0x12dfdcu: goto label_12dfdc;
        case 0x12dfe0u: goto label_12dfe0;
        case 0x12dfe4u: goto label_12dfe4;
        case 0x12dfe8u: goto label_12dfe8;
        case 0x12dfecu: goto label_12dfec;
        case 0x12dff0u: goto label_12dff0;
        case 0x12dff4u: goto label_12dff4;
        case 0x12dff8u: goto label_12dff8;
        case 0x12dffcu: goto label_12dffc;
        case 0x12e000u: goto label_12e000;
        case 0x12e004u: goto label_12e004;
        case 0x12e008u: goto label_12e008;
        case 0x12e00cu: goto label_12e00c;
        case 0x12e010u: goto label_12e010;
        case 0x12e014u: goto label_12e014;
        case 0x12e018u: goto label_12e018;
        case 0x12e01cu: goto label_12e01c;
        case 0x12e020u: goto label_12e020;
        case 0x12e024u: goto label_12e024;
        case 0x12e028u: goto label_12e028;
        case 0x12e02cu: goto label_12e02c;
        case 0x12e030u: goto label_12e030;
        case 0x12e034u: goto label_12e034;
        case 0x12e038u: goto label_12e038;
        case 0x12e03cu: goto label_12e03c;
        case 0x12e040u: goto label_12e040;
        case 0x12e044u: goto label_12e044;
        case 0x12e048u: goto label_12e048;
        case 0x12e04cu: goto label_12e04c;
        case 0x12e050u: goto label_12e050;
        case 0x12e054u: goto label_12e054;
        case 0x12e058u: goto label_12e058;
        case 0x12e05cu: goto label_12e05c;
        case 0x12e060u: goto label_12e060;
        case 0x12e064u: goto label_12e064;
        case 0x12e068u: goto label_12e068;
        case 0x12e06cu: goto label_12e06c;
        case 0x12e070u: goto label_12e070;
        case 0x12e074u: goto label_12e074;
        case 0x12e078u: goto label_12e078;
        case 0x12e07cu: goto label_12e07c;
        case 0x12e080u: goto label_12e080;
        case 0x12e084u: goto label_12e084;
        case 0x12e088u: goto label_12e088;
        case 0x12e08cu: goto label_12e08c;
        case 0x12e090u: goto label_12e090;
        case 0x12e094u: goto label_12e094;
        case 0x12e098u: goto label_12e098;
        case 0x12e09cu: goto label_12e09c;
        case 0x12e0a0u: goto label_12e0a0;
        case 0x12e0a4u: goto label_12e0a4;
        case 0x12e0a8u: goto label_12e0a8;
        case 0x12e0acu: goto label_12e0ac;
        case 0x12e0b0u: goto label_12e0b0;
        case 0x12e0b4u: goto label_12e0b4;
        case 0x12e0b8u: goto label_12e0b8;
        case 0x12e0bcu: goto label_12e0bc;
        case 0x12e0c0u: goto label_12e0c0;
        case 0x12e0c4u: goto label_12e0c4;
        case 0x12e0c8u: goto label_12e0c8;
        case 0x12e0ccu: goto label_12e0cc;
        case 0x12e0d0u: goto label_12e0d0;
        case 0x12e0d4u: goto label_12e0d4;
        case 0x12e0d8u: goto label_12e0d8;
        case 0x12e0dcu: goto label_12e0dc;
        case 0x12e0e0u: goto label_12e0e0;
        case 0x12e0e4u: goto label_12e0e4;
        case 0x12e0e8u: goto label_12e0e8;
        case 0x12e0ecu: goto label_12e0ec;
        case 0x12e0f0u: goto label_12e0f0;
        case 0x12e0f4u: goto label_12e0f4;
        case 0x12e0f8u: goto label_12e0f8;
        case 0x12e0fcu: goto label_12e0fc;
        case 0x12e100u: goto label_12e100;
        case 0x12e104u: goto label_12e104;
        case 0x12e108u: goto label_12e108;
        case 0x12e10cu: goto label_12e10c;
        case 0x12e110u: goto label_12e110;
        case 0x12e114u: goto label_12e114;
        case 0x12e118u: goto label_12e118;
        case 0x12e11cu: goto label_12e11c;
        case 0x12e120u: goto label_12e120;
        case 0x12e124u: goto label_12e124;
        case 0x12e128u: goto label_12e128;
        case 0x12e12cu: goto label_12e12c;
        case 0x12e130u: goto label_12e130;
        case 0x12e134u: goto label_12e134;
        case 0x12e138u: goto label_12e138;
        case 0x12e13cu: goto label_12e13c;
        case 0x12e140u: goto label_12e140;
        case 0x12e144u: goto label_12e144;
        case 0x12e148u: goto label_12e148;
        case 0x12e14cu: goto label_12e14c;
        case 0x12e150u: goto label_12e150;
        case 0x12e154u: goto label_12e154;
        case 0x12e158u: goto label_12e158;
        case 0x12e15cu: goto label_12e15c;
        case 0x12e160u: goto label_12e160;
        case 0x12e164u: goto label_12e164;
        case 0x12e168u: goto label_12e168;
        case 0x12e16cu: goto label_12e16c;
        case 0x12e170u: goto label_12e170;
        case 0x12e174u: goto label_12e174;
        case 0x12e178u: goto label_12e178;
        case 0x12e17cu: goto label_12e17c;
        case 0x12e180u: goto label_12e180;
        case 0x12e184u: goto label_12e184;
        case 0x12e188u: goto label_12e188;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e190u: goto label_12e190;
        case 0x12e194u: goto label_12e194;
        case 0x12e198u: goto label_12e198;
        case 0x12e19cu: goto label_12e19c;
        case 0x12e1a0u: goto label_12e1a0;
        case 0x12e1a4u: goto label_12e1a4;
        case 0x12e1a8u: goto label_12e1a8;
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1b0u: goto label_12e1b0;
        case 0x12e1b4u: goto label_12e1b4;
        case 0x12e1b8u: goto label_12e1b8;
        case 0x12e1bcu: goto label_12e1bc;
        case 0x12e1c0u: goto label_12e1c0;
        case 0x12e1c4u: goto label_12e1c4;
        case 0x12e1c8u: goto label_12e1c8;
        case 0x12e1ccu: goto label_12e1cc;
        case 0x12e1d0u: goto label_12e1d0;
        case 0x12e1d4u: goto label_12e1d4;
        case 0x12e1d8u: goto label_12e1d8;
        case 0x12e1dcu: goto label_12e1dc;
        case 0x12e1e0u: goto label_12e1e0;
        case 0x12e1e4u: goto label_12e1e4;
        case 0x12e1e8u: goto label_12e1e8;
        case 0x12e1ecu: goto label_12e1ec;
        case 0x12e1f0u: goto label_12e1f0;
        case 0x12e1f4u: goto label_12e1f4;
        case 0x12e1f8u: goto label_12e1f8;
        case 0x12e1fcu: goto label_12e1fc;
        case 0x12e200u: goto label_12e200;
        case 0x12e204u: goto label_12e204;
        case 0x12e208u: goto label_12e208;
        case 0x12e20cu: goto label_12e20c;
        case 0x12e210u: goto label_12e210;
        case 0x12e214u: goto label_12e214;
        case 0x12e218u: goto label_12e218;
        case 0x12e21cu: goto label_12e21c;
        case 0x12e220u: goto label_12e220;
        case 0x12e224u: goto label_12e224;
        case 0x12e228u: goto label_12e228;
        case 0x12e22cu: goto label_12e22c;
        case 0x12e230u: goto label_12e230;
        case 0x12e234u: goto label_12e234;
        case 0x12e238u: goto label_12e238;
        case 0x12e23cu: goto label_12e23c;
        case 0x12e240u: goto label_12e240;
        case 0x12e244u: goto label_12e244;
        case 0x12e248u: goto label_12e248;
        case 0x12e24cu: goto label_12e24c;
        case 0x12e250u: goto label_12e250;
        case 0x12e254u: goto label_12e254;
        case 0x12e258u: goto label_12e258;
        case 0x12e25cu: goto label_12e25c;
        case 0x12e260u: goto label_12e260;
        case 0x12e264u: goto label_12e264;
        case 0x12e268u: goto label_12e268;
        case 0x12e26cu: goto label_12e26c;
        case 0x12e270u: goto label_12e270;
        case 0x12e274u: goto label_12e274;
        case 0x12e278u: goto label_12e278;
        case 0x12e27cu: goto label_12e27c;
        case 0x12e280u: goto label_12e280;
        case 0x12e284u: goto label_12e284;
        case 0x12e288u: goto label_12e288;
        case 0x12e28cu: goto label_12e28c;
        case 0x12e290u: goto label_12e290;
        case 0x12e294u: goto label_12e294;
        case 0x12e298u: goto label_12e298;
        case 0x12e29cu: goto label_12e29c;
        case 0x12e2a0u: goto label_12e2a0;
        case 0x12e2a4u: goto label_12e2a4;
        case 0x12e2a8u: goto label_12e2a8;
        case 0x12e2acu: goto label_12e2ac;
        case 0x12e2b0u: goto label_12e2b0;
        case 0x12e2b4u: goto label_12e2b4;
        case 0x12e2b8u: goto label_12e2b8;
        case 0x12e2bcu: goto label_12e2bc;
        case 0x12e2c0u: goto label_12e2c0;
        case 0x12e2c4u: goto label_12e2c4;
        case 0x12e2c8u: goto label_12e2c8;
        case 0x12e2ccu: goto label_12e2cc;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e2d4u: goto label_12e2d4;
        case 0x12e2d8u: goto label_12e2d8;
        case 0x12e2dcu: goto label_12e2dc;
        case 0x12e2e0u: goto label_12e2e0;
        case 0x12e2e4u: goto label_12e2e4;
        case 0x12e2e8u: goto label_12e2e8;
        case 0x12e2ecu: goto label_12e2ec;
        case 0x12e2f0u: goto label_12e2f0;
        case 0x12e2f4u: goto label_12e2f4;
        case 0x12e2f8u: goto label_12e2f8;
        case 0x12e2fcu: goto label_12e2fc;
        case 0x12e300u: goto label_12e300;
        case 0x12e304u: goto label_12e304;
        case 0x12e308u: goto label_12e308;
        case 0x12e30cu: goto label_12e30c;
        case 0x12e310u: goto label_12e310;
        case 0x12e314u: goto label_12e314;
        case 0x12e318u: goto label_12e318;
        case 0x12e31cu: goto label_12e31c;
        case 0x12e320u: goto label_12e320;
        case 0x12e324u: goto label_12e324;
        case 0x12e328u: goto label_12e328;
        case 0x12e32cu: goto label_12e32c;
        case 0x12e330u: goto label_12e330;
        case 0x12e334u: goto label_12e334;
        case 0x12e338u: goto label_12e338;
        case 0x12e33cu: goto label_12e33c;
        case 0x12e340u: goto label_12e340;
        case 0x12e344u: goto label_12e344;
        case 0x12e348u: goto label_12e348;
        case 0x12e34cu: goto label_12e34c;
        case 0x12e350u: goto label_12e350;
        case 0x12e354u: goto label_12e354;
        case 0x12e358u: goto label_12e358;
        case 0x12e35cu: goto label_12e35c;
        case 0x12e360u: goto label_12e360;
        case 0x12e364u: goto label_12e364;
        case 0x12e368u: goto label_12e368;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e370u: goto label_12e370;
        case 0x12e374u: goto label_12e374;
        case 0x12e378u: goto label_12e378;
        case 0x12e37cu: goto label_12e37c;
        case 0x12e380u: goto label_12e380;
        case 0x12e384u: goto label_12e384;
        case 0x12e388u: goto label_12e388;
        case 0x12e38cu: goto label_12e38c;
        case 0x12e390u: goto label_12e390;
        case 0x12e394u: goto label_12e394;
        case 0x12e398u: goto label_12e398;
        case 0x12e39cu: goto label_12e39c;
        case 0x12e3a0u: goto label_12e3a0;
        case 0x12e3a4u: goto label_12e3a4;
        case 0x12e3a8u: goto label_12e3a8;
        case 0x12e3acu: goto label_12e3ac;
        case 0x12e3b0u: goto label_12e3b0;
        case 0x12e3b4u: goto label_12e3b4;
        case 0x12e3b8u: goto label_12e3b8;
        case 0x12e3bcu: goto label_12e3bc;
        case 0x12e3c0u: goto label_12e3c0;
        case 0x12e3c4u: goto label_12e3c4;
        case 0x12e3c8u: goto label_12e3c8;
        case 0x12e3ccu: goto label_12e3cc;
        case 0x12e3d0u: goto label_12e3d0;
        case 0x12e3d4u: goto label_12e3d4;
        case 0x12e3d8u: goto label_12e3d8;
        case 0x12e3dcu: goto label_12e3dc;
        case 0x12e3e0u: goto label_12e3e0;
        case 0x12e3e4u: goto label_12e3e4;
        case 0x12e3e8u: goto label_12e3e8;
        case 0x12e3ecu: goto label_12e3ec;
        case 0x12e3f0u: goto label_12e3f0;
        case 0x12e3f4u: goto label_12e3f4;
        case 0x12e3f8u: goto label_12e3f8;
        case 0x12e3fcu: goto label_12e3fc;
        case 0x12e400u: goto label_12e400;
        case 0x12e404u: goto label_12e404;
        case 0x12e408u: goto label_12e408;
        case 0x12e40cu: goto label_12e40c;
        case 0x12e410u: goto label_12e410;
        case 0x12e414u: goto label_12e414;
        case 0x12e418u: goto label_12e418;
        case 0x12e41cu: goto label_12e41c;
        case 0x12e420u: goto label_12e420;
        case 0x12e424u: goto label_12e424;
        case 0x12e428u: goto label_12e428;
        case 0x12e42cu: goto label_12e42c;
        case 0x12e430u: goto label_12e430;
        case 0x12e434u: goto label_12e434;
        case 0x12e438u: goto label_12e438;
        case 0x12e43cu: goto label_12e43c;
        case 0x12e440u: goto label_12e440;
        case 0x12e444u: goto label_12e444;
        case 0x12e448u: goto label_12e448;
        case 0x12e44cu: goto label_12e44c;
        case 0x12e450u: goto label_12e450;
        case 0x12e454u: goto label_12e454;
        default: break;
    }

    ctx->pc = 0x12d7c8u;

label_12d7c8:
    // 0x12d7c8: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x12d7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_12d7cc:
    // 0x12d7cc: 0xffb10298  sd          $s1, 0x298($sp)
    ctx->pc = 0x12d7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
label_12d7d0:
    // 0x12d7d0: 0xffb302a8  sd          $s3, 0x2A8($sp)
    ctx->pc = 0x12d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 19));
label_12d7d4:
    // 0x12d7d4: 0xffb502b8  sd          $s5, 0x2B8($sp)
    ctx->pc = 0x12d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 21));
label_12d7d8:
    // 0x12d7d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12d7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12d7dc:
    // 0x12d7dc: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x12d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
label_12d7e0:
    // 0x12d7e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12d7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12d7e4:
    // 0x12d7e4: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x12d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
label_12d7e8:
    // 0x12d7e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12d7e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d7ec:
    // 0x12d7ec: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x12d7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_12d7f0:
    // 0x12d7f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12d7f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d7f4:
    // 0x12d7f4: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x12d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
label_12d7f8:
    // 0x12d7f8: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x12d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
label_12d7fc:
    // 0x12d7fc: 0xffb702c8  sd          $s7, 0x2C8($sp)
    ctx->pc = 0x12d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 23));
label_12d800:
    // 0x12d800: 0xffbf02d8  sd          $ra, 0x2D8($sp)
    ctx->pc = 0x12d800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 31));
label_12d804:
    // 0x12d804: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x12d804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_12d808:
    // 0x12d808: 0xafa70264  sw          $a3, 0x264($sp)
    ctx->pc = 0x12d808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 7));
label_12d80c:
    // 0x12d80c: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x12d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_12d810:
    // 0x12d810: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x12d810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_12d814:
    // 0x12d814: 0x826d0000  lb          $t5, 0x0($s3)
    ctx->pc = 0x12d814u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12d818:
    // 0x12d818: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x12d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12d81c:
    // 0x12d81c: 0x11a00049  beqz        $t5, . + 4 + (0x49 << 2)
label_12d820:
    if (ctx->pc == 0x12D820u) {
        ctx->pc = 0x12D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D81Cu;
        // 0x12d820: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D824u;
        goto label_12d824;
    }
    ctx->pc = 0x12D81Cu;
    {
        const bool branch_taken_0x12d81c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D81Cu;
        // 0x12d820: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d81c) {
            ctx->pc = 0x12D944u;
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D824u;
label_12d824:
    // 0x12d824: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12d824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d828:
    // 0x12d828: 0x15ef001e  bne         $t7, $t7, . + 4 + (0x1E << 2)
label_12d82c:
    if (ctx->pc == 0x12D82Cu) {
        ctx->pc = 0x12D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D828u;
        // 0x12d82c: 0x240f0025  addiu       $t7, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D830u;
        goto label_12d830;
    }
    ctx->pc = 0x12D828u;
    {
        const bool branch_taken_0x12d828 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D828u;
        // 0x12d82c: 0x240f0025  addiu       $t7, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d828) {
            ctx->pc = 0x12D8A4u;
            goto label_12d8a4;
        }
    }
    ctx->pc = 0x12D830u;
label_12d830:
    // 0x12d830: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12d830u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12d834:
    // 0x12d834: 0x25ecb7c8  addiu       $t4, $t7, -0x4838
    ctx->pc = 0x12d834u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
label_12d838:
    // 0x12d838: 0x1ac7021  addu        $t6, $t5, $t4
    ctx->pc = 0x12d838u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_12d83c:
    // 0x12d83c: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12d83cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12d840:
    // 0x12d840: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12d840u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12d844:
    // 0x12d844: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_12d848:
    if (ctx->pc == 0x12D848u) {
        ctx->pc = 0x12D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D844u;
        // 0x12d848: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D84Cu;
        goto label_12d84c;
    }
    ctx->pc = 0x12D844u;
    {
        const bool branch_taken_0x12d844 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D844u;
        // 0x12d848: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d844) {
            ctx->pc = 0x12D8A0u;
            goto label_12d8a0;
        }
    }
    ctx->pc = 0x12D84Cu;
label_12d84c:
    // 0x12d84c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12d84cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12d850:
    // 0x12d850: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12d854:
    if (ctx->pc == 0x12D854u) {
        ctx->pc = 0x12D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D850u;
        // 0x12d854: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D858u;
        goto label_12d858;
    }
    ctx->pc = 0x12D850u;
    {
        const bool branch_taken_0x12d850 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12d850) {
            ctx->pc = 0x12D854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D850u;
            // 0x12d854: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D86Cu;
            goto label_12d86c;
        }
    }
    ctx->pc = 0x12D858u;
label_12d858:
    // 0x12d858: 0xc04a566  jal         func_129598
label_12d85c:
    if (ctx->pc == 0x12D85Cu) {
        ctx->pc = 0x12D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D858u;
        // 0x12d85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D860u;
        goto label_12d860;
    }
    ctx->pc = 0x12D858u;
    SET_GPR_U32(ctx, 31, 0x12D860u);
    ctx->pc = 0x12D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D858u;
    // 0x12d85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12D858u, 0x12D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D860u;
label_12d860:
    // 0x12d860: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_12d864:
    if (ctx->pc == 0x12D864u) {
        ctx->pc = 0x12D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D860u;
        // 0x12d864: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D868u;
        goto label_12d868;
    }
    ctx->pc = 0x12D860u;
    {
        const bool branch_taken_0x12d860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d860) {
            ctx->pc = 0x12D864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D860u;
            // 0x12d864: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D868u;
label_12d868:
    // 0x12d868: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12d868u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d86c:
    // 0x12d86c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12d86cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12d870:
    // 0x12d870: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12d870u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12d874:
    // 0x12d874: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12d874u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12d878:
    // 0x12d878: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12d878u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12d87c:
    // 0x12d87c: 0x11c0ffe5  beqz        $t6, . + 4 + (-0x1B << 2)
label_12d880:
    if (ctx->pc == 0x12D880u) {
        ctx->pc = 0x12D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D87Cu;
        // 0x12d880: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D884u;
        goto label_12d884;
    }
    ctx->pc = 0x12D87Cu;
    {
        const bool branch_taken_0x12d87c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D87Cu;
        // 0x12d880: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d87c) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12D884u;
label_12d884:
    // 0x12d884: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12d888:
    // 0x12d888: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12d888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12d88c:
    // 0x12d88c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12d88cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12d890:
    // 0x12d890: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12d890u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12d894:
    // 0x12d894: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_12d898:
    if (ctx->pc == 0x12D898u) {
        ctx->pc = 0x12D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D894u;
        // 0x12d898: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D89Cu;
        goto label_12d89c;
    }
    ctx->pc = 0x12D894u;
    {
        const bool branch_taken_0x12d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D894u;
        // 0x12d898: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d894) {
            ctx->pc = 0x12D84Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d84c;
        }
    }
    ctx->pc = 0x12D89Cu;
label_12d89c:
    // 0x12d89c: 0x0  nop
    ctx->pc = 0x12d89cu;
    // NOP
label_12d8a0:
    // 0x12d8a0: 0x240f0025  addiu       $t7, $zero, 0x25
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12d8a4:
    // 0x12d8a4: 0x15af000f  bne         $t5, $t7, . + 4 + (0xF << 2)
label_12d8a8:
    if (ctx->pc == 0x12D8A8u) {
        ctx->pc = 0x12D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8A4u;
        // 0x12d8a8: 0x2670ffff  addiu       $s0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D8ACu;
        goto label_12d8ac;
    }
    ctx->pc = 0x12D8A4u;
    {
        const bool branch_taken_0x12d8a4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8A4u;
        // 0x12d8a8: 0x2670ffff  addiu       $s0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8a4) {
            ctx->pc = 0x12D8E4u;
            goto label_12d8e4;
        }
    }
    ctx->pc = 0x12D8ACu;
label_12d8ac:
    // 0x12d8ac: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12d8acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d8b0:
    // 0x12d8b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12d8b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d8b4:
    // 0x12d8b4: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x12d8b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12d8b8:
    // 0x12d8b8: 0x2e0f0079  sltiu       $t7, $s0, 0x79
    ctx->pc = 0x12d8b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_12d8bc:
    // 0x12d8bc: 0x11e002d8  beqz        $t7, . + 4 + (0x2D8 << 2)
label_12d8c0:
    if (ctx->pc == 0x12D8C0u) {
        ctx->pc = 0x12D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8BCu;
        // 0x12d8c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D8C4u;
        goto label_12d8c4;
    }
    ctx->pc = 0x12D8BCu;
    {
        const bool branch_taken_0x12d8bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8BCu;
        // 0x12d8c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8bc) {
            ctx->pc = 0x12E420u;
            goto label_12e420;
        }
    }
    ctx->pc = 0x12D8C4u;
label_12d8c4:
    // 0x12d8c4: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12d8c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12d8c8:
    // 0x12d8c8: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12d8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12d8cc:
    // 0x12d8cc: 0x25cebda0  addiu       $t6, $t6, -0x4260
    ctx->pc = 0x12d8ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950304));
label_12d8d0:
    // 0x12d8d0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12d8d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12d8d4:
    // 0x12d8d4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12d8d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12d8d8:
    // 0x12d8d8: 0x1a00008  jr          $t5
label_12d8dc:
    if (ctx->pc == 0x12D8DCu) {
        ctx->pc = 0x12D8E0u;
        goto label_12d8e0;
    }
    ctx->pc = 0x12D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D8E0u: goto label_12d8e0;
            case 0x12D984u: goto label_12d984;
            case 0x12D98Cu: goto label_12d98c;
            case 0x12D994u: goto label_12d994;
            case 0x12D9A8u: goto label_12d9a8;
            case 0x12D9ACu: goto label_12d9ac;
            case 0x12E308u: goto label_12e308;
            case 0x12E310u: goto label_12e310;
            case 0x12E314u: goto label_12e314;
            case 0x12E32Cu: goto label_12e32c;
            case 0x12E348u: goto label_12e348;
            case 0x12E354u: goto label_12e354;
            case 0x12E35Cu: goto label_12e35c;
            case 0x12E364u: goto label_12e364;
            case 0x12E378u: goto label_12e378;
            case 0x12E380u: goto label_12e380;
            case 0x12E3F0u: goto label_12e3f0;
            case 0x12E408u: goto label_12e408;
            case 0x12E410u: goto label_12e410;
            case 0x12E420u: goto label_12e420;
            case 0x12E450u: goto label_12e450;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D8D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12D8E0u;
label_12d8e0:
    // 0x12d8e0: 0x2670ffff  addiu       $s0, $s3, -0x1
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_12d8e4:
    // 0x12d8e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12d8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d8e8:
    // 0x12d8e8: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12d8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12d8ec:
    // 0x12d8ec: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12d8f0:
    if (ctx->pc == 0x12D8F0u) {
        ctx->pc = 0x12D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8ECu;
        // 0x12d8f0: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D8F4u;
        goto label_12d8f4;
    }
    ctx->pc = 0x12D8ECu;
    {
        const bool branch_taken_0x12d8ec = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12d8ec) {
            ctx->pc = 0x12D8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8ECu;
            // 0x12d8f0: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D908u;
            goto label_12d908;
        }
    }
    ctx->pc = 0x12D8F4u;
label_12d8f4:
    // 0x12d8f4: 0xc04a566  jal         func_129598
label_12d8f8:
    if (ctx->pc == 0x12D8F8u) {
        ctx->pc = 0x12D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8F4u;
        // 0x12d8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D8FCu;
        goto label_12d8fc;
    }
    ctx->pc = 0x12D8F4u;
    SET_GPR_U32(ctx, 31, 0x12D8FCu);
    ctx->pc = 0x12D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8F4u;
    // 0x12d8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12D8F4u, 0x12D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8FCu;
label_12d8fc:
    // 0x12d8fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_12d900:
    if (ctx->pc == 0x12D900u) {
        ctx->pc = 0x12D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8FCu;
        // 0x12d900: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D904u;
        goto label_12d904;
    }
    ctx->pc = 0x12D8FCu;
    {
        const bool branch_taken_0x12d8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8FCu;
        // 0x12d900: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8fc) {
            ctx->pc = 0x12D978u;
            goto label_12d978;
        }
    }
    ctx->pc = 0x12D904u;
label_12d904:
    // 0x12d904: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12d904u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d908:
    // 0x12d908: 0x820e0000  lb          $t6, 0x0($s0)
    ctx->pc = 0x12d908u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_12d90c:
    // 0x12d90c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12d90cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12d910:
    // 0x12d910: 0x15ee000b  bne         $t7, $t6, . + 4 + (0xB << 2)
label_12d914:
    if (ctx->pc == 0x12D914u) {
        ctx->pc = 0x12D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D910u;
        // 0x12d914: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D918u;
        goto label_12d918;
    }
    ctx->pc = 0x12D910u;
    {
        const bool branch_taken_0x12d910 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D910u;
        // 0x12d914: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d910) {
            ctx->pc = 0x12D940u;
            goto label_12d940;
        }
    }
    ctx->pc = 0x12D918u;
label_12d918:
    // 0x12d918: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12d918u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12d91c:
    // 0x12d91c: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12d920:
    // 0x12d920: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12d920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12d924:
    // 0x12d924: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12d928:
    // 0x12d928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12d928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12d92c:
    // 0x12d92c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12d92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12d930:
    // 0x12d930: 0x1a40ffed  blez        $s2, . + 4 + (-0x13 << 2)
label_12d934:
    if (ctx->pc == 0x12D934u) {
        ctx->pc = 0x12D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D930u;
        // 0x12d934: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D938u;
        goto label_12d938;
    }
    ctx->pc = 0x12D930u;
    {
        const bool branch_taken_0x12d930 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D930u;
        // 0x12d934: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d930) {
            ctx->pc = 0x12D8E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8e8;
        }
    }
    ctx->pc = 0x12D938u;
label_12d938:
    // 0x12d938: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
label_12d93c:
    if (ctx->pc == 0x12D93Cu) {
        ctx->pc = 0x12D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D938u;
        // 0x12d93c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D940u;
        goto label_12d940;
    }
    ctx->pc = 0x12D938u;
    {
        const bool branch_taken_0x12d938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D938u;
        // 0x12d93c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d938) {
            ctx->pc = 0x12D818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D940u;
label_12d940:
    // 0x12d940: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x12d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12d944:
    // 0x12d944: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x12d944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_12d948:
    // 0x12d948: 0xdfb10298  ld          $s1, 0x298($sp)
    ctx->pc = 0x12d948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
label_12d94c:
    // 0x12d94c: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x12d94cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_12d950:
    // 0x12d950: 0xdfb302a8  ld          $s3, 0x2A8($sp)
    ctx->pc = 0x12d950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_12d954:
    // 0x12d954: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x12d954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_12d958:
    // 0x12d958: 0xdfb502b8  ld          $s5, 0x2B8($sp)
    ctx->pc = 0x12d958u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_12d95c:
    // 0x12d95c: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x12d95cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_12d960:
    // 0x12d960: 0xdfb702c8  ld          $s7, 0x2C8($sp)
    ctx->pc = 0x12d960u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 712)));
label_12d964:
    // 0x12d964: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x12d964u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_12d968:
    // 0x12d968: 0xdfbf02d8  ld          $ra, 0x2D8($sp)
    ctx->pc = 0x12d968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 728)));
label_12d96c:
    // 0x12d96c: 0x3e00008  jr          $ra
label_12d970:
    if (ctx->pc == 0x12D970u) {
        ctx->pc = 0x12D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D96Cu;
        // 0x12d970: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D974u;
        goto label_12d974;
    }
    ctx->pc = 0x12D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D96Cu;
        // 0x12d970: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D974u;
label_12d974:
    // 0x12d974: 0x8fad0268  lw          $t5, 0x268($sp)
    ctx->pc = 0x12d974u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12d978:
    // 0x12d978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12d97c:
    // 0x12d97c: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_12d980:
    if (ctx->pc == 0x12D980u) {
        ctx->pc = 0x12D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D97Cu;
        // 0x12d980: 0x1ad100b  movn        $v0, $t5, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D984u;
        goto label_12d984;
    }
    ctx->pc = 0x12D97Cu;
    {
        const bool branch_taken_0x12d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D97Cu;
        // 0x12d980: 0x1ad100b  movn        $v0, $t5, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d97c) {
            ctx->pc = 0x12D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D984u;
label_12d984:
    // 0x12d984: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_12d988:
    if (ctx->pc == 0x12D988u) {
        ctx->pc = 0x12D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D984u;
        // 0x12d988: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D98Cu;
        goto label_12d98c;
    }
    ctx->pc = 0x12D984u;
    {
        const bool branch_taken_0x12d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D984u;
        // 0x12d988: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d984) {
            ctx->pc = 0x12D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D98Cu;
label_12d98c:
    // 0x12d98c: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_12d990:
    if (ctx->pc == 0x12D990u) {
        ctx->pc = 0x12D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D98Cu;
        // 0x12d990: 0x36940008  ori         $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D994u;
        goto label_12d994;
    }
    ctx->pc = 0x12D98Cu;
    {
        const bool branch_taken_0x12d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D98Cu;
        // 0x12d990: 0x36940008  ori         $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d98c) {
            ctx->pc = 0x12D8B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8b4;
        }
    }
    ctx->pc = 0x12D994u;
label_12d994:
    // 0x12d994: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12d994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12d998:
    // 0x12d998: 0x2ef7818  mult        $t7, $s7, $t7
    ctx->pc = 0x12d998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_12d99c:
    // 0x12d99c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12d99cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12d9a0:
    // 0x12d9a0: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_12d9a4:
    if (ctx->pc == 0x12D9A4u) {
        ctx->pc = 0x12D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9A0u;
        // 0x12d9a4: 0x25f7ffd0  addiu       $s7, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D9A8u;
        goto label_12d9a8;
    }
    ctx->pc = 0x12D9A0u;
    {
        const bool branch_taken_0x12d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9A0u;
        // 0x12d9a4: 0x25f7ffd0  addiu       $s7, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9a0) {
            ctx->pc = 0x12D8B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8b4;
        }
    }
    ctx->pc = 0x12D9A8u;
label_12d9a8:
    // 0x12d9a8: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x12d9a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_12d9ac:
    // 0x12d9ac: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12d9acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12d9b0:
    // 0x12d9b0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12d9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12d9b4:
    // 0x12d9b4: 0x25efb6a0  addiu       $t7, $t7, -0x4960
    ctx->pc = 0x12d9b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948512));
label_12d9b8:
    // 0x12d9b8: 0xafaf026c  sw          $t7, 0x26C($sp)
    ctx->pc = 0x12d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
label_12d9bc:
    // 0x12d9bc: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x12d9bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12d9c0:
    // 0x12d9c0: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12d9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12d9c4:
    // 0x12d9c4: 0x1de00005  bgtz        $t7, . + 4 + (0x5 << 2)
label_12d9c8:
    if (ctx->pc == 0x12D9C8u) {
        ctx->pc = 0x12D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9C4u;
        // 0x12d9c8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D9CCu;
        goto label_12d9cc;
    }
    ctx->pc = 0x12D9C4u;
    {
        const bool branch_taken_0x12d9c4 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x12D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9C4u;
        // 0x12d9c8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9c4) {
            ctx->pc = 0x12D9DCu;
            goto label_12d9dc;
        }
    }
    ctx->pc = 0x12D9CCu;
label_12d9cc:
    // 0x12d9cc: 0xc04a566  jal         func_129598
label_12d9d0:
    if (ctx->pc == 0x12D9D0u) {
        ctx->pc = 0x12D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9CCu;
        // 0x12d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D9D4u;
        goto label_12d9d4;
    }
    ctx->pc = 0x12D9CCu;
    SET_GPR_U32(ctx, 31, 0x12D9D4u);
    ctx->pc = 0x12D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D9CCu;
    // 0x12d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12D9CCu, 0x12D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9D4u;
label_12d9d4:
    // 0x12d9d4: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_12d9d8:
    if (ctx->pc == 0x12D9D8u) {
        ctx->pc = 0x12D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9D4u;
        // 0x12d9d8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D9DCu;
        goto label_12d9dc;
    }
    ctx->pc = 0x12D9D4u;
    {
        const bool branch_taken_0x12d9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9D4u;
        // 0x12d9d8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9d4) {
            ctx->pc = 0x12D974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d974;
        }
    }
    ctx->pc = 0x12D9DCu;
label_12d9dc:
    // 0x12d9dc: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
label_12d9e0:
    if (ctx->pc == 0x12D9E0u) {
        ctx->pc = 0x12D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9DCu;
        // 0x12d9e0: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D9E4u;
        goto label_12d9e4;
    }
    ctx->pc = 0x12D9DCu;
    {
        const bool branch_taken_0x12d9dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9DCu;
        // 0x12d9e0: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9dc) {
            ctx->pc = 0x12DA48u;
            goto label_12da48;
        }
    }
    ctx->pc = 0x12D9E4u;
label_12d9e4:
    // 0x12d9e4: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12d9e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d9e8:
    // 0x12d9e8: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12d9ec:
    // 0x12d9ec: 0x25ecb7c8  addiu       $t4, $t7, -0x4838
    ctx->pc = 0x12d9ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
label_12d9f0:
    // 0x12d9f0: 0x91ae0000  lbu         $t6, 0x0($t5)
    ctx->pc = 0x12d9f0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12d9f4:
    // 0x12d9f4: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x12d9f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_12d9f8:
    // 0x12d9f8: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12d9f8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12d9fc:
    // 0x12d9fc: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12d9fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12da00:
    // 0x12da00: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
label_12da04:
    if (ctx->pc == 0x12DA04u) {
        ctx->pc = 0x12DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA00u;
        // 0x12da04: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA08u;
        goto label_12da08;
    }
    ctx->pc = 0x12DA00u;
    {
        const bool branch_taken_0x12da00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA00u;
        // 0x12da04: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da00) {
            ctx->pc = 0x12DA48u;
            goto label_12da48;
        }
    }
    ctx->pc = 0x12DA08u;
label_12da08:
    // 0x12da08: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x12da08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12da0c:
    // 0x12da0c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12da10:
    // 0x12da10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12da14:
    // 0x12da14: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12da18:
    // 0x12da18: 0x19e00235  blez        $t7, . + 4 + (0x235 << 2)
label_12da1c:
    if (ctx->pc == 0x12DA1Cu) {
        ctx->pc = 0x12DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA18u;
        // 0x12da1c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA20u;
        goto label_12da20;
    }
    ctx->pc = 0x12DA18u;
    {
        const bool branch_taken_0x12da18 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x12DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA18u;
        // 0x12da1c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da18) {
            ctx->pc = 0x12E2F0u;
            goto label_12e2f0;
        }
    }
    ctx->pc = 0x12DA20u;
label_12da20:
    // 0x12da20: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12da24:
    // 0x12da24: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12da24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12da28:
    // 0x12da28: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12da28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12da2c:
    // 0x12da2c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12da2cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12da30:
    // 0x12da30: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x12da30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12da34:
    // 0x12da34: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12da34u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12da38:
    // 0x12da38: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12da38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12da3c:
    // 0x12da3c: 0x55c0fff4  bnel        $t6, $zero, . + 4 + (-0xC << 2)
label_12da40:
    if (ctx->pc == 0x12DA40u) {
        ctx->pc = 0x12DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA3Cu;
        // 0x12da40: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA44u;
        goto label_12da44;
    }
    ctx->pc = 0x12DA3Cu;
    {
        const bool branch_taken_0x12da3c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x12da3c) {
            ctx->pc = 0x12DA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DA3Cu;
            // 0x12da40: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12da10;
        }
    }
    ctx->pc = 0x12DA44u;
label_12da44:
    // 0x12da44: 0x2e0f0005  sltiu       $t7, $s0, 0x5
    ctx->pc = 0x12da44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_12da48:
    // 0x12da48: 0x51e0ff73  beql        $t7, $zero, . + 4 + (-0x8D << 2)
label_12da4c:
    if (ctx->pc == 0x12DA4Cu) {
        ctx->pc = 0x12DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA48u;
        // 0x12da4c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA50u;
        goto label_12da50;
    }
    ctx->pc = 0x12DA48u;
    {
        const bool branch_taken_0x12da48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da48) {
            ctx->pc = 0x12DA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DA48u;
            // 0x12da4c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d818;
        }
    }
    ctx->pc = 0x12DA50u;
label_12da50:
    // 0x12da50: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12da54:
    // 0x12da54: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12da54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12da58:
    // 0x12da58: 0x25cebf84  addiu       $t6, $t6, -0x407C
    ctx->pc = 0x12da58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950788));
label_12da5c:
    // 0x12da5c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12da5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12da60:
    // 0x12da60: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12da60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12da64:
    // 0x12da64: 0x1a00008  jr          $t5
label_12da68:
    if (ctx->pc == 0x12DA68u) {
        ctx->pc = 0x12DA6Cu;
        goto label_12da6c;
    }
    ctx->pc = 0x12DA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DA6Cu: goto label_12da6c;
            case 0x12DB18u: goto label_12db18;
            case 0x12DC60u: goto label_12dc60;
            case 0x12DDA4u: goto label_12dda4;
            case 0x12E01Cu: goto label_12e01c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DA64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12DA6Cu;
label_12da6c:
    // 0x12da6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12da6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12da70:
    // 0x12da70: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12da70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12da74:
    // 0x12da74: 0x11c0001a  beqz        $t6, . + 4 + (0x1A << 2)
label_12da78:
    if (ctx->pc == 0x12DA78u) {
        ctx->pc = 0x12DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA74u;
        // 0x12da78: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA7Cu;
        goto label_12da7c;
    }
    ctx->pc = 0x12DA74u;
    {
        const bool branch_taken_0x12da74 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA74u;
        // 0x12da78: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da74) {
            ctx->pc = 0x12DAE0u;
            goto label_12dae0;
        }
    }
    ctx->pc = 0x12DA7Cu;
label_12da7c:
    // 0x12da7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12da7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12da80:
    // 0x12da80: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x12da80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12da84:
    // 0x12da84: 0x257782a  slt         $t7, $s2, $s7
    ctx->pc = 0x12da84u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_12da88:
    // 0x12da88: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_12da8c:
    if (ctx->pc == 0x12DA8Cu) {
        ctx->pc = 0x12DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA88u;
        // 0x12da8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DA90u;
        goto label_12da90;
    }
    ctx->pc = 0x12DA88u;
    {
        const bool branch_taken_0x12da88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA88u;
        // 0x12da8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da88) {
            ctx->pc = 0x12DAC0u;
            goto label_12dac0;
        }
    }
    ctx->pc = 0x12DA90u;
label_12da90:
    // 0x12da90: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12da94:
    // 0x12da94: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12da98:
    // 0x12da98: 0x2f2b823  subu        $s7, $s7, $s2
    ctx->pc = 0x12da98u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_12da9c:
    // 0x12da9c: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x12da9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12daa0:
    // 0x12daa0: 0xc04a566  jal         func_129598
label_12daa4:
    if (ctx->pc == 0x12DAA4u) {
        ctx->pc = 0x12DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAA0u;
        // 0x12daa4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAA8u;
        goto label_12daa8;
    }
    ctx->pc = 0x12DAA0u;
    SET_GPR_U32(ctx, 31, 0x12DAA8u);
    ctx->pc = 0x12DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAA0u;
    // 0x12daa4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12DAA0u, 0x12DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAA8u;
label_12daa8:
    // 0x12daa8: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_12daac:
    if (ctx->pc == 0x12DAACu) {
        ctx->pc = 0x12DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAA8u;
        // 0x12daac: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAB0u;
        goto label_12dab0;
    }
    ctx->pc = 0x12DAA8u;
    {
        const bool branch_taken_0x12daa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12daa8) {
            ctx->pc = 0x12DAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DAA8u;
            // 0x12daac: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12da84;
        }
    }
    ctx->pc = 0x12DAB0u;
label_12dab0:
    // 0x12dab0: 0x1200ffb1  beqz        $s0, . + 4 + (-0x4F << 2)
label_12dab4:
    if (ctx->pc == 0x12DAB4u) {
        ctx->pc = 0x12DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAB0u;
        // 0x12dab4: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAB8u;
        goto label_12dab8;
    }
    ctx->pc = 0x12DAB0u;
    {
        const bool branch_taken_0x12dab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAB0u;
        // 0x12dab4: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dab0) {
            ctx->pc = 0x12D978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d978;
        }
    }
    ctx->pc = 0x12DAB8u;
label_12dab8:
    // 0x12dab8: 0x1000ff56  b           . + 4 + (-0xAA << 2)
label_12dabc:
    if (ctx->pc == 0x12DABCu) {
        ctx->pc = 0x12DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAB8u;
        // 0x12dabc: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DAC0u;
        goto label_12dac0;
    }
    ctx->pc = 0x12DAB8u;
    {
        const bool branch_taken_0x12dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAB8u;
        // 0x12dabc: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dab8) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DAC0u;
label_12dac0:
    // 0x12dac0: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x12dac0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12dac4:
    // 0x12dac4: 0x2577823  subu        $t7, $s2, $s7
    ctx->pc = 0x12dac4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_12dac8:
    // 0x12dac8: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12dacc:
    // 0x12dacc: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_12dad0:
    // 0x12dad0: 0x1d77021  addu        $t6, $t6, $s7
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
label_12dad4:
    // 0x12dad4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_12dad8:
    if (ctx->pc == 0x12DAD8u) {
        ctx->pc = 0x12DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAD4u;
        // 0x12dad8: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DADCu;
        goto label_12dadc;
    }
    ctx->pc = 0x12DAD4u;
    {
        const bool branch_taken_0x12dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAD4u;
        // 0x12dad8: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dad4) {
            ctx->pc = 0x12DAB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dab8;
        }
    }
    ctx->pc = 0x12DADCu;
label_12dadc:
    // 0x12dadc: 0x0  nop
    ctx->pc = 0x12dadcu;
    // NOP
label_12dae0:
    // 0x12dae0: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12dae4:
    // 0x12dae4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12dae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12dae8:
    // 0x12dae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12daec:
    // 0x12daec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12daecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12daf0:
    // 0x12daf0: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x12daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12daf4:
    // 0x12daf4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12daf8:
    // 0x12daf8: 0xc0493f8  jal         func_124FE0
label_12dafc:
    if (ctx->pc == 0x12DAFCu) {
        ctx->pc = 0x12DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAF8u;
        // 0x12dafc: 0xafaf0264  sw          $t7, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB00u;
        goto label_12db00;
    }
    ctx->pc = 0x12DAF8u;
    SET_GPR_U32(ctx, 31, 0x12DB00u);
    ctx->pc = 0x12DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAF8u;
    // 0x12dafc: 0xafaf0264  sw          $t7, 0x264($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124FE0u, 0x12DAF8u, 0x12DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB00u;
label_12db00:
    // 0x12db00: 0x1040ff9c  beqz        $v0, . + 4 + (-0x64 << 2)
label_12db04:
    if (ctx->pc == 0x12DB04u) {
        ctx->pc = 0x12DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB00u;
        // 0x12db04: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB08u;
        goto label_12db08;
    }
    ctx->pc = 0x12DB00u;
    {
        const bool branch_taken_0x12db00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB00u;
        // 0x12db04: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db00) {
            ctx->pc = 0x12D974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d974;
        }
    }
    ctx->pc = 0x12DB08u;
label_12db08:
    // 0x12db08: 0x8fad0268  lw          $t5, 0x268($sp)
    ctx->pc = 0x12db08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12db0c:
    // 0x12db0c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12db0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12db10:
    // 0x12db10: 0x1000ff40  b           . + 4 + (-0xC0 << 2)
label_12db14:
    if (ctx->pc == 0x12DB14u) {
        ctx->pc = 0x12DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB10u;
        // 0x12db14: 0xafad0268  sw          $t5, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB18u;
        goto label_12db18;
    }
    ctx->pc = 0x12DB10u;
    {
        const bool branch_taken_0x12db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB10u;
        // 0x12db14: 0xafad0268  sw          $t5, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db10) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DB18u;
label_12db18:
    // 0x12db18: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12db18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12db1c:
    // 0x12db1c: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12db1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12db20:
    // 0x12db20: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
label_12db24:
    if (ctx->pc == 0x12DB24u) {
        ctx->pc = 0x12DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB20u;
        // 0x12db24: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB28u;
        goto label_12db28;
    }
    ctx->pc = 0x12DB20u;
    {
        const bool branch_taken_0x12db20 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB20u;
        // 0x12db24: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db20) {
            ctx->pc = 0x12DBB0u;
            goto label_12dbb0;
        }
    }
    ctx->pc = 0x12DB28u;
label_12db28:
    // 0x12db28: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12db2c:
    // 0x12db2c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12db2cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12db30:
    // 0x12db30: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12db30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12db34:
    // 0x12db34: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12db38:
    // 0x12db38: 0x11a00018  beqz        $t5, . + 4 + (0x18 << 2)
label_12db3c:
    if (ctx->pc == 0x12DB3Cu) {
        ctx->pc = 0x12DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB38u;
        // 0x12db3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB40u;
        goto label_12db40;
    }
    ctx->pc = 0x12DB38u;
    {
        const bool branch_taken_0x12db38 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB38u;
        // 0x12db3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db38) {
            ctx->pc = 0x12DB9Cu;
            goto label_12db9c;
        }
    }
    ctx->pc = 0x12DB40u;
label_12db40:
    // 0x12db40: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12db44:
    // 0x12db44: 0x258f0001  addiu       $t7, $t4, 0x1
    ctx->pc = 0x12db44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12db48:
    // 0x12db48: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12db48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12db4c:
    // 0x12db4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12db50:
    // 0x12db50: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12db54:
    // 0x12db54: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12db54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12db58:
    // 0x12db58: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_12db5c:
    if (ctx->pc == 0x12DB5Cu) {
        ctx->pc = 0x12DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB58u;
        // 0x12db5c: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB60u;
        goto label_12db60;
    }
    ctx->pc = 0x12DB58u;
    {
        const bool branch_taken_0x12db58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB58u;
        // 0x12db5c: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db58) {
            ctx->pc = 0x12DB9Cu;
            goto label_12db9c;
        }
    }
    ctx->pc = 0x12DB60u;
label_12db60:
    // 0x12db60: 0x5dc00009  bgtzl       $t6, . + 4 + (0x9 << 2)
label_12db64:
    if (ctx->pc == 0x12DB64u) {
        ctx->pc = 0x12DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB60u;
        // 0x12db64: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB68u;
        goto label_12db68;
    }
    ctx->pc = 0x12DB60u;
    {
        const bool branch_taken_0x12db60 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x12db60) {
            ctx->pc = 0x12DB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB60u;
            // 0x12db64: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DB88u;
            goto label_12db88;
        }
    }
    ctx->pc = 0x12DB68u;
label_12db68:
    // 0x12db68: 0xc04a566  jal         func_129598
label_12db6c:
    if (ctx->pc == 0x12DB6Cu) {
        ctx->pc = 0x12DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB68u;
        // 0x12db6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB70u;
        goto label_12db70;
    }
    ctx->pc = 0x12DB68u;
    SET_GPR_U32(ctx, 31, 0x12DB70u);
    ctx->pc = 0x12DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB68u;
    // 0x12db6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12DB68u, 0x12DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB70u;
label_12db70:
    // 0x12db70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_12db74:
    if (ctx->pc == 0x12DB74u) {
        ctx->pc = 0x12DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB70u;
        // 0x12db74: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB78u;
        goto label_12db78;
    }
    ctx->pc = 0x12DB70u;
    {
        const bool branch_taken_0x12db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db70) {
            ctx->pc = 0x12DB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB70u;
            // 0x12db74: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DB88u;
            goto label_12db88;
        }
    }
    ctx->pc = 0x12DB78u;
label_12db78:
    // 0x12db78: 0x1240ff7f  beqz        $s2, . + 4 + (-0x81 << 2)
label_12db7c:
    if (ctx->pc == 0x12DB7Cu) {
        ctx->pc = 0x12DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB78u;
        // 0x12db7c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB80u;
        goto label_12db80;
    }
    ctx->pc = 0x12DB78u;
    {
        const bool branch_taken_0x12db78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB78u;
        // 0x12db7c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db78) {
            ctx->pc = 0x12D978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d978;
        }
    }
    ctx->pc = 0x12DB80u;
label_12db80:
    // 0x12db80: 0x1000ff24  b           . + 4 + (-0xDC << 2)
label_12db84:
    if (ctx->pc == 0x12DB84u) {
        ctx->pc = 0x12DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB80u;
        // 0x12db84: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB88u;
        goto label_12db88;
    }
    ctx->pc = 0x12DB80u;
    {
        const bool branch_taken_0x12db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB80u;
        // 0x12db84: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db80) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DB88u;
label_12db88:
    // 0x12db88: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12db88u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12db8c:
    // 0x12db8c: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12db8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12db90:
    // 0x12db90: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12db94:
    // 0x12db94: 0x55a0ffeb  bnel        $t5, $zero, . + 4 + (-0x15 << 2)
label_12db98:
    if (ctx->pc == 0x12DB98u) {
        ctx->pc = 0x12DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB94u;
        // 0x12db98: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DB9Cu;
        goto label_12db9c;
    }
    ctx->pc = 0x12DB94u;
    {
        const bool branch_taken_0x12db94 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12db94) {
            ctx->pc = 0x12DB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB94u;
            // 0x12db98: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DB44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db44;
        }
    }
    ctx->pc = 0x12DB9Cu;
label_12db9c:
    // 0x12db9c: 0x1640ff1d  bnez        $s2, . + 4 + (-0xE3 << 2)
label_12dba0:
    if (ctx->pc == 0x12DBA0u) {
        ctx->pc = 0x12DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB9Cu;
        // 0x12dba0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBA4u;
        goto label_12dba4;
    }
    ctx->pc = 0x12DB9Cu;
    {
        const bool branch_taken_0x12db9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB9Cu;
        // 0x12dba0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db9c) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DBA4u;
label_12dba4:
    // 0x12dba4: 0x1000ff67  b           . + 4 + (-0x99 << 2)
label_12dba8:
    if (ctx->pc == 0x12DBA8u) {
        ctx->pc = 0x12DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBA4u;
        // 0x12dba8: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBACu;
        goto label_12dbac;
    }
    ctx->pc = 0x12DBA4u;
    {
        const bool branch_taken_0x12dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBA4u;
        // 0x12dba8: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dba4) {
            ctx->pc = 0x12D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d944;
        }
    }
    ctx->pc = 0x12DBACu;
label_12dbac:
    // 0x12dbac: 0x0  nop
    ctx->pc = 0x12dbacu;
    // NOP
label_12dbb0:
    // 0x12dbb0: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12dbb4:
    // 0x12dbb4: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12dbb8:
    // 0x12dbb8: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12dbb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12dbbc:
    // 0x12dbbc: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x12dbbcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12dbc0:
    // 0x12dbc0: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12dbc4:
    // 0x12dbc4: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x12dbc4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12dbc8:
    // 0x12dbc8: 0x3ad7821  addu        $t7, $sp, $t5
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_12dbcc:
    // 0x12dbcc: 0x81ee0000  lb          $t6, 0x0($t7)
    ctx->pc = 0x12dbccu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12dbd0:
    // 0x12dbd0: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
label_12dbd4:
    if (ctx->pc == 0x12DBD4u) {
        ctx->pc = 0x12DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBD0u;
        // 0x12dbd4: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DBD8u;
        goto label_12dbd8;
    }
    ctx->pc = 0x12DBD0u;
    {
        const bool branch_taken_0x12dbd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBD0u;
        // 0x12dbd4: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbd0) {
            ctx->pc = 0x12DC24u;
            goto label_12dc24;
        }
    }
    ctx->pc = 0x12DBD8u;
label_12dbd8:
    // 0x12dbd8: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12dbd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12dbdc:
    // 0x12dbdc: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x12dbdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12dbe0:
    // 0x12dbe0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12dbe4:
    // 0x12dbe4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12dbe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12dbe8:
    // 0x12dbe8: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12dbec:
    // 0x12dbec: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12dbecu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12dbf0:
    // 0x12dbf0: 0xa2ce0000  sb          $t6, 0x0($s6)
    ctx->pc = 0x12dbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
label_12dbf4:
    // 0x12dbf4: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x12dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
label_12dbf8:
    // 0x12dbf8: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_12dbfc:
    if (ctx->pc == 0x12DBFCu) {
        ctx->pc = 0x12DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBF8u;
        // 0x12dbfc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC00u;
        goto label_12dc00;
    }
    ctx->pc = 0x12DBF8u;
    {
        const bool branch_taken_0x12dbf8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBF8u;
        // 0x12dbfc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbf8) {
            ctx->pc = 0x12DC24u;
            goto label_12dc24;
        }
    }
    ctx->pc = 0x12DC00u;
label_12dc00:
    // 0x12dc00: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12dc00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12dc04:
    // 0x12dc04: 0x5de0000f  bgtzl       $t7, . + 4 + (0xF << 2)
label_12dc08:
    if (ctx->pc == 0x12DC08u) {
        ctx->pc = 0x12DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC04u;
        // 0x12dc08: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC0Cu;
        goto label_12dc0c;
    }
    ctx->pc = 0x12DC04u;
    {
        const bool branch_taken_0x12dc04 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12dc04) {
            ctx->pc = 0x12DC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DC04u;
            // 0x12dc08: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC44u;
            goto label_12dc44;
        }
    }
    ctx->pc = 0x12DC0Cu;
label_12dc0c:
    // 0x12dc0c: 0xc04a566  jal         func_129598
label_12dc10:
    if (ctx->pc == 0x12DC10u) {
        ctx->pc = 0x12DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC0Cu;
        // 0x12dc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC14u;
        goto label_12dc14;
    }
    ctx->pc = 0x12DC0Cu;
    SET_GPR_U32(ctx, 31, 0x12DC14u);
    ctx->pc = 0x12DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC0Cu;
    // 0x12dc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12DC0Cu, 0x12DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC14u;
label_12dc14:
    // 0x12dc14: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_12dc18:
    if (ctx->pc == 0x12DC18u) {
        ctx->pc = 0x12DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC14u;
        // 0x12dc18: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC1Cu;
        goto label_12dc1c;
    }
    ctx->pc = 0x12DC14u;
    {
        const bool branch_taken_0x12dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc14) {
            ctx->pc = 0x12DC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DC14u;
            // 0x12dc18: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC44u;
            goto label_12dc44;
        }
    }
    ctx->pc = 0x12DC1Cu;
label_12dc1c:
    // 0x12dc1c: 0x12d2ff56  beq         $s6, $s2, . + 4 + (-0xAA << 2)
label_12dc20:
    if (ctx->pc == 0x12DC20u) {
        ctx->pc = 0x12DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC1Cu;
        // 0x12dc20: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC24u;
        goto label_12dc24;
    }
    ctx->pc = 0x12DC1Cu;
    {
        const bool branch_taken_0x12dc1c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 18));
        ctx->pc = 0x12DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC1Cu;
        // 0x12dc20: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc1c) {
            ctx->pc = 0x12D978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d978;
        }
    }
    ctx->pc = 0x12DC24u;
label_12dc24:
    // 0x12dc24: 0x2d29023  subu        $s2, $s6, $s2
    ctx->pc = 0x12dc24u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_12dc28:
    // 0x12dc28: 0x1240ff46  beqz        $s2, . + 4 + (-0xBA << 2)
label_12dc2c:
    if (ctx->pc == 0x12DC2Cu) {
        ctx->pc = 0x12DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC28u;
        // 0x12dc2c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC30u;
        goto label_12dc30;
    }
    ctx->pc = 0x12DC28u;
    {
        const bool branch_taken_0x12dc28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC28u;
        // 0x12dc2c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc28) {
            ctx->pc = 0x12D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d944;
        }
    }
    ctx->pc = 0x12DC30u;
label_12dc30:
    // 0x12dc30: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12dc30u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12dc34:
    // 0x12dc34: 0x8faf0268  lw          $t7, 0x268($sp)
    ctx->pc = 0x12dc34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12dc38:
    // 0x12dc38: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12dc38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12dc3c:
    // 0x12dc3c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_12dc40:
    if (ctx->pc == 0x12DC40u) {
        ctx->pc = 0x12DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC3Cu;
        // 0x12dc40: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC44u;
        goto label_12dc44;
    }
    ctx->pc = 0x12DC3Cu;
    {
        const bool branch_taken_0x12dc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC3Cu;
        // 0x12dc40: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc3c) {
            ctx->pc = 0x12DB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db80;
        }
    }
    ctx->pc = 0x12DC44u;
label_12dc44:
    // 0x12dc44: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12dc44u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12dc48:
    // 0x12dc48: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12dc48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12dc4c:
    // 0x12dc4c: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12dc4cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12dc50:
    // 0x12dc50: 0x55a0ffe2  bnel        $t5, $zero, . + 4 + (-0x1E << 2)
label_12dc54:
    if (ctx->pc == 0x12DC54u) {
        ctx->pc = 0x12DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC50u;
        // 0x12dc54: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC58u;
        goto label_12dc58;
    }
    ctx->pc = 0x12DC50u;
    {
        const bool branch_taken_0x12dc50 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dc50) {
            ctx->pc = 0x12DC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DC50u;
            // 0x12dc54: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DBDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dbdc;
        }
    }
    ctx->pc = 0x12DC58u;
label_12dc58:
    // 0x12dc58: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_12dc5c:
    if (ctx->pc == 0x12DC5Cu) {
        ctx->pc = 0x12DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC58u;
        // 0x12dc5c: 0x2d29023  subu        $s2, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC60u;
        goto label_12dc60;
    }
    ctx->pc = 0x12DC58u;
    {
        const bool branch_taken_0x12dc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC58u;
        // 0x12dc5c: 0x2d29023  subu        $s2, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc58) {
            ctx->pc = 0x12DC28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dc28;
        }
    }
    ctx->pc = 0x12DC60u;
label_12dc60:
    // 0x12dc60: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12dc60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12dc64:
    // 0x12dc64: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12dc64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12dc68:
    // 0x12dc68: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
label_12dc6c:
    if (ctx->pc == 0x12DC6Cu) {
        ctx->pc = 0x12DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC68u;
        // 0x12dc6c: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC70u;
        goto label_12dc70;
    }
    ctx->pc = 0x12DC68u;
    {
        const bool branch_taken_0x12dc68 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC68u;
        // 0x12dc6c: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc68) {
            ctx->pc = 0x12DCF8u;
            goto label_12dcf8;
        }
    }
    ctx->pc = 0x12DC70u;
label_12dc70:
    // 0x12dc70: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12dc70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12dc74:
    // 0x12dc74: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12dc74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12dc78:
    // 0x12dc78: 0x25ecb7c8  addiu       $t4, $t7, -0x4838
    ctx->pc = 0x12dc78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
label_12dc7c:
    // 0x12dc7c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12dc7cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12dc80:
    // 0x12dc80: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x12dc80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_12dc84:
    // 0x12dc84: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12dc84u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12dc88:
    // 0x12dc88: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12dc88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12dc8c:
    // 0x12dc8c: 0x15c0ffbc  bnez        $t6, . + 4 + (-0x44 << 2)
label_12dc90:
    if (ctx->pc == 0x12DC90u) {
        ctx->pc = 0x12DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC8Cu;
        // 0x12dc90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DC94u;
        goto label_12dc94;
    }
    ctx->pc = 0x12DC8Cu;
    {
        const bool branch_taken_0x12dc8c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC8Cu;
        // 0x12dc90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc8c) {
            ctx->pc = 0x12DB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db80;
        }
    }
    ctx->pc = 0x12DC94u;
label_12dc94:
    // 0x12dc94: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x12dc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12dc98:
    // 0x12dc98: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12dc9c:
    // 0x12dc9c: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x12dc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12dca0:
    // 0x12dca0: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12dca4:
    // 0x12dca4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12dca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12dca8:
    // 0x12dca8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12dcac:
    // 0x12dcac: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12dcacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12dcb0:
    // 0x12dcb0: 0x12e0ffb3  beqz        $s7, . + 4 + (-0x4D << 2)
label_12dcb4:
    if (ctx->pc == 0x12DCB4u) {
        ctx->pc = 0x12DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB0u;
        // 0x12dcb4: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCB8u;
        goto label_12dcb8;
    }
    ctx->pc = 0x12DCB0u;
    {
        const bool branch_taken_0x12dcb0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB0u;
        // 0x12dcb4: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb0) {
            ctx->pc = 0x12DB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db80;
        }
    }
    ctx->pc = 0x12DCB8u;
label_12dcb8:
    // 0x12dcb8: 0x5dc00006  bgtzl       $t6, . + 4 + (0x6 << 2)
label_12dcbc:
    if (ctx->pc == 0x12DCBCu) {
        ctx->pc = 0x12DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB8u;
        // 0x12dcbc: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCC0u;
        goto label_12dcc0;
    }
    ctx->pc = 0x12DCB8u;
    {
        const bool branch_taken_0x12dcb8 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x12dcb8) {
            ctx->pc = 0x12DCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DCB8u;
            // 0x12dcbc: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DCD4u;
            goto label_12dcd4;
        }
    }
    ctx->pc = 0x12DCC0u;
label_12dcc0:
    // 0x12dcc0: 0xc04a566  jal         func_129598
label_12dcc4:
    if (ctx->pc == 0x12DCC4u) {
        ctx->pc = 0x12DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCC0u;
        // 0x12dcc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCC8u;
        goto label_12dcc8;
    }
    ctx->pc = 0x12DCC0u;
    SET_GPR_U32(ctx, 31, 0x12DCC8u);
    ctx->pc = 0x12DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCC0u;
    // 0x12dcc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12DCC0u, 0x12DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCC8u;
label_12dcc8:
    // 0x12dcc8: 0x5440fed2  bnel        $v0, $zero, . + 4 + (-0x12E << 2)
label_12dccc:
    if (ctx->pc == 0x12DCCCu) {
        ctx->pc = 0x12DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCC8u;
        // 0x12dccc: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCD0u;
        goto label_12dcd0;
    }
    ctx->pc = 0x12DCC8u;
    {
        const bool branch_taken_0x12dcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dcc8) {
            ctx->pc = 0x12DCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DCC8u;
            // 0x12dccc: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DCD0u;
label_12dcd0:
    // 0x12dcd0: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12dcd4:
    // 0x12dcd4: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12dcd4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12dcd8:
    // 0x12dcd8: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12dcd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12dcdc:
    // 0x12dcdc: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12dcdcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12dce0:
    // 0x12dce0: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12dce0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12dce4:
    // 0x12dce4: 0x51c0ffed  beql        $t6, $zero, . + 4 + (-0x13 << 2)
label_12dce8:
    if (ctx->pc == 0x12DCE8u) {
        ctx->pc = 0x12DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCE4u;
        // 0x12dce8: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCECu;
        goto label_12dcec;
    }
    ctx->pc = 0x12DCE4u;
    {
        const bool branch_taken_0x12dce4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dce4) {
            ctx->pc = 0x12DCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DCE4u;
            // 0x12dce8: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dc9c;
        }
    }
    ctx->pc = 0x12DCECu;
label_12dcec:
    // 0x12dcec: 0x1000fec9  b           . + 4 + (-0x137 << 2)
label_12dcf0:
    if (ctx->pc == 0x12DCF0u) {
        ctx->pc = 0x12DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCECu;
        // 0x12dcf0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DCF4u;
        goto label_12dcf4;
    }
    ctx->pc = 0x12DCECu;
    {
        const bool branch_taken_0x12dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCECu;
        // 0x12dcf0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcec) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DCF4u;
label_12dcf4:
    // 0x12dcf4: 0x0  nop
    ctx->pc = 0x12dcf4u;
    // NOP
label_12dcf8:
    // 0x12dcf8: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12dcfc:
    // 0x12dcfc: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12dd00:
    // 0x12dd00: 0x25ebb7c8  addiu       $t3, $t7, -0x4838
    ctx->pc = 0x12dd00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
label_12dd04:
    // 0x12dd04: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12dd04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12dd08:
    // 0x12dd08: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12dd0c:
    // 0x12dd0c: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12dd0cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12dd10:
    // 0x12dd10: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12dd14:
    // 0x12dd14: 0x8db60000  lw          $s6, 0x0($t5)
    ctx->pc = 0x12dd14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_12dd18:
    // 0x12dd18: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12dd1c:
    // 0x12dd1c: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12dd1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12dd20:
    // 0x12dd20: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12dd20u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12dd24:
    // 0x12dd24: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12dd24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12dd28:
    // 0x12dd28: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
label_12dd2c:
    if (ctx->pc == 0x12DD2Cu) {
        ctx->pc = 0x12DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD28u;
        // 0x12dd2c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD30u;
        goto label_12dd30;
    }
    ctx->pc = 0x12DD28u;
    {
        const bool branch_taken_0x12dd28 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD28u;
        // 0x12dd2c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd28) {
            ctx->pc = 0x12DD94u;
            goto label_12dd94;
        }
    }
    ctx->pc = 0x12DD30u;
label_12dd30:
    // 0x12dd30: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x12dd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12dd34:
    // 0x12dd34: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12dd34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12dd38:
    // 0x12dd38: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12dd3c:
    // 0x12dd3c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12dd3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12dd40:
    // 0x12dd40: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12dd44:
    // 0x12dd44: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12dd48:
    // 0x12dd48: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12dd48u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12dd4c:
    // 0x12dd4c: 0xa2ce0000  sb          $t6, 0x0($s6)
    ctx->pc = 0x12dd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
label_12dd50:
    // 0x12dd50: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x12dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
label_12dd54:
    // 0x12dd54: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_12dd58:
    if (ctx->pc == 0x12DD58u) {
        ctx->pc = 0x12DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD54u;
        // 0x12dd58: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD5Cu;
        goto label_12dd5c;
    }
    ctx->pc = 0x12DD54u;
    {
        const bool branch_taken_0x12dd54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD54u;
        // 0x12dd58: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd54) {
            ctx->pc = 0x12DD94u;
            goto label_12dd94;
        }
    }
    ctx->pc = 0x12DD5Cu;
label_12dd5c:
    // 0x12dd5c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12dd5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12dd60:
    // 0x12dd60: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12dd64:
    if (ctx->pc == 0x12DD64u) {
        ctx->pc = 0x12DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD60u;
        // 0x12dd64: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD68u;
        goto label_12dd68;
    }
    ctx->pc = 0x12DD60u;
    {
        const bool branch_taken_0x12dd60 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12dd60) {
            ctx->pc = 0x12DD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DD60u;
            // 0x12dd64: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DD7Cu;
            goto label_12dd7c;
        }
    }
    ctx->pc = 0x12DD68u;
label_12dd68:
    // 0x12dd68: 0xc04a566  jal         func_129598
label_12dd6c:
    if (ctx->pc == 0x12DD6Cu) {
        ctx->pc = 0x12DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD68u;
        // 0x12dd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD70u;
        goto label_12dd70;
    }
    ctx->pc = 0x12DD68u;
    SET_GPR_U32(ctx, 31, 0x12DD70u);
    ctx->pc = 0x12DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD68u;
    // 0x12dd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12DD68u, 0x12DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD70u;
label_12dd70:
    // 0x12dd70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12dd74:
    if (ctx->pc == 0x12DD74u) {
        ctx->pc = 0x12DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD70u;
        // 0x12dd74: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD78u;
        goto label_12dd78;
    }
    ctx->pc = 0x12DD70u;
    {
        const bool branch_taken_0x12dd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD70u;
        // 0x12dd74: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd70) {
            ctx->pc = 0x12DD98u;
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DD78u;
label_12dd78:
    // 0x12dd78: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12dd78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12dd7c:
    // 0x12dd7c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12dd7cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12dd80:
    // 0x12dd80: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12dd80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12dd84:
    // 0x12dd84: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12dd84u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12dd88:
    // 0x12dd88: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12dd88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12dd8c:
    // 0x12dd8c: 0x51c0ffea  beql        $t6, $zero, . + 4 + (-0x16 << 2)
label_12dd90:
    if (ctx->pc == 0x12DD90u) {
        ctx->pc = 0x12DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD8Cu;
        // 0x12dd90: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DD94u;
        goto label_12dd94;
    }
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12DD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DD8Cu;
            // 0x12dd90: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DD38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dd38;
        }
    }
    ctx->pc = 0x12DD94u;
label_12dd94:
    // 0x12dd94: 0x2d27823  subu        $t7, $s6, $s2
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_12dd98:
    // 0x12dd98: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12dd98u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12dd9c:
    // 0x12dd9c: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
label_12dda0:
    if (ctx->pc == 0x12DDA0u) {
        ctx->pc = 0x12DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD9Cu;
        // 0x12dda0: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDA4u;
        goto label_12dda4;
    }
    ctx->pc = 0x12DD9Cu;
    {
        const bool branch_taken_0x12dd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD9Cu;
        // 0x12dda0: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd9c) {
            ctx->pc = 0x12DB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db08;
        }
    }
    ctx->pc = 0x12DDA4u;
label_12dda4:
    // 0x12dda4: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12dda4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12dda8:
    // 0x12dda8: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_12ddac:
    // 0x12ddac: 0x2eee015d  sltiu       $t6, $s7, 0x15D
    ctx->pc = 0x12ddacu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_12ddb0:
    // 0x12ddb0: 0x369402c0  ori         $s4, $s4, 0x2C0
    ctx->pc = 0x12ddb0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)704);
label_12ddb4:
    // 0x12ddb4: 0x1eeb80a  movz        $s7, $t7, $t6
    ctx->pc = 0x12ddb4u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_12ddb8:
    // 0x12ddb8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12ddb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12ddbc:
    // 0x12ddbc: 0x12e00022  beqz        $s7, . + 4 + (0x22 << 2)
label_12ddc0:
    if (ctx->pc == 0x12DDC0u) {
        ctx->pc = 0x12DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDBCu;
        // 0x12ddc0: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDC4u;
        goto label_12ddc4;
    }
    ctx->pc = 0x12DDBCu;
    {
        const bool branch_taken_0x12ddbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDBCu;
        // 0x12ddc0: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddbc) {
            ctx->pc = 0x12DE48u;
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DDC4u;
label_12ddc4:
    // 0x12ddc4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ddc8:
    // 0x12ddc8: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x12ddc8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12ddcc:
    // 0x12ddcc: 0x260effd5  addiu       $t6, $s0, -0x2B
    ctx->pc = 0x12ddccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_12ddd0:
    // 0x12ddd0: 0x2dcf004e  sltiu       $t7, $t6, 0x4E
    ctx->pc = 0x12ddd0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_12ddd4:
    // 0x12ddd4: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
label_12ddd8:
    if (ctx->pc == 0x12DDD8u) {
        ctx->pc = 0x12DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDD4u;
        // 0x12ddd8: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDDCu;
        goto label_12dddc;
    }
    ctx->pc = 0x12DDD4u;
    {
        const bool branch_taken_0x12ddd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDD4u;
        // 0x12ddd8: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddd4) {
            ctx->pc = 0x12DE48u;
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DDDCu;
label_12dddc:
    // 0x12dddc: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12dddcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12dde0:
    // 0x12dde0: 0x25cebf98  addiu       $t6, $t6, -0x4068
    ctx->pc = 0x12dde0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950808));
label_12dde4:
    // 0x12dde4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12dde4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12dde8:
    // 0x12dde8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12dde8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12ddec:
    // 0x12ddec: 0x1a00008  jr          $t5
label_12ddf0:
    if (ctx->pc == 0x12DDF0u) {
        ctx->pc = 0x12DDF4u;
        goto label_12ddf4;
    }
    ctx->pc = 0x12DDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DDF4u: goto label_12ddf4;
            case 0x12DE48u: goto label_12de48;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12E000u: goto label_12e000;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DDECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12DDF4u;
label_12ddf4:
    // 0x12ddf4: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_12ddf8:
    if (ctx->pc == 0x12DDF8u) {
        ctx->pc = 0x12DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDF4u;
        // 0x12ddf8: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DDFCu;
        goto label_12ddfc;
    }
    ctx->pc = 0x12DDF4u;
    {
        const bool branch_taken_0x12ddf4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDF4u;
        // 0x12ddf8: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddf4) {
            ctx->pc = 0x12DE08u;
            goto label_12de08;
        }
    }
    ctx->pc = 0x12DDFCu;
label_12ddfc:
    // 0x12ddfc: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x12ddfcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12de00:
    // 0x12de00: 0x36940100  ori         $s4, $s4, 0x100
    ctx->pc = 0x12de00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
label_12de04:
    // 0x12de04: 0x328f0200  andi        $t7, $s4, 0x200
    ctx->pc = 0x12de04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
label_12de08:
    // 0x12de08: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
label_12de0c:
    if (ctx->pc == 0x12DE0Cu) {
        ctx->pc = 0x12DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE08u;
        // 0x12de0c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE10u;
        goto label_12de10;
    }
    ctx->pc = 0x12DE08u;
    {
        const bool branch_taken_0x12de08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE08u;
        // 0x12de0c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de08) {
            ctx->pc = 0x12DE14u;
            goto label_12de14;
        }
    }
    ctx->pc = 0x12DE10u;
label_12de10:
    // 0x12de10: 0x240ffd3f  addiu       $t7, $zero, -0x2C1
    ctx->pc = 0x12de10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
label_12de14:
    // 0x12de14: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12de14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12de18:
    // 0x12de18: 0xa2d00000  sb          $s0, 0x0($s6)
    ctx->pc = 0x12de18u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 16));
label_12de1c:
    // 0x12de1c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12de1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12de20:
    // 0x12de20: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12de20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12de24:
    // 0x12de24: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12de24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12de28:
    // 0x12de28: 0x19e00052  blez        $t7, . + 4 + (0x52 << 2)
label_12de2c:
    if (ctx->pc == 0x12DE2Cu) {
        ctx->pc = 0x12DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE28u;
        // 0x12de2c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE30u;
        goto label_12de30;
    }
    ctx->pc = 0x12DE28u;
    {
        const bool branch_taken_0x12de28 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x12DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE28u;
        // 0x12de2c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de28) {
            ctx->pc = 0x12DF74u;
            goto label_12df74;
        }
    }
    ctx->pc = 0x12DE30u;
label_12de30:
    // 0x12de30: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12de30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12de34:
    // 0x12de34: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12de34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12de38:
    // 0x12de38: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12de38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12de3c:
    // 0x12de3c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12de3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12de40:
    // 0x12de40: 0x56e0ffe1  bnel        $s7, $zero, . + 4 + (-0x1F << 2)
label_12de44:
    if (ctx->pc == 0x12DE44u) {
        ctx->pc = 0x12DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE40u;
        // 0x12de44: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE48u;
        goto label_12de48;
    }
    ctx->pc = 0x12DE40u;
    {
        const bool branch_taken_0x12de40 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x12de40) {
            ctx->pc = 0x12DE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE40u;
            // 0x12de44: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DDC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ddc8;
        }
    }
    ctx->pc = 0x12DE48u;
label_12de48:
    // 0x12de48: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12de48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12de4c:
    // 0x12de4c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
label_12de50:
    if (ctx->pc == 0x12DE50u) {
        ctx->pc = 0x12DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE4Cu;
        // 0x12de50: 0x27ae0100  addiu       $t6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE54u;
        goto label_12de54;
    }
    ctx->pc = 0x12DE4Cu;
    {
        const bool branch_taken_0x12de4c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE4Cu;
        // 0x12de50: 0x27ae0100  addiu       $t6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de4c) {
            ctx->pc = 0x12DE78u;
            goto label_12de78;
        }
    }
    ctx->pc = 0x12DE54u;
label_12de54:
    // 0x12de54: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x12de54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12de58:
    // 0x12de58: 0x51e0feba  beql        $t7, $zero, . + 4 + (-0x146 << 2)
label_12de5c:
    if (ctx->pc == 0x12DE5Cu) {
        ctx->pc = 0x12DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE58u;
        // 0x12de5c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE60u;
        goto label_12de60;
    }
    ctx->pc = 0x12DE58u;
    {
        const bool branch_taken_0x12de58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de58) {
            ctx->pc = 0x12DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE58u;
            // 0x12de5c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d944;
        }
    }
    ctx->pc = 0x12DE60u;
label_12de60:
    // 0x12de60: 0x82c4ffff  lb          $a0, -0x1($s6)
    ctx->pc = 0x12de60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294967295)));
label_12de64:
    // 0x12de64: 0xc04af10  jal         func_12BC40
label_12de68:
    if (ctx->pc == 0x12DE68u) {
        ctx->pc = 0x12DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE64u;
        // 0x12de68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE6Cu;
        goto label_12de6c;
    }
    ctx->pc = 0x12DE64u;
    SET_GPR_U32(ctx, 31, 0x12DE6Cu);
    ctx->pc = 0x12DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE64u;
    // 0x12de68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC40u, 0x12DE64u, 0x12DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE6Cu;
label_12de6c:
    // 0x12de6c: 0x1000feb5  b           . + 4 + (-0x14B << 2)
label_12de70:
    if (ctx->pc == 0x12DE70u) {
        ctx->pc = 0x12DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE6Cu;
        // 0x12de70: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE74u;
        goto label_12de74;
    }
    ctx->pc = 0x12DE6Cu;
    {
        const bool branch_taken_0x12de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE6Cu;
        // 0x12de70: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de6c) {
            ctx->pc = 0x12D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d944;
        }
    }
    ctx->pc = 0x12DE74u;
label_12de74:
    // 0x12de74: 0x0  nop
    ctx->pc = 0x12de74u;
    // NOP
label_12de78:
    // 0x12de78: 0x82d0ffff  lb          $s0, -0x1($s6)
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294967295)));
label_12de7c:
    // 0x12de7c: 0x240f0078  addiu       $t7, $zero, 0x78
    ctx->pc = 0x12de7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_12de80:
    // 0x12de80: 0x120f0003  beq         $s0, $t7, . + 4 + (0x3 << 2)
label_12de84:
    if (ctx->pc == 0x12DE84u) {
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE88u;
        goto label_12de88;
    }
    ctx->pc = 0x12DE80u;
    {
        const bool branch_taken_0x12de80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de80) {
            ctx->pc = 0x12DE90u;
            goto label_12de90;
        }
    }
    ctx->pc = 0x12DE88u;
label_12de88:
    // 0x12de88: 0x160f0006  bne         $s0, $t7, . + 4 + (0x6 << 2)
label_12de8c:
    if (ctx->pc == 0x12DE8Cu) {
        ctx->pc = 0x12DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE88u;
        // 0x12de8c: 0x328f0008  andi        $t7, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DE90u;
        goto label_12de90;
    }
    ctx->pc = 0x12DE88u;
    {
        const bool branch_taken_0x12de88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE88u;
        // 0x12de8c: 0x328f0008  andi        $t7, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de88) {
            ctx->pc = 0x12DEA4u;
            goto label_12dea4;
        }
    }
    ctx->pc = 0x12DE90u;
label_12de90:
    // 0x12de90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12de90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12de94:
    // 0x12de94: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12de94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12de98:
    // 0x12de98: 0xc04af10  jal         func_12BC40
label_12de9c:
    if (ctx->pc == 0x12DE9Cu) {
        ctx->pc = 0x12DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE98u;
        // 0x12de9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEA0u;
        goto label_12dea0;
    }
    ctx->pc = 0x12DE98u;
    SET_GPR_U32(ctx, 31, 0x12DEA0u);
    ctx->pc = 0x12DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE98u;
    // 0x12de9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC40u, 0x12DE98u, 0x12DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEA0u;
label_12dea0:
    // 0x12dea0: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12dea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12dea4:
    // 0x12dea4: 0x15e00015  bnez        $t7, . + 4 + (0x15 << 2)
label_12dea8:
    if (ctx->pc == 0x12DEA8u) {
        ctx->pc = 0x12DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEA4u;
        // 0x12dea8: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEACu;
        goto label_12deac;
    }
    ctx->pc = 0x12DEA4u;
    {
        const bool branch_taken_0x12dea4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEA4u;
        // 0x12dea8: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dea4) {
            ctx->pc = 0x12DEFCu;
            goto label_12defc;
        }
    }
    ctx->pc = 0x12DEACu;
label_12deac:
    // 0x12deac: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12deacu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12deb0:
    // 0x12deb0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x12deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12deb4:
    // 0x12deb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12deb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12deb8:
    // 0x12deb8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x12deb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12debc:
    // 0x12debc: 0x8faf026c  lw          $t7, 0x26C($sp)
    ctx->pc = 0x12debcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_12dec0:
    // 0x12dec0: 0x1e0f809  jalr        $t7
label_12dec4:
    if (ctx->pc == 0x12DEC4u) {
        ctx->pc = 0x12DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEC0u;
        // 0x12dec4: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DEC8u;
        goto label_12dec8;
    }
    ctx->pc = 0x12DEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x12DEC8u);
        ctx->pc = 0x12DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEC0u;
        // 0x12dec4: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DEC0u, 0x12DEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12DEC8u;
label_12dec8:
    // 0x12dec8: 0x328f0010  andi        $t7, $s4, 0x10
    ctx->pc = 0x12dec8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
label_12decc:
    // 0x12decc: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
label_12ded0:
    if (ctx->pc == 0x12DED0u) {
        ctx->pc = 0x12DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DECCu;
        // 0x12ded0: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DED4u;
        goto label_12ded4;
    }
    ctx->pc = 0x12DECCu;
    {
        const bool branch_taken_0x12decc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DECCu;
        // 0x12ded0: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12decc) {
            ctx->pc = 0x12DF08u;
            goto label_12df08;
        }
    }
    ctx->pc = 0x12DED4u;
label_12ded4:
    // 0x12ded4: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x12ded4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_12ded8:
    // 0x12ded8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x12ded8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_12dedc:
    // 0x12dedc: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12dedcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12dee0:
    // 0x12dee0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12dee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12dee4:
    // 0x12dee4: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x12dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
label_12dee8:
    // 0x12dee8: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12deec:
    // 0x12deec: 0x8fae0268  lw          $t6, 0x268($sp)
    ctx->pc = 0x12deecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12def0:
    // 0x12def0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12def0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_12def4:
    // 0x12def4: 0xafae0268  sw          $t6, 0x268($sp)
    ctx->pc = 0x12def4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 14));
label_12def8:
    // 0x12def8: 0x27ad0100  addiu       $t5, $sp, 0x100
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12defc:
    // 0x12defc: 0x2cd7823  subu        $t7, $s6, $t5
    ctx->pc = 0x12defcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
label_12df00:
    // 0x12df00: 0x1000fe44  b           . + 4 + (-0x1BC << 2)
label_12df04:
    if (ctx->pc == 0x12DF04u) {
        ctx->pc = 0x12DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF00u;
        // 0x12df04: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF08u;
        goto label_12df08;
    }
    ctx->pc = 0x12DF00u;
    {
        const bool branch_taken_0x12df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF00u;
        // 0x12df04: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df00) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12DF08u;
label_12df08:
    // 0x12df08: 0x328f0004  andi        $t7, $s4, 0x4
    ctx->pc = 0x12df08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_12df0c:
    // 0x12df0c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_12df10:
    if (ctx->pc == 0x12DF10u) {
        ctx->pc = 0x12DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF0Cu;
        // 0x12df10: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF14u;
        goto label_12df14;
    }
    ctx->pc = 0x12DF0Cu;
    {
        const bool branch_taken_0x12df0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF0Cu;
        // 0x12df10: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df0c) {
            ctx->pc = 0x12DF30u;
            goto label_12df30;
        }
    }
    ctx->pc = 0x12DF14u;
label_12df14:
    // 0x12df14: 0x304effff  andi        $t6, $v0, 0xFFFF
    ctx->pc = 0x12df14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12df18:
    // 0x12df18: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12df18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12df1c:
    // 0x12df1c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12df1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12df20:
    // 0x12df20: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12df24:
    // 0x12df24: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12df24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12df28:
    // 0x12df28: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_12df2c:
    if (ctx->pc == 0x12DF2Cu) {
        ctx->pc = 0x12DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF28u;
        // 0x12df2c: 0xa5ee0000  sh          $t6, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF30u;
        goto label_12df30;
    }
    ctx->pc = 0x12DF28u;
    {
        const bool branch_taken_0x12df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF28u;
        // 0x12df2c: 0xa5ee0000  sh          $t6, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df28) {
            ctx->pc = 0x12DEECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12deec;
        }
    }
    ctx->pc = 0x12DF30u;
label_12df30:
    // 0x12df30: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12df30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12df34:
    // 0x12df34: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_12df38:
    if (ctx->pc == 0x12DF38u) {
        ctx->pc = 0x12DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF34u;
        // 0x12df38: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF3Cu;
        goto label_12df3c;
    }
    ctx->pc = 0x12DF34u;
    {
        const bool branch_taken_0x12df34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF34u;
        // 0x12df38: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df34) {
            ctx->pc = 0x12DF54u;
            goto label_12df54;
        }
    }
    ctx->pc = 0x12DF3Cu;
label_12df3c:
    // 0x12df3c: 0x8fae0264  lw          $t6, 0x264($sp)
    ctx->pc = 0x12df3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12df40:
    // 0x12df40: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12df40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12df44:
    // 0x12df44: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12df44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_12df48:
    // 0x12df48: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12df48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12df4c:
    // 0x12df4c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_12df50:
    if (ctx->pc == 0x12DF50u) {
        ctx->pc = 0x12DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF4Cu;
        // 0x12df50: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF54u;
        goto label_12df54;
    }
    ctx->pc = 0x12DF4Cu;
    {
        const bool branch_taken_0x12df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF4Cu;
        // 0x12df50: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df4c) {
            ctx->pc = 0x12DEECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12deec;
        }
    }
    ctx->pc = 0x12DF54u;
label_12df54:
    // 0x12df54: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x12df54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
label_12df58:
    // 0x12df58: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12df58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12df5c:
    // 0x12df5c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12df5cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
label_12df60:
    // 0x12df60: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12df60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12df64:
    // 0x12df64: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12df64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12df68:
    // 0x12df68: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12df68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12df6c:
    // 0x12df6c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_12df70:
    if (ctx->pc == 0x12DF70u) {
        ctx->pc = 0x12DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF6Cu;
        // 0x12df70: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF74u;
        goto label_12df74;
    }
    ctx->pc = 0x12DF6Cu;
    {
        const bool branch_taken_0x12df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF6Cu;
        // 0x12df70: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df6c) {
            ctx->pc = 0x12DEECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12deec;
        }
    }
    ctx->pc = 0x12DF74u;
label_12df74:
    // 0x12df74: 0xc04a566  jal         func_129598
label_12df78:
    if (ctx->pc == 0x12DF78u) {
        ctx->pc = 0x12DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF74u;
        // 0x12df78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF7Cu;
        goto label_12df7c;
    }
    ctx->pc = 0x12DF74u;
    SET_GPR_U32(ctx, 31, 0x12DF7Cu);
    ctx->pc = 0x12DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF74u;
    // 0x12df78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12DF74u, 0x12DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF7Cu;
label_12df7c:
    // 0x12df7c: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_12df80:
    if (ctx->pc == 0x12DF80u) {
        ctx->pc = 0x12DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF7Cu;
        // 0x12df80: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF84u;
        goto label_12df84;
    }
    ctx->pc = 0x12DF7Cu;
    {
        const bool branch_taken_0x12df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF7Cu;
        // 0x12df80: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df7c) {
            ctx->pc = 0x12DE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de4c;
        }
    }
    ctx->pc = 0x12DF84u;
label_12df84:
    // 0x12df84: 0x1000ffae  b           . + 4 + (-0x52 << 2)
label_12df88:
    if (ctx->pc == 0x12DF88u) {
        ctx->pc = 0x12DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF84u;
        // 0x12df88: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF8Cu;
        goto label_12df8c;
    }
    ctx->pc = 0x12DF84u;
    {
        const bool branch_taken_0x12df84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF84u;
        // 0x12df88: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df84) {
            ctx->pc = 0x12DE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de40;
        }
    }
    ctx->pc = 0x12DF8Cu;
label_12df8c:
    // 0x12df8c: 0x328f0040  andi        $t7, $s4, 0x40
    ctx->pc = 0x12df8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_12df90:
    // 0x12df90: 0x11e0ffad  beqz        $t7, . + 4 + (-0x53 << 2)
label_12df94:
    if (ctx->pc == 0x12DF94u) {
        ctx->pc = 0x12DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF90u;
        // 0x12df94: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF98u;
        goto label_12df98;
    }
    ctx->pc = 0x12DF90u;
    {
        const bool branch_taken_0x12df90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF90u;
        // 0x12df94: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df90) {
            ctx->pc = 0x12DE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DF98u;
label_12df98:
    // 0x12df98: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
label_12df9c:
    if (ctx->pc == 0x12DF9Cu) {
        ctx->pc = 0x12DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF98u;
        // 0x12df9c: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFA0u;
        goto label_12dfa0;
    }
    ctx->pc = 0x12DF98u;
    {
        const bool branch_taken_0x12df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF98u;
        // 0x12df9c: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df98) {
            ctx->pc = 0x12DE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DFA0u;
label_12dfa0:
    // 0x12dfa0: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12dfa0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12dfa4:
    // 0x12dfa4: 0x1e7840  sll         $t7, $fp, 1
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_12dfa8:
    // 0x12dfa8: 0x25cebd70  addiu       $t6, $t6, -0x4290
    ctx->pc = 0x12dfa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950256));
label_12dfac:
    // 0x12dfac: 0x240dfe3f  addiu       $t5, $zero, -0x1C1
    ctx->pc = 0x12dfacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_12dfb0:
    // 0x12dfb0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12dfb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12dfb4:
    // 0x12dfb4: 0x28da024  and         $s4, $s4, $t5
    ctx->pc = 0x12dfb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 13));
label_12dfb8:
    // 0x12dfb8: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_12dfbc:
    if (ctx->pc == 0x12DFBCu) {
        ctx->pc = 0x12DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFB8u;
        // 0x12dfbc: 0x85fe0000  lh          $fp, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFC0u;
        goto label_12dfc0;
    }
    ctx->pc = 0x12DFB8u;
    {
        const bool branch_taken_0x12dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFB8u;
        // 0x12dfbc: 0x85fe0000  lh          $fp, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfb8) {
            ctx->pc = 0x12DE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DFC0u;
label_12dfc0:
    // 0x12dfc0: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12dfc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12dfc4:
    // 0x12dfc4: 0x1e7840  sll         $t7, $fp, 1
    ctx->pc = 0x12dfc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_12dfc8:
    // 0x12dfc8: 0x25cebd70  addiu       $t6, $t6, -0x4290
    ctx->pc = 0x12dfc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950256));
label_12dfcc:
    // 0x12dfcc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12dfd0:
    // 0x12dfd0: 0x85fe0000  lh          $fp, 0x0($t7)
    ctx->pc = 0x12dfd0u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_12dfd4:
    // 0x12dfd4: 0x2bce0009  slti        $t6, $fp, 0x9
    ctx->pc = 0x12dfd4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_12dfd8:
    // 0x12dfd8: 0x15c0ff9b  bnez        $t6, . + 4 + (-0x65 << 2)
label_12dfdc:
    if (ctx->pc == 0x12DFDCu) {
        ctx->pc = 0x12DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFD8u;
        // 0x12dfdc: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFE0u;
        goto label_12dfe0;
    }
    ctx->pc = 0x12DFD8u;
    {
        const bool branch_taken_0x12dfd8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFD8u;
        // 0x12dfdc: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfd8) {
            ctx->pc = 0x12DE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DFE0u;
label_12dfe0:
    // 0x12dfe0: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
label_12dfe4:
    if (ctx->pc == 0x12DFE4u) {
        ctx->pc = 0x12DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFE0u;
        // 0x12dfe4: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFE8u;
        goto label_12dfe8;
    }
    ctx->pc = 0x12DFE0u;
    {
        const bool branch_taken_0x12dfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFE0u;
        // 0x12dfe4: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfe0) {
            ctx->pc = 0x12DE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DFE8u;
label_12dfe8:
    // 0x12dfe8: 0x2bcf000b  slti        $t7, $fp, 0xB
    ctx->pc = 0x12dfe8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_12dfec:
    // 0x12dfec: 0x15e0ff96  bnez        $t7, . + 4 + (-0x6A << 2)
label_12dff0:
    if (ctx->pc == 0x12DFF0u) {
        ctx->pc = 0x12DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFECu;
        // 0x12dff0: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFF4u;
        goto label_12dff4;
    }
    ctx->pc = 0x12DFECu;
    {
        const bool branch_taken_0x12dfec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFECu;
        // 0x12dff0: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfec) {
            ctx->pc = 0x12DE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DFF4u;
label_12dff4:
    // 0x12dff4: 0x1000ff88  b           . + 4 + (-0x78 << 2)
label_12dff8:
    if (ctx->pc == 0x12DFF8u) {
        ctx->pc = 0x12DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFF4u;
        // 0x12dff8: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFFCu;
        goto label_12dffc;
    }
    ctx->pc = 0x12DFF4u;
    {
        const bool branch_taken_0x12dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFF4u;
        // 0x12dff8: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dff4) {
            ctx->pc = 0x12DE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DFFCu;
label_12dffc:
    // 0x12dffc: 0x0  nop
    ctx->pc = 0x12dffcu;
    // NOP
label_12e000:
    // 0x12e000: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12e000u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12e004:
    // 0x12e004: 0x11e0ff90  beqz        $t7, . + 4 + (-0x70 << 2)
label_12e008:
    if (ctx->pc == 0x12E008u) {
        ctx->pc = 0x12E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E004u;
        // 0x12e008: 0x27af0101  addiu       $t7, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E00Cu;
        goto label_12e00c;
    }
    ctx->pc = 0x12E004u;
    {
        const bool branch_taken_0x12e004 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E004u;
        // 0x12e008: 0x27af0101  addiu       $t7, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e004) {
            ctx->pc = 0x12DE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de48;
        }
    }
    ctx->pc = 0x12E00Cu;
label_12e00c:
    // 0x12e00c: 0x16cfff8e  bne         $s6, $t7, . + 4 + (-0x72 << 2)
label_12e010:
    if (ctx->pc == 0x12E010u) {
        ctx->pc = 0x12E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E00Cu;
        // 0x12e010: 0x240ffeff  addiu       $t7, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E014u;
        goto label_12e014;
    }
    ctx->pc = 0x12E00Cu;
    {
        const bool branch_taken_0x12e00c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 15));
        ctx->pc = 0x12E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E00Cu;
        // 0x12e010: 0x240ffeff  addiu       $t7, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e00c) {
            ctx->pc = 0x12DE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de48;
        }
    }
    ctx->pc = 0x12E014u;
label_12e014:
    // 0x12e014: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
label_12e018:
    if (ctx->pc == 0x12E018u) {
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E014u;
        // 0x12e018: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E01Cu;
        goto label_12e01c;
    }
    ctx->pc = 0x12E014u;
    {
        const bool branch_taken_0x12e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E014u;
        // 0x12e018: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e014) {
            ctx->pc = 0x12DE14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12de14;
        }
    }
    ctx->pc = 0x12E01Cu;
label_12e01c:
    // 0x12e01c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12e01cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12e020:
    // 0x12e020: 0xffa00270  sd          $zero, 0x270($sp)
    ctx->pc = 0x12e020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 0));
label_12e024:
    // 0x12e024: 0x2eee015d  sltiu       $t6, $s7, 0x15D
    ctx->pc = 0x12e024u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_12e028:
    // 0x12e028: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x12e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_12e02c:
    // 0x12e02c: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x12e02cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_12e030:
    // 0x12e030: 0xffa00278  sd          $zero, 0x278($sp)
    ctx->pc = 0x12e030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 0));
label_12e034:
    // 0x12e034: 0x1eeb80a  movz        $s7, $t7, $t6
    ctx->pc = 0x12e034u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_12e038:
    // 0x12e038: 0x369403c0  ori         $s4, $s4, 0x3C0
    ctx->pc = 0x12e038u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)960);
label_12e03c:
    // 0x12e03c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12e03cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12e040:
    // 0x12e040: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e044:
    // 0x12e044: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
label_12e048:
    if (ctx->pc == 0x12E048u) {
        ctx->pc = 0x12E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E044u;
        // 0x12e048: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E04Cu;
        goto label_12e04c;
    }
    ctx->pc = 0x12E044u;
    {
        const bool branch_taken_0x12e044 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E044u;
        // 0x12e048: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e044) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E04Cu;
label_12e04c:
    // 0x12e04c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e050:
    // 0x12e050: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x12e050u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12e054:
    // 0x12e054: 0x260effd5  addiu       $t6, $s0, -0x2B
    ctx->pc = 0x12e054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_12e058:
    // 0x12e058: 0x2dcf003b  sltiu       $t7, $t6, 0x3B
    ctx->pc = 0x12e058u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_12e05c:
    // 0x12e05c: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_12e060:
    if (ctx->pc == 0x12E060u) {
        ctx->pc = 0x12E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E05Cu;
        // 0x12e060: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E064u;
        goto label_12e064;
    }
    ctx->pc = 0x12E05Cu;
    {
        const bool branch_taken_0x12e05c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E05Cu;
        // 0x12e060: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e05c) {
            ctx->pc = 0x12E0B8u;
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E064u;
label_12e064:
    // 0x12e064: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12e064u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12e068:
    // 0x12e068: 0x25cec0d0  addiu       $t6, $t6, -0x3F30
    ctx->pc = 0x12e068u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294951120));
label_12e06c:
    // 0x12e06c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12e070:
    // 0x12e070: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e074:
    // 0x12e074: 0x1a00008  jr          $t5
label_12e078:
    if (ctx->pc == 0x12E078u) {
        ctx->pc = 0x12E07Cu;
        goto label_12e07c;
    }
    ctx->pc = 0x12E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E260u: goto label_12e260;
            case 0x12E278u: goto label_12e278;
            case 0x12E28Cu: goto label_12e28c;
            case 0x12E2A0u: goto label_12e2a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12E07Cu;
label_12e07c:
    // 0x12e07c: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12e07cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12e080:
    // 0x12e080: 0x11e00077  beqz        $t7, . + 4 + (0x77 << 2)
label_12e084:
    if (ctx->pc == 0x12E084u) {
        ctx->pc = 0x12E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E080u;
        // 0x12e084: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E088u;
        goto label_12e088;
    }
    ctx->pc = 0x12E080u;
    {
        const bool branch_taken_0x12e080 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E080u;
        // 0x12e084: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e080) {
            ctx->pc = 0x12E260u;
            goto label_12e260;
        }
    }
    ctx->pc = 0x12E088u;
label_12e088:
    // 0x12e088: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x12e088u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
label_12e08c:
    // 0x12e08c: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12e08cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12e090:
    // 0x12e090: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12e090u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e094:
    // 0x12e094: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12e094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12e098:
    // 0x12e098: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12e098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12e09c:
    // 0x12e09c: 0x19e00069  blez        $t7, . + 4 + (0x69 << 2)
label_12e0a0:
    if (ctx->pc == 0x12E0A0u) {
        ctx->pc = 0x12E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E09Cu;
        // 0x12e0a0: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0A4u;
        goto label_12e0a4;
    }
    ctx->pc = 0x12E09Cu;
    {
        const bool branch_taken_0x12e09c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x12E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E09Cu;
        // 0x12e0a0: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e09c) {
            ctx->pc = 0x12E244u;
            goto label_12e244;
        }
    }
    ctx->pc = 0x12E0A4u;
label_12e0a4:
    // 0x12e0a4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12e0a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e0a8:
    // 0x12e0a8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e0a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12e0ac:
    // 0x12e0ac: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12e0b0:
    // 0x12e0b0: 0x56e0ffe7  bnel        $s7, $zero, . + 4 + (-0x19 << 2)
label_12e0b4:
    if (ctx->pc == 0x12E0B4u) {
        ctx->pc = 0x12E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0B0u;
        // 0x12e0b4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0B8u;
        goto label_12e0b8;
    }
    ctx->pc = 0x12E0B0u;
    {
        const bool branch_taken_0x12e0b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e0b0) {
            ctx->pc = 0x12E0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0B0u;
            // 0x12e0b4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e050;
        }
    }
    ctx->pc = 0x12E0B8u;
label_12e0b8:
    // 0x12e0b8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_12e0bc:
    if (ctx->pc == 0x12E0BCu) {
        ctx->pc = 0x12E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0B8u;
        // 0x12e0bc: 0x240fff7f  addiu       $t7, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0C0u;
        goto label_12e0c0;
    }
    ctx->pc = 0x12E0B8u;
    {
        const bool branch_taken_0x12e0b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0B8u;
        // 0x12e0bc: 0x240fff7f  addiu       $t7, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0b8) {
            ctx->pc = 0x12E0C4u;
            goto label_12e0c4;
        }
    }
    ctx->pc = 0x12E0C0u;
label_12e0c0:
    // 0x12e0c0: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12e0c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12e0c4:
    // 0x12e0c4: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12e0c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12e0c8:
    // 0x12e0c8: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_12e0cc:
    if (ctx->pc == 0x12E0CCu) {
        ctx->pc = 0x12E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0C8u;
        // 0x12e0cc: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0D0u;
        goto label_12e0d0;
    }
    ctx->pc = 0x12E0C8u;
    {
        const bool branch_taken_0x12e0c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0C8u;
        // 0x12e0cc: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0c8) {
            ctx->pc = 0x12E140u;
            goto label_12e140;
        }
    }
    ctx->pc = 0x12E0D0u;
label_12e0d0:
    // 0x12e0d0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
label_12e0d4:
    if (ctx->pc == 0x12E0D4u) {
        ctx->pc = 0x12E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0D0u;
        // 0x12e0d4: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0D8u;
        goto label_12e0d8;
    }
    ctx->pc = 0x12E0D0u;
    {
        const bool branch_taken_0x12e0d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0D0u;
        // 0x12e0d4: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0d0) {
            ctx->pc = 0x12E100u;
            goto label_12e100;
        }
    }
    ctx->pc = 0x12E0D8u;
label_12e0d8:
    // 0x12e0d8: 0x1b6782b  sltu        $t7, $t5, $s6
    ctx->pc = 0x12e0d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12e0dc:
    // 0x12e0dc: 0x11e0fe18  beqz        $t7, . + 4 + (-0x1E8 << 2)
label_12e0e0:
    if (ctx->pc == 0x12E0E0u) {
        ctx->pc = 0x12E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0DCu;
        // 0x12e0e0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0E4u;
        goto label_12e0e4;
    }
    ctx->pc = 0x12E0DCu;
    {
        const bool branch_taken_0x12e0dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0DCu;
        // 0x12e0e0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0dc) {
            ctx->pc = 0x12D940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d940;
        }
    }
    ctx->pc = 0x12E0E4u;
label_12e0e4:
    // 0x12e0e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e0e8:
    // 0x12e0e8: 0xc04af10  jal         func_12BC40
label_12e0ec:
    if (ctx->pc == 0x12E0ECu) {
        ctx->pc = 0x12E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0E8u;
        // 0x12e0ec: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0F0u;
        goto label_12e0f0;
    }
    ctx->pc = 0x12E0E8u;
    SET_GPR_U32(ctx, 31, 0x12E0F0u);
    ctx->pc = 0x12E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0E8u;
    // 0x12e0ec: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC40u, 0x12E0E8u, 0x12E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0F0u;
label_12e0f0:
    // 0x12e0f0: 0x27ae0100  addiu       $t6, $sp, 0x100
    ctx->pc = 0x12e0f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12e0f4:
    // 0x12e0f4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_12e0f8:
    if (ctx->pc == 0x12E0F8u) {
        ctx->pc = 0x12E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0F4u;
        // 0x12e0f8: 0x1d6782b  sltu        $t7, $t6, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0FCu;
        goto label_12e0fc;
    }
    ctx->pc = 0x12E0F4u;
    {
        const bool branch_taken_0x12e0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0F4u;
        // 0x12e0f8: 0x1d6782b  sltu        $t7, $t6, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0f4) {
            ctx->pc = 0x12E0DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0dc;
        }
    }
    ctx->pc = 0x12E0FCu;
label_12e0fc:
    // 0x12e0fc: 0x0  nop
    ctx->pc = 0x12e0fcu;
    // NOP
label_12e100:
    // 0x12e100: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12e100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12e104:
    // 0x12e104: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_12e108:
    // 0x12e108: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12e108u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_12e10c:
    // 0x12e10c: 0x120f0009  beq         $s0, $t7, . + 4 + (0x9 << 2)
label_12e110:
    if (ctx->pc == 0x12E110u) {
        ctx->pc = 0x12E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E10Cu;
        // 0x12e110: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E114u;
        goto label_12e114;
    }
    ctx->pc = 0x12E10Cu;
    {
        const bool branch_taken_0x12e10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E10Cu;
        // 0x12e110: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e10c) {
            ctx->pc = 0x12E134u;
            goto label_12e134;
        }
    }
    ctx->pc = 0x12E114u;
label_12e114:
    // 0x12e114: 0x240f0045  addiu       $t7, $zero, 0x45
    ctx->pc = 0x12e114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_12e118:
    // 0x12e118: 0x120f0006  beq         $s0, $t7, . + 4 + (0x6 << 2)
label_12e11c:
    if (ctx->pc == 0x12E11Cu) {
        ctx->pc = 0x12E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E118u;
        // 0x12e11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E120u;
        goto label_12e120;
    }
    ctx->pc = 0x12E118u;
    {
        const bool branch_taken_0x12e118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E118u;
        // 0x12e11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e118) {
            ctx->pc = 0x12E134u;
            goto label_12e134;
        }
    }
    ctx->pc = 0x12E120u;
label_12e120:
    // 0x12e120: 0xc04af10  jal         func_12BC40
label_12e124:
    if (ctx->pc == 0x12E124u) {
        ctx->pc = 0x12E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E120u;
        // 0x12e124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E128u;
        goto label_12e128;
    }
    ctx->pc = 0x12E120u;
    SET_GPR_U32(ctx, 31, 0x12E128u);
    ctx->pc = 0x12E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E120u;
    // 0x12e124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC40u, 0x12E120u, 0x12E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E128u;
label_12e128:
    // 0x12e128: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12e12c:
    // 0x12e12c: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_12e130:
    // 0x12e130: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12e130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12e134:
    // 0x12e134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e138:
    // 0x12e138: 0xc04af10  jal         func_12BC40
label_12e13c:
    if (ctx->pc == 0x12E13Cu) {
        ctx->pc = 0x12E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E138u;
        // 0x12e13c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E140u;
        goto label_12e140;
    }
    ctx->pc = 0x12E138u;
    SET_GPR_U32(ctx, 31, 0x12E140u);
    ctx->pc = 0x12E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E138u;
    // 0x12e13c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC40u, 0x12E138u, 0x12E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E140u;
label_12e140:
    // 0x12e140: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12e140u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12e144:
    // 0x12e144: 0x55e0fdb4  bnel        $t7, $zero, . + 4 + (-0x24C << 2)
label_12e148:
    if (ctx->pc == 0x12E148u) {
        ctx->pc = 0x12E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E144u;
        // 0x12e148: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E14Cu;
        goto label_12e14c;
    }
    ctx->pc = 0x12E144u;
    {
        const bool branch_taken_0x12e144 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e144) {
            ctx->pc = 0x12E148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E144u;
            // 0x12e148: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d818;
        }
    }
    ctx->pc = 0x12E14Cu;
label_12e14c:
    // 0x12e14c: 0x328e0300  andi        $t6, $s4, 0x300
    ctx->pc = 0x12e14cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)768);
label_12e150:
    // 0x12e150: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x12e150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12e154:
    // 0x12e154: 0x15cf0030  bne         $t6, $t7, . + 4 + (0x30 << 2)
label_12e158:
    if (ctx->pc == 0x12E158u) {
        ctx->pc = 0x12E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E154u;
        // 0x12e158: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E15Cu;
        goto label_12e15c;
    }
    ctx->pc = 0x12E154u;
    {
        const bool branch_taken_0x12e154 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E154u;
        // 0x12e158: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e154) {
            ctx->pc = 0x12E218u;
            goto label_12e218;
        }
    }
    ctx->pc = 0x12E15Cu;
label_12e15c:
    // 0x12e15c: 0xdfaf0270  ld          $t7, 0x270($sp)
    ctx->pc = 0x12e15cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_12e160:
    // 0x12e160: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x12e160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_12e164:
    // 0x12e164: 0x24f902f  dsubu       $s2, $s2, $t7
    ctx->pc = 0x12e164u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 15));
label_12e168:
    // 0x12e168: 0xffb20278  sd          $s2, 0x278($sp)
    ctx->pc = 0x12e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 18));
label_12e16c:
    // 0x12e16c: 0x12302f  dsubu       $a2, $zero, $s2
    ctx->pc = 0x12e16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 18));
label_12e170:
    // 0x12e170: 0xdfad0278  ld          $t5, 0x278($sp)
    ctx->pc = 0x12e170u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_12e174:
    // 0x12e174: 0x11a0000b  beqz        $t5, . + 4 + (0xB << 2)
label_12e178:
    if (ctx->pc == 0x12E178u) {
        ctx->pc = 0x12E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E174u;
        // 0x12e178: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E17Cu;
        goto label_12e17c;
    }
    ctx->pc = 0x12E174u;
    {
        const bool branch_taken_0x12e174 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E174u;
        // 0x12e178: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e174) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12E17Cu;
label_12e17c:
    // 0x12e17c: 0x27af0249  addiu       $t7, $sp, 0x249
    ctx->pc = 0x12e17cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 585));
label_12e180:
    // 0x12e180: 0x8fad0280  lw          $t5, 0x280($sp)
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_12e184:
    // 0x12e184: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x12e184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_12e188:
    // 0x12e188: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x12e188u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_12e18c:
    // 0x12e18c: 0x24a5bd98  addiu       $a1, $a1, -0x4268
    ctx->pc = 0x12e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950296));
label_12e190:
    // 0x12e190: 0x27ae0248  addiu       $t6, $sp, 0x248
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_12e194:
    // 0x12e194: 0x1cf680a  movz        $t5, $t6, $t7
    ctx->pc = 0x12e194u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 14));
label_12e198:
    // 0x12e198: 0xafad0280  sw          $t5, 0x280($sp)
    ctx->pc = 0x12e198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 13));
label_12e19c:
    // 0x12e19c: 0xc04a5f2  jal         func_1297C8
label_12e1a0:
    if (ctx->pc == 0x12E1A0u) {
        ctx->pc = 0x12E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E19Cu;
        // 0x12e1a0: 0x8fa40280  lw          $a0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1A4u;
        goto label_12e1a4;
    }
    ctx->pc = 0x12E19Cu;
    SET_GPR_U32(ctx, 31, 0x12E1A4u);
    ctx->pc = 0x12E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E19Cu;
    // 0x12e1a0: 0x8fa40280  lw          $a0, 0x280($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x12E19Cu, 0x12E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1A4u;
label_12e1a4:
    // 0x12e1a4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x12e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_12e1a8:
    // 0x12e1a8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x12e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12e1ac:
    // 0x12e1ac: 0xc04aa06  jal         func_12A818
label_12e1b0:
    if (ctx->pc == 0x12E1B0u) {
        ctx->pc = 0x12E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1ACu;
        // 0x12e1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1B4u;
        goto label_12e1b4;
    }
    ctx->pc = 0x12E1ACu;
    SET_GPR_U32(ctx, 31, 0x12E1B4u);
    ctx->pc = 0x12E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1ACu;
    // 0x12e1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A818u, 0x12E1ACu, 0x12E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1B4u;
label_12e1b4:
    // 0x12e1b4: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12e1b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12e1b8:
    // 0x12e1b8: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
label_12e1bc:
    if (ctx->pc == 0x12E1BCu) {
        ctx->pc = 0x12E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1B8u;
        // 0x12e1bc: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1C0u;
        goto label_12e1c0;
    }
    ctx->pc = 0x12E1B8u;
    {
        const bool branch_taken_0x12e1b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1B8u;
        // 0x12e1bc: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1b8) {
            ctx->pc = 0x12E1E0u;
            goto label_12e1e0;
        }
    }
    ctx->pc = 0x12E1C0u;
label_12e1c0:
    // 0x12e1c0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12e1c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e1c4:
    // 0x12e1c4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12e1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12e1c8:
    // 0x12e1c8: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12e1cc:
    // 0x12e1cc: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x12e1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
label_12e1d0:
    // 0x12e1d0: 0x8faf0268  lw          $t7, 0x268($sp)
    ctx->pc = 0x12e1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12e1d4:
    // 0x12e1d4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12e1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12e1d8:
    // 0x12e1d8: 0x1000fd8e  b           . + 4 + (-0x272 << 2)
label_12e1dc:
    if (ctx->pc == 0x12E1DCu) {
        ctx->pc = 0x12E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1D8u;
        // 0x12e1dc: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1E0u;
        goto label_12e1e0;
    }
    ctx->pc = 0x12E1D8u;
    {
        const bool branch_taken_0x12e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1D8u;
        // 0x12e1dc: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1d8) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12E1E0u;
label_12e1e0:
    // 0x12e1e0: 0x328f0002  andi        $t7, $s4, 0x2
    ctx->pc = 0x12e1e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_12e1e4:
    // 0x12e1e4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_12e1e8:
    if (ctx->pc == 0x12E1E8u) {
        ctx->pc = 0x12E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1E4u;
        // 0x12e1e8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1ECu;
        goto label_12e1ec;
    }
    ctx->pc = 0x12E1E4u;
    {
        const bool branch_taken_0x12e1e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1E4u;
        // 0x12e1e8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1e4) {
            ctx->pc = 0x12E1FCu;
            goto label_12e1fc;
        }
    }
    ctx->pc = 0x12E1ECu;
label_12e1ec:
    // 0x12e1ec: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12e1ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12e1f0:
    // 0x12e1f0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12e1f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e1f4:
    // 0x12e1f4: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_12e1f8:
    if (ctx->pc == 0x12E1F8u) {
        ctx->pc = 0x12E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1F4u;
        // 0x12e1f8: 0xafad0264  sw          $t5, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1FCu;
        goto label_12e1fc;
    }
    ctx->pc = 0x12E1F4u;
    {
        const bool branch_taken_0x12e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1F4u;
        // 0x12e1f8: 0xafad0264  sw          $t5, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1f4) {
            ctx->pc = 0x12E1CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e1cc;
        }
    }
    ctx->pc = 0x12E1FCu;
label_12e1fc:
    // 0x12e1fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e200:
    // 0x12e200: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12e200u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12e204:
    // 0x12e204: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x12e204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e208:
    // 0x12e208: 0xc048c12  jal         func_123048
label_12e20c:
    if (ctx->pc == 0x12E20Cu) {
        ctx->pc = 0x12E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E208u;
        // 0x12e20c: 0xafae0264  sw          $t6, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E210u;
        goto label_12e210;
    }
    ctx->pc = 0x12E208u;
    SET_GPR_U32(ctx, 31, 0x12E210u);
    ctx->pc = 0x12E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E208u;
    // 0x12e20c: 0xafae0264  sw          $t6, 0x264($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x12E208u, 0x12E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E210u;
label_12e210:
    // 0x12e210: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_12e214:
    if (ctx->pc == 0x12E214u) {
        ctx->pc = 0x12E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E210u;
        // 0x12e214: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E218u;
        goto label_12e218;
    }
    ctx->pc = 0x12E210u;
    {
        const bool branch_taken_0x12e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E210u;
        // 0x12e214: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e210) {
            ctx->pc = 0x12E1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e1d0;
        }
    }
    ctx->pc = 0x12E218u;
label_12e218:
    // 0x12e218: 0xdfad0278  ld          $t5, 0x278($sp)
    ctx->pc = 0x12e218u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_12e21c:
    // 0x12e21c: 0x11a0ffe1  beqz        $t5, . + 4 + (-0x1F << 2)
label_12e220:
    if (ctx->pc == 0x12E220u) {
        ctx->pc = 0x12E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E21Cu;
        // 0x12e220: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E224u;
        goto label_12e224;
    }
    ctx->pc = 0x12E21Cu;
    {
        const bool branch_taken_0x12e21c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E21Cu;
        // 0x12e220: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e21c) {
            ctx->pc = 0x12E1A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12E224u;
label_12e224:
    // 0x12e224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e228:
    // 0x12e228: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_12e22c:
    // 0x12e22c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12e230:
    // 0x12e230: 0xc04ada8  jal         func_12B6A0
label_12e234:
    if (ctx->pc == 0x12E234u) {
        ctx->pc = 0x12E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E230u;
        // 0x12e234: 0x25c50001  addiu       $a1, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E238u;
        goto label_12e238;
    }
    ctx->pc = 0x12E230u;
    SET_GPR_U32(ctx, 31, 0x12E238u);
    ctx->pc = 0x12E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E230u;
    // 0x12e234: 0x25c50001  addiu       $a1, $t6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6A0u, 0x12E230u, 0x12E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E238u;
label_12e238:
    // 0x12e238: 0xdfaf0278  ld          $t7, 0x278($sp)
    ctx->pc = 0x12e238u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_12e23c:
    // 0x12e23c: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_12e240:
    if (ctx->pc == 0x12E240u) {
        ctx->pc = 0x12E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E23Cu;
        // 0x12e240: 0x4f302f  dsubu       $a2, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E244u;
        goto label_12e244;
    }
    ctx->pc = 0x12E23Cu;
    {
        const bool branch_taken_0x12e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E23Cu;
        // 0x12e240: 0x4f302f  dsubu       $a2, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e23c) {
            ctx->pc = 0x12E170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e170;
        }
    }
    ctx->pc = 0x12E244u;
label_12e244:
    // 0x12e244: 0xc04a566  jal         func_129598
label_12e248:
    if (ctx->pc == 0x12E248u) {
        ctx->pc = 0x12E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E244u;
        // 0x12e248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E24Cu;
        goto label_12e24c;
    }
    ctx->pc = 0x12E244u;
    SET_GPR_U32(ctx, 31, 0x12E24Cu);
    ctx->pc = 0x12E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E244u;
    // 0x12e248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12E244u, 0x12E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E24Cu;
label_12e24c:
    // 0x12e24c: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
label_12e250:
    if (ctx->pc == 0x12E250u) {
        ctx->pc = 0x12E254u;
        goto label_12e254;
    }
    ctx->pc = 0x12E24Cu;
    {
        const bool branch_taken_0x12e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e24c) {
            ctx->pc = 0x12E0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0b0;
        }
    }
    ctx->pc = 0x12E254u;
label_12e254:
    // 0x12e254: 0x1000ff98  b           . + 4 + (-0x68 << 2)
label_12e258:
    if (ctx->pc == 0x12E258u) {
        ctx->pc = 0x12E25Cu;
        goto label_12e25c;
    }
    ctx->pc = 0x12E254u;
    {
        const bool branch_taken_0x12e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e254) {
            ctx->pc = 0x12E0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E25Cu;
label_12e25c:
    // 0x12e25c: 0x0  nop
    ctx->pc = 0x12e25cu;
    // NOP
label_12e260:
    // 0x12e260: 0x240fff3f  addiu       $t7, $zero, -0xC1
    ctx->pc = 0x12e260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_12e264:
    // 0x12e264: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12e264u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12e268:
    // 0x12e268: 0xa2d00000  sb          $s0, 0x0($s6)
    ctx->pc = 0x12e268u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 16));
label_12e26c:
    // 0x12e26c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12e26cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12e270:
    // 0x12e270: 0x1000ff87  b           . + 4 + (-0x79 << 2)
label_12e274:
    if (ctx->pc == 0x12E274u) {
        ctx->pc = 0x12E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E270u;
        // 0x12e274: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E278u;
        goto label_12e278;
    }
    ctx->pc = 0x12E270u;
    {
        const bool branch_taken_0x12e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E270u;
        // 0x12e274: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e270) {
            ctx->pc = 0x12E090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e090;
        }
    }
    ctx->pc = 0x12E278u;
label_12e278:
    // 0x12e278: 0x328f0040  andi        $t7, $s4, 0x40
    ctx->pc = 0x12e278u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_12e27c:
    // 0x12e27c: 0x11e0ff8e  beqz        $t7, . + 4 + (-0x72 << 2)
label_12e280:
    if (ctx->pc == 0x12E280u) {
        ctx->pc = 0x12E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E27Cu;
        // 0x12e280: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E284u;
        goto label_12e284;
    }
    ctx->pc = 0x12E27Cu;
    {
        const bool branch_taken_0x12e27c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E27Cu;
        // 0x12e280: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e27c) {
            ctx->pc = 0x12E0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E284u;
label_12e284:
    // 0x12e284: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_12e288:
    if (ctx->pc == 0x12E288u) {
        ctx->pc = 0x12E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E284u;
        // 0x12e288: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E28Cu;
        goto label_12e28c;
    }
    ctx->pc = 0x12E284u;
    {
        const bool branch_taken_0x12e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E284u;
        // 0x12e288: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e284) {
            ctx->pc = 0x12E268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e268;
        }
    }
    ctx->pc = 0x12E28Cu;
label_12e28c:
    // 0x12e28c: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12e28cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12e290:
    // 0x12e290: 0x11e0ff89  beqz        $t7, . + 4 + (-0x77 << 2)
label_12e294:
    if (ctx->pc == 0x12E294u) {
        ctx->pc = 0x12E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E290u;
        // 0x12e294: 0x240ffebf  addiu       $t7, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E298u;
        goto label_12e298;
    }
    ctx->pc = 0x12E290u;
    {
        const bool branch_taken_0x12e290 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E290u;
        // 0x12e294: 0x240ffebf  addiu       $t7, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e290) {
            ctx->pc = 0x12E0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E298u;
label_12e298:
    // 0x12e298: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_12e29c:
    if (ctx->pc == 0x12E29Cu) {
        ctx->pc = 0x12E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E298u;
        // 0x12e29c: 0xffb20270  sd          $s2, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2A0u;
        goto label_12e2a0;
    }
    ctx->pc = 0x12E298u;
    {
        const bool branch_taken_0x12e298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E298u;
        // 0x12e29c: 0xffb20270  sd          $s2, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e298) {
            ctx->pc = 0x12E264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e264;
        }
    }
    ctx->pc = 0x12E2A0u;
label_12e2a0:
    // 0x12e2a0: 0x328e0280  andi        $t6, $s4, 0x280
    ctx->pc = 0x12e2a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)640);
label_12e2a4:
    // 0x12e2a4: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12e2a8:
    // 0x12e2a8: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
label_12e2ac:
    if (ctx->pc == 0x12E2ACu) {
        ctx->pc = 0x12E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2A8u;
        // 0x12e2ac: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2B0u;
        goto label_12e2b0;
    }
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2A8u;
        // 0x12e2ac: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E2C0u;
            goto label_12e2c0;
        }
    }
    ctx->pc = 0x12E2B0u;
label_12e2b0:
    // 0x12e2b0: 0x11e0ff81  beqz        $t7, . + 4 + (-0x7F << 2)
label_12e2b4:
    if (ctx->pc == 0x12E2B4u) {
        ctx->pc = 0x12E2B8u;
        goto label_12e2b8;
    }
    ctx->pc = 0x12E2B0u;
    {
        const bool branch_taken_0x12e2b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2b0) {
            ctx->pc = 0x12E0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E2B8u;
label_12e2b8:
    // 0x12e2b8: 0x1240ff83  beqz        $s2, . + 4 + (-0x7D << 2)
label_12e2bc:
    if (ctx->pc == 0x12E2BCu) {
        ctx->pc = 0x12E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2B8u;
        // 0x12e2bc: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2C0u;
        goto label_12e2c0;
    }
    ctx->pc = 0x12E2B8u;
    {
        const bool branch_taken_0x12e2b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2B8u;
        // 0x12e2bc: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2b8) {
            ctx->pc = 0x12E0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12E2C0u;
label_12e2c0:
    // 0x12e2c0: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12e2c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12e2c4:
    // 0x12e2c4: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
label_12e2c8:
    if (ctx->pc == 0x12E2C8u) {
        ctx->pc = 0x12E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2C4u;
        // 0x12e2c8: 0x240ffcff  addiu       $t7, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2CCu;
        goto label_12e2cc;
    }
    ctx->pc = 0x12E2C4u;
    {
        const bool branch_taken_0x12e2c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2C4u;
        // 0x12e2c8: 0x240ffcff  addiu       $t7, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2c4) {
            ctx->pc = 0x12E2DCu;
            goto label_12e2dc;
        }
    }
    ctx->pc = 0x12E2CCu;
label_12e2cc:
    // 0x12e2cc: 0xdfae0270  ld          $t6, 0x270($sp)
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_12e2d0:
    // 0x12e2d0: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x12e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_12e2d4:
    // 0x12e2d4: 0x24e902f  dsubu       $s2, $s2, $t6
    ctx->pc = 0x12e2d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 14));
label_12e2d8:
    // 0x12e2d8: 0xffb20278  sd          $s2, 0x278($sp)
    ctx->pc = 0x12e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 18));
label_12e2dc:
    // 0x12e2dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e2e0:
    // 0x12e2e0: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x12e2e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12e2e4:
    // 0x12e2e4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_12e2e8:
    if (ctx->pc == 0x12E2E8u) {
        ctx->pc = 0x12E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E4u;
        // 0x12e2e8: 0x35f400c0  ori         $s4, $t7, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2ECu;
        goto label_12e2ec;
    }
    ctx->pc = 0x12E2E4u;
    {
        const bool branch_taken_0x12e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E4u;
        // 0x12e2e8: 0x35f400c0  ori         $s4, $t7, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2e4) {
            ctx->pc = 0x12E268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e268;
        }
    }
    ctx->pc = 0x12E2ECu;
label_12e2ec:
    // 0x12e2ec: 0x0  nop
    ctx->pc = 0x12e2ecu;
    // NOP
label_12e2f0:
    // 0x12e2f0: 0xc04a566  jal         func_129598
label_12e2f4:
    if (ctx->pc == 0x12E2F4u) {
        ctx->pc = 0x12E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2F0u;
        // 0x12e2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2F8u;
        goto label_12e2f8;
    }
    ctx->pc = 0x12E2F0u;
    SET_GPR_U32(ctx, 31, 0x12E2F8u);
    ctx->pc = 0x12E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2F0u;
    // 0x12e2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x12E2F0u, 0x12E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2F8u;
label_12e2f8:
    // 0x12e2f8: 0x5440fd9f  bnel        $v0, $zero, . + 4 + (-0x261 << 2)
label_12e2fc:
    if (ctx->pc == 0x12E2FCu) {
        ctx->pc = 0x12E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2F8u;
        // 0x12e2fc: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E300u;
        goto label_12e300;
    }
    ctx->pc = 0x12E2F8u;
    {
        const bool branch_taken_0x12e2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e2f8) {
            ctx->pc = 0x12E2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E2F8u;
            // 0x12e2fc: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d978;
        }
    }
    ctx->pc = 0x12E300u;
label_12e300:
    // 0x12e300: 0x1000fdca  b           . + 4 + (-0x236 << 2)
label_12e304:
    if (ctx->pc == 0x12E304u) {
        ctx->pc = 0x12E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E300u;
        // 0x12e304: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E308u;
        goto label_12e308;
    }
    ctx->pc = 0x12E300u;
    {
        const bool branch_taken_0x12e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E300u;
        // 0x12e304: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e300) {
            ctx->pc = 0x12DA2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12da2c;
        }
    }
    ctx->pc = 0x12E308u;
label_12e308:
    // 0x12e308: 0x1000fd6a  b           . + 4 + (-0x296 << 2)
label_12e30c:
    if (ctx->pc == 0x12E30Cu) {
        ctx->pc = 0x12E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E308u;
        // 0x12e30c: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E310u;
        goto label_12e310;
    }
    ctx->pc = 0x12E308u;
    {
        const bool branch_taken_0x12e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E308u;
        // 0x12e30c: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e308) {
            ctx->pc = 0x12D8B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8b4;
        }
    }
    ctx->pc = 0x12E310u;
label_12e310:
    // 0x12e310: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x12e310u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_12e314:
    // 0x12e314: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12e318:
    // 0x12e318: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12e31c:
    // 0x12e31c: 0x25efb910  addiu       $t7, $t7, -0x46F0
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949136));
label_12e320:
    // 0x12e320: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x12e320u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12e324:
    // 0x12e324: 0x1000fda6  b           . + 4 + (-0x25A << 2)
label_12e328:
    if (ctx->pc == 0x12E328u) {
        ctx->pc = 0x12E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E324u;
        // 0x12e328: 0xafaf026c  sw          $t7, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E32Cu;
        goto label_12e32c;
    }
    ctx->pc = 0x12E324u;
    {
        const bool branch_taken_0x12e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E324u;
        // 0x12e328: 0xafaf026c  sw          $t7, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e324) {
            ctx->pc = 0x12D9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9c0;
        }
    }
    ctx->pc = 0x12E32Cu;
label_12e32c:
    // 0x12e32c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e330:
    // 0x12e330: 0xc04b916  jal         func_12E458
label_12e334:
    if (ctx->pc == 0x12E334u) {
        ctx->pc = 0x12E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E330u;
        // 0x12e334: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E338u;
        goto label_12e338;
    }
    ctx->pc = 0x12E330u;
    SET_GPR_U32(ctx, 31, 0x12E338u);
    ctx->pc = 0x12E334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E330u;
    // 0x12e334: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E458u, 0x12E330u, 0x12E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E338u;
label_12e338:
    // 0x12e338: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x12e338u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_12e33c:
    // 0x12e33c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e340:
    // 0x12e340: 0x1000fd9f  b           . + 4 + (-0x261 << 2)
label_12e344:
    if (ctx->pc == 0x12E344u) {
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E348u;
        goto label_12e348;
    }
    ctx->pc = 0x12E340u;
    {
        const bool branch_taken_0x12e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e340) {
            ctx->pc = 0x12D9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9c0;
        }
    }
    ctx->pc = 0x12E348u;
label_12e348:
    // 0x12e348: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x12e348u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_12e34c:
    // 0x12e34c: 0x1000fd9c  b           . + 4 + (-0x264 << 2)
label_12e350:
    if (ctx->pc == 0x12E350u) {
        ctx->pc = 0x12E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E34Cu;
        // 0x12e350: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E354u;
        goto label_12e354;
    }
    ctx->pc = 0x12E34Cu;
    {
        const bool branch_taken_0x12e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E34Cu;
        // 0x12e350: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e34c) {
            ctx->pc = 0x12D9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9c0;
        }
    }
    ctx->pc = 0x12E354u;
label_12e354:
    // 0x12e354: 0x1000fd9a  b           . + 4 + (-0x266 << 2)
label_12e358:
    if (ctx->pc == 0x12E358u) {
        ctx->pc = 0x12E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E354u;
        // 0x12e358: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E35Cu;
        goto label_12e35c;
    }
    ctx->pc = 0x12E354u;
    {
        const bool branch_taken_0x12e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E354u;
        // 0x12e358: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e354) {
            ctx->pc = 0x12D9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9c0;
        }
    }
    ctx->pc = 0x12E35Cu;
label_12e35c:
    // 0x12e35c: 0x1000fd55  b           . + 4 + (-0x2AB << 2)
label_12e360:
    if (ctx->pc == 0x12E360u) {
        ctx->pc = 0x12E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E35Cu;
        // 0x12e360: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E364u;
        goto label_12e364;
    }
    ctx->pc = 0x12E35Cu;
    {
        const bool branch_taken_0x12e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E35Cu;
        // 0x12e360: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e35c) {
            ctx->pc = 0x12D8B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8b4;
        }
    }
    ctx->pc = 0x12E364u;
label_12e364:
    // 0x12e364: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12e364u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12e368:
    // 0x12e368: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12e36c:
    // 0x12e36c: 0x25efb6a0  addiu       $t7, $t7, -0x4960
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948512));
label_12e370:
    // 0x12e370: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_12e374:
    if (ctx->pc == 0x12E374u) {
        ctx->pc = 0x12E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E370u;
        // 0x12e374: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E378u;
        goto label_12e378;
    }
    ctx->pc = 0x12E370u;
    {
        const bool branch_taken_0x12e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E370u;
        // 0x12e374: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e370) {
            ctx->pc = 0x12E324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e324;
        }
    }
    ctx->pc = 0x12E378u;
label_12e378:
    // 0x12e378: 0x1000fd4e  b           . + 4 + (-0x2B2 << 2)
label_12e37c:
    if (ctx->pc == 0x12E37Cu) {
        ctx->pc = 0x12E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E378u;
        // 0x12e37c: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E380u;
        goto label_12e380;
    }
    ctx->pc = 0x12E378u;
    {
        const bool branch_taken_0x12e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E378u;
        // 0x12e37c: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e378) {
            ctx->pc = 0x12D8B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8b4;
        }
    }
    ctx->pc = 0x12E380u;
label_12e380:
    // 0x12e380: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12e380u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12e384:
    // 0x12e384: 0x55e0fd24  bnel        $t7, $zero, . + 4 + (-0x2DC << 2)
label_12e388:
    if (ctx->pc == 0x12E388u) {
        ctx->pc = 0x12E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E384u;
        // 0x12e388: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E38Cu;
        goto label_12e38c;
    }
    ctx->pc = 0x12E384u;
    {
        const bool branch_taken_0x12e384 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e384) {
            ctx->pc = 0x12E388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E384u;
            // 0x12e388: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d818;
        }
    }
    ctx->pc = 0x12E38Cu;
label_12e38c:
    // 0x12e38c: 0x328f0004  andi        $t7, $s4, 0x4
    ctx->pc = 0x12e38cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_12e390:
    // 0x12e390: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_12e394:
    if (ctx->pc == 0x12E394u) {
        ctx->pc = 0x12E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E390u;
        // 0x12e394: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E398u;
        goto label_12e398;
    }
    ctx->pc = 0x12E390u;
    {
        const bool branch_taken_0x12e390 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E390u;
        // 0x12e394: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e390) {
            ctx->pc = 0x12E3B0u;
            goto label_12e3b0;
        }
    }
    ctx->pc = 0x12E398u;
label_12e398:
    // 0x12e398: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12e398u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12e39c:
    // 0x12e39c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12e39cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e3a0:
    // 0x12e3a0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12e3a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12e3a4:
    // 0x12e3a4: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12e3a8:
    // 0x12e3a8: 0x1000fd1a  b           . + 4 + (-0x2E6 << 2)
label_12e3ac:
    if (ctx->pc == 0x12E3ACu) {
        ctx->pc = 0x12E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3A8u;
        // 0x12e3ac: 0xa5f50000  sh          $s5, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3B0u;
        goto label_12e3b0;
    }
    ctx->pc = 0x12E3A8u;
    {
        const bool branch_taken_0x12e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3A8u;
        // 0x12e3ac: 0xa5f50000  sh          $s5, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3a8) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12E3B0u;
label_12e3b0:
    // 0x12e3b0: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12e3b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12e3b4:
    // 0x12e3b4: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_12e3b8:
    if (ctx->pc == 0x12E3B8u) {
        ctx->pc = 0x12E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B4u;
        // 0x12e3b8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3BCu;
        goto label_12e3bc;
    }
    ctx->pc = 0x12E3B4u;
    {
        const bool branch_taken_0x12e3b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B4u;
        // 0x12e3b8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3b4) {
            ctx->pc = 0x12E3D8u;
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12E3BCu;
label_12e3bc:
    // 0x12e3bc: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x12e3bcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12e3c0:
    // 0x12e3c0: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12e3c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12e3c4:
    // 0x12e3c4: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e3c8:
    // 0x12e3c8: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12e3cc:
    // 0x12e3cc: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12e3d0:
    // 0x12e3d0: 0x1000fd10  b           . + 4 + (-0x2F0 << 2)
label_12e3d4:
    if (ctx->pc == 0x12E3D4u) {
        ctx->pc = 0x12E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3D0u;
        // 0x12e3d4: 0xfdee0000  sd          $t6, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3D8u;
        goto label_12e3d8;
    }
    ctx->pc = 0x12E3D0u;
    {
        const bool branch_taken_0x12e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3D0u;
        // 0x12e3d4: 0xfdee0000  sd          $t6, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3d0) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12E3D8u;
label_12e3d8:
    // 0x12e3d8: 0x8fae0264  lw          $t6, 0x264($sp)
    ctx->pc = 0x12e3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12e3dc:
    // 0x12e3dc: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12e3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12e3e0:
    // 0x12e3e0: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12e3e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_12e3e4:
    // 0x12e3e4: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12e3e8:
    // 0x12e3e8: 0x1000fd0a  b           . + 4 + (-0x2F6 << 2)
label_12e3ec:
    if (ctx->pc == 0x12E3ECu) {
        ctx->pc = 0x12E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3E8u;
        // 0x12e3ec: 0xadf50000  sw          $s5, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3F0u;
        goto label_12e3f0;
    }
    ctx->pc = 0x12E3E8u;
    {
        const bool branch_taken_0x12e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3E8u;
        // 0x12e3ec: 0xadf50000  sw          $s5, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3e8) {
            ctx->pc = 0x12D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d814;
        }
    }
    ctx->pc = 0x12E3F0u;
label_12e3f0:
    // 0x12e3f0: 0x36940110  ori         $s4, $s4, 0x110
    ctx->pc = 0x12e3f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)272);
label_12e3f4:
    // 0x12e3f4: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12e3f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12e3f8:
    // 0x12e3f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12e3fc:
    // 0x12e3fc: 0x25efb910  addiu       $t7, $t7, -0x46F0
    ctx->pc = 0x12e3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949136));
label_12e400:
    // 0x12e400: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_12e404:
    if (ctx->pc == 0x12E404u) {
        ctx->pc = 0x12E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E400u;
        // 0x12e404: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E408u;
        goto label_12e408;
    }
    ctx->pc = 0x12E400u;
    {
        const bool branch_taken_0x12e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E400u;
        // 0x12e404: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e400) {
            ctx->pc = 0x12E324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e324;
        }
    }
    ctx->pc = 0x12E408u;
label_12e408:
    // 0x12e408: 0x1000fd6d  b           . + 4 + (-0x293 << 2)
label_12e40c:
    if (ctx->pc == 0x12E40Cu) {
        ctx->pc = 0x12E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E408u;
        // 0x12e40c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E410u;
        goto label_12e410;
    }
    ctx->pc = 0x12E408u;
    {
        const bool branch_taken_0x12e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E408u;
        // 0x12e40c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e408) {
            ctx->pc = 0x12D9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9c0;
        }
    }
    ctx->pc = 0x12E410u;
label_12e410:
    // 0x12e410: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12e414:
    // 0x12e414: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12e414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12e418:
    // 0x12e418: 0x1000fd67  b           . + 4 + (-0x299 << 2)
label_12e41c:
    if (ctx->pc == 0x12E41Cu) {
        ctx->pc = 0x12E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E418u;
        // 0x12e41c: 0x25efb910  addiu       $t7, $t7, -0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E420u;
        goto label_12e420;
    }
    ctx->pc = 0x12E418u;
    {
        const bool branch_taken_0x12e418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E418u;
        // 0x12e41c: 0x25efb910  addiu       $t7, $t7, -0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e418) {
            ctx->pc = 0x12D9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9b8;
        }
    }
    ctx->pc = 0x12E420u;
label_12e420:
    // 0x12e420: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12e420u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12e424:
    // 0x12e424: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
label_12e428:
    // 0x12e428: 0x25efb6a0  addiu       $t7, $t7, -0x4960
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948512));
label_12e42c:
    // 0x12e42c: 0x25ceb7c8  addiu       $t6, $t6, -0x4838
    ctx->pc = 0x12e42cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948808));
label_12e430:
    // 0x12e430: 0xafaf026c  sw          $t7, 0x26C($sp)
    ctx->pc = 0x12e430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
label_12e434:
    // 0x12e434: 0x20e7021  addu        $t6, $s0, $t6
    ctx->pc = 0x12e434u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_12e438:
    // 0x12e438: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x12e438u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12e43c:
    // 0x12e43c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12e43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12e440:
    // 0x12e440: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12e440u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12e444:
    // 0x12e444: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12e444u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
label_12e448:
    // 0x12e448: 0x1000fd5d  b           . + 4 + (-0x2A3 << 2)
label_12e44c:
    if (ctx->pc == 0x12E44Cu) {
        ctx->pc = 0x12E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E448u;
        // 0x12e44c: 0x28fa025  or          $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E450u;
        goto label_12e450;
    }
    ctx->pc = 0x12E448u;
    {
        const bool branch_taken_0x12e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E448u;
        // 0x12e44c: 0x28fa025  or          $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e448) {
            ctx->pc = 0x12D9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9c0;
        }
    }
    ctx->pc = 0x12E450u;
label_12e450:
    // 0x12e450: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_12e454:
    if (ctx->pc == 0x12E454u) {
        ctx->pc = 0x12E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E450u;
        // 0x12e454: 0x36940100  ori         $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E458u;
        goto label_fallthrough_0x12e450;
    }
    ctx->pc = 0x12E450u;
    {
        const bool branch_taken_0x12e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E450u;
        // 0x12e454: 0x36940100  ori         $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e450) {
            ctx->pc = 0x12E3F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e3f4;
        }
    }
label_fallthrough_0x12e450:
    ctx->pc = 0x12E458u;
}
