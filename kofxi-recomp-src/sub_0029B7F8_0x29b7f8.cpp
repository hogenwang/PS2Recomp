#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B7F8
// Address: 0x29b7f8 - 0x29c320
void sub_0029B7F8_0x29b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B7F8_0x29b7f8");
#endif

    switch (ctx->pc) {
        case 0x29b7f8u: goto label_29b7f8;
        case 0x29b7fcu: goto label_29b7fc;
        case 0x29b800u: goto label_29b800;
        case 0x29b804u: goto label_29b804;
        case 0x29b808u: goto label_29b808;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b810u: goto label_29b810;
        case 0x29b814u: goto label_29b814;
        case 0x29b818u: goto label_29b818;
        case 0x29b81cu: goto label_29b81c;
        case 0x29b820u: goto label_29b820;
        case 0x29b824u: goto label_29b824;
        case 0x29b828u: goto label_29b828;
        case 0x29b82cu: goto label_29b82c;
        case 0x29b830u: goto label_29b830;
        case 0x29b834u: goto label_29b834;
        case 0x29b838u: goto label_29b838;
        case 0x29b83cu: goto label_29b83c;
        case 0x29b840u: goto label_29b840;
        case 0x29b844u: goto label_29b844;
        case 0x29b848u: goto label_29b848;
        case 0x29b84cu: goto label_29b84c;
        case 0x29b850u: goto label_29b850;
        case 0x29b854u: goto label_29b854;
        case 0x29b858u: goto label_29b858;
        case 0x29b85cu: goto label_29b85c;
        case 0x29b860u: goto label_29b860;
        case 0x29b864u: goto label_29b864;
        case 0x29b868u: goto label_29b868;
        case 0x29b86cu: goto label_29b86c;
        case 0x29b870u: goto label_29b870;
        case 0x29b874u: goto label_29b874;
        case 0x29b878u: goto label_29b878;
        case 0x29b87cu: goto label_29b87c;
        case 0x29b880u: goto label_29b880;
        case 0x29b884u: goto label_29b884;
        case 0x29b888u: goto label_29b888;
        case 0x29b88cu: goto label_29b88c;
        case 0x29b890u: goto label_29b890;
        case 0x29b894u: goto label_29b894;
        case 0x29b898u: goto label_29b898;
        case 0x29b89cu: goto label_29b89c;
        case 0x29b8a0u: goto label_29b8a0;
        case 0x29b8a4u: goto label_29b8a4;
        case 0x29b8a8u: goto label_29b8a8;
        case 0x29b8acu: goto label_29b8ac;
        case 0x29b8b0u: goto label_29b8b0;
        case 0x29b8b4u: goto label_29b8b4;
        case 0x29b8b8u: goto label_29b8b8;
        case 0x29b8bcu: goto label_29b8bc;
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8c4u: goto label_29b8c4;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8ccu: goto label_29b8cc;
        case 0x29b8d0u: goto label_29b8d0;
        case 0x29b8d4u: goto label_29b8d4;
        case 0x29b8d8u: goto label_29b8d8;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8e0u: goto label_29b8e0;
        case 0x29b8e4u: goto label_29b8e4;
        case 0x29b8e8u: goto label_29b8e8;
        case 0x29b8ecu: goto label_29b8ec;
        case 0x29b8f0u: goto label_29b8f0;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b8f8u: goto label_29b8f8;
        case 0x29b8fcu: goto label_29b8fc;
        case 0x29b900u: goto label_29b900;
        case 0x29b904u: goto label_29b904;
        case 0x29b908u: goto label_29b908;
        case 0x29b90cu: goto label_29b90c;
        case 0x29b910u: goto label_29b910;
        case 0x29b914u: goto label_29b914;
        case 0x29b918u: goto label_29b918;
        case 0x29b91cu: goto label_29b91c;
        case 0x29b920u: goto label_29b920;
        case 0x29b924u: goto label_29b924;
        case 0x29b928u: goto label_29b928;
        case 0x29b92cu: goto label_29b92c;
        case 0x29b930u: goto label_29b930;
        case 0x29b934u: goto label_29b934;
        case 0x29b938u: goto label_29b938;
        case 0x29b93cu: goto label_29b93c;
        case 0x29b940u: goto label_29b940;
        case 0x29b944u: goto label_29b944;
        case 0x29b948u: goto label_29b948;
        case 0x29b94cu: goto label_29b94c;
        case 0x29b950u: goto label_29b950;
        case 0x29b954u: goto label_29b954;
        case 0x29b958u: goto label_29b958;
        case 0x29b95cu: goto label_29b95c;
        case 0x29b960u: goto label_29b960;
        case 0x29b964u: goto label_29b964;
        case 0x29b968u: goto label_29b968;
        case 0x29b96cu: goto label_29b96c;
        case 0x29b970u: goto label_29b970;
        case 0x29b974u: goto label_29b974;
        case 0x29b978u: goto label_29b978;
        case 0x29b97cu: goto label_29b97c;
        case 0x29b980u: goto label_29b980;
        case 0x29b984u: goto label_29b984;
        case 0x29b988u: goto label_29b988;
        case 0x29b98cu: goto label_29b98c;
        case 0x29b990u: goto label_29b990;
        case 0x29b994u: goto label_29b994;
        case 0x29b998u: goto label_29b998;
        case 0x29b99cu: goto label_29b99c;
        case 0x29b9a0u: goto label_29b9a0;
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9a8u: goto label_29b9a8;
        case 0x29b9acu: goto label_29b9ac;
        case 0x29b9b0u: goto label_29b9b0;
        case 0x29b9b4u: goto label_29b9b4;
        case 0x29b9b8u: goto label_29b9b8;
        case 0x29b9bcu: goto label_29b9bc;
        case 0x29b9c0u: goto label_29b9c0;
        case 0x29b9c4u: goto label_29b9c4;
        case 0x29b9c8u: goto label_29b9c8;
        case 0x29b9ccu: goto label_29b9cc;
        case 0x29b9d0u: goto label_29b9d0;
        case 0x29b9d4u: goto label_29b9d4;
        case 0x29b9d8u: goto label_29b9d8;
        case 0x29b9dcu: goto label_29b9dc;
        case 0x29b9e0u: goto label_29b9e0;
        case 0x29b9e4u: goto label_29b9e4;
        case 0x29b9e8u: goto label_29b9e8;
        case 0x29b9ecu: goto label_29b9ec;
        case 0x29b9f0u: goto label_29b9f0;
        case 0x29b9f4u: goto label_29b9f4;
        case 0x29b9f8u: goto label_29b9f8;
        case 0x29b9fcu: goto label_29b9fc;
        case 0x29ba00u: goto label_29ba00;
        case 0x29ba04u: goto label_29ba04;
        case 0x29ba08u: goto label_29ba08;
        case 0x29ba0cu: goto label_29ba0c;
        case 0x29ba10u: goto label_29ba10;
        case 0x29ba14u: goto label_29ba14;
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba1cu: goto label_29ba1c;
        case 0x29ba20u: goto label_29ba20;
        case 0x29ba24u: goto label_29ba24;
        case 0x29ba28u: goto label_29ba28;
        case 0x29ba2cu: goto label_29ba2c;
        case 0x29ba30u: goto label_29ba30;
        case 0x29ba34u: goto label_29ba34;
        case 0x29ba38u: goto label_29ba38;
        case 0x29ba3cu: goto label_29ba3c;
        case 0x29ba40u: goto label_29ba40;
        case 0x29ba44u: goto label_29ba44;
        case 0x29ba48u: goto label_29ba48;
        case 0x29ba4cu: goto label_29ba4c;
        case 0x29ba50u: goto label_29ba50;
        case 0x29ba54u: goto label_29ba54;
        case 0x29ba58u: goto label_29ba58;
        case 0x29ba5cu: goto label_29ba5c;
        case 0x29ba60u: goto label_29ba60;
        case 0x29ba64u: goto label_29ba64;
        case 0x29ba68u: goto label_29ba68;
        case 0x29ba6cu: goto label_29ba6c;
        case 0x29ba70u: goto label_29ba70;
        case 0x29ba74u: goto label_29ba74;
        case 0x29ba78u: goto label_29ba78;
        case 0x29ba7cu: goto label_29ba7c;
        case 0x29ba80u: goto label_29ba80;
        case 0x29ba84u: goto label_29ba84;
        case 0x29ba88u: goto label_29ba88;
        case 0x29ba8cu: goto label_29ba8c;
        case 0x29ba90u: goto label_29ba90;
        case 0x29ba94u: goto label_29ba94;
        case 0x29ba98u: goto label_29ba98;
        case 0x29ba9cu: goto label_29ba9c;
        case 0x29baa0u: goto label_29baa0;
        case 0x29baa4u: goto label_29baa4;
        case 0x29baa8u: goto label_29baa8;
        case 0x29baacu: goto label_29baac;
        case 0x29bab0u: goto label_29bab0;
        case 0x29bab4u: goto label_29bab4;
        case 0x29bab8u: goto label_29bab8;
        case 0x29babcu: goto label_29babc;
        case 0x29bac0u: goto label_29bac0;
        case 0x29bac4u: goto label_29bac4;
        case 0x29bac8u: goto label_29bac8;
        case 0x29baccu: goto label_29bacc;
        case 0x29bad0u: goto label_29bad0;
        case 0x29bad4u: goto label_29bad4;
        case 0x29bad8u: goto label_29bad8;
        case 0x29badcu: goto label_29badc;
        case 0x29bae0u: goto label_29bae0;
        case 0x29bae4u: goto label_29bae4;
        case 0x29bae8u: goto label_29bae8;
        case 0x29baecu: goto label_29baec;
        case 0x29baf0u: goto label_29baf0;
        case 0x29baf4u: goto label_29baf4;
        case 0x29baf8u: goto label_29baf8;
        case 0x29bafcu: goto label_29bafc;
        case 0x29bb00u: goto label_29bb00;
        case 0x29bb04u: goto label_29bb04;
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb0cu: goto label_29bb0c;
        case 0x29bb10u: goto label_29bb10;
        case 0x29bb14u: goto label_29bb14;
        case 0x29bb18u: goto label_29bb18;
        case 0x29bb1cu: goto label_29bb1c;
        case 0x29bb20u: goto label_29bb20;
        case 0x29bb24u: goto label_29bb24;
        case 0x29bb28u: goto label_29bb28;
        case 0x29bb2cu: goto label_29bb2c;
        case 0x29bb30u: goto label_29bb30;
        case 0x29bb34u: goto label_29bb34;
        case 0x29bb38u: goto label_29bb38;
        case 0x29bb3cu: goto label_29bb3c;
        case 0x29bb40u: goto label_29bb40;
        case 0x29bb44u: goto label_29bb44;
        case 0x29bb48u: goto label_29bb48;
        case 0x29bb4cu: goto label_29bb4c;
        case 0x29bb50u: goto label_29bb50;
        case 0x29bb54u: goto label_29bb54;
        case 0x29bb58u: goto label_29bb58;
        case 0x29bb5cu: goto label_29bb5c;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bb64u: goto label_29bb64;
        case 0x29bb68u: goto label_29bb68;
        case 0x29bb6cu: goto label_29bb6c;
        case 0x29bb70u: goto label_29bb70;
        case 0x29bb74u: goto label_29bb74;
        case 0x29bb78u: goto label_29bb78;
        case 0x29bb7cu: goto label_29bb7c;
        case 0x29bb80u: goto label_29bb80;
        case 0x29bb84u: goto label_29bb84;
        case 0x29bb88u: goto label_29bb88;
        case 0x29bb8cu: goto label_29bb8c;
        case 0x29bb90u: goto label_29bb90;
        case 0x29bb94u: goto label_29bb94;
        case 0x29bb98u: goto label_29bb98;
        case 0x29bb9cu: goto label_29bb9c;
        case 0x29bba0u: goto label_29bba0;
        case 0x29bba4u: goto label_29bba4;
        case 0x29bba8u: goto label_29bba8;
        case 0x29bbacu: goto label_29bbac;
        case 0x29bbb0u: goto label_29bbb0;
        case 0x29bbb4u: goto label_29bbb4;
        case 0x29bbb8u: goto label_29bbb8;
        case 0x29bbbcu: goto label_29bbbc;
        case 0x29bbc0u: goto label_29bbc0;
        case 0x29bbc4u: goto label_29bbc4;
        case 0x29bbc8u: goto label_29bbc8;
        case 0x29bbccu: goto label_29bbcc;
        case 0x29bbd0u: goto label_29bbd0;
        case 0x29bbd4u: goto label_29bbd4;
        case 0x29bbd8u: goto label_29bbd8;
        case 0x29bbdcu: goto label_29bbdc;
        case 0x29bbe0u: goto label_29bbe0;
        case 0x29bbe4u: goto label_29bbe4;
        case 0x29bbe8u: goto label_29bbe8;
        case 0x29bbecu: goto label_29bbec;
        case 0x29bbf0u: goto label_29bbf0;
        case 0x29bbf4u: goto label_29bbf4;
        case 0x29bbf8u: goto label_29bbf8;
        case 0x29bbfcu: goto label_29bbfc;
        case 0x29bc00u: goto label_29bc00;
        case 0x29bc04u: goto label_29bc04;
        case 0x29bc08u: goto label_29bc08;
        case 0x29bc0cu: goto label_29bc0c;
        case 0x29bc10u: goto label_29bc10;
        case 0x29bc14u: goto label_29bc14;
        case 0x29bc18u: goto label_29bc18;
        case 0x29bc1cu: goto label_29bc1c;
        case 0x29bc20u: goto label_29bc20;
        case 0x29bc24u: goto label_29bc24;
        case 0x29bc28u: goto label_29bc28;
        case 0x29bc2cu: goto label_29bc2c;
        case 0x29bc30u: goto label_29bc30;
        case 0x29bc34u: goto label_29bc34;
        case 0x29bc38u: goto label_29bc38;
        case 0x29bc3cu: goto label_29bc3c;
        case 0x29bc40u: goto label_29bc40;
        case 0x29bc44u: goto label_29bc44;
        case 0x29bc48u: goto label_29bc48;
        case 0x29bc4cu: goto label_29bc4c;
        case 0x29bc50u: goto label_29bc50;
        case 0x29bc54u: goto label_29bc54;
        case 0x29bc58u: goto label_29bc58;
        case 0x29bc5cu: goto label_29bc5c;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc64u: goto label_29bc64;
        case 0x29bc68u: goto label_29bc68;
        case 0x29bc6cu: goto label_29bc6c;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc74u: goto label_29bc74;
        case 0x29bc78u: goto label_29bc78;
        case 0x29bc7cu: goto label_29bc7c;
        case 0x29bc80u: goto label_29bc80;
        case 0x29bc84u: goto label_29bc84;
        case 0x29bc88u: goto label_29bc88;
        case 0x29bc8cu: goto label_29bc8c;
        case 0x29bc90u: goto label_29bc90;
        case 0x29bc94u: goto label_29bc94;
        case 0x29bc98u: goto label_29bc98;
        case 0x29bc9cu: goto label_29bc9c;
        case 0x29bca0u: goto label_29bca0;
        case 0x29bca4u: goto label_29bca4;
        case 0x29bca8u: goto label_29bca8;
        case 0x29bcacu: goto label_29bcac;
        case 0x29bcb0u: goto label_29bcb0;
        case 0x29bcb4u: goto label_29bcb4;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bcbcu: goto label_29bcbc;
        case 0x29bcc0u: goto label_29bcc0;
        case 0x29bcc4u: goto label_29bcc4;
        case 0x29bcc8u: goto label_29bcc8;
        case 0x29bcccu: goto label_29bccc;
        case 0x29bcd0u: goto label_29bcd0;
        case 0x29bcd4u: goto label_29bcd4;
        case 0x29bcd8u: goto label_29bcd8;
        case 0x29bcdcu: goto label_29bcdc;
        case 0x29bce0u: goto label_29bce0;
        case 0x29bce4u: goto label_29bce4;
        case 0x29bce8u: goto label_29bce8;
        case 0x29bcecu: goto label_29bcec;
        case 0x29bcf0u: goto label_29bcf0;
        case 0x29bcf4u: goto label_29bcf4;
        case 0x29bcf8u: goto label_29bcf8;
        case 0x29bcfcu: goto label_29bcfc;
        case 0x29bd00u: goto label_29bd00;
        case 0x29bd04u: goto label_29bd04;
        case 0x29bd08u: goto label_29bd08;
        case 0x29bd0cu: goto label_29bd0c;
        case 0x29bd10u: goto label_29bd10;
        case 0x29bd14u: goto label_29bd14;
        case 0x29bd18u: goto label_29bd18;
        case 0x29bd1cu: goto label_29bd1c;
        case 0x29bd20u: goto label_29bd20;
        case 0x29bd24u: goto label_29bd24;
        case 0x29bd28u: goto label_29bd28;
        case 0x29bd2cu: goto label_29bd2c;
        case 0x29bd30u: goto label_29bd30;
        case 0x29bd34u: goto label_29bd34;
        case 0x29bd38u: goto label_29bd38;
        case 0x29bd3cu: goto label_29bd3c;
        case 0x29bd40u: goto label_29bd40;
        case 0x29bd44u: goto label_29bd44;
        case 0x29bd48u: goto label_29bd48;
        case 0x29bd4cu: goto label_29bd4c;
        case 0x29bd50u: goto label_29bd50;
        case 0x29bd54u: goto label_29bd54;
        case 0x29bd58u: goto label_29bd58;
        case 0x29bd5cu: goto label_29bd5c;
        case 0x29bd60u: goto label_29bd60;
        case 0x29bd64u: goto label_29bd64;
        case 0x29bd68u: goto label_29bd68;
        case 0x29bd6cu: goto label_29bd6c;
        case 0x29bd70u: goto label_29bd70;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd78u: goto label_29bd78;
        case 0x29bd7cu: goto label_29bd7c;
        case 0x29bd80u: goto label_29bd80;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bd88u: goto label_29bd88;
        case 0x29bd8cu: goto label_29bd8c;
        case 0x29bd90u: goto label_29bd90;
        case 0x29bd94u: goto label_29bd94;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bd9cu: goto label_29bd9c;
        case 0x29bda0u: goto label_29bda0;
        case 0x29bda4u: goto label_29bda4;
        case 0x29bda8u: goto label_29bda8;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdb0u: goto label_29bdb0;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdb8u: goto label_29bdb8;
        case 0x29bdbcu: goto label_29bdbc;
        case 0x29bdc0u: goto label_29bdc0;
        case 0x29bdc4u: goto label_29bdc4;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29bdccu: goto label_29bdcc;
        case 0x29bdd0u: goto label_29bdd0;
        case 0x29bdd4u: goto label_29bdd4;
        case 0x29bdd8u: goto label_29bdd8;
        case 0x29bddcu: goto label_29bddc;
        case 0x29bde0u: goto label_29bde0;
        case 0x29bde4u: goto label_29bde4;
        case 0x29bde8u: goto label_29bde8;
        case 0x29bdecu: goto label_29bdec;
        case 0x29bdf0u: goto label_29bdf0;
        case 0x29bdf4u: goto label_29bdf4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29bdfcu: goto label_29bdfc;
        case 0x29be00u: goto label_29be00;
        case 0x29be04u: goto label_29be04;
        case 0x29be08u: goto label_29be08;
        case 0x29be0cu: goto label_29be0c;
        case 0x29be10u: goto label_29be10;
        case 0x29be14u: goto label_29be14;
        case 0x29be18u: goto label_29be18;
        case 0x29be1cu: goto label_29be1c;
        case 0x29be20u: goto label_29be20;
        case 0x29be24u: goto label_29be24;
        case 0x29be28u: goto label_29be28;
        case 0x29be2cu: goto label_29be2c;
        case 0x29be30u: goto label_29be30;
        case 0x29be34u: goto label_29be34;
        case 0x29be38u: goto label_29be38;
        case 0x29be3cu: goto label_29be3c;
        case 0x29be40u: goto label_29be40;
        case 0x29be44u: goto label_29be44;
        case 0x29be48u: goto label_29be48;
        case 0x29be4cu: goto label_29be4c;
        case 0x29be50u: goto label_29be50;
        case 0x29be54u: goto label_29be54;
        case 0x29be58u: goto label_29be58;
        case 0x29be5cu: goto label_29be5c;
        case 0x29be60u: goto label_29be60;
        case 0x29be64u: goto label_29be64;
        case 0x29be68u: goto label_29be68;
        case 0x29be6cu: goto label_29be6c;
        case 0x29be70u: goto label_29be70;
        case 0x29be74u: goto label_29be74;
        case 0x29be78u: goto label_29be78;
        case 0x29be7cu: goto label_29be7c;
        case 0x29be80u: goto label_29be80;
        case 0x29be84u: goto label_29be84;
        case 0x29be88u: goto label_29be88;
        case 0x29be8cu: goto label_29be8c;
        case 0x29be90u: goto label_29be90;
        case 0x29be94u: goto label_29be94;
        case 0x29be98u: goto label_29be98;
        case 0x29be9cu: goto label_29be9c;
        case 0x29bea0u: goto label_29bea0;
        case 0x29bea4u: goto label_29bea4;
        case 0x29bea8u: goto label_29bea8;
        case 0x29beacu: goto label_29beac;
        case 0x29beb0u: goto label_29beb0;
        case 0x29beb4u: goto label_29beb4;
        case 0x29beb8u: goto label_29beb8;
        case 0x29bebcu: goto label_29bebc;
        case 0x29bec0u: goto label_29bec0;
        case 0x29bec4u: goto label_29bec4;
        case 0x29bec8u: goto label_29bec8;
        case 0x29beccu: goto label_29becc;
        case 0x29bed0u: goto label_29bed0;
        case 0x29bed4u: goto label_29bed4;
        case 0x29bed8u: goto label_29bed8;
        case 0x29bedcu: goto label_29bedc;
        case 0x29bee0u: goto label_29bee0;
        case 0x29bee4u: goto label_29bee4;
        case 0x29bee8u: goto label_29bee8;
        case 0x29beecu: goto label_29beec;
        case 0x29bef0u: goto label_29bef0;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bef8u: goto label_29bef8;
        case 0x29befcu: goto label_29befc;
        case 0x29bf00u: goto label_29bf00;
        case 0x29bf04u: goto label_29bf04;
        case 0x29bf08u: goto label_29bf08;
        case 0x29bf0cu: goto label_29bf0c;
        case 0x29bf10u: goto label_29bf10;
        case 0x29bf14u: goto label_29bf14;
        case 0x29bf18u: goto label_29bf18;
        case 0x29bf1cu: goto label_29bf1c;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf24u: goto label_29bf24;
        case 0x29bf28u: goto label_29bf28;
        case 0x29bf2cu: goto label_29bf2c;
        case 0x29bf30u: goto label_29bf30;
        case 0x29bf34u: goto label_29bf34;
        case 0x29bf38u: goto label_29bf38;
        case 0x29bf3cu: goto label_29bf3c;
        case 0x29bf40u: goto label_29bf40;
        case 0x29bf44u: goto label_29bf44;
        case 0x29bf48u: goto label_29bf48;
        case 0x29bf4cu: goto label_29bf4c;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf54u: goto label_29bf54;
        case 0x29bf58u: goto label_29bf58;
        case 0x29bf5cu: goto label_29bf5c;
        case 0x29bf60u: goto label_29bf60;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bf68u: goto label_29bf68;
        case 0x29bf6cu: goto label_29bf6c;
        case 0x29bf70u: goto label_29bf70;
        case 0x29bf74u: goto label_29bf74;
        case 0x29bf78u: goto label_29bf78;
        case 0x29bf7cu: goto label_29bf7c;
        case 0x29bf80u: goto label_29bf80;
        case 0x29bf84u: goto label_29bf84;
        case 0x29bf88u: goto label_29bf88;
        case 0x29bf8cu: goto label_29bf8c;
        case 0x29bf90u: goto label_29bf90;
        case 0x29bf94u: goto label_29bf94;
        case 0x29bf98u: goto label_29bf98;
        case 0x29bf9cu: goto label_29bf9c;
        case 0x29bfa0u: goto label_29bfa0;
        case 0x29bfa4u: goto label_29bfa4;
        case 0x29bfa8u: goto label_29bfa8;
        case 0x29bfacu: goto label_29bfac;
        case 0x29bfb0u: goto label_29bfb0;
        case 0x29bfb4u: goto label_29bfb4;
        case 0x29bfb8u: goto label_29bfb8;
        case 0x29bfbcu: goto label_29bfbc;
        case 0x29bfc0u: goto label_29bfc0;
        case 0x29bfc4u: goto label_29bfc4;
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29bfccu: goto label_29bfcc;
        case 0x29bfd0u: goto label_29bfd0;
        case 0x29bfd4u: goto label_29bfd4;
        case 0x29bfd8u: goto label_29bfd8;
        case 0x29bfdcu: goto label_29bfdc;
        case 0x29bfe0u: goto label_29bfe0;
        case 0x29bfe4u: goto label_29bfe4;
        case 0x29bfe8u: goto label_29bfe8;
        case 0x29bfecu: goto label_29bfec;
        case 0x29bff0u: goto label_29bff0;
        case 0x29bff4u: goto label_29bff4;
        case 0x29bff8u: goto label_29bff8;
        case 0x29bffcu: goto label_29bffc;
        case 0x29c000u: goto label_29c000;
        case 0x29c004u: goto label_29c004;
        case 0x29c008u: goto label_29c008;
        case 0x29c00cu: goto label_29c00c;
        case 0x29c010u: goto label_29c010;
        case 0x29c014u: goto label_29c014;
        case 0x29c018u: goto label_29c018;
        case 0x29c01cu: goto label_29c01c;
        case 0x29c020u: goto label_29c020;
        case 0x29c024u: goto label_29c024;
        case 0x29c028u: goto label_29c028;
        case 0x29c02cu: goto label_29c02c;
        case 0x29c030u: goto label_29c030;
        case 0x29c034u: goto label_29c034;
        case 0x29c038u: goto label_29c038;
        case 0x29c03cu: goto label_29c03c;
        case 0x29c040u: goto label_29c040;
        case 0x29c044u: goto label_29c044;
        case 0x29c048u: goto label_29c048;
        case 0x29c04cu: goto label_29c04c;
        case 0x29c050u: goto label_29c050;
        case 0x29c054u: goto label_29c054;
        case 0x29c058u: goto label_29c058;
        case 0x29c05cu: goto label_29c05c;
        case 0x29c060u: goto label_29c060;
        case 0x29c064u: goto label_29c064;
        case 0x29c068u: goto label_29c068;
        case 0x29c06cu: goto label_29c06c;
        case 0x29c070u: goto label_29c070;
        case 0x29c074u: goto label_29c074;
        case 0x29c078u: goto label_29c078;
        case 0x29c07cu: goto label_29c07c;
        case 0x29c080u: goto label_29c080;
        case 0x29c084u: goto label_29c084;
        case 0x29c088u: goto label_29c088;
        case 0x29c08cu: goto label_29c08c;
        case 0x29c090u: goto label_29c090;
        case 0x29c094u: goto label_29c094;
        case 0x29c098u: goto label_29c098;
        case 0x29c09cu: goto label_29c09c;
        case 0x29c0a0u: goto label_29c0a0;
        case 0x29c0a4u: goto label_29c0a4;
        case 0x29c0a8u: goto label_29c0a8;
        case 0x29c0acu: goto label_29c0ac;
        case 0x29c0b0u: goto label_29c0b0;
        case 0x29c0b4u: goto label_29c0b4;
        case 0x29c0b8u: goto label_29c0b8;
        case 0x29c0bcu: goto label_29c0bc;
        case 0x29c0c0u: goto label_29c0c0;
        case 0x29c0c4u: goto label_29c0c4;
        case 0x29c0c8u: goto label_29c0c8;
        case 0x29c0ccu: goto label_29c0cc;
        case 0x29c0d0u: goto label_29c0d0;
        case 0x29c0d4u: goto label_29c0d4;
        case 0x29c0d8u: goto label_29c0d8;
        case 0x29c0dcu: goto label_29c0dc;
        case 0x29c0e0u: goto label_29c0e0;
        case 0x29c0e4u: goto label_29c0e4;
        case 0x29c0e8u: goto label_29c0e8;
        case 0x29c0ecu: goto label_29c0ec;
        case 0x29c0f0u: goto label_29c0f0;
        case 0x29c0f4u: goto label_29c0f4;
        case 0x29c0f8u: goto label_29c0f8;
        case 0x29c0fcu: goto label_29c0fc;
        case 0x29c100u: goto label_29c100;
        case 0x29c104u: goto label_29c104;
        case 0x29c108u: goto label_29c108;
        case 0x29c10cu: goto label_29c10c;
        case 0x29c110u: goto label_29c110;
        case 0x29c114u: goto label_29c114;
        case 0x29c118u: goto label_29c118;
        case 0x29c11cu: goto label_29c11c;
        case 0x29c120u: goto label_29c120;
        case 0x29c124u: goto label_29c124;
        case 0x29c128u: goto label_29c128;
        case 0x29c12cu: goto label_29c12c;
        case 0x29c130u: goto label_29c130;
        case 0x29c134u: goto label_29c134;
        case 0x29c138u: goto label_29c138;
        case 0x29c13cu: goto label_29c13c;
        case 0x29c140u: goto label_29c140;
        case 0x29c144u: goto label_29c144;
        case 0x29c148u: goto label_29c148;
        case 0x29c14cu: goto label_29c14c;
        case 0x29c150u: goto label_29c150;
        case 0x29c154u: goto label_29c154;
        case 0x29c158u: goto label_29c158;
        case 0x29c15cu: goto label_29c15c;
        case 0x29c160u: goto label_29c160;
        case 0x29c164u: goto label_29c164;
        case 0x29c168u: goto label_29c168;
        case 0x29c16cu: goto label_29c16c;
        case 0x29c170u: goto label_29c170;
        case 0x29c174u: goto label_29c174;
        case 0x29c178u: goto label_29c178;
        case 0x29c17cu: goto label_29c17c;
        case 0x29c180u: goto label_29c180;
        case 0x29c184u: goto label_29c184;
        case 0x29c188u: goto label_29c188;
        case 0x29c18cu: goto label_29c18c;
        case 0x29c190u: goto label_29c190;
        case 0x29c194u: goto label_29c194;
        case 0x29c198u: goto label_29c198;
        case 0x29c19cu: goto label_29c19c;
        case 0x29c1a0u: goto label_29c1a0;
        case 0x29c1a4u: goto label_29c1a4;
        case 0x29c1a8u: goto label_29c1a8;
        case 0x29c1acu: goto label_29c1ac;
        case 0x29c1b0u: goto label_29c1b0;
        case 0x29c1b4u: goto label_29c1b4;
        case 0x29c1b8u: goto label_29c1b8;
        case 0x29c1bcu: goto label_29c1bc;
        case 0x29c1c0u: goto label_29c1c0;
        case 0x29c1c4u: goto label_29c1c4;
        case 0x29c1c8u: goto label_29c1c8;
        case 0x29c1ccu: goto label_29c1cc;
        case 0x29c1d0u: goto label_29c1d0;
        case 0x29c1d4u: goto label_29c1d4;
        case 0x29c1d8u: goto label_29c1d8;
        case 0x29c1dcu: goto label_29c1dc;
        case 0x29c1e0u: goto label_29c1e0;
        case 0x29c1e4u: goto label_29c1e4;
        case 0x29c1e8u: goto label_29c1e8;
        case 0x29c1ecu: goto label_29c1ec;
        case 0x29c1f0u: goto label_29c1f0;
        case 0x29c1f4u: goto label_29c1f4;
        case 0x29c1f8u: goto label_29c1f8;
        case 0x29c1fcu: goto label_29c1fc;
        case 0x29c200u: goto label_29c200;
        case 0x29c204u: goto label_29c204;
        case 0x29c208u: goto label_29c208;
        case 0x29c20cu: goto label_29c20c;
        case 0x29c210u: goto label_29c210;
        case 0x29c214u: goto label_29c214;
        case 0x29c218u: goto label_29c218;
        case 0x29c21cu: goto label_29c21c;
        case 0x29c220u: goto label_29c220;
        case 0x29c224u: goto label_29c224;
        case 0x29c228u: goto label_29c228;
        case 0x29c22cu: goto label_29c22c;
        case 0x29c230u: goto label_29c230;
        case 0x29c234u: goto label_29c234;
        case 0x29c238u: goto label_29c238;
        case 0x29c23cu: goto label_29c23c;
        case 0x29c240u: goto label_29c240;
        case 0x29c244u: goto label_29c244;
        case 0x29c248u: goto label_29c248;
        case 0x29c24cu: goto label_29c24c;
        case 0x29c250u: goto label_29c250;
        case 0x29c254u: goto label_29c254;
        case 0x29c258u: goto label_29c258;
        case 0x29c25cu: goto label_29c25c;
        case 0x29c260u: goto label_29c260;
        case 0x29c264u: goto label_29c264;
        case 0x29c268u: goto label_29c268;
        case 0x29c26cu: goto label_29c26c;
        case 0x29c270u: goto label_29c270;
        case 0x29c274u: goto label_29c274;
        case 0x29c278u: goto label_29c278;
        case 0x29c27cu: goto label_29c27c;
        case 0x29c280u: goto label_29c280;
        case 0x29c284u: goto label_29c284;
        case 0x29c288u: goto label_29c288;
        case 0x29c28cu: goto label_29c28c;
        case 0x29c290u: goto label_29c290;
        case 0x29c294u: goto label_29c294;
        case 0x29c298u: goto label_29c298;
        case 0x29c29cu: goto label_29c29c;
        case 0x29c2a0u: goto label_29c2a0;
        case 0x29c2a4u: goto label_29c2a4;
        case 0x29c2a8u: goto label_29c2a8;
        case 0x29c2acu: goto label_29c2ac;
        case 0x29c2b0u: goto label_29c2b0;
        case 0x29c2b4u: goto label_29c2b4;
        case 0x29c2b8u: goto label_29c2b8;
        case 0x29c2bcu: goto label_29c2bc;
        case 0x29c2c0u: goto label_29c2c0;
        case 0x29c2c4u: goto label_29c2c4;
        case 0x29c2c8u: goto label_29c2c8;
        case 0x29c2ccu: goto label_29c2cc;
        case 0x29c2d0u: goto label_29c2d0;
        case 0x29c2d4u: goto label_29c2d4;
        case 0x29c2d8u: goto label_29c2d8;
        case 0x29c2dcu: goto label_29c2dc;
        case 0x29c2e0u: goto label_29c2e0;
        case 0x29c2e4u: goto label_29c2e4;
        case 0x29c2e8u: goto label_29c2e8;
        case 0x29c2ecu: goto label_29c2ec;
        case 0x29c2f0u: goto label_29c2f0;
        case 0x29c2f4u: goto label_29c2f4;
        case 0x29c2f8u: goto label_29c2f8;
        case 0x29c2fcu: goto label_29c2fc;
        case 0x29c300u: goto label_29c300;
        case 0x29c304u: goto label_29c304;
        case 0x29c308u: goto label_29c308;
        case 0x29c30cu: goto label_29c30c;
        case 0x29c310u: goto label_29c310;
        case 0x29c314u: goto label_29c314;
        case 0x29c318u: goto label_29c318;
        case 0x29c31cu: goto label_29c31c;
        default: break;
    }

    ctx->pc = 0x29b7f8u;

