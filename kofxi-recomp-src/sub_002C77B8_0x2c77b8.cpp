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

// Function: sub_002C77B8
// Address: 0x2c77b8 - 0x2c8610
void sub_002C77B8_0x2c77b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C77B8_0x2c77b8");
#endif

    switch (ctx->pc) {
        case 0x2c77b8u: goto label_2c77b8;
        case 0x2c77bcu: goto label_2c77bc;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77c4u: goto label_2c77c4;
        case 0x2c77c8u: goto label_2c77c8;
        case 0x2c77ccu: goto label_2c77cc;
        case 0x2c77d0u: goto label_2c77d0;
        case 0x2c77d4u: goto label_2c77d4;
        case 0x2c77d8u: goto label_2c77d8;
        case 0x2c77dcu: goto label_2c77dc;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77e4u: goto label_2c77e4;
        case 0x2c77e8u: goto label_2c77e8;
        case 0x2c77ecu: goto label_2c77ec;
        case 0x2c77f0u: goto label_2c77f0;
        case 0x2c77f4u: goto label_2c77f4;
        case 0x2c77f8u: goto label_2c77f8;
        case 0x2c77fcu: goto label_2c77fc;
        case 0x2c7800u: goto label_2c7800;
        case 0x2c7804u: goto label_2c7804;
        case 0x2c7808u: goto label_2c7808;
        case 0x2c780cu: goto label_2c780c;
        case 0x2c7810u: goto label_2c7810;
        case 0x2c7814u: goto label_2c7814;
        case 0x2c7818u: goto label_2c7818;
        case 0x2c781cu: goto label_2c781c;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7824u: goto label_2c7824;
        case 0x2c7828u: goto label_2c7828;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7830u: goto label_2c7830;
        case 0x2c7834u: goto label_2c7834;
        case 0x2c7838u: goto label_2c7838;
        case 0x2c783cu: goto label_2c783c;
        case 0x2c7840u: goto label_2c7840;
        case 0x2c7844u: goto label_2c7844;
        case 0x2c7848u: goto label_2c7848;
        case 0x2c784cu: goto label_2c784c;
        case 0x2c7850u: goto label_2c7850;
        case 0x2c7854u: goto label_2c7854;
        case 0x2c7858u: goto label_2c7858;
        case 0x2c785cu: goto label_2c785c;
        case 0x2c7860u: goto label_2c7860;
        case 0x2c7864u: goto label_2c7864;
        case 0x2c7868u: goto label_2c7868;
        case 0x2c786cu: goto label_2c786c;
        case 0x2c7870u: goto label_2c7870;
        case 0x2c7874u: goto label_2c7874;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c787cu: goto label_2c787c;
        case 0x2c7880u: goto label_2c7880;
        case 0x2c7884u: goto label_2c7884;
        case 0x2c7888u: goto label_2c7888;
        case 0x2c788cu: goto label_2c788c;
        case 0x2c7890u: goto label_2c7890;
        case 0x2c7894u: goto label_2c7894;
        case 0x2c7898u: goto label_2c7898;
        case 0x2c789cu: goto label_2c789c;
        case 0x2c78a0u: goto label_2c78a0;
        case 0x2c78a4u: goto label_2c78a4;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c78acu: goto label_2c78ac;
        case 0x2c78b0u: goto label_2c78b0;
        case 0x2c78b4u: goto label_2c78b4;
        case 0x2c78b8u: goto label_2c78b8;
        case 0x2c78bcu: goto label_2c78bc;
        case 0x2c78c0u: goto label_2c78c0;
        case 0x2c78c4u: goto label_2c78c4;
        case 0x2c78c8u: goto label_2c78c8;
        case 0x2c78ccu: goto label_2c78cc;
        case 0x2c78d0u: goto label_2c78d0;
        case 0x2c78d4u: goto label_2c78d4;
        case 0x2c78d8u: goto label_2c78d8;
        case 0x2c78dcu: goto label_2c78dc;
        case 0x2c78e0u: goto label_2c78e0;
        case 0x2c78e4u: goto label_2c78e4;
        case 0x2c78e8u: goto label_2c78e8;
        case 0x2c78ecu: goto label_2c78ec;
        case 0x2c78f0u: goto label_2c78f0;
        case 0x2c78f4u: goto label_2c78f4;
        case 0x2c78f8u: goto label_2c78f8;
        case 0x2c78fcu: goto label_2c78fc;
        case 0x2c7900u: goto label_2c7900;
        case 0x2c7904u: goto label_2c7904;
        case 0x2c7908u: goto label_2c7908;
        case 0x2c790cu: goto label_2c790c;
        case 0x2c7910u: goto label_2c7910;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c7918u: goto label_2c7918;
        case 0x2c791cu: goto label_2c791c;
        case 0x2c7920u: goto label_2c7920;
        case 0x2c7924u: goto label_2c7924;
        case 0x2c7928u: goto label_2c7928;
        case 0x2c792cu: goto label_2c792c;
        case 0x2c7930u: goto label_2c7930;
        case 0x2c7934u: goto label_2c7934;
        case 0x2c7938u: goto label_2c7938;
        case 0x2c793cu: goto label_2c793c;
        case 0x2c7940u: goto label_2c7940;
        case 0x2c7944u: goto label_2c7944;
        case 0x2c7948u: goto label_2c7948;
        case 0x2c794cu: goto label_2c794c;
        case 0x2c7950u: goto label_2c7950;
        case 0x2c7954u: goto label_2c7954;
        case 0x2c7958u: goto label_2c7958;
        case 0x2c795cu: goto label_2c795c;
        case 0x2c7960u: goto label_2c7960;
        case 0x2c7964u: goto label_2c7964;
        case 0x2c7968u: goto label_2c7968;
        case 0x2c796cu: goto label_2c796c;
        case 0x2c7970u: goto label_2c7970;
        case 0x2c7974u: goto label_2c7974;
        case 0x2c7978u: goto label_2c7978;
        case 0x2c797cu: goto label_2c797c;
        case 0x2c7980u: goto label_2c7980;
        case 0x2c7984u: goto label_2c7984;
        case 0x2c7988u: goto label_2c7988;
        case 0x2c798cu: goto label_2c798c;
        case 0x2c7990u: goto label_2c7990;
        case 0x2c7994u: goto label_2c7994;
        case 0x2c7998u: goto label_2c7998;
        case 0x2c799cu: goto label_2c799c;
        case 0x2c79a0u: goto label_2c79a0;
        case 0x2c79a4u: goto label_2c79a4;
        case 0x2c79a8u: goto label_2c79a8;
        case 0x2c79acu: goto label_2c79ac;
        case 0x2c79b0u: goto label_2c79b0;
        case 0x2c79b4u: goto label_2c79b4;
        case 0x2c79b8u: goto label_2c79b8;
        case 0x2c79bcu: goto label_2c79bc;
        case 0x2c79c0u: goto label_2c79c0;
        case 0x2c79c4u: goto label_2c79c4;
        case 0x2c79c8u: goto label_2c79c8;
        case 0x2c79ccu: goto label_2c79cc;
        case 0x2c79d0u: goto label_2c79d0;
        case 0x2c79d4u: goto label_2c79d4;
        case 0x2c79d8u: goto label_2c79d8;
        case 0x2c79dcu: goto label_2c79dc;
        case 0x2c79e0u: goto label_2c79e0;
        case 0x2c79e4u: goto label_2c79e4;
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c79ecu: goto label_2c79ec;
        case 0x2c79f0u: goto label_2c79f0;
        case 0x2c79f4u: goto label_2c79f4;
        case 0x2c79f8u: goto label_2c79f8;
        case 0x2c79fcu: goto label_2c79fc;
        case 0x2c7a00u: goto label_2c7a00;
        case 0x2c7a04u: goto label_2c7a04;
        case 0x2c7a08u: goto label_2c7a08;
        case 0x2c7a0cu: goto label_2c7a0c;
        case 0x2c7a10u: goto label_2c7a10;
        case 0x2c7a14u: goto label_2c7a14;
        case 0x2c7a18u: goto label_2c7a18;
        case 0x2c7a1cu: goto label_2c7a1c;
        case 0x2c7a20u: goto label_2c7a20;
        case 0x2c7a24u: goto label_2c7a24;
        case 0x2c7a28u: goto label_2c7a28;
        case 0x2c7a2cu: goto label_2c7a2c;
        case 0x2c7a30u: goto label_2c7a30;
        case 0x2c7a34u: goto label_2c7a34;
        case 0x2c7a38u: goto label_2c7a38;
        case 0x2c7a3cu: goto label_2c7a3c;
        case 0x2c7a40u: goto label_2c7a40;
        case 0x2c7a44u: goto label_2c7a44;
        case 0x2c7a48u: goto label_2c7a48;
        case 0x2c7a4cu: goto label_2c7a4c;
        case 0x2c7a50u: goto label_2c7a50;
        case 0x2c7a54u: goto label_2c7a54;
        case 0x2c7a58u: goto label_2c7a58;
        case 0x2c7a5cu: goto label_2c7a5c;
        case 0x2c7a60u: goto label_2c7a60;
        case 0x2c7a64u: goto label_2c7a64;
        case 0x2c7a68u: goto label_2c7a68;
        case 0x2c7a6cu: goto label_2c7a6c;
        case 0x2c7a70u: goto label_2c7a70;
        case 0x2c7a74u: goto label_2c7a74;
        case 0x2c7a78u: goto label_2c7a78;
        case 0x2c7a7cu: goto label_2c7a7c;
        case 0x2c7a80u: goto label_2c7a80;
        case 0x2c7a84u: goto label_2c7a84;
        case 0x2c7a88u: goto label_2c7a88;
        case 0x2c7a8cu: goto label_2c7a8c;
        case 0x2c7a90u: goto label_2c7a90;
        case 0x2c7a94u: goto label_2c7a94;
        case 0x2c7a98u: goto label_2c7a98;
        case 0x2c7a9cu: goto label_2c7a9c;
        case 0x2c7aa0u: goto label_2c7aa0;
        case 0x2c7aa4u: goto label_2c7aa4;
        case 0x2c7aa8u: goto label_2c7aa8;
        case 0x2c7aacu: goto label_2c7aac;
        case 0x2c7ab0u: goto label_2c7ab0;
        case 0x2c7ab4u: goto label_2c7ab4;
        case 0x2c7ab8u: goto label_2c7ab8;
        case 0x2c7abcu: goto label_2c7abc;
        case 0x2c7ac0u: goto label_2c7ac0;
        case 0x2c7ac4u: goto label_2c7ac4;
        case 0x2c7ac8u: goto label_2c7ac8;
        case 0x2c7accu: goto label_2c7acc;
        case 0x2c7ad0u: goto label_2c7ad0;
        case 0x2c7ad4u: goto label_2c7ad4;
        case 0x2c7ad8u: goto label_2c7ad8;
        case 0x2c7adcu: goto label_2c7adc;
        case 0x2c7ae0u: goto label_2c7ae0;
        case 0x2c7ae4u: goto label_2c7ae4;
        case 0x2c7ae8u: goto label_2c7ae8;
        case 0x2c7aecu: goto label_2c7aec;
        case 0x2c7af0u: goto label_2c7af0;
        case 0x2c7af4u: goto label_2c7af4;
        case 0x2c7af8u: goto label_2c7af8;
        case 0x2c7afcu: goto label_2c7afc;
        case 0x2c7b00u: goto label_2c7b00;
        case 0x2c7b04u: goto label_2c7b04;
        case 0x2c7b08u: goto label_2c7b08;
        case 0x2c7b0cu: goto label_2c7b0c;
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b14u: goto label_2c7b14;
        case 0x2c7b18u: goto label_2c7b18;
        case 0x2c7b1cu: goto label_2c7b1c;
        case 0x2c7b20u: goto label_2c7b20;
        case 0x2c7b24u: goto label_2c7b24;
        case 0x2c7b28u: goto label_2c7b28;
        case 0x2c7b2cu: goto label_2c7b2c;
        case 0x2c7b30u: goto label_2c7b30;
        case 0x2c7b34u: goto label_2c7b34;
        case 0x2c7b38u: goto label_2c7b38;
        case 0x2c7b3cu: goto label_2c7b3c;
        case 0x2c7b40u: goto label_2c7b40;
        case 0x2c7b44u: goto label_2c7b44;
        case 0x2c7b48u: goto label_2c7b48;
        case 0x2c7b4cu: goto label_2c7b4c;
        case 0x2c7b50u: goto label_2c7b50;
        case 0x2c7b54u: goto label_2c7b54;
        case 0x2c7b58u: goto label_2c7b58;
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b60u: goto label_2c7b60;
        case 0x2c7b64u: goto label_2c7b64;
        case 0x2c7b68u: goto label_2c7b68;
        case 0x2c7b6cu: goto label_2c7b6c;
        case 0x2c7b70u: goto label_2c7b70;
        case 0x2c7b74u: goto label_2c7b74;
        case 0x2c7b78u: goto label_2c7b78;
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b80u: goto label_2c7b80;
        case 0x2c7b84u: goto label_2c7b84;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7b8cu: goto label_2c7b8c;
        case 0x2c7b90u: goto label_2c7b90;
        case 0x2c7b94u: goto label_2c7b94;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7b9cu: goto label_2c7b9c;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7ba4u: goto label_2c7ba4;
        case 0x2c7ba8u: goto label_2c7ba8;
        case 0x2c7bacu: goto label_2c7bac;
        case 0x2c7bb0u: goto label_2c7bb0;
        case 0x2c7bb4u: goto label_2c7bb4;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bbcu: goto label_2c7bbc;
        case 0x2c7bc0u: goto label_2c7bc0;
        case 0x2c7bc4u: goto label_2c7bc4;
        case 0x2c7bc8u: goto label_2c7bc8;
        case 0x2c7bccu: goto label_2c7bcc;
        case 0x2c7bd0u: goto label_2c7bd0;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7bd8u: goto label_2c7bd8;
        case 0x2c7bdcu: goto label_2c7bdc;
        case 0x2c7be0u: goto label_2c7be0;
        case 0x2c7be4u: goto label_2c7be4;
        case 0x2c7be8u: goto label_2c7be8;
        case 0x2c7becu: goto label_2c7bec;
        case 0x2c7bf0u: goto label_2c7bf0;
        case 0x2c7bf4u: goto label_2c7bf4;
        case 0x2c7bf8u: goto label_2c7bf8;
        case 0x2c7bfcu: goto label_2c7bfc;
        case 0x2c7c00u: goto label_2c7c00;
        case 0x2c7c04u: goto label_2c7c04;
        case 0x2c7c08u: goto label_2c7c08;
        case 0x2c7c0cu: goto label_2c7c0c;
        case 0x2c7c10u: goto label_2c7c10;
        case 0x2c7c14u: goto label_2c7c14;
        case 0x2c7c18u: goto label_2c7c18;
        case 0x2c7c1cu: goto label_2c7c1c;
        case 0x2c7c20u: goto label_2c7c20;
        case 0x2c7c24u: goto label_2c7c24;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c2cu: goto label_2c7c2c;
        case 0x2c7c30u: goto label_2c7c30;
        case 0x2c7c34u: goto label_2c7c34;
        case 0x2c7c38u: goto label_2c7c38;
        case 0x2c7c3cu: goto label_2c7c3c;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c44u: goto label_2c7c44;
        case 0x2c7c48u: goto label_2c7c48;
        case 0x2c7c4cu: goto label_2c7c4c;
        case 0x2c7c50u: goto label_2c7c50;
        case 0x2c7c54u: goto label_2c7c54;
        case 0x2c7c58u: goto label_2c7c58;
        case 0x2c7c5cu: goto label_2c7c5c;
        case 0x2c7c60u: goto label_2c7c60;
        case 0x2c7c64u: goto label_2c7c64;
        case 0x2c7c68u: goto label_2c7c68;
        case 0x2c7c6cu: goto label_2c7c6c;
        case 0x2c7c70u: goto label_2c7c70;
        case 0x2c7c74u: goto label_2c7c74;
        case 0x2c7c78u: goto label_2c7c78;
        case 0x2c7c7cu: goto label_2c7c7c;
        case 0x2c7c80u: goto label_2c7c80;
        case 0x2c7c84u: goto label_2c7c84;
        case 0x2c7c88u: goto label_2c7c88;
        case 0x2c7c8cu: goto label_2c7c8c;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7c94u: goto label_2c7c94;
        case 0x2c7c98u: goto label_2c7c98;
        case 0x2c7c9cu: goto label_2c7c9c;
        case 0x2c7ca0u: goto label_2c7ca0;
        case 0x2c7ca4u: goto label_2c7ca4;
        case 0x2c7ca8u: goto label_2c7ca8;
        case 0x2c7cacu: goto label_2c7cac;
        case 0x2c7cb0u: goto label_2c7cb0;
        case 0x2c7cb4u: goto label_2c7cb4;
        case 0x2c7cb8u: goto label_2c7cb8;
        case 0x2c7cbcu: goto label_2c7cbc;
        case 0x2c7cc0u: goto label_2c7cc0;
        case 0x2c7cc4u: goto label_2c7cc4;
        case 0x2c7cc8u: goto label_2c7cc8;
        case 0x2c7cccu: goto label_2c7ccc;
        case 0x2c7cd0u: goto label_2c7cd0;
        case 0x2c7cd4u: goto label_2c7cd4;
        case 0x2c7cd8u: goto label_2c7cd8;
        case 0x2c7cdcu: goto label_2c7cdc;
        case 0x2c7ce0u: goto label_2c7ce0;
        case 0x2c7ce4u: goto label_2c7ce4;
        case 0x2c7ce8u: goto label_2c7ce8;
        case 0x2c7cecu: goto label_2c7cec;
        case 0x2c7cf0u: goto label_2c7cf0;
        case 0x2c7cf4u: goto label_2c7cf4;
        case 0x2c7cf8u: goto label_2c7cf8;
        case 0x2c7cfcu: goto label_2c7cfc;
        case 0x2c7d00u: goto label_2c7d00;
        case 0x2c7d04u: goto label_2c7d04;
        case 0x2c7d08u: goto label_2c7d08;
        case 0x2c7d0cu: goto label_2c7d0c;
        case 0x2c7d10u: goto label_2c7d10;
        case 0x2c7d14u: goto label_2c7d14;
        case 0x2c7d18u: goto label_2c7d18;
        case 0x2c7d1cu: goto label_2c7d1c;
        case 0x2c7d20u: goto label_2c7d20;
        case 0x2c7d24u: goto label_2c7d24;
        case 0x2c7d28u: goto label_2c7d28;
        case 0x2c7d2cu: goto label_2c7d2c;
        case 0x2c7d30u: goto label_2c7d30;
        case 0x2c7d34u: goto label_2c7d34;
        case 0x2c7d38u: goto label_2c7d38;
        case 0x2c7d3cu: goto label_2c7d3c;
        case 0x2c7d40u: goto label_2c7d40;
        case 0x2c7d44u: goto label_2c7d44;
        case 0x2c7d48u: goto label_2c7d48;
        case 0x2c7d4cu: goto label_2c7d4c;
        case 0x2c7d50u: goto label_2c7d50;
        case 0x2c7d54u: goto label_2c7d54;
        case 0x2c7d58u: goto label_2c7d58;
        case 0x2c7d5cu: goto label_2c7d5c;
        case 0x2c7d60u: goto label_2c7d60;
        case 0x2c7d64u: goto label_2c7d64;
        case 0x2c7d68u: goto label_2c7d68;
        case 0x2c7d6cu: goto label_2c7d6c;
        case 0x2c7d70u: goto label_2c7d70;
        case 0x2c7d74u: goto label_2c7d74;
        case 0x2c7d78u: goto label_2c7d78;
        case 0x2c7d7cu: goto label_2c7d7c;
        case 0x2c7d80u: goto label_2c7d80;
        case 0x2c7d84u: goto label_2c7d84;
        case 0x2c7d88u: goto label_2c7d88;
        case 0x2c7d8cu: goto label_2c7d8c;
        case 0x2c7d90u: goto label_2c7d90;
        case 0x2c7d94u: goto label_2c7d94;
        case 0x2c7d98u: goto label_2c7d98;
        case 0x2c7d9cu: goto label_2c7d9c;
        case 0x2c7da0u: goto label_2c7da0;
        case 0x2c7da4u: goto label_2c7da4;
        case 0x2c7da8u: goto label_2c7da8;
        case 0x2c7dacu: goto label_2c7dac;
        case 0x2c7db0u: goto label_2c7db0;
        case 0x2c7db4u: goto label_2c7db4;
        case 0x2c7db8u: goto label_2c7db8;
        case 0x2c7dbcu: goto label_2c7dbc;
        case 0x2c7dc0u: goto label_2c7dc0;
        case 0x2c7dc4u: goto label_2c7dc4;
        case 0x2c7dc8u: goto label_2c7dc8;
        case 0x2c7dccu: goto label_2c7dcc;
        case 0x2c7dd0u: goto label_2c7dd0;
        case 0x2c7dd4u: goto label_2c7dd4;
        case 0x2c7dd8u: goto label_2c7dd8;
        case 0x2c7ddcu: goto label_2c7ddc;
        case 0x2c7de0u: goto label_2c7de0;
        case 0x2c7de4u: goto label_2c7de4;
        case 0x2c7de8u: goto label_2c7de8;
        case 0x2c7decu: goto label_2c7dec;
        case 0x2c7df0u: goto label_2c7df0;
        case 0x2c7df4u: goto label_2c7df4;
        case 0x2c7df8u: goto label_2c7df8;
        case 0x2c7dfcu: goto label_2c7dfc;
        case 0x2c7e00u: goto label_2c7e00;
        case 0x2c7e04u: goto label_2c7e04;
        case 0x2c7e08u: goto label_2c7e08;
        case 0x2c7e0cu: goto label_2c7e0c;
        case 0x2c7e10u: goto label_2c7e10;
        case 0x2c7e14u: goto label_2c7e14;
        case 0x2c7e18u: goto label_2c7e18;
        case 0x2c7e1cu: goto label_2c7e1c;
        case 0x2c7e20u: goto label_2c7e20;
        case 0x2c7e24u: goto label_2c7e24;
        case 0x2c7e28u: goto label_2c7e28;
        case 0x2c7e2cu: goto label_2c7e2c;
        case 0x2c7e30u: goto label_2c7e30;
        case 0x2c7e34u: goto label_2c7e34;
        case 0x2c7e38u: goto label_2c7e38;
        case 0x2c7e3cu: goto label_2c7e3c;
        case 0x2c7e40u: goto label_2c7e40;
        case 0x2c7e44u: goto label_2c7e44;
        case 0x2c7e48u: goto label_2c7e48;
        case 0x2c7e4cu: goto label_2c7e4c;
        case 0x2c7e50u: goto label_2c7e50;
        case 0x2c7e54u: goto label_2c7e54;
        case 0x2c7e58u: goto label_2c7e58;
        case 0x2c7e5cu: goto label_2c7e5c;
        case 0x2c7e60u: goto label_2c7e60;
        case 0x2c7e64u: goto label_2c7e64;
        case 0x2c7e68u: goto label_2c7e68;
        case 0x2c7e6cu: goto label_2c7e6c;
        case 0x2c7e70u: goto label_2c7e70;
        case 0x2c7e74u: goto label_2c7e74;
        case 0x2c7e78u: goto label_2c7e78;
        case 0x2c7e7cu: goto label_2c7e7c;
        case 0x2c7e80u: goto label_2c7e80;
        case 0x2c7e84u: goto label_2c7e84;
        case 0x2c7e88u: goto label_2c7e88;
        case 0x2c7e8cu: goto label_2c7e8c;
        case 0x2c7e90u: goto label_2c7e90;
        case 0x2c7e94u: goto label_2c7e94;
        case 0x2c7e98u: goto label_2c7e98;
        case 0x2c7e9cu: goto label_2c7e9c;
        case 0x2c7ea0u: goto label_2c7ea0;
        case 0x2c7ea4u: goto label_2c7ea4;
        case 0x2c7ea8u: goto label_2c7ea8;
        case 0x2c7eacu: goto label_2c7eac;
        case 0x2c7eb0u: goto label_2c7eb0;
        case 0x2c7eb4u: goto label_2c7eb4;
        case 0x2c7eb8u: goto label_2c7eb8;
        case 0x2c7ebcu: goto label_2c7ebc;
        case 0x2c7ec0u: goto label_2c7ec0;
        case 0x2c7ec4u: goto label_2c7ec4;
        case 0x2c7ec8u: goto label_2c7ec8;
        case 0x2c7eccu: goto label_2c7ecc;
        case 0x2c7ed0u: goto label_2c7ed0;
        case 0x2c7ed4u: goto label_2c7ed4;
        case 0x2c7ed8u: goto label_2c7ed8;
        case 0x2c7edcu: goto label_2c7edc;
        case 0x2c7ee0u: goto label_2c7ee0;
        case 0x2c7ee4u: goto label_2c7ee4;
        case 0x2c7ee8u: goto label_2c7ee8;
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7ef0u: goto label_2c7ef0;
        case 0x2c7ef4u: goto label_2c7ef4;
        case 0x2c7ef8u: goto label_2c7ef8;
        case 0x2c7efcu: goto label_2c7efc;
        case 0x2c7f00u: goto label_2c7f00;
        case 0x2c7f04u: goto label_2c7f04;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c7f0cu: goto label_2c7f0c;
        case 0x2c7f10u: goto label_2c7f10;
        case 0x2c7f14u: goto label_2c7f14;
        case 0x2c7f18u: goto label_2c7f18;
        case 0x2c7f1cu: goto label_2c7f1c;
        case 0x2c7f20u: goto label_2c7f20;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f28u: goto label_2c7f28;
        case 0x2c7f2cu: goto label_2c7f2c;
        case 0x2c7f30u: goto label_2c7f30;
        case 0x2c7f34u: goto label_2c7f34;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f3cu: goto label_2c7f3c;
        case 0x2c7f40u: goto label_2c7f40;
        case 0x2c7f44u: goto label_2c7f44;
        case 0x2c7f48u: goto label_2c7f48;
        case 0x2c7f4cu: goto label_2c7f4c;
        case 0x2c7f50u: goto label_2c7f50;
        case 0x2c7f54u: goto label_2c7f54;
        case 0x2c7f58u: goto label_2c7f58;
        case 0x2c7f5cu: goto label_2c7f5c;
        case 0x2c7f60u: goto label_2c7f60;
        case 0x2c7f64u: goto label_2c7f64;
        case 0x2c7f68u: goto label_2c7f68;
        case 0x2c7f6cu: goto label_2c7f6c;
        case 0x2c7f70u: goto label_2c7f70;
        case 0x2c7f74u: goto label_2c7f74;
        case 0x2c7f78u: goto label_2c7f78;
        case 0x2c7f7cu: goto label_2c7f7c;
        case 0x2c7f80u: goto label_2c7f80;
        case 0x2c7f84u: goto label_2c7f84;
        case 0x2c7f88u: goto label_2c7f88;
        case 0x2c7f8cu: goto label_2c7f8c;
        case 0x2c7f90u: goto label_2c7f90;
        case 0x2c7f94u: goto label_2c7f94;
        case 0x2c7f98u: goto label_2c7f98;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fa0u: goto label_2c7fa0;
        case 0x2c7fa4u: goto label_2c7fa4;
        case 0x2c7fa8u: goto label_2c7fa8;
        case 0x2c7facu: goto label_2c7fac;
        case 0x2c7fb0u: goto label_2c7fb0;
        case 0x2c7fb4u: goto label_2c7fb4;
        case 0x2c7fb8u: goto label_2c7fb8;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fc0u: goto label_2c7fc0;
        case 0x2c7fc4u: goto label_2c7fc4;
        case 0x2c7fc8u: goto label_2c7fc8;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd0u: goto label_2c7fd0;
        case 0x2c7fd4u: goto label_2c7fd4;
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c7fdcu: goto label_2c7fdc;
        case 0x2c7fe0u: goto label_2c7fe0;
        case 0x2c7fe4u: goto label_2c7fe4;
        case 0x2c7fe8u: goto label_2c7fe8;
        case 0x2c7fecu: goto label_2c7fec;
        case 0x2c7ff0u: goto label_2c7ff0;
        case 0x2c7ff4u: goto label_2c7ff4;
        case 0x2c7ff8u: goto label_2c7ff8;
        case 0x2c7ffcu: goto label_2c7ffc;
        case 0x2c8000u: goto label_2c8000;
        case 0x2c8004u: goto label_2c8004;
        case 0x2c8008u: goto label_2c8008;
        case 0x2c800cu: goto label_2c800c;
        case 0x2c8010u: goto label_2c8010;
        case 0x2c8014u: goto label_2c8014;
        case 0x2c8018u: goto label_2c8018;
        case 0x2c801cu: goto label_2c801c;
        case 0x2c8020u: goto label_2c8020;
        case 0x2c8024u: goto label_2c8024;
        case 0x2c8028u: goto label_2c8028;
        case 0x2c802cu: goto label_2c802c;
        case 0x2c8030u: goto label_2c8030;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c8038u: goto label_2c8038;
        case 0x2c803cu: goto label_2c803c;
        case 0x2c8040u: goto label_2c8040;
        case 0x2c8044u: goto label_2c8044;
        case 0x2c8048u: goto label_2c8048;
        case 0x2c804cu: goto label_2c804c;
        case 0x2c8050u: goto label_2c8050;
        case 0x2c8054u: goto label_2c8054;
        case 0x2c8058u: goto label_2c8058;
        case 0x2c805cu: goto label_2c805c;
        case 0x2c8060u: goto label_2c8060;
        case 0x2c8064u: goto label_2c8064;
        case 0x2c8068u: goto label_2c8068;
        case 0x2c806cu: goto label_2c806c;
        case 0x2c8070u: goto label_2c8070;
        case 0x2c8074u: goto label_2c8074;
        case 0x2c8078u: goto label_2c8078;
        case 0x2c807cu: goto label_2c807c;
        case 0x2c8080u: goto label_2c8080;
        case 0x2c8084u: goto label_2c8084;
        case 0x2c8088u: goto label_2c8088;
        case 0x2c808cu: goto label_2c808c;
        case 0x2c8090u: goto label_2c8090;
        case 0x2c8094u: goto label_2c8094;
        case 0x2c8098u: goto label_2c8098;
        case 0x2c809cu: goto label_2c809c;
        case 0x2c80a0u: goto label_2c80a0;
        case 0x2c80a4u: goto label_2c80a4;
        case 0x2c80a8u: goto label_2c80a8;
        case 0x2c80acu: goto label_2c80ac;
        case 0x2c80b0u: goto label_2c80b0;
        case 0x2c80b4u: goto label_2c80b4;
        case 0x2c80b8u: goto label_2c80b8;
        case 0x2c80bcu: goto label_2c80bc;
        case 0x2c80c0u: goto label_2c80c0;
        case 0x2c80c4u: goto label_2c80c4;
        case 0x2c80c8u: goto label_2c80c8;
        case 0x2c80ccu: goto label_2c80cc;
        case 0x2c80d0u: goto label_2c80d0;
        case 0x2c80d4u: goto label_2c80d4;
        case 0x2c80d8u: goto label_2c80d8;
        case 0x2c80dcu: goto label_2c80dc;
        case 0x2c80e0u: goto label_2c80e0;
        case 0x2c80e4u: goto label_2c80e4;
        case 0x2c80e8u: goto label_2c80e8;
        case 0x2c80ecu: goto label_2c80ec;
        case 0x2c80f0u: goto label_2c80f0;
        case 0x2c80f4u: goto label_2c80f4;
        case 0x2c80f8u: goto label_2c80f8;
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8100u: goto label_2c8100;
        case 0x2c8104u: goto label_2c8104;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c810cu: goto label_2c810c;
        case 0x2c8110u: goto label_2c8110;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c8118u: goto label_2c8118;
        case 0x2c811cu: goto label_2c811c;
        case 0x2c8120u: goto label_2c8120;
        case 0x2c8124u: goto label_2c8124;
        case 0x2c8128u: goto label_2c8128;
        case 0x2c812cu: goto label_2c812c;
        case 0x2c8130u: goto label_2c8130;
        case 0x2c8134u: goto label_2c8134;
        case 0x2c8138u: goto label_2c8138;
        case 0x2c813cu: goto label_2c813c;
        case 0x2c8140u: goto label_2c8140;
        case 0x2c8144u: goto label_2c8144;
        case 0x2c8148u: goto label_2c8148;
        case 0x2c814cu: goto label_2c814c;
        case 0x2c8150u: goto label_2c8150;
        case 0x2c8154u: goto label_2c8154;
        case 0x2c8158u: goto label_2c8158;
        case 0x2c815cu: goto label_2c815c;
        case 0x2c8160u: goto label_2c8160;
        case 0x2c8164u: goto label_2c8164;
        case 0x2c8168u: goto label_2c8168;
        case 0x2c816cu: goto label_2c816c;
        case 0x2c8170u: goto label_2c8170;
        case 0x2c8174u: goto label_2c8174;
        case 0x2c8178u: goto label_2c8178;
        case 0x2c817cu: goto label_2c817c;
        case 0x2c8180u: goto label_2c8180;
        case 0x2c8184u: goto label_2c8184;
        case 0x2c8188u: goto label_2c8188;
        case 0x2c818cu: goto label_2c818c;
        case 0x2c8190u: goto label_2c8190;
        case 0x2c8194u: goto label_2c8194;
        case 0x2c8198u: goto label_2c8198;
        case 0x2c819cu: goto label_2c819c;
        case 0x2c81a0u: goto label_2c81a0;
        case 0x2c81a4u: goto label_2c81a4;
        case 0x2c81a8u: goto label_2c81a8;
        case 0x2c81acu: goto label_2c81ac;
        case 0x2c81b0u: goto label_2c81b0;
        case 0x2c81b4u: goto label_2c81b4;
        case 0x2c81b8u: goto label_2c81b8;
        case 0x2c81bcu: goto label_2c81bc;
        case 0x2c81c0u: goto label_2c81c0;
        case 0x2c81c4u: goto label_2c81c4;
        case 0x2c81c8u: goto label_2c81c8;
        case 0x2c81ccu: goto label_2c81cc;
        case 0x2c81d0u: goto label_2c81d0;
        case 0x2c81d4u: goto label_2c81d4;
        case 0x2c81d8u: goto label_2c81d8;
        case 0x2c81dcu: goto label_2c81dc;
        case 0x2c81e0u: goto label_2c81e0;
        case 0x2c81e4u: goto label_2c81e4;
        case 0x2c81e8u: goto label_2c81e8;
        case 0x2c81ecu: goto label_2c81ec;
        case 0x2c81f0u: goto label_2c81f0;
        case 0x2c81f4u: goto label_2c81f4;
        case 0x2c81f8u: goto label_2c81f8;
        case 0x2c81fcu: goto label_2c81fc;
        case 0x2c8200u: goto label_2c8200;
        case 0x2c8204u: goto label_2c8204;
        case 0x2c8208u: goto label_2c8208;
        case 0x2c820cu: goto label_2c820c;
        case 0x2c8210u: goto label_2c8210;
        case 0x2c8214u: goto label_2c8214;
        case 0x2c8218u: goto label_2c8218;
        case 0x2c821cu: goto label_2c821c;
        case 0x2c8220u: goto label_2c8220;
        case 0x2c8224u: goto label_2c8224;
        case 0x2c8228u: goto label_2c8228;
        case 0x2c822cu: goto label_2c822c;
        case 0x2c8230u: goto label_2c8230;
        case 0x2c8234u: goto label_2c8234;
        case 0x2c8238u: goto label_2c8238;
        case 0x2c823cu: goto label_2c823c;
        case 0x2c8240u: goto label_2c8240;
        case 0x2c8244u: goto label_2c8244;
        case 0x2c8248u: goto label_2c8248;
        case 0x2c824cu: goto label_2c824c;
        case 0x2c8250u: goto label_2c8250;
        case 0x2c8254u: goto label_2c8254;
        case 0x2c8258u: goto label_2c8258;
        case 0x2c825cu: goto label_2c825c;
        case 0x2c8260u: goto label_2c8260;
        case 0x2c8264u: goto label_2c8264;
        case 0x2c8268u: goto label_2c8268;
        case 0x2c826cu: goto label_2c826c;
        case 0x2c8270u: goto label_2c8270;
        case 0x2c8274u: goto label_2c8274;
        case 0x2c8278u: goto label_2c8278;
        case 0x2c827cu: goto label_2c827c;
        case 0x2c8280u: goto label_2c8280;
        case 0x2c8284u: goto label_2c8284;
        case 0x2c8288u: goto label_2c8288;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c8290u: goto label_2c8290;
        case 0x2c8294u: goto label_2c8294;
        case 0x2c8298u: goto label_2c8298;
        case 0x2c829cu: goto label_2c829c;
        case 0x2c82a0u: goto label_2c82a0;
        case 0x2c82a4u: goto label_2c82a4;
        case 0x2c82a8u: goto label_2c82a8;
        case 0x2c82acu: goto label_2c82ac;
        case 0x2c82b0u: goto label_2c82b0;
        case 0x2c82b4u: goto label_2c82b4;
        case 0x2c82b8u: goto label_2c82b8;
        case 0x2c82bcu: goto label_2c82bc;
        case 0x2c82c0u: goto label_2c82c0;
        case 0x2c82c4u: goto label_2c82c4;
        case 0x2c82c8u: goto label_2c82c8;
        case 0x2c82ccu: goto label_2c82cc;
        case 0x2c82d0u: goto label_2c82d0;
        case 0x2c82d4u: goto label_2c82d4;
        case 0x2c82d8u: goto label_2c82d8;
        case 0x2c82dcu: goto label_2c82dc;
        case 0x2c82e0u: goto label_2c82e0;
        case 0x2c82e4u: goto label_2c82e4;
        case 0x2c82e8u: goto label_2c82e8;
        case 0x2c82ecu: goto label_2c82ec;
        case 0x2c82f0u: goto label_2c82f0;
        case 0x2c82f4u: goto label_2c82f4;
        case 0x2c82f8u: goto label_2c82f8;
        case 0x2c82fcu: goto label_2c82fc;
        case 0x2c8300u: goto label_2c8300;
        case 0x2c8304u: goto label_2c8304;
        case 0x2c8308u: goto label_2c8308;
        case 0x2c830cu: goto label_2c830c;
        case 0x2c8310u: goto label_2c8310;
        case 0x2c8314u: goto label_2c8314;
        case 0x2c8318u: goto label_2c8318;
        case 0x2c831cu: goto label_2c831c;
        case 0x2c8320u: goto label_2c8320;
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8328u: goto label_2c8328;
        case 0x2c832cu: goto label_2c832c;
        case 0x2c8330u: goto label_2c8330;
        case 0x2c8334u: goto label_2c8334;
        case 0x2c8338u: goto label_2c8338;
        case 0x2c833cu: goto label_2c833c;
        case 0x2c8340u: goto label_2c8340;
        case 0x2c8344u: goto label_2c8344;
        case 0x2c8348u: goto label_2c8348;
        case 0x2c834cu: goto label_2c834c;
        case 0x2c8350u: goto label_2c8350;
        case 0x2c8354u: goto label_2c8354;
        case 0x2c8358u: goto label_2c8358;
        case 0x2c835cu: goto label_2c835c;
        case 0x2c8360u: goto label_2c8360;
        case 0x2c8364u: goto label_2c8364;
        case 0x2c8368u: goto label_2c8368;
        case 0x2c836cu: goto label_2c836c;
        case 0x2c8370u: goto label_2c8370;
        case 0x2c8374u: goto label_2c8374;
        case 0x2c8378u: goto label_2c8378;
        case 0x2c837cu: goto label_2c837c;
        case 0x2c8380u: goto label_2c8380;
        case 0x2c8384u: goto label_2c8384;
        case 0x2c8388u: goto label_2c8388;
        case 0x2c838cu: goto label_2c838c;
        case 0x2c8390u: goto label_2c8390;
        case 0x2c8394u: goto label_2c8394;
        case 0x2c8398u: goto label_2c8398;
        case 0x2c839cu: goto label_2c839c;
        case 0x2c83a0u: goto label_2c83a0;
        case 0x2c83a4u: goto label_2c83a4;
        case 0x2c83a8u: goto label_2c83a8;
        case 0x2c83acu: goto label_2c83ac;
        case 0x2c83b0u: goto label_2c83b0;
        case 0x2c83b4u: goto label_2c83b4;
        case 0x2c83b8u: goto label_2c83b8;
        case 0x2c83bcu: goto label_2c83bc;
        case 0x2c83c0u: goto label_2c83c0;
        case 0x2c83c4u: goto label_2c83c4;
        case 0x2c83c8u: goto label_2c83c8;
        case 0x2c83ccu: goto label_2c83cc;
        case 0x2c83d0u: goto label_2c83d0;
        case 0x2c83d4u: goto label_2c83d4;
        case 0x2c83d8u: goto label_2c83d8;
        case 0x2c83dcu: goto label_2c83dc;
        case 0x2c83e0u: goto label_2c83e0;
        case 0x2c83e4u: goto label_2c83e4;
        case 0x2c83e8u: goto label_2c83e8;
        case 0x2c83ecu: goto label_2c83ec;
        case 0x2c83f0u: goto label_2c83f0;
        case 0x2c83f4u: goto label_2c83f4;
        case 0x2c83f8u: goto label_2c83f8;
        case 0x2c83fcu: goto label_2c83fc;
        case 0x2c8400u: goto label_2c8400;
        case 0x2c8404u: goto label_2c8404;
        case 0x2c8408u: goto label_2c8408;
        case 0x2c840cu: goto label_2c840c;
        case 0x2c8410u: goto label_2c8410;
        case 0x2c8414u: goto label_2c8414;
        case 0x2c8418u: goto label_2c8418;
        case 0x2c841cu: goto label_2c841c;
        case 0x2c8420u: goto label_2c8420;
        case 0x2c8424u: goto label_2c8424;
        case 0x2c8428u: goto label_2c8428;
        case 0x2c842cu: goto label_2c842c;
        case 0x2c8430u: goto label_2c8430;
        case 0x2c8434u: goto label_2c8434;
        case 0x2c8438u: goto label_2c8438;
        case 0x2c843cu: goto label_2c843c;
        case 0x2c8440u: goto label_2c8440;
        case 0x2c8444u: goto label_2c8444;
        case 0x2c8448u: goto label_2c8448;
        case 0x2c844cu: goto label_2c844c;
        case 0x2c8450u: goto label_2c8450;
        case 0x2c8454u: goto label_2c8454;
        case 0x2c8458u: goto label_2c8458;
        case 0x2c845cu: goto label_2c845c;
        case 0x2c8460u: goto label_2c8460;
        case 0x2c8464u: goto label_2c8464;
        case 0x2c8468u: goto label_2c8468;
        case 0x2c846cu: goto label_2c846c;
        case 0x2c8470u: goto label_2c8470;
        case 0x2c8474u: goto label_2c8474;
        case 0x2c8478u: goto label_2c8478;
        case 0x2c847cu: goto label_2c847c;
        case 0x2c8480u: goto label_2c8480;
        case 0x2c8484u: goto label_2c8484;
        case 0x2c8488u: goto label_2c8488;
        case 0x2c848cu: goto label_2c848c;
        case 0x2c8490u: goto label_2c8490;
        case 0x2c8494u: goto label_2c8494;
        case 0x2c8498u: goto label_2c8498;
        case 0x2c849cu: goto label_2c849c;
        case 0x2c84a0u: goto label_2c84a0;
        case 0x2c84a4u: goto label_2c84a4;
        case 0x2c84a8u: goto label_2c84a8;
        case 0x2c84acu: goto label_2c84ac;
        case 0x2c84b0u: goto label_2c84b0;
        case 0x2c84b4u: goto label_2c84b4;
        case 0x2c84b8u: goto label_2c84b8;
        case 0x2c84bcu: goto label_2c84bc;
        case 0x2c84c0u: goto label_2c84c0;
        case 0x2c84c4u: goto label_2c84c4;
        case 0x2c84c8u: goto label_2c84c8;
        case 0x2c84ccu: goto label_2c84cc;
        case 0x2c84d0u: goto label_2c84d0;
        case 0x2c84d4u: goto label_2c84d4;
        case 0x2c84d8u: goto label_2c84d8;
        case 0x2c84dcu: goto label_2c84dc;
        case 0x2c84e0u: goto label_2c84e0;
        case 0x2c84e4u: goto label_2c84e4;
        case 0x2c84e8u: goto label_2c84e8;
        case 0x2c84ecu: goto label_2c84ec;
        case 0x2c84f0u: goto label_2c84f0;
        case 0x2c84f4u: goto label_2c84f4;
        case 0x2c84f8u: goto label_2c84f8;
        case 0x2c84fcu: goto label_2c84fc;
        case 0x2c8500u: goto label_2c8500;
        case 0x2c8504u: goto label_2c8504;
        case 0x2c8508u: goto label_2c8508;
        case 0x2c850cu: goto label_2c850c;
        case 0x2c8510u: goto label_2c8510;
        case 0x2c8514u: goto label_2c8514;
        case 0x2c8518u: goto label_2c8518;
        case 0x2c851cu: goto label_2c851c;
        case 0x2c8520u: goto label_2c8520;
        case 0x2c8524u: goto label_2c8524;
        case 0x2c8528u: goto label_2c8528;
        case 0x2c852cu: goto label_2c852c;
        case 0x2c8530u: goto label_2c8530;
        case 0x2c8534u: goto label_2c8534;
        case 0x2c8538u: goto label_2c8538;
        case 0x2c853cu: goto label_2c853c;
        case 0x2c8540u: goto label_2c8540;
        case 0x2c8544u: goto label_2c8544;
        case 0x2c8548u: goto label_2c8548;
        case 0x2c854cu: goto label_2c854c;
        case 0x2c8550u: goto label_2c8550;
        case 0x2c8554u: goto label_2c8554;
        case 0x2c8558u: goto label_2c8558;
        case 0x2c855cu: goto label_2c855c;
        case 0x2c8560u: goto label_2c8560;
        case 0x2c8564u: goto label_2c8564;
        case 0x2c8568u: goto label_2c8568;
        case 0x2c856cu: goto label_2c856c;
        case 0x2c8570u: goto label_2c8570;
        case 0x2c8574u: goto label_2c8574;
        case 0x2c8578u: goto label_2c8578;
        case 0x2c857cu: goto label_2c857c;
        case 0x2c8580u: goto label_2c8580;
        case 0x2c8584u: goto label_2c8584;
        case 0x2c8588u: goto label_2c8588;
        case 0x2c858cu: goto label_2c858c;
        case 0x2c8590u: goto label_2c8590;
        case 0x2c8594u: goto label_2c8594;
        case 0x2c8598u: goto label_2c8598;
        case 0x2c859cu: goto label_2c859c;
        case 0x2c85a0u: goto label_2c85a0;
        case 0x2c85a4u: goto label_2c85a4;
        case 0x2c85a8u: goto label_2c85a8;
        case 0x2c85acu: goto label_2c85ac;
        case 0x2c85b0u: goto label_2c85b0;
        case 0x2c85b4u: goto label_2c85b4;
        case 0x2c85b8u: goto label_2c85b8;
        case 0x2c85bcu: goto label_2c85bc;
        case 0x2c85c0u: goto label_2c85c0;
        case 0x2c85c4u: goto label_2c85c4;
        case 0x2c85c8u: goto label_2c85c8;
        case 0x2c85ccu: goto label_2c85cc;
        case 0x2c85d0u: goto label_2c85d0;
        case 0x2c85d4u: goto label_2c85d4;
        case 0x2c85d8u: goto label_2c85d8;
        case 0x2c85dcu: goto label_2c85dc;
        case 0x2c85e0u: goto label_2c85e0;
        case 0x2c85e4u: goto label_2c85e4;
        case 0x2c85e8u: goto label_2c85e8;
        case 0x2c85ecu: goto label_2c85ec;
        case 0x2c85f0u: goto label_2c85f0;
        case 0x2c85f4u: goto label_2c85f4;
        case 0x2c85f8u: goto label_2c85f8;
        case 0x2c85fcu: goto label_2c85fc;
        case 0x2c8600u: goto label_2c8600;
        case 0x2c8604u: goto label_2c8604;
        case 0x2c8608u: goto label_2c8608;
        case 0x2c860cu: goto label_2c860c;
        default: break;
    }

    ctx->pc = 0x2c77b8u;

