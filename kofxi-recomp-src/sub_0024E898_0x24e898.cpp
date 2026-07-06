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

// Function: sub_0024E898
// Address: 0x24e898 - 0x24f0d0
void sub_0024E898_0x24e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E898_0x24e898");
#endif

    switch (ctx->pc) {
        case 0x24e898u: goto label_24e898;
        case 0x24e89cu: goto label_24e89c;
        case 0x24e8a0u: goto label_24e8a0;
        case 0x24e8a4u: goto label_24e8a4;
        case 0x24e8a8u: goto label_24e8a8;
        case 0x24e8acu: goto label_24e8ac;
        case 0x24e8b0u: goto label_24e8b0;
        case 0x24e8b4u: goto label_24e8b4;
        case 0x24e8b8u: goto label_24e8b8;
        case 0x24e8bcu: goto label_24e8bc;
        case 0x24e8c0u: goto label_24e8c0;
        case 0x24e8c4u: goto label_24e8c4;
        case 0x24e8c8u: goto label_24e8c8;
        case 0x24e8ccu: goto label_24e8cc;
        case 0x24e8d0u: goto label_24e8d0;
        case 0x24e8d4u: goto label_24e8d4;
        case 0x24e8d8u: goto label_24e8d8;
        case 0x24e8dcu: goto label_24e8dc;
        case 0x24e8e0u: goto label_24e8e0;
        case 0x24e8e4u: goto label_24e8e4;
        case 0x24e8e8u: goto label_24e8e8;
        case 0x24e8ecu: goto label_24e8ec;
        case 0x24e8f0u: goto label_24e8f0;
        case 0x24e8f4u: goto label_24e8f4;
        case 0x24e8f8u: goto label_24e8f8;
        case 0x24e8fcu: goto label_24e8fc;
        case 0x24e900u: goto label_24e900;
        case 0x24e904u: goto label_24e904;
        case 0x24e908u: goto label_24e908;
        case 0x24e90cu: goto label_24e90c;
        case 0x24e910u: goto label_24e910;
        case 0x24e914u: goto label_24e914;
        case 0x24e918u: goto label_24e918;
        case 0x24e91cu: goto label_24e91c;
        case 0x24e920u: goto label_24e920;
        case 0x24e924u: goto label_24e924;
        case 0x24e928u: goto label_24e928;
        case 0x24e92cu: goto label_24e92c;
        case 0x24e930u: goto label_24e930;
        case 0x24e934u: goto label_24e934;
        case 0x24e938u: goto label_24e938;
        case 0x24e93cu: goto label_24e93c;
        case 0x24e940u: goto label_24e940;
        case 0x24e944u: goto label_24e944;
        case 0x24e948u: goto label_24e948;
        case 0x24e94cu: goto label_24e94c;
        case 0x24e950u: goto label_24e950;
        case 0x24e954u: goto label_24e954;
        case 0x24e958u: goto label_24e958;
        case 0x24e95cu: goto label_24e95c;
        case 0x24e960u: goto label_24e960;
        case 0x24e964u: goto label_24e964;
        case 0x24e968u: goto label_24e968;
        case 0x24e96cu: goto label_24e96c;
        case 0x24e970u: goto label_24e970;
        case 0x24e974u: goto label_24e974;
        case 0x24e978u: goto label_24e978;
        case 0x24e97cu: goto label_24e97c;
        case 0x24e980u: goto label_24e980;
        case 0x24e984u: goto label_24e984;
        case 0x24e988u: goto label_24e988;
        case 0x24e98cu: goto label_24e98c;
        case 0x24e990u: goto label_24e990;
        case 0x24e994u: goto label_24e994;
        case 0x24e998u: goto label_24e998;
        case 0x24e99cu: goto label_24e99c;
        case 0x24e9a0u: goto label_24e9a0;
        case 0x24e9a4u: goto label_24e9a4;
        case 0x24e9a8u: goto label_24e9a8;
        case 0x24e9acu: goto label_24e9ac;
        case 0x24e9b0u: goto label_24e9b0;
        case 0x24e9b4u: goto label_24e9b4;
        case 0x24e9b8u: goto label_24e9b8;
        case 0x24e9bcu: goto label_24e9bc;
        case 0x24e9c0u: goto label_24e9c0;
        case 0x24e9c4u: goto label_24e9c4;
        case 0x24e9c8u: goto label_24e9c8;
        case 0x24e9ccu: goto label_24e9cc;
        case 0x24e9d0u: goto label_24e9d0;
        case 0x24e9d4u: goto label_24e9d4;
        case 0x24e9d8u: goto label_24e9d8;
        case 0x24e9dcu: goto label_24e9dc;
        case 0x24e9e0u: goto label_24e9e0;
        case 0x24e9e4u: goto label_24e9e4;
        case 0x24e9e8u: goto label_24e9e8;
        case 0x24e9ecu: goto label_24e9ec;
        case 0x24e9f0u: goto label_24e9f0;
        case 0x24e9f4u: goto label_24e9f4;
        case 0x24e9f8u: goto label_24e9f8;
        case 0x24e9fcu: goto label_24e9fc;
        case 0x24ea00u: goto label_24ea00;
        case 0x24ea04u: goto label_24ea04;
        case 0x24ea08u: goto label_24ea08;
        case 0x24ea0cu: goto label_24ea0c;
        case 0x24ea10u: goto label_24ea10;
        case 0x24ea14u: goto label_24ea14;
        case 0x24ea18u: goto label_24ea18;
        case 0x24ea1cu: goto label_24ea1c;
        case 0x24ea20u: goto label_24ea20;
        case 0x24ea24u: goto label_24ea24;
        case 0x24ea28u: goto label_24ea28;
        case 0x24ea2cu: goto label_24ea2c;
        case 0x24ea30u: goto label_24ea30;
        case 0x24ea34u: goto label_24ea34;
        case 0x24ea38u: goto label_24ea38;
        case 0x24ea3cu: goto label_24ea3c;
        case 0x24ea40u: goto label_24ea40;
        case 0x24ea44u: goto label_24ea44;
        case 0x24ea48u: goto label_24ea48;
        case 0x24ea4cu: goto label_24ea4c;
        case 0x24ea50u: goto label_24ea50;
        case 0x24ea54u: goto label_24ea54;
        case 0x24ea58u: goto label_24ea58;
        case 0x24ea5cu: goto label_24ea5c;
        case 0x24ea60u: goto label_24ea60;
        case 0x24ea64u: goto label_24ea64;
        case 0x24ea68u: goto label_24ea68;
        case 0x24ea6cu: goto label_24ea6c;
        case 0x24ea70u: goto label_24ea70;
        case 0x24ea74u: goto label_24ea74;
        case 0x24ea78u: goto label_24ea78;
        case 0x24ea7cu: goto label_24ea7c;
        case 0x24ea80u: goto label_24ea80;
        case 0x24ea84u: goto label_24ea84;
        case 0x24ea88u: goto label_24ea88;
        case 0x24ea8cu: goto label_24ea8c;
        case 0x24ea90u: goto label_24ea90;
        case 0x24ea94u: goto label_24ea94;
        case 0x24ea98u: goto label_24ea98;
        case 0x24ea9cu: goto label_24ea9c;
        case 0x24eaa0u: goto label_24eaa0;
        case 0x24eaa4u: goto label_24eaa4;
        case 0x24eaa8u: goto label_24eaa8;
        case 0x24eaacu: goto label_24eaac;
        case 0x24eab0u: goto label_24eab0;
        case 0x24eab4u: goto label_24eab4;
        case 0x24eab8u: goto label_24eab8;
        case 0x24eabcu: goto label_24eabc;
        case 0x24eac0u: goto label_24eac0;
        case 0x24eac4u: goto label_24eac4;
        case 0x24eac8u: goto label_24eac8;
        case 0x24eaccu: goto label_24eacc;
        case 0x24ead0u: goto label_24ead0;
        case 0x24ead4u: goto label_24ead4;
        case 0x24ead8u: goto label_24ead8;
        case 0x24eadcu: goto label_24eadc;
        case 0x24eae0u: goto label_24eae0;
        case 0x24eae4u: goto label_24eae4;
        case 0x24eae8u: goto label_24eae8;
        case 0x24eaecu: goto label_24eaec;
        case 0x24eaf0u: goto label_24eaf0;
        case 0x24eaf4u: goto label_24eaf4;
        case 0x24eaf8u: goto label_24eaf8;
        case 0x24eafcu: goto label_24eafc;
        case 0x24eb00u: goto label_24eb00;
        case 0x24eb04u: goto label_24eb04;
        case 0x24eb08u: goto label_24eb08;
        case 0x24eb0cu: goto label_24eb0c;
        case 0x24eb10u: goto label_24eb10;
        case 0x24eb14u: goto label_24eb14;
        case 0x24eb18u: goto label_24eb18;
        case 0x24eb1cu: goto label_24eb1c;
        case 0x24eb20u: goto label_24eb20;
        case 0x24eb24u: goto label_24eb24;
        case 0x24eb28u: goto label_24eb28;
        case 0x24eb2cu: goto label_24eb2c;
        case 0x24eb30u: goto label_24eb30;
        case 0x24eb34u: goto label_24eb34;
        case 0x24eb38u: goto label_24eb38;
        case 0x24eb3cu: goto label_24eb3c;
        case 0x24eb40u: goto label_24eb40;
        case 0x24eb44u: goto label_24eb44;
        case 0x24eb48u: goto label_24eb48;
        case 0x24eb4cu: goto label_24eb4c;
        case 0x24eb50u: goto label_24eb50;
        case 0x24eb54u: goto label_24eb54;
        case 0x24eb58u: goto label_24eb58;
        case 0x24eb5cu: goto label_24eb5c;
        case 0x24eb60u: goto label_24eb60;
        case 0x24eb64u: goto label_24eb64;
        case 0x24eb68u: goto label_24eb68;
        case 0x24eb6cu: goto label_24eb6c;
        case 0x24eb70u: goto label_24eb70;
        case 0x24eb74u: goto label_24eb74;
        case 0x24eb78u: goto label_24eb78;
        case 0x24eb7cu: goto label_24eb7c;
        case 0x24eb80u: goto label_24eb80;
        case 0x24eb84u: goto label_24eb84;
        case 0x24eb88u: goto label_24eb88;
        case 0x24eb8cu: goto label_24eb8c;
        case 0x24eb90u: goto label_24eb90;
        case 0x24eb94u: goto label_24eb94;
        case 0x24eb98u: goto label_24eb98;
        case 0x24eb9cu: goto label_24eb9c;
        case 0x24eba0u: goto label_24eba0;
        case 0x24eba4u: goto label_24eba4;
        case 0x24eba8u: goto label_24eba8;
        case 0x24ebacu: goto label_24ebac;
        case 0x24ebb0u: goto label_24ebb0;
        case 0x24ebb4u: goto label_24ebb4;
        case 0x24ebb8u: goto label_24ebb8;
        case 0x24ebbcu: goto label_24ebbc;
        case 0x24ebc0u: goto label_24ebc0;
        case 0x24ebc4u: goto label_24ebc4;
        case 0x24ebc8u: goto label_24ebc8;
        case 0x24ebccu: goto label_24ebcc;
        case 0x24ebd0u: goto label_24ebd0;
        case 0x24ebd4u: goto label_24ebd4;
        case 0x24ebd8u: goto label_24ebd8;
        case 0x24ebdcu: goto label_24ebdc;
        case 0x24ebe0u: goto label_24ebe0;
        case 0x24ebe4u: goto label_24ebe4;
        case 0x24ebe8u: goto label_24ebe8;
        case 0x24ebecu: goto label_24ebec;
        case 0x24ebf0u: goto label_24ebf0;
        case 0x24ebf4u: goto label_24ebf4;
        case 0x24ebf8u: goto label_24ebf8;
        case 0x24ebfcu: goto label_24ebfc;
        case 0x24ec00u: goto label_24ec00;
        case 0x24ec04u: goto label_24ec04;
        case 0x24ec08u: goto label_24ec08;
        case 0x24ec0cu: goto label_24ec0c;
        case 0x24ec10u: goto label_24ec10;
        case 0x24ec14u: goto label_24ec14;
        case 0x24ec18u: goto label_24ec18;
        case 0x24ec1cu: goto label_24ec1c;
        case 0x24ec20u: goto label_24ec20;
        case 0x24ec24u: goto label_24ec24;
        case 0x24ec28u: goto label_24ec28;
        case 0x24ec2cu: goto label_24ec2c;
        case 0x24ec30u: goto label_24ec30;
        case 0x24ec34u: goto label_24ec34;
        case 0x24ec38u: goto label_24ec38;
        case 0x24ec3cu: goto label_24ec3c;
        case 0x24ec40u: goto label_24ec40;
        case 0x24ec44u: goto label_24ec44;
        case 0x24ec48u: goto label_24ec48;
        case 0x24ec4cu: goto label_24ec4c;
        case 0x24ec50u: goto label_24ec50;
        case 0x24ec54u: goto label_24ec54;
        case 0x24ec58u: goto label_24ec58;
        case 0x24ec5cu: goto label_24ec5c;
        case 0x24ec60u: goto label_24ec60;
        case 0x24ec64u: goto label_24ec64;
        case 0x24ec68u: goto label_24ec68;
        case 0x24ec6cu: goto label_24ec6c;
        case 0x24ec70u: goto label_24ec70;
        case 0x24ec74u: goto label_24ec74;
        case 0x24ec78u: goto label_24ec78;
        case 0x24ec7cu: goto label_24ec7c;
        case 0x24ec80u: goto label_24ec80;
        case 0x24ec84u: goto label_24ec84;
        case 0x24ec88u: goto label_24ec88;
        case 0x24ec8cu: goto label_24ec8c;
        case 0x24ec90u: goto label_24ec90;
        case 0x24ec94u: goto label_24ec94;
        case 0x24ec98u: goto label_24ec98;
        case 0x24ec9cu: goto label_24ec9c;
        case 0x24eca0u: goto label_24eca0;
        case 0x24eca4u: goto label_24eca4;
        case 0x24eca8u: goto label_24eca8;
        case 0x24ecacu: goto label_24ecac;
        case 0x24ecb0u: goto label_24ecb0;
        case 0x24ecb4u: goto label_24ecb4;
        case 0x24ecb8u: goto label_24ecb8;
        case 0x24ecbcu: goto label_24ecbc;
        case 0x24ecc0u: goto label_24ecc0;
        case 0x24ecc4u: goto label_24ecc4;
        case 0x24ecc8u: goto label_24ecc8;
        case 0x24ecccu: goto label_24eccc;
        case 0x24ecd0u: goto label_24ecd0;
        case 0x24ecd4u: goto label_24ecd4;
        case 0x24ecd8u: goto label_24ecd8;
        case 0x24ecdcu: goto label_24ecdc;
        case 0x24ece0u: goto label_24ece0;
        case 0x24ece4u: goto label_24ece4;
        case 0x24ece8u: goto label_24ece8;
        case 0x24ececu: goto label_24ecec;
        case 0x24ecf0u: goto label_24ecf0;
        case 0x24ecf4u: goto label_24ecf4;
        case 0x24ecf8u: goto label_24ecf8;
        case 0x24ecfcu: goto label_24ecfc;
        case 0x24ed00u: goto label_24ed00;
        case 0x24ed04u: goto label_24ed04;
        case 0x24ed08u: goto label_24ed08;
        case 0x24ed0cu: goto label_24ed0c;
        case 0x24ed10u: goto label_24ed10;
        case 0x24ed14u: goto label_24ed14;
        case 0x24ed18u: goto label_24ed18;
        case 0x24ed1cu: goto label_24ed1c;
        case 0x24ed20u: goto label_24ed20;
        case 0x24ed24u: goto label_24ed24;
        case 0x24ed28u: goto label_24ed28;
        case 0x24ed2cu: goto label_24ed2c;
        case 0x24ed30u: goto label_24ed30;
        case 0x24ed34u: goto label_24ed34;
        case 0x24ed38u: goto label_24ed38;
        case 0x24ed3cu: goto label_24ed3c;
        case 0x24ed40u: goto label_24ed40;
        case 0x24ed44u: goto label_24ed44;
        case 0x24ed48u: goto label_24ed48;
        case 0x24ed4cu: goto label_24ed4c;
        case 0x24ed50u: goto label_24ed50;
        case 0x24ed54u: goto label_24ed54;
        case 0x24ed58u: goto label_24ed58;
        case 0x24ed5cu: goto label_24ed5c;
        case 0x24ed60u: goto label_24ed60;
        case 0x24ed64u: goto label_24ed64;
        case 0x24ed68u: goto label_24ed68;
        case 0x24ed6cu: goto label_24ed6c;
        case 0x24ed70u: goto label_24ed70;
        case 0x24ed74u: goto label_24ed74;
        case 0x24ed78u: goto label_24ed78;
        case 0x24ed7cu: goto label_24ed7c;
        case 0x24ed80u: goto label_24ed80;
        case 0x24ed84u: goto label_24ed84;
        case 0x24ed88u: goto label_24ed88;
        case 0x24ed8cu: goto label_24ed8c;
        case 0x24ed90u: goto label_24ed90;
        case 0x24ed94u: goto label_24ed94;
        case 0x24ed98u: goto label_24ed98;
        case 0x24ed9cu: goto label_24ed9c;
        case 0x24eda0u: goto label_24eda0;
        case 0x24eda4u: goto label_24eda4;
        case 0x24eda8u: goto label_24eda8;
        case 0x24edacu: goto label_24edac;
        case 0x24edb0u: goto label_24edb0;
        case 0x24edb4u: goto label_24edb4;
        case 0x24edb8u: goto label_24edb8;
        case 0x24edbcu: goto label_24edbc;
        case 0x24edc0u: goto label_24edc0;
        case 0x24edc4u: goto label_24edc4;
        case 0x24edc8u: goto label_24edc8;
        case 0x24edccu: goto label_24edcc;
        case 0x24edd0u: goto label_24edd0;
        case 0x24edd4u: goto label_24edd4;
        case 0x24edd8u: goto label_24edd8;
        case 0x24eddcu: goto label_24eddc;
        case 0x24ede0u: goto label_24ede0;
        case 0x24ede4u: goto label_24ede4;
        case 0x24ede8u: goto label_24ede8;
        case 0x24edecu: goto label_24edec;
        case 0x24edf0u: goto label_24edf0;
        case 0x24edf4u: goto label_24edf4;
        case 0x24edf8u: goto label_24edf8;
        case 0x24edfcu: goto label_24edfc;
        case 0x24ee00u: goto label_24ee00;
        case 0x24ee04u: goto label_24ee04;
        case 0x24ee08u: goto label_24ee08;
        case 0x24ee0cu: goto label_24ee0c;
        case 0x24ee10u: goto label_24ee10;
        case 0x24ee14u: goto label_24ee14;
        case 0x24ee18u: goto label_24ee18;
        case 0x24ee1cu: goto label_24ee1c;
        case 0x24ee20u: goto label_24ee20;
        case 0x24ee24u: goto label_24ee24;
        case 0x24ee28u: goto label_24ee28;
        case 0x24ee2cu: goto label_24ee2c;
        case 0x24ee30u: goto label_24ee30;
        case 0x24ee34u: goto label_24ee34;
        case 0x24ee38u: goto label_24ee38;
        case 0x24ee3cu: goto label_24ee3c;
        case 0x24ee40u: goto label_24ee40;
        case 0x24ee44u: goto label_24ee44;
        case 0x24ee48u: goto label_24ee48;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee50u: goto label_24ee50;
        case 0x24ee54u: goto label_24ee54;
        case 0x24ee58u: goto label_24ee58;
        case 0x24ee5cu: goto label_24ee5c;
        case 0x24ee60u: goto label_24ee60;
        case 0x24ee64u: goto label_24ee64;
        case 0x24ee68u: goto label_24ee68;
        case 0x24ee6cu: goto label_24ee6c;
        case 0x24ee70u: goto label_24ee70;
        case 0x24ee74u: goto label_24ee74;
        case 0x24ee78u: goto label_24ee78;
        case 0x24ee7cu: goto label_24ee7c;
        case 0x24ee80u: goto label_24ee80;
        case 0x24ee84u: goto label_24ee84;
        case 0x24ee88u: goto label_24ee88;
        case 0x24ee8cu: goto label_24ee8c;
        case 0x24ee90u: goto label_24ee90;
        case 0x24ee94u: goto label_24ee94;
        case 0x24ee98u: goto label_24ee98;
        case 0x24ee9cu: goto label_24ee9c;
        case 0x24eea0u: goto label_24eea0;
        case 0x24eea4u: goto label_24eea4;
        case 0x24eea8u: goto label_24eea8;
        case 0x24eeacu: goto label_24eeac;
        case 0x24eeb0u: goto label_24eeb0;
        case 0x24eeb4u: goto label_24eeb4;
        case 0x24eeb8u: goto label_24eeb8;
        case 0x24eebcu: goto label_24eebc;
        case 0x24eec0u: goto label_24eec0;
        case 0x24eec4u: goto label_24eec4;
        case 0x24eec8u: goto label_24eec8;
        case 0x24eeccu: goto label_24eecc;
        case 0x24eed0u: goto label_24eed0;
        case 0x24eed4u: goto label_24eed4;
        case 0x24eed8u: goto label_24eed8;
        case 0x24eedcu: goto label_24eedc;
        case 0x24eee0u: goto label_24eee0;
        case 0x24eee4u: goto label_24eee4;
        case 0x24eee8u: goto label_24eee8;
        case 0x24eeecu: goto label_24eeec;
        case 0x24eef0u: goto label_24eef0;
        case 0x24eef4u: goto label_24eef4;
        case 0x24eef8u: goto label_24eef8;
        case 0x24eefcu: goto label_24eefc;
        case 0x24ef00u: goto label_24ef00;
        case 0x24ef04u: goto label_24ef04;
        case 0x24ef08u: goto label_24ef08;
        case 0x24ef0cu: goto label_24ef0c;
        case 0x24ef10u: goto label_24ef10;
        case 0x24ef14u: goto label_24ef14;
        case 0x24ef18u: goto label_24ef18;
        case 0x24ef1cu: goto label_24ef1c;
        case 0x24ef20u: goto label_24ef20;
        case 0x24ef24u: goto label_24ef24;
        case 0x24ef28u: goto label_24ef28;
        case 0x24ef2cu: goto label_24ef2c;
        case 0x24ef30u: goto label_24ef30;
        case 0x24ef34u: goto label_24ef34;
        case 0x24ef38u: goto label_24ef38;
        case 0x24ef3cu: goto label_24ef3c;
        case 0x24ef40u: goto label_24ef40;
        case 0x24ef44u: goto label_24ef44;
        case 0x24ef48u: goto label_24ef48;
        case 0x24ef4cu: goto label_24ef4c;
        case 0x24ef50u: goto label_24ef50;
        case 0x24ef54u: goto label_24ef54;
        case 0x24ef58u: goto label_24ef58;
        case 0x24ef5cu: goto label_24ef5c;
        case 0x24ef60u: goto label_24ef60;
        case 0x24ef64u: goto label_24ef64;
        case 0x24ef68u: goto label_24ef68;
        case 0x24ef6cu: goto label_24ef6c;
        case 0x24ef70u: goto label_24ef70;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef78u: goto label_24ef78;
        case 0x24ef7cu: goto label_24ef7c;
        case 0x24ef80u: goto label_24ef80;
        case 0x24ef84u: goto label_24ef84;
        case 0x24ef88u: goto label_24ef88;
        case 0x24ef8cu: goto label_24ef8c;
        case 0x24ef90u: goto label_24ef90;
        case 0x24ef94u: goto label_24ef94;
        case 0x24ef98u: goto label_24ef98;
        case 0x24ef9cu: goto label_24ef9c;
        case 0x24efa0u: goto label_24efa0;
        case 0x24efa4u: goto label_24efa4;
        case 0x24efa8u: goto label_24efa8;
        case 0x24efacu: goto label_24efac;
        case 0x24efb0u: goto label_24efb0;
        case 0x24efb4u: goto label_24efb4;
        case 0x24efb8u: goto label_24efb8;
        case 0x24efbcu: goto label_24efbc;
        case 0x24efc0u: goto label_24efc0;
        case 0x24efc4u: goto label_24efc4;
        case 0x24efc8u: goto label_24efc8;
        case 0x24efccu: goto label_24efcc;
        case 0x24efd0u: goto label_24efd0;
        case 0x24efd4u: goto label_24efd4;
        case 0x24efd8u: goto label_24efd8;
        case 0x24efdcu: goto label_24efdc;
        case 0x24efe0u: goto label_24efe0;
        case 0x24efe4u: goto label_24efe4;
        case 0x24efe8u: goto label_24efe8;
        case 0x24efecu: goto label_24efec;
        case 0x24eff0u: goto label_24eff0;
        case 0x24eff4u: goto label_24eff4;
        case 0x24eff8u: goto label_24eff8;
        case 0x24effcu: goto label_24effc;
        case 0x24f000u: goto label_24f000;
        case 0x24f004u: goto label_24f004;
        case 0x24f008u: goto label_24f008;
        case 0x24f00cu: goto label_24f00c;
        case 0x24f010u: goto label_24f010;
        case 0x24f014u: goto label_24f014;
        case 0x24f018u: goto label_24f018;
        case 0x24f01cu: goto label_24f01c;
        case 0x24f020u: goto label_24f020;
        case 0x24f024u: goto label_24f024;
        case 0x24f028u: goto label_24f028;
        case 0x24f02cu: goto label_24f02c;
        case 0x24f030u: goto label_24f030;
        case 0x24f034u: goto label_24f034;
        case 0x24f038u: goto label_24f038;
        case 0x24f03cu: goto label_24f03c;
        case 0x24f040u: goto label_24f040;
        case 0x24f044u: goto label_24f044;
        case 0x24f048u: goto label_24f048;
        case 0x24f04cu: goto label_24f04c;
        case 0x24f050u: goto label_24f050;
        case 0x24f054u: goto label_24f054;
        case 0x24f058u: goto label_24f058;
        case 0x24f05cu: goto label_24f05c;
        case 0x24f060u: goto label_24f060;
        case 0x24f064u: goto label_24f064;
        case 0x24f068u: goto label_24f068;
        case 0x24f06cu: goto label_24f06c;
        case 0x24f070u: goto label_24f070;
        case 0x24f074u: goto label_24f074;
        case 0x24f078u: goto label_24f078;
        case 0x24f07cu: goto label_24f07c;
        case 0x24f080u: goto label_24f080;
        case 0x24f084u: goto label_24f084;
        case 0x24f088u: goto label_24f088;
        case 0x24f08cu: goto label_24f08c;
        case 0x24f090u: goto label_24f090;
        case 0x24f094u: goto label_24f094;
        case 0x24f098u: goto label_24f098;
        case 0x24f09cu: goto label_24f09c;
        case 0x24f0a0u: goto label_24f0a0;
        case 0x24f0a4u: goto label_24f0a4;
        case 0x24f0a8u: goto label_24f0a8;
        case 0x24f0acu: goto label_24f0ac;
        case 0x24f0b0u: goto label_24f0b0;
        case 0x24f0b4u: goto label_24f0b4;
        case 0x24f0b8u: goto label_24f0b8;
        case 0x24f0bcu: goto label_24f0bc;
        case 0x24f0c0u: goto label_24f0c0;
        case 0x24f0c4u: goto label_24f0c4;
        case 0x24f0c8u: goto label_24f0c8;
        case 0x24f0ccu: goto label_24f0cc;
        default: break;
    }

    ctx->pc = 0x24e898u;