label_29b7f8:
    // 0x29b7f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_29b7fc:
    // 0x29b7fc: 0x3e00008  jr          $ra
label_29b800:
    if (ctx->pc == 0x29B800u) {
        ctx->pc = 0x29B800u;
            // 0x29b800: 0x24426830  addiu       $v0, $v0, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
        ctx->pc = 0x29B804u;
        goto label_29b804;
    }
    ctx->pc = 0x29B7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7FCu;
            // 0x29b800: 0x24426830  addiu       $v0, $v0, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B804u;
label_29b804:
    // 0x29b804: 0x0  nop
    ctx->pc = 0x29b804u;
    // NOP
label_29b808:
    // 0x29b808: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29b80c:
    // 0x29b80c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29b810:
    if (ctx->pc == 0x29B810u) {
        ctx->pc = 0x29B810u;
            // 0x29b810: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29B814u;
        goto label_29b814;
    }
    ctx->pc = 0x29B80Cu;
    {
        const bool branch_taken_0x29b80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B80Cu;
            // 0x29b810: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b80c) {
            ctx->pc = 0x29B82Cu;
            goto label_29b82c;
        }
    }
    ctx->pc = 0x29B814u;
label_29b814:
    // 0x29b814: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29b814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29b818:
    // 0x29b818: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29b81c:
    // 0x29b81c: 0xdc430048  ld          $v1, 0x48($v0)
    ctx->pc = 0x29b81cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 72)));
label_29b820:
    // 0x29b820: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x29b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_29b824:
    // 0x29b824: 0x3e00008  jr          $ra
label_29b828:
    if (ctx->pc == 0x29B828u) {
        ctx->pc = 0x29B828u;
            // 0x29b828: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = 0x29B82Cu;
        goto label_29b82c;
    }
    ctx->pc = 0x29B824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B824u;
            // 0x29b828: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B82Cu;
label_29b82c:
    // 0x29b82c: 0x3e00008  jr          $ra