label_2c77b8:
    // 0x2c77b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c77b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c77bc:
    // 0x2c77bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c77bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c77c0:
    // 0x2c77c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c77c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c77c4:
    // 0x2c77c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c77c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c77c8:
    // 0x2c77c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c77c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c77cc:
    // 0x2c77cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c77d0:
    // 0x2c77d0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2c77d4:
    if (ctx->pc == 0x2C77D4u) {
        ctx->pc = 0x2C77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77D0u;
        // 0x2c77d4: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77D8u;
        goto label_2c77d8;
    }
    ctx->pc = 0x2C77D0u;
    {
        const bool branch_taken_0x2c77d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77D0u;
        // 0x2c77d4: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77d0) {
            ctx->pc = 0x2C77ECu;
            goto label_2c77ec;
        }
    }
    ctx->pc = 0x2C77D8u;
label_2c77d8:
    // 0x2c77d8: 0xc0b60b8  jal         func_2D82E0
label_2c77dc:
    if (ctx->pc == 0x2C77DCu) {
        ctx->pc = 0x2C77E0u;
        goto label_2c77e0;
    }
    ctx->pc = 0x2C77D8u;
    SET_GPR_U32(ctx, 31, 0x2C77E0u);
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2C77D8u, 0x2C77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77E0u;
label_2c77e0:
    // 0x2c77e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c77e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c77e4:
    // 0x2c77e4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_2c77e8:
    if (ctx->pc == 0x2C77E8u) {
        ctx->pc = 0x2C77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77E4u;
        // 0x2c77e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77ECu;
        goto label_2c77ec;
    }
    ctx->pc = 0x2C77E4u;
    {
        const bool branch_taken_0x2c77e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c77e4) {
            ctx->pc = 0x2C77E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C77E4u;
            // 0x2c77e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7814u;
            goto label_2c7814;
        }
    }
    ctx->pc = 0x2C77ECu;