label_24e898:
    // 0x24e898: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_24e89c:
    // 0x24e89c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24e8a0:
    // 0x24e8a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_24e8a4:
    // 0x24e8a4: 0x8c6211a0  lw          $v0, 0x11A0($v1)
    ctx->pc = 0x24e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4512)));
label_24e8a8:
    // 0x24e8a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24e8a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e8ac:
    // 0x24e8ac: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_24e8b0:
    // 0x24e8b0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x24e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_24e8b4:
    // 0x24e8b4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_24e8b8:
    // 0x24e8b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_24e8bc:
    // 0x24e8bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_24e8c0:
    // 0x24e8c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_24e8c4:
    // 0x24e8c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24e8c8:
    // 0x24e8c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_24e8cc:
    // 0x24e8cc: 0x104001e6  beqz        $v0, . + 4 + (0x1E6 << 2)
label_24e8d0:
    if (ctx->pc == 0x24E8D0u) {
        ctx->pc = 0x24E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8CCu;
        // 0x24e8d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E8D4u;
        goto label_24e8d4;
    }
    ctx->pc = 0x24E8CCu;
    {
        const bool branch_taken_0x24e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8CCu;
        // 0x24e8d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8cc) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24E8D4u;
label_24e8d4:
    // 0x24e8d4: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x24e8d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
label_24e8d8:
    // 0x24e8d8: 0xdee210a8  ld          $v0, 0x10A8($s7)
    ctx->pc = 0x24e8d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 4264)));
