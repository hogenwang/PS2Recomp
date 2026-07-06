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

// Function: sub_002497F0
// Address: 0x2497f0 - 0x24a130
void sub_002497F0_0x2497f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002497F0_0x2497f0");
#endif

    switch (ctx->pc) {
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        case 0x249c40u: goto label_249c40;
        case 0x249c44u: goto label_249c44;
        case 0x249c48u: goto label_249c48;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c50u: goto label_249c50;
        case 0x249c54u: goto label_249c54;
        case 0x249c58u: goto label_249c58;
        case 0x249c5cu: goto label_249c5c;
        case 0x249c60u: goto label_249c60;
        case 0x249c64u: goto label_249c64;
        case 0x249c68u: goto label_249c68;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c70u: goto label_249c70;
        case 0x249c74u: goto label_249c74;
        case 0x249c78u: goto label_249c78;
        case 0x249c7cu: goto label_249c7c;
        case 0x249c80u: goto label_249c80;
        case 0x249c84u: goto label_249c84;
        case 0x249c88u: goto label_249c88;
        case 0x249c8cu: goto label_249c8c;
        case 0x249c90u: goto label_249c90;
        case 0x249c94u: goto label_249c94;
        case 0x249c98u: goto label_249c98;
        case 0x249c9cu: goto label_249c9c;
        case 0x249ca0u: goto label_249ca0;
        case 0x249ca4u: goto label_249ca4;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cacu: goto label_249cac;
        case 0x249cb0u: goto label_249cb0;
        case 0x249cb4u: goto label_249cb4;
        case 0x249cb8u: goto label_249cb8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cc0u: goto label_249cc0;
        case 0x249cc4u: goto label_249cc4;
        case 0x249cc8u: goto label_249cc8;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd0u: goto label_249cd0;
        case 0x249cd4u: goto label_249cd4;
        case 0x249cd8u: goto label_249cd8;
        case 0x249cdcu: goto label_249cdc;
        case 0x249ce0u: goto label_249ce0;
        case 0x249ce4u: goto label_249ce4;
        case 0x249ce8u: goto label_249ce8;
        case 0x249cecu: goto label_249cec;
        case 0x249cf0u: goto label_249cf0;
        case 0x249cf4u: goto label_249cf4;
        case 0x249cf8u: goto label_249cf8;
        case 0x249cfcu: goto label_249cfc;
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        case 0x249de0u: goto label_249de0;
        case 0x249de4u: goto label_249de4;
        case 0x249de8u: goto label_249de8;
        case 0x249decu: goto label_249dec;
        case 0x249df0u: goto label_249df0;
        case 0x249df4u: goto label_249df4;
        case 0x249df8u: goto label_249df8;
        case 0x249dfcu: goto label_249dfc;
        case 0x249e00u: goto label_249e00;
        case 0x249e04u: goto label_249e04;
        case 0x249e08u: goto label_249e08;
        case 0x249e0cu: goto label_249e0c;
        case 0x249e10u: goto label_249e10;
        case 0x249e14u: goto label_249e14;
        case 0x249e18u: goto label_249e18;
        case 0x249e1cu: goto label_249e1c;
        case 0x249e20u: goto label_249e20;
        case 0x249e24u: goto label_249e24;
        case 0x249e28u: goto label_249e28;
        case 0x249e2cu: goto label_249e2c;
        case 0x249e30u: goto label_249e30;
        case 0x249e34u: goto label_249e34;
        case 0x249e38u: goto label_249e38;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e40u: goto label_249e40;
        case 0x249e44u: goto label_249e44;
        case 0x249e48u: goto label_249e48;
        case 0x249e4cu: goto label_249e4c;
        case 0x249e50u: goto label_249e50;
        case 0x249e54u: goto label_249e54;
        case 0x249e58u: goto label_249e58;
        case 0x249e5cu: goto label_249e5c;
        case 0x249e60u: goto label_249e60;
        case 0x249e64u: goto label_249e64;
        case 0x249e68u: goto label_249e68;
        case 0x249e6cu: goto label_249e6c;
        case 0x249e70u: goto label_249e70;
        case 0x249e74u: goto label_249e74;
        case 0x249e78u: goto label_249e78;
        case 0x249e7cu: goto label_249e7c;
        case 0x249e80u: goto label_249e80;
        case 0x249e84u: goto label_249e84;
        case 0x249e88u: goto label_249e88;
        case 0x249e8cu: goto label_249e8c;
        case 0x249e90u: goto label_249e90;
        case 0x249e94u: goto label_249e94;
        case 0x249e98u: goto label_249e98;
        case 0x249e9cu: goto label_249e9c;
        case 0x249ea0u: goto label_249ea0;
        case 0x249ea4u: goto label_249ea4;
        case 0x249ea8u: goto label_249ea8;
        case 0x249eacu: goto label_249eac;
        case 0x249eb0u: goto label_249eb0;
        case 0x249eb4u: goto label_249eb4;
        case 0x249eb8u: goto label_249eb8;
        case 0x249ebcu: goto label_249ebc;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ec4u: goto label_249ec4;
        case 0x249ec8u: goto label_249ec8;
        case 0x249eccu: goto label_249ecc;
        case 0x249ed0u: goto label_249ed0;
        case 0x249ed4u: goto label_249ed4;
        case 0x249ed8u: goto label_249ed8;
        case 0x249edcu: goto label_249edc;
        case 0x249ee0u: goto label_249ee0;
        case 0x249ee4u: goto label_249ee4;
        case 0x249ee8u: goto label_249ee8;
        case 0x249eecu: goto label_249eec;
        case 0x249ef0u: goto label_249ef0;
        case 0x249ef4u: goto label_249ef4;
        case 0x249ef8u: goto label_249ef8;
        case 0x249efcu: goto label_249efc;
        case 0x249f00u: goto label_249f00;
        case 0x249f04u: goto label_249f04;
        case 0x249f08u: goto label_249f08;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f10u: goto label_249f10;
        case 0x249f14u: goto label_249f14;
        case 0x249f18u: goto label_249f18;
        case 0x249f1cu: goto label_249f1c;
        case 0x249f20u: goto label_249f20;
        case 0x249f24u: goto label_249f24;
        case 0x249f28u: goto label_249f28;
        case 0x249f2cu: goto label_249f2c;
        case 0x249f30u: goto label_249f30;
        case 0x249f34u: goto label_249f34;
        case 0x249f38u: goto label_249f38;
        case 0x249f3cu: goto label_249f3c;
        case 0x249f40u: goto label_249f40;
        case 0x249f44u: goto label_249f44;
        case 0x249f48u: goto label_249f48;
        case 0x249f4cu: goto label_249f4c;
        case 0x249f50u: goto label_249f50;
        case 0x249f54u: goto label_249f54;
        case 0x249f58u: goto label_249f58;
        case 0x249f5cu: goto label_249f5c;
        case 0x249f60u: goto label_249f60;
        case 0x249f64u: goto label_249f64;
        case 0x249f68u: goto label_249f68;
        case 0x249f6cu: goto label_249f6c;
        case 0x249f70u: goto label_249f70;
        case 0x249f74u: goto label_249f74;
        case 0x249f78u: goto label_249f78;
        case 0x249f7cu: goto label_249f7c;
        case 0x249f80u: goto label_249f80;
        case 0x249f84u: goto label_249f84;
        case 0x249f88u: goto label_249f88;
        case 0x249f8cu: goto label_249f8c;
        case 0x249f90u: goto label_249f90;
        case 0x249f94u: goto label_249f94;
        case 0x249f98u: goto label_249f98;
        case 0x249f9cu: goto label_249f9c;
        case 0x249fa0u: goto label_249fa0;
        case 0x249fa4u: goto label_249fa4;
        case 0x249fa8u: goto label_249fa8;
        case 0x249facu: goto label_249fac;
        case 0x249fb0u: goto label_249fb0;
        case 0x249fb4u: goto label_249fb4;
        case 0x249fb8u: goto label_249fb8;
        case 0x249fbcu: goto label_249fbc;
        case 0x249fc0u: goto label_249fc0;
        case 0x249fc4u: goto label_249fc4;
        case 0x249fc8u: goto label_249fc8;
        case 0x249fccu: goto label_249fcc;
        case 0x249fd0u: goto label_249fd0;
        case 0x249fd4u: goto label_249fd4;
        case 0x249fd8u: goto label_249fd8;
        case 0x249fdcu: goto label_249fdc;
        case 0x249fe0u: goto label_249fe0;
        case 0x249fe4u: goto label_249fe4;
        case 0x249fe8u: goto label_249fe8;
        case 0x249fecu: goto label_249fec;
        case 0x249ff0u: goto label_249ff0;
        case 0x249ff4u: goto label_249ff4;
        case 0x249ff8u: goto label_249ff8;
        case 0x249ffcu: goto label_249ffc;
        case 0x24a000u: goto label_24a000;
        case 0x24a004u: goto label_24a004;
        case 0x24a008u: goto label_24a008;
        case 0x24a00cu: goto label_24a00c;
        case 0x24a010u: goto label_24a010;
        case 0x24a014u: goto label_24a014;
        case 0x24a018u: goto label_24a018;
        case 0x24a01cu: goto label_24a01c;
        case 0x24a020u: goto label_24a020;
        case 0x24a024u: goto label_24a024;
        case 0x24a028u: goto label_24a028;
        case 0x24a02cu: goto label_24a02c;
        case 0x24a030u: goto label_24a030;
        case 0x24a034u: goto label_24a034;
        case 0x24a038u: goto label_24a038;
        case 0x24a03cu: goto label_24a03c;
        case 0x24a040u: goto label_24a040;
        case 0x24a044u: goto label_24a044;
        case 0x24a048u: goto label_24a048;
        case 0x24a04cu: goto label_24a04c;
        case 0x24a050u: goto label_24a050;
        case 0x24a054u: goto label_24a054;
        case 0x24a058u: goto label_24a058;
        case 0x24a05cu: goto label_24a05c;
        case 0x24a060u: goto label_24a060;
        case 0x24a064u: goto label_24a064;
        case 0x24a068u: goto label_24a068;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a070u: goto label_24a070;
        case 0x24a074u: goto label_24a074;
        case 0x24a078u: goto label_24a078;
        case 0x24a07cu: goto label_24a07c;
        case 0x24a080u: goto label_24a080;
        case 0x24a084u: goto label_24a084;
        case 0x24a088u: goto label_24a088;
        case 0x24a08cu: goto label_24a08c;
        case 0x24a090u: goto label_24a090;
        case 0x24a094u: goto label_24a094;
        case 0x24a098u: goto label_24a098;
        case 0x24a09cu: goto label_24a09c;
        case 0x24a0a0u: goto label_24a0a0;
        case 0x24a0a4u: goto label_24a0a4;
        case 0x24a0a8u: goto label_24a0a8;
        case 0x24a0acu: goto label_24a0ac;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0b4u: goto label_24a0b4;
        case 0x24a0b8u: goto label_24a0b8;
        case 0x24a0bcu: goto label_24a0bc;
        case 0x24a0c0u: goto label_24a0c0;
        case 0x24a0c4u: goto label_24a0c4;
        case 0x24a0c8u: goto label_24a0c8;
        case 0x24a0ccu: goto label_24a0cc;
        case 0x24a0d0u: goto label_24a0d0;
        case 0x24a0d4u: goto label_24a0d4;
        case 0x24a0d8u: goto label_24a0d8;
        case 0x24a0dcu: goto label_24a0dc;
        case 0x24a0e0u: goto label_24a0e0;
        case 0x24a0e4u: goto label_24a0e4;
        case 0x24a0e8u: goto label_24a0e8;
        case 0x24a0ecu: goto label_24a0ec;
        case 0x24a0f0u: goto label_24a0f0;
        case 0x24a0f4u: goto label_24a0f4;
        case 0x24a0f8u: goto label_24a0f8;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a100u: goto label_24a100;
        case 0x24a104u: goto label_24a104;
        case 0x24a108u: goto label_24a108;
        case 0x24a10cu: goto label_24a10c;
        case 0x24a110u: goto label_24a110;
        case 0x24a114u: goto label_24a114;
        case 0x24a118u: goto label_24a118;
        case 0x24a11cu: goto label_24a11c;
        case 0x24a120u: goto label_24a120;
        case 0x24a124u: goto label_24a124;
        case 0x24a128u: goto label_24a128;
        case 0x24a12cu: goto label_24a12c;
        default: break;
    }

    ctx->pc = 0x2497f0u;

label_2497f0:
    // 0x2497f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2497f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2497f4:
    // 0x2497f4: 0x34028118  ori         $v0, $zero, 0x8118
    ctx->pc = 0x2497f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33048);
label_2497f8:
    // 0x2497f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2497f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2497fc:
    // 0x2497fc: 0x3442691e  ori         $v0, $v0, 0x691E
    ctx->pc = 0x2497fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26910);