label_2c77ec:
    // 0x2c77ec: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2c77ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_2c77f0:
    // 0x2c77f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c77f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c77f4:
    // 0x2c77f4: 0x24c68328  addiu       $a2, $a2, -0x7CD8
    ctx->pc = 0x2c77f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935336));
label_2c77f8:
    // 0x2c77f8: 0xc0b1ca2  jal         func_2C7288
label_2c77fc:
    if (ctx->pc == 0x2C77FCu) {
        ctx->pc = 0x2C77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77F8u;
        // 0x2c77fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7800u;
        goto label_2c7800;
    }
    ctx->pc = 0x2C77F8u;
    SET_GPR_U32(ctx, 31, 0x2C7800u);
    ctx->pc = 0x2C77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77F8u;
    // 0x2c77fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7288u, 0x2C77F8u, 0x2C7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7800u;
label_2c7800:
    // 0x2c7800: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7804:
    // 0x2c7804: 0x24637ef8  addiu       $v1, $v1, 0x7EF8
    ctx->pc = 0x2c7804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32504));
label_2c7808:
    // 0x2c7808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c780c:
    // 0x2c780c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2c780cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_2c7810:
    // 0x2c7810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7814:
    // 0x2c7814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c7814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7818:
    // 0x2c7818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c781c:
    // 0x2c781c: 0x3e00008  jr          $ra
label_2c7820:
    if (ctx->pc == 0x2C7820u) {
        ctx->pc = 0x2C7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C781Cu;
        // 0x2c7820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7824u;
        goto label_2c7824;
    }
    ctx->pc = 0x2C781Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C781Cu;
        // 0x2c7820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C781Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7824u;
label_2c7824:
    // 0x2c7824: 0x0  nop
    ctx->pc = 0x2c7824u;
    // NOP
label_2c7828:
    // 0x2c7828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c782c:
    // 0x2c782c: 0x2402020d  addiu       $v0, $zero, 0x20D
    ctx->pc = 0x2c782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
label_2c7830:
    // 0x2c7830: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7834:
    // 0x2c7834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7838:
    // 0x2c7838: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c7838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c783c:
    // 0x2c783c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c783cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c7840:
    // 0x2c7840: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c7840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7844:
    // 0x2c7844: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7848:
    // 0x2c7848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c7848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c784c:
    // 0x2c784c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c7850:
    // 0x2c7850: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c7850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c7854:
    // 0x2c7854: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x2c7854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2c7858:
    // 0x2c7858: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x2c7858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c785c:
    // 0x2c785c: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x2c785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_2c7860:
    // 0x2c7860: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2c7860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c7864:
    // 0x2c7864: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_2c7868:
    if (ctx->pc == 0x2C7868u) {
        ctx->pc = 0x2C7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7864u;
        // 0x2c7868: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C786Cu;
        goto label_2c786c;
    }
    ctx->pc = 0x2C7864u;
    {
        const bool branch_taken_0x2c7864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7864u;
        // 0x2c7868: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7864) {
            ctx->pc = 0x2C7900u;
            goto label_2c7900;
        }
    }
    ctx->pc = 0x2C786Cu;
label_2c786c:
    // 0x2c786c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2c786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c7870:
    // 0x2c7870: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2c7870u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2c7874:
    // 0x2c7874: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c7874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7878:
    // 0x2c7878: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2c7878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c787c:
    // 0x2c787c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c787cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7880:
    // 0x2c7880: 0xc0b60a2  jal         func_2D8288
label_2c7884:
    if (ctx->pc == 0x2C7884u) {
        ctx->pc = 0x2C7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7880u;
        // 0x2c7884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7888u;
        goto label_2c7888;
    }
    ctx->pc = 0x2C7880u;
    SET_GPR_U32(ctx, 31, 0x2C7888u);
    ctx->pc = 0x2C7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7880u;
    // 0x2c7884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8288u, 0x2C7880u, 0x2C7888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7888u;
label_2c7888:
    // 0x2c7888: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c788c:
    // 0x2c788c: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2c788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2c7890:
    // 0x2c7890: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c7890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c7894:
    // 0x2c7894: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2c7894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2c7898:
    // 0x2c7898: 0x245182b  sltu        $v1, $s2, $a1
    ctx->pc = 0x2c7898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c789c:
    // 0x2c789c: 0x2615fffd  addiu       $s5, $s0, -0x3
    ctx->pc = 0x2c789cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_2c78a0:
    // 0x2c78a0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c78a4:
    // 0x2c78a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2c78a8:
    if (ctx->pc == 0x2C78A8u) {
        ctx->pc = 0x2C78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78A4u;
        // 0x2c78a8: 0xa0440001  sb          $a0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78ACu;
        goto label_2c78ac;
    }
    ctx->pc = 0x2C78A4u;
    {
        const bool branch_taken_0x2c78a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78A4u;
        // 0x2c78a8: 0xa0440001  sb          $a0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78a4) {
            ctx->pc = 0x2C78F0u;
            goto label_2c78f0;
        }
    }
    ctx->pc = 0x2C78ACu;
label_2c78ac:
    // 0x2c78ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c78acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c78b0:
    // 0x2c78b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c78b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c78b4:
    // 0x2c78b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c78b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c78b8:
    // 0x2c78b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c78b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c78bc:
    // 0x2c78bc: 0xc0b1c74  jal         func_2C71D0
label_2c78c0:
    if (ctx->pc == 0x2C78C0u) {
        ctx->pc = 0x2C78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78BCu;
        // 0x2c78c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78C4u;
        goto label_2c78c4;
    }
    ctx->pc = 0x2C78BCu;
    SET_GPR_U32(ctx, 31, 0x2C78C4u);
    ctx->pc = 0x2C78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C78BCu;
    // 0x2c78c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C71D0u, 0x2C78BCu, 0x2C78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78C4u;
label_2c78c4:
    // 0x2c78c4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2c78c8:
    if (ctx->pc == 0x2C78C8u) {
        ctx->pc = 0x2C78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78C4u;
        // 0x2c78c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78CCu;
        goto label_2c78cc;
    }
    ctx->pc = 0x2C78C4u;
    {
        const bool branch_taken_0x2c78c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c78c4) {
            ctx->pc = 0x2C78C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C78C4u;
            // 0x2c78c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7904u;
            goto label_2c7904;
        }
    }
    ctx->pc = 0x2C78CCu;
label_2c78cc:
    // 0x2c78cc: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x2c78ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_2c78d0:
    // 0x2c78d0: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
label_2c78d4:
    if (ctx->pc == 0x2C78D4u) {
        ctx->pc = 0x2C78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78D0u;
        // 0x2c78d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78D8u;
        goto label_2c78d8;
    }
    ctx->pc = 0x2C78D0u;
    {
        const bool branch_taken_0x2c78d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c78d0) {
            ctx->pc = 0x2C78D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C78D0u;
            // 0x2c78d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C78B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c78b4;
        }
    }
    ctx->pc = 0x2C78D8u;
label_2c78d8:
    // 0x2c78d8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c78dc:
    // 0x2c78dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2c78e0:
    // 0x2c78e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c78e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c78e4:
    // 0x2c78e4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x2c78e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c78e8:
    // 0x2c78e8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_2c78ec:
    if (ctx->pc == 0x2C78ECu) {
        ctx->pc = 0x2C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78E8u;
        // 0x2c78ec: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78F0u;
        goto label_2c78f0;
    }
    ctx->pc = 0x2C78E8u;
    {
        const bool branch_taken_0x2c78e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78E8u;
        // 0x2c78ec: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78e8) {
            ctx->pc = 0x2C78B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c78b0;
        }
    }
    ctx->pc = 0x2C78F0u;
label_2c78f0:
    // 0x2c78f0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2c78f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c78f4:
    // 0x2c78f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c78f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c78f8:
    // 0x2c78f8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2c78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2c78fc:
    // 0x2c78fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c78fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2c7900:
    // 0x2c7900: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7904:
    // 0x2c7904: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7908:
    // 0x2c7908: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c7908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c790c:
    // 0x2c790c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c790cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c7910:
    // 0x2c7910: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c7910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7914:
    // 0x2c7914: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c7914u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c7918:
    // 0x2c7918: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c7918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c791c:
    // 0x2c791c: 0x3e00008  jr          $ra
label_2c7920:
    if (ctx->pc == 0x2C7920u) {
        ctx->pc = 0x2C7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C791Cu;
        // 0x2c7920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7924u;
        goto label_2c7924;
    }
    ctx->pc = 0x2C791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C791Cu;
        // 0x2c7920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7924u;
label_2c7924:
    // 0x2c7924: 0x0  nop
    ctx->pc = 0x2c7924u;
    // NOP
label_2c7928:
    // 0x2c7928: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2c7928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c792c:
    // 0x2c792c: 0x8d280030  lw          $t0, 0x30($t1)
    ctx->pc = 0x2c792cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_2c7930:
    // 0x2c7930: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2c7930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2c7934:
    // 0x2c7934: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2c7938:
    if (ctx->pc == 0x2C7938u) {
        ctx->pc = 0x2C793Cu;
        goto label_2c793c;
    }
    ctx->pc = 0x2C7934u;
    {
        const bool branch_taken_0x2c7934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7934) {
            ctx->pc = 0x2C7998u;
            goto label_2c7998;
        }
    }
    ctx->pc = 0x2C793Cu;
label_2c793c:
    // 0x2c793c: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x2c793cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_2c7940:
    // 0x2c7940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7944:
    // 0x2c7944: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2c7948:
    if (ctx->pc == 0x2C7948u) {
        ctx->pc = 0x2C7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7944u;
        // 0x2c7948: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C794Cu;
        goto label_2c794c;
    }
    ctx->pc = 0x2C7944u;
    {
        const bool branch_taken_0x2c7944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7944u;
        // 0x2c7948: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7944) {
            ctx->pc = 0x2C7958u;
            goto label_2c7958;
        }
    }
    ctx->pc = 0x2C794Cu;
label_2c794c:
    // 0x2c794c: 0x3e00008  jr          $ra
label_2c7950:
    if (ctx->pc == 0x2C7950u) {
        ctx->pc = 0x2C7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C794Cu;
        // 0x2c7950: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7954u;
        goto label_2c7954;
    }
    ctx->pc = 0x2C794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C794Cu;
        // 0x2c7950: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7954u;
label_2c7954:
    // 0x2c7954: 0x0  nop
    ctx->pc = 0x2c7954u;
    // NOP
label_2c7958:
    // 0x2c7958: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2c7958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2c795c:
    // 0x2c795c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2c7960:
    if (ctx->pc == 0x2C7960u) {
        ctx->pc = 0x2C7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C795Cu;
        // 0x2c7960: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7964u;
        goto label_2c7964;
    }
    ctx->pc = 0x2C795Cu;
    {
        const bool branch_taken_0x2c795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c795c) {
            ctx->pc = 0x2C7960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C795Cu;
            // 0x2c7960: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C797Cu;
            goto label_2c797c;
        }
    }
    ctx->pc = 0x2C7964u;
label_2c7964:
    // 0x2c7964: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2c7964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2c7968:
    // 0x2c7968: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2c7968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2c796c:
    // 0x2c796c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c796cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7970:
    // 0x2c7970: 0x0  nop
    ctx->pc = 0x2c7970u;
    // NOP
label_2c7974:
    // 0x2c7974: 0x1064fff8  beq         $v1, $a0, . + 4 + (-0x8 << 2)