label_24e8dc:
    // 0x24e8dc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24e8dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24e8e0:
    // 0x24e8e0: 0xfee210a8  sd          $v0, 0x10A8($s7)
    ctx->pc = 0x24e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4264), GPR_U64(ctx, 2));
label_24e8e4:
    // 0x24e8e4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x24e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24e8e8:
    // 0x24e8e8: 0x2c630014  sltiu       $v1, $v1, 0x14
    ctx->pc = 0x24e8e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_24e8ec:
    // 0x24e8ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_24e8f0:
    if (ctx->pc == 0x24E8F0u) {
        ctx->pc = 0x24E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8ECu;
        // 0x24e8f0: 0x26f010a8  addiu       $s0, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E8F4u;
        goto label_24e8f4;
    }
    ctx->pc = 0x24E8ECu;
    {
        const bool branch_taken_0x24e8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8ECu;
        // 0x24e8f0: 0x26f010a8  addiu       $s0, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8ec) {
            ctx->pc = 0x24E918u;
            goto label_24e918;
        }
    }
    ctx->pc = 0x24E8F4u;
label_24e8f4:
    // 0x24e8f4: 0xc08acea  jal         func_22B3A8
label_24e8f8:
    if (ctx->pc == 0x24E8F8u) {
        ctx->pc = 0x24E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8F4u;
        // 0x24e8f8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E8FCu;
        goto label_24e8fc;
    }
    ctx->pc = 0x24E8F4u;
    SET_GPR_U32(ctx, 31, 0x24E8FCu);
    ctx->pc = 0x24E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E8F4u;
    // 0x24e8f8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x24E8F4u, 0x24E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8FCu;
label_24e8fc:
    // 0x24e8fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24e8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e900:
    // 0x24e900: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_24e904:
    if (ctx->pc == 0x24E904u) {
        ctx->pc = 0x24E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E900u;
        // 0x24e904: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E908u;
        goto label_24e908;
    }
    ctx->pc = 0x24E900u;
    {
        const bool branch_taken_0x24e900 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e900) {
            ctx->pc = 0x24E904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E900u;
            // 0x24e904: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E91Cu;
            goto label_24e91c;
        }
    }
    ctx->pc = 0x24E908u;
label_24e908:
    // 0x24e908: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x24e908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_24e90c:
    // 0x24e90c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24e90cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24e910:
    // 0x24e910: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_24e914:
    if (ctx->pc == 0x24E914u) {
        ctx->pc = 0x24E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E910u;
        // 0x24e914: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E918u;
        goto label_24e918;
    }
    ctx->pc = 0x24E910u;
    {
        const bool branch_taken_0x24e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E910u;
        // 0x24e914: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e910) {
            ctx->pc = 0x24F09Cu;
            goto label_24f09c;
        }
    }
    ctx->pc = 0x24E918u;
label_24e918:
    // 0x24e918: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x24e918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_24e91c:
    // 0x24e91c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x24e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24e920:
    // 0x24e920: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x24e920u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_24e924:
    // 0x24e924: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x24e924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
label_24e928:
    // 0x24e928: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_24e92c:
    if (ctx->pc == 0x24E92Cu) {
        ctx->pc = 0x24E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E928u;
        // 0x24e92c: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E930u;
        goto label_24e930;
    }
    ctx->pc = 0x24E928u;
    {
        const bool branch_taken_0x24e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E928u;
        // 0x24e92c: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e928) {
            ctx->pc = 0x24E940u;
            goto label_24e940;
        }
    }
    ctx->pc = 0x24E930u;
label_24e930:
    // 0x24e930: 0xdc6200b8  ld          $v0, 0xB8($v1)
    ctx->pc = 0x24e930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 184)));
label_24e934:
    // 0x24e934: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24e934u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24e938:
    // 0x24e938: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_24e93c:
    if (ctx->pc == 0x24E93Cu) {
        ctx->pc = 0x24E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E938u;
        // 0x24e93c: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E940u;
        goto label_24e940;
    }
    ctx->pc = 0x24E938u;
    {
        const bool branch_taken_0x24e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E938u;
        // 0x24e93c: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e938) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24E940u;
label_24e940:
    // 0x24e940: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x24e940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_24e944:
    // 0x24e944: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x24e944u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24e948:
    // 0x24e948: 0x2ec30014  sltiu       $v1, $s6, 0x14
    ctx->pc = 0x24e948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_24e94c:
    // 0x24e94c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24e950:
    if (ctx->pc == 0x24E950u) {
        ctx->pc = 0x24E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E94Cu;
        // 0x24e950: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E954u;
        goto label_24e954;
    }
    ctx->pc = 0x24E94Cu;
    {
        const bool branch_taken_0x24e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E94Cu;
        // 0x24e950: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e94c) {
            ctx->pc = 0x24E964u;
            goto label_24e964;
        }
    }
    ctx->pc = 0x24E954u;
label_24e954:
    // 0x24e954: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x24e954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
label_24e958:
    // 0x24e958: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24e958u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24e95c:
    // 0x24e95c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_24e960:
    if (ctx->pc == 0x24E960u) {
        ctx->pc = 0x24E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E95Cu;
        // 0x24e960: 0xfc620020  sd          $v0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E964u;
        goto label_24e964;
    }
    ctx->pc = 0x24E95Cu;
    {
        const bool branch_taken_0x24e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E95Cu;
        // 0x24e960: 0xfc620020  sd          $v0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e95c) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24E964u;
label_24e964:
    // 0x24e964: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x24e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24e968:
    // 0x24e968: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x24e968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_24e96c:
    // 0x24e96c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24e970:
    if (ctx->pc == 0x24E970u) {
        ctx->pc = 0x24E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E96Cu;
        // 0x24e970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E974u;
        goto label_24e974;
    }
    ctx->pc = 0x24E96Cu;
    {
        const bool branch_taken_0x24e96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E96Cu;
        // 0x24e970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e96c) {
            ctx->pc = 0x24E99Cu;
            goto label_24e99c;
        }
    }
    ctx->pc = 0x24E974u;
label_24e974:
    // 0x24e974: 0xc08acea  jal         func_22B3A8
label_24e978:
    if (ctx->pc == 0x24E978u) {
        ctx->pc = 0x24E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E974u;
        // 0x24e978: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E97Cu;
        goto label_24e97c;
    }
    ctx->pc = 0x24E974u;
    SET_GPR_U32(ctx, 31, 0x24E97Cu);
    ctx->pc = 0x24E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E974u;
    // 0x24e978: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x24E974u, 0x24E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E97Cu;
label_24e97c:
    // 0x24e97c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24e97cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e980:
    // 0x24e980: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_24e984:
    if (ctx->pc == 0x24E984u) {
        ctx->pc = 0x24E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E980u;
        // 0x24e984: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E988u;
        goto label_24e988;
    }
    ctx->pc = 0x24E980u;
    {
        const bool branch_taken_0x24e980 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e980) {
            ctx->pc = 0x24E984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E980u;
            // 0x24e984: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E99Cu;
            goto label_24e99c;
        }
    }
    ctx->pc = 0x24E988u;
label_24e988:
    // 0x24e988: 0x26e310a8  addiu       $v1, $s7, 0x10A8
    ctx->pc = 0x24e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24e98c:
    // 0x24e98c: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x24e98cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
label_24e990:
    // 0x24e990: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24e990u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24e994:
    // 0x24e994: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_24e998:
    if (ctx->pc == 0x24E998u) {
        ctx->pc = 0x24E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E994u;
        // 0x24e998: 0xfc620020  sd          $v0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E99Cu;
        goto label_24e99c;
    }
    ctx->pc = 0x24E994u;
    {
        const bool branch_taken_0x24e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E994u;
        // 0x24e998: 0xfc620020  sd          $v0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e994) {
            ctx->pc = 0x24F09Cu;
            goto label_24f09c;
        }
    }
    ctx->pc = 0x24E99Cu;
label_24e99c:
    // 0x24e99c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x24e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
label_24e9a0:
    // 0x24e9a0: 0xc08a254  jal         func_228950