label_29b830:
    if (ctx->pc == 0x29B830u) {
        ctx->pc = 0x29B830u;
            // 0x29b830: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B834u;
        goto label_29b834;
    }
    ctx->pc = 0x29B82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B82Cu;
            // 0x29b830: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B834u;
label_29b834:
    // 0x29b834: 0x0  nop
    ctx->pc = 0x29b834u;
    // NOP
label_29b838:
    // 0x29b838: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x29b838u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b83c:
    // 0x29b83c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29b83cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b840:
    // 0x29b840: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x29b840u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b844:
    // 0x29b844: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x29b844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_29b848:
    // 0x29b848: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29b84c:
    if (ctx->pc == 0x29B84Cu) {
        ctx->pc = 0x29B84Cu;
            // 0x29b84c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B850u;
        goto label_29b850;
    }
    ctx->pc = 0x29B848u;
    {
        const bool branch_taken_0x29b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B848u;
            // 0x29b84c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b848) {
            ctx->pc = 0x29B88Cu;
            goto label_29b88c;
        }
    }
    ctx->pc = 0x29B850u;
label_29b850:
    // 0x29b850: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x29b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_29b854:
    // 0x29b854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29b858:
    if (ctx->pc == 0x29B858u) {
        ctx->pc = 0x29B858u;
            // 0x29b858: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29B85Cu;
        goto label_29b85c;
    }
    ctx->pc = 0x29B854u;
    {
        const bool branch_taken_0x29b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B854u;
            // 0x29b858: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b854) {
            ctx->pc = 0x29B86Cu;
            goto label_29b86c;
        }
    }
    ctx->pc = 0x29B85Cu;
label_29b85c:
    // 0x29b85c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29b860:
    // 0x29b860: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29b864:
    // 0x29b864: 0x10000002  b           . + 4 + (0x2 << 2)
label_29b868:
    if (ctx->pc == 0x29B868u) {
        ctx->pc = 0x29B868u;
            // 0x29b868: 0xdc490048  ld          $t1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29B86Cu;
        goto label_29b86c;
    }
    ctx->pc = 0x29B864u;
    {
        const bool branch_taken_0x29b864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B864u;
            // 0x29b868: 0xdc490048  ld          $t1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b864) {
            ctx->pc = 0x29B870u;
            goto label_29b870;
        }
    }
    ctx->pc = 0x29B86Cu;
label_29b86c:
    // 0x29b86c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x29b86cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29b870:
    // 0x29b870: 0x8d6400d0  lw          $a0, 0xD0($t3)
    ctx->pc = 0x29b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
label_29b874:
    // 0x29b874: 0x480004c  bltz        $a0, . + 4 + (0x4C << 2)
label_29b878:
    if (ctx->pc == 0x29B878u) {
        ctx->pc = 0x29B878u;
            // 0x29b878: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B87Cu;
        goto label_29b87c;
    }
    ctx->pc = 0x29B874u;
    {
        const bool branch_taken_0x29b874 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B874u;
            // 0x29b878: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b874) {
            ctx->pc = 0x29B9A8u;
            goto label_29b9a8;
        }
    }
    ctx->pc = 0x29B87Cu;
label_29b87c:
    // 0x29b87c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x29b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29b880:
    // 0x29b880: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x29b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_29b884:
    // 0x29b884: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x29b884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29b888:
    // 0x29b888: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x29b888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29b88c:
    // 0x29b88c: 0x2ca2000b  sltiu       $v0, $a1, 0xB
    ctx->pc = 0x29b88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_29b890:
    // 0x29b890: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_29b894:
    if (ctx->pc == 0x29B894u) {
        ctx->pc = 0x29B894u;
            // 0x29b894: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x29B898u;
        goto label_29b898;
    }
    ctx->pc = 0x29B890u;
    {
        const bool branch_taken_0x29b890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B890u;
            // 0x29b894: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b890) {
            ctx->pc = 0x29B990u;
            goto label_29b990;
        }
    }
    ctx->pc = 0x29B898u;
label_29b898:
    // 0x29b898: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29b898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29b89c:
    // 0x29b89c: 0x2442c4a0  addiu       $v0, $v0, -0x3B60
    ctx->pc = 0x29b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952096));
label_29b8a0:
    // 0x29b8a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29b8a4:
    // 0x29b8a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29b8a8:
    // 0x29b8a8: 0x800008  jr          $a0
label_29b8ac:
    if (ctx->pc == 0x29B8ACu) {
        ctx->pc = 0x29B8B0u;
        goto label_29b8b0;
    }
    ctx->pc = 0x29B8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B8B0u: goto label_29b8b0;
            case 0x29B8D4u: goto label_29b8d4;
            case 0x29B8E0u: goto label_29b8e0;
            case 0x29B8E8u: goto label_29b8e8;
            case 0x29B920u: goto label_29b920;
            case 0x29B958u: goto label_29b958;
            case 0x29B990u: goto label_29b990;
            case 0x29B9E4u: goto label_29b9e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B8B0u;
label_29b8b0:
    // 0x29b8b0: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x29b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_29b8b4:
    // 0x29b8b4: 0x8d65003c  lw          $a1, 0x3C($t3)
    ctx->pc = 0x29b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 60)));
label_29b8b8:
    // 0x29b8b8: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x29b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_29b8bc:
    // 0x29b8bc: 0x8d6400d0  lw          $a0, 0xD0($t3)
    ctx->pc = 0x29b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
label_29b8c0:
    // 0x29b8c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29b8c4:
    // 0x29b8c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b8c8:
    // 0x29b8c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_29b8cc:
    // 0x29b8cc: 0x3e00008  jr          $ra
label_29b8d0:
    if (ctx->pc == 0x29B8D0u) {
        ctx->pc = 0x29B8D0u;
            // 0x29b8d0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x29B8D4u;
        goto label_29b8d4;
    }
    ctx->pc = 0x29B8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8CCu;
            // 0x29b8d0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B8D4u;
label_29b8d4:
    // 0x29b8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b8d8:
    // 0x29b8d8: 0x10000042  b           . + 4 + (0x42 << 2)
label_29b8dc:
    if (ctx->pc == 0x29B8DCu) {
        ctx->pc = 0x29B8DCu;
            // 0x29b8dc: 0xad6200d4  sw          $v0, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x29B8E0u;
        goto label_29b8e0;
    }
    ctx->pc = 0x29B8D8u;
    {
        const bool branch_taken_0x29b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8D8u;
            // 0x29b8dc: 0xad6200d4  sw          $v0, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8d8) {
            ctx->pc = 0x29B9E4u;
            goto label_29b9e4;
        }
    }
    ctx->pc = 0x29B8E0u;
label_29b8e0:
    // 0x29b8e0: 0x10000040  b           . + 4 + (0x40 << 2)
label_29b8e4:
    if (ctx->pc == 0x29B8E4u) {
        ctx->pc = 0x29B8E4u;
            // 0x29b8e4: 0xad6000d4  sw          $zero, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x29B8E8u;
        goto label_29b8e8;
    }
    ctx->pc = 0x29B8E0u;
    {
        const bool branch_taken_0x29b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8E0u;
            // 0x29b8e4: 0xad6000d4  sw          $zero, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8e0) {
            ctx->pc = 0x29B9E4u;
            goto label_29b9e4;
        }
    }
    ctx->pc = 0x29B8E8u;
label_29b8e8:
    // 0x29b8e8: 0x1920002b  blez        $t1, . + 4 + (0x2B << 2)
label_29b8ec:
    if (ctx->pc == 0x29B8ECu) {
        ctx->pc = 0x29B8ECu;
            // 0x29b8ec: 0x30c40080  andi        $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x29B8F0u;
        goto label_29b8f0;
    }
    ctx->pc = 0x29B8E8u;
    {
        const bool branch_taken_0x29b8e8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8E8u;
            // 0x29b8ec: 0x30c40080  andi        $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8e8) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B8F0u;
label_29b8f0:
    // 0x29b8f0: 0x8d430020  lw          $v1, 0x20($t2)
    ctx->pc = 0x29b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_29b8f4:
    // 0x29b8f4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_29b8f8:
    if (ctx->pc == 0x29B8F8u) {
        ctx->pc = 0x29B8FCu;
        goto label_29b8fc;
    }
    ctx->pc = 0x29B8F4u;
    {
        const bool branch_taken_0x29b8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8f4) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B8FCu;
label_29b8fc:
    // 0x29b8fc: 0x0  nop
    ctx->pc = 0x29b8fcu;
    // NOP
label_29b900:
    // 0x29b900: 0x6529ffff  daddiu      $t1, $t1, -0x1
    ctx->pc = 0x29b900u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967295);
label_29b904:
    // 0x29b904: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_29b908:
    if (ctx->pc == 0x29B908u) {
        ctx->pc = 0x29B908u;
            // 0x29b908: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B90Cu;
        goto label_29b90c;
    }
    ctx->pc = 0x29B904u;
    {
        const bool branch_taken_0x29b904 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B904u;
            // 0x29b908: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b904) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B90Cu;
label_29b90c:
    // 0x29b90c: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_29b910:
    // 0x29b910: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_29b914:
    if (ctx->pc == 0x29B914u) {
        ctx->pc = 0x29B914u;
            // 0x29b914: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B918u;
        goto label_29b918;
    }
    ctx->pc = 0x29B910u;
    {
        const bool branch_taken_0x29b910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B910u;
            // 0x29b914: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b910) {
            ctx->pc = 0x29B900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b900;
        }
    }
    ctx->pc = 0x29B918u;
label_29b918:
    // 0x29b918: 0x1000001f  b           . + 4 + (0x1F << 2)
label_29b91c:
    if (ctx->pc == 0x29B91Cu) {
        ctx->pc = 0x29B920u;
        goto label_29b920;
    }
    ctx->pc = 0x29B918u;
    {
        const bool branch_taken_0x29b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b918) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B920u;
label_29b920:
    // 0x29b920: 0x1920001d  blez        $t1, . + 4 + (0x1D << 2)
label_29b924:
    if (ctx->pc == 0x29B924u) {
        ctx->pc = 0x29B924u;
            // 0x29b924: 0x30c40080  andi        $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x29B928u;
        goto label_29b928;
    }
    ctx->pc = 0x29B920u;
    {
        const bool branch_taken_0x29b920 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B920u;
            // 0x29b924: 0x30c40080  andi        $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b920) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B928u;
label_29b928:
    // 0x29b928: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_29b92c:
    // 0x29b92c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_29b930:
    if (ctx->pc == 0x29B930u) {
        ctx->pc = 0x29B934u;
        goto label_29b934;
    }
    ctx->pc = 0x29B92Cu;
    {
        const bool branch_taken_0x29b92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b92c) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B934u;
label_29b934:
    // 0x29b934: 0x0  nop
    ctx->pc = 0x29b934u;
    // NOP
label_29b938:
    // 0x29b938: 0x6529ffff  daddiu      $t1, $t1, -0x1
    ctx->pc = 0x29b938u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967295);
label_29b93c:
    // 0x29b93c: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
label_29b940:
    if (ctx->pc == 0x29B940u) {
        ctx->pc = 0x29B940u;
            // 0x29b940: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B944u;
        goto label_29b944;
    }
    ctx->pc = 0x29B93Cu;
    {
        const bool branch_taken_0x29b93c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B93Cu;
            // 0x29b940: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b93c) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B944u;
label_29b944:
    // 0x29b944: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_29b948:
    // 0x29b948: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_29b94c:
    if (ctx->pc == 0x29B94Cu) {
        ctx->pc = 0x29B94Cu;
            // 0x29b94c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B950u;
        goto label_29b950;
    }
    ctx->pc = 0x29B948u;
    {
        const bool branch_taken_0x29b948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B948u;
            // 0x29b94c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b948) {
            ctx->pc = 0x29B938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b938;
        }
    }
    ctx->pc = 0x29B950u;
label_29b950:
    // 0x29b950: 0x10000011  b           . + 4 + (0x11 << 2)
label_29b954:
    if (ctx->pc == 0x29B954u) {
        ctx->pc = 0x29B958u;
        goto label_29b958;
    }
    ctx->pc = 0x29B950u;
    {
        const bool branch_taken_0x29b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b950) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B958u;
label_29b958:
    // 0x29b958: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
label_29b95c:
    if (ctx->pc == 0x29B95Cu) {
        ctx->pc = 0x29B95Cu;
            // 0x29b95c: 0x30c40080  andi        $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x29B960u;
        goto label_29b960;
    }
    ctx->pc = 0x29B958u;
    {
        const bool branch_taken_0x29b958 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B958u;
            // 0x29b95c: 0x30c40080  andi        $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b958) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B960u;
label_29b960:
    // 0x29b960: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x29b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_29b964:
    // 0x29b964: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_29b968:
    if (ctx->pc == 0x29B968u) {
        ctx->pc = 0x29B96Cu;
        goto label_29b96c;
    }
    ctx->pc = 0x29B964u;
    {
        const bool branch_taken_0x29b964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b964) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B96Cu;
label_29b96c:
    // 0x29b96c: 0x0  nop
    ctx->pc = 0x29b96cu;
    // NOP
label_29b970:
    // 0x29b970: 0x6529ffff  daddiu      $t1, $t1, -0x1
    ctx->pc = 0x29b970u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967295);
label_29b974:
    // 0x29b974: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_29b978:
    if (ctx->pc == 0x29B978u) {
        ctx->pc = 0x29B978u;
            // 0x29b978: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B97Cu;
        goto label_29b97c;
    }
    ctx->pc = 0x29B974u;
    {
        const bool branch_taken_0x29b974 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B974u;
            // 0x29b978: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b974) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B97Cu;
label_29b97c:
    // 0x29b97c: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x29b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_29b980:
    // 0x29b980: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_29b984:
    if (ctx->pc == 0x29B984u) {
        ctx->pc = 0x29B984u;
            // 0x29b984: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B988u;
        goto label_29b988;
    }
    ctx->pc = 0x29B980u;
    {
        const bool branch_taken_0x29b980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B980u;
            // 0x29b984: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b980) {
            ctx->pc = 0x29B970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b970;
        }
    }
    ctx->pc = 0x29B988u;
label_29b988:
    // 0x29b988: 0x10000003  b           . + 4 + (0x3 << 2)
label_29b98c:
    if (ctx->pc == 0x29B98Cu) {
        ctx->pc = 0x29B990u;
        goto label_29b990;
    }
    ctx->pc = 0x29B988u;
    {
        const bool branch_taken_0x29b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b988) {
            ctx->pc = 0x29B998u;
            goto label_29b998;
        }
    }
    ctx->pc = 0x29B990u;
label_29b990:
    // 0x29b990: 0x3e00008  jr          $ra
label_29b994:
    if (ctx->pc == 0x29B994u) {
        ctx->pc = 0x29B994u;
            // 0x29b994: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29B998u;
        goto label_29b998;
    }
    ctx->pc = 0x29B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B990u;
            // 0x29b994: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B998u;
label_29b998:
    // 0x29b998: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_29b99c:
    if (ctx->pc == 0x29B99Cu) {
        ctx->pc = 0x29B99Cu;
            // 0x29b99c: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29B9A0u;
        goto label_29b9a0;
    }
    ctx->pc = 0x29B998u;
    {
        const bool branch_taken_0x29b998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B998u;
            // 0x29b99c: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b998) {
            ctx->pc = 0x29B9B0u;
            goto label_29b9b0;
        }
    }
    ctx->pc = 0x29B9A0u;
label_29b9a0:
    // 0x29b9a0: 0x51200008  beql        $t1, $zero, . + 4 + (0x8 << 2)
label_29b9a4:
    if (ctx->pc == 0x29B9A4u) {
        ctx->pc = 0x29B9A4u;
            // 0x29b9a4: 0x8d630010  lw          $v1, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->pc = 0x29B9A8u;
        goto label_29b9a8;
    }
    ctx->pc = 0x29B9A0u;
    {
        const bool branch_taken_0x29b9a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9a0) {
            ctx->pc = 0x29B9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9A0u;
            // 0x29b9a4: 0x8d630010  lw          $v1, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B9C4u;
            goto label_29b9c4;
        }
    }
    ctx->pc = 0x29B9A8u;
label_29b9a8:
    // 0x29b9a8: 0x3e00008  jr          $ra
label_29b9ac:
    if (ctx->pc == 0x29B9ACu) {
        ctx->pc = 0x29B9ACu;
            // 0x29b9ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29B9B0u;
        goto label_29b9b0;
    }
    ctx->pc = 0x29B9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9A8u;
            // 0x29b9ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B9B0u;
label_29b9b0:
    // 0x29b9b0: 0x189182f  dsubu       $v1, $t4, $t1
    ctx->pc = 0x29b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) - GPR_U64(ctx, 9));
label_29b9b4:
    // 0x29b9b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29b9b8:
    // 0x29b9b8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29b9bc:
    // 0x29b9bc: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x29b9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
label_29b9c0:
    // 0x29b9c0: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_29b9c4:
    // 0x29b9c4: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
label_29b9c8:
    // 0x29b9c8: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x29b9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_29b9cc:
    // 0x29b9cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b9d0:
    // 0x29b9d0: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x29b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_29b9d4:
    // 0x29b9d4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29b9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29b9d8:
    // 0x29b9d8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x29b9d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_29b9dc:
    // 0x29b9dc: 0x3e00008  jr          $ra
label_29b9e0:
    if (ctx->pc == 0x29B9E0u) {
        ctx->pc = 0x29B9E0u;
            // 0x29b9e0: 0xad6300d0  sw          $v1, 0xD0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x29B9E4u;
        goto label_29b9e4;
    }
    ctx->pc = 0x29B9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9DCu;
            // 0x29b9e0: 0xad6300d0  sw          $v1, 0xD0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B9E4u;
label_29b9e4:
    // 0x29b9e4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_29b9e8:
    if (ctx->pc == 0x29B9E8u) {
        ctx->pc = 0x29B9E8u;
            // 0x29b9e8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x29B9ECu;
        goto label_29b9ec;
    }
    ctx->pc = 0x29B9E4u;
    {
        const bool branch_taken_0x29b9e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9E4u;
            // 0x29b9e8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9e4) {
            ctx->pc = 0x29B9FCu;
            goto label_29b9fc;
        }
    }
    ctx->pc = 0x29B9ECu;
label_29b9ec:
    // 0x29b9ec: 0x8d62003c  lw          $v0, 0x3C($t3)
    ctx->pc = 0x29b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 60)));
label_29b9f0:
    // 0x29b9f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29b9f4:
    // 0x29b9f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29b9f8:
    // 0x29b9f8: 0xad6400d0  sw          $a0, 0xD0($t3)
    ctx->pc = 0x29b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 4));
label_29b9fc:
    // 0x29b9fc: 0x3e00008  jr          $ra