label_2c7978:
    if (ctx->pc == 0x2C7978u) {
        ctx->pc = 0x2C7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7974u;
        // 0x2c7978: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C797Cu;
        goto label_2c797c;
    }
    ctx->pc = 0x2C7974u;
    {
        const bool branch_taken_0x2c7974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7974u;
        // 0x2c7978: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7974) {
            ctx->pc = 0x2C7958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7958;
        }
    }
    ctx->pc = 0x2C797Cu;
label_2c797c:
    // 0x2c797c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2c797cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2c7980:
    // 0x2c7980: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c7984:
    if (ctx->pc == 0x2C7984u) {
        ctx->pc = 0x2C7988u;
        goto label_2c7988;
    }
    ctx->pc = 0x2C7980u;
    {
        const bool branch_taken_0x2c7980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7980) {
            ctx->pc = 0x2C7998u;
            goto label_2c7998;
        }
    }
    ctx->pc = 0x2C7988u;
label_2c7988:
    // 0x2c7988: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2c7988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2c798c:
    // 0x2c798c: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x2c798cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_2c7990:
    // 0x2c7990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2c7994:
    if (ctx->pc == 0x2C7994u) {
        ctx->pc = 0x2C7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7990u;
        // 0x2c7994: 0xc72023  subu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7998u;
        goto label_2c7998;
    }
    ctx->pc = 0x2C7990u;
    {
        const bool branch_taken_0x2c7990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7990u;
        // 0x2c7994: 0xc72023  subu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7990) {
            ctx->pc = 0x2C79A0u;
            goto label_2c79a0;
        }
    }
    ctx->pc = 0x2C7998u;
label_2c7998:
    // 0x2c7998: 0x3e00008  jr          $ra
label_2c799c:
    if (ctx->pc == 0x2C799Cu) {
        ctx->pc = 0x2C799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7998u;
        // 0x2c799c: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79A0u;
        goto label_2c79a0;
    }
    ctx->pc = 0x2C7998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7998u;
        // 0x2c799c: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C79A0u;
label_2c79a0:
    // 0x2c79a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c79a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c79a4:
    // 0x2c79a4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2c79a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_2c79a8:
    // 0x2c79a8: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_2c79ac:
    // 0x2c79ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c79acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c79b0:
    // 0x2c79b0: 0x3e00008  jr          $ra
label_2c79b4:
    if (ctx->pc == 0x2C79B4u) {
        ctx->pc = 0x2C79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79B0u;
        // 0x2c79b4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79B8u;
        goto label_2c79b8;
    }
    ctx->pc = 0x2C79B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79B0u;
        // 0x2c79b4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C79B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C79B8u;
label_2c79b8:
    // 0x2c79b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c79bc:
    // 0x2c79bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c79bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c79c0:
    // 0x2c79c0: 0x24637f10  addiu       $v1, $v1, 0x7F10
    ctx->pc = 0x2c79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32528));
label_2c79c4:
    // 0x2c79c4: 0x3e00008  jr          $ra
label_2c79c8:
    if (ctx->pc == 0x2C79C8u) {
        ctx->pc = 0x2C79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79C4u;
        // 0x2c79c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79CCu;
        goto label_2c79cc;
    }
    ctx->pc = 0x2C79C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79C4u;
        // 0x2c79c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C79C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C79CCu;
label_2c79cc:
    // 0x2c79cc: 0x0  nop
    ctx->pc = 0x2c79ccu;
    // NOP
label_2c79d0:
    // 0x2c79d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c79d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c79d4:
    // 0x2c79d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c79d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c79d8:
    // 0x2c79d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c79d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c79dc:
    // 0x2c79dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c79dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c79e0:
    // 0x2c79e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c79e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c79e4:
    // 0x2c79e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c79e8:
    // 0x2c79e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c79ec:
    // 0x2c79ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c79f0:
    // 0x2c79f0: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x2c79f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2c79f4:
    // 0x2c79f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c79f8:
    if (ctx->pc == 0x2C79F8u) {
        ctx->pc = 0x2C79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79F4u;
        // 0x2c79f8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79FCu;
        goto label_2c79fc;
    }
    ctx->pc = 0x2C79F4u;
    {
        const bool branch_taken_0x2c79f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79F4u;
        // 0x2c79f8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79f4) {
            ctx->pc = 0x2C7A1Cu;
            goto label_2c7a1c;
        }
    }
    ctx->pc = 0x2C79FCu;
label_2c79fc:
    // 0x2c79fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c7a00:
    // 0x2c7a00: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x2c7a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_2c7a04:
    // 0x2c7a04: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2c7a08:
    if (ctx->pc == 0x2C7A08u) {
        ctx->pc = 0x2C7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A04u;
        // 0x2c7a08: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A0Cu;
        goto label_2c7a0c;
    }
    ctx->pc = 0x2C7A04u;
    {
        const bool branch_taken_0x2c7a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A04u;
        // 0x2c7a08: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a04) {
            ctx->pc = 0x2C7A6Cu;
            goto label_2c7a6c;
        }
    }
    ctx->pc = 0x2C7A0Cu;
label_2c7a0c:
    // 0x2c7a0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c7a10:
    // 0x2c7a10: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2c7a14:
    // 0x2c7a14: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_2c7a18:
    if (ctx->pc == 0x2C7A18u) {
        ctx->pc = 0x2C7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A14u;
        // 0x2c7a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A1Cu;
        goto label_2c7a1c;
    }
    ctx->pc = 0x2C7A14u;
    {
        const bool branch_taken_0x2c7a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c7a14) {
            ctx->pc = 0x2C7A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7A14u;
            // 0x2c7a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A28u;
            goto label_2c7a28;
        }
    }
    ctx->pc = 0x2C7A1Cu;
label_2c7a1c:
    // 0x2c7a1c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c7a20:
    if (ctx->pc == 0x2C7A20u) {
        ctx->pc = 0x2C7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A1Cu;
        // 0x2c7a20: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A24u;
        goto label_2c7a24;
    }
    ctx->pc = 0x2C7A1Cu;
    {
        const bool branch_taken_0x2c7a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A1Cu;
        // 0x2c7a20: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a1c) {
            ctx->pc = 0x2C7A6Cu;
            goto label_2c7a6c;
        }
    }
    ctx->pc = 0x2C7A24u;
label_2c7a24:
    // 0x2c7a24: 0x0  nop
    ctx->pc = 0x2c7a24u;
    // NOP
label_2c7a28:
    // 0x2c7a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a2c:
    // 0x2c7a2c: 0xc0b3dfa  jal         func_2CF7E8
label_2c7a30:
    if (ctx->pc == 0x2C7A30u) {
        ctx->pc = 0x2C7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A2Cu;
        // 0x2c7a30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A34u;
        goto label_2c7a34;
    }
    ctx->pc = 0x2C7A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A34u);
    ctx->pc = 0x2C7A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A2Cu;
    // 0x2c7a30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7A2Cu, 0x2C7A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A34u;
label_2c7a34:
    // 0x2c7a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a38:
    // 0x2c7a38: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2c7a3c:
    if (ctx->pc == 0x2C7A3Cu) {
        ctx->pc = 0x2C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A38u;
        // 0x2c7a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A40u;
        goto label_2c7a40;
    }
    ctx->pc = 0x2C7A38u;
    {
        const bool branch_taken_0x2c7a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A38u;
        // 0x2c7a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a38) {
            ctx->pc = 0x2C7A6Cu;
            goto label_2c7a6c;
        }
    }
    ctx->pc = 0x2C7A40u;
label_2c7a40:
    // 0x2c7a40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7a44:
    // 0x2c7a44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7a48:
    // 0x2c7a48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c7a4c:
    // 0x2c7a4c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2c7a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7a50:
    // 0x2c7a50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c7a54:
    // 0x2c7a54: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2c7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2c7a58:
    // 0x2c7a58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c7a5c:
    // 0x2c7a5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7a60:
    // 0x2c7a60: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2c7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2c7a64:
    // 0x2c7a64: 0xc0b3d08  jal         func_2CF420
label_2c7a68:
    if (ctx->pc == 0x2C7A68u) {
        ctx->pc = 0x2C7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A64u;
        // 0x2c7a68: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A6Cu;
        goto label_2c7a6c;
    }
    ctx->pc = 0x2C7A64u;
    SET_GPR_U32(ctx, 31, 0x2C7A6Cu);
    ctx->pc = 0x2C7A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A64u;
    // 0x2c7a68: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C7A64u, 0x2C7A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A6Cu;
label_2c7a6c:
    // 0x2c7a6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7a70:
    // 0x2c7a70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7a74:
    // 0x2c7a74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7a78:
    // 0x2c7a78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c7a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c7a7c:
    // 0x2c7a7c: 0x3e00008  jr          $ra
label_2c7a80:
    if (ctx->pc == 0x2C7A80u) {
        ctx->pc = 0x2C7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A7Cu;
        // 0x2c7a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A84u;
        goto label_2c7a84;
    }
    ctx->pc = 0x2C7A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A7Cu;
        // 0x2c7a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7A84u;
label_2c7a84:
    // 0x2c7a84: 0x0  nop
    ctx->pc = 0x2c7a84u;
    // NOP
label_2c7a88:
    // 0x2c7a88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7a8c:
    // 0x2c7a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a90:
    // 0x2c7a90: 0x24637f30  addiu       $v1, $v1, 0x7F30
    ctx->pc = 0x2c7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
label_2c7a94:
    // 0x2c7a94: 0x3e00008  jr          $ra
label_2c7a98:
    if (ctx->pc == 0x2C7A98u) {
        ctx->pc = 0x2C7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A94u;
        // 0x2c7a98: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A9Cu;
        goto label_2c7a9c;
    }
    ctx->pc = 0x2C7A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A94u;
        // 0x2c7a98: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7A9Cu;
label_2c7a9c:
    // 0x2c7a9c: 0x0  nop
    ctx->pc = 0x2c7a9cu;
    // NOP
label_2c7aa0:
    // 0x2c7aa0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7aa4:
    // 0x2c7aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7aa8:
    // 0x2c7aa8: 0x24637f40  addiu       $v1, $v1, 0x7F40
    ctx->pc = 0x2c7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32576));
label_2c7aac:
    // 0x2c7aac: 0x3e00008  jr          $ra
label_2c7ab0:
    if (ctx->pc == 0x2C7AB0u) {
        ctx->pc = 0x2C7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AACu;
        // 0x2c7ab0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AB4u;
        goto label_2c7ab4;
    }
    ctx->pc = 0x2C7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AACu;
        // 0x2c7ab0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7AB4u;
label_2c7ab4:
    // 0x2c7ab4: 0x0  nop
    ctx->pc = 0x2c7ab4u;
    // NOP
label_2c7ab8:
    // 0x2c7ab8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7abc:
    // 0x2c7abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ac0:
    // 0x2c7ac0: 0x24637f50  addiu       $v1, $v1, 0x7F50
    ctx->pc = 0x2c7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32592));
label_2c7ac4:
    // 0x2c7ac4: 0x3e00008  jr          $ra
label_2c7ac8:
    if (ctx->pc == 0x2C7AC8u) {
        ctx->pc = 0x2C7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AC4u;
        // 0x2c7ac8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7ACCu;
        goto label_2c7acc;
    }
    ctx->pc = 0x2C7AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AC4u;
        // 0x2c7ac8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7ACCu;
label_2c7acc:
    // 0x2c7acc: 0x0  nop
    ctx->pc = 0x2c7accu;
    // NOP
label_2c7ad0:
    // 0x2c7ad0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7ad4:
    // 0x2c7ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ad8:
    // 0x2c7ad8: 0x24637f60  addiu       $v1, $v1, 0x7F60
    ctx->pc = 0x2c7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32608));
label_2c7adc:
    // 0x2c7adc: 0x3e00008  jr          $ra
label_2c7ae0:
    if (ctx->pc == 0x2C7AE0u) {
        ctx->pc = 0x2C7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7ADCu;
        // 0x2c7ae0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AE4u;
        goto label_2c7ae4;
    }
    ctx->pc = 0x2C7ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7ADCu;
        // 0x2c7ae0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7AE4u;
label_2c7ae4:
    // 0x2c7ae4: 0x0  nop
    ctx->pc = 0x2c7ae4u;
    // NOP
label_2c7ae8:
    // 0x2c7ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7aec:
    // 0x2c7aec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c7aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c7af0:
    // 0x2c7af0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7af4:
    // 0x2c7af4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7af8:
    // 0x2c7af8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7afc:
    // 0x2c7afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b00:
    // 0x2c7b00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b04:
    // 0x2c7b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7b08:
    // 0x2c7b08: 0xc0b3dfa  jal         func_2CF7E8
label_2c7b0c:
    if (ctx->pc == 0x2C7B0Cu) {
        ctx->pc = 0x2C7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B08u;
        // 0x2c7b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B10u;
        goto label_2c7b10;
    }
    ctx->pc = 0x2C7B08u;
    SET_GPR_U32(ctx, 31, 0x2C7B10u);
    ctx->pc = 0x2C7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B08u;
    // 0x2c7b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7B08u, 0x2C7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B10u;
label_2c7b10:
    // 0x2c7b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b14:
    // 0x2c7b14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c7b18:
    if (ctx->pc == 0x2C7B18u) {
        ctx->pc = 0x2C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B14u;
        // 0x2c7b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B1Cu;
        goto label_2c7b1c;
    }
    ctx->pc = 0x2C7B14u;
    {
        const bool branch_taken_0x2c7b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B14u;
        // 0x2c7b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b14) {
            ctx->pc = 0x2C7B30u;
            goto label_2c7b30;
        }
    }
    ctx->pc = 0x2C7B1Cu;
label_2c7b1c:
    // 0x2c7b1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7b20:
    // 0x2c7b20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2c7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c7b24:
    // 0x2c7b24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c7b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c7b28:
    // 0x2c7b28: 0xc0b3d08  jal         func_2CF420
label_2c7b2c:
    if (ctx->pc == 0x2C7B2Cu) {
        ctx->pc = 0x2C7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B28u;
        // 0x2c7b2c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B30u;
        goto label_2c7b30;
    }
    ctx->pc = 0x2C7B28u;
    SET_GPR_U32(ctx, 31, 0x2C7B30u);
    ctx->pc = 0x2C7B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B28u;
    // 0x2c7b2c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C7B28u, 0x2C7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B30u;
label_2c7b30:
    // 0x2c7b30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7b34:
    // 0x2c7b34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7b38:
    // 0x2c7b38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7b3c:
    // 0x2c7b3c: 0x3e00008  jr          $ra
label_2c7b40:
    if (ctx->pc == 0x2C7B40u) {
        ctx->pc = 0x2C7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B3Cu;
        // 0x2c7b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B44u;
        goto label_2c7b44;
    }
    ctx->pc = 0x2C7B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B3Cu;
        // 0x2c7b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7B44u;
label_2c7b44:
    // 0x2c7b44: 0x0  nop
    ctx->pc = 0x2c7b44u;
    // NOP
label_2c7b48:
    // 0x2c7b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7b4c:
    // 0x2c7b4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7b50:
    // 0x2c7b50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b54:
    // 0x2c7b54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7b58:
    // 0x2c7b58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b5c:
    // 0x2c7b5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c7b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b60:
    // 0x2c7b60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b64:
    // 0x2c7b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7b68:
    // 0x2c7b68: 0xc0b3d2e  jal         func_2CF4B8
label_2c7b6c:
    if (ctx->pc == 0x2C7B6Cu) {
        ctx->pc = 0x2C7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B68u;
        // 0x2c7b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B70u;
        goto label_2c7b70;
    }
    ctx->pc = 0x2C7B68u;
    SET_GPR_U32(ctx, 31, 0x2C7B70u);
    ctx->pc = 0x2C7B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B68u;
    // 0x2c7b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C7B68u, 0x2C7B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B70u;
label_2c7b70:
    // 0x2c7b70: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2c7b70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_2c7b74:
    // 0x2c7b74: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x2c7b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2c7b78:
    // 0x2c7b78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c7b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b7c:
    // 0x2c7b7c: 0x250881b8  addiu       $t0, $t0, -0x7E48
    ctx->pc = 0x2c7b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934968));
label_2c7b80:
    // 0x2c7b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c7b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b84:
    // 0x2c7b84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b88:
    // 0x2c7b88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c7b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b8c:
    // 0x2c7b8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c7b90:
    if (ctx->pc == 0x2C7B90u) {
        ctx->pc = 0x2C7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B8Cu;
        // 0x2c7b90: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B94u;
        goto label_2c7b94;
    }
    ctx->pc = 0x2C7B8Cu;
    {
        const bool branch_taken_0x2c7b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B8Cu;
        // 0x2c7b90: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b8c) {
            ctx->pc = 0x2C7BA0u;
            goto label_2c7ba0;
        }
    }
    ctx->pc = 0x2C7B94u;
label_2c7b94:
    // 0x2c7b94: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c7b98:
    if (ctx->pc == 0x2C7B98u) {
        ctx->pc = 0x2C7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B94u;
        // 0x2c7b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B9Cu;
        goto label_2c7b9c;
    }
    ctx->pc = 0x2C7B94u;
    {
        const bool branch_taken_0x2c7b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B94u;
        // 0x2c7b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b94) {
            ctx->pc = 0x2C7BA8u;
            goto label_2c7ba8;
        }
    }
    ctx->pc = 0x2C7B9Cu;
label_2c7b9c:
    // 0x2c7b9c: 0x0  nop
    ctx->pc = 0x2c7b9cu;
    // NOP
label_2c7ba0:
    // 0x2c7ba0: 0xc0b162a  jal         func_2C58A8
label_2c7ba4:
    if (ctx->pc == 0x2C7BA4u) {
        ctx->pc = 0x2C7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BA0u;
        // 0x2c7ba4: 0x8fa90000  lw          $t1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7BA8u;
        goto label_2c7ba8;
    }
    ctx->pc = 0x2C7BA0u;
    SET_GPR_U32(ctx, 31, 0x2C7BA8u);
    ctx->pc = 0x2C7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7BA0u;
    // 0x2c7ba4: 0x8fa90000  lw          $t1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58A8u, 0x2C7BA0u, 0x2C7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BA8u;
label_2c7ba8:
    // 0x2c7ba8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7bac:
    // 0x2c7bac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7bb0:
    // 0x2c7bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7bb4:
    // 0x2c7bb4: 0x3e00008  jr          $ra
label_2c7bb8:
    if (ctx->pc == 0x2C7BB8u) {
        ctx->pc = 0x2C7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BB4u;
        // 0x2c7bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7BBCu;
        goto label_2c7bbc;
    }
    ctx->pc = 0x2C7BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BB4u;
        // 0x2c7bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7BBCu;
label_2c7bbc:
    // 0x2c7bbc: 0x0  nop
    ctx->pc = 0x2c7bbcu;
    // NOP
label_2c7bc0:
    // 0x2c7bc0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7bc4:
    // 0x2c7bc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bc8:
    // 0x2c7bc8: 0x24637f80  addiu       $v1, $v1, 0x7F80
    ctx->pc = 0x2c7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32640));
label_2c7bcc:
    // 0x2c7bcc: 0x3e00008  jr          $ra
label_2c7bd0:
    if (ctx->pc == 0x2C7BD0u) {
        ctx->pc = 0x2C7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BCCu;
        // 0x2c7bd0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7BD4u;
        goto label_2c7bd4;
    }
    ctx->pc = 0x2C7BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BCCu;
        // 0x2c7bd0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7BD4u;
label_2c7bd4:
    // 0x2c7bd4: 0x0  nop
    ctx->pc = 0x2c7bd4u;
    // NOP
label_2c7bd8:
    // 0x2c7bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7bdc:
    // 0x2c7bdc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7be0:
    // 0x2c7be0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7be4:
    // 0x2c7be4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7be8:
    // 0x2c7be8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c7be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bec:
    // 0x2c7bec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c7bf0:
    // 0x2c7bf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bf4:
    // 0x2c7bf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bf8:
    // 0x2c7bf8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c7bfc:
    // 0x2c7bfc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c7bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c7c00:
    // 0x2c7c00: 0xc0b3dfa  jal         func_2CF7E8
label_2c7c04:
    if (ctx->pc == 0x2C7C04u) {
        ctx->pc = 0x2C7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C00u;
        // 0x2c7c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C08u;
        goto label_2c7c08;
    }
    ctx->pc = 0x2C7C00u;
    SET_GPR_U32(ctx, 31, 0x2C7C08u);
    ctx->pc = 0x2C7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C00u;
    // 0x2c7c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7C00u, 0x2C7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C08u;