label_249800:
    // 0x249800: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x249800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_249804:
    // 0x249804: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x249804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_249808:
    // 0x249808: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x249808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_24980c:
    // 0x24980c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_249810:
    // 0x249810: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x249810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_249814:
    // 0x249814: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x249814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_249818:
    // 0x249818: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x249818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24981c:
    // 0x24981c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_249820:
    // 0x249820: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x249820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_249824:
    // 0x249824: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x249824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_249828:
    // 0x249828: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x249828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24982c:
    // 0x24982c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_249830:
    // 0x249830: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
label_249834:
    if (ctx->pc == 0x249834u) {
        ctx->pc = 0x249834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249830u;
        // 0x249834: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249838u;
        goto label_249838;
    }
    ctx->pc = 0x249830u;
    {
        const bool branch_taken_0x249830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249830u;
        // 0x249834: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249830) {
            ctx->pc = 0x249874u;
            goto label_249874;
        }
    }
    ctx->pc = 0x249838u;
label_249838:
    // 0x249838: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x249838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24983c:
    // 0x24983c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_249840:
    if (ctx->pc == 0x249840u) {
        ctx->pc = 0x249844u;
        goto label_249844;
    }
    ctx->pc = 0x24983Cu;
    {
        const bool branch_taken_0x24983c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24983c) {
            ctx->pc = 0x249860u;
            goto label_249860;
        }
    }
    ctx->pc = 0x249844u;
label_249844:
    // 0x249844: 0x34028118  ori         $v0, $zero, 0x8118
    ctx->pc = 0x249844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33048);
label_249848:
    // 0x249848: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_24984c:
    // 0x24984c: 0x3442691c  ori         $v0, $v0, 0x691C
    ctx->pc = 0x24984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26908);
label_249850:
    // 0x249850: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_249854:
    if (ctx->pc == 0x249854u) {
        ctx->pc = 0x249858u;
        goto label_249858;
    }
    ctx->pc = 0x249850u;
    {
        const bool branch_taken_0x249850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249850) {
            ctx->pc = 0x249874u;
            goto label_249874;
        }
    }
    ctx->pc = 0x249858u;
label_249858:
    // 0x249858: 0x1000000d  b           . + 4 + (0xD << 2)
label_24985c:
    if (ctx->pc == 0x24985Cu) {
        ctx->pc = 0x249860u;
        goto label_249860;
    }
    ctx->pc = 0x249858u;
    {
        const bool branch_taken_0x249858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249858) {
            ctx->pc = 0x249890u;
            goto label_249890;
        }
    }
    ctx->pc = 0x249860u;
label_249860:
    // 0x249860: 0x3402c118  ori         $v0, $zero, 0xC118
    ctx->pc = 0x249860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49432);
label_249864:
    // 0x249864: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249868:
    // 0x249868: 0x3442691d  ori         $v0, $v0, 0x691D
    ctx->pc = 0x249868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26909);
label_24986c:
    // 0x24986c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
label_249870:
    if (ctx->pc == 0x249870u) {
        ctx->pc = 0x249874u;
        goto label_249874;
    }
    ctx->pc = 0x24986Cu;
    {
        const bool branch_taken_0x24986c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24986c) {
            ctx->pc = 0x249890u;
            goto label_249890;
        }
    }
    ctx->pc = 0x249874u;
label_249874:
    // 0x249874: 0x12400174  beqz        $s2, . + 4 + (0x174 << 2)
label_249878:
    if (ctx->pc == 0x249878u) {
        ctx->pc = 0x249878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249874u;
        // 0x249878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24987Cu;
        goto label_24987c;
    }
    ctx->pc = 0x249874u;
    {
        const bool branch_taken_0x249874 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x249878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249874u;
        // 0x249878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249874) {
            ctx->pc = 0x249E48u;
            goto label_249e48;
        }
    }
    ctx->pc = 0x24987Cu;
label_24987c:
    // 0x24987c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24987cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_249880:
    // 0x249880: 0xc0928ac  jal         func_24A2B0
label_249884:
    if (ctx->pc == 0x249884u) {
        ctx->pc = 0x249884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249880u;
        // 0x249884: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249888u;
        goto label_249888;
    }
    ctx->pc = 0x249880u;
    SET_GPR_U32(ctx, 31, 0x249888u);
    ctx->pc = 0x249884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249880u;
    // 0x249884: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A2B0u, 0x249880u, 0x249888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249888u;
label_249888:
    // 0x249888: 0x10000221  b           . + 4 + (0x221 << 2)
label_24988c:
    if (ctx->pc == 0x24988Cu) {
        ctx->pc = 0x24988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249888u;
        // 0x24988c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249890u;
        goto label_249890;
    }
    ctx->pc = 0x249888u;
    {
        const bool branch_taken_0x249888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249888u;
        // 0x24988c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249888) {
            ctx->pc = 0x24A110u;
            goto label_24a110;
        }
    }
    ctx->pc = 0x249890u;
label_249890:
    // 0x249890: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_249894:
    if (ctx->pc == 0x249894u) {
        ctx->pc = 0x249898u;
        goto label_249898;
    }
    ctx->pc = 0x249890u;
    {
        const bool branch_taken_0x249890 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x249890) {
            ctx->pc = 0x2498DCu;
            goto label_2498dc;
        }
    }
    ctx->pc = 0x249898u;
label_249898:
    // 0x249898: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x249898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_24989c:
    // 0x24989c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_2498a0:
    if (ctx->pc == 0x2498A0u) {
        ctx->pc = 0x2498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24989Cu;
        // 0x2498a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498A4u;
        goto label_2498a4;
    }
    ctx->pc = 0x24989Cu;
    {
        const bool branch_taken_0x24989c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24989c) {
            ctx->pc = 0x2498A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24989Cu;
            // 0x2498a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2498DCu;
            goto label_2498dc;
        }
    }
    ctx->pc = 0x2498A4u;
label_2498a4:
    // 0x2498a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2498a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2498a8:
    // 0x2498a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2498a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2498ac:
    // 0x2498ac: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2498acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2498b0:
    // 0x2498b0: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
label_2498b4:
    if (ctx->pc == 0x2498B4u) {
        ctx->pc = 0x2498B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498B0u;
        // 0x2498b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498B8u;
        goto label_2498b8;
    }
    ctx->pc = 0x2498B0u;
    {
        const bool branch_taken_0x2498b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2498b0) {
            ctx->pc = 0x2498B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2498B0u;
            // 0x2498b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2498DCu;
            goto label_2498dc;
        }
    }
    ctx->pc = 0x2498B8u;
label_2498b8:
    // 0x2498b8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2498bc:
    // 0x2498bc: 0x0  nop
    ctx->pc = 0x2498bcu;
    // NOP
label_2498c0:
    // 0x2498c0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_2498c4:
    if (ctx->pc == 0x2498C4u) {
        ctx->pc = 0x2498C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498C0u;
        // 0x2498c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498C8u;
        goto label_2498c8;
    }
    ctx->pc = 0x2498C0u;
    {
        const bool branch_taken_0x2498c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498c0) {
            ctx->pc = 0x2498C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2498C0u;
            // 0x2498c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2498DCu;
            goto label_2498dc;
        }
    }
    ctx->pc = 0x2498C8u;
label_2498c8:
    // 0x2498c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2498cc:
    // 0x2498cc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2498ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2498d0:
    // 0x2498d0: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_2498d4:
    if (ctx->pc == 0x2498D4u) {
        ctx->pc = 0x2498D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498D0u;
        // 0x2498d4: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498D8u;
        goto label_2498d8;
    }
    ctx->pc = 0x2498D0u;
    {
        const bool branch_taken_0x2498d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2498d0) {
            ctx->pc = 0x2498D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2498D0u;
            // 0x2498d4: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2498C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2498c0;
        }
    }
    ctx->pc = 0x2498D8u;
label_2498d8:
    // 0x2498d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2498d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2498dc:
    // 0x2498dc: 0x34028040  ori         $v0, $zero, 0x8040
    ctx->pc = 0x2498dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_2498e0:
    // 0x2498e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2498e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2498e4:
    // 0x2498e4: 0x3442691a  ori         $v0, $v0, 0x691A
    ctx->pc = 0x2498e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26906);
label_2498e8:
    // 0x2498e8: 0x1222003f  beq         $s1, $v0, . + 4 + (0x3F << 2)
label_2498ec:
    if (ctx->pc == 0x2498ECu) {
        ctx->pc = 0x2498ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498E8u;
        // 0x2498ec: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498F0u;
        goto label_2498f0;
    }
    ctx->pc = 0x2498E8u;
    {
        const bool branch_taken_0x2498e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2498ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498E8u;
        // 0x2498ec: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498e8) {
            ctx->pc = 0x2499E8u;
            goto label_2499e8;
        }
    }
    ctx->pc = 0x2498F0u;
label_2498f0:
    // 0x2498f0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_2498f4:
    if (ctx->pc == 0x2498F4u) {
        ctx->pc = 0x2498F8u;
        goto label_2498f8;
    }
    ctx->pc = 0x2498F0u;
    {
        const bool branch_taken_0x2498f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2498f0) {
            ctx->pc = 0x249974u;
            goto label_249974;
        }
    }
    ctx->pc = 0x2498F8u;
label_2498f8:
    // 0x2498f8: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2498f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2498fc:
    // 0x2498fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2498fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249900:
    // 0x249900: 0x34426913  ori         $v0, $v0, 0x6913
    ctx->pc = 0x249900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26899);
label_249904:
    // 0x249904: 0x1222009e  beq         $s1, $v0, . + 4 + (0x9E << 2)
label_249908:
    if (ctx->pc == 0x249908u) {
        ctx->pc = 0x249908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249904u;
        // 0x249908: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24990Cu;
        goto label_24990c;
    }
    ctx->pc = 0x249904u;
    {
        const bool branch_taken_0x249904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249904u;
        // 0x249908: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249904) {
            ctx->pc = 0x249B80u;
            goto label_249b80;
        }
    }
    ctx->pc = 0x24990Cu;
label_24990c:
    // 0x24990c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_249910:
    if (ctx->pc == 0x249910u) {
        ctx->pc = 0x249914u;
        goto label_249914;
    }
    ctx->pc = 0x24990Cu;
    {
        const bool branch_taken_0x24990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24990c) {
            ctx->pc = 0x249944u;
            goto label_249944;
        }
    }
    ctx->pc = 0x249914u;
label_249914:
    // 0x249914: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249918:
    // 0x249918: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_24991c:
    // 0x24991c: 0x3442690c  ori         $v0, $v0, 0x690C
    ctx->pc = 0x24991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26892);
label_249920:
    // 0x249920: 0x52220055  beql        $s1, $v0, . + 4 + (0x55 << 2)
label_249924:
    if (ctx->pc == 0x249924u) {
        ctx->pc = 0x249924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249920u;
        // 0x249924: 0x92670011  lbu         $a3, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249928u;
        goto label_249928;
    }
    ctx->pc = 0x249920u;
    {
        const bool branch_taken_0x249920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249920) {
            ctx->pc = 0x249924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249920u;
            // 0x249924: 0x92670011  lbu         $a3, 0x11($s3) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A78u;
            goto label_249a78;
        }
    }
    ctx->pc = 0x249928u;
label_249928:
    // 0x249928: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_24992c:
    // 0x24992c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24992cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249930:
    // 0x249930: 0x3442690e  ori         $v0, $v0, 0x690E
    ctx->pc = 0x249930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26894);
label_249934:
    // 0x249934: 0x52220050  beql        $s1, $v0, . + 4 + (0x50 << 2)
label_249938:
    if (ctx->pc == 0x249938u) {
        ctx->pc = 0x249938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249934u;
        // 0x249938: 0x92670011  lbu         $a3, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24993Cu;
        goto label_24993c;
    }
    ctx->pc = 0x249934u;
    {
        const bool branch_taken_0x249934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249934) {
            ctx->pc = 0x249938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249934u;
            // 0x249938: 0x92670011  lbu         $a3, 0x11($s3) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A78u;
            goto label_249a78;
        }
    }
    ctx->pc = 0x24993Cu;
label_24993c:
    // 0x24993c: 0x10000092  b           . + 4 + (0x92 << 2)
label_249940:
    if (ctx->pc == 0x249940u) {
        ctx->pc = 0x249944u;
        goto label_249944;
    }
    ctx->pc = 0x24993Cu;
    {
        const bool branch_taken_0x24993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24993c) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249944u;
label_249944:
    // 0x249944: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249948:
    // 0x249948: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_24994c:
    // 0x24994c: 0x34426916  ori         $v0, $v0, 0x6916
    ctx->pc = 0x24994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26902);
label_249950:
    // 0x249950: 0x1222004c  beq         $s1, $v0, . + 4 + (0x4C << 2)