label_29ba00:
    if (ctx->pc == 0x29BA00u) {
        ctx->pc = 0x29BA00u;
            // 0x29ba00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BA04u;
        goto label_29ba04;
    }
    ctx->pc = 0x29B9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9FCu;
            // 0x29ba00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BA04u;
label_29ba04:
    // 0x29ba04: 0x0  nop
    ctx->pc = 0x29ba04u;
    // NOP
label_29ba08:
    // 0x29ba08: 0x3e00008  jr          $ra
label_29ba0c:
    if (ctx->pc == 0x29BA0Cu) {
        ctx->pc = 0x29BA0Cu;
            // 0x29ba0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BA10u;
        goto label_29ba10;
    }
    ctx->pc = 0x29BA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA08u;
            // 0x29ba0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BA10u;
label_29ba10:
    // 0x29ba10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_29ba14:
    // 0x29ba14: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29ba18:
    // 0x29ba18: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x29ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_29ba1c:
    // 0x29ba1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29ba20:
    // 0x29ba20: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29ba20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ba24:
    // 0x29ba24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29ba28:
    // 0x29ba28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ba28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ba2c:
    // 0x29ba2c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_29ba30:
    // 0x29ba30: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_29ba34:
    // 0x29ba34: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_29ba38:
    // 0x29ba38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_29ba3c:
    // 0x29ba3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29ba40:
    if (ctx->pc == 0x29BA40u) {
        ctx->pc = 0x29BA40u;
            // 0x29ba40: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->pc = 0x29BA44u;
        goto label_29ba44;
    }
    ctx->pc = 0x29BA3Cu;
    {
        const bool branch_taken_0x29ba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA3Cu;
            // 0x29ba40: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba3c) {
            ctx->pc = 0x29BA58u;
            goto label_29ba58;
        }
    }
    ctx->pc = 0x29BA44u;
label_29ba44:
    // 0x29ba44: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x29ba44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29ba48:
    // 0x29ba48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29ba4c:
    // 0x29ba4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29ba50:
    // 0x29ba50: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ba54:
    if (ctx->pc == 0x29BA54u) {
        ctx->pc = 0x29BA54u;
            // 0x29ba54: 0xdc520048  ld          $s2, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BA58u;
        goto label_29ba58;
    }
    ctx->pc = 0x29BA50u;
    {
        const bool branch_taken_0x29ba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA50u;
            // 0x29ba54: 0xdc520048  ld          $s2, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba50) {
            ctx->pc = 0x29BA5Cu;
            goto label_29ba5c;
        }
    }
    ctx->pc = 0x29BA58u;
label_29ba58:
    // 0x29ba58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29ba58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ba5c:
    // 0x29ba5c: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x29ba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_29ba60:
    // 0x29ba60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29ba64:
    if (ctx->pc == 0x29BA64u) {
        ctx->pc = 0x29BA64u;
            // 0x29ba64: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BA68u;
        goto label_29ba68;
    }
    ctx->pc = 0x29BA60u;
    {
        const bool branch_taken_0x29ba60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA60u;
            // 0x29ba64: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba60) {
            ctx->pc = 0x29BA78u;
            goto label_29ba78;
        }
    }
    ctx->pc = 0x29BA68u;
label_29ba68:
    // 0x29ba68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29ba6c:
    // 0x29ba6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29ba70:
    // 0x29ba70: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ba74:
    if (ctx->pc == 0x29BA74u) {
        ctx->pc = 0x29BA74u;
            // 0x29ba74: 0xdc540048  ld          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BA78u;
        goto label_29ba78;
    }
    ctx->pc = 0x29BA70u;
    {
        const bool branch_taken_0x29ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA70u;
            // 0x29ba74: 0xdc540048  ld          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba70) {
            ctx->pc = 0x29BA7Cu;
            goto label_29ba7c;
        }
    }
    ctx->pc = 0x29BA78u;
label_29ba78:
    // 0x29ba78: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29ba78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ba7c:
    // 0x29ba7c: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x29ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_29ba80:
    // 0x29ba80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29ba84:
    if (ctx->pc == 0x29BA84u) {
        ctx->pc = 0x29BA84u;
            // 0x29ba84: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BA88u;
        goto label_29ba88;
    }
    ctx->pc = 0x29BA80u;
    {
        const bool branch_taken_0x29ba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA80u;
            // 0x29ba84: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba80) {
            ctx->pc = 0x29BA98u;
            goto label_29ba98;
        }
    }
    ctx->pc = 0x29BA88u;
label_29ba88:
    // 0x29ba88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29ba8c:
    // 0x29ba8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29ba90:
    // 0x29ba90: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ba94:
    if (ctx->pc == 0x29BA94u) {
        ctx->pc = 0x29BA94u;
            // 0x29ba94: 0xdc530048  ld          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BA98u;
        goto label_29ba98;
    }
    ctx->pc = 0x29BA90u;
    {
        const bool branch_taken_0x29ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA90u;
            // 0x29ba94: 0xdc530048  ld          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba90) {
            ctx->pc = 0x29BA9Cu;
            goto label_29ba9c;
        }
    }
    ctx->pc = 0x29BA98u;
label_29ba98:
    // 0x29ba98: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29ba98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ba9c:
    // 0x29ba9c: 0x32b60008  andi        $s6, $s5, 0x8
    ctx->pc = 0x29ba9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_29baa0:
    // 0x29baa0: 0x56c0000c  bnel        $s6, $zero, . + 4 + (0xC << 2)
label_29baa4:
    if (ctx->pc == 0x29BAA4u) {
        ctx->pc = 0x29BAA4u;
            // 0x29baa4: 0x8e0600d0  lw          $a2, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x29BAA8u;
        goto label_29baa8;
    }
    ctx->pc = 0x29BAA0u;
    {
        const bool branch_taken_0x29baa0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x29baa0) {
            ctx->pc = 0x29BAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAA0u;
            // 0x29baa4: 0x8e0600d0  lw          $a2, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BAD4u;
            goto label_29bad4;
        }
    }
    ctx->pc = 0x29BAA8u;
label_29baa8:
    // 0x29baa8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_29baac:
    // 0x29baac: 0xc0a0dd8  jal         func_283760
label_29bab0:
    if (ctx->pc == 0x29BAB0u) {
        ctx->pc = 0x29BAB0u;
            // 0x29bab0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BAB4u;
        goto label_29bab4;
    }
    ctx->pc = 0x29BAACu;
    SET_GPR_U32(ctx, 31, 0x29BAB4u);
    ctx->pc = 0x29BAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAACu;
            // 0x29bab0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283760u;
    if (runtime->hasFunction(0x283760u)) {
        auto targetFn = runtime->lookupFunction(0x283760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAB4u; }
        if (ctx->pc != 0x29BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283760_0x283760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAB4u; }
        if (ctx->pc != 0x29BAB4u) { return; }
    }
    ctx->pc = 0x29BAB4u;
label_29bab4:
    // 0x29bab4: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
label_29bab8:
    if (ctx->pc == 0x29BAB8u) {
        ctx->pc = 0x29BAB8u;
            // 0x29bab8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x29BABCu;
        goto label_29babc;
    }
    ctx->pc = 0x29BAB4u;
    {
        const bool branch_taken_0x29bab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAB4u;
            // 0x29bab8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bab4) {
            ctx->pc = 0x29BCC0u;
            goto label_29bcc0;
        }
    }
    ctx->pc = 0x29BABCu;
label_29babc:
    // 0x29babc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29bac0:
    // 0x29bac0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x29bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29bac4:
    // 0x29bac4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29bac8:
    // 0x29bac8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x29bac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29bacc:
    // 0x29bacc: 0x10000007  b           . + 4 + (0x7 << 2)
label_29bad0:
    if (ctx->pc == 0x29BAD0u) {
        ctx->pc = 0x29BAD0u;
            // 0x29bad0: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x29BAD4u;
        goto label_29bad4;
    }
    ctx->pc = 0x29BACCu;
    {
        const bool branch_taken_0x29bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BACCu;
            // 0x29bad0: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bacc) {
            ctx->pc = 0x29BAECu;
            goto label_29baec;
        }
    }
    ctx->pc = 0x29BAD4u;
label_29bad4:
    // 0x29bad4: 0x4c00079  bltz        $a2, . + 4 + (0x79 << 2)
label_29bad8:
    if (ctx->pc == 0x29BAD8u) {
        ctx->pc = 0x29BAD8u;
            // 0x29bad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BADCu;
        goto label_29badc;
    }
    ctx->pc = 0x29BAD4u;
    {
        const bool branch_taken_0x29bad4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAD4u;
            // 0x29bad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bad4) {
            ctx->pc = 0x29BCBCu;
            goto label_29bcbc;
        }
    }
    ctx->pc = 0x29BADCu;
label_29badc:
    // 0x29badc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x29badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29bae0:
    // 0x29bae0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x29bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29bae4:
    // 0x29bae4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x29bae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29bae8:
    // 0x29bae8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29baec:
    // 0x29baec: 0x2ea2000a  sltiu       $v0, $s5, 0xA
    ctx->pc = 0x29baecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_29baf0:
    // 0x29baf0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_29baf4:
    if (ctx->pc == 0x29BAF4u) {
        ctx->pc = 0x29BAF4u;
            // 0x29baf4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x29BAF8u;
        goto label_29baf8;
    }
    ctx->pc = 0x29BAF0u;
    {
        const bool branch_taken_0x29baf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAF0u;
            // 0x29baf4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29baf0) {
            ctx->pc = 0x29BC64u;
            goto label_29bc64;
        }
    }
    ctx->pc = 0x29BAF8u;
label_29baf8:
    // 0x29baf8: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_29bafc:
    // 0x29bafc: 0x2442c4e0  addiu       $v0, $v0, -0x3B20
    ctx->pc = 0x29bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952160));
label_29bb00:
    // 0x29bb00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29bb04:
    // 0x29bb04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29bb08:
    // 0x29bb08: 0x800008  jr          $a0
label_29bb0c:
    if (ctx->pc == 0x29BB0Cu) {
        ctx->pc = 0x29BB10u;
        goto label_29bb10;
    }
    ctx->pc = 0x29BB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29BB10u: goto label_29bb10;
            case 0x29BB40u: goto label_29bb40;
            case 0x29BBA0u: goto label_29bba0;
            case 0x29BBD4u: goto label_29bbd4;
            case 0x29BBECu: goto label_29bbec;
            case 0x29BC28u: goto label_29bc28;
            case 0x29BC4Cu: goto label_29bc4c;
            case 0x29BC64u: goto label_29bc64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29BB10u;
label_29bb10:
    // 0x29bb10: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x29bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_29bb14:
    // 0x29bb14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_29bb18:
    if (ctx->pc == 0x29BB18u) {
        ctx->pc = 0x29BB18u;
            // 0x29bb18: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->pc = 0x29BB1Cu;
        goto label_29bb1c;
    }
    ctx->pc = 0x29BB14u;
    {
        const bool branch_taken_0x29bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB14u;
            // 0x29bb18: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb14) {
            ctx->pc = 0x29BB4Cu;
            goto label_29bb4c;
        }
    }
    ctx->pc = 0x29BB1Cu;
label_29bb1c:
    // 0x29bb1c: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x29bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_29bb20:
    // 0x29bb20: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29bb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29bb24:
    // 0x29bb24: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x29bb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29bb28:
    // 0x29bb28: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x29bb28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29bb2c:
    // 0x29bb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bb30:
    // 0x29bb30: 0x40f809  jalr        $v0
label_29bb34:
    if (ctx->pc == 0x29BB34u) {
        ctx->pc = 0x29BB34u;
            // 0x29bb34: 0x26060048  addiu       $a2, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->pc = 0x29BB38u;
        goto label_29bb38;
    }
    ctx->pc = 0x29BB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29BB38u);
        ctx->pc = 0x29BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB30u;
            // 0x29bb34: 0x26060048  addiu       $a2, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29BB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29BB38u; }
            if (ctx->pc != 0x29BB38u) { return; }
        }
        }
    }
    ctx->pc = 0x29BB38u;
label_29bb38:
    // 0x29bb38: 0x1000004c  b           . + 4 + (0x4C << 2)
label_29bb3c:
    if (ctx->pc == 0x29BB3Cu) {
        ctx->pc = 0x29BB40u;
        goto label_29bb40;
    }
    ctx->pc = 0x29BB38u;
    {
        const bool branch_taken_0x29bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb38) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BB40u;
label_29bb40:
    // 0x29bb40: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_29bb44:
    // 0x29bb44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29bb48:
    if (ctx->pc == 0x29BB48u) {
        ctx->pc = 0x29BB48u;
            // 0x29bb48: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->pc = 0x29BB4Cu;
        goto label_29bb4c;
    }
    ctx->pc = 0x29BB44u;
    {
        const bool branch_taken_0x29bb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB44u;
            // 0x29bb48: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb44) {
            ctx->pc = 0x29BB54u;
            goto label_29bb54;
        }
    }
    ctx->pc = 0x29BB4Cu;
label_29bb4c:
    // 0x29bb4c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_29bb50:
    if (ctx->pc == 0x29BB50u) {
        ctx->pc = 0x29BB50u;
            // 0x29bb50: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29BB54u;
        goto label_29bb54;
    }
    ctx->pc = 0x29BB4Cu;
    {
        const bool branch_taken_0x29bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB4Cu;
            // 0x29bb50: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb4c) {
            ctx->pc = 0x29BCBCu;
            goto label_29bcbc;
        }
    }
    ctx->pc = 0x29BB54u;
label_29bb54:
    // 0x29bb54: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_29bb58:
    // 0x29bb58: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x29bb58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29bb5c:
    // 0x29bb5c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x29bb5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29bb60:
    // 0x29bb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bb64:
    // 0x29bb64: 0x26060048  addiu       $a2, $s0, 0x48
    ctx->pc = 0x29bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_29bb68:
    // 0x29bb68: 0x40f809  jalr        $v0
label_29bb6c:
    if (ctx->pc == 0x29BB6Cu) {
        ctx->pc = 0x29BB6Cu;
            // 0x29bb6c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BB70u;
        goto label_29bb70;
    }
    ctx->pc = 0x29BB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29BB70u);
        ctx->pc = 0x29BB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB68u;
            // 0x29bb6c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29BB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29BB70u; }
            if (ctx->pc != 0x29BB70u) { return; }
        }
        }
    }
    ctx->pc = 0x29BB70u;
label_29bb70:
    // 0x29bb70: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x29bb70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_29bb74:
    // 0x29bb74: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_29bb78:
    if (ctx->pc == 0x29BB78u) {
        ctx->pc = 0x29BB7Cu;
        goto label_29bb7c;
    }
    ctx->pc = 0x29BB74u;
    {
        const bool branch_taken_0x29bb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb74) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BB7Cu;
label_29bb7c:
    // 0x29bb7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29bb80:
    // 0x29bb80: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29bb80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29bb84:
    // 0x29bb84: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_29bb88:
    // 0x29bb88: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_29bb8c:
    if (ctx->pc == 0x29BB8Cu) {
        ctx->pc = 0x29BB8Cu;
            // 0x29bb8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BB90u;
        goto label_29bb90;
    }
    ctx->pc = 0x29BB88u;
    {
        const bool branch_taken_0x29bb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB88u;
            // 0x29bb8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb88) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BB90u;
label_29bb90:
    // 0x29bb90: 0xc0a0f06  jal         func_283C18
label_29bb94:
    if (ctx->pc == 0x29BB94u) {
        ctx->pc = 0x29BB94u;
            // 0x29bb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BB98u;
        goto label_29bb98;
    }
    ctx->pc = 0x29BB90u;
    SET_GPR_U32(ctx, 31, 0x29BB98u);
    ctx->pc = 0x29BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB90u;
            // 0x29bb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C18u;
    if (runtime->hasFunction(0x283C18u)) {
        auto targetFn = runtime->lookupFunction(0x283C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB98u; }
        if (ctx->pc != 0x29BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283C18_0x283c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB98u; }
        if (ctx->pc != 0x29BB98u) { return; }
    }
    ctx->pc = 0x29BB98u;
label_29bb98:
    // 0x29bb98: 0x10000034  b           . + 4 + (0x34 << 2)
label_29bb9c:
    if (ctx->pc == 0x29BB9Cu) {
        ctx->pc = 0x29BBA0u;
        goto label_29bba0;
    }
    ctx->pc = 0x29BB98u;
    {
        const bool branch_taken_0x29bb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb98) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BBA0u;
label_29bba0:
    // 0x29bba0: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x29bba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_29bba4:
    // 0x29bba4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29bba4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_29bba8:
    // 0x29bba8: 0x14303c  dsll32      $a2, $s4, 0
    ctx->pc = 0x29bba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 0));
label_29bbac:
    // 0x29bbac: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29bbacu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29bbb0:
    // 0x29bbb0: 0x13483c  dsll32      $t1, $s3, 0
    ctx->pc = 0x29bbb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) << (32 + 0));
label_29bbb4:
    // 0x29bbb4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x29bbb4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_29bbb8:
    // 0x29bbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bbbc:
    // 0x29bbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29bbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bbc0:
    // 0x29bbc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29bbc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bbc4:
    // 0x29bbc4: 0xc0a0edc  jal         func_283B70
label_29bbc8:
    if (ctx->pc == 0x29BBC8u) {
        ctx->pc = 0x29BBC8u;
            // 0x29bbc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BBCCu;
        goto label_29bbcc;
    }
    ctx->pc = 0x29BBC4u;
    SET_GPR_U32(ctx, 31, 0x29BBCCu);
    ctx->pc = 0x29BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBC4u;
            // 0x29bbc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B70u;
    if (runtime->hasFunction(0x283B70u)) {
        auto targetFn = runtime->lookupFunction(0x283B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBCCu; }
        if (ctx->pc != 0x29BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283B70_0x283b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBCCu; }
        if (ctx->pc != 0x29BBCCu) { return; }
    }
    ctx->pc = 0x29BBCCu;
label_29bbcc:
    // 0x29bbcc: 0x10000027  b           . + 4 + (0x27 << 2)
label_29bbd0:
    if (ctx->pc == 0x29BBD0u) {
        ctx->pc = 0x29BBD4u;
        goto label_29bbd4;
    }
    ctx->pc = 0x29BBCCu;
    {
        const bool branch_taken_0x29bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bbcc) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BBD4u;
label_29bbd4:
    // 0x29bbd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29bbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29bbd8:
    // 0x29bbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bbdc:
    // 0x29bbdc: 0xc0a1098  jal         func_284260
label_29bbe0:
    if (ctx->pc == 0x29BBE0u) {
        ctx->pc = 0x29BBE0u;
            // 0x29bbe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BBE4u;
        goto label_29bbe4;
    }
    ctx->pc = 0x29BBDCu;
    SET_GPR_U32(ctx, 31, 0x29BBE4u);
    ctx->pc = 0x29BBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBDCu;
            // 0x29bbe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284260u;
    if (runtime->hasFunction(0x284260u)) {
        auto targetFn = runtime->lookupFunction(0x284260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBE4u; }
        if (ctx->pc != 0x29BBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284260_0x284260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBE4u; }
        if (ctx->pc != 0x29BBE4u) { return; }
    }
    ctx->pc = 0x29BBE4u;