label_2c7c08:
    // 0x2c7c08: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2c7c0c:
    if (ctx->pc == 0x2C7C0Cu) {
        ctx->pc = 0x2C7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C08u;
        // 0x2c7c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C10u;
        goto label_2c7c10;
    }
    ctx->pc = 0x2C7C08u;
    {
        const bool branch_taken_0x2c7c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C08u;
        // 0x2c7c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c08) {
            ctx->pc = 0x2C7C88u;
            goto label_2c7c88;
        }
    }
    ctx->pc = 0x2C7C10u;
label_2c7c10:
    // 0x2c7c10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7c14:
    // 0x2c7c14: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2c7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7c18:
    // 0x2c7c18: 0xc0b3e18  jal         func_2CF860
label_2c7c1c:
    if (ctx->pc == 0x2C7C1Cu) {
        ctx->pc = 0x2C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C18u;
        // 0x2c7c1c: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C20u;
        goto label_2c7c20;
    }
    ctx->pc = 0x2C7C18u;
    SET_GPR_U32(ctx, 31, 0x2C7C20u);
    ctx->pc = 0x2C7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C18u;
    // 0x2c7c1c: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C7C18u, 0x2C7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C20u;
label_2c7c20:
    // 0x2c7c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c24:
    // 0x2c7c24: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2c7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2c7c28:
    // 0x2c7c28: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2c7c2c:
    if (ctx->pc == 0x2C7C2Cu) {
        ctx->pc = 0x2C7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C28u;
        // 0x2c7c2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C30u;
        goto label_2c7c30;
    }
    ctx->pc = 0x2C7C28u;
    {
        const bool branch_taken_0x2c7c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C28u;
        // 0x2c7c2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c28) {
            ctx->pc = 0x2C7C88u;
            goto label_2c7c88;
        }
    }
    ctx->pc = 0x2C7C30u;
label_2c7c30:
    // 0x2c7c30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c7c34:
    // 0x2c7c34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7c38:
    // 0x2c7c38: 0xc0b3dfa  jal         func_2CF7E8
label_2c7c3c:
    if (ctx->pc == 0x2C7C3Cu) {
        ctx->pc = 0x2C7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C38u;
        // 0x2c7c3c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C40u;
        goto label_2c7c40;
    }
    ctx->pc = 0x2C7C38u;
    SET_GPR_U32(ctx, 31, 0x2C7C40u);
    ctx->pc = 0x2C7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C38u;
    // 0x2c7c3c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7C38u, 0x2C7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C40u;
label_2c7c40:
    // 0x2c7c40: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2c7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_2c7c44:
    // 0x2c7c44: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2c7c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2c7c48:
    // 0x2c7c48: 0x24676278  addiu       $a3, $v1, 0x6278
    ctx->pc = 0x2c7c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25208));
label_2c7c4c:
    // 0x2c7c4c: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x2c7c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
label_2c7c50:
    // 0x2c7c50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2c7c54:
    if (ctx->pc == 0x2C7C54u) {
        ctx->pc = 0x2C7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C50u;
        // 0x2c7c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C58u;
        goto label_2c7c58;
    }
    ctx->pc = 0x2C7C50u;
    {
        const bool branch_taken_0x2c7c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C50u;
        // 0x2c7c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c50) {
            ctx->pc = 0x2C7C88u;
            goto label_2c7c88;
        }
    }
    ctx->pc = 0x2C7C58u;
label_2c7c58:
    // 0x2c7c58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7c5c:
    // 0x2c7c5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7c60:
    // 0x2c7c60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c7c64:
    // 0x2c7c64: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c7c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7c68:
    // 0x2c7c68: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x2c7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_2c7c6c:
    // 0x2c7c6c: 0xc0b3d08  jal         func_2CF420
label_2c7c70:
    if (ctx->pc == 0x2C7C70u) {
        ctx->pc = 0x2C7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C6Cu;
        // 0x2c7c70: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C74u;
        goto label_2c7c74;
    }
    ctx->pc = 0x2C7C6Cu;
    SET_GPR_U32(ctx, 31, 0x2C7C74u);
    ctx->pc = 0x2C7C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C6Cu;
    // 0x2c7c70: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C7C6Cu, 0x2C7C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C74u;
label_2c7c74:
    // 0x2c7c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c78:
    // 0x2c7c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c7c7c:
    if (ctx->pc == 0x2C7C7Cu) {
        ctx->pc = 0x2C7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C78u;
        // 0x2c7c7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C80u;
        goto label_2c7c80;
    }
    ctx->pc = 0x2C7C78u;
    {
        const bool branch_taken_0x2c7c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C78u;
        // 0x2c7c7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c78) {
            ctx->pc = 0x2C7C88u;
            goto label_2c7c88;
        }
    }
    ctx->pc = 0x2C7C80u;
label_2c7c80:
    // 0x2c7c80: 0xc0b3d08  jal         func_2CF420
label_2c7c84:
    if (ctx->pc == 0x2C7C84u) {
        ctx->pc = 0x2C7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C80u;
        // 0x2c7c84: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C88u;
        goto label_2c7c88;
    }
    ctx->pc = 0x2C7C80u;
    SET_GPR_U32(ctx, 31, 0x2C7C88u);
    ctx->pc = 0x2C7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C80u;
    // 0x2c7c84: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C7C80u, 0x2C7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C88u;
label_2c7c88:
    // 0x2c7c88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7c8c:
    // 0x2c7c8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7c90:
    // 0x2c7c90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c7c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7c94:
    // 0x2c7c94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c7c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c7c98:
    // 0x2c7c98: 0x3e00008  jr          $ra
label_2c7c9c:
    if (ctx->pc == 0x2C7C9Cu) {
        ctx->pc = 0x2C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C98u;
        // 0x2c7c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CA0u;
        goto label_2c7ca0;
    }
    ctx->pc = 0x2C7C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C98u;
        // 0x2c7c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7CA0u;
label_2c7ca0:
    // 0x2c7ca0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7ca4:
    // 0x2c7ca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ca8:
    // 0x2c7ca8: 0x24637fa0  addiu       $v1, $v1, 0x7FA0
    ctx->pc = 0x2c7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32672));
label_2c7cac:
    // 0x2c7cac: 0x3e00008  jr          $ra
label_2c7cb0:
    if (ctx->pc == 0x2C7CB0u) {
        ctx->pc = 0x2C7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CACu;
        // 0x2c7cb0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CB4u;
        goto label_2c7cb4;
    }
    ctx->pc = 0x2C7CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CACu;
        // 0x2c7cb0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7CB4u;
label_2c7cb4:
    // 0x2c7cb4: 0x0  nop
    ctx->pc = 0x2c7cb4u;
    // NOP
label_2c7cb8:
    // 0x2c7cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c7cbc:
    // 0x2c7cbc: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x2c7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2c7cc0:
    // 0x2c7cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7cc4:
    // 0x2c7cc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cc8:
    // 0x2c7cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2c7ccc:
    // 0x2c7ccc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c7cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cd0:
    // 0x2c7cd0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2c7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2c7cd4:
    // 0x2c7cd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2c7cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2c7cd8:
    // 0x2c7cd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2c7cdc:
    if (ctx->pc == 0x2C7CDCu) {
        ctx->pc = 0x2C7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CD8u;
        // 0x2c7cdc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CE0u;
        goto label_2c7ce0;
    }
    ctx->pc = 0x2C7CD8u;
    {
        const bool branch_taken_0x2c7cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CD8u;
        // 0x2c7cdc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cd8) {
            ctx->pc = 0x2C7CF8u;
            goto label_2c7cf8;
        }
    }
    ctx->pc = 0x2C7CE0u;
label_2c7ce0:
    // 0x2c7ce0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2c7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c7ce4:
    // 0x2c7ce4: 0xc0b6098  jal         func_2D8260
label_2c7ce8:
    if (ctx->pc == 0x2C7CE8u) {
        ctx->pc = 0x2C7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CE4u;
        // 0x2c7ce8: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CECu;
        goto label_2c7cec;
    }
    ctx->pc = 0x2C7CE4u;
    SET_GPR_U32(ctx, 31, 0x2C7CECu);
    ctx->pc = 0x2C7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7CE4u;
    // 0x2c7ce8: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2C7CE4u, 0x2C7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7CECu;
label_2c7cec:
    // 0x2c7cec: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2c7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c7cf0:
    // 0x2c7cf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cf4:
    // 0x2c7cf4: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x2c7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
label_2c7cf8:
    // 0x2c7cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7cfc:
    // 0x2c7cfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c7cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7d00:
    // 0x2c7d00: 0x3e00008  jr          $ra
label_2c7d04:
    if (ctx->pc == 0x2C7D04u) {
        ctx->pc = 0x2C7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D00u;
        // 0x2c7d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D08u;
        goto label_2c7d08;
    }
    ctx->pc = 0x2C7D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D00u;
        // 0x2c7d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7D08u;
label_2c7d08:
    // 0x2c7d08: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c7d0c:
    // 0x2c7d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d10:
    // 0x2c7d10: 0x24637fc0  addiu       $v1, $v1, 0x7FC0
    ctx->pc = 0x2c7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32704));
label_2c7d14:
    // 0x2c7d14: 0x3e00008  jr          $ra
label_2c7d18:
    if (ctx->pc == 0x2C7D18u) {
        ctx->pc = 0x2C7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D14u;
        // 0x2c7d18: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D1Cu;
        goto label_2c7d1c;
    }
    ctx->pc = 0x2C7D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D14u;
        // 0x2c7d18: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7D1Cu;
label_2c7d1c:
    // 0x2c7d1c: 0x0  nop
    ctx->pc = 0x2c7d1cu;
    // NOP
label_2c7d20:
    // 0x2c7d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7d24:
    // 0x2c7d24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7d28:
    // 0x2c7d28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d2c:
    // 0x2c7d2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7d30:
    // 0x2c7d30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c7d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d34:
    // 0x2c7d34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c7d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c7d38:
    // 0x2c7d38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d3c:
    // 0x2c7d3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d40:
    // 0x2c7d40: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2c7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2c7d44:
    // 0x2c7d44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c7d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c7d48:
    // 0x2c7d48: 0xc0b3dfa  jal         func_2CF7E8
label_2c7d4c:
    if (ctx->pc == 0x2C7D4Cu) {
        ctx->pc = 0x2C7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D48u;
        // 0x2c7d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D50u;
        goto label_2c7d50;
    }
    ctx->pc = 0x2C7D48u;
    SET_GPR_U32(ctx, 31, 0x2C7D50u);
    ctx->pc = 0x2C7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D48u;
    // 0x2c7d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7D48u, 0x2C7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D50u;
label_2c7d50:
    // 0x2c7d50: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2c7d54:
    if (ctx->pc == 0x2C7D54u) {
        ctx->pc = 0x2C7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D50u;
        // 0x2c7d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D58u;
        goto label_2c7d58;
    }
    ctx->pc = 0x2C7D50u;
    {
        const bool branch_taken_0x2c7d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D50u;
        // 0x2c7d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d50) {
            ctx->pc = 0x2C7DDCu;
            goto label_2c7ddc;
        }
    }
    ctx->pc = 0x2C7D58u;
label_2c7d58:
    // 0x2c7d58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7d5c:
    // 0x2c7d5c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2c7d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7d60:
    // 0x2c7d60: 0xc0b3e18  jal         func_2CF860
label_2c7d64:
    if (ctx->pc == 0x2C7D64u) {
        ctx->pc = 0x2C7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D60u;
        // 0x2c7d64: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D68u;
        goto label_2c7d68;
    }
    ctx->pc = 0x2C7D60u;
    SET_GPR_U32(ctx, 31, 0x2C7D68u);
    ctx->pc = 0x2C7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D60u;
    // 0x2c7d64: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C7D60u, 0x2C7D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D68u;
label_2c7d68:
    // 0x2c7d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d6c:
    // 0x2c7d6c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2c7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2c7d70:
    // 0x2c7d70: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2c7d74:
    if (ctx->pc == 0x2C7D74u) {
        ctx->pc = 0x2C7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D70u;
        // 0x2c7d74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D78u;
        goto label_2c7d78;
    }
    ctx->pc = 0x2C7D70u;
    {
        const bool branch_taken_0x2c7d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D70u;
        // 0x2c7d74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d70) {
            ctx->pc = 0x2C7DDCu;
            goto label_2c7ddc;
        }
    }
    ctx->pc = 0x2C7D78u;
label_2c7d78:
    // 0x2c7d78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7d7c:
    // 0x2c7d7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c7d80:
    // 0x2c7d80: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2c7d84:
    // 0x2c7d84: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2c7d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c7d88:
    // 0x2c7d88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7d8c:
    // 0x2c7d8c: 0xc0b3dfa  jal         func_2CF7E8
label_2c7d90:
    if (ctx->pc == 0x2C7D90u) {
        ctx->pc = 0x2C7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D8Cu;
        // 0x2c7d90: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D94u;
        goto label_2c7d94;
    }
    ctx->pc = 0x2C7D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D94u);
    ctx->pc = 0x2C7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D8Cu;
    // 0x2c7d90: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7D8Cu, 0x2C7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D94u;
label_2c7d94:
    // 0x2c7d94: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2c7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_2c7d98:
    // 0x2c7d98: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2c7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2c7d9c:
    // 0x2c7d9c: 0x24676278  addiu       $a3, $v1, 0x6278
    ctx->pc = 0x2c7d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25208));
label_2c7da0:
    // 0x2c7da0: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
label_2c7da4:
    // 0x2c7da4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2c7da8:
    if (ctx->pc == 0x2C7DA8u) {
        ctx->pc = 0x2C7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DA4u;
        // 0x2c7da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7DACu;
        goto label_2c7dac;
    }
    ctx->pc = 0x2C7DA4u;
    {
        const bool branch_taken_0x2c7da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DA4u;
        // 0x2c7da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7da4) {
            ctx->pc = 0x2C7DDCu;
            goto label_2c7ddc;
        }
    }
    ctx->pc = 0x2C7DACu;
label_2c7dac:
    // 0x2c7dac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7db0:
    // 0x2c7db0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7db4:
    // 0x2c7db4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c7db8:
    // 0x2c7db8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c7db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7dbc:
    // 0x2c7dbc: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x2c7dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_2c7dc0:
    // 0x2c7dc0: 0xc0b3d08  jal         func_2CF420
label_2c7dc4:
    if (ctx->pc == 0x2C7DC4u) {
        ctx->pc = 0x2C7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DC0u;
        // 0x2c7dc4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7DC8u;
        goto label_2c7dc8;
    }
    ctx->pc = 0x2C7DC0u;
    SET_GPR_U32(ctx, 31, 0x2C7DC8u);
    ctx->pc = 0x2C7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7DC0u;
    // 0x2c7dc4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C7DC0u, 0x2C7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DC8u;
label_2c7dc8:
    // 0x2c7dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7dcc:
    // 0x2c7dcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c7dd0:
    if (ctx->pc == 0x2C7DD0u) {
        ctx->pc = 0x2C7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DCCu;
        // 0x2c7dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7DD4u;
        goto label_2c7dd4;
    }
    ctx->pc = 0x2C7DCCu;
    {
        const bool branch_taken_0x2c7dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DCCu;
        // 0x2c7dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7dcc) {
            ctx->pc = 0x2C7DDCu;
            goto label_2c7ddc;
        }
    }
    ctx->pc = 0x2C7DD4u;
label_2c7dd4:
    // 0x2c7dd4: 0xc0b3d08  jal         func_2CF420
label_2c7dd8:
    if (ctx->pc == 0x2C7DD8u) {
        ctx->pc = 0x2C7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DD4u;
        // 0x2c7dd8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7DDCu;
        goto label_2c7ddc;
    }
    ctx->pc = 0x2C7DD4u;
    SET_GPR_U32(ctx, 31, 0x2C7DDCu);
    ctx->pc = 0x2C7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7DD4u;
    // 0x2c7dd8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C7DD4u, 0x2C7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DDCu;
label_2c7ddc:
    // 0x2c7ddc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7de0:
    // 0x2c7de0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7de4:
    // 0x2c7de4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c7de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7de8:
    // 0x2c7de8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c7de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c7dec:
    // 0x2c7dec: 0x3e00008  jr          $ra
label_2c7df0:
    if (ctx->pc == 0x2C7DF0u) {
        ctx->pc = 0x2C7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DECu;
        // 0x2c7df0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7DF4u;
        goto label_2c7df4;
    }
    ctx->pc = 0x2C7DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DECu;
        // 0x2c7df0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7DF4u;
label_2c7df4:
    // 0x2c7df4: 0x0  nop
    ctx->pc = 0x2c7df4u;
    // NOP
label_2c7df8:
    // 0x2c7df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7dfc:
    // 0x2c7dfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7e00:
    // 0x2c7e00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e04:
    // 0x2c7e04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7e08:
    // 0x2c7e08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e0c:
    // 0x2c7e0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c7e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e10:
    // 0x2c7e10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e14:
    // 0x2c7e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7e18:
    // 0x2c7e18: 0xc0b3d2e  jal         func_2CF4B8
label_2c7e1c:
    if (ctx->pc == 0x2C7E1Cu) {
        ctx->pc = 0x2C7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E18u;
        // 0x2c7e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E20u;
        goto label_2c7e20;
    }
    ctx->pc = 0x2C7E18u;
    SET_GPR_U32(ctx, 31, 0x2C7E20u);
    ctx->pc = 0x2C7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E18u;
    // 0x2c7e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C7E18u, 0x2C7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E20u;
label_2c7e20:
    // 0x2c7e20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c7e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e24:
    // 0x2c7e24: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x2c7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2c7e28:
    // 0x2c7e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c7e2c:
    if (ctx->pc == 0x2C7E2Cu) {
        ctx->pc = 0x2C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E28u;
        // 0x2c7e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E30u;
        goto label_2c7e30;
    }
    ctx->pc = 0x2C7E28u;
    {
        const bool branch_taken_0x2c7e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E28u;
        // 0x2c7e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e28) {
            ctx->pc = 0x2C7E38u;
            goto label_2c7e38;
        }
    }
    ctx->pc = 0x2C7E30u;
label_2c7e30:
    // 0x2c7e30: 0x10000003  b           . + 4 + (0x3 << 2)
label_2c7e34:
    if (ctx->pc == 0x2C7E34u) {
        ctx->pc = 0x2C7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E30u;
        // 0x2c7e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E38u;
        goto label_2c7e38;
    }
    ctx->pc = 0x2C7E30u;
    {
        const bool branch_taken_0x2c7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E30u;
        // 0x2c7e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e30) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E38u;
label_2c7e38:
    // 0x2c7e38: 0xc0b1948  jal         func_2C6520
label_2c7e3c:
    if (ctx->pc == 0x2C7E3Cu) {
        ctx->pc = 0x2C7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E38u;
        // 0x2c7e3c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E40u;
        goto label_2c7e40;
    }
    ctx->pc = 0x2C7E38u;
    SET_GPR_U32(ctx, 31, 0x2C7E40u);
    ctx->pc = 0x2C7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E38u;
    // 0x2c7e3c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6520u, 0x2C7E38u, 0x2C7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E40u;
label_2c7e40:
    // 0x2c7e40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7e44:
    // 0x2c7e44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7e48:
    // 0x2c7e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7e4c:
    // 0x2c7e4c: 0x3e00008  jr          $ra
label_2c7e50:
    if (ctx->pc == 0x2C7E50u) {
        ctx->pc = 0x2C7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E4Cu;
        // 0x2c7e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E54u;
        goto label_2c7e54;
    }
    ctx->pc = 0x2C7E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E4Cu;
        // 0x2c7e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7E54u;
label_2c7e54:
    // 0x2c7e54: 0x0  nop
    ctx->pc = 0x2c7e54u;
    // NOP
label_2c7e58:
    // 0x2c7e58: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c7e5c:
    // 0x2c7e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e60:
    // 0x2c7e60: 0x24638178  addiu       $v1, $v1, -0x7E88
    ctx->pc = 0x2c7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934904));
label_2c7e64:
    // 0x2c7e64: 0x3e00008  jr          $ra
label_2c7e68:
    if (ctx->pc == 0x2C7E68u) {
        ctx->pc = 0x2C7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E64u;
        // 0x2c7e68: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E6Cu;
        goto label_2c7e6c;
    }
    ctx->pc = 0x2C7E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E64u;
        // 0x2c7e68: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7E6Cu;
label_2c7e6c:
    // 0x2c7e6c: 0x0  nop
    ctx->pc = 0x2c7e6cu;
    // NOP