label_249954:
    if (ctx->pc == 0x249954u) {
        ctx->pc = 0x249958u;
        goto label_249958;
    }
    ctx->pc = 0x249950u;
    {
        const bool branch_taken_0x249950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249950) {
            ctx->pc = 0x249A84u;
            goto label_249a84;
        }
    }
    ctx->pc = 0x249958u;
label_249958:
    // 0x249958: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_24995c:
    // 0x24995c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24995cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249960:
    // 0x249960: 0x34426919  ori         $v0, $v0, 0x6919
    ctx->pc = 0x249960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26905);
label_249964:
    // 0x249964: 0x52220021  beql        $s1, $v0, . + 4 + (0x21 << 2)
label_249968:
    if (ctx->pc == 0x249968u) {
        ctx->pc = 0x249968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249964u;
        // 0x249968: 0x92670011  lbu         $a3, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24996Cu;
        goto label_24996c;
    }
    ctx->pc = 0x249964u;
    {
        const bool branch_taken_0x249964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249964) {
            ctx->pc = 0x249968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249964u;
            // 0x249968: 0x92670011  lbu         $a3, 0x11($s3) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2499ECu;
            goto label_2499ec;
        }
    }
    ctx->pc = 0x24996Cu;
label_24996c:
    // 0x24996c: 0x10000086  b           . + 4 + (0x86 << 2)
label_249970:
    if (ctx->pc == 0x249970u) {
        ctx->pc = 0x249974u;
        goto label_249974;
    }
    ctx->pc = 0x24996Cu;
    {
        const bool branch_taken_0x24996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24996c) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249974u;
label_249974:
    // 0x249974: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x249974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_249978:
    // 0x249978: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_24997c:
    // 0x24997c: 0x34426923  ori         $v0, $v0, 0x6923
    ctx->pc = 0x24997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26915);
label_249980:
    // 0x249980: 0x1222007f  beq         $s1, $v0, . + 4 + (0x7F << 2)
label_249984:
    if (ctx->pc == 0x249984u) {
        ctx->pc = 0x249984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249980u;
        // 0x249984: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249988u;
        goto label_249988;
    }
    ctx->pc = 0x249980u;
    {
        const bool branch_taken_0x249980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249980u;
        // 0x249984: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249980) {
            ctx->pc = 0x249B80u;
            goto label_249b80;
        }
    }
    ctx->pc = 0x249988u;
label_249988:
    // 0x249988: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_24998c:
    if (ctx->pc == 0x24998Cu) {
        ctx->pc = 0x249990u;
        goto label_249990;
    }
    ctx->pc = 0x249988u;
    {
        const bool branch_taken_0x249988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249988) {
            ctx->pc = 0x2499C0u;
            goto label_2499c0;
        }
    }
    ctx->pc = 0x249990u;
label_249990:
    // 0x249990: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x249990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_249994:
    // 0x249994: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249998:
    // 0x249998: 0x34426921  ori         $v0, $v0, 0x6921
    ctx->pc = 0x249998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26913);
label_24999c:
    // 0x24999c: 0x12220078  beq         $s1, $v0, . + 4 + (0x78 << 2)
label_2499a0:
    if (ctx->pc == 0x2499A0u) {
        ctx->pc = 0x2499A4u;
        goto label_2499a4;
    }
    ctx->pc = 0x24999Cu;
    {
        const bool branch_taken_0x24999c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24999c) {
            ctx->pc = 0x249B80u;
            goto label_249b80;
        }
    }
    ctx->pc = 0x2499A4u;
label_2499a4:
    // 0x2499a4: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2499a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2499a8:
    // 0x2499a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2499a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2499ac:
    // 0x2499ac: 0x34426922  ori         $v0, $v0, 0x6922
    ctx->pc = 0x2499acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26914);
label_2499b0:
    // 0x2499b0: 0x12220073  beq         $s1, $v0, . + 4 + (0x73 << 2)
label_2499b4:
    if (ctx->pc == 0x2499B4u) {
        ctx->pc = 0x2499B8u;
        goto label_2499b8;
    }
    ctx->pc = 0x2499B0u;
    {
        const bool branch_taken_0x2499b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2499b0) {
            ctx->pc = 0x249B80u;
            goto label_249b80;
        }
    }
    ctx->pc = 0x2499B8u;
label_2499b8:
    // 0x2499b8: 0x10000073  b           . + 4 + (0x73 << 2)
label_2499bc:
    if (ctx->pc == 0x2499BCu) {
        ctx->pc = 0x2499C0u;
        goto label_2499c0;
    }
    ctx->pc = 0x2499B8u;
    {
        const bool branch_taken_0x2499b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2499b8) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x2499C0u;
label_2499c0:
    // 0x2499c0: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2499c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2499c4:
    // 0x2499c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2499c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2499c8:
    // 0x2499c8: 0x34426925  ori         $v0, $v0, 0x6925
    ctx->pc = 0x2499c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26917);
label_2499cc:
    // 0x2499cc: 0x1222006c  beq         $s1, $v0, . + 4 + (0x6C << 2)
label_2499d0:
    if (ctx->pc == 0x2499D0u) {
        ctx->pc = 0x2499D4u;
        goto label_2499d4;
    }
    ctx->pc = 0x2499CCu;
    {
        const bool branch_taken_0x2499cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2499cc) {
            ctx->pc = 0x249B80u;
            goto label_249b80;
        }
    }
    ctx->pc = 0x2499D4u;
label_2499d4:
    // 0x2499d4: 0x3402c040  ori         $v0, $zero, 0xC040
    ctx->pc = 0x2499d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49216);
label_2499d8:
    // 0x2499d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2499d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2499dc:
    // 0x2499dc: 0x3442691b  ori         $v0, $v0, 0x691B
    ctx->pc = 0x2499dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26907);
label_2499e0:
    // 0x2499e0: 0x16220069  bne         $s1, $v0, . + 4 + (0x69 << 2)
label_2499e4:
    if (ctx->pc == 0x2499E4u) {
        ctx->pc = 0x2499E8u;
        goto label_2499e8;
    }
    ctx->pc = 0x2499E0u;
    {
        const bool branch_taken_0x2499e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2499e0) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x2499E8u;
label_2499e8:
    // 0x2499e8: 0x92670011  lbu         $a3, 0x11($s3)
    ctx->pc = 0x2499e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_2499ec:
    // 0x2499ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2499f0:
    // 0x2499f0: 0x14e20015  bne         $a3, $v0, . + 4 + (0x15 << 2)
label_2499f4:
    if (ctx->pc == 0x2499F4u) {
        ctx->pc = 0x2499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F0u;
        // 0x2499f4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499F8u;
        goto label_2499f8;
    }
    ctx->pc = 0x2499F0u;
    {
        const bool branch_taken_0x2499f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F0u;
        // 0x2499f4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499f0) {
            ctx->pc = 0x249A48u;
            goto label_249a48;
        }
    }
    ctx->pc = 0x2499F8u;
label_2499f8:
    // 0x2499f8: 0x8a660017  lwl         $a2, 0x17($s3)
    ctx->pc = 0x2499f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_2499fc:
    // 0x2499fc: 0x9a660014  lwr         $a2, 0x14($s3)
    ctx->pc = 0x2499fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_249a00:
    // 0x249a00: 0x240301fd  addiu       $v1, $zero, 0x1FD
    ctx->pc = 0x249a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_249a04:
    // 0x249a04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_249a08:
    if (ctx->pc == 0x249A08u) {
        ctx->pc = 0x249A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A04u;
        // 0x249a08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A0Cu;
        goto label_249a0c;
    }
    ctx->pc = 0x249A04u;
    {
        const bool branch_taken_0x249a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a04) {
            ctx->pc = 0x249A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A04u;
            // 0x249a08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A0Cu;
            goto label_249a0c;
        }
    }
    ctx->pc = 0x249A0Cu;
label_249a0c:
    // 0x249a0c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x249a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_249a10:
    // 0x249a10: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x249a10u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_249a14:
    // 0x249a14: 0x8c851198  lw          $a1, 0x1198($a0)
    ctx->pc = 0x249a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4504)));
label_249a18:
    // 0x249a18: 0x1010  mfhi        $v0
    ctx->pc = 0x249a18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_249a1c:
    // 0x249a1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249a20:
    // 0x249a20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_249a24:
    // 0x249a24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x249a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249a28:
    // 0x249a28: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_249a2c:
    if (ctx->pc == 0x249A2Cu) {
        ctx->pc = 0x249A30u;
        goto label_249a30;
    }
    ctx->pc = 0x249A28u;
    {
        const bool branch_taken_0x249a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a28) {
            ctx->pc = 0x249A48u;
            goto label_249a48;
        }
    }
    ctx->pc = 0x249A30u;
label_249a30:
    // 0x249a30: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_249a34:
    // 0x249a34: 0x5452fffc  bnel        $v0, $s2, . + 4 + (-0x4 << 2)
label_249a38:
    if (ctx->pc == 0x249A38u) {
        ctx->pc = 0x249A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A34u;
        // 0x249a38: 0x8e10004c  lw          $s0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A3Cu;
        goto label_249a3c;
    }
    ctx->pc = 0x249A34u;
    {
        const bool branch_taken_0x249a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x249a34) {
            ctx->pc = 0x249A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A34u;
            // 0x249a38: 0x8e10004c  lw          $s0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249a28;
        }
    }
    ctx->pc = 0x249A3Cu;
label_249a3c:
    // 0x249a3c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x249a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_249a40:
    // 0x249a40: 0x5446fff9  bnel        $v0, $a2, . + 4 + (-0x7 << 2)
label_249a44:
    if (ctx->pc == 0x249A44u) {
        ctx->pc = 0x249A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A40u;
        // 0x249a44: 0x8e10004c  lw          $s0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A48u;
        goto label_249a48;
    }
    ctx->pc = 0x249A40u;
    {
        const bool branch_taken_0x249a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x249a40) {
            ctx->pc = 0x249A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A40u;
            // 0x249a44: 0x8e10004c  lw          $s0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249a28;
        }
    }
    ctx->pc = 0x249A48u;
label_249a48:
    // 0x249a48: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249a4c:
    // 0x249a4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249a50:
    // 0x249a50: 0x34426919  ori         $v0, $v0, 0x6919
    ctx->pc = 0x249a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26905);
label_249a54:
    // 0x249a54: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
label_249a58:
    if (ctx->pc == 0x249A58u) {
        ctx->pc = 0x249A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A54u;
        // 0x249a58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A5Cu;
        goto label_249a5c;
    }
    ctx->pc = 0x249A54u;
    {
        const bool branch_taken_0x249a54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x249a54) {
            ctx->pc = 0x249A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A54u;
            // 0x249a58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A7Cu;
            goto label_249a7c;
        }
    }
    ctx->pc = 0x249A5Cu;
label_249a5c:
    // 0x249a5c: 0x120001ab  beqz        $s0, . + 4 + (0x1AB << 2)
label_249a60:
    if (ctx->pc == 0x249A60u) {
        ctx->pc = 0x249A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A5Cu;
        // 0x249a60: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A64u;
        goto label_249a64;
    }
    ctx->pc = 0x249A5Cu;
    {
        const bool branch_taken_0x249a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A5Cu;
        // 0x249a60: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a5c) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249A64u;
label_249a64:
    // 0x249a64: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
label_249a68:
    if (ctx->pc == 0x249A68u) {
        ctx->pc = 0x249A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A64u;
        // 0x249a68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A6Cu;
        goto label_249a6c;
    }
    ctx->pc = 0x249A64u;
    {
        const bool branch_taken_0x249a64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A64u;
        // 0x249a68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a64) {
            ctx->pc = 0x249A7Cu;
            goto label_249a7c;
        }
    }
    ctx->pc = 0x249A6Cu;
label_249a6c:
    // 0x249a6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249a70:
    // 0x249a70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x249a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249a74:
    // 0x249a74: 0xa2620011  sb          $v0, 0x11($s3)
    ctx->pc = 0x249a74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 2));
label_249a78:
    // 0x249a78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249a7c:
    // 0x249a7c: 0x14e201a3  bne         $a3, $v0, . + 4 + (0x1A3 << 2)
label_249a80:
    if (ctx->pc == 0x249A80u) {
        ctx->pc = 0x249A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A7Cu;
        // 0x249a80: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A84u;
        goto label_249a84;
    }
    ctx->pc = 0x249A7Cu;
    {
        const bool branch_taken_0x249a7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x249A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A7Cu;
        // 0x249a80: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a7c) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249A84u;
label_249a84:
    // 0x249a84: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_249a88:
    if (ctx->pc == 0x249A88u) {
        ctx->pc = 0x249A8Cu;
        goto label_249a8c;
    }
    ctx->pc = 0x249A84u;
    {
        const bool branch_taken_0x249a84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a84) {
            ctx->pc = 0x249A98u;
            goto label_249a98;
        }
    }
    ctx->pc = 0x249A8Cu;