label_24e9a4:
    if (ctx->pc == 0x24E9A4u) {
        ctx->pc = 0x24E9A8u;
        goto label_24e9a8;
    }
    ctx->pc = 0x24E9A0u;
    SET_GPR_U32(ctx, 31, 0x24E9A8u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24E9A0u, 0x24E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9A8u;
label_24e9a8:
    // 0x24e9a8: 0x8a30000f  lwl         $s0, 0xF($s1)
    ctx->pc = 0x24e9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_24e9ac:
    // 0x24e9ac: 0x9a30000c  lwr         $s0, 0xC($s1)
    ctx->pc = 0x24e9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_24e9b0:
    // 0x24e9b0: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
label_24e9b4:
    // 0x24e9b4: 0xc08a254  jal         func_228950
label_24e9b8:
    if (ctx->pc == 0x24E9B8u) {
        ctx->pc = 0x24E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9B4u;
        // 0x24e9b8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9BCu;
        goto label_24e9bc;
    }
    ctx->pc = 0x24E9B4u;
    SET_GPR_U32(ctx, 31, 0x24E9BCu);
    ctx->pc = 0x24E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9B4u;
    // 0x24e9b8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24E9B4u, 0x24E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9BCu;
label_24e9bc:
    // 0x24e9bc: 0x120201aa  beq         $s0, $v0, . + 4 + (0x1AA << 2)
label_24e9c0:
    if (ctx->pc == 0x24E9C0u) {
        ctx->pc = 0x24E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9BCu;
        // 0x24e9c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9C4u;
        goto label_24e9c4;
    }
    ctx->pc = 0x24E9BCu;
    {
        const bool branch_taken_0x24e9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9BCu;
        // 0x24e9c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9bc) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24E9C4u;
label_24e9c4:
    // 0x24e9c4: 0xc092d7e  jal         func_24B5F8
label_24e9c8:
    if (ctx->pc == 0x24E9C8u) {
        ctx->pc = 0x24E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9C4u;
        // 0x24e9c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9CCu;
        goto label_24e9cc;
    }
    ctx->pc = 0x24E9C4u;
    SET_GPR_U32(ctx, 31, 0x24E9CCu);
    ctx->pc = 0x24E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9C4u;
    // 0x24e9c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x24E9C4u, 0x24E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9CCu;
label_24e9cc:
    // 0x24e9cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e9d0:
    if (ctx->pc == 0x24E9D0u) {
        ctx->pc = 0x24E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9CCu;
        // 0x24e9d0: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9D4u;
        goto label_24e9d4;
    }
    ctx->pc = 0x24E9CCu;
    {
        const bool branch_taken_0x24e9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9CCu;
        // 0x24e9d0: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9cc) {
            ctx->pc = 0x24E9E4u;
            goto label_24e9e4;
        }
    }
    ctx->pc = 0x24E9D4u;
label_24e9d4:
    // 0x24e9d4: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x24e9d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_24e9d8:
    // 0x24e9d8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24e9d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24e9dc:
    // 0x24e9dc: 0x100001a2  b           . + 4 + (0x1A2 << 2)
label_24e9e0:
    if (ctx->pc == 0x24E9E0u) {
        ctx->pc = 0x24E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9DCu;
        // 0x24e9e0: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9E4u;
        goto label_24e9e4;
    }
    ctx->pc = 0x24E9DCu;
    {
        const bool branch_taken_0x24e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9DCu;
        // 0x24e9e0: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9dc) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24E9E4u;
label_24e9e4:
    // 0x24e9e4: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x24e9e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_24e9e8:
    // 0x24e9e8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x24e9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_24e9ec:
    // 0x24e9ec: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24e9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_24e9f0:
    // 0x24e9f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24e9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_24e9f4:
    // 0x24e9f4: 0xc08b60c  jal         func_22D830
label_24e9f8:
    if (ctx->pc == 0x24E9F8u) {
        ctx->pc = 0x24E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9F4u;
        // 0x24e9f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9FCu;
        goto label_24e9fc;
    }
    ctx->pc = 0x24E9F4u;
    SET_GPR_U32(ctx, 31, 0x24E9FCu);
    ctx->pc = 0x24E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9F4u;
    // 0x24e9f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24E9F4u, 0x24E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9FCu;
label_24e9fc:
    // 0x24e9fc: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x24e9fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_24ea00:
    // 0x24ea00: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x24ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_24ea04:
    // 0x24ea04: 0x92250006  lbu         $a1, 0x6($s1)
    ctx->pc = 0x24ea04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_24ea08:
    // 0x24ea08: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24ea08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_24ea0c:
    // 0x24ea0c: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x24ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_24ea10:
    // 0x24ea10: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x24ea10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_24ea14:
    // 0x24ea14: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x24ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_24ea18:
    // 0x24ea18: 0xc08b60c  jal         func_22D830
label_24ea1c:
    if (ctx->pc == 0x24EA1Cu) {
        ctx->pc = 0x24EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA18u;
        // 0x24ea1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA20u;
        goto label_24ea20;
    }
    ctx->pc = 0x24EA18u;
    SET_GPR_U32(ctx, 31, 0x24EA20u);
    ctx->pc = 0x24EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA18u;
    // 0x24ea1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24EA18u, 0x24EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA20u;
label_24ea20:
    // 0x24ea20: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x24ea20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_24ea24:
    // 0x24ea24: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x24ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_24ea28:
    // 0x24ea28: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x24ea28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_24ea2c:
    // 0x24ea2c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x24ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_24ea30:
    // 0x24ea30: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x24ea30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
label_24ea34:
    // 0x24ea34: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x24ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_24ea38:
    // 0x24ea38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_24ea3c:
    // 0x24ea3c: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x24ea3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_24ea40:
    // 0x24ea40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24ea44:
    if (ctx->pc == 0x24EA44u) {
        ctx->pc = 0x24EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA40u;
        // 0x24ea44: 0xa2240007  sb          $a0, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA48u;
        goto label_24ea48;
    }
    ctx->pc = 0x24EA40u;
    {
        const bool branch_taken_0x24ea40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA40u;
        // 0x24ea44: 0xa2240007  sb          $a0, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea40) {
            ctx->pc = 0x24EA5Cu;
            goto label_24ea5c;
        }
    }
    ctx->pc = 0x24EA48u;
label_24ea48:
    // 0x24ea48: 0x26e310a8  addiu       $v1, $s7, 0x10A8
    ctx->pc = 0x24ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24ea4c:
    // 0x24ea4c: 0xdc620028  ld          $v0, 0x28($v1)
    ctx->pc = 0x24ea4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 40)));
label_24ea50:
    // 0x24ea50: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ea50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ea54:
    // 0x24ea54: 0x10000184  b           . + 4 + (0x184 << 2)
label_24ea58:
    if (ctx->pc == 0x24EA58u) {
        ctx->pc = 0x24EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA54u;
        // 0x24ea58: 0xfc620028  sd          $v0, 0x28($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA5Cu;
        goto label_24ea5c;
    }
    ctx->pc = 0x24EA54u;
    {
        const bool branch_taken_0x24ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA54u;
        // 0x24ea58: 0xfc620028  sd          $v0, 0x28($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea54) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24EA5Cu;
label_24ea5c:
    // 0x24ea5c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x24ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_24ea60:
    // 0x24ea60: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x24ea60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24ea64:
    // 0x24ea64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24ea68:
    if (ctx->pc == 0x24EA68u) {
        ctx->pc = 0x24EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA64u;
        // 0x24ea68: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA6Cu;
        goto label_24ea6c;
    }
    ctx->pc = 0x24EA64u;
    {
        const bool branch_taken_0x24ea64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA64u;
        // 0x24ea68: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea64) {
            ctx->pc = 0x24EA80u;
            goto label_24ea80;
        }
    }
    ctx->pc = 0x24EA6Cu;
label_24ea6c:
    // 0x24ea6c: 0x26e310a8  addiu       $v1, $s7, 0x10A8
    ctx->pc = 0x24ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24ea70:
    // 0x24ea70: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x24ea70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_24ea74:
    // 0x24ea74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ea74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ea78:
    // 0x24ea78: 0x1000017b  b           . + 4 + (0x17B << 2)
label_24ea7c:
    if (ctx->pc == 0x24EA7Cu) {
        ctx->pc = 0x24EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA78u;
        // 0x24ea7c: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA80u;
        goto label_24ea80;
    }
    ctx->pc = 0x24EA78u;
    {
        const bool branch_taken_0x24ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA78u;
        // 0x24ea7c: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea78) {
            ctx->pc = 0x24F068u;
            goto label_24f068;
        }
    }
    ctx->pc = 0x24EA80u;
label_24ea80:
    // 0x24ea80: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_24ea84:
    if (ctx->pc == 0x24EA84u) {
        ctx->pc = 0x24EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA80u;
        // 0x24ea84: 0x96620012  lhu         $v0, 0x12($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA88u;
        goto label_24ea88;
    }
    ctx->pc = 0x24EA80u;
    {
        const bool branch_taken_0x24ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ea80) {
            ctx->pc = 0x24EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EA80u;
            // 0x24ea84: 0x96620012  lhu         $v0, 0x12($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EAACu;
            goto label_24eaac;
        }
    }
    ctx->pc = 0x24EA88u;
label_24ea88:
    // 0x24ea88: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24ea8c:
    // 0x24ea8c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_24ea90:
    if (ctx->pc == 0x24EA90u) {
        ctx->pc = 0x24EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA8Cu;
        // 0x24ea90: 0x642823  subu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EA94u;
        goto label_24ea94;
    }
    ctx->pc = 0x24EA8Cu;
    {
        const bool branch_taken_0x24ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA8Cu;
        // 0x24ea90: 0x642823  subu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea8c) {
            ctx->pc = 0x24EAA0u;
            goto label_24eaa0;
        }
    }
    ctx->pc = 0x24EA94u;
label_24ea94:
    // 0x24ea94: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x24ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_24ea98:
    // 0x24ea98: 0x10000003  b           . + 4 + (0x3 << 2)
label_24ea9c:
    if (ctx->pc == 0x24EA9Cu) {
        ctx->pc = 0x24EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA98u;
        // 0x24ea9c: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EAA0u;
        goto label_24eaa0;
    }
    ctx->pc = 0x24EA98u;
    {
        const bool branch_taken_0x24ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA98u;
        // 0x24ea9c: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea98) {
            ctx->pc = 0x24EAA8u;
            goto label_24eaa8;
        }
    }
    ctx->pc = 0x24EAA0u;
label_24eaa0:
    // 0x24eaa0: 0xc08ac88  jal         func_22B220
label_24eaa4:
    if (ctx->pc == 0x24EAA4u) {
        ctx->pc = 0x24EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAA0u;
        // 0x24eaa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EAA8u;
        goto label_24eaa8;
    }
    ctx->pc = 0x24EAA0u;
    SET_GPR_U32(ctx, 31, 0x24EAA8u);
    ctx->pc = 0x24EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EAA0u;
    // 0x24eaa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x24EAA0u, 0x24EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAA8u;
label_24eaa8:
    // 0x24eaa8: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x24eaa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_24eaac:
    // 0x24eaac: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24eab0:
    // 0x24eab0: 0x2ec40015  sltiu       $a0, $s6, 0x15
    ctx->pc = 0x24eab0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_24eab4:
    // 0x24eab4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x24eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_24eab8:
    // 0x24eab8: 0xa6620012  sh          $v0, 0x12($s3)
    ctx->pc = 0x24eab8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 2));
label_24eabc:
    // 0x24eabc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_24eac0:
    if (ctx->pc == 0x24EAC0u) {
        ctx->pc = 0x24EAC4u;
        goto label_24eac4;
    }
    ctx->pc = 0x24EABCu;
    {
        const bool branch_taken_0x24eabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eabc) {
            ctx->pc = 0x24EAD4u;
            goto label_24ead4;
        }
    }
    ctx->pc = 0x24EAC4u;
label_24eac4:
    // 0x24eac4: 0xc093e70  jal         func_24F9C0
label_24eac8:
    if (ctx->pc == 0x24EAC8u) {
        ctx->pc = 0x24EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAC4u;
        // 0x24eac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EACCu;
        goto label_24eacc;
    }
    ctx->pc = 0x24EAC4u;
    SET_GPR_U32(ctx, 31, 0x24EACCu);
    ctx->pc = 0x24EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EAC4u;
    // 0x24eac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F9C0u, 0x24EAC4u, 0x24EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EACCu;
label_24eacc:
    // 0x24eacc: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
label_24ead0:
    if (ctx->pc == 0x24EAD0u) {
        ctx->pc = 0x24EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EACCu;
        // 0x24ead0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EAD4u;
        goto label_24ead4;
    }
    ctx->pc = 0x24EACCu;
    {
        const bool branch_taken_0x24eacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EACCu;
        // 0x24ead0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eacc) {
            ctx->pc = 0x24F0A0u;
            goto label_24f0a0;
        }
    }
    ctx->pc = 0x24EAD4u;
label_24ead4:
    // 0x24ead4: 0x8a320013  lwl         $s2, 0x13($s1)
    ctx->pc = 0x24ead4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
label_24ead8:
    // 0x24ead8: 0x9a320010  lwr         $s2, 0x10($s1)
    ctx->pc = 0x24ead8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 18) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 18) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 18, merged64); }
label_24eadc:
    // 0x24eadc: 0x240301fd  addiu       $v1, $zero, 0x1FD
    ctx->pc = 0x24eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24eae0:
    // 0x24eae0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_24eae4:
    if (ctx->pc == 0x24EAE4u) {
        ctx->pc = 0x24EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAE0u;
        // 0x24eae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EAE8u;
        goto label_24eae8;
    }
    ctx->pc = 0x24EAE0u;
    {
        const bool branch_taken_0x24eae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eae0) {
            ctx->pc = 0x24EAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EAE0u;
            // 0x24eae4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EAE8u;
            goto label_24eae8;
        }
    }
    ctx->pc = 0x24EAE8u;
label_24eae8:
    // 0x24eae8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_24eaec:
    // 0x24eaec: 0x243001b  divu        $zero, $s2, $v1
    ctx->pc = 0x24eaecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_24eaf0:
    // 0x24eaf0: 0x8c851198  lw          $a1, 0x1198($a0)
    ctx->pc = 0x24eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4504)));
label_24eaf4:
    // 0x24eaf4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x24eaf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24eaf8:
    // 0x24eaf8: 0x1010  mfhi        $v0
    ctx->pc = 0x24eaf8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_24eafc:
    // 0x24eafc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24eb00:
    // 0x24eb00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24eb04:
    // 0x24eb04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24eb08:
    // 0x24eb08: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_24eb0c:
    if (ctx->pc == 0x24EB0Cu) {
        ctx->pc = 0x24EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB08u;
        // 0x24eb0c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB10u;
        goto label_24eb10;
    }
    ctx->pc = 0x24EB08u;
    {
        const bool branch_taken_0x24eb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB08u;
        // 0x24eb0c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb08) {
            ctx->pc = 0x24EB5Cu;
            goto label_24eb5c;
        }
    }
    ctx->pc = 0x24EB10u;
label_24eb10:
    // 0x24eb10: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x24eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_24eb14:
    // 0x24eb14: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
label_24eb18:
    if (ctx->pc == 0x24EB18u) {
        ctx->pc = 0x24EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB14u;
        // 0x24eb18: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB1Cu;
        goto label_24eb1c;
    }
    ctx->pc = 0x24EB14u;
    {
        const bool branch_taken_0x24eb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24eb14) {
            ctx->pc = 0x24EB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB14u;
            // 0x24eb18: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB2Cu;
            goto label_24eb2c;
        }
    }
    ctx->pc = 0x24EB1Cu;
label_24eb1c:
    // 0x24eb1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_24eb20:
    if (ctx->pc == 0x24EB20u) {
        ctx->pc = 0x24EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB1Cu;
        // 0x24eb20: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB24u;
        goto label_24eb24;
    }
    ctx->pc = 0x24EB1Cu;
    {
        const bool branch_taken_0x24eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB1Cu;
        // 0x24eb20: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb1c) {
            ctx->pc = 0x24EB44u;
            goto label_24eb44;
        }
    }
    ctx->pc = 0x24EB24u;