label_2c7e70:
    // 0x2c7e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7e74:
    // 0x2c7e74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2c7e78:
    // 0x2c7e78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7e7c:
    // 0x2c7e7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c7e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e80:
    // 0x2c7e80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7e84:
    // 0x2c7e84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e88:
    // 0x2c7e88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c7e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c7e8c:
    // 0x2c7e8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e90:
    // 0x2c7e90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c7e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c7e94:
    // 0x2c7e94: 0x24458110  addiu       $a1, $v0, -0x7EF0
    ctx->pc = 0x2c7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
label_2c7e98:
    // 0x2c7e98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e9c:
    // 0x2c7e9c: 0xc0b5e42  jal         func_2D7908
label_2c7ea0:
    if (ctx->pc == 0x2C7EA0u) {
        ctx->pc = 0x2C7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E9Cu;
        // 0x2c7ea0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EA4u;
        goto label_2c7ea4;
    }
    ctx->pc = 0x2C7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2C7EA4u);
    ctx->pc = 0x2C7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E9Cu;
    // 0x2c7ea0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7908u, 0x2C7E9Cu, 0x2C7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EA4u;
label_2c7ea4:
    // 0x2c7ea4: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
label_2c7ea8:
    if (ctx->pc == 0x2C7EA8u) {
        ctx->pc = 0x2C7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EA4u;
        // 0x2c7ea8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EACu;
        goto label_2c7eac;
    }
    ctx->pc = 0x2C7EA4u;
    {
        const bool branch_taken_0x2c7ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ea4) {
            ctx->pc = 0x2C7EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7EA4u;
            // 0x2c7ea8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7EACu;
label_2c7eac:
    // 0x2c7eac: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2c7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2c7eb0:
    // 0x2c7eb0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c7eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c7eb4:
    // 0x2c7eb4: 0x24a58138  addiu       $a1, $a1, -0x7EC8
    ctx->pc = 0x2c7eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934840));
label_2c7eb8:
    // 0x2c7eb8: 0xc0b5e42  jal         func_2D7908
label_2c7ebc:
    if (ctx->pc == 0x2C7EBCu) {
        ctx->pc = 0x2C7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EB8u;
        // 0x2c7ebc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EC0u;
        goto label_2c7ec0;
    }
    ctx->pc = 0x2C7EB8u;
    SET_GPR_U32(ctx, 31, 0x2C7EC0u);
    ctx->pc = 0x2C7EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7EB8u;
    // 0x2c7ebc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7908u, 0x2C7EB8u, 0x2C7EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EC0u;
label_2c7ec0:
    // 0x2c7ec0: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
label_2c7ec4:
    if (ctx->pc == 0x2C7EC4u) {
        ctx->pc = 0x2C7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EC0u;
        // 0x2c7ec4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EC8u;
        goto label_2c7ec8;
    }
    ctx->pc = 0x2C7EC0u;
    {
        const bool branch_taken_0x2c7ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ec0) {
            ctx->pc = 0x2C7EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7EC0u;
            // 0x2c7ec4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7EC8u;
label_2c7ec8:
    // 0x2c7ec8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2c7ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2c7ecc:
    // 0x2c7ecc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2c7eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c7ed0:
    // 0x2c7ed0: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x2c7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
label_2c7ed4:
    // 0x2c7ed4: 0xc0b5e42  jal         func_2D7908
label_2c7ed8:
    if (ctx->pc == 0x2C7ED8u) {
        ctx->pc = 0x2C7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7ED4u;
        // 0x2c7ed8: 0x27a40008  addiu       $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EDCu;
        goto label_2c7edc;
    }
    ctx->pc = 0x2C7ED4u;
    SET_GPR_U32(ctx, 31, 0x2C7EDCu);
    ctx->pc = 0x2C7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7ED4u;
    // 0x2c7ed8: 0x27a40008  addiu       $a0, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7908u, 0x2C7ED4u, 0x2C7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EDCu;
label_2c7edc:
    // 0x2c7edc: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
label_2c7ee0:
    if (ctx->pc == 0x2C7EE0u) {
        ctx->pc = 0x2C7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EDCu;
        // 0x2c7ee0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EE4u;
        goto label_2c7ee4;
    }
    ctx->pc = 0x2C7EDCu;
    {
        const bool branch_taken_0x2c7edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7edc) {
            ctx->pc = 0x2C7EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7EDCu;
            // 0x2c7ee0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7EE4u;
label_2c7ee4:
    // 0x2c7ee4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2c7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7ee8:
    // 0x2c7ee8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c7eec:
    // 0x2c7eec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c7ef0:
    // 0x2c7ef0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_2c7ef4:
    if (ctx->pc == 0x2C7EF4u) {
        ctx->pc = 0x2C7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EF0u;
        // 0x2c7ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EF8u;
        goto label_2c7ef8;
    }
    ctx->pc = 0x2C7EF0u;
    {
        const bool branch_taken_0x2c7ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EF0u;
        // 0x2c7ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ef0) {
            ctx->pc = 0x2C7F18u;
            goto label_2c7f18;
        }
    }
    ctx->pc = 0x2C7EF8u;
label_2c7ef8:
    // 0x2c7ef8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7efc:
    // 0x2c7efc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c7f00:
    // 0x2c7f00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c7f04:
    // 0x2c7f04: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2c7f08:
    if (ctx->pc == 0x2C7F08u) {
        ctx->pc = 0x2C7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F04u;
        // 0x2c7f08: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F0Cu;
        goto label_2c7f0c;
    }
    ctx->pc = 0x2C7F04u;
    {
        const bool branch_taken_0x2c7f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F04u;
        // 0x2c7f08: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f04) {
            ctx->pc = 0x2C7F14u;
            goto label_2c7f14;
        }
    }
    ctx->pc = 0x2C7F0Cu;
label_2c7f0c:
    // 0x2c7f0c: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
label_2c7f10:
    if (ctx->pc == 0x2C7F10u) {
        ctx->pc = 0x2C7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F0Cu;
        // 0x2c7f10: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F14u;
        goto label_2c7f14;
    }
    ctx->pc = 0x2C7F0Cu;
    {
        const bool branch_taken_0x2c7f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F0Cu;
        // 0x2c7f10: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f0c) {
            ctx->pc = 0x2C8084u;
            goto label_2c8084;
        }
    }
    ctx->pc = 0x2C7F14u;
label_2c7f14:
    // 0x2c7f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f18:
    // 0x2c7f18: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_2c7f1c:
    // 0x2c7f1c: 0xc0b3dfa  jal         func_2CF7E8
label_2c7f20:
    if (ctx->pc == 0x2C7F20u) {
        ctx->pc = 0x2C7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F1Cu;
        // 0x2c7f20: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F24u;
        goto label_2c7f24;
    }
    ctx->pc = 0x2C7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F24u);
    ctx->pc = 0x2C7F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F1Cu;
    // 0x2c7f20: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C7F1Cu, 0x2C7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F24u;
label_2c7f24:
    // 0x2c7f24: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
label_2c7f28:
    if (ctx->pc == 0x2C7F28u) {
        ctx->pc = 0x2C7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F24u;
        // 0x2c7f28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F2Cu;
        goto label_2c7f2c;
    }
    ctx->pc = 0x2C7F24u;
    {
        const bool branch_taken_0x2c7f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f24) {
            ctx->pc = 0x2C7F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F24u;
            // 0x2c7f28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7F2Cu;
label_2c7f2c:
    // 0x2c7f2c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2c7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7f30:
    // 0x2c7f30: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2c7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7f34:
    // 0x2c7f34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c7f38:
    // 0x2c7f38: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2c7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_2c7f3c:
    // 0x2c7f3c: 0xc0b60e6  jal         func_2D8398
label_2c7f40:
    if (ctx->pc == 0x2C7F40u) {
        ctx->pc = 0x2C7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F3Cu;
        // 0x2c7f40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F44u;
        goto label_2c7f44;
    }
    ctx->pc = 0x2C7F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F44u);
    ctx->pc = 0x2C7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F3Cu;
    // 0x2c7f40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C7F3Cu, 0x2C7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F44u;
label_2c7f44:
    // 0x2c7f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f48:
    // 0x2c7f48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2c7f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7f4c:
    // 0x2c7f4c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x2c7f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7f50:
    // 0x2c7f50: 0xc0b3e18  jal         func_2CF860
label_2c7f54:
    if (ctx->pc == 0x2C7F54u) {
        ctx->pc = 0x2C7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F50u;
        // 0x2c7f54: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F58u;
        goto label_2c7f58;
    }
    ctx->pc = 0x2C7F50u;
    SET_GPR_U32(ctx, 31, 0x2C7F58u);
    ctx->pc = 0x2C7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F50u;
    // 0x2c7f54: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C7F50u, 0x2C7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F58u;
label_2c7f58:
    // 0x2c7f58: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_2c7f5c:
    if (ctx->pc == 0x2C7F5Cu) {
        ctx->pc = 0x2C7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F58u;
        // 0x2c7f5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F60u;
        goto label_2c7f60;
    }
    ctx->pc = 0x2C7F58u;
    {
        const bool branch_taken_0x2c7f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f58) {
            ctx->pc = 0x2C7F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F58u;
            // 0x2c7f5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7F60u;
label_2c7f60:
    // 0x2c7f60: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2c7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7f64:
    // 0x2c7f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f68:
    // 0x2c7f68: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2c7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7f6c:
    // 0x2c7f6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2c7f70:
    // 0x2c7f70: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2c7f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2c7f74:
    // 0x2c7f74: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7f78:
    // 0x2c7f78: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2c7f7c:
    // 0x2c7f7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7f80:
    // 0x2c7f80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7f84:
    // 0x2c7f84: 0x40f809  jalr        $v0
label_2c7f88:
    if (ctx->pc == 0x2C7F88u) {
        ctx->pc = 0x2C7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F84u;
        // 0x2c7f88: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F8Cu;
        goto label_2c7f8c;
    }
    ctx->pc = 0x2C7F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7F8Cu);
        ctx->pc = 0x2C7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F84u;
        // 0x2c7f88: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7F84u, 0x2C7F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7F8Cu;
label_2c7f8c:
    // 0x2c7f8c: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_2c7f90:
    if (ctx->pc == 0x2C7F90u) {
        ctx->pc = 0x2C7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F8Cu;
        // 0x2c7f90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F94u;
        goto label_2c7f94;
    }
    ctx->pc = 0x2C7F8Cu;
    {
        const bool branch_taken_0x2c7f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f8c) {
            ctx->pc = 0x2C7F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F8Cu;
            // 0x2c7f90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7F94u;
label_2c7f94:
    // 0x2c7f94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7f98:
    // 0x2c7f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f9c:
    // 0x2c7f9c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2c7f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7fa0:
    // 0x2c7fa0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2c7fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c7fa4:
    // 0x2c7fa4: 0xc0b3d2e  jal         func_2CF4B8
label_2c7fa8:
    if (ctx->pc == 0x2C7FA8u) {
        ctx->pc = 0x2C7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FA4u;
        // 0x2c7fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FACu;
        goto label_2c7fac;
    }
    ctx->pc = 0x2C7FA4u;
    SET_GPR_U32(ctx, 31, 0x2C7FACu);
    ctx->pc = 0x2C7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7FA4u;
    // 0x2c7fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C7FA4u, 0x2C7FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FACu;
label_2c7fac:
    // 0x2c7fac: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_2c7fb0:
    if (ctx->pc == 0x2C7FB0u) {
        ctx->pc = 0x2C7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FACu;
        // 0x2c7fb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FB4u;
        goto label_2c7fb4;
    }
    ctx->pc = 0x2C7FACu;
    {
        const bool branch_taken_0x2c7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fac) {
            ctx->pc = 0x2C7FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7FACu;
            // 0x2c7fb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7FB4u;
label_2c7fb4:
    // 0x2c7fb4: 0xc0b60e6  jal         func_2D8398
label_2c7fb8:
    if (ctx->pc == 0x2C7FB8u) {
        ctx->pc = 0x2C7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FB4u;
        // 0x2c7fb8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FBCu;
        goto label_2c7fbc;
    }
    ctx->pc = 0x2C7FB4u;
    SET_GPR_U32(ctx, 31, 0x2C7FBCu);
    ctx->pc = 0x2C7FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7FB4u;
    // 0x2c7fb8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C7FB4u, 0x2C7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FBCu;
label_2c7fbc:
    // 0x2c7fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fc0:
    // 0x2c7fc0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2c7fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7fc4:
    // 0x2c7fc4: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x2c7fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7fc8:
    // 0x2c7fc8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c7fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c7fcc:
    // 0x2c7fcc: 0xc0b3e18  jal         func_2CF860
label_2c7fd0:
    if (ctx->pc == 0x2C7FD0u) {
        ctx->pc = 0x2C7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FCCu;
        // 0x2c7fd0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FD4u;
        goto label_2c7fd4;
    }
    ctx->pc = 0x2C7FCCu;
    SET_GPR_U32(ctx, 31, 0x2C7FD4u);
    ctx->pc = 0x2C7FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7FCCu;
    // 0x2c7fd0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C7FCCu, 0x2C7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FD4u;
label_2c7fd4:
    // 0x2c7fd4: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_2c7fd8:
    if (ctx->pc == 0x2C7FD8u) {
        ctx->pc = 0x2C7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FD4u;
        // 0x2c7fd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FDCu;
        goto label_2c7fdc;
    }
    ctx->pc = 0x2C7FD4u;
    {
        const bool branch_taken_0x2c7fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fd4) {
            ctx->pc = 0x2C7FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7FD4u;
            // 0x2c7fd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C7FDCu;
label_2c7fdc:
    // 0x2c7fdc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2c7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7fe0:
    // 0x2c7fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fe4:
    // 0x2c7fe4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2c7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7fe8:
    // 0x2c7fe8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c7fec:
    // 0x2c7fec: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x2c7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_2c7ff0:
    // 0x2c7ff0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2c7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7ff4:
    // 0x2c7ff4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2c7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7ff8:
    // 0x2c7ff8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2c7ffc:
    // 0x2c7ffc: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2c8000:
    // 0x2c8000: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2c8000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c8004:
    // 0x2c8004: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c8004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2c8008:
    // 0x2c8008: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c8008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c800c:
    // 0x2c800c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c8010:
    // 0x2c8010: 0x40f809  jalr        $v0
label_2c8014:
    if (ctx->pc == 0x2C8014u) {
        ctx->pc = 0x2C8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8010u;
        // 0x2c8014: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8018u;
        goto label_2c8018;
    }
    ctx->pc = 0x2C8010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C8018u);
        ctx->pc = 0x2C8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8010u;
        // 0x2c8014: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8010u, 0x2C8018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8018u;
label_2c8018:
    // 0x2c8018: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2c801c:
    if (ctx->pc == 0x2C801Cu) {
        ctx->pc = 0x2C801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8018u;
        // 0x2c801c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8020u;
        goto label_2c8020;
    }
    ctx->pc = 0x2C8018u;
    {
        const bool branch_taken_0x2c8018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8018) {
            ctx->pc = 0x2C801Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8018u;
            // 0x2c801c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C8020u;
label_2c8020:
    // 0x2c8020: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c8020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c8024:
    // 0x2c8024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8028:
    // 0x2c8028: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2c8028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c802c:
    // 0x2c802c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2c802cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c8030:
    // 0x2c8030: 0xc0b3d2e  jal         func_2CF4B8
label_2c8034:
    if (ctx->pc == 0x2C8034u) {
        ctx->pc = 0x2C8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8030u;
        // 0x2c8034: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8038u;
        goto label_2c8038;
    }
    ctx->pc = 0x2C8030u;
    SET_GPR_U32(ctx, 31, 0x2C8038u);
    ctx->pc = 0x2C8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8030u;
    // 0x2c8034: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C8030u, 0x2C8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8038u;
label_2c8038:
    // 0x2c8038: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2c803c:
    if (ctx->pc == 0x2C803Cu) {
        ctx->pc = 0x2C803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8038u;
        // 0x2c803c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8040u;
        goto label_2c8040;
    }
    ctx->pc = 0x2C8038u;
    {
        const bool branch_taken_0x2c8038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8038) {
            ctx->pc = 0x2C803Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8038u;
            // 0x2c803c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C8040u;
label_2c8040:
    // 0x2c8040: 0xc0b60e6  jal         func_2D8398
label_2c8044:
    if (ctx->pc == 0x2C8044u) {
        ctx->pc = 0x2C8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8040u;
        // 0x2c8044: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8048u;
        goto label_2c8048;
    }
    ctx->pc = 0x2C8040u;
    SET_GPR_U32(ctx, 31, 0x2C8048u);
    ctx->pc = 0x2C8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8040u;
    // 0x2c8044: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C8040u, 0x2C8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8048u;
label_2c8048:
    // 0x2c8048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c804c:
    // 0x2c804c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2c804cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c8050:
    // 0x2c8050: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x2c8050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c8054:
    // 0x2c8054: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2c8054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c8058:
    // 0x2c8058: 0xc0b3e18  jal         func_2CF860
label_2c805c:
    if (ctx->pc == 0x2C805Cu) {
        ctx->pc = 0x2C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8058u;
        // 0x2c805c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8060u;
        goto label_2c8060;
    }
    ctx->pc = 0x2C8058u;
    SET_GPR_U32(ctx, 31, 0x2C8060u);
    ctx->pc = 0x2C805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8058u;
    // 0x2c805c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C8058u, 0x2C8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8060u;
label_2c8060:
    // 0x2c8060: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2c8064:
    if (ctx->pc == 0x2C8064u) {
        ctx->pc = 0x2C8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8060u;
        // 0x2c8064: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8068u;
        goto label_2c8068;
    }
    ctx->pc = 0x2C8060u;
    {
        const bool branch_taken_0x2c8060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8060) {
            ctx->pc = 0x2C8064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8060u;
            // 0x2c8064: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8088u;
            goto label_2c8088;
        }
    }
    ctx->pc = 0x2C8068u;
label_2c8068:
    // 0x2c8068: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2c8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2c806c:
    // 0x2c806c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8070:
    // 0x2c8070: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2c8070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c8074:
    // 0x2c8074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c8074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c8078:
    // 0x2c8078: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2c8078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2c807c:
    // 0x2c807c: 0xc0b3d08  jal         func_2CF420
label_2c8080:
    if (ctx->pc == 0x2C8080u) {
        ctx->pc = 0x2C8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C807Cu;
        // 0x2c8080: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8084u;
        goto label_2c8084;
    }
    ctx->pc = 0x2C807Cu;
    SET_GPR_U32(ctx, 31, 0x2C8084u);
    ctx->pc = 0x2C8080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C807Cu;
    // 0x2c8080: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C807Cu, 0x2C8084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8084u;
label_2c8084:
    // 0x2c8084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8088:
    // 0x2c8088: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c808c:
    // 0x2c808c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c808cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8090:
    // 0x2c8090: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c8090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8094:
    // 0x2c8094: 0x3e00008  jr          $ra
label_2c8098:
    if (ctx->pc == 0x2C8098u) {
        ctx->pc = 0x2C8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8094u;
        // 0x2c8098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C809Cu;
        goto label_2c809c;
    }
    ctx->pc = 0x2C8094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8094u;
        // 0x2c8098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C809Cu;
label_2c809c:
    // 0x2c809c: 0x0  nop
    ctx->pc = 0x2c809cu;
    // NOP
label_2c80a0:
    // 0x2c80a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c80a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c80a4:
    // 0x2c80a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c80a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c80a8:
    // 0x2c80a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c80a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c80ac:
    // 0x2c80ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c80acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c80b0:
    // 0x2c80b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c80b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c80b4:
    // 0x2c80b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2c80b8:
    // 0x2c80b8: 0xc0b3d2e  jal         func_2CF4B8
label_2c80bc:
    if (ctx->pc == 0x2C80BCu) {
        ctx->pc = 0x2C80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80B8u;
        // 0x2c80bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80C0u;
        goto label_2c80c0;
    }
    ctx->pc = 0x2C80B8u;
    SET_GPR_U32(ctx, 31, 0x2C80C0u);
    ctx->pc = 0x2C80BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C80B8u;
    // 0x2c80bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C80B8u, 0x2C80C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80C0u;
label_2c80c0:
    // 0x2c80c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c80c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80c4:
    // 0x2c80c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c80c8:
    if (ctx->pc == 0x2C80C8u) {
        ctx->pc = 0x2C80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80C4u;
        // 0x2c80c8: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80CCu;
        goto label_2c80cc;
    }
    ctx->pc = 0x2C80C4u;
    {
        const bool branch_taken_0x2c80c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80C4u;
        // 0x2c80c8: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80c4) {
            ctx->pc = 0x2C80D8u;
            goto label_2c80d8;
        }
    }
    ctx->pc = 0x2C80CCu;
label_2c80cc:
    // 0x2c80cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2c80d0:
    if (ctx->pc == 0x2C80D0u) {
        ctx->pc = 0x2C80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80CCu;
        // 0x2c80d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80D4u;
        goto label_2c80d4;
    }
    ctx->pc = 0x2C80CCu;
    {
        const bool branch_taken_0x2c80cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80CCu;
        // 0x2c80d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80cc) {
            ctx->pc = 0x2C80F8u;
            goto label_2c80f8;
        }
    }
    ctx->pc = 0x2C80D4u;
label_2c80d4:
    // 0x2c80d4: 0x0  nop
    ctx->pc = 0x2c80d4u;
    // NOP
label_2c80d8:
    // 0x2c80d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c80dc:
    // 0x2c80dc: 0x8c4b0024  lw          $t3, 0x24($v0)
    ctx->pc = 0x2c80dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2c80e0:
    // 0x2c80e0: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2c80e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2c80e4:
    // 0x2c80e4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2c80e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c80e8:
    // 0x2c80e8: 0x8c48001c  lw          $t0, 0x1C($v0)
    ctx->pc = 0x2c80e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2c80ec:
    // 0x2c80ec: 0x8c49000c  lw          $t1, 0xC($v0)
    ctx->pc = 0x2c80ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c80f0:
    // 0x2c80f0: 0xc0b162a  jal         func_2C58A8
label_2c80f4:
    if (ctx->pc == 0x2C80F4u) {
        ctx->pc = 0x2C80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80F0u;
        // 0x2c80f4: 0x8c4a0020  lw          $t2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80F8u;
        goto label_2c80f8;
    }
    ctx->pc = 0x2C80F0u;
    SET_GPR_U32(ctx, 31, 0x2C80F8u);
    ctx->pc = 0x2C80F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C80F0u;
    // 0x2c80f4: 0x8c4a0020  lw          $t2, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58A8u, 0x2C80F0u, 0x2C80F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80F8u;
label_2c80f8:
    // 0x2c80f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c80f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c80fc:
    // 0x2c80fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c80fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8100:
    // 0x2c8100: 0x3e00008  jr          $ra
label_2c8104:
    if (ctx->pc == 0x2C8104u) {
        ctx->pc = 0x2C8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8100u;
        // 0x2c8104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8108u;
        goto label_2c8108;
    }
    ctx->pc = 0x2C8100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8100u;
        // 0x2c8104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8108u;
label_2c8108:
    // 0x2c8108: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c8108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c810c:
    // 0x2c810c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c810cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8110:
    // 0x2c8110: 0x246381b8  addiu       $v1, $v1, -0x7E48
    ctx->pc = 0x2c8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934968));