label_249a8c:
    // 0x249a8c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x249a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_249a90:
    // 0x249a90: 0xc08b5e0  jal         func_22D780
label_249a94:
    if (ctx->pc == 0x249A94u) {
        ctx->pc = 0x249A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A90u;
        // 0x249a94: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A98u;
        goto label_249a98;
    }
    ctx->pc = 0x249A90u;
    SET_GPR_U32(ctx, 31, 0x249A98u);
    ctx->pc = 0x249A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A90u;
    // 0x249a94: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x249A90u, 0x249A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A98u;
label_249a98:
    // 0x249a98: 0x3402c040  ori         $v0, $zero, 0xC040
    ctx->pc = 0x249a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49216);
label_249a9c:
    // 0x249a9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249aa0:
    // 0x249aa0: 0x3442691b  ori         $v0, $v0, 0x691B
    ctx->pc = 0x249aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26907);
label_249aa4:
    // 0x249aa4: 0x12220038  beq         $s1, $v0, . + 4 + (0x38 << 2)
label_249aa8:
    if (ctx->pc == 0x249AA8u) {
        ctx->pc = 0x249AACu;
        goto label_249aac;
    }
    ctx->pc = 0x249AA4u;
    {
        const bool branch_taken_0x249aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249aa4) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249AACu;
label_249aac:
    // 0x249aac: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
label_249ab0:
    if (ctx->pc == 0x249AB0u) {
        ctx->pc = 0x249AB4u;
        goto label_249ab4;
    }
    ctx->pc = 0x249AACu;
    {
        const bool branch_taken_0x249aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x249aac) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249AB4u;
label_249ab4:
    // 0x249ab4: 0xc098552  jal         func_261548
label_249ab8:
    if (ctx->pc == 0x249AB8u) {
        ctx->pc = 0x249AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AB4u;
        // 0x249ab8: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249ABCu;
        goto label_249abc;
    }
    ctx->pc = 0x249AB4u;
    SET_GPR_U32(ctx, 31, 0x249ABCu);
    ctx->pc = 0x249AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AB4u;
    // 0x249ab8: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x249AB4u, 0x249ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ABCu;
label_249abc:
    // 0x249abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249ac0:
    // 0x249ac0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_249ac4:
    if (ctx->pc == 0x249AC4u) {
        ctx->pc = 0x249AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC0u;
        // 0x249ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AC8u;
        goto label_249ac8;
    }
    ctx->pc = 0x249AC0u;
    {
        const bool branch_taken_0x249ac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x249AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC0u;
        // 0x249ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ac0) {
            ctx->pc = 0x249AD0u;
            goto label_249ad0;
        }
    }
    ctx->pc = 0x249AC8u;
label_249ac8:
    // 0x249ac8: 0x10000190  b           . + 4 + (0x190 << 2)
label_249acc:
    if (ctx->pc == 0x249ACCu) {
        ctx->pc = 0x249ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC8u;
        // 0x249acc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AD0u;
        goto label_249ad0;
    }
    ctx->pc = 0x249AC8u;
    {
        const bool branch_taken_0x249ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC8u;
        // 0x249acc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ac8) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249AD0u;
label_249ad0:
    // 0x249ad0: 0xc048c96  jal         func_123258
label_249ad4:
    if (ctx->pc == 0x249AD4u) {
        ctx->pc = 0x249AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD0u;
        // 0x249ad4: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AD8u;
        goto label_249ad8;
    }
    ctx->pc = 0x249AD0u;
    SET_GPR_U32(ctx, 31, 0x249AD8u);
    ctx->pc = 0x249AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AD0u;
    // 0x249ad4: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x249AD0u, 0x249AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AD8u;
label_249ad8:
    // 0x249ad8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x249ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_249adc:
    // 0x249adc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x249adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_249ae0:
    // 0x249ae0: 0x248411a0  addiu       $a0, $a0, 0x11A0
    ctx->pc = 0x249ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
label_249ae4:
    // 0x249ae4: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x249ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_249ae8:
    // 0x249ae8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x249ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_249aec:
    // 0x249aec: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x249aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_249af0:
    // 0x249af0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x249af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_249af4:
    // 0x249af4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x249af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_249af8:
    // 0x249af8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x249af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_249afc:
    // 0x249afc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x249afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_249b00:
    // 0x249b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249b04:
    // 0x249b04: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x249b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_249b08:
    // 0x249b08: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x249b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_249b0c:
    // 0x249b0c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x249b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_249b10:
    // 0x249b10: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_249b14:
    // 0x249b14: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x249b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_249b18:
    // 0x249b18: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x249b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_249b1c:
    // 0x249b1c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x249b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_249b20:
    // 0x249b20: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x249b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_249b24:
    // 0x249b24: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x249b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_249b28:
    // 0x249b28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x249b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_249b2c:
    // 0x249b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249b30:
    // 0x249b30: 0x2603005c  addiu       $v1, $s0, 0x5C
    ctx->pc = 0x249b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
label_249b34:
    // 0x249b34: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x249b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_249b38:
    // 0x249b38: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x249b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_249b3c:
    // 0x249b3c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x249b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_249b40:
    // 0x249b40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x249b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_249b44:
    // 0x249b44: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x249b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_249b48:
    // 0x249b48: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x249b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_249b4c:
    // 0x249b4c: 0xa206007c  sb          $a2, 0x7C($s0)
    ctx->pc = 0x249b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 6));
label_249b50:
    // 0x249b50: 0x96420030  lhu         $v0, 0x30($s2)
    ctx->pc = 0x249b50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_249b54:
    // 0x249b54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x249b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_249b58:
    // 0x249b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_249b5c:
    if (ctx->pc == 0x249B5Cu) {
        ctx->pc = 0x249B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B58u;
        // 0x249b5c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B60u;
        goto label_249b60;
    }
    ctx->pc = 0x249B58u;
    {
        const bool branch_taken_0x249b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B58u;
        // 0x249b5c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b58) {
            ctx->pc = 0x249B70u;
            goto label_249b70;
        }
    }
    ctx->pc = 0x249B60u;
label_249b60:
    // 0x249b60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x249b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249b64:
    // 0x249b64: 0xa202006c  sb          $v0, 0x6C($s0)
    ctx->pc = 0x249b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 2));
label_249b68:
    // 0x249b68: 0xa203006d  sb          $v1, 0x6D($s0)
    ctx->pc = 0x249b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
label_249b6c:
    // 0x249b6c: 0x0  nop
    ctx->pc = 0x249b6cu;
    // NOP
label_249b70:
    // 0x249b70: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x249b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_249b74:
    // 0x249b74: 0x10000004  b           . + 4 + (0x4 << 2)
label_249b78:
    if (ctx->pc == 0x249B78u) {
        ctx->pc = 0x249B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B74u;
        // 0x249b78: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B7Cu;
        goto label_249b7c;
    }
    ctx->pc = 0x249B74u;
    {
        const bool branch_taken_0x249b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B74u;
        // 0x249b78: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b74) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249B7Cu;
label_249b7c:
    // 0x249b7c: 0x0  nop
    ctx->pc = 0x249b7cu;
    // NOP
label_249b80:
    // 0x249b80: 0x12000162  beqz        $s0, . + 4 + (0x162 << 2)
label_249b84:
    if (ctx->pc == 0x249B84u) {
        ctx->pc = 0x249B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B80u;
        // 0x249b84: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B88u;
        goto label_249b88;
    }
    ctx->pc = 0x249B80u;
    {
        const bool branch_taken_0x249b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B80u;
        // 0x249b84: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b80) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249B88u;
label_249b88:
    // 0x249b88: 0x34028040  ori         $v0, $zero, 0x8040
    ctx->pc = 0x249b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_249b8c:
    // 0x249b8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249b90:
    // 0x249b90: 0x3442691a  ori         $v0, $v0, 0x691A
    ctx->pc = 0x249b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26906);
label_249b94:
    // 0x249b94: 0x122200c3  beq         $s1, $v0, . + 4 + (0xC3 << 2)
label_249b98:
    if (ctx->pc == 0x249B98u) {
        ctx->pc = 0x249B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B94u;
        // 0x249b98: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B9Cu;
        goto label_249b9c;
    }
    ctx->pc = 0x249B94u;
    {
        const bool branch_taken_0x249b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B94u;
        // 0x249b98: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b94) {
            ctx->pc = 0x249EA4u;
            goto label_249ea4;
        }
    }
    ctx->pc = 0x249B9Cu;
label_249b9c:
    // 0x249b9c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_249ba0:
    if (ctx->pc == 0x249BA0u) {
        ctx->pc = 0x249BA4u;
        goto label_249ba4;
    }
    ctx->pc = 0x249B9Cu;
    {
        const bool branch_taken_0x249b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249b9c) {
            ctx->pc = 0x249C20u;
            goto label_249c20;
        }
    }
    ctx->pc = 0x249BA4u;
label_249ba4:
    // 0x249ba4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249ba8:
    // 0x249ba8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249bac:
    // 0x249bac: 0x34426913  ori         $v0, $v0, 0x6913
    ctx->pc = 0x249bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26899);
label_249bb0:
    // 0x249bb0: 0x122200a1  beq         $s1, $v0, . + 4 + (0xA1 << 2)
label_249bb4:
    if (ctx->pc == 0x249BB4u) {
        ctx->pc = 0x249BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BB0u;
        // 0x249bb4: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BB8u;
        goto label_249bb8;
    }
    ctx->pc = 0x249BB0u;
    {
        const bool branch_taken_0x249bb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BB0u;
        // 0x249bb4: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bb0) {
            ctx->pc = 0x249E38u;
            goto label_249e38;
        }
    }
    ctx->pc = 0x249BB8u;
label_249bb8:
    // 0x249bb8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_249bbc:
    if (ctx->pc == 0x249BBCu) {
        ctx->pc = 0x249BC0u;
        goto label_249bc0;
    }
    ctx->pc = 0x249BB8u;
    {
        const bool branch_taken_0x249bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249bb8) {
            ctx->pc = 0x249BF0u;
            goto label_249bf0;
        }
    }
    ctx->pc = 0x249BC0u;
label_249bc0:
    // 0x249bc0: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249bc4:
    // 0x249bc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249bc8:
    // 0x249bc8: 0x3442690c  ori         $v0, $v0, 0x690C
    ctx->pc = 0x249bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26892);
label_249bcc:
    // 0x249bcc: 0x122200aa  beq         $s1, $v0, . + 4 + (0xAA << 2)
label_249bd0:
    if (ctx->pc == 0x249BD0u) {
        ctx->pc = 0x249BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BCCu;
        // 0x249bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BD4u;
        goto label_249bd4;
    }
    ctx->pc = 0x249BCCu;
    {
        const bool branch_taken_0x249bcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BCCu;
        // 0x249bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bcc) {
            ctx->pc = 0x249E78u;
            goto label_249e78;
        }
    }
    ctx->pc = 0x249BD4u;
label_249bd4:
    // 0x249bd4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249bd8:
    // 0x249bd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249bdc:
    // 0x249bdc: 0x3442690e  ori         $v0, $v0, 0x690E
    ctx->pc = 0x249bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26894);
label_249be0:
    // 0x249be0: 0x5222005d  beql        $s1, $v0, . + 4 + (0x5D << 2)
label_249be4:
    if (ctx->pc == 0x249BE4u) {
        ctx->pc = 0x249BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BE0u;
        // 0x249be4: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BE8u;
        goto label_249be8;
    }
    ctx->pc = 0x249BE0u;
    {
        const bool branch_taken_0x249be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249be0) {
            ctx->pc = 0x249BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249BE0u;
            // 0x249be4: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249D58u;
            goto label_249d58;
        }
    }
    ctx->pc = 0x249BE8u;
label_249be8:
    // 0x249be8: 0x10000139  b           . + 4 + (0x139 << 2)
label_249bec:
    if (ctx->pc == 0x249BECu) {
        ctx->pc = 0x249BF0u;
        goto label_249bf0;
    }
    ctx->pc = 0x249BE8u;
    {
        const bool branch_taken_0x249be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249be8) {
            ctx->pc = 0x24A0D0u;
            goto label_24a0d0;
        }
    }
    ctx->pc = 0x249BF0u;
label_249bf0:
    // 0x249bf0: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249bf4:
    // 0x249bf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249bf8:
    // 0x249bf8: 0x34426916  ori         $v0, $v0, 0x6916
    ctx->pc = 0x249bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26902);
label_249bfc:
    // 0x249bfc: 0x122200a4  beq         $s1, $v0, . + 4 + (0xA4 << 2)
label_249c00:
    if (ctx->pc == 0x249C00u) {
        ctx->pc = 0x249C04u;
        goto label_249c04;
    }
    ctx->pc = 0x249BFCu;
    {
        const bool branch_taken_0x249bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249bfc) {
            ctx->pc = 0x249E90u;
            goto label_249e90;
        }
    }
    ctx->pc = 0x249C04u;