label_24eb24:
    // 0x24eb24: 0x0  nop
    ctx->pc = 0x24eb24u;
    // NOP
label_24eb28:
    // 0x24eb28: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x24eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_24eb2c:
    // 0x24eb2c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_24eb30:
    if (ctx->pc == 0x24EB30u) {
        ctx->pc = 0x24EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB2Cu;
        // 0x24eb30: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB34u;
        goto label_24eb34;
    }
    ctx->pc = 0x24EB2Cu;
    {
        const bool branch_taken_0x24eb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb2c) {
            ctx->pc = 0x24EB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB2Cu;
            // 0x24eb30: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB60u;
            goto label_24eb60;
        }
    }
    ctx->pc = 0x24EB34u;
label_24eb34:
    // 0x24eb34: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x24eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_24eb38:
    // 0x24eb38: 0x5454fffc  bnel        $v0, $s4, . + 4 + (-0x4 << 2)
label_24eb3c:
    if (ctx->pc == 0x24EB3Cu) {
        ctx->pc = 0x24EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB38u;
        // 0x24eb3c: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB40u;
        goto label_24eb40;
    }
    ctx->pc = 0x24EB38u;
    {
        const bool branch_taken_0x24eb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x24eb38) {
            ctx->pc = 0x24EB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB38u;
            // 0x24eb3c: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24eb2c;
        }
    }
    ctx->pc = 0x24EB40u;
label_24eb40:
    // 0x24eb40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x24eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_24eb44:
    // 0x24eb44: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24eb44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24eb48:
    // 0x24eb48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24eb4c:
    // 0x24eb4c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_24eb50:
    if (ctx->pc == 0x24EB50u) {
        ctx->pc = 0x24EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB4Cu;
        // 0x24eb50: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB54u;
        goto label_24eb54;
    }
    ctx->pc = 0x24EB4Cu;
    {
        const bool branch_taken_0x24eb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb4c) {
            ctx->pc = 0x24EB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB4Cu;
            // 0x24eb50: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24eb28;
        }
    }
    ctx->pc = 0x24EB54u;
label_24eb54:
    // 0x24eb54: 0x54800092  bnel        $a0, $zero, . + 4 + (0x92 << 2)
label_24eb58:
    if (ctx->pc == 0x24EB58u) {
        ctx->pc = 0x24EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB54u;
        // 0x24eb58: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB5Cu;
        goto label_24eb5c;
    }
    ctx->pc = 0x24EB54u;
    {
        const bool branch_taken_0x24eb54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eb54) {
            ctx->pc = 0x24EB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB54u;
            // 0x24eb58: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EB5Cu;
label_24eb5c:
    // 0x24eb5c: 0x8e750014  lw          $s5, 0x14($s3)
    ctx->pc = 0x24eb5cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_24eb60:
    // 0x24eb60: 0x96a20030  lhu         $v0, 0x30($s5)
    ctx->pc = 0x24eb60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_24eb64:
    // 0x24eb64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24eb68:
    // 0x24eb68: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_24eb6c:
    if (ctx->pc == 0x24EB6Cu) {
        ctx->pc = 0x24EB70u;
        goto label_24eb70;
    }
    ctx->pc = 0x24EB68u;
    {
        const bool branch_taken_0x24eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb68) {
            ctx->pc = 0x24EBE0u;
            goto label_24ebe0;
        }
    }
    ctx->pc = 0x24EB70u;
label_24eb70:
    // 0x24eb70: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x24eb70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_24eb74:
    // 0x24eb74: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_24eb78:
    if (ctx->pc == 0x24EB78u) {
        ctx->pc = 0x24EB7Cu;
        goto label_24eb7c;
    }
    ctx->pc = 0x24EB74u;
    {
        const bool branch_taken_0x24eb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb74) {
            ctx->pc = 0x24EBE0u;
            goto label_24ebe0;
        }
    }
    ctx->pc = 0x24EB7Cu;
label_24eb7c:
    // 0x24eb7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24eb80:
    // 0x24eb80: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24eb80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24eb84:
    // 0x24eb84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24eb88:
    // 0x24eb88: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_24eb8c:
    if (ctx->pc == 0x24EB8Cu) {
        ctx->pc = 0x24EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB88u;
        // 0x24eb8c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB90u;
        goto label_24eb90;
    }
    ctx->pc = 0x24EB88u;
    {
        const bool branch_taken_0x24eb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24eb88) {
            ctx->pc = 0x24EB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB88u;
            // 0x24eb8c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EBD8u;
            goto label_24ebd8;
        }
    }
    ctx->pc = 0x24EB90u;
label_24eb90:
    // 0x24eb90: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x24eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24eb94:
    // 0x24eb94: 0x52820082  beql        $s4, $v0, . + 4 + (0x82 << 2)
label_24eb98:
    if (ctx->pc == 0x24EB98u) {
        ctx->pc = 0x24EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB94u;
        // 0x24eb98: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EB9Cu;
        goto label_24eb9c;
    }
    ctx->pc = 0x24EB94u;
    {
        const bool branch_taken_0x24eb94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x24eb94) {
            ctx->pc = 0x24EB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB94u;
            // 0x24eb98: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EB9Cu;
label_24eb9c:
    // 0x24eb9c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x24eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_24eba0:
    // 0x24eba0: 0x5242007f  beql        $s2, $v0, . + 4 + (0x7F << 2)
label_24eba4:
    if (ctx->pc == 0x24EBA4u) {
        ctx->pc = 0x24EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBA0u;
        // 0x24eba4: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBA8u;
        goto label_24eba8;
    }
    ctx->pc = 0x24EBA0u;
    {
        const bool branch_taken_0x24eba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24eba0) {
            ctx->pc = 0x24EBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBA0u;
            // 0x24eba4: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EBA8u;
label_24eba8:
    // 0x24eba8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x24eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_24ebac:
    // 0x24ebac: 0x5242007c  beql        $s2, $v0, . + 4 + (0x7C << 2)
label_24ebb0:
    if (ctx->pc == 0x24EBB0u) {
        ctx->pc = 0x24EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBACu;
        // 0x24ebb0: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBB4u;
        goto label_24ebb4;
    }
    ctx->pc = 0x24EBACu;
    {
        const bool branch_taken_0x24ebac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ebac) {
            ctx->pc = 0x24EBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBACu;
            // 0x24ebb0: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EBB4u;
label_24ebb4:
    // 0x24ebb4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x24ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_24ebb8:
    // 0x24ebb8: 0x52420079  beql        $s2, $v0, . + 4 + (0x79 << 2)
label_24ebbc:
    if (ctx->pc == 0x24EBBCu) {
        ctx->pc = 0x24EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBB8u;
        // 0x24ebbc: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBC0u;
        goto label_24ebc0;
    }
    ctx->pc = 0x24EBB8u;
    {
        const bool branch_taken_0x24ebb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ebb8) {
            ctx->pc = 0x24EBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBB8u;
            // 0x24ebbc: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EBC0u;
label_24ebc0:
    // 0x24ebc0: 0xc08a254  jal         func_228950
label_24ebc4:
    if (ctx->pc == 0x24EBC4u) {
        ctx->pc = 0x24EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBC0u;
        // 0x24ebc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBC8u;
        goto label_24ebc8;
    }
    ctx->pc = 0x24EBC0u;
    SET_GPR_U32(ctx, 31, 0x24EBC8u);
    ctx->pc = 0x24EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBC0u;
    // 0x24ebc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24EBC0u, 0x24EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBC8u;
label_24ebc8:
    // 0x24ebc8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x24ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_24ebcc:
    // 0x24ebcc: 0x50620074  beql        $v1, $v0, . + 4 + (0x74 << 2)
label_24ebd0:
    if (ctx->pc == 0x24EBD0u) {
        ctx->pc = 0x24EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBCCu;
        // 0x24ebd0: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBD4u;
        goto label_24ebd4;
    }
    ctx->pc = 0x24EBCCu;
    {
        const bool branch_taken_0x24ebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ebcc) {
            ctx->pc = 0x24EBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBCCu;
            // 0x24ebd0: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EBD4u;
label_24ebd4:
    // 0x24ebd4: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x24ebd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24ebd8:
    // 0x24ebd8: 0x5600ffe9  bnel        $s0, $zero, . + 4 + (-0x17 << 2)
label_24ebdc:
    if (ctx->pc == 0x24EBDCu) {
        ctx->pc = 0x24EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBD8u;
        // 0x24ebdc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBE0u;
        goto label_24ebe0;
    }
    ctx->pc = 0x24EBD8u;
    {
        const bool branch_taken_0x24ebd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ebd8) {
            ctx->pc = 0x24EBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBD8u;
            // 0x24ebdc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24eb80;
        }
    }
    ctx->pc = 0x24EBE0u;
label_24ebe0:
    // 0x24ebe0: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x24ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
label_24ebe4:
    // 0x24ebe4: 0xc08a254  jal         func_228950
label_24ebe8:
    if (ctx->pc == 0x24EBE8u) {
        ctx->pc = 0x24EBECu;
        goto label_24ebec;
    }
    ctx->pc = 0x24EBE4u;
    SET_GPR_U32(ctx, 31, 0x24EBECu);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24EBE4u, 0x24EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBECu;
label_24ebec:
    // 0x24ebec: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
label_24ebf0:
    // 0x24ebf0: 0xc08a254  jal         func_228950
label_24ebf4:
    if (ctx->pc == 0x24EBF4u) {
        ctx->pc = 0x24EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBF0u;
        // 0x24ebf4: 0x2828024  and         $s0, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBF8u;
        goto label_24ebf8;
    }
    ctx->pc = 0x24EBF0u;
    SET_GPR_U32(ctx, 31, 0x24EBF8u);
    ctx->pc = 0x24EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBF0u;
    // 0x24ebf4: 0x2828024  and         $s0, $s4, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24EBF0u, 0x24EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBF8u;
label_24ebf8:
    // 0x24ebf8: 0x16020033  bne         $s0, $v0, . + 4 + (0x33 << 2)
label_24ebfc:
    if (ctx->pc == 0x24EBFCu) {
        ctx->pc = 0x24EC00u;
        goto label_24ec00;
    }
    ctx->pc = 0x24EBF8u;
    {
        const bool branch_taken_0x24ebf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ebf8) {
            ctx->pc = 0x24ECC8u;
            goto label_24ecc8;
        }
    }
    ctx->pc = 0x24EC00u;
label_24ec00:
    // 0x24ec00: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x24ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_24ec04:
    // 0x24ec04: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_24ec08:
    if (ctx->pc == 0x24EC08u) {
        ctx->pc = 0x24EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC04u;
        // 0x24ec08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC0Cu;
        goto label_24ec0c;
    }
    ctx->pc = 0x24EC04u;
    {
        const bool branch_taken_0x24ec04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC04u;
        // 0x24ec08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec04) {
            ctx->pc = 0x24EC7Cu;
            goto label_24ec7c;
        }
    }
    ctx->pc = 0x24EC0Cu;
label_24ec0c:
    // 0x24ec0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24ec10:
    // 0x24ec10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24ec14:
    // 0x24ec14: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24ec14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24ec18:
    // 0x24ec18: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_24ec1c:
    if (ctx->pc == 0x24EC1Cu) {
        ctx->pc = 0x24EC20u;
        goto label_24ec20;
    }
    ctx->pc = 0x24EC18u;
    {
        const bool branch_taken_0x24ec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24ec18) {
            ctx->pc = 0x24EC40u;
            goto label_24ec40;
        }
    }
    ctx->pc = 0x24EC20u;
label_24ec20:
    // 0x24ec20: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x24ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_24ec24:
    // 0x24ec24: 0x0  nop
    ctx->pc = 0x24ec24u;
    // NOP
label_24ec28:
    // 0x24ec28: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_24ec2c:
    if (ctx->pc == 0x24EC2Cu) {
        ctx->pc = 0x24EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC28u;
        // 0x24ec2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC30u;
        goto label_24ec30;
    }
    ctx->pc = 0x24EC28u;
    {
        const bool branch_taken_0x24ec28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC28u;
        // 0x24ec2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec28) {
            ctx->pc = 0x24EC7Cu;
            goto label_24ec7c;
        }
    }
    ctx->pc = 0x24EC30u;
label_24ec30:
    // 0x24ec30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24ec34:
    // 0x24ec34: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24ec34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24ec38:
    // 0x24ec38: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_24ec3c:
    if (ctx->pc == 0x24EC3Cu) {
        ctx->pc = 0x24EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC38u;
        // 0x24ec3c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC40u;
        goto label_24ec40;
    }
    ctx->pc = 0x24EC38u;
    {
        const bool branch_taken_0x24ec38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24ec38) {
            ctx->pc = 0x24EC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC38u;
            // 0x24ec3c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ec28;
        }
    }
    ctx->pc = 0x24EC40u;
label_24ec40:
    // 0x24ec40: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_24ec44:
    if (ctx->pc == 0x24EC44u) {
        ctx->pc = 0x24EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC40u;
        // 0x24ec44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC48u;
        goto label_24ec48;
    }
    ctx->pc = 0x24EC40u;
    {
        const bool branch_taken_0x24ec40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC40u;
        // 0x24ec44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec40) {
            ctx->pc = 0x24EC7Cu;
            goto label_24ec7c;
        }
    }
    ctx->pc = 0x24EC48u;