label_2c8114:
    // 0x2c8114: 0x3e00008  jr          $ra
label_2c8118:
    if (ctx->pc == 0x2C8118u) {
        ctx->pc = 0x2C8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8114u;
        // 0x2c8118: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C811Cu;
        goto label_2c811c;
    }
    ctx->pc = 0x2C8114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8114u;
        // 0x2c8118: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C811Cu;
label_2c811c:
    // 0x2c811c: 0x0  nop
    ctx->pc = 0x2c811cu;
    // NOP
label_2c8120:
    // 0x2c8120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8124:
    // 0x2c8124: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8128:
    // 0x2c8128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c812c:
    // 0x2c812c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8130:
    // 0x2c8130: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c8130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8134:
    // 0x2c8134: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8138:
    // 0x2c8138: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c813c:
    // 0x2c813c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c813cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c8140:
    // 0x2c8140: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c8140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8144:
    // 0x2c8144: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c8148:
    // 0x2c8148: 0xc0b3dfa  jal         func_2CF7E8
label_2c814c:
    if (ctx->pc == 0x2C814Cu) {
        ctx->pc = 0x2C814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8148u;
        // 0x2c814c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8150u;
        goto label_2c8150;
    }
    ctx->pc = 0x2C8148u;
    SET_GPR_U32(ctx, 31, 0x2C8150u);
    ctx->pc = 0x2C814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8148u;
    // 0x2c814c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C8148u, 0x2C8150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8150u;
label_2c8150:
    // 0x2c8150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8154:
    // 0x2c8154: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c8158:
    if (ctx->pc == 0x2C8158u) {
        ctx->pc = 0x2C8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8154u;
        // 0x2c8158: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C815Cu;
        goto label_2c815c;
    }
    ctx->pc = 0x2C8154u;
    {
        const bool branch_taken_0x2c8154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8154u;
        // 0x2c8158: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8154) {
            ctx->pc = 0x2C8174u;
            goto label_2c8174;
        }
    }
    ctx->pc = 0x2C815Cu;
label_2c815c:
    // 0x2c815c: 0xc0b6098  jal         func_2D8260
label_2c8160:
    if (ctx->pc == 0x2C8160u) {
        ctx->pc = 0x2C8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C815Cu;
        // 0x2c8160: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8164u;
        goto label_2c8164;
    }
    ctx->pc = 0x2C815Cu;
    SET_GPR_U32(ctx, 31, 0x2C8164u);
    ctx->pc = 0x2C8160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C815Cu;
    // 0x2c8160: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2C815Cu, 0x2C8164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8164u;
label_2c8164:
    // 0x2c8164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8168:
    // 0x2c8168: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2c8168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c816c:
    // 0x2c816c: 0xc0b3d08  jal         func_2CF420
label_2c8170:
    if (ctx->pc == 0x2C8170u) {
        ctx->pc = 0x2C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C816Cu;
        // 0x2c8170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8174u;
        goto label_2c8174;
    }
    ctx->pc = 0x2C816Cu;
    SET_GPR_U32(ctx, 31, 0x2C8174u);
    ctx->pc = 0x2C8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C816Cu;
    // 0x2c8170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C816Cu, 0x2C8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8174u;
label_2c8174:
    // 0x2c8174: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8178:
    // 0x2c8178: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c817c:
    // 0x2c817c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c817cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8180:
    // 0x2c8180: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c8180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8184:
    // 0x2c8184: 0x3e00008  jr          $ra
label_2c8188:
    if (ctx->pc == 0x2C8188u) {
        ctx->pc = 0x2C8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8184u;
        // 0x2c8188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C818Cu;
        goto label_2c818c;
    }
    ctx->pc = 0x2C8184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8184u;
        // 0x2c8188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C818Cu;
label_2c818c:
    // 0x2c818c: 0x0  nop
    ctx->pc = 0x2c818cu;
    // NOP
label_2c8190:
    // 0x2c8190: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c8190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c8194:
    // 0x2c8194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8198:
    // 0x2c8198: 0x246381d8  addiu       $v1, $v1, -0x7E28
    ctx->pc = 0x2c8198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935000));
label_2c819c:
    // 0x2c819c: 0x3e00008  jr          $ra
label_2c81a0:
    if (ctx->pc == 0x2C81A0u) {
        ctx->pc = 0x2C81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C819Cu;
        // 0x2c81a0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81A4u;
        goto label_2c81a4;
    }
    ctx->pc = 0x2C819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C819Cu;
        // 0x2c81a0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C81A4u;
label_2c81a4:
    // 0x2c81a4: 0x0  nop
    ctx->pc = 0x2c81a4u;
    // NOP
label_2c81a8:
    // 0x2c81a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c81a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c81ac:
    // 0x2c81ac: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c81acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2c81b0:
    // 0x2c81b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c81b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c81b4:
    // 0x2c81b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c81b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c81b8:
    // 0x2c81b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c81b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c81bc:
    // 0x2c81bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c81bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c81c0:
    // 0x2c81c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c81c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c81c4:
    // 0x2c81c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c81c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c81c8:
    // 0x2c81c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c81c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c81cc:
    // 0x2c81cc: 0x244681d8  addiu       $a2, $v0, -0x7E28
    ctx->pc = 0x2c81ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935000));
label_2c81d0:
    // 0x2c81d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c81d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c81d4:
    // 0x2c81d4: 0xc0b3d2e  jal         func_2CF4B8
label_2c81d8:
    if (ctx->pc == 0x2C81D8u) {
        ctx->pc = 0x2C81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81D4u;
        // 0x2c81d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81DCu;
        goto label_2c81dc;
    }
    ctx->pc = 0x2C81D4u;
    SET_GPR_U32(ctx, 31, 0x2C81DCu);
    ctx->pc = 0x2C81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C81D4u;
    // 0x2c81d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C81D4u, 0x2C81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81DCu;
label_2c81dc:
    // 0x2c81dc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2c81dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_2c81e0:
    // 0x2c81e0: 0x24c681e8  addiu       $a2, $a2, -0x7E18
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935016));
label_2c81e4:
    // 0x2c81e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c81e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c81e8:
    // 0x2c81e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2c81ec:
    if (ctx->pc == 0x2C81ECu) {
        ctx->pc = 0x2C81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81E8u;
        // 0x2c81ec: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C81F0u;
        goto label_2c81f0;
    }
    ctx->pc = 0x2C81E8u;
    {
        const bool branch_taken_0x2c81e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81E8u;
        // 0x2c81ec: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81e8) {
            ctx->pc = 0x2C8264u;
            goto label_2c8264;
        }
    }
    ctx->pc = 0x2C81F0u;
label_2c81f0:
    // 0x2c81f0: 0xc0b3d2e  jal         func_2CF4B8
label_2c81f4:
    if (ctx->pc == 0x2C81F4u) {
        ctx->pc = 0x2C81F8u;
        goto label_2c81f8;
    }
    ctx->pc = 0x2C81F0u;
    SET_GPR_U32(ctx, 31, 0x2C81F8u);
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C81F0u, 0x2C81F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81F8u;
label_2c81f8:
    // 0x2c81f8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2c81fc:
    if (ctx->pc == 0x2C81FCu) {
        ctx->pc = 0x2C81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81F8u;
        // 0x2c81fc: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8200u;
        goto label_2c8200;
    }
    ctx->pc = 0x2C81F8u;
    {
        const bool branch_taken_0x2c81f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81F8u;
        // 0x2c81fc: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81f8) {
            ctx->pc = 0x2C8264u;
            goto label_2c8264;
        }
    }
    ctx->pc = 0x2C8200u;
label_2c8200:
    // 0x2c8200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8204:
    // 0x2c8204: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x2c8204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_2c8208:
    // 0x2c8208: 0xc0b3dfa  jal         func_2CF7E8
label_2c820c:
    if (ctx->pc == 0x2C820Cu) {
        ctx->pc = 0x2C820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8208u;
        // 0x2c820c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8210u;
        goto label_2c8210;
    }
    ctx->pc = 0x2C8208u;
    SET_GPR_U32(ctx, 31, 0x2C8210u);
    ctx->pc = 0x2C820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8208u;
    // 0x2c820c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C8208u, 0x2C8210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8210u;
label_2c8210:
    // 0x2c8210: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2c8214:
    if (ctx->pc == 0x2C8214u) {
        ctx->pc = 0x2C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8210u;
        // 0x2c8214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8218u;
        goto label_2c8218;
    }
    ctx->pc = 0x2C8210u;
    {
        const bool branch_taken_0x2c8210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8210u;
        // 0x2c8214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8210) {
            ctx->pc = 0x2C8264u;
            goto label_2c8264;
        }
    }
    ctx->pc = 0x2C8218u;
label_2c8218:
    // 0x2c8218: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c8218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c821c:
    // 0x2c821c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c8220:
    // 0x2c8220: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c8220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2c8224:
    // 0x2c8224: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c8224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c8228:
    // 0x2c8228: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2c8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c822c:
    // 0x2c822c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c822cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2c8230:
    // 0x2c8230: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2c8230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c8234:
    // 0x2c8234: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c8234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8238:
    // 0x2c8238: 0xc0b3e18  jal         func_2CF860
label_2c823c:
    if (ctx->pc == 0x2C823Cu) {
        ctx->pc = 0x2C823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8238u;
        // 0x2c823c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8240u;
        goto label_2c8240;
    }
    ctx->pc = 0x2C8238u;
    SET_GPR_U32(ctx, 31, 0x2C8240u);
    ctx->pc = 0x2C823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8238u;
    // 0x2c823c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C8238u, 0x2C8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8240u;
label_2c8240:
    // 0x2c8240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8244:
    // 0x2c8244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c8248:
    if (ctx->pc == 0x2C8248u) {
        ctx->pc = 0x2C8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8244u;
        // 0x2c8248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C824Cu;
        goto label_2c824c;
    }
    ctx->pc = 0x2C8244u;
    {
        const bool branch_taken_0x2c8244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8244u;
        // 0x2c8248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8244) {
            ctx->pc = 0x2C8264u;
            goto label_2c8264;
        }
    }
    ctx->pc = 0x2C824Cu;
label_2c824c:
    // 0x2c824c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2c824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2c8250:
    // 0x2c8250: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2c8250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2c8254:
    // 0x2c8254: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c8254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c8258:
    // 0x2c8258: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c8258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c825c:
    // 0x2c825c: 0xc0b3d08  jal         func_2CF420
label_2c8260:
    if (ctx->pc == 0x2C8260u) {
        ctx->pc = 0x2C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C825Cu;
        // 0x2c8260: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8264u;
        goto label_2c8264;
    }
    ctx->pc = 0x2C825Cu;
    SET_GPR_U32(ctx, 31, 0x2C8264u);
    ctx->pc = 0x2C8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C825Cu;
    // 0x2c8260: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C825Cu, 0x2C8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8264u;
label_2c8264:
    // 0x2c8264: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8268:
    // 0x2c8268: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c826c:
    // 0x2c826c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c826cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8270:
    // 0x2c8270: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c8270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8274:
    // 0x2c8274: 0x3e00008  jr          $ra
label_2c8278:
    if (ctx->pc == 0x2C8278u) {
        ctx->pc = 0x2C8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8274u;
        // 0x2c8278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C827Cu;
        goto label_2c827c;
    }
    ctx->pc = 0x2C8274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8274u;
        // 0x2c8278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C827Cu;
label_2c827c:
    // 0x2c827c: 0x0  nop
    ctx->pc = 0x2c827cu;
    // NOP
label_2c8280:
    // 0x2c8280: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c8280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c8284:
    // 0x2c8284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8288:
    // 0x2c8288: 0x24638218  addiu       $v1, $v1, -0x7DE8
    ctx->pc = 0x2c8288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935064));
label_2c828c:
    // 0x2c828c: 0x3e00008  jr          $ra
label_2c8290:
    if (ctx->pc == 0x2C8290u) {
        ctx->pc = 0x2C8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C828Cu;
        // 0x2c8290: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8294u;
        goto label_2c8294;
    }
    ctx->pc = 0x2C828Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C828Cu;
        // 0x2c8290: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C828Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8294u;
label_2c8294:
    // 0x2c8294: 0x0  nop
    ctx->pc = 0x2c8294u;
    // NOP
label_2c8298:
    // 0x2c8298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c829c:
    // 0x2c829c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c82a0:
    // 0x2c82a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c82a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c82a4:
    // 0x2c82a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c82a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c82a8:
    // 0x2c82a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c82a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c82ac:
    // 0x2c82ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c82acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c82b0:
    // 0x2c82b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c82b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c82b4:
    // 0x2c82b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c82b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c82b8:
    // 0x2c82b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c82b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c82bc:
    // 0x2c82bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c82bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c82c0:
    // 0x2c82c0: 0xc0b3dfa  jal         func_2CF7E8
label_2c82c4:
    if (ctx->pc == 0x2C82C4u) {
        ctx->pc = 0x2C82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82C0u;
        // 0x2c82c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82C8u;
        goto label_2c82c8;
    }
    ctx->pc = 0x2C82C0u;
    SET_GPR_U32(ctx, 31, 0x2C82C8u);
    ctx->pc = 0x2C82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82C0u;
    // 0x2c82c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C82C0u, 0x2C82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82C8u;
label_2c82c8:
    // 0x2c82c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2c82cc:
    if (ctx->pc == 0x2C82CCu) {
        ctx->pc = 0x2C82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82C8u;
        // 0x2c82cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82D0u;
        goto label_2c82d0;
    }
    ctx->pc = 0x2C82C8u;
    {
        const bool branch_taken_0x2c82c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82C8u;
        // 0x2c82cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82c8) {
            ctx->pc = 0x2C8300u;
            goto label_2c8300;
        }
    }
    ctx->pc = 0x2C82D0u;
label_2c82d0:
    // 0x2c82d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c82d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c82d4:
    // 0x2c82d4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c82d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c82d8:
    // 0x2c82d8: 0xc0b3e18  jal         func_2CF860
label_2c82dc:
    if (ctx->pc == 0x2C82DCu) {
        ctx->pc = 0x2C82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82D8u;
        // 0x2c82dc: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82E0u;
        goto label_2c82e0;
    }
    ctx->pc = 0x2C82D8u;
    SET_GPR_U32(ctx, 31, 0x2C82E0u);
    ctx->pc = 0x2C82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82D8u;
    // 0x2c82dc: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2C82D8u, 0x2C82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82E0u;
label_2c82e0:
    // 0x2c82e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c82e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c82e4:
    // 0x2c82e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c82e8:
    if (ctx->pc == 0x2C82E8u) {
        ctx->pc = 0x2C82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82E4u;
        // 0x2c82e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82ECu;
        goto label_2c82ec;
    }
    ctx->pc = 0x2C82E4u;
    {
        const bool branch_taken_0x2c82e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82E4u;
        // 0x2c82e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82e4) {
            ctx->pc = 0x2C8300u;
            goto label_2c8300;
        }
    }
    ctx->pc = 0x2C82ECu;
label_2c82ec:
    // 0x2c82ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c82f0:
    // 0x2c82f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c82f4:
    // 0x2c82f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2c82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2c82f8:
    // 0x2c82f8: 0xc0b3d08  jal         func_2CF420
label_2c82fc:
    if (ctx->pc == 0x2C82FCu) {
        ctx->pc = 0x2C82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82F8u;
        // 0x2c82fc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8300u;
        goto label_2c8300;
    }
    ctx->pc = 0x2C82F8u;
    SET_GPR_U32(ctx, 31, 0x2C8300u);
    ctx->pc = 0x2C82FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82F8u;
    // 0x2c82fc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C82F8u, 0x2C8300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8300u;
label_2c8300:
    // 0x2c8300: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8304:
    // 0x2c8304: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8308:
    // 0x2c8308: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c830c:
    // 0x2c830c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8310:
    // 0x2c8310: 0x3e00008  jr          $ra
label_2c8314:
    if (ctx->pc == 0x2C8314u) {
        ctx->pc = 0x2C8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8310u;
        // 0x2c8314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8318u;
        goto label_2c8318;
    }
    ctx->pc = 0x2C8310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8310u;
        // 0x2c8314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8318u;
label_2c8318:
    // 0x2c8318: 0x3e00008  jr          $ra
label_2c831c:
    if (ctx->pc == 0x2C831Cu) {
        ctx->pc = 0x2C831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8318u;
        // 0x2c831c: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8320u;
        goto label_2c8320;
    }
    ctx->pc = 0x2C8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8318u;
        // 0x2c831c: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8320u;
label_2c8320:
    // 0x2c8320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c8324:
    // 0x2c8324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c8324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8328:
    // 0x2c8328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c832c:
    // 0x2c832c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c832cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8330:
    // 0x2c8330: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8334:
    // 0x2c8334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8338:
    // 0x2c8338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c833c:
    // 0x2c833c: 0x80b3d08  j           func_2CF420
label_2c8340:
    if (ctx->pc == 0x2C8340u) {
        ctx->pc = 0x2C8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C833Cu;
        // 0x2c8340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8344u;
        goto label_2c8344;
    }
    ctx->pc = 0x2C833Cu;
    ctx->pc = 0x2C8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C833Cu;
    // 0x2c8340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    sub_002CF420_0x2cf420(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8344u;
label_2c8344:
    // 0x2c8344: 0x0  nop
    ctx->pc = 0x2c8344u;
    // NOP
label_2c8348:
    // 0x2c8348: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c834c:
    // 0x2c834c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c834cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8350:
    // 0x2c8350: 0x246382b8  addiu       $v1, $v1, -0x7D48
    ctx->pc = 0x2c8350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935224));
label_2c8354:
    // 0x2c8354: 0x3e00008  jr          $ra
label_2c8358:
    if (ctx->pc == 0x2C8358u) {
        ctx->pc = 0x2C8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8354u;
        // 0x2c8358: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C835Cu;
        goto label_2c835c;
    }
    ctx->pc = 0x2C8354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8354u;
        // 0x2c8358: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C835Cu;
label_2c835c:
    // 0x2c835c: 0x0  nop
    ctx->pc = 0x2c835cu;
    // NOP