label_29bbe4:
    // 0x29bbe4: 0x10000021  b           . + 4 + (0x21 << 2)
label_29bbe8:
    if (ctx->pc == 0x29BBE8u) {
        ctx->pc = 0x29BBECu;
        goto label_29bbec;
    }
    ctx->pc = 0x29BBE4u;
    {
        const bool branch_taken_0x29bbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bbe4) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BBECu;
label_29bbec:
    // 0x29bbec: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_29bbf0:
    if (ctx->pc == 0x29BBF0u) {
        ctx->pc = 0x29BBF0u;
            // 0x29bbf0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x29BBF4u;
        goto label_29bbf4;
    }
    ctx->pc = 0x29BBECu;
    {
        const bool branch_taken_0x29bbec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBECu;
            // 0x29bbf0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbec) {
            ctx->pc = 0x29BBFCu;
            goto label_29bbfc;
        }
    }
    ctx->pc = 0x29BBF4u;
label_29bbf4:
    // 0x29bbf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_29bbf8:
    if (ctx->pc == 0x29BBF8u) {
        ctx->pc = 0x29BBF8u;
            // 0x29bbf8: 0x2447c4d0  addiu       $a3, $v0, -0x3B30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
        ctx->pc = 0x29BBFCu;
        goto label_29bbfc;
    }
    ctx->pc = 0x29BBF4u;
    {
        const bool branch_taken_0x29bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBF4u;
            // 0x29bbf8: 0x2447c4d0  addiu       $a3, $v0, -0x3B30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbf4) {
            ctx->pc = 0x29BC04u;
            goto label_29bc04;
        }
    }
    ctx->pc = 0x29BBFCu;
label_29bbfc:
    // 0x29bbfc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_29bc00:
    // 0x29bc00: 0x2447c4d8  addiu       $a3, $v0, -0x3B28
    ctx->pc = 0x29bc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952152));
label_29bc04:
    // 0x29bc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bc08:
    // 0x29bc08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29bc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bc0c:
    // 0x29bc0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bc10:
    // 0x29bc10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29bc10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bc14:
    // 0x29bc14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29bc14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bc18:
    // 0x29bc18: 0xc0a0edc  jal         func_283B70
label_29bc1c:
    if (ctx->pc == 0x29BC1Cu) {
        ctx->pc = 0x29BC1Cu;
            // 0x29bc1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC20u;
        goto label_29bc20;
    }
    ctx->pc = 0x29BC18u;
    SET_GPR_U32(ctx, 31, 0x29BC20u);
    ctx->pc = 0x29BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC18u;
            // 0x29bc1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B70u;
    if (runtime->hasFunction(0x283B70u)) {
        auto targetFn = runtime->lookupFunction(0x283B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC20u; }
        if (ctx->pc != 0x29BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283B70_0x283b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC20u; }
        if (ctx->pc != 0x29BC20u) { return; }
    }
    ctx->pc = 0x29BC20u;
label_29bc20:
    // 0x29bc20: 0x10000026  b           . + 4 + (0x26 << 2)
label_29bc24:
    if (ctx->pc == 0x29BC24u) {
        ctx->pc = 0x29BC24u;
            // 0x29bc24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC28u;
        goto label_29bc28;
    }
    ctx->pc = 0x29BC20u;
    {
        const bool branch_taken_0x29bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC20u;
            // 0x29bc24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc20) {
            ctx->pc = 0x29BCBCu;
            goto label_29bcbc;
        }
    }
    ctx->pc = 0x29BC28u;
label_29bc28:
    // 0x29bc28: 0x328200c0  andi        $v0, $s4, 0xC0
    ctx->pc = 0x29bc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)192);
label_29bc2c:
    // 0x29bc2c: 0x3263002f  andi        $v1, $s3, 0x2F
    ctx->pc = 0x29bc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)47);
label_29bc30:
    // 0x29bc30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29bc34:
    // 0x29bc34: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x29bc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_29bc38:
    // 0x29bc38: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29bc38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_29bc3c:
    // 0x29bc3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29bc40:
    // 0x29bc40: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x29bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_29bc44:
    // 0x29bc44: 0x1000001c  b           . + 4 + (0x1C << 2)
label_29bc48:
    if (ctx->pc == 0x29BC48u) {
        ctx->pc = 0x29BC48u;
            // 0x29bc48: 0xa2220014  sb          $v0, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x29BC4Cu;
        goto label_29bc4c;
    }
    ctx->pc = 0x29BC44u;
    {
        const bool branch_taken_0x29bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC44u;
            // 0x29bc48: 0xa2220014  sb          $v0, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc44) {
            ctx->pc = 0x29BCB8u;
            goto label_29bcb8;
        }
    }
    ctx->pc = 0x29BC4Cu;
label_29bc4c:
    // 0x29bc4c: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x29bc4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_29bc50:
    // 0x29bc50: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29bc50u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_29bc54:
    // 0x29bc54: 0xc0a0f06  jal         func_283C18
label_29bc58:
    if (ctx->pc == 0x29BC58u) {
        ctx->pc = 0x29BC58u;
            // 0x29bc58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC5Cu;
        goto label_29bc5c;
    }
    ctx->pc = 0x29BC54u;
    SET_GPR_U32(ctx, 31, 0x29BC5Cu);
    ctx->pc = 0x29BC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC54u;
            // 0x29bc58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C18u;
    if (runtime->hasFunction(0x283C18u)) {
        auto targetFn = runtime->lookupFunction(0x283C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC5Cu; }
        if (ctx->pc != 0x29BC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283C18_0x283c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC5Cu; }
        if (ctx->pc != 0x29BC5Cu) { return; }
    }
    ctx->pc = 0x29BC5Cu;
label_29bc5c:
    // 0x29bc5c: 0x10000017  b           . + 4 + (0x17 << 2)
label_29bc60:
    if (ctx->pc == 0x29BC60u) {
        ctx->pc = 0x29BC60u;
            // 0x29bc60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC64u;
        goto label_29bc64;
    }
    ctx->pc = 0x29BC5Cu;
    {
        const bool branch_taken_0x29bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC5Cu;
            // 0x29bc60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc5c) {
            ctx->pc = 0x29BCBCu;
            goto label_29bcbc;
        }
    }
    ctx->pc = 0x29BC64u;
label_29bc64:
    // 0x29bc64: 0x10000015  b           . + 4 + (0x15 << 2)
label_29bc68:
    if (ctx->pc == 0x29BC68u) {
        ctx->pc = 0x29BC68u;
            // 0x29bc68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29BC6Cu;
        goto label_29bc6c;
    }
    ctx->pc = 0x29BC64u;
    {
        const bool branch_taken_0x29bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC64u;
            // 0x29bc68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc64) {
            ctx->pc = 0x29BCBCu;
            goto label_29bcbc;
        }
    }
    ctx->pc = 0x29BC6Cu;
label_29bc6c:
    // 0x29bc6c: 0x16c00013  bnez        $s6, . + 4 + (0x13 << 2)
label_29bc70:
    if (ctx->pc == 0x29BC70u) {
        ctx->pc = 0x29BC70u;
            // 0x29bc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC74u;
        goto label_29bc74;
    }
    ctx->pc = 0x29BC6Cu;
    {
        const bool branch_taken_0x29bc6c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC6Cu;
            // 0x29bc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc6c) {
            ctx->pc = 0x29BCBCu;
            goto label_29bcbc;
        }
    }
    ctx->pc = 0x29BC74u;
label_29bc74:
    // 0x29bc74: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x29bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_29bc78:
    // 0x29bc78: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
label_29bc7c:
    if (ctx->pc == 0x29BC7Cu) {
        ctx->pc = 0x29BC7Cu;
            // 0x29bc7c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x29BC80u;
        goto label_29bc80;
    }
    ctx->pc = 0x29BC78u;
    {
        const bool branch_taken_0x29bc78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29BC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC78u;
            // 0x29bc7c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc78) {
            ctx->pc = 0x29BCACu;
            goto label_29bcac;
        }
    }
    ctx->pc = 0x29BC80u;
label_29bc80:
    // 0x29bc80: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29bc84:
    // 0x29bc84: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x29bc84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29bc88:
    // 0x29bc88: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x29bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_29bc8c:
    // 0x29bc8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29bc90:
    if (ctx->pc == 0x29BC90u) {
        ctx->pc = 0x29BC90u;
            // 0x29bc90: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x29BC94u;
        goto label_29bc94;
    }
    ctx->pc = 0x29BC8Cu;
    {
        const bool branch_taken_0x29bc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC8Cu;
            // 0x29bc90: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc8c) {
            ctx->pc = 0x29BCA4u;
            goto label_29bca4;
        }
    }
    ctx->pc = 0x29BC94u;
label_29bc94:
    // 0x29bc94: 0xc0a0e04  jal         func_283810
label_29bc98:
    if (ctx->pc == 0x29BC98u) {
        ctx->pc = 0x29BC98u;
            // 0x29bc98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC9Cu;
        goto label_29bc9c;
    }
    ctx->pc = 0x29BC94u;
    SET_GPR_U32(ctx, 31, 0x29BC9Cu);
    ctx->pc = 0x29BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC94u;
            // 0x29bc98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283810u;
    if (runtime->hasFunction(0x283810u)) {
        auto targetFn = runtime->lookupFunction(0x283810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC9Cu; }
        if (ctx->pc != 0x29BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283810_0x283810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC9Cu; }
        if (ctx->pc != 0x29BC9Cu) { return; }
    }
    ctx->pc = 0x29BC9Cu;
label_29bc9c:
    // 0x29bc9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_29bca0:
    if (ctx->pc == 0x29BCA0u) {
        ctx->pc = 0x29BCA0u;
            // 0x29bca0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x29BCA4u;
        goto label_29bca4;
    }
    ctx->pc = 0x29BC9Cu;
    {
        const bool branch_taken_0x29bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC9Cu;
            // 0x29bca0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc9c) {
            ctx->pc = 0x29BCB0u;
            goto label_29bcb0;
        }
    }
    ctx->pc = 0x29BCA4u;
label_29bca4:
    // 0x29bca4: 0xc0a0dfa  jal         func_2837E8
label_29bca8:
    if (ctx->pc == 0x29BCA8u) {
        ctx->pc = 0x29BCA8u;
            // 0x29bca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BCACu;
        goto label_29bcac;
    }
    ctx->pc = 0x29BCA4u;
    SET_GPR_U32(ctx, 31, 0x29BCACu);
    ctx->pc = 0x29BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCA4u;
            // 0x29bca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2837E8u;
    if (runtime->hasFunction(0x2837E8u)) {
        auto targetFn = runtime->lookupFunction(0x2837E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BCACu; }
        if (ctx->pc != 0x29BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002837E8_0x2837e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BCACu; }
        if (ctx->pc != 0x29BCACu) { return; }
    }
    ctx->pc = 0x29BCACu;
label_29bcac:
    // 0x29bcac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29bcb0:
    // 0x29bcb0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x29bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_29bcb4:
    // 0x29bcb4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x29bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_29bcb8:
    // 0x29bcb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29bcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bcbc:
    // 0x29bcbc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29bcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29bcc0:
    // 0x29bcc0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29bcc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29bcc4:
    // 0x29bcc4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29bcc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29bcc8:
    // 0x29bcc8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29bcc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29bccc:
    // 0x29bccc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29bcccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29bcd0:
    // 0x29bcd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29bcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29bcd4:
    // 0x29bcd4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29bcd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29bcd8:
    // 0x29bcd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29bcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29bcdc:
    // 0x29bcdc: 0x3e00008  jr          $ra
label_29bce0:
    if (ctx->pc == 0x29BCE0u) {
        ctx->pc = 0x29BCE0u;
            // 0x29bce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x29BCE4u;
        goto label_29bce4;
    }
    ctx->pc = 0x29BCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCDCu;
            // 0x29bce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BCE4u;
label_29bce4:
    // 0x29bce4: 0x0  nop
    ctx->pc = 0x29bce4u;
    // NOP
label_29bce8:
    // 0x29bce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29bce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29bcec:
    // 0x29bcec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29bcf0:
    // 0x29bcf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29bcf4:
    // 0x29bcf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29bcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bcf8:
    // 0x29bcf8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29bcfc:
    // 0x29bcfc: 0x8c8b00c8  lw          $t3, 0xC8($a0)
    ctx->pc = 0x29bcfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_29bd00:
    // 0x29bd00: 0x1160003d  beqz        $t3, . + 4 + (0x3D << 2)
label_29bd04:
    if (ctx->pc == 0x29BD04u) {
        ctx->pc = 0x29BD04u;
            // 0x29bd04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BD08u;
        goto label_29bd08;
    }
    ctx->pc = 0x29BD00u;
    {
        const bool branch_taken_0x29bd00 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD00u;
            // 0x29bd04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd00) {
            ctx->pc = 0x29BDF8u;
            goto label_29bdf8;
        }
    }
    ctx->pc = 0x29BD08u;
label_29bd08:
    // 0x29bd08: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29bd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29bd0c:
    // 0x29bd0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29bd10:
    if (ctx->pc == 0x29BD10u) {
        ctx->pc = 0x29BD10u;
            // 0x29bd10: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BD14u;
        goto label_29bd14;
    }
    ctx->pc = 0x29BD0Cu;
    {
        const bool branch_taken_0x29bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD0Cu;
            // 0x29bd10: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd0c) {
            ctx->pc = 0x29BD24u;
            goto label_29bd24;
        }
    }
    ctx->pc = 0x29BD14u;
label_29bd14:
    // 0x29bd14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bd18:
    // 0x29bd18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29bd1c:
    // 0x29bd1c: 0x10000001  b           . + 4 + (0x1 << 2)
label_29bd20:
    if (ctx->pc == 0x29BD20u) {
        ctx->pc = 0x29BD20u;
            // 0x29bd20: 0xdc460048  ld          $a2, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BD24u;
        goto label_29bd24;
    }
    ctx->pc = 0x29BD1Cu;
    {
        const bool branch_taken_0x29bd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD1Cu;
            // 0x29bd20: 0xdc460048  ld          $a2, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd1c) {
            ctx->pc = 0x29BD24u;
            goto label_29bd24;
        }
    }
    ctx->pc = 0x29BD24u;
label_29bd24:
    // 0x29bd24: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x29bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_29bd28:
    // 0x29bd28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29bd2c:
    if (ctx->pc == 0x29BD2Cu) {
        ctx->pc = 0x29BD2Cu;
            // 0x29bd2c: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BD30u;
        goto label_29bd30;
    }
    ctx->pc = 0x29BD28u;
    {
        const bool branch_taken_0x29bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD28u;
            // 0x29bd2c: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd28) {
            ctx->pc = 0x29BD40u;
            goto label_29bd40;
        }
    }
    ctx->pc = 0x29BD30u;
label_29bd30:
    // 0x29bd30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bd34:
    // 0x29bd34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29bd38:
    // 0x29bd38: 0x10000002  b           . + 4 + (0x2 << 2)
label_29bd3c:
    if (ctx->pc == 0x29BD3Cu) {
        ctx->pc = 0x29BD3Cu;
            // 0x29bd3c: 0xdc4c0048  ld          $t4, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BD40u;
        goto label_29bd40;
    }
    ctx->pc = 0x29BD38u;
    {
        const bool branch_taken_0x29bd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD38u;
            // 0x29bd3c: 0xdc4c0048  ld          $t4, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd38) {
            ctx->pc = 0x29BD44u;
            goto label_29bd44;
        }
    }
    ctx->pc = 0x29BD40u;
label_29bd40:
    // 0x29bd40: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x29bd40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29bd44:
    // 0x29bd44: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x29bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_29bd48:
    // 0x29bd48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29bd4c:
    if (ctx->pc == 0x29BD4Cu) {
        ctx->pc = 0x29BD4Cu;
            // 0x29bd4c: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BD50u;
        goto label_29bd50;
    }
    ctx->pc = 0x29BD48u;
    {
        const bool branch_taken_0x29bd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD48u;
            // 0x29bd4c: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd48) {
            ctx->pc = 0x29BD60u;
            goto label_29bd60;
        }
    }
    ctx->pc = 0x29BD50u;
label_29bd50:
    // 0x29bd50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bd54:
    // 0x29bd54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29bd58:
    // 0x29bd58: 0x10000002  b           . + 4 + (0x2 << 2)
label_29bd5c:
    if (ctx->pc == 0x29BD5Cu) {
        ctx->pc = 0x29BD5Cu;
            // 0x29bd5c: 0xdc490048  ld          $t1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BD60u;
        goto label_29bd60;
    }
    ctx->pc = 0x29BD58u;
    {
        const bool branch_taken_0x29bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD58u;
            // 0x29bd5c: 0xdc490048  ld          $t1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd58) {
            ctx->pc = 0x29BD64u;
            goto label_29bd64;
        }
    }
    ctx->pc = 0x29BD60u;
label_29bd60:
    // 0x29bd60: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x29bd60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29bd64:
    // 0x29bd64: 0x8c8a00d0  lw          $t2, 0xD0($a0)
    ctx->pc = 0x29bd64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_29bd68:
    // 0x29bd68: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_29bd6c:
    if (ctx->pc == 0x29BD6Cu) {
        ctx->pc = 0x29BD6Cu;
            // 0x29bd6c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x29BD70u;
        goto label_29bd70;
    }
    ctx->pc = 0x29BD68u;
    {
        const bool branch_taken_0x29bd68 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x29BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD68u;
            // 0x29bd6c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd68) {
            ctx->pc = 0x29BD78u;
            goto label_29bd78;
        }
    }
    ctx->pc = 0x29BD70u;
label_29bd70:
    // 0x29bd70: 0x10000005  b           . + 4 + (0x5 << 2)
label_29bd74:
    if (ctx->pc == 0x29BD74u) {
        ctx->pc = 0x29BD74u;
            // 0x29bd74: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x29BD78u;
        goto label_29bd78;
    }
    ctx->pc = 0x29BD70u;
    {
        const bool branch_taken_0x29bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD70u;
            // 0x29bd74: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd70) {
            ctx->pc = 0x29BD88u;
            goto label_29bd88;
        }
    }
    ctx->pc = 0x29BD78u;