label_249c04:
    // 0x249c04: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x249c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249c08:
    // 0x249c08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249c0c:
    // 0x249c0c: 0x34426919  ori         $v0, $v0, 0x6919
    ctx->pc = 0x249c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26905);
label_249c10:
    // 0x249c10: 0x1222012b  beq         $s1, $v0, . + 4 + (0x12B << 2)
label_249c14:
    if (ctx->pc == 0x249C14u) {
        ctx->pc = 0x249C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C10u;
        // 0x249c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C18u;
        goto label_249c18;
    }
    ctx->pc = 0x249C10u;
    {
        const bool branch_taken_0x249c10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C10u;
        // 0x249c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c10) {
            ctx->pc = 0x24A0C0u;
            goto label_24a0c0;
        }
    }
    ctx->pc = 0x249C18u;
label_249c18:
    // 0x249c18: 0x1000012d  b           . + 4 + (0x12D << 2)
label_249c1c:
    if (ctx->pc == 0x249C1Cu) {
        ctx->pc = 0x249C20u;
        goto label_249c20;
    }
    ctx->pc = 0x249C18u;
    {
        const bool branch_taken_0x249c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c18) {
            ctx->pc = 0x24A0D0u;
            goto label_24a0d0;
        }
    }
    ctx->pc = 0x249C20u;
label_249c20:
    // 0x249c20: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x249c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_249c24:
    // 0x249c24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249c28:
    // 0x249c28: 0x34426923  ori         $v0, $v0, 0x6923
    ctx->pc = 0x249c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26915);
label_249c2c:
    // 0x249c2c: 0x12220025  beq         $s1, $v0, . + 4 + (0x25 << 2)
label_249c30:
    if (ctx->pc == 0x249C30u) {
        ctx->pc = 0x249C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C2Cu;
        // 0x249c30: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C34u;
        goto label_249c34;
    }
    ctx->pc = 0x249C2Cu;
    {
        const bool branch_taken_0x249c2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x249C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C2Cu;
        // 0x249c30: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c2c) {
            ctx->pc = 0x249CC4u;
            goto label_249cc4;
        }
    }
    ctx->pc = 0x249C34u;
label_249c34:
    // 0x249c34: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_249c38:
    if (ctx->pc == 0x249C38u) {
        ctx->pc = 0x249C3Cu;
        goto label_249c3c;
    }
    ctx->pc = 0x249C34u;
    {
        const bool branch_taken_0x249c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249c34) {
            ctx->pc = 0x249C6Cu;
            goto label_249c6c;
        }
    }
    ctx->pc = 0x249C3Cu;
label_249c3c:
    // 0x249c3c: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x249c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_249c40:
    // 0x249c40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249c44:
    // 0x249c44: 0x34426921  ori         $v0, $v0, 0x6921
    ctx->pc = 0x249c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26913);
label_249c48:
    // 0x249c48: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
label_249c4c:
    if (ctx->pc == 0x249C4Cu) {
        ctx->pc = 0x249C50u;
        goto label_249c50;
    }
    ctx->pc = 0x249C48u;
    {
        const bool branch_taken_0x249c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249c48) {
            ctx->pc = 0x249C9Cu;
            goto label_249c9c;
        }
    }
    ctx->pc = 0x249C50u;
label_249c50:
    // 0x249c50: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x249c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_249c54:
    // 0x249c54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249c58:
    // 0x249c58: 0x34426922  ori         $v0, $v0, 0x6922
    ctx->pc = 0x249c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26914);
label_249c5c:
    // 0x249c5c: 0x52220027  beql        $s1, $v0, . + 4 + (0x27 << 2)
label_249c60:
    if (ctx->pc == 0x249C60u) {
        ctx->pc = 0x249C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C5Cu;
        // 0x249c60: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C64u;
        goto label_249c64;
    }
    ctx->pc = 0x249C5Cu;
    {
        const bool branch_taken_0x249c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249c5c) {
            ctx->pc = 0x249C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C5Cu;
            // 0x249c60: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249CFCu;
            goto label_249cfc;
        }
    }
    ctx->pc = 0x249C64u;
label_249c64:
    // 0x249c64: 0x1000011a  b           . + 4 + (0x11A << 2)
label_249c68:
    if (ctx->pc == 0x249C68u) {
        ctx->pc = 0x249C6Cu;
        goto label_249c6c;
    }
    ctx->pc = 0x249C64u;
    {
        const bool branch_taken_0x249c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c64) {
            ctx->pc = 0x24A0D0u;
            goto label_24a0d0;
        }
    }
    ctx->pc = 0x249C6Cu;
label_249c6c:
    // 0x249c6c: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x249c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_249c70:
    // 0x249c70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249c74:
    // 0x249c74: 0x34426925  ori         $v0, $v0, 0x6925
    ctx->pc = 0x249c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26917);
label_249c78:
    // 0x249c78: 0x1222002d  beq         $s1, $v0, . + 4 + (0x2D << 2)
label_249c7c:
    if (ctx->pc == 0x249C7Cu) {
        ctx->pc = 0x249C80u;
        goto label_249c80;
    }
    ctx->pc = 0x249C78u;
    {
        const bool branch_taken_0x249c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249c78) {
            ctx->pc = 0x249D30u;
            goto label_249d30;
        }
    }
    ctx->pc = 0x249C80u;
label_249c80:
    // 0x249c80: 0x3402c040  ori         $v0, $zero, 0xC040
    ctx->pc = 0x249c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49216);
label_249c84:
    // 0x249c84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_249c88:
    // 0x249c88: 0x3442691b  ori         $v0, $v0, 0x691B
    ctx->pc = 0x249c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26907);
label_249c8c:
    // 0x249c8c: 0x122200de  beq         $s1, $v0, . + 4 + (0xDE << 2)
label_249c90:
    if (ctx->pc == 0x249C90u) {
        ctx->pc = 0x249C94u;
        goto label_249c94;
    }
    ctx->pc = 0x249C8Cu;
    {
        const bool branch_taken_0x249c8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x249c8c) {
            ctx->pc = 0x24A008u;
            goto label_24a008;
        }
    }
    ctx->pc = 0x249C94u;
label_249c94:
    // 0x249c94: 0x1000010e  b           . + 4 + (0x10E << 2)
label_249c98:
    if (ctx->pc == 0x249C98u) {
        ctx->pc = 0x249C9Cu;
        goto label_249c9c;
    }
    ctx->pc = 0x249C94u;
    {
        const bool branch_taken_0x249c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c94) {
            ctx->pc = 0x24A0D0u;
            goto label_24a0d0;
        }
    }
    ctx->pc = 0x249C9Cu;
label_249c9c:
    // 0x249c9c: 0x6a020063  ldl         $v0, 0x63($s0)
    ctx->pc = 0x249c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_249ca0:
    // 0x249ca0: 0x6e02005c  ldr         $v0, 0x5C($s0)
    ctx->pc = 0x249ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_249ca4:
    // 0x249ca4: 0x6a03006b  ldl         $v1, 0x6B($s0)
    ctx->pc = 0x249ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249ca8:
    // 0x249ca8: 0x6e030064  ldr         $v1, 0x64($s0)
    ctx->pc = 0x249ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249cac:
    // 0x249cac: 0xb2820017  sdl         $v0, 0x17($s4)
    ctx->pc = 0x249cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cb0:
    // 0x249cb0: 0xb6820010  sdr         $v0, 0x10($s4)
    ctx->pc = 0x249cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cb4:
    // 0x249cb4: 0xb283001f  sdl         $v1, 0x1F($s4)
    ctx->pc = 0x249cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cb8:
    // 0x249cb8: 0xb6830018  sdr         $v1, 0x18($s4)
    ctx->pc = 0x249cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cbc:
    // 0x249cbc: 0x10000113  b           . + 4 + (0x113 << 2)