label_2c8360:
    // 0x2c8360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8364:
    // 0x2c8364: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x2c8364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_2c8368:
    // 0x2c8368: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c8368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c836c:
    // 0x2c836c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c836cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8370:
    // 0x2c8370: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8374:
    // 0x2c8374: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c8374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8378:
    // 0x2c8378: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c837c:
    // 0x2c837c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c837cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8380:
    // 0x2c8380: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c8380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c8384:
    // 0x2c8384: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c8384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8388:
    // 0x2c8388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c8388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c838c:
    // 0x2c838c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8390:
    // 0x2c8390: 0x2c630401  sltiu       $v1, $v1, 0x401
    ctx->pc = 0x2c8390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_2c8394:
    // 0x2c8394: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2c8398:
    if (ctx->pc == 0x2C8398u) {
        ctx->pc = 0x2C8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8394u;
        // 0x2c8398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C839Cu;
        goto label_2c839c;
    }
    ctx->pc = 0x2C8394u;
    {
        const bool branch_taken_0x2c8394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8394u;
        // 0x2c8398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8394) {
            ctx->pc = 0x2C83C8u;
            goto label_2c83c8;
        }
    }
    ctx->pc = 0x2C839Cu;
label_2c839c:
    // 0x2c839c: 0xc0b3dfa  jal         func_2CF7E8
label_2c83a0:
    if (ctx->pc == 0x2C83A0u) {
        ctx->pc = 0x2C83A4u;
        goto label_2c83a4;
    }
    ctx->pc = 0x2C839Cu;
    SET_GPR_U32(ctx, 31, 0x2C83A4u);
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C839Cu, 0x2C83A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83A4u;
label_2c83a4:
    // 0x2c83a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2c83a8:
    if (ctx->pc == 0x2C83A8u) {
        ctx->pc = 0x2C83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83A4u;
        // 0x2c83a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83ACu;
        goto label_2c83ac;
    }
    ctx->pc = 0x2C83A4u;
    {
        const bool branch_taken_0x2c83a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c83a4) {
            ctx->pc = 0x2C83A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83A4u;
            // 0x2c83a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C83CCu;
            goto label_2c83cc;
        }
    }
    ctx->pc = 0x2C83ACu;
label_2c83ac:
    // 0x2c83ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c83b0:
    // 0x2c83b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c83b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c83b4:
    // 0x2c83b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c83b8:
    // 0x2c83b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c83b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c83bc:
    // 0x2c83bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c83c0:
    // 0x2c83c0: 0xc0b3d08  jal         func_2CF420
label_2c83c4:
    if (ctx->pc == 0x2C83C4u) {
        ctx->pc = 0x2C83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83C0u;
        // 0x2c83c4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83C8u;
        goto label_2c83c8;
    }
    ctx->pc = 0x2C83C0u;
    SET_GPR_U32(ctx, 31, 0x2C83C8u);
    ctx->pc = 0x2C83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C83C0u;
    // 0x2c83c4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C83C0u, 0x2C83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83C8u;
label_2c83c8:
    // 0x2c83c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c83c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c83cc:
    // 0x2c83cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c83ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c83d0:
    // 0x2c83d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c83d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c83d4:
    // 0x2c83d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c83d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c83d8:
    // 0x2c83d8: 0x3e00008  jr          $ra
label_2c83dc:
    if (ctx->pc == 0x2C83DCu) {
        ctx->pc = 0x2C83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83D8u;
        // 0x2c83dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83E0u;
        goto label_2c83e0;
    }
    ctx->pc = 0x2C83D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83D8u;
        // 0x2c83dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C83D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C83E0u;
label_2c83e0:
    // 0x2c83e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c83e4:
    // 0x2c83e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c83e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c83e8:
    // 0x2c83e8: 0x246382d8  addiu       $v1, $v1, -0x7D28
    ctx->pc = 0x2c83e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935256));
label_2c83ec:
    // 0x2c83ec: 0x3e00008  jr          $ra
label_2c83f0:
    if (ctx->pc == 0x2C83F0u) {
        ctx->pc = 0x2C83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83ECu;
        // 0x2c83f0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83F4u;
        goto label_2c83f4;
    }
    ctx->pc = 0x2C83ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83ECu;
        // 0x2c83f0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C83ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C83F4u;
label_2c83f4:
    // 0x2c83f4: 0x0  nop
    ctx->pc = 0x2c83f4u;
    // NOP
label_2c83f8:
    // 0x2c83f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c83f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c83fc:
    // 0x2c83fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c83fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8400:
    // 0x2c8400: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c8400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8404:
    // 0x2c8404: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8408:
    // 0x2c8408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c840c:
    // 0x2c840c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8410:
    // 0x2c8410: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c8410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c8414:
    // 0x2c8414: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c8414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8418:
    // 0x2c8418: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x2c8418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2c841c:
    // 0x2c841c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c8420:
    if (ctx->pc == 0x2C8420u) {
        ctx->pc = 0x2C8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C841Cu;
        // 0x2c8420: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8424u;
        goto label_2c8424;
    }
    ctx->pc = 0x2C841Cu;
    {
        const bool branch_taken_0x2c841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C841Cu;
        // 0x2c8420: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c841c) {
            ctx->pc = 0x2C8444u;
            goto label_2c8444;
        }
    }
    ctx->pc = 0x2C8424u;
label_2c8424:
    // 0x2c8424: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c8428:
    // 0x2c8428: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x2c8428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_2c842c:
    // 0x2c842c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2c8430:
    if (ctx->pc == 0x2C8430u) {
        ctx->pc = 0x2C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C842Cu;
        // 0x2c8430: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8434u;
        goto label_2c8434;
    }
    ctx->pc = 0x2C842Cu;
    {
        const bool branch_taken_0x2c842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C842Cu;
        // 0x2c8430: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c842c) {
            ctx->pc = 0x2C8494u;
            goto label_2c8494;
        }
    }
    ctx->pc = 0x2C8434u;
label_2c8434:
    // 0x2c8434: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c8434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c8438:
    // 0x2c8438: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2c8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2c843c:
    // 0x2c843c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_2c8440:
    if (ctx->pc == 0x2C8440u) {
        ctx->pc = 0x2C8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C843Cu;
        // 0x2c8440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8444u;
        goto label_2c8444;
    }
    ctx->pc = 0x2C843Cu;
    {
        const bool branch_taken_0x2c843c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c843c) {
            ctx->pc = 0x2C8440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C843Cu;
            // 0x2c8440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8450u;
            goto label_2c8450;
        }
    }
    ctx->pc = 0x2C8444u;
label_2c8444:
    // 0x2c8444: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c8448:
    if (ctx->pc == 0x2C8448u) {
        ctx->pc = 0x2C8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8444u;
        // 0x2c8448: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C844Cu;
        goto label_2c844c;
    }
    ctx->pc = 0x2C8444u;
    {
        const bool branch_taken_0x2c8444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8444u;
        // 0x2c8448: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8444) {
            ctx->pc = 0x2C8494u;
            goto label_2c8494;
        }
    }
    ctx->pc = 0x2C844Cu;
label_2c844c:
    // 0x2c844c: 0x0  nop
    ctx->pc = 0x2c844cu;
    // NOP
label_2c8450:
    // 0x2c8450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c8450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c8454:
    // 0x2c8454: 0xc0b3dfa  jal         func_2CF7E8
label_2c8458:
    if (ctx->pc == 0x2C8458u) {
        ctx->pc = 0x2C8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8454u;
        // 0x2c8458: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C845Cu;
        goto label_2c845c;
    }
    ctx->pc = 0x2C8454u;
    SET_GPR_U32(ctx, 31, 0x2C845Cu);
    ctx->pc = 0x2C8458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8454u;
    // 0x2c8458: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C8454u, 0x2C845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C845Cu;
label_2c845c:
    // 0x2c845c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8460:
    // 0x2c8460: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2c8464:
    if (ctx->pc == 0x2C8464u) {
        ctx->pc = 0x2C8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8460u;
        // 0x2c8464: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8468u;
        goto label_2c8468;
    }
    ctx->pc = 0x2C8460u;
    {
        const bool branch_taken_0x2c8460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8460u;
        // 0x2c8464: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8460) {
            ctx->pc = 0x2C8494u;
            goto label_2c8494;
        }
    }
    ctx->pc = 0x2C8468u;
label_2c8468:
    // 0x2c8468: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c8468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c846c:
    // 0x2c846c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8470:
    // 0x2c8470: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c8470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c8474:
    // 0x2c8474: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8478:
    // 0x2c8478: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c847c:
    // 0x2c847c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2c847cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2c8480:
    // 0x2c8480: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c8484:
    // 0x2c8484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8488:
    // 0x2c8488: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2c8488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2c848c:
    // 0x2c848c: 0xc0b3d08  jal         func_2CF420
label_2c8490:
    if (ctx->pc == 0x2C8490u) {
        ctx->pc = 0x2C8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C848Cu;
        // 0x2c8490: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8494u;
        goto label_2c8494;
    }
    ctx->pc = 0x2C848Cu;
    SET_GPR_U32(ctx, 31, 0x2C8494u);
    ctx->pc = 0x2C8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C848Cu;
    // 0x2c8490: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C848Cu, 0x2C8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8494u;
label_2c8494:
    // 0x2c8494: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8498:
    // 0x2c8498: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c849c:
    // 0x2c849c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c849cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c84a0:
    // 0x2c84a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c84a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c84a4:
    // 0x2c84a4: 0x3e00008  jr          $ra
label_2c84a8:
    if (ctx->pc == 0x2C84A8u) {
        ctx->pc = 0x2C84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84A4u;
        // 0x2c84a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84ACu;
        goto label_2c84ac;
    }
    ctx->pc = 0x2C84A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84A4u;
        // 0x2c84a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C84A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C84ACu;
label_2c84ac:
    // 0x2c84ac: 0x0  nop
    ctx->pc = 0x2c84acu;
    // NOP
label_2c84b0:
    // 0x2c84b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c84b4:
    // 0x2c84b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c84b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c84b8:
    // 0x2c84b8: 0x246382f8  addiu       $v1, $v1, -0x7D08
    ctx->pc = 0x2c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935288));
label_2c84bc:
    // 0x2c84bc: 0x3e00008  jr          $ra
label_2c84c0:
    if (ctx->pc == 0x2C84C0u) {
        ctx->pc = 0x2C84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84BCu;
        // 0x2c84c0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84C4u;
        goto label_2c84c4;
    }
    ctx->pc = 0x2C84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84BCu;
        // 0x2c84c0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C84BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C84C4u;
label_2c84c4:
    // 0x2c84c4: 0x0  nop
    ctx->pc = 0x2c84c4u;
    // NOP
label_2c84c8:
    // 0x2c84c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c84cc:
    // 0x2c84cc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c84d0:
    // 0x2c84d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c84d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c84d4:
    // 0x2c84d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c84d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c84d8:
    // 0x2c84d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c84d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c84dc:
    // 0x2c84dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c84dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c84e0:
    // 0x2c84e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c84e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c84e4:
    // 0x2c84e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c84e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c84e8:
    // 0x2c84e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c84ec:
    // 0x2c84ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c84ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c84f0:
    // 0x2c84f0: 0x2402021d  addiu       $v0, $zero, 0x21D
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
label_2c84f4:
    // 0x2c84f4: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x2c84f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c84f8:
    // 0x2c84f8: 0x1643000b  bne         $s2, $v1, . + 4 + (0xB << 2)
label_2c84fc:
    if (ctx->pc == 0x2C84FCu) {
        ctx->pc = 0x2C84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84F8u;
        // 0x2c84fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8500u;
        goto label_2c8500;
    }
    ctx->pc = 0x2C84F8u;
    {
        const bool branch_taken_0x2c84f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84F8u;
        // 0x2c84fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84f8) {
            ctx->pc = 0x2C8528u;
            goto label_2c8528;
        }
    }
    ctx->pc = 0x2C8500u;
label_2c8500:
    // 0x2c8500: 0xc0b3dfa  jal         func_2CF7E8
label_2c8504:
    if (ctx->pc == 0x2C8504u) {
        ctx->pc = 0x2C8508u;
        goto label_2c8508;
    }
    ctx->pc = 0x2C8500u;
    SET_GPR_U32(ctx, 31, 0x2C8508u);
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2C8500u, 0x2C8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8508u;
label_2c8508:
    // 0x2c8508: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2c850c:
    if (ctx->pc == 0x2C850Cu) {
        ctx->pc = 0x2C850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8508u;
        // 0x2c850c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8510u;
        goto label_2c8510;
    }
    ctx->pc = 0x2C8508u;
    {
        const bool branch_taken_0x2c8508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8508) {
            ctx->pc = 0x2C850Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8508u;
            // 0x2c850c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C852Cu;
            goto label_2c852c;
        }
    }
    ctx->pc = 0x2C8510u;
label_2c8510:
    // 0x2c8510: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c8510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8514:
    // 0x2c8514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8518:
    // 0x2c8518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c8518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c851c:
    // 0x2c851c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2c851cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_2c8520:
    // 0x2c8520: 0xc0b3d08  jal         func_2CF420
label_2c8524:
    if (ctx->pc == 0x2C8524u) {
        ctx->pc = 0x2C8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8520u;
        // 0x2c8524: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8528u;
        goto label_2c8528;
    }
    ctx->pc = 0x2C8520u;
    SET_GPR_U32(ctx, 31, 0x2C8528u);
    ctx->pc = 0x2C8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8520u;
    // 0x2c8524: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2C8520u, 0x2C8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8528u;
label_2c8528:
    // 0x2c8528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c852c:
    // 0x2c852c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c852cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8530:
    // 0x2c8530: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8534:
    // 0x2c8534: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c8534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8538:
    // 0x2c8538: 0x3e00008  jr          $ra
label_2c853c:
    if (ctx->pc == 0x2C853Cu) {
        ctx->pc = 0x2C853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8538u;
        // 0x2c853c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8540u;
        goto label_2c8540;
    }
    ctx->pc = 0x2C8538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8538u;
        // 0x2c853c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8540u;
label_2c8540:
    // 0x2c8540: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c8540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c8544:
    // 0x2c8544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8548:
    // 0x2c8548: 0x24638318  addiu       $v1, $v1, -0x7CE8
    ctx->pc = 0x2c8548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935320));
label_2c854c:
    // 0x2c854c: 0x3e00008  jr          $ra
label_2c8550:
    if (ctx->pc == 0x2C8550u) {
        ctx->pc = 0x2C8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C854Cu;
        // 0x2c8550: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8554u;
        goto label_2c8554;
    }
    ctx->pc = 0x2C854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C854Cu;
        // 0x2c8550: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8554u;
label_2c8554:
    // 0x2c8554: 0x0  nop
    ctx->pc = 0x2c8554u;
    // NOP
label_2c8558:
    // 0x2c8558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c855c:
    // 0x2c855c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8560:
    // 0x2c8560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c8564:
    // 0x2c8564: 0xc0b1dee  jal         func_2C77B8
label_2c8568:
    if (ctx->pc == 0x2C8568u) {
        ctx->pc = 0x2C8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8564u;
        // 0x2c8568: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C856Cu;
        goto label_2c856c;
    }
    ctx->pc = 0x2C8564u;
    SET_GPR_U32(ctx, 31, 0x2C856Cu);
    ctx->pc = 0x2C8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8564u;
    // 0x2c8568: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C77B8u;
    goto label_2c77b8;
    ctx->pc = 0x2C856Cu;
label_2c856c:
    // 0x2c856c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8570:
    // 0x2c8570: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_2c8574:
    if (ctx->pc == 0x2C8574u) {
        ctx->pc = 0x2C8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8570u;
        // 0x2c8574: 0x240300f1  addiu       $v1, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8578u;
        goto label_2c8578;
    }
    ctx->pc = 0x2C8570u;
    {
        const bool branch_taken_0x2c8570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8570u;
        // 0x2c8574: 0x240300f1  addiu       $v1, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8570) {
            ctx->pc = 0x2C857Cu;
            goto label_2c857c;
        }
    }
    ctx->pc = 0x2C8578u;
label_2c8578:
    // 0x2c8578: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2c8578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2c857c:
    // 0x2c857c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8580:
    // 0x2c8580: 0x3e00008  jr          $ra
label_2c8584:
    if (ctx->pc == 0x2C8584u) {
        ctx->pc = 0x2C8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8580u;
        // 0x2c8584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8588u;
        goto label_2c8588;
    }
    ctx->pc = 0x2C8580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8580u;
        // 0x2c8584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8588u;
label_2c8588:
    // 0x2c8588: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c8588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c858c:
    // 0x2c858c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c858cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8590:
    // 0x2c8590: 0x24638348  addiu       $v1, $v1, -0x7CB8
    ctx->pc = 0x2c8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935368));
label_2c8594:
    // 0x2c8594: 0x3e00008  jr          $ra
label_2c8598:
    if (ctx->pc == 0x2C8598u) {
        ctx->pc = 0x2C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8594u;
        // 0x2c8598: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C859Cu;
        goto label_2c859c;
    }
    ctx->pc = 0x2C8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8594u;
        // 0x2c8598: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C859Cu;
label_2c859c:
    // 0x2c859c: 0x0  nop
    ctx->pc = 0x2c859cu;
    // NOP
label_2c85a0:
    // 0x2c85a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c85a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c85a4:
    // 0x2c85a4: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x2c85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2c85a8:
    // 0x2c85a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c85a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c85ac:
    // 0x2c85ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c85acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c85b0:
    // 0x2c85b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c85b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c85b4:
    // 0x2c85b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c85b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c85b8:
    // 0x2c85b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c85b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c85bc:
    // 0x2c85bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c85bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c85c0:
    // 0x2c85c0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2c85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2c85c4:
    // 0x2c85c4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2c85c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2c85c8:
    // 0x2c85c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2c85cc:
    if (ctx->pc == 0x2C85CCu) {
        ctx->pc = 0x2C85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C8u;
        // 0x2c85cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85D0u;
        goto label_2c85d0;
    }
    ctx->pc = 0x2C85C8u;
    {
        const bool branch_taken_0x2c85c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C8u;
        // 0x2c85cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85c8) {
            ctx->pc = 0x2C85F8u;
            goto label_2c85f8;
        }
    }
    ctx->pc = 0x2C85D0u;
label_2c85d0:
    // 0x2c85d0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2c85d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_2c85d4:
    // 0x2c85d4: 0xc0b3d2e  jal         func_2CF4B8
label_2c85d8:
    if (ctx->pc == 0x2C85D8u) {
        ctx->pc = 0x2C85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85D4u;
        // 0x2c85d8: 0x24c68358  addiu       $a2, $a2, -0x7CA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85DCu;
        goto label_2c85dc;
    }
    ctx->pc = 0x2C85D4u;
    SET_GPR_U32(ctx, 31, 0x2C85DCu);
    ctx->pc = 0x2C85D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85D4u;
    // 0x2c85d8: 0x24c68358  addiu       $a2, $a2, -0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2C85D4u, 0x2C85DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85DCu;
label_2c85dc:
    // 0x2c85dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c85e0:
    if (ctx->pc == 0x2C85E0u) {
        ctx->pc = 0x2C85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85DCu;
        // 0x2c85e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85E4u;
        goto label_2c85e4;
    }
    ctx->pc = 0x2C85DCu;
    {
        const bool branch_taken_0x2c85dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85DCu;
        // 0x2c85e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85dc) {
            ctx->pc = 0x2C85F8u;
            goto label_2c85f8;
        }
    }
    ctx->pc = 0x2C85E4u;
label_2c85e4:
    // 0x2c85e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c85e8:
    // 0x2c85e8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c85ec:
    // 0x2c85ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c85f0:
    // 0x2c85f0: 0x40f809  jalr        $v0
label_2c85f4:
    if (ctx->pc == 0x2C85F4u) {
        ctx->pc = 0x2C85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85F0u;
        // 0x2c85f4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85F8u;
        goto label_2c85f8;
    }
    ctx->pc = 0x2C85F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C85F8u);
        ctx->pc = 0x2C85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85F0u;
        // 0x2c85f4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C85F0u, 0x2C85F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C85F8u;
label_2c85f8:
    // 0x2c85f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c85f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c85fc:
    // 0x2c85fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c85fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8600:
    // 0x2c8600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8604:
    // 0x2c8604: 0x3e00008  jr          $ra
label_2c8608:
    if (ctx->pc == 0x2C8608u) {
        ctx->pc = 0x2C8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8604u;
        // 0x2c8608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C860Cu;
        goto label_2c860c;
    }
    ctx->pc = 0x2C8604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8604u;
        // 0x2c8608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C860Cu;
label_2c860c:
    // 0x2c860c: 0x0  nop
    ctx->pc = 0x2c860cu;
    // NOP
    if (ctx->pc == 0x2c860cu) { ctx->pc = 0x2c8610u; }
}