label_29bd78:
    // 0x29bd78: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x29bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29bd7c:
    // 0x29bd7c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x29bd7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29bd80:
    // 0x29bd80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29bd84:
    // 0x29bd84: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x29bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_29bd88:
    // 0x29bd88: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x29bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_29bd8c:
    // 0x29bd8c: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x29bd8cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29bd90:
    // 0x29bd90: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_29bd94:
    if (ctx->pc == 0x29BD94u) {
        ctx->pc = 0x29BD94u;
            // 0x29bd94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BD98u;
        goto label_29bd98;
    }
    ctx->pc = 0x29BD90u;
    {
        const bool branch_taken_0x29bd90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD90u;
            // 0x29bd94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd90) {
            ctx->pc = 0x29BDC4u;
            goto label_29bdc4;
        }
    }
    ctx->pc = 0x29BD98u;
label_29bd98:
    // 0x29bd98: 0x8c9000d8  lw          $s0, 0xD8($a0)
    ctx->pc = 0x29bd98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_29bd9c:
    // 0x29bd9c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x29bd9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_29bda0:
    // 0x29bda0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_29bda4:
    if (ctx->pc == 0x29BDA4u) {
        ctx->pc = 0x29BDA4u;
            // 0x29bda4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29BDA8u;
        goto label_29bda8;
    }
    ctx->pc = 0x29BDA0u;
    {
        const bool branch_taken_0x29bda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDA0u;
            // 0x29bda4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bda0) {
            ctx->pc = 0x29BDF8u;
            goto label_29bdf8;
        }
    }
    ctx->pc = 0x29BDA8u;
label_29bda8:
    // 0x29bda8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bdac:
    // 0x29bdac: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x29bdacu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_29bdb0:
    // 0x29bdb0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x29bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_29bdb4:
    // 0x29bdb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29bdb8:
    // 0x29bdb8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29bdbc:
    // 0x29bdbc: 0x8c8b00c8  lw          $t3, 0xC8($a0)
    ctx->pc = 0x29bdbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_29bdc0:
    // 0x29bdc0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x29bdc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29bdc4:
    // 0x29bdc4: 0x8c8500cc  lw          $a1, 0xCC($a0)
    ctx->pc = 0x29bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_29bdc8:
    // 0x29bdc8: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x29bdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_29bdcc:
    // 0x29bdcc: 0x160f809  jalr        $t3
label_29bdd0:
    if (ctx->pc == 0x29BDD0u) {
        ctx->pc = 0x29BDD0u;
            // 0x29bdd0: 0x24860048  addiu       $a2, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->pc = 0x29BDD4u;
        goto label_29bdd4;
    }
    ctx->pc = 0x29BDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x29BDD4u);
        ctx->pc = 0x29BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDCCu;
            // 0x29bdd0: 0x24860048  addiu       $a2, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29BDD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29BDD4u; }
            if (ctx->pc != 0x29BDD4u) { return; }
        }
        }
    }
    ctx->pc = 0x29BDD4u;
label_29bdd4:
    // 0x29bdd4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_29bdd8:
    if (ctx->pc == 0x29BDD8u) {
        ctx->pc = 0x29BDD8u;
            // 0x29bdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BDDCu;
        goto label_29bddc;
    }
    ctx->pc = 0x29BDD4u;
    {
        const bool branch_taken_0x29bdd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDD4u;
            // 0x29bdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bdd4) {
            ctx->pc = 0x29BDF4u;
            goto label_29bdf4;
        }
    }
    ctx->pc = 0x29BDDCu;
label_29bddc:
    // 0x29bddc: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x29bddcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_29bde0:
    // 0x29bde0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bde4:
    // 0x29bde4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x29bde4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_29bde8:
    // 0x29bde8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29bdec:
    // 0x29bdec: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29bdecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_29bdf0:
    // 0x29bdf0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x29bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_29bdf4:
    // 0x29bdf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29bdf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bdf8:
    // 0x29bdf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29bdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29bdfc:
    // 0x29bdfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29bdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29be00:
    // 0x29be00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29be00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29be04:
    // 0x29be04: 0x3e00008  jr          $ra
label_29be08:
    if (ctx->pc == 0x29BE08u) {
        ctx->pc = 0x29BE08u;
            // 0x29be08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29BE0Cu;
        goto label_29be0c;
    }
    ctx->pc = 0x29BE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE04u;
            // 0x29be08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BE0Cu;
label_29be0c:
    // 0x29be0c: 0x0  nop
    ctx->pc = 0x29be0cu;
    // NOP
label_29be10:
    // 0x29be10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29be14:
    // 0x29be14: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x29be14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29be18:
    // 0x29be18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29be1c:
    // 0x29be1c: 0x8d4400d0  lw          $a0, 0xD0($t2)
    ctx->pc = 0x29be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 208)));
label_29be20:
    // 0x29be20: 0x4800041  bltz        $a0, . + 4 + (0x41 << 2)
label_29be24:
    if (ctx->pc == 0x29BE24u) {
        ctx->pc = 0x29BE24u;
            // 0x29be24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BE28u;
        goto label_29be28;
    }
    ctx->pc = 0x29BE20u;
    {
        const bool branch_taken_0x29be20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE20u;
            // 0x29be24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be20) {
            ctx->pc = 0x29BF28u;
            goto label_29bf28;
        }
    }
    ctx->pc = 0x29BE28u;
label_29be28:
    // 0x29be28: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x29be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29be2c:
    // 0x29be2c: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x29be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_29be30:
    // 0x29be30: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x29be30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29be34:
    // 0x29be34: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
label_29be38:
    if (ctx->pc == 0x29BE38u) {
        ctx->pc = 0x29BE38u;
            // 0x29be38: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x29BE3Cu;
        goto label_29be3c;
    }
    ctx->pc = 0x29BE34u;
    {
        const bool branch_taken_0x29be34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE34u;
            // 0x29be38: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be34) {
            ctx->pc = 0x29BEA0u;
            goto label_29bea0;
        }
    }
    ctx->pc = 0x29BE3Cu;
label_29be3c:
    // 0x29be3c: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29be40:
    // 0x29be40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29be44:
    if (ctx->pc == 0x29BE44u) {
        ctx->pc = 0x29BE44u;
            // 0x29be44: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BE48u;
        goto label_29be48;
    }
    ctx->pc = 0x29BE40u;
    {
        const bool branch_taken_0x29be40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE40u;
            // 0x29be44: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be40) {
            ctx->pc = 0x29BE5Cu;
            goto label_29be5c;
        }
    }
    ctx->pc = 0x29BE48u;
label_29be48:
    // 0x29be48: 0x91230014  lbu         $v1, 0x14($t1)
    ctx->pc = 0x29be48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
label_29be4c:
    // 0x29be4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29be50:
    // 0x29be50: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x29be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_29be54:
    // 0x29be54: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x29be54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_29be58:
    // 0x29be58: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x29be58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
label_29be5c:
    // 0x29be5c: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x29be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_29be60:
    // 0x29be60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29be64:
    if (ctx->pc == 0x29BE64u) {
        ctx->pc = 0x29BE64u;
            // 0x29be64: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BE68u;
        goto label_29be68;
    }
    ctx->pc = 0x29BE60u;
    {
        const bool branch_taken_0x29be60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE60u;
            // 0x29be64: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be60) {
            ctx->pc = 0x29BE78u;
            goto label_29be78;
        }
    }
    ctx->pc = 0x29BE68u;
label_29be68:
    // 0x29be68: 0x9d230010  lwu         $v1, 0x10($t1)
    ctx->pc = 0x29be68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_29be6c:
    // 0x29be6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29be70:
    // 0x29be70: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x29be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_29be74:
    // 0x29be74: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x29be74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
label_29be78:
    // 0x29be78: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x29be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_29be7c:
    // 0x29be7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29be80:
    if (ctx->pc == 0x29BE80u) {
        ctx->pc = 0x29BE80u;
            // 0x29be80: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BE84u;
        goto label_29be84;
    }
    ctx->pc = 0x29BE7Cu;
    {
        const bool branch_taken_0x29be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE7Cu;
            // 0x29be80: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be7c) {
            ctx->pc = 0x29BE98u;
            goto label_29be98;
        }
    }
    ctx->pc = 0x29BE84u;
label_29be84:
    // 0x29be84: 0x91230014  lbu         $v1, 0x14($t1)
    ctx->pc = 0x29be84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
label_29be88:
    // 0x29be88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29be88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29be8c:
    // 0x29be8c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x29be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_29be90:
    // 0x29be90: 0x3063002f  andi        $v1, $v1, 0x2F
    ctx->pc = 0x29be90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)47);
label_29be94:
    // 0x29be94: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x29be94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
label_29be98:
    // 0x29be98: 0x10000023  b           . + 4 + (0x23 << 2)
label_29be9c:
    if (ctx->pc == 0x29BE9Cu) {
        ctx->pc = 0x29BE9Cu;
            // 0x29be9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BEA0u;
        goto label_29bea0;
    }
    ctx->pc = 0x29BE98u;
    {
        const bool branch_taken_0x29be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE98u;
            // 0x29be9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be98) {
            ctx->pc = 0x29BF28u;
            goto label_29bf28;
        }
    }
    ctx->pc = 0x29BEA0u;
label_29bea0:
    // 0x29bea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bea4:
    // 0x29bea4: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
label_29bea8:
    if (ctx->pc == 0x29BEA8u) {
        ctx->pc = 0x29BEA8u;
            // 0x29bea8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BEACu;
        goto label_29beac;
    }
    ctx->pc = 0x29BEA4u;
    {
        const bool branch_taken_0x29bea4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29BEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BEA4u;
            // 0x29bea8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bea4) {
            ctx->pc = 0x29BF28u;
            goto label_29bf28;
        }
    }
    ctx->pc = 0x29BEACu;
label_29beac:
    // 0x29beac: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29beb0:
    // 0x29beb0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_29beb4:
    if (ctx->pc == 0x29BEB4u) {
        ctx->pc = 0x29BEB4u;
            // 0x29beb4: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x29BEB8u;
        goto label_29beb8;
    }
    ctx->pc = 0x29BEB0u;
    {
        const bool branch_taken_0x29beb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BEB0u;
            // 0x29beb4: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29beb0) {
            ctx->pc = 0x29BF24u;
            goto label_29bf24;
        }
    }
    ctx->pc = 0x29BEB8u;
label_29beb8:
    // 0x29beb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29bebc:
    if (ctx->pc == 0x29BEBCu) {
        ctx->pc = 0x29BEBCu;
            // 0x29bebc: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BEC0u;
        goto label_29bec0;
    }
    ctx->pc = 0x29BEB8u;
    {
        const bool branch_taken_0x29beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BEB8u;
            // 0x29bebc: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29beb8) {
            ctx->pc = 0x29BED4u;
            goto label_29bed4;
        }
    }
    ctx->pc = 0x29BEC0u;
label_29bec0:
    // 0x29bec0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bec4:
    // 0x29bec4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x29bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_29bec8:
    // 0x29bec8: 0xdc430048  ld          $v1, 0x48($v0)
    ctx->pc = 0x29bec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 72)));
label_29becc:
    // 0x29becc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x29beccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_29bed0:
    // 0x29bed0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x29bed0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_29bed4:
    // 0x29bed4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_29bed8:
    if (ctx->pc == 0x29BED8u) {
        ctx->pc = 0x29BED8u;
            // 0x29bed8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BEDCu;
        goto label_29bedc;
    }
    ctx->pc = 0x29BED4u;
    {
        const bool branch_taken_0x29bed4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BED4u;
            // 0x29bed8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bed4) {
            ctx->pc = 0x29BF00u;
            goto label_29bf00;
        }
    }
    ctx->pc = 0x29BEDCu;
label_29bedc:
    // 0x29bedc: 0xdd230000  ld          $v1, 0x0($t1)
    ctx->pc = 0x29bedcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_29bee0:
    // 0x29bee0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29bee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29bee4:
    // 0x29bee4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x29bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_29bee8:
    // 0x29bee8: 0xdd220008  ld          $v0, 0x8($t1)
    ctx->pc = 0x29bee8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 8)));
label_29beec:
    // 0x29beec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x29beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_29bef0:
    // 0x29bef0: 0xdd230010  ld          $v1, 0x10($t1)
    ctx->pc = 0x29bef0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 16)));
label_29bef4:
    // 0x29bef4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x29bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_29bef8:
    // 0x29bef8: 0x10000002  b           . + 4 + (0x2 << 2)
label_29befc:
    if (ctx->pc == 0x29BEFCu) {
        ctx->pc = 0x29BEFCu;
            // 0x29befc: 0xad240010  sw          $a0, 0x10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
        ctx->pc = 0x29BF00u;
        goto label_29bf00;
    }
    ctx->pc = 0x29BEF8u;
    {
        const bool branch_taken_0x29bef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BEF8u;
            // 0x29befc: 0xad240010  sw          $a0, 0x10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bef8) {
            ctx->pc = 0x29BF04u;
            goto label_29bf04;
        }
    }
    ctx->pc = 0x29BF00u;
label_29bf00:
    // 0x29bf00: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x29bf00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29bf04:
    // 0x29bf04: 0x30c5000f  andi        $a1, $a2, 0xF
    ctx->pc = 0x29bf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29bf08:
    // 0x29bf08: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x29bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29bf0c:
    // 0x29bf0c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x29bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_29bf10:
    // 0x29bf10: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x29bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
label_29bf14:
    // 0x29bf14: 0xc0a0d9c  jal         func_283670
label_29bf18:
    if (ctx->pc == 0x29BF18u) {
        ctx->pc = 0x29BF18u;
            // 0x29bf18: 0x1452821  addu        $a1, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->pc = 0x29BF1Cu;
        goto label_29bf1c;
    }
    ctx->pc = 0x29BF14u;
    SET_GPR_U32(ctx, 31, 0x29BF1Cu);
    ctx->pc = 0x29BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF14u;
            // 0x29bf18: 0x1452821  addu        $a1, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283670u;
    if (runtime->hasFunction(0x283670u)) {
        auto targetFn = runtime->lookupFunction(0x283670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BF1Cu; }
        if (ctx->pc != 0x29BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283670_0x283670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BF1Cu; }
        if (ctx->pc != 0x29BF1Cu) { return; }
    }
    ctx->pc = 0x29BF1Cu;
label_29bf1c:
    // 0x29bf1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_29bf20:
    if (ctx->pc == 0x29BF20u) {
        ctx->pc = 0x29BF20u;
            // 0x29bf20: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x29BF24u;
        goto label_29bf24;
    }
    ctx->pc = 0x29BF1Cu;
    {
        const bool branch_taken_0x29bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF1Cu;
            // 0x29bf20: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf1c) {
            ctx->pc = 0x29BF2Cu;
            goto label_29bf2c;
        }
    }
    ctx->pc = 0x29BF24u;
label_29bf24:
    // 0x29bf24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29bf28:
    // 0x29bf28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29bf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29bf2c:
    // 0x29bf2c: 0x3e00008  jr          $ra
label_29bf30:
    if (ctx->pc == 0x29BF30u) {
        ctx->pc = 0x29BF30u;
            // 0x29bf30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29BF34u;
        goto label_29bf34;
    }
    ctx->pc = 0x29BF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF2Cu;
            // 0x29bf30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BF34u;
label_29bf34:
    // 0x29bf34: 0x0  nop
    ctx->pc = 0x29bf34u;
    // NOP
label_29bf38:
    // 0x29bf38: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x29bf38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bf3c:
    // 0x29bf3c: 0x8d6300d0  lw          $v1, 0xD0($t3)
    ctx->pc = 0x29bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
label_29bf40:
    // 0x29bf40: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_29bf44:
    if (ctx->pc == 0x29BF44u) {
        ctx->pc = 0x29BF44u;
            // 0x29bf44: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BF48u;
        goto label_29bf48;
    }
    ctx->pc = 0x29BF40u;
    {
        const bool branch_taken_0x29bf40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF40u;
            // 0x29bf44: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf40) {
            ctx->pc = 0x29BF50u;
            goto label_29bf50;
        }
    }
    ctx->pc = 0x29BF48u;
label_29bf48:
    // 0x29bf48: 0x3e00008  jr          $ra
label_29bf4c:
    if (ctx->pc == 0x29BF4Cu) {
        ctx->pc = 0x29BF4Cu;
            // 0x29bf4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29BF50u;
        goto label_29bf50;
    }
    ctx->pc = 0x29BF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF48u;
            // 0x29bf4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BF50u;
label_29bf50:
    // 0x29bf50: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x29bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_29bf54:
    // 0x29bf54: 0x8d640010  lw          $a0, 0x10($t3)
    ctx->pc = 0x29bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_29bf58:
    // 0x29bf58: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x29bf58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29bf5c:
    // 0x29bf5c: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x29bf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29bf60:
    // 0x29bf60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_29bf64:
    if (ctx->pc == 0x29BF64u) {
        ctx->pc = 0x29BF64u;
            // 0x29bf64: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x29BF68u;
        goto label_29bf68;
    }
    ctx->pc = 0x29BF60u;
    {
        const bool branch_taken_0x29bf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF60u;
            // 0x29bf64: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf60) {
            ctx->pc = 0x29BF7Cu;
            goto label_29bf7c;
        }
    }
    ctx->pc = 0x29BF68u;
label_29bf68:
    // 0x29bf68: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x29bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29bf6c:
    // 0x29bf6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bf70:
    // 0x29bf70: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29bf74:
    // 0x29bf74: 0x10000002  b           . + 4 + (0x2 << 2)
label_29bf78:
    if (ctx->pc == 0x29BF78u) {
        ctx->pc = 0x29BF78u;
            // 0x29bf78: 0xdc490048  ld          $t1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BF7Cu;
        goto label_29bf7c;
    }
    ctx->pc = 0x29BF74u;
    {
        const bool branch_taken_0x29bf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF74u;
            // 0x29bf78: 0xdc490048  ld          $t1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf74) {
            ctx->pc = 0x29BF80u;
            goto label_29bf80;
        }
    }
    ctx->pc = 0x29BF7Cu;
label_29bf7c:
    // 0x29bf7c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x29bf7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29bf80:
    // 0x29bf80: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x29bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_29bf84:
    // 0x29bf84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29bf88:
    if (ctx->pc == 0x29BF88u) {
        ctx->pc = 0x29BF88u;
            // 0x29bf88: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BF8Cu;
        goto label_29bf8c;
    }
    ctx->pc = 0x29BF84u;
    {
        const bool branch_taken_0x29bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF84u;
            // 0x29bf88: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf84) {
            ctx->pc = 0x29BF9Cu;
            goto label_29bf9c;
        }
    }
    ctx->pc = 0x29BF8Cu;
label_29bf8c:
    // 0x29bf8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bf90:
    // 0x29bf90: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29bf94:
    // 0x29bf94: 0x10000002  b           . + 4 + (0x2 << 2)