label_249cc0:
    if (ctx->pc == 0x249CC0u) {
        ctx->pc = 0x249CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CBCu;
        // 0x249cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249CC4u;
        goto label_249cc4;
    }
    ctx->pc = 0x249CBCu;
    {
        const bool branch_taken_0x249cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CBCu;
        // 0x249cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cbc) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249CC4u;
label_249cc4:
    // 0x249cc4: 0x96420030  lhu         $v0, 0x30($s2)
    ctx->pc = 0x249cc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_249cc8:
    // 0x249cc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x249cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_249ccc:
    // 0x249ccc: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
label_249cd0:
    if (ctx->pc == 0x249CD0u) {
        ctx->pc = 0x249CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CCCu;
        // 0x249cd0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249CD4u;
        goto label_249cd4;
    }
    ctx->pc = 0x249CCCu;
    {
        const bool branch_taken_0x249ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CCCu;
        // 0x249cd0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ccc) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249CD4u;
label_249cd4:
    // 0x249cd4: 0x6a060073  ldl         $a2, 0x73($s0)
    ctx->pc = 0x249cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_249cd8:
    // 0x249cd8: 0x6e06006c  ldr         $a2, 0x6C($s0)
    ctx->pc = 0x249cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_249cdc:
    // 0x249cdc: 0x6a02007b  ldl         $v0, 0x7B($s0)
    ctx->pc = 0x249cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_249ce0:
    // 0x249ce0: 0x6e020074  ldr         $v0, 0x74($s0)
    ctx->pc = 0x249ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_249ce4:
    // 0x249ce4: 0xb2860017  sdl         $a2, 0x17($s4)
    ctx->pc = 0x249ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ce8:
    // 0x249ce8: 0xb6860010  sdr         $a2, 0x10($s4)
    ctx->pc = 0x249ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cec:
    // 0x249cec: 0xb282001f  sdl         $v0, 0x1F($s4)
    ctx->pc = 0x249cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cf0:
    // 0x249cf0: 0xb6820018  sdr         $v0, 0x18($s4)
    ctx->pc = 0x249cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249cf4:
    // 0x249cf4: 0x10000105  b           . + 4 + (0x105 << 2)
label_249cf8:
    if (ctx->pc == 0x249CF8u) {
        ctx->pc = 0x249CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF4u;
        // 0x249cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249CFCu;
        goto label_249cfc;
    }
    ctx->pc = 0x249CF4u;
    {
        const bool branch_taken_0x249cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF4u;
        // 0x249cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cf4) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249CFCu;
label_249cfc:
    // 0x249cfc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x249cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_249d00:
    // 0x249d00: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
label_249d04:
    if (ctx->pc == 0x249D04u) {
        ctx->pc = 0x249D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D00u;
        // 0x249d04: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D08u;
        goto label_249d08;
    }
    ctx->pc = 0x249D00u;
    {
        const bool branch_taken_0x249d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D00u;
        // 0x249d04: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d00) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249D08u;
label_249d08:
    // 0x249d08: 0x6a050073  ldl         $a1, 0x73($s0)
    ctx->pc = 0x249d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_249d0c:
    // 0x249d0c: 0x6e05006c  ldr         $a1, 0x6C($s0)
    ctx->pc = 0x249d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_249d10:
    // 0x249d10: 0x6a06007b  ldl         $a2, 0x7B($s0)
    ctx->pc = 0x249d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_249d14:
    // 0x249d14: 0x6e060074  ldr         $a2, 0x74($s0)
    ctx->pc = 0x249d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_249d18:
    // 0x249d18: 0xb2850017  sdl         $a1, 0x17($s4)
    ctx->pc = 0x249d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d1c:
    // 0x249d1c: 0xb6850010  sdr         $a1, 0x10($s4)
    ctx->pc = 0x249d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d20:
    // 0x249d20: 0xb286001f  sdl         $a2, 0x1F($s4)
    ctx->pc = 0x249d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d24:
    // 0x249d24: 0xb6860018  sdr         $a2, 0x18($s4)
    ctx->pc = 0x249d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d28:
    // 0x249d28: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_249d2c:
    if (ctx->pc == 0x249D2Cu) {
        ctx->pc = 0x249D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D28u;
        // 0x249d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D30u;
        goto label_249d30;
    }
    ctx->pc = 0x249D28u;
    {
        const bool branch_taken_0x249d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D28u;
        // 0x249d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d28) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249D30u;
label_249d30:
    // 0x249d30: 0x6a040083  ldl         $a0, 0x83($s0)
    ctx->pc = 0x249d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_249d34:
    // 0x249d34: 0x6e04007c  ldr         $a0, 0x7C($s0)
    ctx->pc = 0x249d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_249d38:
    // 0x249d38: 0x6a05008b  ldl         $a1, 0x8B($s0)
    ctx->pc = 0x249d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_249d3c:
    // 0x249d3c: 0x6e050084  ldr         $a1, 0x84($s0)
    ctx->pc = 0x249d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_249d40:
    // 0x249d40: 0xb2840017  sdl         $a0, 0x17($s4)
    ctx->pc = 0x249d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d44:
    // 0x249d44: 0xb6840010  sdr         $a0, 0x10($s4)
    ctx->pc = 0x249d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d48:
    // 0x249d48: 0xb285001f  sdl         $a1, 0x1F($s4)
    ctx->pc = 0x249d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d4c:
    // 0x249d4c: 0xb6850018  sdr         $a1, 0x18($s4)
    ctx->pc = 0x249d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d50:
    // 0x249d50: 0x100000ee  b           . + 4 + (0xEE << 2)
label_249d54:
    if (ctx->pc == 0x249D54u) {
        ctx->pc = 0x249D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D50u;
        // 0x249d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D58u;
        goto label_249d58;
    }
    ctx->pc = 0x249D50u;
    {
        const bool branch_taken_0x249d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D50u;
        // 0x249d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d50) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249D58u;
label_249d58:
    // 0x249d58: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x249d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_249d5c:
    // 0x249d5c: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_249d60:
    if (ctx->pc == 0x249D60u) {
        ctx->pc = 0x249D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D5Cu;
        // 0x249d60: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D64u;
        goto label_249d64;
    }
    ctx->pc = 0x249D5Cu;
    {
        const bool branch_taken_0x249d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D5Cu;
        // 0x249d60: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d5c) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249D64u;
label_249d64:
    // 0x249d64: 0x6a030073  ldl         $v1, 0x73($s0)
    ctx->pc = 0x249d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249d68:
    // 0x249d68: 0x6e03006c  ldr         $v1, 0x6C($s0)
    ctx->pc = 0x249d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249d6c:
    // 0x249d6c: 0x6a04007b  ldl         $a0, 0x7B($s0)
    ctx->pc = 0x249d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_249d70:
    // 0x249d70: 0x6e040074  ldr         $a0, 0x74($s0)
    ctx->pc = 0x249d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_249d74:
    // 0x249d74: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x249d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d78:
    // 0x249d78: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x249d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d7c:
    // 0x249d7c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x249d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d80:
    // 0x249d80: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x249d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d84:
    // 0x249d84: 0x6a820017  ldl         $v0, 0x17($s4)
    ctx->pc = 0x249d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_249d88:
    // 0x249d88: 0x6e820010  ldr         $v0, 0x10($s4)
    ctx->pc = 0x249d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_249d8c:
    // 0x249d8c: 0x6a83001f  ldl         $v1, 0x1F($s4)
    ctx->pc = 0x249d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249d90:
    // 0x249d90: 0x6e830018  ldr         $v1, 0x18($s4)
    ctx->pc = 0x249d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249d94:
    // 0x249d94: 0xb2020073  sdl         $v0, 0x73($s0)
    ctx->pc = 0x249d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d98:
    // 0x249d98: 0xb602006c  sdr         $v0, 0x6C($s0)
    ctx->pc = 0x249d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249d9c:
    // 0x249d9c: 0xb203007b  sdl         $v1, 0x7B($s0)
    ctx->pc = 0x249d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249da0:
    // 0x249da0: 0xb6030074  sdr         $v1, 0x74($s0)
    ctx->pc = 0x249da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249da4:
    // 0x249da4: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_249da8:
    // 0x249da8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_249dac:
    if (ctx->pc == 0x249DACu) {
        ctx->pc = 0x249DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DA8u;
        // 0x249dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DB0u;
        goto label_249db0;
    }
    ctx->pc = 0x249DA8u;
    {
        const bool branch_taken_0x249da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DA8u;
        // 0x249dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249da8) {
            ctx->pc = 0x249DF8u;
            goto label_249df8;
        }
    }
    ctx->pc = 0x249DB0u;
label_249db0:
    // 0x249db0: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x249db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_249db4:
    // 0x249db4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x249db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_249db8:
    // 0x249db8: 0x34a5690e  ori         $a1, $a1, 0x690E
    ctx->pc = 0x249db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26894);
label_249dbc:
    // 0x249dbc: 0x40f809  jalr        $v0
label_249dc0:
    if (ctx->pc == 0x249DC0u) {
        ctx->pc = 0x249DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DBCu;
        // 0x249dc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DC4u;
        goto label_249dc4;
    }
    ctx->pc = 0x249DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249DC4u);
        ctx->pc = 0x249DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DBCu;
        // 0x249dc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249DBCu, 0x249DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249DC4u;
label_249dc4:
    // 0x249dc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249dc8:
    // 0x249dc8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_249dcc:
    if (ctx->pc == 0x249DCCu) {
        ctx->pc = 0x249DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DC8u;
        // 0x249dcc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DD0u;
        goto label_249dd0;
    }
    ctx->pc = 0x249DC8u;
    {
        const bool branch_taken_0x249dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DC8u;
        // 0x249dcc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dc8) {
            ctx->pc = 0x249DF8u;
            goto label_249df8;
        }
    }
    ctx->pc = 0x249DD0u;
label_249dd0:
    // 0x249dd0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x249dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_249dd4:
    // 0x249dd4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x249dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_249dd8:
    // 0x249dd8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x249dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249ddc:
    // 0x249ddc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x249ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249de0:
    // 0x249de0: 0xb2060073  sdl         $a2, 0x73($s0)
    ctx->pc = 0x249de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249de4:
    // 0x249de4: 0xb606006c  sdr         $a2, 0x6C($s0)
    ctx->pc = 0x249de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249de8:
    // 0x249de8: 0xb203007b  sdl         $v1, 0x7B($s0)
    ctx->pc = 0x249de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249dec:
    // 0x249dec: 0xb6030074  sdr         $v1, 0x74($s0)
    ctx->pc = 0x249decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249df0:
    // 0x249df0: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_249df4:
    if (ctx->pc == 0x249DF4u) {
        ctx->pc = 0x249DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF0u;
        // 0x249df4: 0xdfb50060  ld          $s5, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DF8u;
        goto label_249df8;
    }
    ctx->pc = 0x249DF0u;
    {
        const bool branch_taken_0x249df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF0u;
        // 0x249df4: 0xdfb50060  ld          $s5, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249df0) {
            ctx->pc = 0x24A114u;
            goto label_24a114;
        }
    }
    ctx->pc = 0x249DF8u;
label_249df8:
    // 0x249df8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x249df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_249dfc:
    // 0x249dfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249e00:
    // 0x249e00: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_249e04:
    if (ctx->pc == 0x249E04u) {
        ctx->pc = 0x249E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E00u;
        // 0x249e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E08u;
        goto label_249e08;
    }
    ctx->pc = 0x249E00u;
    {
        const bool branch_taken_0x249e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E00u;
        // 0x249e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e00) {
            ctx->pc = 0x24A108u;
            goto label_24a108;
        }
    }
    ctx->pc = 0x249E08u;
label_249e08:
    // 0x249e08: 0xae1d0004  sw          $sp, 0x4($s0)
    ctx->pc = 0x249e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 29));
label_249e0c:
    // 0x249e0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x249e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249e10:
    // 0x249e10: 0xc090f82  jal         func_243E08
label_249e14:
    if (ctx->pc == 0x249E14u) {
        ctx->pc = 0x249E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E10u;
        // 0x249e14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E18u;
        goto label_249e18;
    }
    ctx->pc = 0x249E10u;
    SET_GPR_U32(ctx, 31, 0x249E18u);
    ctx->pc = 0x249E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E10u;
    // 0x249e14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E08u, 0x249E10u, 0x249E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E18u;
label_249e18:
    // 0x249e18: 0x2603006c  addiu       $v1, $s0, 0x6C
    ctx->pc = 0x249e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_249e1c:
    // 0x249e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249e20:
    // 0x249e20: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x249e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_249e24:
    // 0x249e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249e28:
    // 0x249e28: 0xc090f82  jal         func_243E08
label_249e2c:
    if (ctx->pc == 0x249E2Cu) {
        ctx->pc = 0x249E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E28u;
        // 0x249e2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E30u;
        goto label_249e30;
    }
    ctx->pc = 0x249E28u;
    SET_GPR_U32(ctx, 31, 0x249E30u);
    ctx->pc = 0x249E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E28u;
    // 0x249e2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E08u, 0x249E28u, 0x249E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E30u;
label_249e30:
    // 0x249e30: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_249e34:
    if (ctx->pc == 0x249E34u) {
        ctx->pc = 0x249E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E30u;
        // 0x249e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E38u;
        goto label_249e38;
    }
    ctx->pc = 0x249E30u;
    {
        const bool branch_taken_0x249e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E30u;
        // 0x249e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e30) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249E38u;
label_249e38:
    // 0x249e38: 0x96420030  lhu         $v0, 0x30($s2)
    ctx->pc = 0x249e38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_249e3c:
    // 0x249e3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x249e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_249e40:
    // 0x249e40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_249e44:
    if (ctx->pc == 0x249E44u) {
        ctx->pc = 0x249E48u;
        goto label_249e48;
    }
    ctx->pc = 0x249E40u;
    {
        const bool branch_taken_0x249e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249e40) {
            ctx->pc = 0x249E50u;
            goto label_249e50;
        }
    }
    ctx->pc = 0x249E48u;
label_249e48:
    // 0x249e48: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_249e4c:
    if (ctx->pc == 0x249E4Cu) {
        ctx->pc = 0x249E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E48u;
        // 0x249e4c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E50u;
        goto label_249e50;
    }
    ctx->pc = 0x249E48u;
    {
        const bool branch_taken_0x249e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E48u;
        // 0x249e4c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e48) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249E50u;
label_249e50:
    // 0x249e50: 0x6a860017  ldl         $a2, 0x17($s4)
    ctx->pc = 0x249e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_249e54:
    // 0x249e54: 0x6e860010  ldr         $a2, 0x10($s4)
    ctx->pc = 0x249e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_249e58:
    // 0x249e58: 0x6a82001f  ldl         $v0, 0x1F($s4)
    ctx->pc = 0x249e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_249e5c:
    // 0x249e5c: 0x6e820018  ldr         $v0, 0x18($s4)
    ctx->pc = 0x249e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_249e60:
    // 0x249e60: 0xb2060073  sdl         $a2, 0x73($s0)
    ctx->pc = 0x249e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249e64:
    // 0x249e64: 0xb606006c  sdr         $a2, 0x6C($s0)
    ctx->pc = 0x249e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249e68:
    // 0x249e68: 0xb202007b  sdl         $v0, 0x7B($s0)
    ctx->pc = 0x249e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249e6c:
    // 0x249e6c: 0xb6020074  sdr         $v0, 0x74($s0)
    ctx->pc = 0x249e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249e70:
    // 0x249e70: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_249e74:
    if (ctx->pc == 0x249E74u) {
        ctx->pc = 0x249E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E70u;
        // 0x249e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E78u;
        goto label_249e78;
    }
    ctx->pc = 0x249E70u;
    {
        const bool branch_taken_0x249e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E70u;
        // 0x249e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e70) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249E78u;
label_249e78:
    // 0x249e78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x249e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249e7c:
    // 0x249e7c: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x249e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_249e80:
    // 0x249e80: 0xc0929c2  jal         func_24A708
label_249e84:
    if (ctx->pc == 0x249E84u) {
        ctx->pc = 0x249E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E80u;
        // 0x249e84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E88u;
        goto label_249e88;
    }
    ctx->pc = 0x249E80u;
    SET_GPR_U32(ctx, 31, 0x249E88u);
    ctx->pc = 0x249E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E80u;
    // 0x249e84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A708u, 0x249E80u, 0x249E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E88u;
label_249e88:
    // 0x249e88: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_249e8c:
    if (ctx->pc == 0x249E8Cu) {
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E90u;
        goto label_249e90;
    }
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e88) {
            ctx->pc = 0x24A110u;
            goto label_24a110;
        }
    }
    ctx->pc = 0x249E90u;
label_249e90:
    // 0x249e90: 0x8a620017  lwl         $v0, 0x17($s3)
    ctx->pc = 0x249e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_249e94:
    // 0x249e94: 0x9a620014  lwr         $v0, 0x14($s3)
    ctx->pc = 0x249e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_249e98:
    // 0x249e98: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x249e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_249e9c:
    // 0x249e9c: 0x1000009a  b           . + 4 + (0x9A << 2)
label_249ea0:
    if (ctx->pc == 0x249EA0u) {
        ctx->pc = 0x249EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E9Cu;
        // 0x249ea0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EA4u;
        goto label_249ea4;
    }
    ctx->pc = 0x249E9Cu;
    {
        const bool branch_taken_0x249e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E9Cu;
        // 0x249ea0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e9c) {
            ctx->pc = 0x24A108u;
            goto label_24a108;
        }
    }
    ctx->pc = 0x249EA4u;