label_24ec48:
    // 0x24ec48: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x24ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_24ec4c:
    // 0x24ec4c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_24ec50:
    if (ctx->pc == 0x24EC50u) {
        ctx->pc = 0x24EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC4Cu;
        // 0x24ec50: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC54u;
        goto label_24ec54;
    }
    ctx->pc = 0x24EC4Cu;
    {
        const bool branch_taken_0x24ec4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ec4c) {
            ctx->pc = 0x24EC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC4Cu;
            // 0x24ec50: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC88u;
            goto label_24ec88;
        }
    }
    ctx->pc = 0x24EC54u;
label_24ec54:
    // 0x24ec54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ec58:
    // 0x24ec58: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
label_24ec5c:
    if (ctx->pc == 0x24EC5Cu) {
        ctx->pc = 0x24EC60u;
        goto label_24ec60;
    }
    ctx->pc = 0x24EC58u;
    {
        const bool branch_taken_0x24ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x24ec58) {
            ctx->pc = 0x24EC7Cu;
            goto label_24ec7c;
        }
    }
    ctx->pc = 0x24EC60u;
label_24ec60:
    // 0x24ec60: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x24ec60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ec64:
    // 0x24ec64: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x24ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24ec68:
    // 0x24ec68: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_24ec6c:
    if (ctx->pc == 0x24EC6Cu) {
        ctx->pc = 0x24EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC68u;
        // 0x24ec6c: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC70u;
        goto label_24ec70;
    }
    ctx->pc = 0x24EC68u;
    {
        const bool branch_taken_0x24ec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ec68) {
            ctx->pc = 0x24EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC68u;
            // 0x24ec6c: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC88u;
            goto label_24ec88;
        }
    }
    ctx->pc = 0x24EC70u;
label_24ec70:
    // 0x24ec70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ec74:
    // 0x24ec74: 0x5450fffc  bnel        $v0, $s0, . + 4 + (-0x4 << 2)
label_24ec78:
    if (ctx->pc == 0x24EC78u) {
        ctx->pc = 0x24EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC74u;
        // 0x24ec78: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC7Cu;
        goto label_24ec7c;
    }
    ctx->pc = 0x24EC74u;
    {
        const bool branch_taken_0x24ec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x24ec74) {
            ctx->pc = 0x24EC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC74u;
            // 0x24ec78: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ec68;
        }
    }
    ctx->pc = 0x24EC7Cu;
label_24ec7c:
    // 0x24ec7c: 0x54600048  bnel        $v1, $zero, . + 4 + (0x48 << 2)
label_24ec80:
    if (ctx->pc == 0x24EC80u) {
        ctx->pc = 0x24EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC7Cu;
        // 0x24ec80: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC84u;
        goto label_24ec84;
    }
    ctx->pc = 0x24EC7Cu;
    {
        const bool branch_taken_0x24ec7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ec7c) {
            ctx->pc = 0x24EC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC7Cu;
            // 0x24ec80: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24EC84u;
label_24ec84:
    // 0x24ec84: 0x26e310a8  addiu       $v1, $s7, 0x10A8
    ctx->pc = 0x24ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24ec88:
    // 0x24ec88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ec8c:
    // 0x24ec8c: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x24ec8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
label_24ec90:
    // 0x24ec90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ec94:
    // 0x24ec94: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ec94u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ec98:
    // 0x24ec98: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24ec98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ec9c:
    // 0x24ec9c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24ec9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24eca0:
    // 0x24eca0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24eca0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24eca4:
    // 0x24eca4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24eca4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24eca8:
    // 0x24eca8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24eca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24ecac:
    // 0x24ecac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24ecacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24ecb0:
    // 0x24ecb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24ecb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ecb4:
    // 0x24ecb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ecb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24ecb8:
    // 0x24ecb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ecb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ecbc:
    // 0x24ecbc: 0xfc620058  sd          $v0, 0x58($v1)
    ctx->pc = 0x24ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 2));
label_24ecc0:
    // 0x24ecc0: 0x808a9d6  j           func_22A758
label_24ecc4:
    if (ctx->pc == 0x24ECC4u) {
        ctx->pc = 0x24ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECC0u;
        // 0x24ecc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECC8u;
        goto label_24ecc8;
    }
    ctx->pc = 0x24ECC0u;
    ctx->pc = 0x24ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECC0u;
    // 0x24ecc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x24ECC8u;
label_24ecc8:
    // 0x24ecc8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x24ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_24eccc:
    // 0x24eccc: 0xc08a254  jal         func_228950
label_24ecd0:
    if (ctx->pc == 0x24ECD0u) {
        ctx->pc = 0x24ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECCCu;
        // 0x24ecd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECD4u;
        goto label_24ecd4;
    }
    ctx->pc = 0x24ECCCu;
    SET_GPR_U32(ctx, 31, 0x24ECD4u);
    ctx->pc = 0x24ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECCCu;
    // 0x24ecd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24ECCCu, 0x24ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECD4u;
label_24ecd4:
    // 0x24ecd4: 0x52420032  beql        $s2, $v0, . + 4 + (0x32 << 2)
label_24ecd8:
    if (ctx->pc == 0x24ECD8u) {
        ctx->pc = 0x24ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECD4u;
        // 0x24ecd8: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECDCu;
        goto label_24ecdc;
    }
    ctx->pc = 0x24ECD4u;
    {
        const bool branch_taken_0x24ecd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ecd4) {
            ctx->pc = 0x24ECD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ECD4u;
            // 0x24ecd8: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA0u;
            goto label_24eda0;
        }
    }
    ctx->pc = 0x24ECDCu;
label_24ecdc:
    // 0x24ecdc: 0xc08a254  jal         func_228950
label_24ece0:
    if (ctx->pc == 0x24ECE0u) {
        ctx->pc = 0x24ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECDCu;
        // 0x24ece0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECE4u;
        goto label_24ece4;
    }
    ctx->pc = 0x24ECDCu;
    SET_GPR_U32(ctx, 31, 0x24ECE4u);
    ctx->pc = 0x24ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECDCu;
    // 0x24ece0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24ECDCu, 0x24ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECE4u;
label_24ece4:
    // 0x24ece4: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
label_24ece8:
    if (ctx->pc == 0x24ECE8u) {
        ctx->pc = 0x24ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECE4u;
        // 0x24ece8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECECu;
        goto label_24ecec;
    }
    ctx->pc = 0x24ECE4u;
    {
        const bool branch_taken_0x24ece4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECE4u;
        // 0x24ece8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ece4) {
            ctx->pc = 0x24ED9Cu;
            goto label_24ed9c;
        }
    }
    ctx->pc = 0x24ECECu;
label_24ecec:
    // 0x24ecec: 0x8c431008  lw          $v1, 0x1008($v0)
    ctx->pc = 0x24ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4104)));
label_24ecf0:
    // 0x24ecf0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_24ecf4:
    if (ctx->pc == 0x24ECF4u) {
        ctx->pc = 0x24ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECF0u;
        // 0x24ecf4: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECF8u;
        goto label_24ecf8;
    }
    ctx->pc = 0x24ECF0u;
    {
        const bool branch_taken_0x24ecf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECF0u;
        // 0x24ecf4: 0x26e310a8  addiu       $v1, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecf0) {
            ctx->pc = 0x24ED38u;
            goto label_24ed38;
        }
    }
    ctx->pc = 0x24ECF8u;
label_24ecf8:
    // 0x24ecf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ecf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ecfc:
    // 0x24ecfc: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x24ecfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
label_24ed00:
    // 0x24ed00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24ed00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ed04:
    // 0x24ed04: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ed04u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ed08:
    // 0x24ed08: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24ed08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ed0c:
    // 0x24ed0c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24ed0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24ed10:
    // 0x24ed10: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24ed10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24ed14:
    // 0x24ed14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24ed14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24ed18:
    // 0x24ed18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24ed18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24ed1c:
    // 0x24ed1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24ed1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24ed20:
    // 0x24ed20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24ed20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ed24:
    // 0x24ed24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ed24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24ed28:
    // 0x24ed28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ed28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ed2c:
    // 0x24ed2c: 0xfc620058  sd          $v0, 0x58($v1)
    ctx->pc = 0x24ed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 2));
label_24ed30:
    // 0x24ed30: 0x808a9d6  j           func_22A758
label_24ed34:
    if (ctx->pc == 0x24ED34u) {
        ctx->pc = 0x24ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED30u;
        // 0x24ed34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED38u;
        goto label_24ed38;
    }
    ctx->pc = 0x24ED30u;
    ctx->pc = 0x24ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED30u;
    // 0x24ed34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x24ED38u;
label_24ed38:
    // 0x24ed38: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
label_24ed3c:
    if (ctx->pc == 0x24ED3Cu) {
        ctx->pc = 0x24ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED38u;
        // 0x24ed3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED40u;
        goto label_24ed40;
    }
    ctx->pc = 0x24ED38u;
    {
        const bool branch_taken_0x24ed38 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED38u;
        // 0x24ed3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed38) {
            ctx->pc = 0x24ED68u;
            goto label_24ed68;
        }
    }
    ctx->pc = 0x24ED40u;
label_24ed40:
    // 0x24ed40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24ed44:
    // 0x24ed44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ed44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ed48:
    // 0x24ed48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24ed48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ed4c:
    // 0x24ed4c: 0xc0933c4  jal         func_24CF10
label_24ed50:
    if (ctx->pc == 0x24ED50u) {
        ctx->pc = 0x24ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED4Cu;
        // 0x24ed50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED54u;
        goto label_24ed54;
    }
    ctx->pc = 0x24ED4Cu;
    SET_GPR_U32(ctx, 31, 0x24ED54u);
    ctx->pc = 0x24ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED4Cu;
    // 0x24ed50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF10u, 0x24ED4Cu, 0x24ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED54u;
label_24ed54:
    // 0x24ed54: 0x26e310a8  addiu       $v1, $s7, 0x10A8
    ctx->pc = 0x24ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24ed58:
    // 0x24ed58: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x24ed58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
label_24ed5c:
    // 0x24ed5c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ed5cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ed60:
    // 0x24ed60: 0x100000ce  b           . + 4 + (0xCE << 2)
label_24ed64:
    if (ctx->pc == 0x24ED64u) {
        ctx->pc = 0x24ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED60u;
        // 0x24ed64: 0xfc620058  sd          $v0, 0x58($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED68u;
        goto label_24ed68;
    }
    ctx->pc = 0x24ED60u;
    {
        const bool branch_taken_0x24ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED60u;
        // 0x24ed64: 0xfc620058  sd          $v0, 0x58($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed60) {
            ctx->pc = 0x24F09Cu;
            goto label_24f09c;
        }
    }
    ctx->pc = 0x24ED68u;
label_24ed68:
    // 0x24ed68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24ed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ed6c:
    // 0x24ed6c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24ed6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ed70:
    // 0x24ed70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ed74:
    // 0x24ed74: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24ed74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24ed78:
    // 0x24ed78: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24ed78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24ed7c:
    // 0x24ed7c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24ed7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24ed80:
    // 0x24ed80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24ed80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24ed84:
    // 0x24ed84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24ed84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24ed88:
    // 0x24ed88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24ed88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ed8c:
    // 0x24ed8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ed8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24ed90:
    // 0x24ed90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ed94:
    // 0x24ed94: 0x8094078  j           func_2501E0
label_24ed98:
    if (ctx->pc == 0x24ED98u) {
        ctx->pc = 0x24ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED94u;
        // 0x24ed98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED9Cu;
        goto label_24ed9c;
    }
    ctx->pc = 0x24ED94u;
    ctx->pc = 0x24ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED94u;
    // 0x24ed98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2501E0u;
    sub_002501E0_0x2501e0(rdram, ctx, runtime); return;
    ctx->pc = 0x24ED9Cu;
label_24ed9c:
    // 0x24ed9c: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x24ed9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_24eda0:
    // 0x24eda0: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x24eda0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_24eda4:
    // 0x24eda4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24eda8:
    // 0x24eda8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24edac:
    // 0x24edac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24edb0:
    // 0x24edb0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x24edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_24edb4:
    // 0x24edb4: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_24edb8:
    if (ctx->pc == 0x24EDB8u) {
        ctx->pc = 0x24EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB4u;
        // 0x24edb8: 0x26e410a8  addiu       $a0, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDBCu;
        goto label_24edbc;
    }
    ctx->pc = 0x24EDB4u;
    {
        const bool branch_taken_0x24edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB4u;
        // 0x24edb8: 0x26e410a8  addiu       $a0, $s7, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edb4) {
            ctx->pc = 0x24F01Cu;
            goto label_24f01c;
        }
    }
    ctx->pc = 0x24EDBCu;
label_24edbc:
    // 0x24edbc: 0xc08c682  jal         func_231A08
label_24edc0:
    if (ctx->pc == 0x24EDC0u) {
        ctx->pc = 0x24EDC4u;
        goto label_24edc4;
    }
    ctx->pc = 0x24EDBCu;
    SET_GPR_U32(ctx, 31, 0x24EDC4u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24EDBCu, 0x24EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDC4u;
label_24edc4:
    // 0x24edc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24edc8:
    // 0x24edc8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24edcc:
    // 0x24edcc: 0x8c6211d4  lw          $v0, 0x11D4($v1)
    ctx->pc = 0x24edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4564)));