label_29bf98:
    if (ctx->pc == 0x29BF98u) {
        ctx->pc = 0x29BF98u;
            // 0x29bf98: 0xdc4a0048  ld          $t2, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BF9Cu;
        goto label_29bf9c;
    }
    ctx->pc = 0x29BF94u;
    {
        const bool branch_taken_0x29bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF94u;
            // 0x29bf98: 0xdc4a0048  ld          $t2, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf94) {
            ctx->pc = 0x29BFA0u;
            goto label_29bfa0;
        }
    }
    ctx->pc = 0x29BF9Cu;
label_29bf9c:
    // 0x29bf9c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x29bf9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29bfa0:
    // 0x29bfa0: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x29bfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_29bfa4:
    // 0x29bfa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29bfa8:
    if (ctx->pc == 0x29BFA8u) {
        ctx->pc = 0x29BFA8u;
            // 0x29bfa8: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29BFACu;
        goto label_29bfac;
    }
    ctx->pc = 0x29BFA4u;
    {
        const bool branch_taken_0x29bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFA4u;
            // 0x29bfa8: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfa4) {
            ctx->pc = 0x29BFBCu;
            goto label_29bfbc;
        }
    }
    ctx->pc = 0x29BFACu;
label_29bfac:
    // 0x29bfac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29bfb0:
    // 0x29bfb0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29bfb4:
    // 0x29bfb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_29bfb8:
    if (ctx->pc == 0x29BFB8u) {
        ctx->pc = 0x29BFB8u;
            // 0x29bfb8: 0xdc470048  ld          $a3, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29BFBCu;
        goto label_29bfbc;
    }
    ctx->pc = 0x29BFB4u;
    {
        const bool branch_taken_0x29bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFB4u;
            // 0x29bfb8: 0xdc470048  ld          $a3, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfb4) {
            ctx->pc = 0x29BFC0u;
            goto label_29bfc0;
        }
    }
    ctx->pc = 0x29BFBCu;
label_29bfbc:
    // 0x29bfbc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x29bfbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29bfc0:
    // 0x29bfc0: 0x31820004  andi        $v0, $t4, 0x4
    ctx->pc = 0x29bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
label_29bfc4:
    // 0x29bfc4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_29bfc8:
    if (ctx->pc == 0x29BFC8u) {
        ctx->pc = 0x29BFC8u;
            // 0x29bfc8: 0x90a20014  lbu         $v0, 0x14($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->pc = 0x29BFCCu;
        goto label_29bfcc;
    }
    ctx->pc = 0x29BFC4u;
    {
        const bool branch_taken_0x29bfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bfc4) {
            ctx->pc = 0x29BFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFC4u;
            // 0x29bfc8: 0x90a20014  lbu         $v0, 0x14($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C010u;
            goto label_29c010;
        }
    }
    ctx->pc = 0x29BFCCu;
label_29bfcc:
    // 0x29bfcc: 0x90a40014  lbu         $a0, 0x14($a1)
    ctx->pc = 0x29bfccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
label_29bfd0:
    // 0x29bfd0: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x29bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_29bfd4:
    // 0x29bfd4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x29bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_29bfd8:
    // 0x29bfd8: 0x9ca50010  lwu         $a1, 0x10($a1)
    ctx->pc = 0x29bfd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_29bfdc:
    // 0x29bfdc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x29bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_29bfe0:
    // 0x29bfe0: 0x308400c0  andi        $a0, $a0, 0xC0
    ctx->pc = 0x29bfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_29bfe4:
    // 0x29bfe4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x29bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_29bfe8:
    // 0x29bfe8: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x29bfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_29bfec:
    // 0x29bfec: 0x1252826  xor         $a1, $t1, $a1
    ctx->pc = 0x29bfecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
label_29bff0:
    // 0x29bff0: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x29bff0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29bff4:
    // 0x29bff4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x29bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_29bff8:
    // 0x29bff8: 0x34c30002  ori         $v1, $a2, 0x2
    ctx->pc = 0x29bff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_29bffc:
    // 0x29bffc: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x29bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
label_29c000:
    // 0x29c000: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x29c000u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_29c004:
    // 0x29c004: 0x34c30004  ori         $v1, $a2, 0x4
    ctx->pc = 0x29c004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_29c008:
    // 0x29c008: 0x1000000e  b           . + 4 + (0xE << 2)
label_29c00c:
    if (ctx->pc == 0x29C00Cu) {
        ctx->pc = 0x29C00Cu;
            // 0x29c00c: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->pc = 0x29C010u;
        goto label_29c010;
    }
    ctx->pc = 0x29C008u;
    {
        const bool branch_taken_0x29c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C008u;
            // 0x29c00c: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c008) {
            ctx->pc = 0x29C044u;
            goto label_29c044;
        }
    }
    ctx->pc = 0x29C010u;
label_29c010:
    // 0x29c010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c014:
    // 0x29c014: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x29c014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_29c018:
    // 0x29c018: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x29c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_29c01c:
    // 0x29c01c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_29c020:
    // 0x29c020: 0x1221026  xor         $v0, $t1, $v0
    ctx->pc = 0x29c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_29c024:
    // 0x29c024: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x29c024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29c028:
    // 0x29c028: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c02c:
    // 0x29c02c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x29c02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_29c030:
    // 0x29c030: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29c030u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29c034:
    // 0x29c034: 0xea1824  and         $v1, $a3, $t2
    ctx->pc = 0x29c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
label_29c038:
    // 0x29c038: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x29c038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
label_29c03c:
    // 0x29c03c: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x29c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_29c040:
    // 0x29c040: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x29c040u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_29c044:
    // 0x29c044: 0x31820008  andi        $v0, $t4, 0x8
    ctx->pc = 0x29c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8);
label_29c048:
    // 0x29c048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c04c:
    if (ctx->pc == 0x29C04Cu) {
        ctx->pc = 0x29C04Cu;
            // 0x29c04c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29C050u;
        goto label_29c050;
    }
    ctx->pc = 0x29C048u;
    {
        const bool branch_taken_0x29c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C048u;
            // 0x29c04c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c048) {
            ctx->pc = 0x29C05Cu;
            goto label_29c05c;
        }
    }
    ctx->pc = 0x29C050u;
label_29c050:
    // 0x29c050: 0xfd660048  sd          $a2, 0x48($t3)
    ctx->pc = 0x29c050u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 6));
label_29c054:
    // 0x29c054: 0x3e00008  jr          $ra
label_29c058:
    if (ctx->pc == 0x29C058u) {
        ctx->pc = 0x29C058u;
            // 0x29c058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C05Cu;
        goto label_29c05c;
    }
    ctx->pc = 0x29C054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C054u;
            // 0x29c058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C05Cu;
label_29c05c:
    // 0x29c05c: 0x3e00008  jr          $ra
label_29c060:
    if (ctx->pc == 0x29C060u) {
        ctx->pc = 0x29C060u;
            // 0x29c060: 0x6100a  movz        $v0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x29C064u;
        goto label_29c064;
    }
    ctx->pc = 0x29C05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C05Cu;
            // 0x29c060: 0x6100a  movz        $v0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C064u;
label_29c064:
    // 0x29c064: 0x0  nop
    ctx->pc = 0x29c064u;
    // NOP
label_29c068:
    // 0x29c068: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x29c068u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_29c06c:
    // 0x29c06c: 0x30ce0080  andi        $t6, $a2, 0x80
    ctx->pc = 0x29c06cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29c070:
    // 0x29c070: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x29c070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_29c074:
    // 0x29c074: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
label_29c078:
    if (ctx->pc == 0x29C078u) {
        ctx->pc = 0x29C078u;
            // 0x29c078: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C07Cu;
        goto label_29c07c;
    }
    ctx->pc = 0x29C074u;
    {
        const bool branch_taken_0x29c074 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C074u;
            // 0x29c078: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c074) {
            ctx->pc = 0x29C090u;
            goto label_29c090;
        }
    }
    ctx->pc = 0x29C07Cu;
label_29c07c:
    // 0x29c07c: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x29c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29c080:
    // 0x29c080: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29c084:
    // 0x29c084: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29c088:
    // 0x29c088: 0x10000002  b           . + 4 + (0x2 << 2)
label_29c08c:
    if (ctx->pc == 0x29C08Cu) {
        ctx->pc = 0x29C08Cu;
            // 0x29c08c: 0xdc480048  ld          $t0, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29C090u;
        goto label_29c090;
    }
    ctx->pc = 0x29C088u;
    {
        const bool branch_taken_0x29c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C088u;
            // 0x29c08c: 0xdc480048  ld          $t0, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c088) {
            ctx->pc = 0x29C094u;
            goto label_29c094;
        }
    }
    ctx->pc = 0x29C090u;
label_29c090:
    // 0x29c090: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x29c090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c094:
    // 0x29c094: 0x8102a  slt         $v0, $zero, $t0
    ctx->pc = 0x29c094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_29c098:
    // 0x29c098: 0x2d030001  sltiu       $v1, $t0, 0x1
    ctx->pc = 0x29c098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29c09c:
    // 0x29c09c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x29c09cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_29c0a0:
    // 0x29c0a0: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x29c0a0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_29c0a4:
    // 0x29c0a4: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x29c0a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
label_29c0a8:
    // 0x29c0a8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x29c0a8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_29c0ac:
    // 0x29c0ac: 0x867fe  dsrl32      $t4, $t0, 31
    ctx->pc = 0x29c0acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) >> (32 + 31));
label_29c0b0:
    // 0x29c0b0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x29c0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_29c0b4:
    // 0x29c0b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_29c0b8:
    if (ctx->pc == 0x29C0B8u) {
        ctx->pc = 0x29C0B8u;
            // 0x29c0b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C0BCu;
        goto label_29c0bc;
    }
    ctx->pc = 0x29C0B4u;
    {
        const bool branch_taken_0x29c0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0B4u;
            // 0x29c0b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0b4) {
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29C0BCu;
label_29c0bc:
    // 0x29c0bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_29c0c0:
    // 0x29c0c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29c0c4:
    // 0x29c0c4: 0x2442c510  addiu       $v0, $v0, -0x3AF0
    ctx->pc = 0x29c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
label_29c0c8:
    // 0x29c0c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29c0cc:
    // 0x29c0cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29c0d0:
    // 0x29c0d0: 0x800008  jr          $a0
label_29c0d4:
    if (ctx->pc == 0x29C0D4u) {
        ctx->pc = 0x29C0D8u;
        goto label_29c0d8;
    }
    ctx->pc = 0x29C0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C0D8u: goto label_29c0d8;
            case 0x29C0E0u: goto label_29c0e0;
            case 0x29C0E8u: goto label_29c0e8;
            case 0x29C0ECu: goto label_29c0ec;
            case 0x29C0F4u: goto label_29c0f4;
            case 0x29C0F8u: goto label_29c0f8;
            case 0x29C100u: goto label_29c100;
            case 0x29C120u: goto label_29c120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C0D8u;
label_29c0d8:
    // 0x29c0d8: 0x10000015  b           . + 4 + (0x15 << 2)
label_29c0dc:
    if (ctx->pc == 0x29C0DCu) {
        ctx->pc = 0x29C0DCu;
            // 0x29c0dc: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C0E0u;
        goto label_29c0e0;
    }
    ctx->pc = 0x29C0D8u;
    {
        const bool branch_taken_0x29c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0D8u;
            // 0x29c0dc: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0d8) {
            ctx->pc = 0x29C130u;
            goto label_29c130;
        }
    }
    ctx->pc = 0x29C0E0u;
label_29c0e0:
    // 0x29c0e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_29c0e4:
    if (ctx->pc == 0x29C0E4u) {
        ctx->pc = 0x29C0E4u;
            // 0x29c0e4: 0x2d2a0001  sltiu       $t2, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x29C0E8u;
        goto label_29c0e8;
    }
    ctx->pc = 0x29C0E0u;
    {
        const bool branch_taken_0x29c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0E0u;
            // 0x29c0e4: 0x2d2a0001  sltiu       $t2, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0e0) {
            ctx->pc = 0x29C130u;
            goto label_29c130;
        }
    }
    ctx->pc = 0x29C0E8u;
label_29c0e8:
    // 0x29c0e8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x29c0e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29c0ec:
    // 0x29c0ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_29c0f0:
    if (ctx->pc == 0x29C0F0u) {
        ctx->pc = 0x29C0F0u;
            // 0x29c0f0: 0x14c5025  or          $t2, $t2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
        ctx->pc = 0x29C0F4u;
        goto label_29c0f4;
    }
    ctx->pc = 0x29C0ECu;
    {
        const bool branch_taken_0x29c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0ECu;
            // 0x29c0f0: 0x14c5025  or          $t2, $t2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0ec) {
            ctx->pc = 0x29C130u;
            goto label_29c130;
        }
    }
    ctx->pc = 0x29C0F4u;
label_29c0f4:
    // 0x29c0f4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x29c0f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29c0f8:
    // 0x29c0f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_29c0fc:
    if (ctx->pc == 0x29C0FCu) {
        ctx->pc = 0x29C0FCu;
            // 0x29c0fc: 0x14d5025  or          $t2, $t2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
        ctx->pc = 0x29C100u;
        goto label_29c100;
    }
    ctx->pc = 0x29C0F8u;
    {
        const bool branch_taken_0x29c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0F8u;
            // 0x29c0fc: 0x14d5025  or          $t2, $t2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0f8) {
            ctx->pc = 0x29C130u;
            goto label_29c130;
        }
    }
    ctx->pc = 0x29C100u;
label_29c100:
    // 0x29c100: 0x11c00011  beqz        $t6, . + 4 + (0x11 << 2)
label_29c104:
    if (ctx->pc == 0x29C104u) {
        ctx->pc = 0x29C104u;
            // 0x29c104: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C108u;
        goto label_29c108;
    }
    ctx->pc = 0x29C100u;
    {
        const bool branch_taken_0x29c100 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C100u;
            // 0x29c104: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c100) {
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29C108u;
label_29c108:
    // 0x29c108: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x29c108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29c10c:
    // 0x29c10c: 0x8d630020  lw          $v1, 0x20($t3)
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
label_29c110:
    // 0x29c110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29c114:
    // 0x29c114: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_29c118:
    // 0x29c118: 0x10000005  b           . + 4 + (0x5 << 2)
label_29c11c:
    if (ctx->pc == 0x29C11Cu) {
        ctx->pc = 0x29C11Cu;
            // 0x29c11c: 0xfc430048  sd          $v1, 0x48($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
        ctx->pc = 0x29C120u;
        goto label_29c120;
    }
    ctx->pc = 0x29C118u;
    {
        const bool branch_taken_0x29c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C118u;
            // 0x29c11c: 0xfc430048  sd          $v1, 0x48($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c118) {
            ctx->pc = 0x29C130u;
            goto label_29c130;
        }
    }
    ctx->pc = 0x29C120u;
label_29c120:
    // 0x29c120: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x29c120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_29c124:
    // 0x29c124: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29c124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_29c128:
    // 0x29c128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29c128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c12c:
    // 0x29c12c: 0xad620020  sw          $v0, 0x20($t3)
    ctx->pc = 0x29c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 2));
label_29c130:
    // 0x29c130: 0x1140000b  beqz        $t2, . + 4 + (0xB << 2)
label_29c134:
    if (ctx->pc == 0x29C134u) {
        ctx->pc = 0x29C138u;
        goto label_29c138;
    }
    ctx->pc = 0x29C130u;
    {
        const bool branch_taken_0x29c130 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c130) {
            ctx->pc = 0x29C160u;
            goto label_29c160;
        }
    }
    ctx->pc = 0x29C138u;
label_29c138:
    // 0x29c138: 0x8d620028  lw          $v0, 0x28($t3)
    ctx->pc = 0x29c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
label_29c13c:
    // 0x29c13c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x29c13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29c140:
    // 0x29c140: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_29c144:
    if (ctx->pc == 0x29C144u) {
        ctx->pc = 0x29C144u;
            // 0x29c144: 0x8d620040  lw          $v0, 0x40($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 64)));
        ctx->pc = 0x29C148u;
        goto label_29c148;
    }
    ctx->pc = 0x29C140u;
    {
        const bool branch_taken_0x29c140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c140) {
            ctx->pc = 0x29C144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C140u;
            // 0x29c144: 0x8d620040  lw          $v0, 0x40($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C150u;
            goto label_29c150;
        }
    }
    ctx->pc = 0x29C148u;
label_29c148:
    // 0x29c148: 0x3e00008  jr          $ra
label_29c14c:
    if (ctx->pc == 0x29C14Cu) {
        ctx->pc = 0x29C14Cu;
            // 0x29c14c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29C150u;
        goto label_29c150;
    }
    ctx->pc = 0x29C148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C148u;
            // 0x29c14c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C150u;
label_29c150:
    // 0x29c150: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x29c150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_29c154:
    // 0x29c154: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29c158:
    // 0x29c158: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29c15c:
    // 0x29c15c: 0xad640020  sw          $a0, 0x20($t3)
    ctx->pc = 0x29c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 4));
label_29c160:
    // 0x29c160: 0x3e00008  jr          $ra
label_29c164:
    if (ctx->pc == 0x29C164u) {
        ctx->pc = 0x29C164u;
            // 0x29c164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C168u;
        goto label_29c168;
    }
    ctx->pc = 0x29C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C160u;
            // 0x29c164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C168u;
label_29c168:
    // 0x29c168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c16c:
    // 0x29c16c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x29c16cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c170:
    // 0x29c170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c174:
    // 0x29c174: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29c178:
    // 0x29c178: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29c17c:
    if (ctx->pc == 0x29C17Cu) {
        ctx->pc = 0x29C17Cu;
            // 0x29c17c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x29C180u;
        goto label_29c180;
    }
    ctx->pc = 0x29C178u;
    {
        const bool branch_taken_0x29c178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C178u;
            // 0x29c17c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c178) {
            ctx->pc = 0x29C188u;
            goto label_29c188;
        }
    }
    ctx->pc = 0x29C180u;
label_29c180:
    // 0x29c180: 0x10000038  b           . + 4 + (0x38 << 2)
label_29c184:
    if (ctx->pc == 0x29C184u) {
        ctx->pc = 0x29C184u;
            // 0x29c184: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29C188u;
        goto label_29c188;
    }
    ctx->pc = 0x29C180u;
    {
        const bool branch_taken_0x29c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C180u;
            // 0x29c184: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c180) {
            ctx->pc = 0x29C264u;
            goto label_29c264;
        }
    }
    ctx->pc = 0x29C188u;
label_29c188:
    // 0x29c188: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x29c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29c18c:
    // 0x29c18c: 0x30e30080  andi        $v1, $a3, 0x80
    ctx->pc = 0x29c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_29c190:
    // 0x29c190: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29c194:
    // 0x29c194: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x29c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_29c198:
    // 0x29c198: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_29c19c:
    if (ctx->pc == 0x29C19Cu) {
        ctx->pc = 0x29C19Cu;
            // 0x29c19c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x29C1A0u;
        goto label_29c1a0;
    }
    ctx->pc = 0x29C198u;
    {
        const bool branch_taken_0x29c198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C198u;
            // 0x29c19c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c198) {
            ctx->pc = 0x29C1B4u;
            goto label_29c1b4;
        }
    }
    ctx->pc = 0x29C1A0u;