label_249ea4:
    // 0x249ea4: 0x9203005d  lbu         $v1, 0x5D($s0)
    ctx->pc = 0x249ea4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_249ea8:
    // 0x249ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249eac:
    // 0x249eac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249eb0:
    // 0x249eb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249eb4:
    // 0x249eb4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_249eb8:
    if (ctx->pc == 0x249EB8u) {
        ctx->pc = 0x249EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EB4u;
        // 0x249eb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EBCu;
        goto label_249ebc;
    }
    ctx->pc = 0x249EB4u;
    {
        const bool branch_taken_0x249eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EB4u;
        // 0x249eb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249eb4) {
            ctx->pc = 0x249F00u;
            goto label_249f00;
        }
    }
    ctx->pc = 0x249EBCu;
label_249ebc:
    // 0x249ebc: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x249ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_249ec0:
    // 0x249ec0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_249ec4:
    if (ctx->pc == 0x249EC4u) {
        ctx->pc = 0x249EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC0u;
        // 0x249ec4: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EC8u;
        goto label_249ec8;
    }
    ctx->pc = 0x249EC0u;
    {
        const bool branch_taken_0x249ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249ec0) {
            ctx->pc = 0x249EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249EC0u;
            // 0x249ec4: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249EF0u;
            goto label_249ef0;
        }
    }
    ctx->pc = 0x249EC8u;
label_249ec8:
    // 0x249ec8: 0x6a050063  ldl         $a1, 0x63($s0)
    ctx->pc = 0x249ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_249ecc:
    // 0x249ecc: 0x6e05005c  ldr         $a1, 0x5C($s0)
    ctx->pc = 0x249eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_249ed0:
    // 0x249ed0: 0x6a06006b  ldl         $a2, 0x6B($s0)
    ctx->pc = 0x249ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_249ed4:
    // 0x249ed4: 0x6e060064  ldr         $a2, 0x64($s0)
    ctx->pc = 0x249ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_249ed8:
    // 0x249ed8: 0xb2a50017  sdl         $a1, 0x17($s5)
    ctx->pc = 0x249ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249edc:
    // 0x249edc: 0xb6a50010  sdr         $a1, 0x10($s5)
    ctx->pc = 0x249edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ee0:
    // 0x249ee0: 0xb2a6001f  sdl         $a2, 0x1F($s5)
    ctx->pc = 0x249ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ee4:
    // 0x249ee4: 0xb6a60018  sdr         $a2, 0x18($s5)
    ctx->pc = 0x249ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ee8:
    // 0x249ee8: 0x10000005  b           . + 4 + (0x5 << 2)
label_249eec:
    if (ctx->pc == 0x249EECu) {
        ctx->pc = 0x249EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EE8u;
        // 0x249eec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EF0u;
        goto label_249ef0;
    }
    ctx->pc = 0x249EE8u;
    {
        const bool branch_taken_0x249ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EE8u;
        // 0x249eec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ee8) {
            ctx->pc = 0x249F00u;
            goto label_249f00;
        }
    }
    ctx->pc = 0x249EF0u;
label_249ef0:
    // 0x249ef0: 0x8a630017  lwl         $v1, 0x17($s3)
    ctx->pc = 0x249ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_249ef4:
    // 0x249ef4: 0x9a630014  lwr         $v1, 0x14($s3)
    ctx->pc = 0x249ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_249ef8:
    // 0x249ef8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x249ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_249efc:
    // 0x249efc: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x249efcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_249f00:
    // 0x249f00: 0x92620030  lbu         $v0, 0x30($s3)
    ctx->pc = 0x249f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
label_249f04:
    // 0x249f04: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_249f08:
    if (ctx->pc == 0x249F08u) {
        ctx->pc = 0x249F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F04u;
        // 0x249f08: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F0Cu;
        goto label_249f0c;
    }
    ctx->pc = 0x249F04u;
    {
        const bool branch_taken_0x249f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f04) {
            ctx->pc = 0x249F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F04u;
            // 0x249f08: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F48u;
            goto label_249f48;
        }
    }
    ctx->pc = 0x249F0Cu;
label_249f0c:
    // 0x249f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249f10:
    // 0x249f10: 0xc0929a4  jal         func_24A690
label_249f14:
    if (ctx->pc == 0x249F14u) {
        ctx->pc = 0x249F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F10u;
        // 0x249f14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F18u;
        goto label_249f18;
    }
    ctx->pc = 0x249F10u;
    SET_GPR_U32(ctx, 31, 0x249F18u);
    ctx->pc = 0x249F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F10u;
    // 0x249f14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A690u, 0x249F10u, 0x249F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F18u;
label_249f18:
    // 0x249f18: 0x6aa40037  ldl         $a0, 0x37($s5)
    ctx->pc = 0x249f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_249f1c:
    // 0x249f1c: 0x6ea40030  ldr         $a0, 0x30($s5)
    ctx->pc = 0x249f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_249f20:
    // 0x249f20: 0x6aa5003f  ldl         $a1, 0x3F($s5)
    ctx->pc = 0x249f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_249f24:
    // 0x249f24: 0x6ea50038  ldr         $a1, 0x38($s5)
    ctx->pc = 0x249f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_249f28:
    // 0x249f28: 0xb2040083  sdl         $a0, 0x83($s0)
    ctx->pc = 0x249f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f2c:
    // 0x249f2c: 0xb604007c  sdr         $a0, 0x7C($s0)
    ctx->pc = 0x249f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f30:
    // 0x249f30: 0xb205008b  sdl         $a1, 0x8B($s0)
    ctx->pc = 0x249f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f34:
    // 0x249f34: 0xb6050084  sdr         $a1, 0x84($s0)
    ctx->pc = 0x249f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f38:
    // 0x249f38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249f3c:
    // 0x249f3c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x249f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_249f40:
    // 0x249f40: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x249f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_249f44:
    // 0x249f44: 0x96420030  lhu         $v0, 0x30($s2)
    ctx->pc = 0x249f44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_249f48:
    // 0x249f48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x249f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_249f4c:
    // 0x249f4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_249f50:
    if (ctx->pc == 0x249F50u) {
        ctx->pc = 0x249F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F4Cu;
        // 0x249f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F54u;
        goto label_249f54;
    }
    ctx->pc = 0x249F4Cu;
    {
        const bool branch_taken_0x249f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F4Cu;
        // 0x249f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f4c) {
            ctx->pc = 0x249F90u;
            goto label_249f90;
        }
    }
    ctx->pc = 0x249F54u;
label_249f54:
    // 0x249f54: 0x92630021  lbu         $v1, 0x21($s3)
    ctx->pc = 0x249f54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_249f58:
    // 0x249f58: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_249f5c:
    if (ctx->pc == 0x249F5Cu) {
        ctx->pc = 0x249F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F58u;
        // 0x249f5c: 0x92630011  lbu         $v1, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F60u;
        goto label_249f60;
    }
    ctx->pc = 0x249F58u;
    {
        const bool branch_taken_0x249f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249f58) {
            ctx->pc = 0x249F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F58u;
            // 0x249f5c: 0x92630011  lbu         $v1, 0x11($s3) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F98u;
            goto label_249f98;
        }
    }
    ctx->pc = 0x249F60u;
label_249f60:
    // 0x249f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249f64:
    // 0x249f64: 0xc0929a4  jal         func_24A690
label_249f68:
    if (ctx->pc == 0x249F68u) {
        ctx->pc = 0x249F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F64u;
        // 0x249f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F6Cu;
        goto label_249f6c;
    }
    ctx->pc = 0x249F64u;
    SET_GPR_U32(ctx, 31, 0x249F6Cu);
    ctx->pc = 0x249F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F64u;
    // 0x249f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A690u, 0x249F64u, 0x249F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F6Cu;
label_249f6c:
    // 0x249f6c: 0x6aa30027  ldl         $v1, 0x27($s5)
    ctx->pc = 0x249f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249f70:
    // 0x249f70: 0x6ea30020  ldr         $v1, 0x20($s5)
    ctx->pc = 0x249f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249f74:
    // 0x249f74: 0x6aa4002f  ldl         $a0, 0x2F($s5)
    ctx->pc = 0x249f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_249f78:
    // 0x249f78: 0x6ea40028  ldr         $a0, 0x28($s5)
    ctx->pc = 0x249f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_249f7c:
    // 0x249f7c: 0xb2030073  sdl         $v1, 0x73($s0)
    ctx->pc = 0x249f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f80:
    // 0x249f80: 0xb603006c  sdr         $v1, 0x6C($s0)
    ctx->pc = 0x249f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f84:
    // 0x249f84: 0xb204007b  sdl         $a0, 0x7B($s0)
    ctx->pc = 0x249f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f88:
    // 0x249f88: 0xb6040074  sdr         $a0, 0x74($s0)
    ctx->pc = 0x249f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249f8c:
    // 0x249f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249f90:
    // 0x249f90: 0x92630011  lbu         $v1, 0x11($s3)
    ctx->pc = 0x249f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_249f94:
    // 0x249f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249f98:
    // 0x249f98: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_249f9c:
    if (ctx->pc == 0x249F9Cu) {
        ctx->pc = 0x249F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F98u;
        // 0x249f9c: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FA0u;
        goto label_249fa0;
    }
    ctx->pc = 0x249F98u;
    {
        const bool branch_taken_0x249f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249f98) {
            ctx->pc = 0x249F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F98u;
            // 0x249f9c: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FC8u;
            goto label_249fc8;
        }
    }
    ctx->pc = 0x249FA0u;
label_249fa0:
    // 0x249fa0: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_249fa4:
    if (ctx->pc == 0x249FA4u) {
        ctx->pc = 0x249FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA0u;
        // 0x249fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FA8u;
        goto label_249fa8;
    }
    ctx->pc = 0x249FA0u;
    {
        const bool branch_taken_0x249fa0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x249fa0) {
            ctx->pc = 0x249FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FA0u;
            // 0x249fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FB0u;
            goto label_249fb0;
        }
    }
    ctx->pc = 0x249FA8u;
label_249fa8:
    // 0x249fa8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_249fac:
    if (ctx->pc == 0x249FACu) {
        ctx->pc = 0x249FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA8u;
        // 0x249fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FB0u;
        goto label_249fb0;
    }
    ctx->pc = 0x249FA8u;
    {
        const bool branch_taken_0x249fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA8u;
        // 0x249fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa8) {
            ctx->pc = 0x249FC4u;
            goto label_249fc4;
        }
    }
    ctx->pc = 0x249FB0u;
label_249fb0:
    // 0x249fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x249fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249fb4:
    // 0x249fb4: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_249fb8:
    // 0x249fb8: 0xc0929c2  jal         func_24A708
label_249fbc:
    if (ctx->pc == 0x249FBCu) {
        ctx->pc = 0x249FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FB8u;
        // 0x249fbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FC0u;
        goto label_249fc0;
    }
    ctx->pc = 0x249FB8u;
    SET_GPR_U32(ctx, 31, 0x249FC0u);
    ctx->pc = 0x249FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249FB8u;
    // 0x249fbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A708u, 0x249FB8u, 0x249FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FC0u;
label_249fc0:
    // 0x249fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249fc4:
    // 0x249fc4: 0x96420030  lhu         $v0, 0x30($s2)
    ctx->pc = 0x249fc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_249fc8:
    // 0x249fc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x249fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_249fcc:
    // 0x249fcc: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_249fd0:
    if (ctx->pc == 0x249FD0u) {
        ctx->pc = 0x249FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FCCu;
        // 0x249fd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FD4u;
        goto label_249fd4;
    }
    ctx->pc = 0x249FCCu;
    {
        const bool branch_taken_0x249fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FCCu;
        // 0x249fd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fcc) {
            ctx->pc = 0x24A100u;
            goto label_24a100;
        }
    }
    ctx->pc = 0x249FD4u;