label_24edd0:
    // 0x24edd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24edd4:
    if (ctx->pc == 0x24EDD4u) {
        ctx->pc = 0x24EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDD0u;
        // 0x24edd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDD8u;
        goto label_24edd8;
    }
    ctx->pc = 0x24EDD0u;
    {
        const bool branch_taken_0x24edd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDD0u;
        // 0x24edd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edd0) {
            ctx->pc = 0x24EDE8u;
            goto label_24ede8;
        }
    }
    ctx->pc = 0x24EDD8u;
label_24edd8:
    // 0x24edd8: 0xc08c698  jal         func_231A60
label_24eddc:
    if (ctx->pc == 0x24EDDCu) {
        ctx->pc = 0x24EDE0u;
        goto label_24ede0;
    }
    ctx->pc = 0x24EDD8u;
    SET_GPR_U32(ctx, 31, 0x24EDE0u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24EDD8u, 0x24EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDE0u;
label_24ede0:
    // 0x24ede0: 0x10000004  b           . + 4 + (0x4 << 2)
label_24ede4:
    if (ctx->pc == 0x24EDE4u) {
        ctx->pc = 0x24EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDE0u;
        // 0x24ede4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDE8u;
        goto label_24ede8;
    }
    ctx->pc = 0x24EDE0u;
    {
        const bool branch_taken_0x24ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDE0u;
        // 0x24ede4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ede0) {
            ctx->pc = 0x24EDF4u;
            goto label_24edf4;
        }
    }
    ctx->pc = 0x24EDE8u;
label_24ede8:
    // 0x24ede8: 0xc08c698  jal         func_231A60
label_24edec:
    if (ctx->pc == 0x24EDECu) {
        ctx->pc = 0x24EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDE8u;
        // 0x24edec: 0xac6211d4  sw          $v0, 0x11D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDF0u;
        goto label_24edf0;
    }
    ctx->pc = 0x24EDE8u;
    SET_GPR_U32(ctx, 31, 0x24EDF0u);
    ctx->pc = 0x24EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDE8u;
    // 0x24edec: 0xac6211d4  sw          $v0, 0x11D4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24EDE8u, 0x24EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDF0u;
label_24edf0:
    // 0x24edf0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24edf4:
    // 0x24edf4: 0x8c501190  lw          $s0, 0x1190($v0)
    ctx->pc = 0x24edf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4496)));
label_24edf8:
    // 0x24edf8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_24edfc:
    if (ctx->pc == 0x24EDFCu) {
        ctx->pc = 0x24EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDF8u;
        // 0x24edfc: 0x92270002  lbu         $a3, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE00u;
        goto label_24ee00;
    }
    ctx->pc = 0x24EDF8u;
    {
        const bool branch_taken_0x24edf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDF8u;
        // 0x24edfc: 0x92270002  lbu         $a3, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edf8) {
            ctx->pc = 0x24EE78u;
            goto label_24ee78;
        }
    }
    ctx->pc = 0x24EE00u;
label_24ee00:
    // 0x24ee00: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x24ee00u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_24ee04:
    // 0x24ee04: 0x92290006  lbu         $t1, 0x6($s1)
    ctx->pc = 0x24ee04u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_24ee08:
    // 0x24ee08: 0x92280007  lbu         $t0, 0x7($s1)
    ctx->pc = 0x24ee08u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_24ee0c:
    // 0x24ee0c: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x24ee0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_24ee10:
    // 0x24ee10: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x24ee10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_24ee14:
    // 0x24ee14: 0x41238  dsll        $v0, $a0, 8
    ctx->pc = 0x24ee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
label_24ee18:
    // 0x24ee18: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x24ee18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_24ee1c:
    // 0x24ee1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_24ee20:
    // 0x24ee20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24ee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24ee24:
    // 0x24ee24: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_24ee28:
    if (ctx->pc == 0x24EE28u) {
        ctx->pc = 0x24EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE24u;
        // 0x24ee28: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE2Cu;
        goto label_24ee2c;
    }
    ctx->pc = 0x24EE24u;
    {
        const bool branch_taken_0x24ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ee24) {
            ctx->pc = 0x24EE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EE24u;
            // 0x24ee28: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EE68u;
            goto label_24ee68;
        }
    }
    ctx->pc = 0x24EE2Cu;
label_24ee2c:
    // 0x24ee2c: 0x8a23000f  lwl         $v1, 0xF($s1)
    ctx->pc = 0x24ee2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_24ee30:
    // 0x24ee30: 0x9a23000c  lwr         $v1, 0xC($s1)
    ctx->pc = 0x24ee30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_24ee34:
    // 0x24ee34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24ee38:
    // 0x24ee38: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_24ee3c:
    if (ctx->pc == 0x24EE3Cu) {
        ctx->pc = 0x24EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE38u;
        // 0x24ee3c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE40u;
        goto label_24ee40;
    }
    ctx->pc = 0x24EE38u;
    {
        const bool branch_taken_0x24ee38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ee38) {
            ctx->pc = 0x24EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EE38u;
            // 0x24ee3c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EE68u;
            goto label_24ee68;
        }
    }
    ctx->pc = 0x24EE40u;
label_24ee40:
    // 0x24ee40: 0x8a230013  lwl         $v1, 0x13($s1)
    ctx->pc = 0x24ee40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_24ee44:
    // 0x24ee44: 0x9a230010  lwr         $v1, 0x10($s1)
    ctx->pc = 0x24ee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_24ee48:
    // 0x24ee48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24ee4c:
    // 0x24ee4c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_24ee50:
    if (ctx->pc == 0x24EE50u) {
        ctx->pc = 0x24EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE4Cu;
        // 0x24ee50: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE54u;
        goto label_24ee54;
    }
    ctx->pc = 0x24EE4Cu;
    {
        const bool branch_taken_0x24ee4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ee4c) {
            ctx->pc = 0x24EE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EE4Cu;
            // 0x24ee50: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EE68u;
            goto label_24ee68;
        }
    }
    ctx->pc = 0x24EE54u;
label_24ee54:
    // 0x24ee54: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x24ee54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_24ee58:
    // 0x24ee58: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x24ee58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_24ee5c:
    // 0x24ee5c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_24ee60:
    if (ctx->pc == 0x24EE60u) {
        ctx->pc = 0x24EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE5Cu;
        // 0x24ee60: 0x61238  dsll        $v0, $a2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE64u;
        goto label_24ee64;
    }
    ctx->pc = 0x24EE5Cu;
    {
        const bool branch_taken_0x24ee5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE5Cu;
        // 0x24ee60: 0x61238  dsll        $v0, $a2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee5c) {
            ctx->pc = 0x24EE8Cu;
            goto label_24ee8c;
        }
    }
    ctx->pc = 0x24EE64u;
label_24ee64:
    // 0x24ee64: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x24ee64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24ee68:
    // 0x24ee68: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_24ee6c:
    if (ctx->pc == 0x24EE6Cu) {
        ctx->pc = 0x24EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE68u;
        // 0x24ee6c: 0x41238  dsll        $v0, $a0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE70u;
        goto label_24ee70;
    }
    ctx->pc = 0x24EE68u;
    {
        const bool branch_taken_0x24ee68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE68u;
        // 0x24ee6c: 0x41238  dsll        $v0, $a0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee68) {
            ctx->pc = 0x24EE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ee18;
        }
    }
    ctx->pc = 0x24EE70u;
label_24ee70:
    // 0x24ee70: 0x10000005  b           . + 4 + (0x5 << 2)
label_24ee74:
    if (ctx->pc == 0x24EE74u) {
        ctx->pc = 0x24EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE70u;
        // 0x24ee74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE78u;
        goto label_24ee78;
    }
    ctx->pc = 0x24EE70u;
    {
        const bool branch_taken_0x24ee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE70u;
        // 0x24ee74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee70) {
            ctx->pc = 0x24EE88u;
            goto label_24ee88;
        }
    }
    ctx->pc = 0x24EE78u;
label_24ee78:
    // 0x24ee78: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x24ee78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_24ee7c:
    // 0x24ee7c: 0x92290006  lbu         $t1, 0x6($s1)
    ctx->pc = 0x24ee7cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_24ee80:
    // 0x24ee80: 0x92280007  lbu         $t0, 0x7($s1)
    ctx->pc = 0x24ee80u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_24ee84:
    // 0x24ee84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24ee84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ee88:
    // 0x24ee88: 0x61238  dsll        $v0, $a2, 8
    ctx->pc = 0x24ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 8);
label_24ee8c:
    // 0x24ee8c: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x24ee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
label_24ee90:
    // 0x24ee90: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x24ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_24ee94:
    // 0x24ee94: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x24ee94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_24ee98:
    // 0x24ee98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24ee9c:
    // 0x24ee9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_24eea0:
    // 0x24eea0: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x24eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_24eea4:
    // 0x24eea4: 0x31b42  srl         $v1, $v1, 13
    ctx->pc = 0x24eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
label_24eea8:
    // 0x24eea8: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x24eea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
label_24eeac:
    // 0x24eeac: 0x30740001  andi        $s4, $v1, 0x1
    ctx->pc = 0x24eeacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_24eeb0:
    // 0x24eeb0: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x24eeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
label_24eeb4:
    // 0x24eeb4: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_24eeb8:
    if (ctx->pc == 0x24EEB8u) {
        ctx->pc = 0x24EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEB4u;
        // 0x24eeb8: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEBCu;
        goto label_24eebc;
    }
    ctx->pc = 0x24EEB4u;
    {
        const bool branch_taken_0x24eeb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEB4u;
        // 0x24eeb8: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eeb4) {
            ctx->pc = 0x24EEFCu;
            goto label_24eefc;
        }
    }
    ctx->pc = 0x24EEBCu;
label_24eebc:
    // 0x24eebc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x24eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_24eec0:
    // 0x24eec0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x24eec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_24eec4:
    // 0x24eec4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24eec8:
    // 0x24eec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24eecc:
    // 0x24eecc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24eed0:
    // 0x24eed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24eed4:
    if (ctx->pc == 0x24EED4u) {
        ctx->pc = 0x24EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EED0u;
        // 0x24eed4: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EED8u;
        goto label_24eed8;
    }
    ctx->pc = 0x24EED0u;
    {
        const bool branch_taken_0x24eed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EED0u;
        // 0x24eed4: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eed0) {
            ctx->pc = 0x24EEE0u;
            goto label_24eee0;
        }
    }
    ctx->pc = 0x24EED8u;
label_24eed8:
    // 0x24eed8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24eedc:
    if (ctx->pc == 0x24EEDCu) {
        ctx->pc = 0x24EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EED8u;
        // 0x24eedc: 0x81238  dsll        $v0, $t0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEE0u;
        goto label_24eee0;
    }
    ctx->pc = 0x24EED8u;
    {
        const bool branch_taken_0x24eed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EED8u;
        // 0x24eedc: 0x81238  dsll        $v0, $t0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eed8) {
            ctx->pc = 0x24EF00u;
            goto label_24ef00;
        }
    }
    ctx->pc = 0x24EEE0u;
label_24eee0:
    // 0x24eee0: 0x26e310a8  addiu       $v1, $s7, 0x10A8
    ctx->pc = 0x24eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24eee4:
    // 0x24eee4: 0xdc6200c8  ld          $v0, 0xC8($v1)
    ctx->pc = 0x24eee4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 200)));
label_24eee8:
    // 0x24eee8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24eee8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24eeec:
    // 0x24eeec: 0xc0942ca  jal         func_250B28
label_24eef0:
    if (ctx->pc == 0x24EEF0u) {
        ctx->pc = 0x24EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEECu;
        // 0x24eef0: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEF4u;
        goto label_24eef4;
    }
    ctx->pc = 0x24EEECu;
    SET_GPR_U32(ctx, 31, 0x24EEF4u);
    ctx->pc = 0x24EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEECu;
    // 0x24eef0: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B28u, 0x24EEECu, 0x24EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEF4u;
label_24eef4:
    // 0x24eef4: 0x1000005d  b           . + 4 + (0x5D << 2)
label_24eef8:
    if (ctx->pc == 0x24EEF8u) {
        ctx->pc = 0x24EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEF4u;
        // 0x24eef8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEFCu;
        goto label_24eefc;
    }
    ctx->pc = 0x24EEF4u;
    {
        const bool branch_taken_0x24eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEF4u;
        // 0x24eef8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eef4) {
            ctx->pc = 0x24F06Cu;
            goto label_24f06c;
        }
    }
    ctx->pc = 0x24EEFCu;
label_24eefc:
    // 0x24eefc: 0x81238  dsll        $v0, $t0, 8
    ctx->pc = 0x24eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 8);
label_24ef00:
    // 0x24ef00: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x24ef00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_24ef04:
    // 0x24ef04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24ef08:
    // 0x24ef08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_24ef0c:
    // 0x24ef0c: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x24ef0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_24ef10:
    // 0x24ef10: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x24ef10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
label_24ef14:
    // 0x24ef14: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
label_24ef18:
    if (ctx->pc == 0x24EF18u) {
        ctx->pc = 0x24EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF14u;
        // 0x24ef18: 0xa2230007  sb          $v1, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF1Cu;
        goto label_24ef1c;
    }
    ctx->pc = 0x24EF14u;
    {
        const bool branch_taken_0x24ef14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF14u;
        // 0x24ef18: 0xa2230007  sb          $v1, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef14) {
            ctx->pc = 0x24EF38u;
            goto label_24ef38;
        }
    }
    ctx->pc = 0x24EF1Cu;