label_29c1a0:
    // 0x29c1a0: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x29c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_29c1a4:
    // 0x29c1a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29c1a8:
    // 0x29c1a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29c1ac:
    // 0x29c1ac: 0x10000001  b           . + 4 + (0x1 << 2)
label_29c1b0:
    if (ctx->pc == 0x29C1B0u) {
        ctx->pc = 0x29C1B0u;
            // 0x29c1b0: 0xdc470048  ld          $a3, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29C1B4u;
        goto label_29c1b4;
    }
    ctx->pc = 0x29C1ACu;
    {
        const bool branch_taken_0x29c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1ACu;
            // 0x29c1b0: 0xdc470048  ld          $a3, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1ac) {
            ctx->pc = 0x29C1B4u;
            goto label_29c1b4;
        }
    }
    ctx->pc = 0x29C1B4u;
label_29c1b4:
    // 0x29c1b4: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x29c1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_29c1b8:
    // 0x29c1b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29c1bc:
    if (ctx->pc == 0x29C1BCu) {
        ctx->pc = 0x29C1BCu;
            // 0x29c1bc: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x29C1C0u;
        goto label_29c1c0;
    }
    ctx->pc = 0x29C1B8u;
    {
        const bool branch_taken_0x29c1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1B8u;
            // 0x29c1bc: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1b8) {
            ctx->pc = 0x29C1D0u;
            goto label_29c1d0;
        }
    }
    ctx->pc = 0x29C1C0u;
label_29c1c0:
    // 0x29c1c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29c1c4:
    // 0x29c1c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29c1c8:
    // 0x29c1c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_29c1cc:
    if (ctx->pc == 0x29C1CCu) {
        ctx->pc = 0x29C1CCu;
            // 0x29c1cc: 0xdc450048  ld          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x29C1D0u;
        goto label_29c1d0;
    }
    ctx->pc = 0x29C1C8u;
    {
        const bool branch_taken_0x29c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1C8u;
            // 0x29c1cc: 0xdc450048  ld          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1c8) {
            ctx->pc = 0x29C1D4u;
            goto label_29c1d4;
        }
    }
    ctx->pc = 0x29C1D0u;
label_29c1d0:
    // 0x29c1d0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x29c1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29c1d4:
    // 0x29c1d4: 0x2d220008  sltiu       $v0, $t1, 0x8
    ctx->pc = 0x29c1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_29c1d8:
    // 0x29c1d8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_29c1dc:
    if (ctx->pc == 0x29C1DCu) {
        ctx->pc = 0x29C1DCu;
            // 0x29c1dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x29C1E0u;
        goto label_29c1e0;
    }
    ctx->pc = 0x29C1D8u;
    {
        const bool branch_taken_0x29c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1D8u;
            // 0x29c1dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1d8) {
            ctx->pc = 0x29C180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c180;
        }
    }
    ctx->pc = 0x29C1E0u;
label_29c1e0:
    // 0x29c1e0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x29c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_29c1e4:
    // 0x29c1e4: 0x2442c530  addiu       $v0, $v0, -0x3AD0
    ctx->pc = 0x29c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
label_29c1e8:
    // 0x29c1e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29c1ec:
    // 0x29c1ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29c1f0:
    // 0x29c1f0: 0x800008  jr          $a0
label_29c1f4:
    if (ctx->pc == 0x29C1F4u) {
        ctx->pc = 0x29C1F8u;
        goto label_29c1f8;
    }
    ctx->pc = 0x29C1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C1F8u: goto label_29c1f8;
            case 0x29C200u: goto label_29c200;
            case 0x29C208u: goto label_29c208;
            case 0x29C218u: goto label_29c218;
            case 0x29C230u: goto label_29c230;
            case 0x29C248u: goto label_29c248;
            case 0x29C250u: goto label_29c250;
            case 0x29C258u: goto label_29c258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C1F8u;
label_29c1f8:
    // 0x29c1f8: 0x10000018  b           . + 4 + (0x18 << 2)
label_29c1fc:
    if (ctx->pc == 0x29C1FCu) {
        ctx->pc = 0x29C1FCu;
            // 0x29c1fc: 0xe5102d  daddu       $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 5));
        ctx->pc = 0x29C200u;
        goto label_29c200;
    }
    ctx->pc = 0x29C1F8u;
    {
        const bool branch_taken_0x29c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1F8u;
            // 0x29c1fc: 0xe5102d  daddu       $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1f8) {
            ctx->pc = 0x29C25Cu;
            goto label_29c25c;
        }
    }
    ctx->pc = 0x29C200u;
label_29c200:
    // 0x29c200: 0x10000016  b           . + 4 + (0x16 << 2)
label_29c204:
    if (ctx->pc == 0x29C204u) {
        ctx->pc = 0x29C204u;
            // 0x29c204: 0xe5102f  dsubu       $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 5));
        ctx->pc = 0x29C208u;
        goto label_29c208;
    }
    ctx->pc = 0x29C200u;
    {
        const bool branch_taken_0x29c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C200u;
            // 0x29c204: 0xe5102f  dsubu       $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c200) {
            ctx->pc = 0x29C25Cu;
            goto label_29c25c;
        }
    }
    ctx->pc = 0x29C208u;
label_29c208:
    // 0x29c208: 0xc048082  jal         func_120208
label_29c20c:
    if (ctx->pc == 0x29C20Cu) {
        ctx->pc = 0x29C20Cu;
            // 0x29c20c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C210u;
        goto label_29c210;
    }
    ctx->pc = 0x29C208u;
    SET_GPR_U32(ctx, 31, 0x29C210u);
    ctx->pc = 0x29C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C208u;
            // 0x29c20c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C210u; }
        if (ctx->pc != 0x29C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C210u; }
        if (ctx->pc != 0x29C210u) { return; }
    }
    ctx->pc = 0x29C210u;
label_29c210:
    // 0x29c210: 0x10000013  b           . + 4 + (0x13 << 2)
label_29c214:
    if (ctx->pc == 0x29C214u) {
        ctx->pc = 0x29C214u;
            // 0x29c214: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x29C218u;
        goto label_29c218;
    }
    ctx->pc = 0x29C210u;
    {
        const bool branch_taken_0x29c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C210u;
            // 0x29c214: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c210) {
            ctx->pc = 0x29C260u;
            goto label_29c260;
        }
    }
    ctx->pc = 0x29C218u;
label_29c218:
    // 0x29c218: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_29c21c:
    if (ctx->pc == 0x29C21Cu) {
        ctx->pc = 0x29C21Cu;
            // 0x29c21c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x29C220u;
        goto label_29c220;
    }
    ctx->pc = 0x29C218u;
    {
        const bool branch_taken_0x29c218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C218u;
            // 0x29c21c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c218) {
            ctx->pc = 0x29C264u;
            goto label_29c264;
        }
    }
    ctx->pc = 0x29C220u;
label_29c220:
    // 0x29c220: 0xc04818c  jal         func_120630
label_29c224:
    if (ctx->pc == 0x29C224u) {
        ctx->pc = 0x29C224u;
            // 0x29c224: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C228u;
        goto label_29c228;
    }
    ctx->pc = 0x29C220u;
    SET_GPR_U32(ctx, 31, 0x29C228u);
    ctx->pc = 0x29C224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C220u;
            // 0x29c224: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C228u; }
        if (ctx->pc != 0x29C228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C228u; }
        if (ctx->pc != 0x29C228u) { return; }
    }
    ctx->pc = 0x29C228u;
label_29c228:
    // 0x29c228: 0x1000000d  b           . + 4 + (0xD << 2)
label_29c22c:
    if (ctx->pc == 0x29C22Cu) {
        ctx->pc = 0x29C22Cu;
            // 0x29c22c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x29C230u;
        goto label_29c230;
    }
    ctx->pc = 0x29C228u;
    {
        const bool branch_taken_0x29c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C228u;
            // 0x29c22c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c228) {
            ctx->pc = 0x29C260u;
            goto label_29c260;
        }
    }
    ctx->pc = 0x29C230u;
label_29c230:
    // 0x29c230: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_29c234:
    if (ctx->pc == 0x29C234u) {
        ctx->pc = 0x29C234u;
            // 0x29c234: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x29C238u;
        goto label_29c238;
    }
    ctx->pc = 0x29C230u;
    {
        const bool branch_taken_0x29c230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C230u;
            // 0x29c234: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c230) {
            ctx->pc = 0x29C264u;
            goto label_29c264;
        }
    }
    ctx->pc = 0x29C238u;
label_29c238:
    // 0x29c238: 0xc048382  jal         func_120E08
label_29c23c:
    if (ctx->pc == 0x29C23Cu) {
        ctx->pc = 0x29C23Cu;
            // 0x29c23c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C240u;
        goto label_29c240;
    }
    ctx->pc = 0x29C238u;
    SET_GPR_U32(ctx, 31, 0x29C240u);
    ctx->pc = 0x29C23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C238u;
            // 0x29c23c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (runtime->hasFunction(0x120E08u)) {
        auto targetFn = runtime->lookupFunction(0x120E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C240u; }
        if (ctx->pc != 0x29C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120E08_0x120e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C240u; }
        if (ctx->pc != 0x29C240u) { return; }
    }
    ctx->pc = 0x29C240u;
label_29c240:
    // 0x29c240: 0x10000007  b           . + 4 + (0x7 << 2)
label_29c244:
    if (ctx->pc == 0x29C244u) {
        ctx->pc = 0x29C244u;
            // 0x29c244: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x29C248u;
        goto label_29c248;
    }
    ctx->pc = 0x29C240u;
    {
        const bool branch_taken_0x29c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C240u;
            // 0x29c244: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c240) {
            ctx->pc = 0x29C260u;
            goto label_29c260;
        }
    }
    ctx->pc = 0x29C248u;
label_29c248:
    // 0x29c248: 0x10000004  b           . + 4 + (0x4 << 2)
label_29c24c:
    if (ctx->pc == 0x29C24Cu) {
        ctx->pc = 0x29C24Cu;
            // 0x29c24c: 0xe51025  or          $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->pc = 0x29C250u;
        goto label_29c250;
    }
    ctx->pc = 0x29C248u;
    {
        const bool branch_taken_0x29c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C248u;
            // 0x29c24c: 0xe51025  or          $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c248) {
            ctx->pc = 0x29C25Cu;
            goto label_29c25c;
        }
    }
    ctx->pc = 0x29C250u;
label_29c250:
    // 0x29c250: 0x10000002  b           . + 4 + (0x2 << 2)
label_29c254:
    if (ctx->pc == 0x29C254u) {
        ctx->pc = 0x29C254u;
            // 0x29c254: 0xe51024  and         $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
        ctx->pc = 0x29C258u;
        goto label_29c258;
    }
    ctx->pc = 0x29C250u;
    {
        const bool branch_taken_0x29c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C250u;
            // 0x29c254: 0xe51024  and         $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c250) {
            ctx->pc = 0x29C25Cu;
            goto label_29c25c;
        }
    }
    ctx->pc = 0x29C258u;
label_29c258:
    // 0x29c258: 0xe51026  xor         $v0, $a3, $a1
    ctx->pc = 0x29c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
label_29c25c:
    // 0x29c25c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_29c260:
    // 0x29c260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c264:
    // 0x29c264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c268:
    // 0x29c268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c26c:
    // 0x29c26c: 0x3e00008  jr          $ra
label_29c270:
    if (ctx->pc == 0x29C270u) {
        ctx->pc = 0x29C270u;
            // 0x29c270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29C274u;
        goto label_29c274;
    }
    ctx->pc = 0x29C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C26Cu;
            // 0x29c270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C274u;
label_29c274:
    // 0x29c274: 0x0  nop
    ctx->pc = 0x29c274u;
    // NOP
label_29c278:
    // 0x29c278: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29c278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_29c27c:
    // 0x29c27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29c280:
    if (ctx->pc == 0x29C280u) {
        ctx->pc = 0x29C280u;
            // 0x29c280: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C284u;
        goto label_29c284;
    }
    ctx->pc = 0x29C27Cu;
    {
        const bool branch_taken_0x29c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C27Cu;
            // 0x29c280: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c27c) {
            ctx->pc = 0x29C28Cu;
            goto label_29c28c;
        }
    }
    ctx->pc = 0x29C284u;
label_29c284:
    // 0x29c284: 0x3e00008  jr          $ra
label_29c288:
    if (ctx->pc == 0x29C288u) {
        ctx->pc = 0x29C288u;
            // 0x29c288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29C28Cu;
        goto label_29c28c;
    }
    ctx->pc = 0x29C284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C284u;
            // 0x29c288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C28Cu;
label_29c28c:
    // 0x29c28c: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x29c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_29c290:
    // 0x29c290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c294:
    // 0x29c294: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29c298:
    // 0x29c298: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_29c29c:
    // 0x29c29c: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_29c2a0:
    if (ctx->pc == 0x29C2A0u) {
        ctx->pc = 0x29C2A0u;
            // 0x29c2a0: 0x1223021  addu        $a2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x29C2A4u;
        goto label_29c2a4;
    }
    ctx->pc = 0x29C29Cu;
    {
        const bool branch_taken_0x29c29c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C29Cu;
            // 0x29c2a0: 0x1223021  addu        $a2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c29c) {
            ctx->pc = 0x29C2DCu;
            goto label_29c2dc;
        }
    }
    ctx->pc = 0x29C2A4u;
label_29c2a4:
    // 0x29c2a4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x29c2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_29c2a8:
    // 0x29c2a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_29c2ac:
    if (ctx->pc == 0x29C2ACu) {
        ctx->pc = 0x29C2ACu;
            // 0x29c2ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29C2B0u;
        goto label_29c2b0;
    }
    ctx->pc = 0x29C2A8u;
    {
        const bool branch_taken_0x29c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c2a8) {
            ctx->pc = 0x29C2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2A8u;
            // 0x29c2ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C2C0u;
            goto label_29c2c0;
        }
    }
    ctx->pc = 0x29C2B0u;
label_29c2b0:
    // 0x29c2b0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_29c2b4:
    if (ctx->pc == 0x29C2B4u) {
        ctx->pc = 0x29C2B4u;
            // 0x29c2b4: 0x81200  sll         $v0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x29C2B8u;
        goto label_29c2b8;
    }
    ctx->pc = 0x29C2B0u;
    {
        const bool branch_taken_0x29c2b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2B0u;
            // 0x29c2b4: 0x81200  sll         $v0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2b0) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C2B8u;
label_29c2b8:
    // 0x29c2b8: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_29c2bc:
    if (ctx->pc == 0x29C2BCu) {
        ctx->pc = 0x29C2C0u;
        goto label_29c2c0;
    }
    ctx->pc = 0x29C2B8u;
    {
        const bool branch_taken_0x29c2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c2b8) {
            ctx->pc = 0x29C284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c284;
        }
    }
    ctx->pc = 0x29C2C0u;
label_29c2c0:
    // 0x29c2c0: 0x50a2000d  beql        $a1, $v0, . + 4 + (0xD << 2)
label_29c2c4:
    if (ctx->pc == 0x29C2C4u) {
        ctx->pc = 0x29C2C4u;
            // 0x29c2c4: 0x8d240020  lw          $a0, 0x20($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
        ctx->pc = 0x29C2C8u;
        goto label_29c2c8;
    }
    ctx->pc = 0x29C2C0u;
    {
        const bool branch_taken_0x29c2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x29c2c0) {
            ctx->pc = 0x29C2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2C0u;
            // 0x29c2c4: 0x8d240020  lw          $a0, 0x20($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C2F8u;
            goto label_29c2f8;
        }
    }
    ctx->pc = 0x29C2C8u;
label_29c2c8:
    // 0x29c2c8: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_29c2cc:
    if (ctx->pc == 0x29C2CCu) {
        ctx->pc = 0x29C2D0u;
        goto label_29c2d0;
    }
    ctx->pc = 0x29C2C8u;
    {
        const bool branch_taken_0x29c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c2c8) {
            ctx->pc = 0x29C284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c284;
        }
    }
    ctx->pc = 0x29C2D0u;
label_29c2d0:
    // 0x29c2d0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x29c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_29c2d4:
    // 0x29c2d4: 0x1000000f  b           . + 4 + (0xF << 2)
label_29c2d8:
    if (ctx->pc == 0x29C2D8u) {
        ctx->pc = 0x29C2D8u;
            // 0x29c2d8: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x29C2DCu;
        goto label_29c2dc;
    }
    ctx->pc = 0x29C2D4u;
    {
        const bool branch_taken_0x29c2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2D4u;
            // 0x29c2d8: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2d4) {
            ctx->pc = 0x29C314u;
            goto label_29c314;
        }
    }
    ctx->pc = 0x29C2DCu;
label_29c2dc:
    // 0x29c2dc: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x29c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_29c2e0:
    // 0x29c2e0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x29c2e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_29c2e4:
    // 0x29c2e4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x29c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_29c2e8:
    // 0x29c2e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_29c2ec:
    // 0x29c2ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29c2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29c2f0:
    // 0x29c2f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_29c2f4:
    if (ctx->pc == 0x29C2F4u) {
        ctx->pc = 0x29C2F4u;
            // 0x29c2f4: 0xfcc30000  sd          $v1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
        ctx->pc = 0x29C2F8u;
        goto label_29c2f8;
    }
    ctx->pc = 0x29C2F0u;
    {
        const bool branch_taken_0x29c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2F0u;
            // 0x29c2f4: 0xfcc30000  sd          $v1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2f0) {
            ctx->pc = 0x29C314u;
            goto label_29c314;
        }
    }
    ctx->pc = 0x29C2F8u;
label_29c2f8:
    // 0x29c2f8: 0x8d23001c  lw          $v1, 0x1C($t1)
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
label_29c2fc:
    // 0x29c2fc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x29c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_29c300:
    // 0x29c300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29c304:
    // 0x29c304: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29c308:
    // 0x29c308: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x29c308u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_29c30c:
    // 0x29c30c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x29c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_29c310:
    // 0x29c310: 0xad240020  sw          $a0, 0x20($t1)
    ctx->pc = 0x29c310u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 4));
label_29c314:
    // 0x29c314: 0x3e00008  jr          $ra
label_29c318:
    if (ctx->pc == 0x29C318u) {
        ctx->pc = 0x29C318u;
            // 0x29c318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C31Cu;
        goto label_29c31c;
    }
    ctx->pc = 0x29C314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C314u;
            // 0x29c318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C31Cu;
label_29c31c:
    // 0x29c31c: 0x0  nop
    ctx->pc = 0x29c31cu;
    // NOP
    ctx->pc = 0x29c320u;
}