label_249fd4:
    // 0x249fd4: 0x92630021  lbu         $v1, 0x21($s3)
    ctx->pc = 0x249fd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_249fd8:
    // 0x249fd8: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_249fdc:
    if (ctx->pc == 0x249FDCu) {
        ctx->pc = 0x249FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FD8u;
        // 0x249fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FE0u;
        goto label_249fe0;
    }
    ctx->pc = 0x249FD8u;
    {
        const bool branch_taken_0x249fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FD8u;
        // 0x249fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fd8) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x249FE0u;
label_249fe0:
    // 0x249fe0: 0x6aa20027  ldl         $v0, 0x27($s5)
    ctx->pc = 0x249fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_249fe4:
    // 0x249fe4: 0x6ea20020  ldr         $v0, 0x20($s5)
    ctx->pc = 0x249fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_249fe8:
    // 0x249fe8: 0x6aa3002f  ldl         $v1, 0x2F($s5)
    ctx->pc = 0x249fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249fec:
    // 0x249fec: 0x6ea30028  ldr         $v1, 0x28($s5)
    ctx->pc = 0x249fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249ff0:
    // 0x249ff0: 0xb2020073  sdl         $v0, 0x73($s0)
    ctx->pc = 0x249ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ff4:
    // 0x249ff4: 0xb602006c  sdr         $v0, 0x6C($s0)
    ctx->pc = 0x249ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ff8:
    // 0x249ff8: 0xb203007b  sdl         $v1, 0x7B($s0)
    ctx->pc = 0x249ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249ffc:
    // 0x249ffc: 0xb6030074  sdr         $v1, 0x74($s0)
    ctx->pc = 0x249ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a000:
    // 0x24a000: 0x10000042  b           . + 4 + (0x42 << 2)
label_24a004:
    if (ctx->pc == 0x24A004u) {
        ctx->pc = 0x24A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A000u;
        // 0x24a004: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A008u;
        goto label_24a008;
    }
    ctx->pc = 0x24A000u;
    {
        const bool branch_taken_0x24a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A000u;
        // 0x24a004: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a000) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A008u;
label_24a008:
    // 0x24a008: 0x6a060083  ldl         $a2, 0x83($s0)
    ctx->pc = 0x24a008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_24a00c:
    // 0x24a00c: 0x6e06007c  ldr         $a2, 0x7C($s0)
    ctx->pc = 0x24a00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_24a010:
    // 0x24a010: 0x6a02008b  ldl         $v0, 0x8B($s0)
    ctx->pc = 0x24a010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_24a014:
    // 0x24a014: 0x6e020084  ldr         $v0, 0x84($s0)
    ctx->pc = 0x24a014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_24a018:
    // 0x24a018: 0xb2a60037  sdl         $a2, 0x37($s5)
    ctx->pc = 0x24a018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a01c:
    // 0x24a01c: 0xb6a60030  sdr         $a2, 0x30($s5)
    ctx->pc = 0x24a01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a020:
    // 0x24a020: 0xb2a2003f  sdl         $v0, 0x3F($s5)
    ctx->pc = 0x24a020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a024:
    // 0x24a024: 0xb6a20038  sdr         $v0, 0x38($s5)
    ctx->pc = 0x24a024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a028:
    // 0x24a028: 0x96440030  lhu         $a0, 0x30($s2)
    ctx->pc = 0x24a028u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_24a02c:
    // 0x24a02c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x24a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_24a030:
    // 0x24a030: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_24a034:
    if (ctx->pc == 0x24A034u) {
        ctx->pc = 0x24A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A030u;
        // 0x24a034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A038u;
        goto label_24a038;
    }
    ctx->pc = 0x24A030u;
    {
        const bool branch_taken_0x24a030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A030u;
        // 0x24a034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a030) {
            ctx->pc = 0x24A06Cu;
            goto label_24a06c;
        }
    }
    ctx->pc = 0x24A038u;
label_24a038:
    // 0x24a038: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x24a038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_24a03c:
    // 0x24a03c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_24a040:
    if (ctx->pc == 0x24A040u) {
        ctx->pc = 0x24A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A03Cu;
        // 0x24a040: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A044u;
        goto label_24a044;
    }
    ctx->pc = 0x24A03Cu;
    {
        const bool branch_taken_0x24a03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A03Cu;
        // 0x24a040: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a03c) {
            ctx->pc = 0x24A070u;
            goto label_24a070;
        }
    }
    ctx->pc = 0x24A044u;
label_24a044:
    // 0x24a044: 0x6a050073  ldl         $a1, 0x73($s0)
    ctx->pc = 0x24a044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_24a048:
    // 0x24a048: 0x6e05006c  ldr         $a1, 0x6C($s0)
    ctx->pc = 0x24a048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_24a04c:
    // 0x24a04c: 0x6a06007b  ldl         $a2, 0x7B($s0)
    ctx->pc = 0x24a04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_24a050:
    // 0x24a050: 0x6e060074  ldr         $a2, 0x74($s0)
    ctx->pc = 0x24a050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_24a054:
    // 0x24a054: 0xb2a50027  sdl         $a1, 0x27($s5)
    ctx->pc = 0x24a054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a058:
    // 0x24a058: 0xb6a50020  sdr         $a1, 0x20($s5)
    ctx->pc = 0x24a058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a05c:
    // 0x24a05c: 0xb2a6002f  sdl         $a2, 0x2F($s5)
    ctx->pc = 0x24a05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a060:
    // 0x24a060: 0xb6a60028  sdr         $a2, 0x28($s5)
    ctx->pc = 0x24a060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a064:
    // 0x24a064: 0x10000029  b           . + 4 + (0x29 << 2)
label_24a068:
    if (ctx->pc == 0x24A068u) {
        ctx->pc = 0x24A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A064u;
        // 0x24a068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A06Cu;
        goto label_24a06c;
    }
    ctx->pc = 0x24A064u;
    {
        const bool branch_taken_0x24a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A064u;
        // 0x24a068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a064) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A06Cu;
label_24a06c:
    // 0x24a06c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x24a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_24a070:
    // 0x24a070: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_24a074:
    if (ctx->pc == 0x24A074u) {
        ctx->pc = 0x24A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A070u;
        // 0x24a074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A078u;
        goto label_24a078;
    }
    ctx->pc = 0x24A070u;
    {
        const bool branch_taken_0x24a070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A070u;
        // 0x24a074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a070) {
            ctx->pc = 0x24A0ACu;
            goto label_24a0ac;
        }
    }
    ctx->pc = 0x24A078u;
label_24a078:
    // 0x24a078: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x24a078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_24a07c:
    // 0x24a07c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_24a080:
    if (ctx->pc == 0x24A080u) {
        ctx->pc = 0x24A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A07Cu;
        // 0x24a080: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A084u;
        goto label_24a084;
    }
    ctx->pc = 0x24A07Cu;
    {
        const bool branch_taken_0x24a07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A07Cu;
        // 0x24a080: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a07c) {
            ctx->pc = 0x24A0B0u;
            goto label_24a0b0;
        }
    }
    ctx->pc = 0x24A084u;
label_24a084:
    // 0x24a084: 0x6a040073  ldl         $a0, 0x73($s0)
    ctx->pc = 0x24a084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_24a088:
    // 0x24a088: 0x6e04006c  ldr         $a0, 0x6C($s0)
    ctx->pc = 0x24a088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_24a08c:
    // 0x24a08c: 0x6a05007b  ldl         $a1, 0x7B($s0)
    ctx->pc = 0x24a08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_24a090:
    // 0x24a090: 0x6e050074  ldr         $a1, 0x74($s0)
    ctx->pc = 0x24a090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_24a094:
    // 0x24a094: 0xb2a40027  sdl         $a0, 0x27($s5)
    ctx->pc = 0x24a094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a098:
    // 0x24a098: 0xb6a40020  sdr         $a0, 0x20($s5)
    ctx->pc = 0x24a098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a09c:
    // 0x24a09c: 0xb2a5002f  sdl         $a1, 0x2F($s5)
    ctx->pc = 0x24a09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a0a0:
    // 0x24a0a0: 0xb6a50028  sdr         $a1, 0x28($s5)
    ctx->pc = 0x24a0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a0a4:
    // 0x24a0a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_24a0a8:
    if (ctx->pc == 0x24A0A8u) {
        ctx->pc = 0x24A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A4u;
        // 0x24a0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0ACu;
        goto label_24a0ac;
    }
    ctx->pc = 0x24A0A4u;
    {
        const bool branch_taken_0x24a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A4u;
        // 0x24a0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0a4) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A0ACu;
label_24a0ac:
    // 0x24a0ac: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x24a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_24a0b0:
    // 0x24a0b0: 0xc048c96  jal         func_123258
label_24a0b4:
    if (ctx->pc == 0x24A0B4u) {
        ctx->pc = 0x24A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0B0u;
        // 0x24a0b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0B8u;
        goto label_24a0b8;
    }
    ctx->pc = 0x24A0B0u;
    SET_GPR_U32(ctx, 31, 0x24A0B8u);
    ctx->pc = 0x24A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0B0u;
    // 0x24a0b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24A0B0u, 0x24A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0B8u;
label_24a0b8:
    // 0x24a0b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_24a0bc:
    if (ctx->pc == 0x24A0BCu) {
        ctx->pc = 0x24A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0B8u;
        // 0x24a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0C0u;
        goto label_24a0c0;
    }
    ctx->pc = 0x24A0B8u;
    {
        const bool branch_taken_0x24a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0B8u;
        // 0x24a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0b8) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A0C0u;
label_24a0c0:
    // 0x24a0c0: 0xc09284c  jal         func_24A130
label_24a0c4:
    if (ctx->pc == 0x24A0C4u) {
        ctx->pc = 0x24A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C0u;
        // 0x24a0c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0C8u;
        goto label_24a0c8;
    }
    ctx->pc = 0x24A0C0u;
    SET_GPR_U32(ctx, 31, 0x24A0C8u);
    ctx->pc = 0x24A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0C0u;
    // 0x24a0c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A130u, 0x24A0C0u, 0x24A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0C8u;
label_24a0c8:
    // 0x24a0c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_24a0cc:
    if (ctx->pc == 0x24A0CCu) {
        ctx->pc = 0x24A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C8u;
        // 0x24a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0D0u;
        goto label_24a0d0;
    }
    ctx->pc = 0x24A0C8u;
    {
        const bool branch_taken_0x24a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C8u;
        // 0x24a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0c8) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A0D0u;
label_24a0d0:
    // 0x24a0d0: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_24a0d4:
    if (ctx->pc == 0x24A0D4u) {
        ctx->pc = 0x24A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0D0u;
        // 0x24a0d4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0D8u;
        goto label_24a0d8;
    }
    ctx->pc = 0x24A0D0u;
    {
        const bool branch_taken_0x24a0d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0D0u;
        // 0x24a0d4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0d0) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A0D8u;
label_24a0d8:
    // 0x24a0d8: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_24a0dc:
    // 0x24a0dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24a0e0:
    if (ctx->pc == 0x24A0E0u) {
        ctx->pc = 0x24A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0DCu;
        // 0x24a0e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0E4u;
        goto label_24a0e4;
    }
    ctx->pc = 0x24A0DCu;
    {
        const bool branch_taken_0x24a0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0DCu;
        // 0x24a0e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0dc) {
            ctx->pc = 0x24A0ECu;
            goto label_24a0ec;
        }
    }
    ctx->pc = 0x24A0E4u;
label_24a0e4:
    // 0x24a0e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_24a0e8:
    if (ctx->pc == 0x24A0E8u) {
        ctx->pc = 0x24A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0E4u;
        // 0x24a0e8: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0ECu;
        goto label_24a0ec;
    }
    ctx->pc = 0x24A0E4u;
    {
        const bool branch_taken_0x24a0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0E4u;
        // 0x24a0e8: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0e4) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A0ECu;
label_24a0ec:
    // 0x24a0ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a0f0:
    // 0x24a0f0: 0x40f809  jalr        $v0
label_24a0f4:
    if (ctx->pc == 0x24A0F4u) {
        ctx->pc = 0x24A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0F0u;
        // 0x24a0f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0F8u;
        goto label_24a0f8;
    }
    ctx->pc = 0x24A0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A0F8u);
        ctx->pc = 0x24A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0F0u;
        // 0x24a0f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A0F0u, 0x24A0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A0F8u;
label_24a0f8:
    // 0x24a0f8: 0xc092590  jal         func_249640
label_24a0fc:
    if (ctx->pc == 0x24A0FCu) {
        ctx->pc = 0x24A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0F8u;
        // 0x24a0fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A100u;
        goto label_24a100;
    }
    ctx->pc = 0x24A0F8u;
    SET_GPR_U32(ctx, 31, 0x24A100u);
    ctx->pc = 0x24A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0F8u;
    // 0x24a0fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249640u, 0x24A0F8u, 0x24A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A100u;
label_24a100:
    // 0x24a100: 0x10000002  b           . + 4 + (0x2 << 2)
label_24a104:
    if (ctx->pc == 0x24A104u) {
        ctx->pc = 0x24A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A100u;
        // 0x24a104: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A108u;
        goto label_24a108;
    }
    ctx->pc = 0x24A100u;
    {
        const bool branch_taken_0x24a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A100u;
        // 0x24a104: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a100) {
            ctx->pc = 0x24A10Cu;
            goto label_24a10c;
        }
    }
    ctx->pc = 0x24A108u;
label_24a108:
    // 0x24a108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a10c:
    // 0x24a10c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24a10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24a110:
    // 0x24a110: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24a110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24a114:
    // 0x24a114: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24a114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24a118:
    // 0x24a118: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24a118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24a11c:
    // 0x24a11c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24a120:
    // 0x24a120: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24a120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24a124:
    // 0x24a124: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a128:
    // 0x24a128: 0x3e00008  jr          $ra
label_24a12c:
    if (ctx->pc == 0x24A12Cu) {
        ctx->pc = 0x24A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A128u;
        // 0x24a12c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A130u;
        goto label_fallthrough_0x24a128;
    }
    ctx->pc = 0x24A128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A128u;
        // 0x24a12c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24a128:
    ctx->pc = 0x24A130u;
}