label_24ef1c:
    // 0x24ef1c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x24ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_24ef20:
    // 0x24ef20: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x24ef20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_24ef24:
    // 0x24ef24: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24ef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24ef28:
    // 0x24ef28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24ef2c:
    // 0x24ef2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24ef30:
    // 0x24ef30: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_24ef34:
    if (ctx->pc == 0x24EF34u) {
        ctx->pc = 0x24EF38u;
        goto label_24ef38;
    }
    ctx->pc = 0x24EF30u;
    {
        const bool branch_taken_0x24ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ef30) {
            ctx->pc = 0x24F000u;
            goto label_24f000;
        }
    }
    ctx->pc = 0x24EF38u;
label_24ef38:
    // 0x24ef38: 0x26f210a8  addiu       $s2, $s7, 0x10A8
    ctx->pc = 0x24ef38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24ef3c:
    // 0x24ef3c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x24ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_24ef40:
    // 0x24ef40: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x24ef40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_24ef44:
    // 0x24ef44: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ef44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ef48:
    // 0x24ef48: 0xc098552  jal         func_261548
label_24ef4c:
    if (ctx->pc == 0x24EF4Cu) {
        ctx->pc = 0x24EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF48u;
        // 0x24ef4c: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF50u;
        goto label_24ef50;
    }
    ctx->pc = 0x24EF48u;
    SET_GPR_U32(ctx, 31, 0x24EF50u);
    ctx->pc = 0x24EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF48u;
    // 0x24ef4c: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x24EF48u, 0x24EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF50u;
label_24ef50:
    // 0x24ef50: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_24ef54:
    if (ctx->pc == 0x24EF54u) {
        ctx->pc = 0x24EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF50u;
        // 0x24ef54: 0xac53000c  sw          $s3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF58u;
        goto label_24ef58;
    }
    ctx->pc = 0x24EF50u;
    {
        const bool branch_taken_0x24ef50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ef50) {
            ctx->pc = 0x24EF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF50u;
            // 0x24ef54: 0xac53000c  sw          $s3, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF70u;
            goto label_24ef70;
        }
    }
    ctx->pc = 0x24EF58u;
label_24ef58:
    // 0x24ef58: 0xde4200d0  ld          $v0, 0xD0($s2)
    ctx->pc = 0x24ef58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 208)));
label_24ef5c:
    // 0x24ef5c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24ef5cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24ef60:
    // 0x24ef60: 0xc0942ca  jal         func_250B28
label_24ef64:
    if (ctx->pc == 0x24EF64u) {
        ctx->pc = 0x24EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF60u;
        // 0x24ef64: 0xfe4200d0  sd          $v0, 0xD0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 208), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF68u;
        goto label_24ef68;
    }
    ctx->pc = 0x24EF60u;
    SET_GPR_U32(ctx, 31, 0x24EF68u);
    ctx->pc = 0x24EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF60u;
    // 0x24ef64: 0xfe4200d0  sd          $v0, 0xD0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 208), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B28u, 0x24EF60u, 0x24EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF68u;
label_24ef68:
    // 0x24ef68: 0x10000040  b           . + 4 + (0x40 << 2)
label_24ef6c:
    if (ctx->pc == 0x24EF6Cu) {
        ctx->pc = 0x24EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF68u;
        // 0x24ef6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF70u;
        goto label_24ef70;
    }
    ctx->pc = 0x24EF68u;
    {
        const bool branch_taken_0x24ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF68u;
        // 0x24ef6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef68) {
            ctx->pc = 0x24F06Cu;
            goto label_24f06c;
        }
    }
    ctx->pc = 0x24EF70u;
label_24ef70:
    // 0x24ef70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ef74:
    // 0x24ef74: 0xa0540010  sb          $s4, 0x10($v0)
    ctx->pc = 0x24ef74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 20));
label_24ef78:
    // 0x24ef78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24ef78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ef7c:
    // 0x24ef7c: 0xc093c34  jal         func_24F0D0
label_24ef80:
    if (ctx->pc == 0x24EF80u) {
        ctx->pc = 0x24EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF7Cu;
        // 0x24ef80: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF84u;
        goto label_24ef84;
    }
    ctx->pc = 0x24EF7Cu;
    SET_GPR_U32(ctx, 31, 0x24EF84u);
    ctx->pc = 0x24EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF7Cu;
    // 0x24ef80: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F0D0u, 0x24EF7Cu, 0x24EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF84u;
label_24ef84:
    // 0x24ef84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24ef84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ef88:
    // 0x24ef88: 0x5660000d  bnel        $s3, $zero, . + 4 + (0xD << 2)
label_24ef8c:
    if (ctx->pc == 0x24EF8Cu) {
        ctx->pc = 0x24EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF88u;
        // 0x24ef8c: 0xde420088  ld          $v0, 0x88($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF90u;
        goto label_24ef90;
    }
    ctx->pc = 0x24EF88u;
    {
        const bool branch_taken_0x24ef88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ef88) {
            ctx->pc = 0x24EF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF88u;
            // 0x24ef8c: 0xde420088  ld          $v0, 0x88($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EFC0u;
            goto label_24efc0;
        }
    }
    ctx->pc = 0x24EF90u;
label_24ef90:
    // 0x24ef90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ef94:
    // 0x24ef94: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24ef94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ef98:
    // 0x24ef98: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24ef98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24ef9c:
    // 0x24ef9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24ef9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24efa0:
    // 0x24efa0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24efa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24efa4:
    // 0x24efa4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24efa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24efa8:
    // 0x24efa8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24efa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24efac:
    // 0x24efac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24efacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24efb0:
    // 0x24efb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24efb4:
    // 0x24efb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24efb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24efb8:
    // 0x24efb8: 0x80942ca  j           func_250B28
label_24efbc:
    if (ctx->pc == 0x24EFBCu) {
        ctx->pc = 0x24EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFB8u;
        // 0x24efbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EFC0u;
        goto label_24efc0;
    }
    ctx->pc = 0x24EFB8u;
    ctx->pc = 0x24EFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFB8u;
    // 0x24efbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B28u;
    sub_00250B28_0x250b28(rdram, ctx, runtime); return;
    ctx->pc = 0x24EFC0u;
label_24efc0:
    // 0x24efc0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24efc0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24efc4:
    // 0x24efc4: 0xfe420088  sd          $v0, 0x88($s2)
    ctx->pc = 0x24efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 2));
label_24efc8:
    // 0x24efc8: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x24efc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_24efcc:
    // 0x24efcc: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x24efccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_24efd0:
    // 0x24efd0: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x24efd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_24efd4:
    // 0x24efd4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x24efd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_24efd8:
    // 0x24efd8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24efd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24efdc:
    // 0x24efdc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24efdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_24efe0:
    // 0x24efe0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24efe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_24efe4:
    // 0x24efe4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24efe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24efe8:
    // 0x24efe8: 0x3b080  sll         $s6, $v1, 2
    ctx->pc = 0x24efe8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24efec:
    // 0x24efec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_24eff0:
    // 0x24eff0: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x24eff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_24eff4:
    // 0x24eff4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x24eff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_24eff8:
    // 0x24eff8: 0x10000005  b           . + 4 + (0x5 << 2)
label_24effc:
    if (ctx->pc == 0x24EFFCu) {
        ctx->pc = 0x24EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFF8u;
        // 0x24effc: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F000u;
        goto label_24f000;
    }
    ctx->pc = 0x24EFF8u;
    {
        const bool branch_taken_0x24eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFF8u;
        // 0x24effc: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eff8) {
            ctx->pc = 0x24F010u;
            goto label_24f010;
        }
    }
    ctx->pc = 0x24F000u;
label_24f000:
    // 0x24f000: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_24f004:
    if (ctx->pc == 0x24F004u) {
        ctx->pc = 0x24F008u;
        goto label_24f008;
    }
    ctx->pc = 0x24F000u;
    {
        const bool branch_taken_0x24f000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f000) {
            ctx->pc = 0x24F010u;
            goto label_24f010;
        }
    }
    ctx->pc = 0x24F008u;
label_24f008:
    // 0x24f008: 0xc093dca  jal         func_24F728
label_24f00c:
    if (ctx->pc == 0x24F00Cu) {
        ctx->pc = 0x24F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F008u;
        // 0x24f00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F010u;
        goto label_24f010;
    }
    ctx->pc = 0x24F008u;
    SET_GPR_U32(ctx, 31, 0x24F010u);
    ctx->pc = 0x24F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F008u;
    // 0x24f00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F728u, 0x24F008u, 0x24F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F010u;
label_24f010:
    // 0x24f010: 0xc0942ca  jal         func_250B28
label_24f014:
    if (ctx->pc == 0x24F014u) {
        ctx->pc = 0x24F018u;
        goto label_24f018;
    }
    ctx->pc = 0x24F010u;
    SET_GPR_U32(ctx, 31, 0x24F018u);
    ctx->pc = 0x250B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B28u, 0x24F010u, 0x24F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F018u;
label_24f018:
    // 0x24f018: 0x26e410a8  addiu       $a0, $s7, 0x10A8
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4264));
label_24f01c:
    // 0x24f01c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24f020:
    // 0x24f020: 0xdc820070  ld          $v0, 0x70($a0)
    ctx->pc = 0x24f020u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 112)));
label_24f024:
    // 0x24f024: 0x24630390  addiu       $v1, $v1, 0x390
    ctx->pc = 0x24f024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 912));
label_24f028:
    // 0x24f028: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x24f028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_24f02c:
    // 0x24f02c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24f02cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_24f030:
    // 0x24f030: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24f030u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24f034:
    // 0x24f034: 0x24e701d8  addiu       $a3, $a3, 0x1D8
    ctx->pc = 0x24f034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 472));
label_24f038:
    // 0x24f038: 0xfc820070  sd          $v0, 0x70($a0)
    ctx->pc = 0x24f038u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 2));
label_24f03c:
    // 0x24f03c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24f03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24f040:
    // 0x24f040: 0x92260009  lbu         $a2, 0x9($s1)
    ctx->pc = 0x24f040u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_24f044:
    // 0x24f044: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x24f044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_24f048:
    // 0x24f048: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x24f048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24f04c:
    // 0x24f04c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x24f04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24f050:
    // 0x24f050: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_24f054:
    // 0x24f054: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x24f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_24f058:
    // 0x24f058: 0x60f809  jalr        $v1
label_24f05c:
    if (ctx->pc == 0x24F05Cu) {
        ctx->pc = 0x24F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F058u;
        // 0x24f05c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F060u;
        goto label_24f060;
    }
    ctx->pc = 0x24F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24F060u);
        ctx->pc = 0x24F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F058u;
        // 0x24f05c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F058u, 0x24F060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F060u;
label_24f060:
    // 0x24f060: 0x1000000f  b           . + 4 + (0xF << 2)
label_24f064:
    if (ctx->pc == 0x24F064u) {
        ctx->pc = 0x24F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F060u;
        // 0x24f064: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F068u;
        goto label_24f068;
    }
    ctx->pc = 0x24F060u;
    {
        const bool branch_taken_0x24f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F060u;
        // 0x24f064: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f060) {
            ctx->pc = 0x24F0A0u;
            goto label_24f0a0;
        }
    }
    ctx->pc = 0x24F068u;
label_24f068:
    // 0x24f068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f06c:
    // 0x24f06c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24f06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24f070:
    // 0x24f070: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24f070u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24f074:
    // 0x24f074: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24f074u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24f078:
    // 0x24f078: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24f078u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24f07c:
    // 0x24f07c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24f07cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24f080:
    // 0x24f080: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24f080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24f084:
    // 0x24f084: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24f084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24f088:
    // 0x24f088: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f08c:
    // 0x24f08c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24f090:
    // 0x24f090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f094:
    // 0x24f094: 0x808a9d6  j           func_22A758
label_24f098:
    if (ctx->pc == 0x24F098u) {
        ctx->pc = 0x24F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F094u;
        // 0x24f098: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F09Cu;
        goto label_24f09c;
    }
    ctx->pc = 0x24F094u;
    ctx->pc = 0x24F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F094u;
    // 0x24f098: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x24F09Cu;
label_24f09c:
    // 0x24f09c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24f09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24f0a0:
    // 0x24f0a0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24f0a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24f0a4:
    // 0x24f0a4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24f0a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24f0a8:
    // 0x24f0a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24f0a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24f0ac:
    // 0x24f0ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24f0acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24f0b0:
    // 0x24f0b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24f0b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24f0b4:
    // 0x24f0b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24f0b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24f0b8:
    // 0x24f0b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f0b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f0bc:
    // 0x24f0bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24f0c0:
    // 0x24f0c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f0c4:
    // 0x24f0c4: 0x3e00008  jr          $ra
label_24f0c8:
    if (ctx->pc == 0x24F0C8u) {
        ctx->pc = 0x24F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0C4u;
        // 0x24f0c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F0CCu;
        goto label_24f0cc;
    }
    ctx->pc = 0x24F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0C4u;
        // 0x24f0c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F0CCu;
label_24f0cc:
    // 0x24f0cc: 0x0  nop
    ctx->pc = 0x24f0ccu;
    // NOP
    if (ctx->pc == 0x24f0ccu) { ctx->pc = 0x24f0d0u; }
}
