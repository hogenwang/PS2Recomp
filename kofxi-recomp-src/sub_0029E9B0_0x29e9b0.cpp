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

// Function: sub_0029E9B0
// Address: 0x29e9b0 - 0x29f9e0
void sub_0029E9B0_0x29e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9B0_0x29e9b0");
#endif

    switch (ctx->pc) {
        case 0x29e9b0u: goto label_29e9b0;
        case 0x29e9b4u: goto label_29e9b4;
        case 0x29e9b8u: goto label_29e9b8;
        case 0x29e9bcu: goto label_29e9bc;
        case 0x29e9c0u: goto label_29e9c0;
        case 0x29e9c4u: goto label_29e9c4;
        case 0x29e9c8u: goto label_29e9c8;
        case 0x29e9ccu: goto label_29e9cc;
        case 0x29e9d0u: goto label_29e9d0;
        case 0x29e9d4u: goto label_29e9d4;
        case 0x29e9d8u: goto label_29e9d8;
        case 0x29e9dcu: goto label_29e9dc;
        case 0x29e9e0u: goto label_29e9e0;
        case 0x29e9e4u: goto label_29e9e4;
        case 0x29e9e8u: goto label_29e9e8;
        case 0x29e9ecu: goto label_29e9ec;
        case 0x29e9f0u: goto label_29e9f0;
        case 0x29e9f4u: goto label_29e9f4;
        case 0x29e9f8u: goto label_29e9f8;
        case 0x29e9fcu: goto label_29e9fc;
        case 0x29ea00u: goto label_29ea00;
        case 0x29ea04u: goto label_29ea04;
        case 0x29ea08u: goto label_29ea08;
        case 0x29ea0cu: goto label_29ea0c;
        case 0x29ea10u: goto label_29ea10;
        case 0x29ea14u: goto label_29ea14;
        case 0x29ea18u: goto label_29ea18;
        case 0x29ea1cu: goto label_29ea1c;
        case 0x29ea20u: goto label_29ea20;
        case 0x29ea24u: goto label_29ea24;
        case 0x29ea28u: goto label_29ea28;
        case 0x29ea2cu: goto label_29ea2c;
        case 0x29ea30u: goto label_29ea30;
        case 0x29ea34u: goto label_29ea34;
        case 0x29ea38u: goto label_29ea38;
        case 0x29ea3cu: goto label_29ea3c;
        case 0x29ea40u: goto label_29ea40;
        case 0x29ea44u: goto label_29ea44;
        case 0x29ea48u: goto label_29ea48;
        case 0x29ea4cu: goto label_29ea4c;
        case 0x29ea50u: goto label_29ea50;
        case 0x29ea54u: goto label_29ea54;
        case 0x29ea58u: goto label_29ea58;
        case 0x29ea5cu: goto label_29ea5c;
        case 0x29ea60u: goto label_29ea60;
        case 0x29ea64u: goto label_29ea64;
        case 0x29ea68u: goto label_29ea68;
        case 0x29ea6cu: goto label_29ea6c;
        case 0x29ea70u: goto label_29ea70;
        case 0x29ea74u: goto label_29ea74;
        case 0x29ea78u: goto label_29ea78;
        case 0x29ea7cu: goto label_29ea7c;
        case 0x29ea80u: goto label_29ea80;
        case 0x29ea84u: goto label_29ea84;
        case 0x29ea88u: goto label_29ea88;
        case 0x29ea8cu: goto label_29ea8c;
        case 0x29ea90u: goto label_29ea90;
        case 0x29ea94u: goto label_29ea94;
        case 0x29ea98u: goto label_29ea98;
        case 0x29ea9cu: goto label_29ea9c;
        case 0x29eaa0u: goto label_29eaa0;
        case 0x29eaa4u: goto label_29eaa4;
        case 0x29eaa8u: goto label_29eaa8;
        case 0x29eaacu: goto label_29eaac;
        case 0x29eab0u: goto label_29eab0;
        case 0x29eab4u: goto label_29eab4;
        case 0x29eab8u: goto label_29eab8;
        case 0x29eabcu: goto label_29eabc;
        case 0x29eac0u: goto label_29eac0;
        case 0x29eac4u: goto label_29eac4;
        case 0x29eac8u: goto label_29eac8;
        case 0x29eaccu: goto label_29eacc;
        case 0x29ead0u: goto label_29ead0;
        case 0x29ead4u: goto label_29ead4;
        case 0x29ead8u: goto label_29ead8;
        case 0x29eadcu: goto label_29eadc;
        case 0x29eae0u: goto label_29eae0;
        case 0x29eae4u: goto label_29eae4;
        case 0x29eae8u: goto label_29eae8;
        case 0x29eaecu: goto label_29eaec;
        case 0x29eaf0u: goto label_29eaf0;
        case 0x29eaf4u: goto label_29eaf4;
        case 0x29eaf8u: goto label_29eaf8;
        case 0x29eafcu: goto label_29eafc;
        case 0x29eb00u: goto label_29eb00;
        case 0x29eb04u: goto label_29eb04;
        case 0x29eb08u: goto label_29eb08;
        case 0x29eb0cu: goto label_29eb0c;
        case 0x29eb10u: goto label_29eb10;
        case 0x29eb14u: goto label_29eb14;
        case 0x29eb18u: goto label_29eb18;
        case 0x29eb1cu: goto label_29eb1c;
        case 0x29eb20u: goto label_29eb20;
        case 0x29eb24u: goto label_29eb24;
        case 0x29eb28u: goto label_29eb28;
        case 0x29eb2cu: goto label_29eb2c;
        case 0x29eb30u: goto label_29eb30;
        case 0x29eb34u: goto label_29eb34;
        case 0x29eb38u: goto label_29eb38;
        case 0x29eb3cu: goto label_29eb3c;
        case 0x29eb40u: goto label_29eb40;
        case 0x29eb44u: goto label_29eb44;
        case 0x29eb48u: goto label_29eb48;
        case 0x29eb4cu: goto label_29eb4c;
        case 0x29eb50u: goto label_29eb50;
        case 0x29eb54u: goto label_29eb54;
        case 0x29eb58u: goto label_29eb58;
        case 0x29eb5cu: goto label_29eb5c;
        case 0x29eb60u: goto label_29eb60;
        case 0x29eb64u: goto label_29eb64;
        case 0x29eb68u: goto label_29eb68;
        case 0x29eb6cu: goto label_29eb6c;
        case 0x29eb70u: goto label_29eb70;
        case 0x29eb74u: goto label_29eb74;
        case 0x29eb78u: goto label_29eb78;
        case 0x29eb7cu: goto label_29eb7c;
        case 0x29eb80u: goto label_29eb80;
        case 0x29eb84u: goto label_29eb84;
        case 0x29eb88u: goto label_29eb88;
        case 0x29eb8cu: goto label_29eb8c;
        case 0x29eb90u: goto label_29eb90;
        case 0x29eb94u: goto label_29eb94;
        case 0x29eb98u: goto label_29eb98;
        case 0x29eb9cu: goto label_29eb9c;
        case 0x29eba0u: goto label_29eba0;
        case 0x29eba4u: goto label_29eba4;
        case 0x29eba8u: goto label_29eba8;
        case 0x29ebacu: goto label_29ebac;
        case 0x29ebb0u: goto label_29ebb0;
        case 0x29ebb4u: goto label_29ebb4;
        case 0x29ebb8u: goto label_29ebb8;
        case 0x29ebbcu: goto label_29ebbc;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebc4u: goto label_29ebc4;
        case 0x29ebc8u: goto label_29ebc8;
        case 0x29ebccu: goto label_29ebcc;
        case 0x29ebd0u: goto label_29ebd0;
        case 0x29ebd4u: goto label_29ebd4;
        case 0x29ebd8u: goto label_29ebd8;
        case 0x29ebdcu: goto label_29ebdc;
        case 0x29ebe0u: goto label_29ebe0;
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ebe8u: goto label_29ebe8;
        case 0x29ebecu: goto label_29ebec;
        case 0x29ebf0u: goto label_29ebf0;
        case 0x29ebf4u: goto label_29ebf4;
        case 0x29ebf8u: goto label_29ebf8;
        case 0x29ebfcu: goto label_29ebfc;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec04u: goto label_29ec04;
        case 0x29ec08u: goto label_29ec08;
        case 0x29ec0cu: goto label_29ec0c;
        case 0x29ec10u: goto label_29ec10;
        case 0x29ec14u: goto label_29ec14;
        case 0x29ec18u: goto label_29ec18;
        case 0x29ec1cu: goto label_29ec1c;
        case 0x29ec20u: goto label_29ec20;
        case 0x29ec24u: goto label_29ec24;
        case 0x29ec28u: goto label_29ec28;
        case 0x29ec2cu: goto label_29ec2c;
        case 0x29ec30u: goto label_29ec30;
        case 0x29ec34u: goto label_29ec34;
        case 0x29ec38u: goto label_29ec38;
        case 0x29ec3cu: goto label_29ec3c;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec44u: goto label_29ec44;
        case 0x29ec48u: goto label_29ec48;
        case 0x29ec4cu: goto label_29ec4c;
        case 0x29ec50u: goto label_29ec50;
        case 0x29ec54u: goto label_29ec54;
        case 0x29ec58u: goto label_29ec58;
        case 0x29ec5cu: goto label_29ec5c;
        case 0x29ec60u: goto label_29ec60;
        case 0x29ec64u: goto label_29ec64;
        case 0x29ec68u: goto label_29ec68;
        case 0x29ec6cu: goto label_29ec6c;
        case 0x29ec70u: goto label_29ec70;
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec78u: goto label_29ec78;
        case 0x29ec7cu: goto label_29ec7c;
        case 0x29ec80u: goto label_29ec80;
        case 0x29ec84u: goto label_29ec84;
        case 0x29ec88u: goto label_29ec88;
        case 0x29ec8cu: goto label_29ec8c;
        case 0x29ec90u: goto label_29ec90;
        case 0x29ec94u: goto label_29ec94;
        case 0x29ec98u: goto label_29ec98;
        case 0x29ec9cu: goto label_29ec9c;
        case 0x29eca0u: goto label_29eca0;
        case 0x29eca4u: goto label_29eca4;
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecacu: goto label_29ecac;
        case 0x29ecb0u: goto label_29ecb0;
        case 0x29ecb4u: goto label_29ecb4;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecbcu: goto label_29ecbc;
        case 0x29ecc0u: goto label_29ecc0;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecc8u: goto label_29ecc8;
        case 0x29ecccu: goto label_29eccc;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ecd4u: goto label_29ecd4;
        case 0x29ecd8u: goto label_29ecd8;
        case 0x29ecdcu: goto label_29ecdc;
        case 0x29ece0u: goto label_29ece0;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ece8u: goto label_29ece8;
        case 0x29ececu: goto label_29ecec;
        case 0x29ecf0u: goto label_29ecf0;
        case 0x29ecf4u: goto label_29ecf4;
        case 0x29ecf8u: goto label_29ecf8;
        case 0x29ecfcu: goto label_29ecfc;
        case 0x29ed00u: goto label_29ed00;
        case 0x29ed04u: goto label_29ed04;
        case 0x29ed08u: goto label_29ed08;
        case 0x29ed0cu: goto label_29ed0c;
        case 0x29ed10u: goto label_29ed10;
        case 0x29ed14u: goto label_29ed14;
        case 0x29ed18u: goto label_29ed18;
        case 0x29ed1cu: goto label_29ed1c;
        case 0x29ed20u: goto label_29ed20;
        case 0x29ed24u: goto label_29ed24;
        case 0x29ed28u: goto label_29ed28;
        case 0x29ed2cu: goto label_29ed2c;
        case 0x29ed30u: goto label_29ed30;
        case 0x29ed34u: goto label_29ed34;
        case 0x29ed38u: goto label_29ed38;
        case 0x29ed3cu: goto label_29ed3c;
        case 0x29ed40u: goto label_29ed40;
        case 0x29ed44u: goto label_29ed44;
        case 0x29ed48u: goto label_29ed48;
        case 0x29ed4cu: goto label_29ed4c;
        case 0x29ed50u: goto label_29ed50;
        case 0x29ed54u: goto label_29ed54;
        case 0x29ed58u: goto label_29ed58;
        case 0x29ed5cu: goto label_29ed5c;
        case 0x29ed60u: goto label_29ed60;
        case 0x29ed64u: goto label_29ed64;
        case 0x29ed68u: goto label_29ed68;
        case 0x29ed6cu: goto label_29ed6c;
        case 0x29ed70u: goto label_29ed70;
        case 0x29ed74u: goto label_29ed74;
        case 0x29ed78u: goto label_29ed78;
        case 0x29ed7cu: goto label_29ed7c;
        case 0x29ed80u: goto label_29ed80;
        case 0x29ed84u: goto label_29ed84;
        case 0x29ed88u: goto label_29ed88;
        case 0x29ed8cu: goto label_29ed8c;
        case 0x29ed90u: goto label_29ed90;
        case 0x29ed94u: goto label_29ed94;
        case 0x29ed98u: goto label_29ed98;
        case 0x29ed9cu: goto label_29ed9c;
        case 0x29eda0u: goto label_29eda0;
        case 0x29eda4u: goto label_29eda4;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edacu: goto label_29edac;
        case 0x29edb0u: goto label_29edb0;
        case 0x29edb4u: goto label_29edb4;
        case 0x29edb8u: goto label_29edb8;
        case 0x29edbcu: goto label_29edbc;
        case 0x29edc0u: goto label_29edc0;
        case 0x29edc4u: goto label_29edc4;
        case 0x29edc8u: goto label_29edc8;
        case 0x29edccu: goto label_29edcc;
        case 0x29edd0u: goto label_29edd0;
        case 0x29edd4u: goto label_29edd4;
        case 0x29edd8u: goto label_29edd8;
        case 0x29eddcu: goto label_29eddc;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ede4u: goto label_29ede4;
        case 0x29ede8u: goto label_29ede8;
        case 0x29edecu: goto label_29edec;
        case 0x29edf0u: goto label_29edf0;
        case 0x29edf4u: goto label_29edf4;
        case 0x29edf8u: goto label_29edf8;
        case 0x29edfcu: goto label_29edfc;
        case 0x29ee00u: goto label_29ee00;
        case 0x29ee04u: goto label_29ee04;
        case 0x29ee08u: goto label_29ee08;
        case 0x29ee0cu: goto label_29ee0c;
        case 0x29ee10u: goto label_29ee10;
        case 0x29ee14u: goto label_29ee14;
        case 0x29ee18u: goto label_29ee18;
        case 0x29ee1cu: goto label_29ee1c;
        case 0x29ee20u: goto label_29ee20;
        case 0x29ee24u: goto label_29ee24;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee2cu: goto label_29ee2c;
        case 0x29ee30u: goto label_29ee30;
        case 0x29ee34u: goto label_29ee34;
        case 0x29ee38u: goto label_29ee38;
        case 0x29ee3cu: goto label_29ee3c;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee44u: goto label_29ee44;
        case 0x29ee48u: goto label_29ee48;
        case 0x29ee4cu: goto label_29ee4c;
        case 0x29ee50u: goto label_29ee50;
        case 0x29ee54u: goto label_29ee54;
        case 0x29ee58u: goto label_29ee58;
        case 0x29ee5cu: goto label_29ee5c;
        case 0x29ee60u: goto label_29ee60;
        case 0x29ee64u: goto label_29ee64;
        case 0x29ee68u: goto label_29ee68;
        case 0x29ee6cu: goto label_29ee6c;
        case 0x29ee70u: goto label_29ee70;
        case 0x29ee74u: goto label_29ee74;
        case 0x29ee78u: goto label_29ee78;
        case 0x29ee7cu: goto label_29ee7c;
        case 0x29ee80u: goto label_29ee80;
        case 0x29ee84u: goto label_29ee84;
        case 0x29ee88u: goto label_29ee88;
        case 0x29ee8cu: goto label_29ee8c;
        case 0x29ee90u: goto label_29ee90;
        case 0x29ee94u: goto label_29ee94;
        case 0x29ee98u: goto label_29ee98;
        case 0x29ee9cu: goto label_29ee9c;
        case 0x29eea0u: goto label_29eea0;
        case 0x29eea4u: goto label_29eea4;
        case 0x29eea8u: goto label_29eea8;
        case 0x29eeacu: goto label_29eeac;
        case 0x29eeb0u: goto label_29eeb0;
        case 0x29eeb4u: goto label_29eeb4;
        case 0x29eeb8u: goto label_29eeb8;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eec0u: goto label_29eec0;
        case 0x29eec4u: goto label_29eec4;
        case 0x29eec8u: goto label_29eec8;
        case 0x29eeccu: goto label_29eecc;
        case 0x29eed0u: goto label_29eed0;
        case 0x29eed4u: goto label_29eed4;
        case 0x29eed8u: goto label_29eed8;
        case 0x29eedcu: goto label_29eedc;
        case 0x29eee0u: goto label_29eee0;
        case 0x29eee4u: goto label_29eee4;
        case 0x29eee8u: goto label_29eee8;
        case 0x29eeecu: goto label_29eeec;
        case 0x29eef0u: goto label_29eef0;
        case 0x29eef4u: goto label_29eef4;
        case 0x29eef8u: goto label_29eef8;
        case 0x29eefcu: goto label_29eefc;
        case 0x29ef00u: goto label_29ef00;
        case 0x29ef04u: goto label_29ef04;
        case 0x29ef08u: goto label_29ef08;
        case 0x29ef0cu: goto label_29ef0c;
        case 0x29ef10u: goto label_29ef10;
        case 0x29ef14u: goto label_29ef14;
        case 0x29ef18u: goto label_29ef18;
        case 0x29ef1cu: goto label_29ef1c;
        case 0x29ef20u: goto label_29ef20;
        case 0x29ef24u: goto label_29ef24;
        case 0x29ef28u: goto label_29ef28;
        case 0x29ef2cu: goto label_29ef2c;
        case 0x29ef30u: goto label_29ef30;
        case 0x29ef34u: goto label_29ef34;
        case 0x29ef38u: goto label_29ef38;
        case 0x29ef3cu: goto label_29ef3c;
        case 0x29ef40u: goto label_29ef40;
        case 0x29ef44u: goto label_29ef44;
        case 0x29ef48u: goto label_29ef48;
        case 0x29ef4cu: goto label_29ef4c;
        case 0x29ef50u: goto label_29ef50;
        case 0x29ef54u: goto label_29ef54;
        case 0x29ef58u: goto label_29ef58;
        case 0x29ef5cu: goto label_29ef5c;
        case 0x29ef60u: goto label_29ef60;
        case 0x29ef64u: goto label_29ef64;
        case 0x29ef68u: goto label_29ef68;
        case 0x29ef6cu: goto label_29ef6c;
        case 0x29ef70u: goto label_29ef70;
        case 0x29ef74u: goto label_29ef74;
        case 0x29ef78u: goto label_29ef78;
        case 0x29ef7cu: goto label_29ef7c;
        case 0x29ef80u: goto label_29ef80;
        case 0x29ef84u: goto label_29ef84;
        case 0x29ef88u: goto label_29ef88;
        case 0x29ef8cu: goto label_29ef8c;
        case 0x29ef90u: goto label_29ef90;
        case 0x29ef94u: goto label_29ef94;
        case 0x29ef98u: goto label_29ef98;
        case 0x29ef9cu: goto label_29ef9c;
        case 0x29efa0u: goto label_29efa0;
        case 0x29efa4u: goto label_29efa4;
        case 0x29efa8u: goto label_29efa8;
        case 0x29efacu: goto label_29efac;
        case 0x29efb0u: goto label_29efb0;
        case 0x29efb4u: goto label_29efb4;
        case 0x29efb8u: goto label_29efb8;
        case 0x29efbcu: goto label_29efbc;
        case 0x29efc0u: goto label_29efc0;
        case 0x29efc4u: goto label_29efc4;
        case 0x29efc8u: goto label_29efc8;
        case 0x29efccu: goto label_29efcc;
        case 0x29efd0u: goto label_29efd0;
        case 0x29efd4u: goto label_29efd4;
        case 0x29efd8u: goto label_29efd8;
        case 0x29efdcu: goto label_29efdc;
        case 0x29efe0u: goto label_29efe0;
        case 0x29efe4u: goto label_29efe4;
        case 0x29efe8u: goto label_29efe8;
        case 0x29efecu: goto label_29efec;
        case 0x29eff0u: goto label_29eff0;
        case 0x29eff4u: goto label_29eff4;
        case 0x29eff8u: goto label_29eff8;
        case 0x29effcu: goto label_29effc;
        case 0x29f000u: goto label_29f000;
        case 0x29f004u: goto label_29f004;
        case 0x29f008u: goto label_29f008;
        case 0x29f00cu: goto label_29f00c;
        case 0x29f010u: goto label_29f010;
        case 0x29f014u: goto label_29f014;
        case 0x29f018u: goto label_29f018;
        case 0x29f01cu: goto label_29f01c;
        case 0x29f020u: goto label_29f020;
        case 0x29f024u: goto label_29f024;
        case 0x29f028u: goto label_29f028;
        case 0x29f02cu: goto label_29f02c;
        case 0x29f030u: goto label_29f030;
        case 0x29f034u: goto label_29f034;
        case 0x29f038u: goto label_29f038;
        case 0x29f03cu: goto label_29f03c;
        case 0x29f040u: goto label_29f040;
        case 0x29f044u: goto label_29f044;
        case 0x29f048u: goto label_29f048;
        case 0x29f04cu: goto label_29f04c;
        case 0x29f050u: goto label_29f050;
        case 0x29f054u: goto label_29f054;
        case 0x29f058u: goto label_29f058;
        case 0x29f05cu: goto label_29f05c;
        case 0x29f060u: goto label_29f060;
        case 0x29f064u: goto label_29f064;
        case 0x29f068u: goto label_29f068;
        case 0x29f06cu: goto label_29f06c;
        case 0x29f070u: goto label_29f070;
        case 0x29f074u: goto label_29f074;
        case 0x29f078u: goto label_29f078;
        case 0x29f07cu: goto label_29f07c;
        case 0x29f080u: goto label_29f080;
        case 0x29f084u: goto label_29f084;
        case 0x29f088u: goto label_29f088;
        case 0x29f08cu: goto label_29f08c;
        case 0x29f090u: goto label_29f090;
        case 0x29f094u: goto label_29f094;
        case 0x29f098u: goto label_29f098;
        case 0x29f09cu: goto label_29f09c;
        case 0x29f0a0u: goto label_29f0a0;
        case 0x29f0a4u: goto label_29f0a4;
        case 0x29f0a8u: goto label_29f0a8;
        case 0x29f0acu: goto label_29f0ac;
        case 0x29f0b0u: goto label_29f0b0;
        case 0x29f0b4u: goto label_29f0b4;
        case 0x29f0b8u: goto label_29f0b8;
        case 0x29f0bcu: goto label_29f0bc;
        case 0x29f0c0u: goto label_29f0c0;
        case 0x29f0c4u: goto label_29f0c4;
        case 0x29f0c8u: goto label_29f0c8;
        case 0x29f0ccu: goto label_29f0cc;
        case 0x29f0d0u: goto label_29f0d0;
        case 0x29f0d4u: goto label_29f0d4;
        case 0x29f0d8u: goto label_29f0d8;
        case 0x29f0dcu: goto label_29f0dc;
        case 0x29f0e0u: goto label_29f0e0;
        case 0x29f0e4u: goto label_29f0e4;
        case 0x29f0e8u: goto label_29f0e8;
        case 0x29f0ecu: goto label_29f0ec;
        case 0x29f0f0u: goto label_29f0f0;
        case 0x29f0f4u: goto label_29f0f4;
        case 0x29f0f8u: goto label_29f0f8;
        case 0x29f0fcu: goto label_29f0fc;
        case 0x29f100u: goto label_29f100;
        case 0x29f104u: goto label_29f104;
        case 0x29f108u: goto label_29f108;
        case 0x29f10cu: goto label_29f10c;
        case 0x29f110u: goto label_29f110;
        case 0x29f114u: goto label_29f114;
        case 0x29f118u: goto label_29f118;
        case 0x29f11cu: goto label_29f11c;
        case 0x29f120u: goto label_29f120;
        case 0x29f124u: goto label_29f124;
        case 0x29f128u: goto label_29f128;
        case 0x29f12cu: goto label_29f12c;
        case 0x29f130u: goto label_29f130;
        case 0x29f134u: goto label_29f134;
        case 0x29f138u: goto label_29f138;
        case 0x29f13cu: goto label_29f13c;
        case 0x29f140u: goto label_29f140;
        case 0x29f144u: goto label_29f144;
        case 0x29f148u: goto label_29f148;
        case 0x29f14cu: goto label_29f14c;
        case 0x29f150u: goto label_29f150;
        case 0x29f154u: goto label_29f154;
        case 0x29f158u: goto label_29f158;
        case 0x29f15cu: goto label_29f15c;
        case 0x29f160u: goto label_29f160;
        case 0x29f164u: goto label_29f164;
        case 0x29f168u: goto label_29f168;
        case 0x29f16cu: goto label_29f16c;
        case 0x29f170u: goto label_29f170;
        case 0x29f174u: goto label_29f174;
        case 0x29f178u: goto label_29f178;
        case 0x29f17cu: goto label_29f17c;
        case 0x29f180u: goto label_29f180;
        case 0x29f184u: goto label_29f184;
        case 0x29f188u: goto label_29f188;
        case 0x29f18cu: goto label_29f18c;
        case 0x29f190u: goto label_29f190;
        case 0x29f194u: goto label_29f194;
        case 0x29f198u: goto label_29f198;
        case 0x29f19cu: goto label_29f19c;
        case 0x29f1a0u: goto label_29f1a0;
        case 0x29f1a4u: goto label_29f1a4;
        case 0x29f1a8u: goto label_29f1a8;
        case 0x29f1acu: goto label_29f1ac;
        case 0x29f1b0u: goto label_29f1b0;
        case 0x29f1b4u: goto label_29f1b4;
        case 0x29f1b8u: goto label_29f1b8;
        case 0x29f1bcu: goto label_29f1bc;
        case 0x29f1c0u: goto label_29f1c0;
        case 0x29f1c4u: goto label_29f1c4;
        case 0x29f1c8u: goto label_29f1c8;
        case 0x29f1ccu: goto label_29f1cc;
        case 0x29f1d0u: goto label_29f1d0;
        case 0x29f1d4u: goto label_29f1d4;
        case 0x29f1d8u: goto label_29f1d8;
        case 0x29f1dcu: goto label_29f1dc;
        case 0x29f1e0u: goto label_29f1e0;
        case 0x29f1e4u: goto label_29f1e4;
        case 0x29f1e8u: goto label_29f1e8;
        case 0x29f1ecu: goto label_29f1ec;
        case 0x29f1f0u: goto label_29f1f0;
        case 0x29f1f4u: goto label_29f1f4;
        case 0x29f1f8u: goto label_29f1f8;
        case 0x29f1fcu: goto label_29f1fc;
        case 0x29f200u: goto label_29f200;
        case 0x29f204u: goto label_29f204;
        case 0x29f208u: goto label_29f208;
        case 0x29f20cu: goto label_29f20c;
        case 0x29f210u: goto label_29f210;
        case 0x29f214u: goto label_29f214;
        case 0x29f218u: goto label_29f218;
        case 0x29f21cu: goto label_29f21c;
        case 0x29f220u: goto label_29f220;
        case 0x29f224u: goto label_29f224;
        case 0x29f228u: goto label_29f228;
        case 0x29f22cu: goto label_29f22c;
        case 0x29f230u: goto label_29f230;
        case 0x29f234u: goto label_29f234;
        case 0x29f238u: goto label_29f238;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f240u: goto label_29f240;
        case 0x29f244u: goto label_29f244;
        case 0x29f248u: goto label_29f248;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f250u: goto label_29f250;
        case 0x29f254u: goto label_29f254;
        case 0x29f258u: goto label_29f258;
        case 0x29f25cu: goto label_29f25c;
        case 0x29f260u: goto label_29f260;
        case 0x29f264u: goto label_29f264;
        case 0x29f268u: goto label_29f268;
        case 0x29f26cu: goto label_29f26c;
        case 0x29f270u: goto label_29f270;
        case 0x29f274u: goto label_29f274;
        case 0x29f278u: goto label_29f278;
        case 0x29f27cu: goto label_29f27c;
        case 0x29f280u: goto label_29f280;
        case 0x29f284u: goto label_29f284;
        case 0x29f288u: goto label_29f288;
        case 0x29f28cu: goto label_29f28c;
        case 0x29f290u: goto label_29f290;
        case 0x29f294u: goto label_29f294;
        case 0x29f298u: goto label_29f298;
        case 0x29f29cu: goto label_29f29c;
        case 0x29f2a0u: goto label_29f2a0;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2a8u: goto label_29f2a8;
        case 0x29f2acu: goto label_29f2ac;
        case 0x29f2b0u: goto label_29f2b0;
        case 0x29f2b4u: goto label_29f2b4;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2bcu: goto label_29f2bc;
        case 0x29f2c0u: goto label_29f2c0;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2c8u: goto label_29f2c8;
        case 0x29f2ccu: goto label_29f2cc;
        case 0x29f2d0u: goto label_29f2d0;
        case 0x29f2d4u: goto label_29f2d4;
        case 0x29f2d8u: goto label_29f2d8;
        case 0x29f2dcu: goto label_29f2dc;
        case 0x29f2e0u: goto label_29f2e0;
        case 0x29f2e4u: goto label_29f2e4;
        case 0x29f2e8u: goto label_29f2e8;
        case 0x29f2ecu: goto label_29f2ec;
        case 0x29f2f0u: goto label_29f2f0;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f2f8u: goto label_29f2f8;
        case 0x29f2fcu: goto label_29f2fc;
        case 0x29f300u: goto label_29f300;
        case 0x29f304u: goto label_29f304;
        case 0x29f308u: goto label_29f308;
        case 0x29f30cu: goto label_29f30c;
        case 0x29f310u: goto label_29f310;
        case 0x29f314u: goto label_29f314;
        case 0x29f318u: goto label_29f318;
        case 0x29f31cu: goto label_29f31c;
        case 0x29f320u: goto label_29f320;
        case 0x29f324u: goto label_29f324;
        case 0x29f328u: goto label_29f328;
        case 0x29f32cu: goto label_29f32c;
        case 0x29f330u: goto label_29f330;
        case 0x29f334u: goto label_29f334;
        case 0x29f338u: goto label_29f338;
        case 0x29f33cu: goto label_29f33c;
        case 0x29f340u: goto label_29f340;
        case 0x29f344u: goto label_29f344;
        case 0x29f348u: goto label_29f348;
        case 0x29f34cu: goto label_29f34c;
        case 0x29f350u: goto label_29f350;
        case 0x29f354u: goto label_29f354;
        case 0x29f358u: goto label_29f358;
        case 0x29f35cu: goto label_29f35c;
        case 0x29f360u: goto label_29f360;
        case 0x29f364u: goto label_29f364;
        case 0x29f368u: goto label_29f368;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f370u: goto label_29f370;
        case 0x29f374u: goto label_29f374;
        case 0x29f378u: goto label_29f378;
        case 0x29f37cu: goto label_29f37c;
        case 0x29f380u: goto label_29f380;
        case 0x29f384u: goto label_29f384;
        case 0x29f388u: goto label_29f388;
        case 0x29f38cu: goto label_29f38c;
        case 0x29f390u: goto label_29f390;
        case 0x29f394u: goto label_29f394;
        case 0x29f398u: goto label_29f398;
        case 0x29f39cu: goto label_29f39c;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3a4u: goto label_29f3a4;
        case 0x29f3a8u: goto label_29f3a8;
        case 0x29f3acu: goto label_29f3ac;
        case 0x29f3b0u: goto label_29f3b0;
        case 0x29f3b4u: goto label_29f3b4;
        case 0x29f3b8u: goto label_29f3b8;
        case 0x29f3bcu: goto label_29f3bc;
        case 0x29f3c0u: goto label_29f3c0;
        case 0x29f3c4u: goto label_29f3c4;
        case 0x29f3c8u: goto label_29f3c8;
        case 0x29f3ccu: goto label_29f3cc;
        case 0x29f3d0u: goto label_29f3d0;
        case 0x29f3d4u: goto label_29f3d4;
        case 0x29f3d8u: goto label_29f3d8;
        case 0x29f3dcu: goto label_29f3dc;
        case 0x29f3e0u: goto label_29f3e0;
        case 0x29f3e4u: goto label_29f3e4;
        case 0x29f3e8u: goto label_29f3e8;
        case 0x29f3ecu: goto label_29f3ec;
        case 0x29f3f0u: goto label_29f3f0;
        case 0x29f3f4u: goto label_29f3f4;
        case 0x29f3f8u: goto label_29f3f8;
        case 0x29f3fcu: goto label_29f3fc;
        case 0x29f400u: goto label_29f400;
        case 0x29f404u: goto label_29f404;
        case 0x29f408u: goto label_29f408;
        case 0x29f40cu: goto label_29f40c;
        case 0x29f410u: goto label_29f410;
        case 0x29f414u: goto label_29f414;
        case 0x29f418u: goto label_29f418;
        case 0x29f41cu: goto label_29f41c;
        case 0x29f420u: goto label_29f420;
        case 0x29f424u: goto label_29f424;
        case 0x29f428u: goto label_29f428;
        case 0x29f42cu: goto label_29f42c;
        case 0x29f430u: goto label_29f430;
        case 0x29f434u: goto label_29f434;
        case 0x29f438u: goto label_29f438;
        case 0x29f43cu: goto label_29f43c;
        case 0x29f440u: goto label_29f440;
        case 0x29f444u: goto label_29f444;
        case 0x29f448u: goto label_29f448;
        case 0x29f44cu: goto label_29f44c;
        case 0x29f450u: goto label_29f450;
        case 0x29f454u: goto label_29f454;
        case 0x29f458u: goto label_29f458;
        case 0x29f45cu: goto label_29f45c;
        case 0x29f460u: goto label_29f460;
        case 0x29f464u: goto label_29f464;
        case 0x29f468u: goto label_29f468;
        case 0x29f46cu: goto label_29f46c;
        case 0x29f470u: goto label_29f470;
        case 0x29f474u: goto label_29f474;
        case 0x29f478u: goto label_29f478;
        case 0x29f47cu: goto label_29f47c;
        case 0x29f480u: goto label_29f480;
        case 0x29f484u: goto label_29f484;
        case 0x29f488u: goto label_29f488;
        case 0x29f48cu: goto label_29f48c;
        case 0x29f490u: goto label_29f490;
        case 0x29f494u: goto label_29f494;
        case 0x29f498u: goto label_29f498;
        case 0x29f49cu: goto label_29f49c;
        case 0x29f4a0u: goto label_29f4a0;
        case 0x29f4a4u: goto label_29f4a4;
        case 0x29f4a8u: goto label_29f4a8;
        case 0x29f4acu: goto label_29f4ac;
        case 0x29f4b0u: goto label_29f4b0;
        case 0x29f4b4u: goto label_29f4b4;
        case 0x29f4b8u: goto label_29f4b8;
        case 0x29f4bcu: goto label_29f4bc;
        case 0x29f4c0u: goto label_29f4c0;
        case 0x29f4c4u: goto label_29f4c4;
        case 0x29f4c8u: goto label_29f4c8;
        case 0x29f4ccu: goto label_29f4cc;
        case 0x29f4d0u: goto label_29f4d0;
        case 0x29f4d4u: goto label_29f4d4;
        case 0x29f4d8u: goto label_29f4d8;
        case 0x29f4dcu: goto label_29f4dc;
        case 0x29f4e0u: goto label_29f4e0;
        case 0x29f4e4u: goto label_29f4e4;
        case 0x29f4e8u: goto label_29f4e8;
        case 0x29f4ecu: goto label_29f4ec;
        case 0x29f4f0u: goto label_29f4f0;
        case 0x29f4f4u: goto label_29f4f4;
        case 0x29f4f8u: goto label_29f4f8;
        case 0x29f4fcu: goto label_29f4fc;
        case 0x29f500u: goto label_29f500;
        case 0x29f504u: goto label_29f504;
        case 0x29f508u: goto label_29f508;
        case 0x29f50cu: goto label_29f50c;
        case 0x29f510u: goto label_29f510;
        case 0x29f514u: goto label_29f514;
        case 0x29f518u: goto label_29f518;
        case 0x29f51cu: goto label_29f51c;
        case 0x29f520u: goto label_29f520;
        case 0x29f524u: goto label_29f524;
        case 0x29f528u: goto label_29f528;
        case 0x29f52cu: goto label_29f52c;
        case 0x29f530u: goto label_29f530;
        case 0x29f534u: goto label_29f534;
        case 0x29f538u: goto label_29f538;
        case 0x29f53cu: goto label_29f53c;
        case 0x29f540u: goto label_29f540;
        case 0x29f544u: goto label_29f544;
        case 0x29f548u: goto label_29f548;
        case 0x29f54cu: goto label_29f54c;
        case 0x29f550u: goto label_29f550;
        case 0x29f554u: goto label_29f554;
        case 0x29f558u: goto label_29f558;
        case 0x29f55cu: goto label_29f55c;
        case 0x29f560u: goto label_29f560;
        case 0x29f564u: goto label_29f564;
        case 0x29f568u: goto label_29f568;
        case 0x29f56cu: goto label_29f56c;
        case 0x29f570u: goto label_29f570;
        case 0x29f574u: goto label_29f574;
        case 0x29f578u: goto label_29f578;
        case 0x29f57cu: goto label_29f57c;
        case 0x29f580u: goto label_29f580;
        case 0x29f584u: goto label_29f584;
        case 0x29f588u: goto label_29f588;
        case 0x29f58cu: goto label_29f58c;
        case 0x29f590u: goto label_29f590;
        case 0x29f594u: goto label_29f594;
        case 0x29f598u: goto label_29f598;
        case 0x29f59cu: goto label_29f59c;
        case 0x29f5a0u: goto label_29f5a0;
        case 0x29f5a4u: goto label_29f5a4;
        case 0x29f5a8u: goto label_29f5a8;
        case 0x29f5acu: goto label_29f5ac;
        case 0x29f5b0u: goto label_29f5b0;
        case 0x29f5b4u: goto label_29f5b4;
        case 0x29f5b8u: goto label_29f5b8;
        case 0x29f5bcu: goto label_29f5bc;
        case 0x29f5c0u: goto label_29f5c0;
        case 0x29f5c4u: goto label_29f5c4;
        case 0x29f5c8u: goto label_29f5c8;
        case 0x29f5ccu: goto label_29f5cc;
        case 0x29f5d0u: goto label_29f5d0;
        case 0x29f5d4u: goto label_29f5d4;
        case 0x29f5d8u: goto label_29f5d8;
        case 0x29f5dcu: goto label_29f5dc;
        case 0x29f5e0u: goto label_29f5e0;
        case 0x29f5e4u: goto label_29f5e4;
        case 0x29f5e8u: goto label_29f5e8;
        case 0x29f5ecu: goto label_29f5ec;
        case 0x29f5f0u: goto label_29f5f0;
        case 0x29f5f4u: goto label_29f5f4;
        case 0x29f5f8u: goto label_29f5f8;
        case 0x29f5fcu: goto label_29f5fc;
        case 0x29f600u: goto label_29f600;
        case 0x29f604u: goto label_29f604;
        case 0x29f608u: goto label_29f608;
        case 0x29f60cu: goto label_29f60c;
        case 0x29f610u: goto label_29f610;
        case 0x29f614u: goto label_29f614;
        case 0x29f618u: goto label_29f618;
        case 0x29f61cu: goto label_29f61c;
        case 0x29f620u: goto label_29f620;
        case 0x29f624u: goto label_29f624;
        case 0x29f628u: goto label_29f628;
        case 0x29f62cu: goto label_29f62c;
        case 0x29f630u: goto label_29f630;
        case 0x29f634u: goto label_29f634;
        case 0x29f638u: goto label_29f638;
        case 0x29f63cu: goto label_29f63c;
        case 0x29f640u: goto label_29f640;
        case 0x29f644u: goto label_29f644;
        case 0x29f648u: goto label_29f648;
        case 0x29f64cu: goto label_29f64c;
        case 0x29f650u: goto label_29f650;
        case 0x29f654u: goto label_29f654;
        case 0x29f658u: goto label_29f658;
        case 0x29f65cu: goto label_29f65c;
        case 0x29f660u: goto label_29f660;
        case 0x29f664u: goto label_29f664;
        case 0x29f668u: goto label_29f668;
        case 0x29f66cu: goto label_29f66c;
        case 0x29f670u: goto label_29f670;
        case 0x29f674u: goto label_29f674;
        case 0x29f678u: goto label_29f678;
        case 0x29f67cu: goto label_29f67c;
        case 0x29f680u: goto label_29f680;
        case 0x29f684u: goto label_29f684;
        case 0x29f688u: goto label_29f688;
        case 0x29f68cu: goto label_29f68c;
        case 0x29f690u: goto label_29f690;
        case 0x29f694u: goto label_29f694;
        case 0x29f698u: goto label_29f698;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6a0u: goto label_29f6a0;
        case 0x29f6a4u: goto label_29f6a4;
        case 0x29f6a8u: goto label_29f6a8;
        case 0x29f6acu: goto label_29f6ac;
        case 0x29f6b0u: goto label_29f6b0;
        case 0x29f6b4u: goto label_29f6b4;
        case 0x29f6b8u: goto label_29f6b8;
        case 0x29f6bcu: goto label_29f6bc;
        case 0x29f6c0u: goto label_29f6c0;
        case 0x29f6c4u: goto label_29f6c4;
        case 0x29f6c8u: goto label_29f6c8;
        case 0x29f6ccu: goto label_29f6cc;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6d4u: goto label_29f6d4;
        case 0x29f6d8u: goto label_29f6d8;
        case 0x29f6dcu: goto label_29f6dc;
        case 0x29f6e0u: goto label_29f6e0;
        case 0x29f6e4u: goto label_29f6e4;
        case 0x29f6e8u: goto label_29f6e8;
        case 0x29f6ecu: goto label_29f6ec;
        case 0x29f6f0u: goto label_29f6f0;
        case 0x29f6f4u: goto label_29f6f4;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f6fcu: goto label_29f6fc;
        case 0x29f700u: goto label_29f700;
        case 0x29f704u: goto label_29f704;
        case 0x29f708u: goto label_29f708;
        case 0x29f70cu: goto label_29f70c;
        case 0x29f710u: goto label_29f710;
        case 0x29f714u: goto label_29f714;
        case 0x29f718u: goto label_29f718;
        case 0x29f71cu: goto label_29f71c;
        case 0x29f720u: goto label_29f720;
        case 0x29f724u: goto label_29f724;
        case 0x29f728u: goto label_29f728;
        case 0x29f72cu: goto label_29f72c;
        case 0x29f730u: goto label_29f730;
        case 0x29f734u: goto label_29f734;
        case 0x29f738u: goto label_29f738;
        case 0x29f73cu: goto label_29f73c;
        case 0x29f740u: goto label_29f740;
        case 0x29f744u: goto label_29f744;
        case 0x29f748u: goto label_29f748;
        case 0x29f74cu: goto label_29f74c;
        case 0x29f750u: goto label_29f750;
        case 0x29f754u: goto label_29f754;
        case 0x29f758u: goto label_29f758;
        case 0x29f75cu: goto label_29f75c;
        case 0x29f760u: goto label_29f760;
        case 0x29f764u: goto label_29f764;
        case 0x29f768u: goto label_29f768;
        case 0x29f76cu: goto label_29f76c;
        case 0x29f770u: goto label_29f770;
        case 0x29f774u: goto label_29f774;
        case 0x29f778u: goto label_29f778;
        case 0x29f77cu: goto label_29f77c;
        case 0x29f780u: goto label_29f780;
        case 0x29f784u: goto label_29f784;
        case 0x29f788u: goto label_29f788;
        case 0x29f78cu: goto label_29f78c;
        case 0x29f790u: goto label_29f790;
        case 0x29f794u: goto label_29f794;
        case 0x29f798u: goto label_29f798;
        case 0x29f79cu: goto label_29f79c;
        case 0x29f7a0u: goto label_29f7a0;
        case 0x29f7a4u: goto label_29f7a4;
        case 0x29f7a8u: goto label_29f7a8;
        case 0x29f7acu: goto label_29f7ac;
        case 0x29f7b0u: goto label_29f7b0;
        case 0x29f7b4u: goto label_29f7b4;
        case 0x29f7b8u: goto label_29f7b8;
        case 0x29f7bcu: goto label_29f7bc;
        case 0x29f7c0u: goto label_29f7c0;
        case 0x29f7c4u: goto label_29f7c4;
        case 0x29f7c8u: goto label_29f7c8;
        case 0x29f7ccu: goto label_29f7cc;
        case 0x29f7d0u: goto label_29f7d0;
        case 0x29f7d4u: goto label_29f7d4;
        case 0x29f7d8u: goto label_29f7d8;
        case 0x29f7dcu: goto label_29f7dc;
        case 0x29f7e0u: goto label_29f7e0;
        case 0x29f7e4u: goto label_29f7e4;
        case 0x29f7e8u: goto label_29f7e8;
        case 0x29f7ecu: goto label_29f7ec;
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f7f4u: goto label_29f7f4;
        case 0x29f7f8u: goto label_29f7f8;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f800u: goto label_29f800;
        case 0x29f804u: goto label_29f804;
        case 0x29f808u: goto label_29f808;
        case 0x29f80cu: goto label_29f80c;
        case 0x29f810u: goto label_29f810;
        case 0x29f814u: goto label_29f814;
        case 0x29f818u: goto label_29f818;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f820u: goto label_29f820;
        case 0x29f824u: goto label_29f824;
        case 0x29f828u: goto label_29f828;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f830u: goto label_29f830;
        case 0x29f834u: goto label_29f834;
        case 0x29f838u: goto label_29f838;
        case 0x29f83cu: goto label_29f83c;
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        case 0x29f8a0u: goto label_29f8a0;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8a8u: goto label_29f8a8;
        case 0x29f8acu: goto label_29f8ac;
        case 0x29f8b0u: goto label_29f8b0;
        case 0x29f8b4u: goto label_29f8b4;
        case 0x29f8b8u: goto label_29f8b8;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8c4u: goto label_29f8c4;
        case 0x29f8c8u: goto label_29f8c8;
        case 0x29f8ccu: goto label_29f8cc;
        case 0x29f8d0u: goto label_29f8d0;
        case 0x29f8d4u: goto label_29f8d4;
        case 0x29f8d8u: goto label_29f8d8;
        case 0x29f8dcu: goto label_29f8dc;
        case 0x29f8e0u: goto label_29f8e0;
        case 0x29f8e4u: goto label_29f8e4;
        case 0x29f8e8u: goto label_29f8e8;
        case 0x29f8ecu: goto label_29f8ec;
        case 0x29f8f0u: goto label_29f8f0;
        case 0x29f8f4u: goto label_29f8f4;
        case 0x29f8f8u: goto label_29f8f8;
        case 0x29f8fcu: goto label_29f8fc;
        case 0x29f900u: goto label_29f900;
        case 0x29f904u: goto label_29f904;
        case 0x29f908u: goto label_29f908;
        case 0x29f90cu: goto label_29f90c;
        case 0x29f910u: goto label_29f910;
        case 0x29f914u: goto label_29f914;
        case 0x29f918u: goto label_29f918;
        case 0x29f91cu: goto label_29f91c;
        case 0x29f920u: goto label_29f920;
        case 0x29f924u: goto label_29f924;
        case 0x29f928u: goto label_29f928;
        case 0x29f92cu: goto label_29f92c;
        case 0x29f930u: goto label_29f930;
        case 0x29f934u: goto label_29f934;
        case 0x29f938u: goto label_29f938;
        case 0x29f93cu: goto label_29f93c;
        case 0x29f940u: goto label_29f940;
        case 0x29f944u: goto label_29f944;
        case 0x29f948u: goto label_29f948;
        case 0x29f94cu: goto label_29f94c;
        case 0x29f950u: goto label_29f950;
        case 0x29f954u: goto label_29f954;
        case 0x29f958u: goto label_29f958;
        case 0x29f95cu: goto label_29f95c;
        case 0x29f960u: goto label_29f960;
        case 0x29f964u: goto label_29f964;
        case 0x29f968u: goto label_29f968;
        case 0x29f96cu: goto label_29f96c;
        case 0x29f970u: goto label_29f970;
        case 0x29f974u: goto label_29f974;
        case 0x29f978u: goto label_29f978;
        case 0x29f97cu: goto label_29f97c;
        case 0x29f980u: goto label_29f980;
        case 0x29f984u: goto label_29f984;
        case 0x29f988u: goto label_29f988;
        case 0x29f98cu: goto label_29f98c;
        case 0x29f990u: goto label_29f990;
        case 0x29f994u: goto label_29f994;
        case 0x29f998u: goto label_29f998;
        case 0x29f99cu: goto label_29f99c;
        case 0x29f9a0u: goto label_29f9a0;
        case 0x29f9a4u: goto label_29f9a4;
        case 0x29f9a8u: goto label_29f9a8;
        case 0x29f9acu: goto label_29f9ac;
        case 0x29f9b0u: goto label_29f9b0;
        case 0x29f9b4u: goto label_29f9b4;
        case 0x29f9b8u: goto label_29f9b8;
        case 0x29f9bcu: goto label_29f9bc;
        case 0x29f9c0u: goto label_29f9c0;
        case 0x29f9c4u: goto label_29f9c4;
        case 0x29f9c8u: goto label_29f9c8;
        case 0x29f9ccu: goto label_29f9cc;
        case 0x29f9d0u: goto label_29f9d0;
        case 0x29f9d4u: goto label_29f9d4;
        case 0x29f9d8u: goto label_29f9d8;
        case 0x29f9dcu: goto label_29f9dc;
        default: break;
    }

    ctx->pc = 0x29e9b0u;

label_29e9b0:
    // 0x29e9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29e9b4:
    // 0x29e9b4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29e9b8:
    // 0x29e9b8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29e9b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e9bc:
    // 0x29e9bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x29e9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e9c0:
    // 0x29e9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e9c4:
    // 0x29e9c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e9c8:
    // 0x29e9c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e9cc:
    // 0x29e9cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e9d0:
    // 0x29e9d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e9d4:
    // 0x29e9d4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x29e9d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29e9d8:
    // 0x29e9d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e9dc:
    // 0x29e9dc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29e9dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e9e0:
    // 0x29e9e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e9e4:
    // 0x29e9e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e9e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e9e8:
    // 0x29e9e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29e9ec:
    // 0x29e9ec: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29e9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_29e9f0:
    // 0x29e9f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x29e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_29e9f4:
    // 0x29e9f4: 0xc0a7888  jal         func_29E220
label_29e9f8:
    if (ctx->pc == 0x29E9F8u) {
        ctx->pc = 0x29E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9F4u;
        // 0x29e9f8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E9FCu;
        goto label_29e9fc;
    }
    ctx->pc = 0x29E9F4u;
    SET_GPR_U32(ctx, 31, 0x29E9FCu);
    ctx->pc = 0x29E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9F4u;
    // 0x29e9f8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E220u, 0x29E9F4u, 0x29E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9FCu;
label_29e9fc:
    // 0x29e9fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29e9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ea00:
    // 0x29ea00: 0x128f02  srl         $s1, $s2, 28
    ctx->pc = 0x29ea00u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
label_29ea04:
    // 0x29ea04: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_29ea08:
    if (ctx->pc == 0x29EA08u) {
        ctx->pc = 0x29EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA04u;
        // 0x29ea08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA0Cu;
        goto label_29ea0c;
    }
    ctx->pc = 0x29EA04u;
    {
        const bool branch_taken_0x29ea04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea04) {
            ctx->pc = 0x29EA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA04u;
            // 0x29ea08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA58u;
            goto label_29ea58;
        }
    }
    ctx->pc = 0x29EA0Cu;
label_29ea0c:
    // 0x29ea0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_29ea10:
    // 0x29ea10: 0x245e6890  addiu       $fp, $v0, 0x6890
    ctx->pc = 0x29ea10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 26768));
label_29ea14:
    // 0x29ea14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29ea18:
    // 0x29ea18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ea1c:
    // 0x29ea1c: 0x721807  srav        $v1, $s2, $v1
    ctx->pc = 0x29ea1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_29ea20:
    // 0x29ea20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29ea24:
    // 0x29ea24: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x29ea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29ea28:
    // 0x29ea28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29ea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ea2c:
    // 0x29ea2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29ea30:
    // 0x29ea30: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29ea30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29ea34:
    // 0x29ea34: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x29ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_29ea38:
    // 0x29ea38: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29ea38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ea3c:
    // 0x29ea3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29ea40:
    // 0x29ea40: 0x40f809  jalr        $v0
label_29ea44:
    if (ctx->pc == 0x29EA44u) {
        ctx->pc = 0x29EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA40u;
        // 0x29ea44: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA48u;
        goto label_29ea48;
    }
    ctx->pc = 0x29EA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EA48u);
        ctx->pc = 0x29EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA40u;
        // 0x29ea44: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA40u, 0x29EA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EA48u;
label_29ea48:
    // 0x29ea48: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x29ea48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ea4c:
    // 0x29ea4c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_29ea50:
    if (ctx->pc == 0x29EA50u) {
        ctx->pc = 0x29EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA4Cu;
        // 0x29ea50: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA54u;
        goto label_29ea54;
    }
    ctx->pc = 0x29EA4Cu;
    {
        const bool branch_taken_0x29ea4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA4Cu;
        // 0x29ea50: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea4c) {
            ctx->pc = 0x29EA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ea18;
        }
    }
    ctx->pc = 0x29EA54u;
label_29ea54:
    // 0x29ea54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ea54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ea58:
    // 0x29ea58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ea58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ea5c:
    // 0x29ea5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ea5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29ea60:
    // 0x29ea60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ea60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ea64:
    // 0x29ea64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ea64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ea68:
    // 0x29ea68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ea68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ea6c:
    // 0x29ea6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29ea6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ea70:
    // 0x29ea70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29ea70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ea74:
    // 0x29ea74: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29ea74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29ea78:
    // 0x29ea78: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29ea78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29ea7c:
    // 0x29ea7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29ea80:
    // 0x29ea80: 0x3e00008  jr          $ra
label_29ea84:
    if (ctx->pc == 0x29EA84u) {
        ctx->pc = 0x29EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA80u;
        // 0x29ea84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA88u;
        goto label_29ea88;
    }
    ctx->pc = 0x29EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA80u;
        // 0x29ea84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA88u;
label_29ea88:
    // 0x29ea88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ea8c:
    // 0x29ea8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ea90:
    // 0x29ea90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ea90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ea94:
    // 0x29ea94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ea98:
    // 0x29ea98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ea98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ea9c:
    // 0x29ea9c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ea9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eaa0:
    // 0x29eaa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29eaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29eaa4:
    // 0x29eaa4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29eaa8:
    // 0x29eaa8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29eaa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29eaac:
    // 0x29eaac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29eab0:
    // 0x29eab0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29eab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29eab4:
    // 0x29eab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29eab8:
    // 0x29eab8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29eab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29eabc:
    // 0x29eabc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29eac0:
    if (ctx->pc == 0x29EAC0u) {
        ctx->pc = 0x29EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EABCu;
        // 0x29eac0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EAC4u;
        goto label_29eac4;
    }
    ctx->pc = 0x29EABCu;
    {
        const bool branch_taken_0x29eabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EABCu;
        // 0x29eac0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eabc) {
            ctx->pc = 0x29EB00u;
            goto label_29eb00;
        }
    }
    ctx->pc = 0x29EAC4u;
label_29eac4:
    // 0x29eac4: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x29eac4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_29eac8:
    // 0x29eac8: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x29eac8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_29eacc:
    // 0x29eacc: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29ead0:
    // 0x29ead0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29ead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ead4:
    // 0x29ead4: 0xc0a7878  jal         func_29E1E0
label_29ead8:
    if (ctx->pc == 0x29EAD8u) {
        ctx->pc = 0x29EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAD4u;
        // 0x29ead8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EADCu;
        goto label_29eadc;
    }
    ctx->pc = 0x29EAD4u;
    SET_GPR_U32(ctx, 31, 0x29EADCu);
    ctx->pc = 0x29EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EAD4u;
    // 0x29ead8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29EAD4u, 0x29EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EADCu;
label_29eadc:
    // 0x29eadc: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_29eae0:
    if (ctx->pc == 0x29EAE0u) {
        ctx->pc = 0x29EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EADCu;
        // 0x29eae0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EAE4u;
        goto label_29eae4;
    }
    ctx->pc = 0x29EADCu;
    {
        const bool branch_taken_0x29eadc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29eadc) {
            ctx->pc = 0x29EAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EADCu;
            // 0x29eae0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EAF4u;
            goto label_29eaf4;
        }
    }
    ctx->pc = 0x29EAE4u;
label_29eae4:
    // 0x29eae4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29eae8:
    // 0x29eae8: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29eaec:
    // 0x29eaec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29eaf0:
    // 0x29eaf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29eaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29eaf4:
    // 0x29eaf4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29eaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eaf8:
    // 0x29eaf8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29eafc:
    if (ctx->pc == 0x29EAFCu) {
        ctx->pc = 0x29EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAF8u;
        // 0x29eafc: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB00u;
        goto label_29eb00;
    }
    ctx->pc = 0x29EAF8u;
    {
        const bool branch_taken_0x29eaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAF8u;
        // 0x29eafc: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eaf8) {
            ctx->pc = 0x29EAD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ead0;
        }
    }
    ctx->pc = 0x29EB00u;
label_29eb00:
    // 0x29eb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29eb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eb04:
    // 0x29eb04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29eb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eb08:
    // 0x29eb08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29eb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29eb0c:
    // 0x29eb0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29eb0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29eb10:
    // 0x29eb10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29eb10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29eb14:
    // 0x29eb14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29eb14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29eb18:
    // 0x29eb18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29eb18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29eb1c:
    // 0x29eb1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29eb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29eb20:
    // 0x29eb20: 0x3e00008  jr          $ra
label_29eb24:
    if (ctx->pc == 0x29EB24u) {
        ctx->pc = 0x29EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB20u;
        // 0x29eb24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB28u;
        goto label_29eb28;
    }
    ctx->pc = 0x29EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB20u;
        // 0x29eb24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EB28u;
label_29eb28:
    // 0x29eb28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29eb2c:
    // 0x29eb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29eb30:
    // 0x29eb30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29eb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29eb34:
    // 0x29eb34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29eb38:
    // 0x29eb38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29eb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29eb3c:
    // 0x29eb3c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29eb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eb40:
    // 0x29eb40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29eb44:
    // 0x29eb44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29eb48:
    // 0x29eb48: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29eb48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29eb4c:
    // 0x29eb4c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29eb50:
    // 0x29eb50: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29eb50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29eb54:
    // 0x29eb54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29eb58:
    // 0x29eb58: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29eb58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29eb5c:
    // 0x29eb5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29eb60:
    if (ctx->pc == 0x29EB60u) {
        ctx->pc = 0x29EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB5Cu;
        // 0x29eb60: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB64u;
        goto label_29eb64;
    }
    ctx->pc = 0x29EB5Cu;
    {
        const bool branch_taken_0x29eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB5Cu;
        // 0x29eb60: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb5c) {
            ctx->pc = 0x29EBA0u;
            goto label_29eba0;
        }
    }
    ctx->pc = 0x29EB64u;
label_29eb64:
    // 0x29eb64: 0x3c12a951  lui         $s2, 0xA951
    ctx->pc = 0x29eb64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43345 << 16));
label_29eb68:
    // 0x29eb68: 0x365228c3  ori         $s2, $s2, 0x28C3
    ctx->pc = 0x29eb68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)10435);
label_29eb6c:
    // 0x29eb6c: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29eb70:
    // 0x29eb70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29eb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29eb74:
    // 0x29eb74: 0xc0a7878  jal         func_29E1E0
label_29eb78:
    if (ctx->pc == 0x29EB78u) {
        ctx->pc = 0x29EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB74u;
        // 0x29eb78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB7Cu;
        goto label_29eb7c;
    }
    ctx->pc = 0x29EB74u;
    SET_GPR_U32(ctx, 31, 0x29EB7Cu);
    ctx->pc = 0x29EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB74u;
    // 0x29eb78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29EB74u, 0x29EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB7Cu;
label_29eb7c:
    // 0x29eb7c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_29eb80:
    if (ctx->pc == 0x29EB80u) {
        ctx->pc = 0x29EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB7Cu;
        // 0x29eb80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB84u;
        goto label_29eb84;
    }
    ctx->pc = 0x29EB7Cu;
    {
        const bool branch_taken_0x29eb7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29eb7c) {
            ctx->pc = 0x29EB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EB7Cu;
            // 0x29eb80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EB94u;
            goto label_29eb94;
        }
    }
    ctx->pc = 0x29EB84u;
label_29eb84:
    // 0x29eb84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29eb88:
    // 0x29eb88: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29eb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29eb8c:
    // 0x29eb8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29eb90:
    // 0x29eb90: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29eb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29eb94:
    // 0x29eb94: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29eb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eb98:
    // 0x29eb98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29eb9c:
    if (ctx->pc == 0x29EB9Cu) {
        ctx->pc = 0x29EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB98u;
        // 0x29eb9c: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBA0u;
        goto label_29eba0;
    }
    ctx->pc = 0x29EB98u;
    {
        const bool branch_taken_0x29eb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB98u;
        // 0x29eb9c: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb98) {
            ctx->pc = 0x29EB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29eb70;
        }
    }
    ctx->pc = 0x29EBA0u;
label_29eba0:
    // 0x29eba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29eba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eba4:
    // 0x29eba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29eba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eba8:
    // 0x29eba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29eba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29ebac:
    // 0x29ebac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ebacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ebb0:
    // 0x29ebb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ebb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ebb4:
    // 0x29ebb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ebb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ebb8:
    // 0x29ebb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29ebb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ebbc:
    // 0x29ebbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29ebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ebc0:
    // 0x29ebc0: 0x3e00008  jr          $ra
label_29ebc4:
    if (ctx->pc == 0x29EBC4u) {
        ctx->pc = 0x29EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBC0u;
        // 0x29ebc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBC8u;
        goto label_29ebc8;
    }
    ctx->pc = 0x29EBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBC0u;
        // 0x29ebc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EBC8u;
label_29ebc8:
    // 0x29ebc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ebcc:
    // 0x29ebcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ebd0:
    // 0x29ebd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ebd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ebd4:
    // 0x29ebd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ebd8:
    // 0x29ebd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ebd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ebdc:
    // 0x29ebdc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ebdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ebe0:
    // 0x29ebe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29ebe4:
    // 0x29ebe4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29ebe8:
    // 0x29ebe8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29ebe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ebec:
    // 0x29ebec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29ebf0:
    // 0x29ebf0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29ebf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ebf4:
    // 0x29ebf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29ebf8:
    // 0x29ebf8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29ebf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ebfc:
    // 0x29ebfc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29ec00:
    // 0x29ec00: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_29ec04:
    if (ctx->pc == 0x29EC04u) {
        ctx->pc = 0x29EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC00u;
        // 0x29ec04: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC08u;
        goto label_29ec08;
    }
    ctx->pc = 0x29EC00u;
    {
        const bool branch_taken_0x29ec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC00u;
        // 0x29ec04: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec00) {
            ctx->pc = 0x29EC58u;
            goto label_29ec58;
        }
    }
    ctx->pc = 0x29EC08u;
label_29ec08:
    // 0x29ec08: 0x3c120007  lui         $s2, 0x7
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7 << 16));
label_29ec0c:
    // 0x29ec0c: 0x3c16fff8  lui         $s6, 0xFFF8
    ctx->pc = 0x29ec0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65528 << 16));
label_29ec10:
    // 0x29ec10: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x29ec10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_29ec14:
    // 0x29ec14: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29ec18:
    // 0x29ec18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ec1c:
    // 0x29ec1c: 0xc0a7878  jal         func_29E1E0
label_29ec20:
    if (ctx->pc == 0x29EC20u) {
        ctx->pc = 0x29EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC1Cu;
        // 0x29ec20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC24u;
        goto label_29ec24;
    }
    ctx->pc = 0x29EC1Cu;
    SET_GPR_U32(ctx, 31, 0x29EC24u);
    ctx->pc = 0x29EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC1Cu;
    // 0x29ec20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29EC1Cu, 0x29EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC24u;
label_29ec24:
    // 0x29ec24: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_29ec28:
    if (ctx->pc == 0x29EC28u) {
        ctx->pc = 0x29EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC24u;
        // 0x29ec28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC2Cu;
        goto label_29ec2c;
    }
    ctx->pc = 0x29EC24u;
    {
        const bool branch_taken_0x29ec24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ec24) {
            ctx->pc = 0x29EC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EC24u;
            // 0x29ec28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EC4Cu;
            goto label_29ec4c;
        }
    }
    ctx->pc = 0x29EC2Cu;
label_29ec2c:
    // 0x29ec2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ec30:
    // 0x29ec30: 0x21cc0  sll         $v1, $v0, 19
    ctx->pc = 0x29ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_29ec34:
    // 0x29ec34: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x29ec34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_29ec38:
    // 0x29ec38: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x29ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_29ec3c:
    // 0x29ec3c: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x29ec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_29ec40:
    // 0x29ec40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29ec44:
    // 0x29ec44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29ec48:
    // 0x29ec48: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29ec48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29ec4c:
    // 0x29ec4c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ec4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ec50:
    // 0x29ec50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_29ec54:
    if (ctx->pc == 0x29EC54u) {
        ctx->pc = 0x29EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC50u;
        // 0x29ec54: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC58u;
        goto label_29ec58;
    }
    ctx->pc = 0x29EC50u;
    {
        const bool branch_taken_0x29ec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC50u;
        // 0x29ec54: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec50) {
            ctx->pc = 0x29EC18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ec18;
        }
    }
    ctx->pc = 0x29EC58u;
label_29ec58:
    // 0x29ec58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ec58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ec5c:
    // 0x29ec5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ec5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ec60:
    // 0x29ec60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ec60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29ec64:
    // 0x29ec64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ec64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ec68:
    // 0x29ec68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ec68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ec6c:
    // 0x29ec6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ec6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ec70:
    // 0x29ec70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29ec70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ec74:
    // 0x29ec74: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29ec74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ec78:
    // 0x29ec78: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29ec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29ec7c:
    // 0x29ec7c: 0x3e00008  jr          $ra
label_29ec80:
    if (ctx->pc == 0x29EC80u) {
        ctx->pc = 0x29EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC7Cu;
        // 0x29ec80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC84u;
        goto label_29ec84;
    }
    ctx->pc = 0x29EC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC7Cu;
        // 0x29ec80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EC84u;
label_29ec84:
    // 0x29ec84: 0x0  nop
    ctx->pc = 0x29ec84u;
    // NOP
label_29ec88:
    // 0x29ec88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ec8c:
    // 0x29ec8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ec90:
    // 0x29ec90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ec90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ec94:
    // 0x29ec94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ec98:
    // 0x29ec98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ec98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ec9c:
    // 0x29ec9c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ec9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eca0:
    // 0x29eca0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29eca4:
    // 0x29eca4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29eca8:
    // 0x29eca8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29eca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ecac:
    // 0x29ecac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29ecb0:
    // 0x29ecb0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29ecb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ecb4:
    // 0x29ecb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29ecb8:
    // 0x29ecb8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29ecb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ecbc:
    // 0x29ecbc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29ecc0:
    // 0x29ecc0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_29ecc4:
    if (ctx->pc == 0x29ECC4u) {
        ctx->pc = 0x29ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECC0u;
        // 0x29ecc4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECC8u;
        goto label_29ecc8;
    }
    ctx->pc = 0x29ECC0u;
    {
        const bool branch_taken_0x29ecc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECC0u;
        // 0x29ecc4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecc0) {
            ctx->pc = 0x29ED18u;
            goto label_29ed18;
        }
    }
    ctx->pc = 0x29ECC8u;
label_29ecc8:
    // 0x29ecc8: 0x3c1200ff  lui         $s2, 0xFF
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)255 << 16));
label_29eccc:
    // 0x29eccc: 0x3c16ff00  lui         $s6, 0xFF00
    ctx->pc = 0x29ecccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65280 << 16));
label_29ecd0:
    // 0x29ecd0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x29ecd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_29ecd4:
    // 0x29ecd4: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29ecd8:
    // 0x29ecd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29ecd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ecdc:
    // 0x29ecdc: 0xc0a7878  jal         func_29E1E0
label_29ece0:
    if (ctx->pc == 0x29ECE0u) {
        ctx->pc = 0x29ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECDCu;
        // 0x29ece0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECE4u;
        goto label_29ece4;
    }
    ctx->pc = 0x29ECDCu;
    SET_GPR_U32(ctx, 31, 0x29ECE4u);
    ctx->pc = 0x29ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ECDCu;
    // 0x29ece0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29ECDCu, 0x29ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECE4u;
label_29ece4:
    // 0x29ece4: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_29ece8:
    if (ctx->pc == 0x29ECE8u) {
        ctx->pc = 0x29ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECE4u;
        // 0x29ece8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECECu;
        goto label_29ecec;
    }
    ctx->pc = 0x29ECE4u;
    {
        const bool branch_taken_0x29ece4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ece4) {
            ctx->pc = 0x29ECE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ECE4u;
            // 0x29ece8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ED0Cu;
            goto label_29ed0c;
        }
    }
    ctx->pc = 0x29ECECu;
label_29ecec:
    // 0x29ecec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ecf0:
    // 0x29ecf0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x29ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_29ecf4:
    // 0x29ecf4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_29ecf8:
    // 0x29ecf8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x29ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_29ecfc:
    // 0x29ecfc: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x29ecfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_29ed00:
    // 0x29ed00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29ed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29ed04:
    // 0x29ed04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29ed08:
    // 0x29ed08: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29ed0c:
    // 0x29ed0c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ed0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ed10:
    // 0x29ed10: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_29ed14:
    if (ctx->pc == 0x29ED14u) {
        ctx->pc = 0x29ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED10u;
        // 0x29ed14: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED18u;
        goto label_29ed18;
    }
    ctx->pc = 0x29ED10u;
    {
        const bool branch_taken_0x29ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED10u;
        // 0x29ed14: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed10) {
            ctx->pc = 0x29ECD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ecd8;
        }
    }
    ctx->pc = 0x29ED18u;
label_29ed18:
    // 0x29ed18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ed18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ed1c:
    // 0x29ed1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ed1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ed20:
    // 0x29ed20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ed20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29ed24:
    // 0x29ed24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ed24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ed28:
    // 0x29ed28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ed28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ed2c:
    // 0x29ed2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ed2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ed30:
    // 0x29ed30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29ed30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ed34:
    // 0x29ed34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29ed34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ed38:
    // 0x29ed38: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29ed3c:
    // 0x29ed3c: 0x3e00008  jr          $ra
label_29ed40:
    if (ctx->pc == 0x29ED40u) {
        ctx->pc = 0x29ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED3Cu;
        // 0x29ed40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED44u;
        goto label_29ed44;
    }
    ctx->pc = 0x29ED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED3Cu;
        // 0x29ed40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ED44u;
label_29ed44:
    // 0x29ed44: 0x0  nop
    ctx->pc = 0x29ed44u;
    // NOP
label_29ed48:
    // 0x29ed48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ed4c:
    // 0x29ed4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ed50:
    // 0x29ed50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ed50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ed54:
    // 0x29ed54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ed58:
    // 0x29ed58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ed58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ed5c:
    // 0x29ed5c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ed5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ed60:
    // 0x29ed60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29ed64:
    // 0x29ed64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29ed68:
    // 0x29ed68: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29ed68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ed6c:
    // 0x29ed6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29ed70:
    // 0x29ed70: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29ed70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ed74:
    // 0x29ed74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29ed78:
    // 0x29ed78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x29ed78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ed7c:
    // 0x29ed7c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ed7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29ed80:
    // 0x29ed80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_29ed84:
    if (ctx->pc == 0x29ED84u) {
        ctx->pc = 0x29ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED80u;
        // 0x29ed84: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED88u;
        goto label_29ed88;
    }
    ctx->pc = 0x29ED80u;
    {
        const bool branch_taken_0x29ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED80u;
        // 0x29ed84: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed80) {
            ctx->pc = 0x29EDF0u;
            goto label_29edf0;
        }
    }
    ctx->pc = 0x29ED88u;
label_29ed88:
    // 0x29ed88: 0x3c1600ff  lui         $s6, 0xFF
    ctx->pc = 0x29ed88u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)255 << 16));
label_29ed8c:
    // 0x29ed8c: 0x3c15ff00  lui         $s5, 0xFF00
    ctx->pc = 0x29ed8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65280 << 16));
label_29ed90:
    // 0x29ed90: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x29ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_29ed94:
    // 0x29ed94: 0x0  nop
    ctx->pc = 0x29ed94u;
    // NOP
label_29ed98:
    // 0x29ed98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29ed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29ed9c:
    // 0x29ed9c: 0xc0a7878  jal         func_29E1E0
label_29eda0:
    if (ctx->pc == 0x29EDA0u) {
        ctx->pc = 0x29EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED9Cu;
        // 0x29eda0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDA4u;
        goto label_29eda4;
    }
    ctx->pc = 0x29ED9Cu;
    SET_GPR_U32(ctx, 31, 0x29EDA4u);
    ctx->pc = 0x29EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED9Cu;
    // 0x29eda0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29ED9Cu, 0x29EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDA4u;
label_29eda4:
    // 0x29eda4: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_29eda8:
    if (ctx->pc == 0x29EDA8u) {
        ctx->pc = 0x29EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDA4u;
        // 0x29eda8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDACu;
        goto label_29edac;
    }
    ctx->pc = 0x29EDA4u;
    {
        const bool branch_taken_0x29eda4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29eda4) {
            ctx->pc = 0x29EDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EDA4u;
            // 0x29eda8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EDE4u;
            goto label_29ede4;
        }
    }
    ctx->pc = 0x29EDACu;
label_29edac:
    // 0x29edac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29edb0:
    // 0x29edb0: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x29edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_29edb4:
    // 0x29edb4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x29edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_29edb8:
    // 0x29edb8: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x29edb8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_29edbc:
    // 0x29edbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_29edc0:
    // 0x29edc0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x29edc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_29edc4:
    // 0x29edc4: 0x962024  and         $a0, $a0, $s6
    ctx->pc = 0x29edc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
label_29edc8:
    // 0x29edc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29edcc:
    // 0x29edcc: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x29edccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
label_29edd0:
    // 0x29edd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29edd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_29edd4:
    // 0x29edd4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29edd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_29edd8:
    // 0x29edd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29edd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29eddc:
    // 0x29eddc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_29ede0:
    // 0x29ede0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29ede0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29ede4:
    // 0x29ede4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ede4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ede8:
    // 0x29ede8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_29edec:
    if (ctx->pc == 0x29EDECu) {
        ctx->pc = 0x29EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDE8u;
        // 0x29edec: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDF0u;
        goto label_29edf0;
    }
    ctx->pc = 0x29EDE8u;
    {
        const bool branch_taken_0x29ede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDE8u;
        // 0x29edec: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ede8) {
            ctx->pc = 0x29ED98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ed98;
        }
    }
    ctx->pc = 0x29EDF0u;
label_29edf0:
    // 0x29edf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29edf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29edf4:
    // 0x29edf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29edf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29edf8:
    // 0x29edf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29edf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29edfc:
    // 0x29edfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29edfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ee00:
    // 0x29ee00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ee00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ee04:
    // 0x29ee04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ee04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ee08:
    // 0x29ee08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29ee08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ee0c:
    // 0x29ee0c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29ee0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ee10:
    // 0x29ee10: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29ee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29ee14:
    // 0x29ee14: 0x3e00008  jr          $ra
label_29ee18:
    if (ctx->pc == 0x29EE18u) {
        ctx->pc = 0x29EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE14u;
        // 0x29ee18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE1Cu;
        goto label_29ee1c;
    }
    ctx->pc = 0x29EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE14u;
        // 0x29ee18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE1Cu;
label_29ee1c:
    // 0x29ee1c: 0x0  nop
    ctx->pc = 0x29ee1cu;
    // NOP
label_29ee20:
    // 0x29ee20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29ee24:
    // 0x29ee24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ee28:
    // 0x29ee28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ee28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ee2c:
    // 0x29ee2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ee2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ee30:
    // 0x29ee30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ee30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ee34:
    // 0x29ee34: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ee34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ee38:
    // 0x29ee38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29ee3c:
    // 0x29ee3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29ee40:
    // 0x29ee40: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x29ee40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ee44:
    // 0x29ee44: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29ee48:
    // 0x29ee48: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x29ee48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ee4c:
    // 0x29ee4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29ee50:
    // 0x29ee50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29ee50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ee54:
    // 0x29ee54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29ee58:
    // 0x29ee58: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29ee5c:
    // 0x29ee5c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_29ee60:
    if (ctx->pc == 0x29EE60u) {
        ctx->pc = 0x29EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE5Cu;
        // 0x29ee60: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE64u;
        goto label_29ee64;
    }
    ctx->pc = 0x29EE5Cu;
    {
        const bool branch_taken_0x29ee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE5Cu;
        // 0x29ee60: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee5c) {
            ctx->pc = 0x29EEC4u;
            goto label_29eec4;
        }
    }
    ctx->pc = 0x29EE64u;
label_29ee64:
    // 0x29ee64: 0x3c1309f8  lui         $s3, 0x9F8
    ctx->pc = 0x29ee64u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2552 << 16));
label_29ee68:
    // 0x29ee68: 0x3c120007  lui         $s2, 0x7
    ctx->pc = 0x29ee68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7 << 16));
label_29ee6c:
    // 0x29ee6c: 0x3673ed17  ori         $s3, $s3, 0xED17
    ctx->pc = 0x29ee6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)60695);
label_29ee70:
    // 0x29ee70: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x29ee70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_29ee74:
    // 0x29ee74: 0x3c17fff8  lui         $s7, 0xFFF8
    ctx->pc = 0x29ee74u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65528 << 16));
label_29ee78:
    // 0x29ee78: 0x2162023  subu        $a0, $s0, $s6
    ctx->pc = 0x29ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_29ee7c:
    // 0x29ee7c: 0x0  nop
    ctx->pc = 0x29ee7cu;
    // NOP
label_29ee80:
    // 0x29ee80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29ee80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29ee84:
    // 0x29ee84: 0xc0a7878  jal         func_29E1E0
label_29ee88:
    if (ctx->pc == 0x29EE88u) {
        ctx->pc = 0x29EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE84u;
        // 0x29ee88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE8Cu;
        goto label_29ee8c;
    }
    ctx->pc = 0x29EE84u;
    SET_GPR_U32(ctx, 31, 0x29EE8Cu);
    ctx->pc = 0x29EE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE84u;
    // 0x29ee88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29EE84u, 0x29EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE8Cu;
label_29ee8c:
    // 0x29ee8c: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
label_29ee90:
    if (ctx->pc == 0x29EE90u) {
        ctx->pc = 0x29EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE8Cu;
        // 0x29ee90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE94u;
        goto label_29ee94;
    }
    ctx->pc = 0x29EE8Cu;
    {
        const bool branch_taken_0x29ee8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ee8c) {
            ctx->pc = 0x29EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EE8Cu;
            // 0x29ee90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EEB8u;
            goto label_29eeb8;
        }
    }
    ctx->pc = 0x29EE94u;
label_29ee94:
    // 0x29ee94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ee98:
    // 0x29ee98: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x29ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_29ee9c:
    // 0x29ee9c: 0x21cc0  sll         $v1, $v0, 19
    ctx->pc = 0x29ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_29eea0:
    // 0x29eea0: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x29eea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_29eea4:
    // 0x29eea4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x29eea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_29eea8:
    // 0x29eea8: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x29eea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
label_29eeac:
    // 0x29eeac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29eeb0:
    // 0x29eeb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29eeb4:
    // 0x29eeb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29eeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29eeb8:
    // 0x29eeb8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29eeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eebc:
    // 0x29eebc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_29eec0:
    if (ctx->pc == 0x29EEC0u) {
        ctx->pc = 0x29EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEBCu;
        // 0x29eec0: 0x2162023  subu        $a0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEC4u;
        goto label_29eec4;
    }
    ctx->pc = 0x29EEBCu;
    {
        const bool branch_taken_0x29eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEBCu;
        // 0x29eec0: 0x2162023  subu        $a0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eebc) {
            ctx->pc = 0x29EE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ee80;
        }
    }
    ctx->pc = 0x29EEC4u;
label_29eec4:
    // 0x29eec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29eec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eec8:
    // 0x29eec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29eec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eecc:
    // 0x29eecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29eeccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29eed0:
    // 0x29eed0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29eed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29eed4:
    // 0x29eed4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29eed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29eed8:
    // 0x29eed8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29eed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29eedc:
    // 0x29eedc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29eedcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29eee0:
    // 0x29eee0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29eee0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29eee4:
    // 0x29eee4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29eee4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29eee8:
    // 0x29eee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29eee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29eeec:
    // 0x29eeec: 0x3e00008  jr          $ra
label_29eef0:
    if (ctx->pc == 0x29EEF0u) {
        ctx->pc = 0x29EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEECu;
        // 0x29eef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEF4u;
        goto label_29eef4;
    }
    ctx->pc = 0x29EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEECu;
        // 0x29eef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EEF4u;
label_29eef4:
    // 0x29eef4: 0x0  nop
    ctx->pc = 0x29eef4u;
    // NOP
label_29eef8:
    // 0x29eef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29eefc:
    // 0x29eefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ef00:
    // 0x29ef00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ef00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ef04:
    // 0x29ef04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ef08:
    // 0x29ef08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ef08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ef0c:
    // 0x29ef0c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29ef0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ef10:
    // 0x29ef10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29ef14:
    // 0x29ef14: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29ef18:
    // 0x29ef18: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x29ef18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ef1c:
    // 0x29ef1c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29ef20:
    // 0x29ef20: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29ef20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ef24:
    // 0x29ef24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29ef28:
    // 0x29ef28: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29ef28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ef2c:
    // 0x29ef2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29ef30:
    // 0x29ef30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29ef34:
    // 0x29ef34: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_29ef38:
    // 0x29ef38: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_29ef3c:
    if (ctx->pc == 0x29EF3Cu) {
        ctx->pc = 0x29EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF38u;
        // 0x29ef3c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF40u;
        goto label_29ef40;
    }
    ctx->pc = 0x29EF38u;
    {
        const bool branch_taken_0x29ef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF38u;
        // 0x29ef3c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef38) {
            ctx->pc = 0x29EFD0u;
            goto label_29efd0;
        }
    }
    ctx->pc = 0x29EF40u;
label_29ef40:
    // 0x29ef40: 0x3c14a951  lui         $s4, 0xA951
    ctx->pc = 0x29ef40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)43345 << 16));
label_29ef44:
    // 0x29ef44: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_29ef48:
    // 0x29ef48: 0x3c1e00ff  lui         $fp, 0xFF
    ctx->pc = 0x29ef48u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)255 << 16));
label_29ef4c:
    // 0x29ef4c: 0x3c12ff00  lui         $s2, 0xFF00
    ctx->pc = 0x29ef4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65280 << 16));
label_29ef50:
    // 0x29ef50: 0x369428c3  ori         $s4, $s4, 0x28C3
    ctx->pc = 0x29ef50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)10435);
label_29ef54:
    // 0x29ef54: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x29ef54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_29ef58:
    // 0x29ef58: 0x2172023  subu        $a0, $s0, $s7
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_29ef5c:
    // 0x29ef5c: 0x0  nop
    ctx->pc = 0x29ef5cu;
    // NOP
label_29ef60:
    // 0x29ef60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29ef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ef64:
    // 0x29ef64: 0xc0a7878  jal         func_29E1E0
label_29ef68:
    if (ctx->pc == 0x29EF68u) {
        ctx->pc = 0x29EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF64u;
        // 0x29ef68: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF6Cu;
        goto label_29ef6c;
    }
    ctx->pc = 0x29EF64u;
    SET_GPR_U32(ctx, 31, 0x29EF6Cu);
    ctx->pc = 0x29EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF64u;
    // 0x29ef68: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29EF64u, 0x29EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF6Cu;
label_29ef6c:
    // 0x29ef6c: 0x58400015  blezl       $v0, . + 4 + (0x15 << 2)
label_29ef70:
    if (ctx->pc == 0x29EF70u) {
        ctx->pc = 0x29EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF6Cu;
        // 0x29ef70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF74u;
        goto label_29ef74;
    }
    ctx->pc = 0x29EF6Cu;
    {
        const bool branch_taken_0x29ef6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ef6c) {
            ctx->pc = 0x29EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EF6Cu;
            // 0x29ef70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EFC4u;
            goto label_29efc4;
        }
    }
    ctx->pc = 0x29EF74u;
label_29ef74:
    // 0x29ef74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ef78:
    // 0x29ef78: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x29ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_29ef7c:
    // 0x29ef7c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_29ef80:
    // 0x29ef80: 0x32203  sra         $a0, $v1, 8
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
label_29ef84:
    // 0x29ef84: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x29ef84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_29ef88:
    // 0x29ef88: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x29ef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_29ef8c:
    // 0x29ef8c: 0x9e2024  and         $a0, $a0, $fp
    ctx->pc = 0x29ef8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
label_29ef90:
    // 0x29ef90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29ef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29ef94:
    // 0x29ef94: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x29ef94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_29ef98:
    // 0x29ef98: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x29ef98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_29ef9c:
    // 0x29ef9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x29ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_29efa0:
    // 0x29efa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29efa4:
    // 0x29efa4: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x29efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_29efa8:
    // 0x29efa8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x29efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_29efac:
    // 0x29efac: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x29efacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_29efb0:
    // 0x29efb0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_29efb4:
    // 0x29efb4: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x29efb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_29efb8:
    // 0x29efb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29efbc:
    // 0x29efbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29efc0:
    // 0x29efc0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29efc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29efc4:
    // 0x29efc4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29efc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29efc8:
    // 0x29efc8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_29efcc:
    if (ctx->pc == 0x29EFCCu) {
        ctx->pc = 0x29EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFC8u;
        // 0x29efcc: 0x2172023  subu        $a0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EFD0u;
        goto label_29efd0;
    }
    ctx->pc = 0x29EFC8u;
    {
        const bool branch_taken_0x29efc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFC8u;
        // 0x29efcc: 0x2172023  subu        $a0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efc8) {
            ctx->pc = 0x29EF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ef60;
        }
    }
    ctx->pc = 0x29EFD0u;
label_29efd0:
    // 0x29efd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29efd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29efd4:
    // 0x29efd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29efd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29efd8:
    // 0x29efd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29efd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29efdc:
    // 0x29efdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29efdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29efe0:
    // 0x29efe0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29efe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29efe4:
    // 0x29efe4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29efe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29efe8:
    // 0x29efe8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29efe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29efec:
    // 0x29efec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29efecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29eff0:
    // 0x29eff0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29eff0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29eff4:
    // 0x29eff4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29eff4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29eff8:
    // 0x29eff8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29effc:
    // 0x29effc: 0x3e00008  jr          $ra
label_29f000:
    if (ctx->pc == 0x29F000u) {
        ctx->pc = 0x29F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFFCu;
        // 0x29f000: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F004u;
        goto label_29f004;
    }
    ctx->pc = 0x29EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFFCu;
        // 0x29f000: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F004u;
label_29f004:
    // 0x29f004: 0x0  nop
    ctx->pc = 0x29f004u;
    // NOP
label_29f008:
    // 0x29f008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29f00c:
    // 0x29f00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29f010:
    // 0x29f010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f014:
    // 0x29f014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29f018:
    // 0x29f018: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29f018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f01c:
    // 0x29f01c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29f01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f020:
    // 0x29f020: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29f024:
    // 0x29f024: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29f028:
    // 0x29f028: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x29f028u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29f02c:
    // 0x29f02c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_29f030:
    // 0x29f030: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x29f030u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29f034:
    // 0x29f034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29f038:
    // 0x29f038: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x29f038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29f03c:
    // 0x29f03c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29f040:
    // 0x29f040: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29f044:
    // 0x29f044: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29f048:
    // 0x29f048: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_29f04c:
    if (ctx->pc == 0x29F04Cu) {
        ctx->pc = 0x29F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F048u;
        // 0x29f04c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F050u;
        goto label_29f050;
    }
    ctx->pc = 0x29F048u;
    {
        const bool branch_taken_0x29f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F048u;
        // 0x29f04c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f048) {
            ctx->pc = 0x29F0FCu;
            goto label_29f0fc;
        }
    }
    ctx->pc = 0x29F050u;
label_29f050:
    // 0x29f050: 0x3c1509f8  lui         $s5, 0x9F8
    ctx->pc = 0x29f050u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)2552 << 16));
label_29f054:
    // 0x29f054: 0x3c1400ff  lui         $s4, 0xFF
    ctx->pc = 0x29f054u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)255 << 16));
label_29f058:
    // 0x29f058: 0x3c130007  lui         $s3, 0x7
    ctx->pc = 0x29f058u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)7 << 16));
label_29f05c:
    // 0x29f05c: 0x36b5ed17  ori         $s5, $s5, 0xED17
    ctx->pc = 0x29f05cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)60695);
label_29f060:
    // 0x29f060: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x29f060u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_29f064:
    // 0x29f064: 0x3c12ff00  lui         $s2, 0xFF00
    ctx->pc = 0x29f064u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65280 << 16));
label_29f068:
    // 0x29f068: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x29f068u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_29f06c:
    // 0x29f06c: 0x21e2023  subu        $a0, $s0, $fp
    ctx->pc = 0x29f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_29f070:
    // 0x29f070: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29f070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29f074:
    // 0x29f074: 0xc0a7878  jal         func_29E1E0
label_29f078:
    if (ctx->pc == 0x29F078u) {
        ctx->pc = 0x29F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F074u;
        // 0x29f078: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F07Cu;
        goto label_29f07c;
    }
    ctx->pc = 0x29F074u;
    SET_GPR_U32(ctx, 31, 0x29F07Cu);
    ctx->pc = 0x29F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F074u;
    // 0x29f078: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29F074u, 0x29F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F07Cu;
label_29f07c:
    // 0x29f07c: 0x5840001c  blezl       $v0, . + 4 + (0x1C << 2)
label_29f080:
    if (ctx->pc == 0x29F080u) {
        ctx->pc = 0x29F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F07Cu;
        // 0x29f080: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F084u;
        goto label_29f084;
    }
    ctx->pc = 0x29F07Cu;
    {
        const bool branch_taken_0x29f07c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29f07c) {
            ctx->pc = 0x29F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F07Cu;
            // 0x29f080: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F0F0u;
            goto label_29f0f0;
        }
    }
    ctx->pc = 0x29F084u;
label_29f084:
    // 0x29f084: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f088:
    // 0x29f088: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x29f088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
label_29f08c:
    // 0x29f08c: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x29f08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_29f090:
    // 0x29f090: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x29f090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_29f094:
    // 0x29f094: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x29f094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_29f098:
    // 0x29f098: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x29f098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_29f09c:
    // 0x29f09c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x29f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_29f0a0:
    // 0x29f0a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29f0a4:
    // 0x29f0a4: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x29f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_29f0a8:
    // 0x29f0a8: 0x224c0  sll         $a0, $v0, 19
    ctx->pc = 0x29f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_29f0ac:
    // 0x29f0ac: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x29f0acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_29f0b0:
    // 0x29f0b0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x29f0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29f0b4:
    // 0x29f0b4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_29f0b8:
    // 0x29f0b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x29f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_29f0bc:
    // 0x29f0bc: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x29f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_29f0c0:
    // 0x29f0c0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x29f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_29f0c4:
    // 0x29f0c4: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x29f0c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_29f0c8:
    // 0x29f0c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x29f0c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_29f0cc:
    // 0x29f0cc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x29f0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_29f0d0:
    // 0x29f0d0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x29f0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_29f0d4:
    // 0x29f0d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29f0d8:
    // 0x29f0d8: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x29f0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_29f0dc:
    // 0x29f0dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29f0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_29f0e0:
    // 0x29f0e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_29f0e4:
    // 0x29f0e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29f0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29f0e8:
    // 0x29f0e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_29f0ec:
    // 0x29f0ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29f0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29f0f0:
    // 0x29f0f0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29f0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f0f4:
    // 0x29f0f4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_29f0f8:
    if (ctx->pc == 0x29F0F8u) {
        ctx->pc = 0x29F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0F4u;
        // 0x29f0f8: 0x21e2023  subu        $a0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F0FCu;
        goto label_29f0fc;
    }
    ctx->pc = 0x29F0F4u;
    {
        const bool branch_taken_0x29f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0F4u;
        // 0x29f0f8: 0x21e2023  subu        $a0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0f4) {
            ctx->pc = 0x29F070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f070;
        }
    }
    ctx->pc = 0x29F0FCu;
label_29f0fc:
    // 0x29f0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f100:
    // 0x29f100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f104:
    // 0x29f104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29f104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29f108:
    // 0x29f108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29f108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f10c:
    // 0x29f10c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29f10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29f110:
    // 0x29f110: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29f110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29f114:
    // 0x29f114: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29f114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29f118:
    // 0x29f118: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29f118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29f11c:
    // 0x29f11c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29f11cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29f120:
    // 0x29f120: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29f120u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29f124:
    // 0x29f124: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29f128:
    // 0x29f128: 0x3e00008  jr          $ra
label_29f12c:
    if (ctx->pc == 0x29F12Cu) {
        ctx->pc = 0x29F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F128u;
        // 0x29f12c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F130u;
        goto label_29f130;
    }
    ctx->pc = 0x29F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F128u;
        // 0x29f12c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F130u;
label_29f130:
    // 0x29f130: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x29f130u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f134:
    // 0x29f134: 0x970e64c8  lhu         $t6, 0x64C8($t8)
    ctx->pc = 0x29f134u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 25800)));
label_29f138:
    // 0x29f138: 0x0  nop
    ctx->pc = 0x29f138u;
    // NOP
label_29f13c:
    // 0x29f13c: 0x971e2498  lhu         $fp, 0x2498($t8)
    ctx->pc = 0x29f13cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9368)));
label_29f140:
    // 0x29f140: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29f140u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f144:
    // 0x29f144: 0x971e2518  lhu         $fp, 0x2518($t8)
    ctx->pc = 0x29f144u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9496)));
label_29f148:
    // 0x29f148: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x29f148u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f14c:
    // 0x29f14c: 0x971e25f0  lhu         $fp, 0x25F0($t8)
    ctx->pc = 0x29f14cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9712)));
label_29f150:
    // 0x29f150: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x29f150u;
    
label_29f154:
    // 0x29f154: 0x971e2638  lhu         $fp, 0x2638($t8)
    ctx->pc = 0x29f154u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9784)));
label_29f158:
    // 0x29f158: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f158u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f15c:
    // 0x29f15c: 0x971e2684  lhu         $fp, 0x2684($t8)
    ctx->pc = 0x29f15cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9860)));
label_29f160:
    // 0x29f160: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f160u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f164:
    // 0x29f164: 0x971e26ce  lhu         $fp, 0x26CE($t8)
    ctx->pc = 0x29f164u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9934)));
label_29f168:
    // 0x29f168: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x29f168u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f16c:
    // 0x29f16c: 0x971e2718  lhu         $fp, 0x2718($t8)
    ctx->pc = 0x29f16cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10008)));
label_29f170:
    // 0x29f170: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x29f170u;
    
label_29f174:
    // 0x29f174: 0x971e2764  lhu         $fp, 0x2764($t8)
    ctx->pc = 0x29f174u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10084)));
label_29f178:
    // 0x29f178: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f178u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f17c:
    // 0x29f17c: 0x971e27b0  lhu         $fp, 0x27B0($t8)
    ctx->pc = 0x29f17cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10160)));
label_29f180:
    // 0x29f180: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f180u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f184:
    // 0x29f184: 0x971e2800  lhu         $fp, 0x2800($t8)
    ctx->pc = 0x29f184u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10240)));
label_29f188:
    // 0x29f188: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x29f188u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f18c:
    // 0x29f18c: 0x971e2850  lhu         $fp, 0x2850($t8)
    ctx->pc = 0x29f18cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10320)));
label_29f190:
    // 0x29f190: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x29f190u;
    
label_29f194:
    // 0x29f194: 0x971e2914  lhu         $fp, 0x2914($t8)
    ctx->pc = 0x29f194u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10516)));
label_29f198:
    // 0x29f198: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f198u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f19c:
    // 0x29f19c: 0x971e299e  lhu         $fp, 0x299E($t8)
    ctx->pc = 0x29f19cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10654)));
label_29f1a0:
    // 0x29f1a0: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f1a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f1a4:
    // 0x29f1a4: 0x971e2a24  lhu         $fp, 0x2A24($t8)
    ctx->pc = 0x29f1a4u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10788)));
label_29f1a8:
    // 0x29f1a8: 0xf4  teq         $zero, $zero, 3
    ctx->pc = 0x29f1a8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f1ac:
    // 0x29f1ac: 0x971e2a6e  lhu         $fp, 0x2A6E($t8)
    ctx->pc = 0x29f1acu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10862)));
label_29f1b0:
    // 0x29f1b0: 0x104  .word       0x00000104                   # sllv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f1b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f1b4:
    // 0x29f1b4: 0x971e2abc  lhu         $fp, 0x2ABC($t8)
    ctx->pc = 0x29f1b4u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10940)));
label_29f1b8:
    // 0x29f1b8: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f1b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f1bc:
    // 0x29f1bc: 0x971e2b4a  lhu         $fp, 0x2B4A($t8)
    ctx->pc = 0x29f1bcu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 11082)));
label_29f1c0:
    // 0x29f1c0: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f1c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f1c4:
    // 0x29f1c4: 0x9806e032  lwr         $a2, -0x1FCE($zero)
    ctx->pc = 0x29f1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959154); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_29f1c8:
    // 0x29f1c8: 0x130  tge         $zero, $zero, 4
    ctx->pc = 0x29f1c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f1cc:
    // 0x29f1cc: 0x9806e0b0  lwr         $a2, -0x1F50($zero)
    ctx->pc = 0x29f1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959280); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_29f1d0:
    // 0x29f1d0: 0x22c  .word       0x0000022C                   # dadd        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f1d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f1d4:
    // 0x29f1d4: 0x9806e102  lwr         $a2, -0x1EFE($zero)
    ctx->pc = 0x29f1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959362); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_29f1d8:
    // 0x29f1d8: 0x244  .word       0x00000244                   # sllv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f1d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f1dc:
    // 0x29f1dc: 0x98081660  lwr         $t0, 0x1660($zero)
    ctx->pc = 0x29f1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5728); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f1e0:
    // 0x29f1e0: 0x2b0  tge         $zero, $zero, 10
    ctx->pc = 0x29f1e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f1e4:
    // 0x29f1e4: 0x980816d4  lwr         $t0, 0x16D4($zero)
    ctx->pc = 0x29f1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5844); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f1e8:
    // 0x29f1e8: 0x2cc  syscall     11
    ctx->pc = 0x29f1e8u;
    runtime->handleSyscall(rdram, ctx, 0xBu);
label_29f1ec:
    // 0x29f1ec: 0x98081728  lwr         $t0, 0x1728($zero)
    ctx->pc = 0x29f1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5928); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f1f0:
    // 0x29f1f0: 0x2e8  .word       0x000002E8                   # mfsa        $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f1f0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f1f4:
    // 0x29f1f4: 0x98081776  lwr         $t0, 0x1776($zero)
    ctx->pc = 0x29f1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6006); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f1f8:
    // 0x29f1f8: 0x300  sll         $zero, $zero, 12
    ctx->pc = 0x29f1f8u;
    
label_29f1fc:
    // 0x29f1fc: 0x980817ce  lwr         $t0, 0x17CE($zero)
    ctx->pc = 0x29f1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6094); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f200:
    // 0x29f200: 0x318  .word       0x00000318                   # mult        $zero, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f204:
    // 0x29f204: 0x98081820  lwr         $t0, 0x1820($zero)
    ctx->pc = 0x29f204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6176); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f208:
    // 0x29f208: 0x338  dsll        $zero, $zero, 12
    ctx->pc = 0x29f208u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_29f20c:
    // 0x29f20c: 0x98081870  lwr         $t0, 0x1870($zero)
    ctx->pc = 0x29f20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f210:
    // 0x29f210: 0x34c  syscall     13
    ctx->pc = 0x29f210u;
    runtime->handleSyscall(rdram, ctx, 0xDu);
label_29f214:
    // 0x29f214: 0x980818f4  lwr         $t0, 0x18F4($zero)
    ctx->pc = 0x29f214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6388); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_29f218:
    // 0x29f218: 0x358  .word       0x00000358                   # mult        $zero, $zero, $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f21c:
    // 0x29f21c: 0x980b2a98  lwr         $t3, 0x2A98($zero)
    ctx->pc = 0x29f21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10904); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_29f220:
    // 0x29f220: 0x36c  .word       0x0000036C                   # dadd        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f220u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f224:
    // 0x29f224: 0x980b359e  lwr         $t3, 0x359E($zero)
    ctx->pc = 0x29f224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13726); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_29f228:
    // 0x29f228: 0x3b0  tge         $zero, $zero, 14
    ctx->pc = 0x29f228u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f22c:
    // 0x29f22c: 0x980b35fa  lwr         $t3, 0x35FA($zero)
    ctx->pc = 0x29f22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13818); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_29f230:
    // 0x29f230: 0x3e0  .word       0x000003E0                   # add         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f230u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f234:
    // 0x29f234: 0x980b3650  lwr         $t3, 0x3650($zero)
    ctx->pc = 0x29f234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13904); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_29f238:
    // 0x29f238: 0x3f4  teq         $zero, $zero, 15
    ctx->pc = 0x29f238u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f23c:
    // 0x29f23c: 0x980b36a6  lwr         $t3, 0x36A6($zero)
    ctx->pc = 0x29f23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13990); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_29f240:
    // 0x29f240: 0x408  .word       0x00000408                   # jr          $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_29f244:
    if (ctx->pc == 0x29F244u) {
        ctx->pc = 0x29F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F240u;
        // 0x29f244: 0x980d2578  lwr         $t5, 0x2578($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9592); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F248u;
        goto label_29f248;
    }
    ctx->pc = 0x29F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F240u;
        // 0x29f244: 0x980d2578  lwr         $t5, 0x2578($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9592); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F248u;
label_29f248:
    // 0x29f248: 0x484  .word       0x00000484                   # sllv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f248u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f24c:
    // 0x29f24c: 0x980d25f4  lwr         $t5, 0x25F4($zero)
    ctx->pc = 0x29f24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9716); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f250:
    // 0x29f250: 0x498  .word       0x00000498                   # mult        $zero, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f254:
    // 0x29f254: 0x980d264c  lwr         $t5, 0x264C($zero)
    ctx->pc = 0x29f254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9804); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f258:
    // 0x29f258: 0x4bc  dsll32      $zero, $zero, 18
    ctx->pc = 0x29f258u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 18));
label_29f25c:
    // 0x29f25c: 0x980d26a4  lwr         $t5, 0x26A4($zero)
    ctx->pc = 0x29f25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9892); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f260:
    // 0x29f260: 0x4d0  .word       0x000004D0                   # mfhi        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f264:
    // 0x29f264: 0x980d26fe  lwr         $t5, 0x26FE($zero)
    ctx->pc = 0x29f264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9982); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f268:
    // 0x29f268: 0x4e4  .word       0x000004E4                   # and         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f268u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f26c:
    // 0x29f26c: 0x980d2758  lwr         $t5, 0x2758($zero)
    ctx->pc = 0x29f26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10072); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f270:
    // 0x29f270: 0x4f8  dsll        $zero, $zero, 19
    ctx->pc = 0x29f270u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 19);
label_29f274:
    // 0x29f274: 0x980d27b0  lwr         $t5, 0x27B0($zero)
    ctx->pc = 0x29f274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f278:
    // 0x29f278: 0x50c  syscall     20
    ctx->pc = 0x29f278u;
    runtime->handleSyscall(rdram, ctx, 0x14u);
label_29f27c:
    // 0x29f27c: 0x980d280a  lwr         $t5, 0x280A($zero)
    ctx->pc = 0x29f27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10250); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f280:
    // 0x29f280: 0x568  .word       0x00000568                   # mfsa        $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f280u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f284:
    // 0x29f284: 0x980d2862  lwr         $t5, 0x2862($zero)
    ctx->pc = 0x29f284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10338); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f288:
    // 0x29f288: 0x57c  dsll32      $zero, $zero, 21
    ctx->pc = 0x29f288u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 21));
label_29f28c:
    // 0x29f28c: 0x980d28bc  lwr         $t5, 0x28BC($zero)
    ctx->pc = 0x29f28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10428); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f290:
    // 0x29f290: 0x590  .word       0x00000590                   # mfhi        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f290u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f294:
    // 0x29f294: 0x980d2916  lwr         $t5, 0x2916($zero)
    ctx->pc = 0x29f294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10518); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f298:
    // 0x29f298: 0x5a4  .word       0x000005A4                   # and         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f298u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f29c:
    // 0x29f29c: 0x980d2970  lwr         $t5, 0x2970($zero)
    ctx->pc = 0x29f29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10608); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f2a0:
    // 0x29f2a0: 0x5b8  dsll        $zero, $zero, 22
    ctx->pc = 0x29f2a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 22);
label_29f2a4:
    // 0x29f2a4: 0x980d29ca  lwr         $t5, 0x29CA($zero)
    ctx->pc = 0x29f2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10698); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f2a8:
    // 0x29f2a8: 0x5cc  syscall     23
    ctx->pc = 0x29f2a8u;
    runtime->handleSyscall(rdram, ctx, 0x17u);
label_29f2ac:
    // 0x29f2ac: 0x980d2a26  lwr         $t5, 0x2A26($zero)
    ctx->pc = 0x29f2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10790); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f2b0:
    // 0x29f2b0: 0x5e0  .word       0x000005E0                   # add         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f2b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f2b4:
    // 0x29f2b4: 0x980d2a80  lwr         $t5, 0x2A80($zero)
    ctx->pc = 0x29f2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10880); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f2b8:
    // 0x29f2b8: 0x634  teq         $zero, $zero, 24
    ctx->pc = 0x29f2b8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f2bc:
    // 0x29f2bc: 0x980d2adc  lwr         $t5, 0x2ADC($zero)
    ctx->pc = 0x29f2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10972); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f2c0:
    // 0x29f2c0: 0x648  .word       0x00000648                   # jr          $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_29f2c4:
    if (ctx->pc == 0x29F2C4u) {
        ctx->pc = 0x29F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C0u;
        // 0x29f2c4: 0x980d2b38  lwr         $t5, 0x2B38($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11064); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2C8u;
        goto label_29f2c8;
    }
    ctx->pc = 0x29F2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C0u;
        // 0x29f2c4: 0x980d2b38  lwr         $t5, 0x2B38($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11064); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F2C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F2C8u;
label_29f2c8:
    // 0x29f2c8: 0x68c  syscall     26
    ctx->pc = 0x29f2c8u;
    runtime->handleSyscall(rdram, ctx, 0x1Au);
label_29f2cc:
    // 0x29f2cc: 0x980d2b96  lwr         $t5, 0x2B96($zero)
    ctx->pc = 0x29f2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11158); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_29f2d0:
    // 0x29f2d0: 0x6f4  teq         $zero, $zero, 27
    ctx->pc = 0x29f2d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f2d4:
    // 0x29f2d4: 0x4b0  tge         $zero, $zero, 18
    ctx->pc = 0x29f2d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f2d8:
    // 0x29f2d8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29f2d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f2dc:
    // 0x29f2dc: 0x4e4  .word       0x000004E4                   # and         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f2dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f2e0:
    // 0x29f2e0: 0x4e8  .word       0x000004E8                   # mfsa        $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f2e0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f2e4:
    // 0x29f2e4: 0x524  .word       0x00000524                   # and         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f2e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f2e8:
    // 0x29f2e8: 0x528  .word       0x00000528                   # mfsa        $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f2e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f2ec:
    // 0x29f2ec: 0x540  sll         $zero, $zero, 21
    ctx->pc = 0x29f2ecu;
    
label_29f2f0:
    // 0x29f2f0: 0x554  .word       0x00000554                   # dsllv       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f2f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f2f4:
    // 0x29f2f4: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x29f2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f2f8:
    // 0x29f2f8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f2f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f2fc:
    // 0x29f2fc: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x29f2fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f300:
    // 0x29f300: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29f300u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f304:
    // 0x29f304: 0x1b0  tge         $zero, $zero, 6
    ctx->pc = 0x29f304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f308:
    // 0x29f308: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f308u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f30c:
    // 0x29f30c: 0x1b0  tge         $zero, $zero, 6
    ctx->pc = 0x29f30cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f310:
    // 0x29f310: 0x1b4  teq         $zero, $zero, 6
    ctx->pc = 0x29f310u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f314:
    // 0x29f314: 0x4c8  .word       0x000004C8                   # jr          $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_29f318:
    if (ctx->pc == 0x29F318u) {
        ctx->pc = 0x29F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F314u;
        // 0x29f318: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F31Cu;
        goto label_29f31c;
    }
    ctx->pc = 0x29F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F314u;
        // 0x29f318: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F31Cu;
label_29f31c:
    // 0x29f31c: 0x4c8  .word       0x000004C8                   # jr          $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_29f320:
    if (ctx->pc == 0x29F320u) {
        ctx->pc = 0x29F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F31Cu;
        // 0x29f320: 0x4cc  syscall     19 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x13u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F324u;
        goto label_29f324;
    }
    ctx->pc = 0x29F31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F31Cu;
        // 0x29f320: 0x4cc  syscall     19 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x13u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F31Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F324u;
label_29f324:
    // 0x29f324: 0x5c8  .word       0x000005C8                   # jr          $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_29f328:
    if (ctx->pc == 0x29F328u) {
        ctx->pc = 0x29F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F324u;
        // 0x29f328: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F32Cu;
        goto label_29f32c;
    }
    ctx->pc = 0x29F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F324u;
        // 0x29f328: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F32Cu;
label_29f32c:
    // 0x29f32c: 0x5c8  .word       0x000005C8                   # jr          $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_29f330:
    if (ctx->pc == 0x29F330u) {
        ctx->pc = 0x29F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F32Cu;
        // 0x29f330: 0x5cc  syscall     23 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x17u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F334u;
        goto label_29f334;
    }
    ctx->pc = 0x29F32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F32Cu;
        // 0x29f330: 0x5cc  syscall     23 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x17u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F32Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F334u;
label_29f334:
    // 0x29f334: 0x6c8  .word       0x000006C8                   # jr          $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_29f338:
    if (ctx->pc == 0x29F338u) {
        ctx->pc = 0x29F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F334u;
        // 0x29f338: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F33Cu;
        goto label_29f33c;
    }
    ctx->pc = 0x29F334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F334u;
        // 0x29f338: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F33Cu;
label_29f33c:
    // 0x29f33c: 0x6c8  .word       0x000006C8                   # jr          $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_29f340:
    if (ctx->pc == 0x29F340u) {
        ctx->pc = 0x29F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F33Cu;
        // 0x29f340: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F344u;
        goto label_29f344;
    }
    ctx->pc = 0x29F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F33Cu;
        // 0x29f340: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F33Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F344u;
label_29f344:
    // 0x29f344: 0x7a8  .word       0x000007A8                   # mfsa        $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f344u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f348:
    // 0x29f348: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f348u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f34c:
    // 0x29f34c: 0x7a8  .word       0x000007A8                   # mfsa        $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f34cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f350:
    // 0x29f350: 0x7ac  .word       0x000007AC                   # dadd        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f350u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f354:
    // 0x29f354: 0x8a8  .word       0x000008A8                   # mfsa        $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f354u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f358:
    // 0x29f358: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f358u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f35c:
    // 0x29f35c: 0x8a8  .word       0x000008A8                   # mfsa        $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f35cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f360:
    // 0x29f360: 0x8b0  tge         $zero, $zero, 34
    ctx->pc = 0x29f360u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f364:
    // 0x29f364: 0x988  .word       0x00000988                   # jr          $zero # 00000980 <InstrIdType: CPU_SPECIAL>
label_29f368:
    if (ctx->pc == 0x29F368u) {
        ctx->pc = 0x29F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F364u;
        // 0x29f368: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F36Cu;
        goto label_29f36c;
    }
    ctx->pc = 0x29F364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F364u;
        // 0x29f368: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F364u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F36Cu;
label_29f36c:
    // 0x29f36c: 0x988  .word       0x00000988                   # jr          $zero # 00000980 <InstrIdType: CPU_SPECIAL>
label_29f370:
    if (ctx->pc == 0x29F370u) {
        ctx->pc = 0x29F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F36Cu;
        // 0x29f370: 0x990  .word       0x00000990                   # mfhi        $at # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F374u;
        goto label_29f374;
    }
    ctx->pc = 0x29F36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F36Cu;
        // 0x29f370: 0x990  .word       0x00000990                   # mfhi        $at # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F36Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F374u;
label_29f374:
    // 0x29f374: 0xa68  .word       0x00000A68                   # mfsa        $at # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f374u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f378:
    // 0x29f378: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f37c:
    // 0x29f37c: 0xa68  .word       0x00000A68                   # mfsa        $at # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f37cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f380:
    // 0x29f380: 0xa70  tge         $zero, $zero, 41
    ctx->pc = 0x29f380u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f384:
    // 0x29f384: 0xb48  .word       0x00000B48                   # jr          $zero # 00000B40 <InstrIdType: CPU_SPECIAL>
label_29f388:
    if (ctx->pc == 0x29F388u) {
        ctx->pc = 0x29F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F384u;
        // 0x29f388: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F38Cu;
        goto label_29f38c;
    }
    ctx->pc = 0x29F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F384u;
        // 0x29f388: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F384u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F38Cu;
label_29f38c:
    // 0x29f38c: 0xb48  .word       0x00000B48                   # jr          $zero # 00000B40 <InstrIdType: CPU_SPECIAL>
label_29f390:
    if (ctx->pc == 0x29F390u) {
        ctx->pc = 0x29F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F38Cu;
        // 0x29f390: 0xb4c  syscall     45 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x2Du);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F394u;
        goto label_29f394;
    }
    ctx->pc = 0x29F38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F38Cu;
        // 0x29f390: 0xb4c  syscall     45 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x2Du);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F38Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F394u;
label_29f394:
    // 0x29f394: 0xc48  .word       0x00000C48                   # jr          $zero # 00000C40 <InstrIdType: CPU_SPECIAL>
label_29f398:
    if (ctx->pc == 0x29F398u) {
        ctx->pc = 0x29F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F394u;
        // 0x29f398: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F39Cu;
        goto label_29f39c;
    }
    ctx->pc = 0x29F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F394u;
        // 0x29f398: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F394u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F39Cu;
label_29f39c:
    // 0x29f39c: 0xc48  .word       0x00000C48                   # jr          $zero # 00000C40 <InstrIdType: CPU_SPECIAL>
label_29f3a0:
    if (ctx->pc == 0x29F3A0u) {
        ctx->pc = 0x29F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F39Cu;
        // 0x29f3a0: 0xc4c  syscall     49 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x31u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F3A4u;
        goto label_29f3a4;
    }
    ctx->pc = 0x29F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F39Cu;
        // 0x29f3a0: 0xc4c  syscall     49 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x31u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F39Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F3A4u;
label_29f3a4:
    // 0x29f3a4: 0xc50  .word       0x00000C50                   # mfhi        $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3a4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29f3a8:
    // 0x29f3a8: 0xf4c  syscall     61
    ctx->pc = 0x29f3a8u;
    runtime->handleSyscall(rdram, ctx, 0x3Du);
label_29f3ac:
    // 0x29f3ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29F3AC raw=0x00000001");
label_29f3b0:
    // 0x29f3b0: 0xf74  teq         $zero, $zero, 61
    ctx->pc = 0x29f3b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f3b4:
    // 0x29f3b4: 0x11c0  sll         $v0, $zero, 7
    ctx->pc = 0x29f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_29f3b8:
    // 0x29f3b8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f3b8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f3bc:
    // 0x29f3bc: 0x11c0  sll         $v0, $zero, 7
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_29f3c0:
    // 0x29f3c0: 0x11c4  .word       0x000011C4                   # sllv        $v0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f3c4:
    // 0x29f3c4: 0x11c8  .word       0x000011C8                   # jr          $zero # 000011C0 <InstrIdType: CPU_SPECIAL>
label_29f3c8:
    if (ctx->pc == 0x29F3C8u) {
        ctx->pc = 0x29F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3C4u;
        // 0x29f3c8: 0x13b0  tge         $zero, $zero, 78 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F3CCu;
        goto label_29f3cc;
    }
    ctx->pc = 0x29F3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3C4u;
        // 0x29f3c8: 0x13b0  tge         $zero, $zero, 78 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F3C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F3CCu;
label_29f3cc:
    // 0x29f3cc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f3ccu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f3d0:
    // 0x29f3d0: 0x13b0  tge         $zero, $zero, 78
    ctx->pc = 0x29f3d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f3d4:
    // 0x29f3d4: 0x13b8  dsll        $v0, $zero, 14
    ctx->pc = 0x29f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 14);
label_29f3d8:
    // 0x29f3d8: 0x1490  .word       0x00001490                   # mfhi        $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29f3dc:
    // 0x29f3dc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f3dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f3e0:
    // 0x29f3e0: 0x1490  .word       0x00001490                   # mfhi        $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29f3e4:
    // 0x29f3e4: 0x1498  .word       0x00001498                   # mult        $v0, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29f3e8:
    // 0x29f3e8: 0x157c  dsll32      $v0, $zero, 21
    ctx->pc = 0x29f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 21));
label_29f3ec:
    // 0x29f3ec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29F3EC raw=0x00000001");
label_29f3f0:
    // 0x29f3f0: 0x15a4  .word       0x000015A4                   # and         $v0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f3f4:
    // 0x29f3f4: 0x17f8  dsll        $v0, $zero, 31
    ctx->pc = 0x29f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 31);
label_29f3f8:
    // 0x29f3f8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29f3f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29f3fc:
    // 0x29f3fc: 0x188c  syscall     98
    ctx->pc = 0x29f3fcu;
    runtime->handleSyscall(rdram, ctx, 0x62u);
label_29f400:
    // 0x29f400: 0x1890  .word       0x00001890                   # mfhi        $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29f404:
    // 0x29f404: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f404u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f408:
    // 0x29f408: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f408u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29F408 raw=0x0000003D");
label_29f40c:
    // 0x29f40c: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f40cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f410:
    // 0x29f410: 0x94  .word       0x00000094                   # dsllv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f410u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f414:
    // 0x29f414: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f414u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f418:
    // 0x29f418: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f41c:
    // 0x29f41c: 0xe8  .word       0x000000E8                   # mfsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f41cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f420:
    // 0x29f420: 0x104  .word       0x00000104                   # sllv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f420u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f424:
    // 0x29f424: 0x130  tge         $zero, $zero, 4
    ctx->pc = 0x29f424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f428:
    // 0x29f428: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f428u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f42c:
    // 0x29f42c: 0x18c  syscall     6
    ctx->pc = 0x29f42cu;
    runtime->handleSyscall(rdram, ctx, 0x6u);
label_29f430:
    // 0x29f430: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f430u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f434:
    // 0x29f434: 0x1dc  .word       0x000001DC                   # dmult       $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f434u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F434 raw=0x000001DC");
label_29f438:
    // 0x29f438: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f43c:
    // 0x29f43c: 0x22c  .word       0x0000022C                   # dadd        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f43cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f440:
    // 0x29f440: 0x230  tge         $zero, $zero, 8
    ctx->pc = 0x29f440u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f444:
    // 0x29f444: 0x27c  dsll32      $zero, $zero, 9
    ctx->pc = 0x29f444u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 9));
label_29f448:
    // 0x29f448: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x29f448u;
    
label_29f44c:
    // 0x29f44c: 0x2bc  dsll32      $zero, $zero, 10
    ctx->pc = 0x29f44cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 10));
label_29f450:
    // 0x29f450: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x29f450u;
    
label_29f454:
    // 0x29f454: 0x304  .word       0x00000304                   # sllv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f454u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f458:
    // 0x29f458: 0x308  .word       0x00000308                   # jr          $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_29f45c:
    if (ctx->pc == 0x29F45Cu) {
        ctx->pc = 0x29F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F458u;
        // 0x29f45c: 0x34c  syscall     13 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0xDu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F460u;
        goto label_29f460;
    }
    ctx->pc = 0x29F458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F458u;
        // 0x29f45c: 0x34c  syscall     13 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0xDu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F460u;
label_29f460:
    // 0x29f460: 0x350  .word       0x00000350                   # mfhi        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f460u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f464:
    // 0x29f464: 0x38c  syscall     14
    ctx->pc = 0x29f464u;
    runtime->handleSyscall(rdram, ctx, 0xEu);
label_29f468:
    // 0x29f468: 0x390  .word       0x00000390                   # mfhi        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f468u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f46c:
    // 0x29f46c: 0x3cc  syscall     15
    ctx->pc = 0x29f46cu;
    runtime->handleSyscall(rdram, ctx, 0xFu);
label_29f470:
    // 0x29f470: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f470u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f474:
    // 0x29f474: 0x41c  .word       0x0000041C                   # dmult       $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f474u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F474 raw=0x0000041C");
label_29f478:
    // 0x29f478: 0x42c  .word       0x0000042C                   # dadd        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f478u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f47c:
    // 0x29f47c: 0x46c  .word       0x0000046C                   # dadd        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f47cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f480:
    // 0x29f480: 0x470  tge         $zero, $zero, 17
    ctx->pc = 0x29f480u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f484:
    // 0x29f484: 0x4bc  dsll32      $zero, $zero, 18
    ctx->pc = 0x29f484u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 18));
label_29f488:
    // 0x29f488: 0x4c0  sll         $zero, $zero, 19
    ctx->pc = 0x29f488u;
    
label_29f48c:
    // 0x29f48c: 0x514  .word       0x00000514                   # dsllv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f48cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f490:
    // 0x29f490: 0x518  .word       0x00000518                   # mult        $zero, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f494:
    // 0x29f494: 0x564  .word       0x00000564                   # and         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f494u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f498:
    // 0x29f498: 0x568  .word       0x00000568                   # mfsa        $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f498u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f49c:
    // 0x29f49c: 0x5b8  dsll        $zero, $zero, 22
    ctx->pc = 0x29f49cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 22);
label_29f4a0:
    // 0x29f4a0: 0x5cc  syscall     23
    ctx->pc = 0x29f4a0u;
    runtime->handleSyscall(rdram, ctx, 0x17u);
label_29f4a4:
    // 0x29f4a4: 0x60c  syscall     24
    ctx->pc = 0x29f4a4u;
    runtime->handleSyscall(rdram, ctx, 0x18u);
label_29f4a8:
    // 0x29f4a8: 0x610  .word       0x00000610                   # mfhi        $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29f4ac:
    // 0x29f4ac: 0x65c  .word       0x0000065C                   # dmult       $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F4AC raw=0x0000065C");
label_29f4b0:
    // 0x29f4b0: 0x660  .word       0x00000660                   # add         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f4b4:
    // 0x29f4b4: 0x6bc  dsll32      $zero, $zero, 26
    ctx->pc = 0x29f4b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 26));
label_29f4b8:
    // 0x29f4b8: 0x6c0  sll         $zero, $zero, 27
    ctx->pc = 0x29f4b8u;
    
label_29f4bc:
    // 0x29f4bc: 0x6e4  .word       0x000006E4                   # and         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f4c0:
    // 0x29f4c0: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29f4c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f4c4:
    // 0x29f4c4: 0x724  .word       0x00000724                   # and         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f4c8:
    // 0x29f4c8: 0x728  .word       0x00000728                   # mfsa        $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f4c8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f4cc:
    // 0x29f4cc: 0x754  .word       0x00000754                   # dsllv       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f4d0:
    // 0x29f4d0: 0x794  .word       0x00000794                   # dsllv       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f4d4:
    // 0x29f4d4: 0x798  .word       0x00000798                   # mult        $zero, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f4d8:
    // 0x29f4d8: 0x7d4  .word       0x000007D4                   # dsllv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f4dc:
    // 0x29f4dc: 0x7d8  .word       0x000007D8                   # mult        $zero, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f4e0:
    // 0x29f4e0: 0x814  dsllv       $at, $zero, $zero
    ctx->pc = 0x29f4e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f4e4:
    // 0x29f4e4: 0x818  mult        $at, $zero, $zero
    ctx->pc = 0x29f4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29f4e8:
    // 0x29f4e8: 0x824  and         $at, $zero, $zero
    ctx->pc = 0x29f4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f4ec:
    // 0x29f4ec: 0x838  dsll        $at, $zero, 0
    ctx->pc = 0x29f4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 0);
label_29f4f0:
    // 0x29f4f0: 0x840  sll         $at, $zero, 1
    ctx->pc = 0x29f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_29f4f4:
    // 0x29f4f4: 0x864  .word       0x00000864                   # and         $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f4f8:
    // 0x29f4f8: 0x854  .word       0x00000854                   # dsllv       $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f4fc:
    // 0x29f4fc: 0x868  .word       0x00000868                   # mfsa        $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f4fcu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f500:
    // 0x29f500: 0xa84  .word       0x00000A84                   # sllv        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f500u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f504:
    // 0x29f504: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29f504u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f508:
    // 0x29f508: 0xaa4  .word       0x00000AA4                   # and         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f50c:
    // 0x29f50c: 0xaa8  .word       0x00000AA8                   # mfsa        $at # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f50cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f510:
    // 0x29f510: 0xab4  teq         $zero, $zero, 42
    ctx->pc = 0x29f510u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f514:
    // 0x29f514: 0xabc  dsll32      $at, $zero, 10
    ctx->pc = 0x29f514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 10));
label_29f518:
    // 0x29f518: 0xb94  .word       0x00000B94                   # dsllv       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f51c:
    // 0x29f51c: 0x19  multu       $zero, $zero
    ctx->pc = 0x29f51cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f520:
    // 0x29f520: 0xbb4  teq         $zero, $zero, 46
    ctx->pc = 0x29f520u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f524:
    // 0x29f524: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29f524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29f528:
    // 0x29f528: 0xbc4  .word       0x00000BC4                   # sllv        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f528u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f52c:
    // 0x29f52c: 0xbcc  syscall     47
    ctx->pc = 0x29f52cu;
    runtime->handleSyscall(rdram, ctx, 0x2Fu);
label_29f530:
    // 0x29f530: 0xc14  .word       0x00000C14                   # dsllv       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f534:
    // 0x29f534: 0xc18  .word       0x00000C18                   # mult        $at, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29f538:
    // 0x29f538: 0xc24  .word       0x00000C24                   # and         $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f53c:
    // 0x29f53c: 0xc2c  .word       0x00000C2C                   # dadd        $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f53cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f540:
    // 0x29f540: 0xc6c  .word       0x00000C6C                   # dadd        $at, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f540u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f544:
    // 0x29f544: 0xc70  tge         $zero, $zero, 49
    ctx->pc = 0x29f544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f548:
    // 0x29f548: 0xc7c  dsll32      $at, $zero, 17
    ctx->pc = 0x29f548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 17));
label_29f54c:
    // 0x29f54c: 0xc84  .word       0x00000C84                   # sllv        $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f54cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f550:
    // 0x29f550: 0xcbc  dsll32      $at, $zero, 18
    ctx->pc = 0x29f550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 18));
label_29f554:
    // 0x29f554: 0xcc0  sll         $at, $zero, 19
    ctx->pc = 0x29f554u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_29f558:
    // 0x29f558: 0xccc  syscall     51
    ctx->pc = 0x29f558u;
    runtime->handleSyscall(rdram, ctx, 0x33u);
label_29f55c:
    // 0x29f55c: 0xcd4  .word       0x00000CD4                   # dsllv       $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f560:
    // 0x29f560: 0xcfc  dsll32      $at, $zero, 19
    ctx->pc = 0x29f560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 19));
label_29f564:
    // 0x29f564: 0xd00  sll         $at, $zero, 20
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_29f568:
    // 0x29f568: 0xd04  .word       0x00000D04                   # sllv        $at, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f56c:
    // 0x29f56c: 0xd10  .word       0x00000D10                   # mfhi        $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f56cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29f570:
    // 0x29f570: 0xd1c  .word       0x00000D1C                   # dmult       $zero, $zero # 00000D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f570u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F570 raw=0x00000D1C");
label_29f574:
    // 0x29f574: 0xd28  .word       0x00000D28                   # mfsa        $at # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f574u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f578:
    // 0x29f578: 0xd30  tge         $zero, $zero, 52
    ctx->pc = 0x29f578u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f57c:
    // 0x29f57c: 0xd44  .word       0x00000D44                   # sllv        $at, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f57cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f580:
    // 0x29f580: 0xd4c  syscall     53
    ctx->pc = 0x29f580u;
    runtime->handleSyscall(rdram, ctx, 0x35u);
label_29f584:
    // 0x29f584: 0xf8  dsll        $zero, $zero, 3
    ctx->pc = 0x29f584u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 3);
label_29f588:
    // 0x29f588: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f588u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29F588 raw=0x00000005");
label_29f58c:
    // 0x29f58c: 0x130  tge         $zero, $zero, 4
    ctx->pc = 0x29f58cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f590:
    // 0x29f590: 0x134  teq         $zero, $zero, 4
    ctx->pc = 0x29f590u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f594:
    // 0x29f594: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f594u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f598:
    // 0x29f598: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x29f598u;
    
label_29f59c:
    // 0x29f59c: 0x1f8  dsll        $zero, $zero, 7
    ctx->pc = 0x29f59cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 7);
label_29f5a0:
    // 0x29f5a0: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f5a4:
    // 0x29f5a4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29F5A4 raw=0x00000005");
label_29f5a8:
    // 0x29f5a8: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f5ac:
    // 0x29f5ac: 0x368  .word       0x00000368                   # mfsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f5acu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f5b0:
    // 0x29f5b0: 0x38c  syscall     14
    ctx->pc = 0x29f5b0u;
    runtime->handleSyscall(rdram, ctx, 0xEu);
label_29f5b4:
    // 0x29f5b4: 0x3b8  dsll        $zero, $zero, 14
    ctx->pc = 0x29f5b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 14);
label_29f5b8:
    // 0x29f5b8: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x29f5b8u;
    
label_29f5bc:
    // 0x29f5bc: 0x5e8  .word       0x000005E8                   # mfsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f5bcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f5c0:
    // 0x29f5c0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f5c4:
    // 0x29f5c4: 0x614  .word       0x00000614                   # dsllv       $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f5c8:
    // 0x29f5c8: 0x618  .word       0x00000618                   # mult        $zero, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f5cc:
    // 0x29f5cc: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29f5d0:
    // 0x29f5d0: 0x628  .word       0x00000628                   # mfsa        $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f5d0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f5d4:
    // 0x29f5d4: 0x71c  .word       0x0000071C                   # dmult       $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F5D4 raw=0x0000071C");
label_29f5d8:
    // 0x29f5d8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29f5d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f5dc:
    // 0x29f5dc: 0x744  .word       0x00000744                   # sllv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f5e0:
    // 0x29f5e0: 0x748  .word       0x00000748                   # jr          $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_29f5e4:
    if (ctx->pc == 0x29F5E4u) {
        ctx->pc = 0x29F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5E0u;
        // 0x29f5e4: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F5E8u;
        goto label_29f5e8;
    }
    ctx->pc = 0x29F5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5E0u;
        // 0x29f5e4: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F5E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F5E8u;
label_29f5e8:
    // 0x29f5e8: 0x75c  .word       0x0000075C                   # dmult       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F5E8 raw=0x0000075C");
label_29f5ec:
    // 0x29f5ec: 0x89c  .word       0x0000089C                   # dmult       $zero, $zero # 00000880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F5EC raw=0x0000089C");
label_29f5f0:
    // 0x29f5f0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f5f4:
    // 0x29f5f4: 0x8b4  teq         $zero, $zero, 34
    ctx->pc = 0x29f5f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f5f8:
    // 0x29f5f8: 0x8b8  dsll        $at, $zero, 2
    ctx->pc = 0x29f5f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 2);
label_29f5fc:
    // 0x29f5fc: 0x8c4  .word       0x000008C4                   # sllv        $at, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f600:
    // 0x29f600: 0x8cc  syscall     35
    ctx->pc = 0x29f600u;
    runtime->handleSyscall(rdram, ctx, 0x23u);
label_29f604:
    // 0x29f604: 0x8dc  .word       0x000008DC                   # dmult       $zero, $zero # 000008C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f604u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F604 raw=0x000008DC");
label_29f608:
    // 0x29f608: 0x8e8  .word       0x000008E8                   # mfsa        $at # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f608u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f60c:
    // 0x29f60c: 0xb20  .word       0x00000B20                   # add         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f60cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29f610:
    // 0x29f610: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f610u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f614:
    // 0x29f614: 0xb20  .word       0x00000B20                   # add         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29f618:
    // 0x29f618: 0xb2c  .word       0x00000B2C                   # dadd        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f618u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f61c:
    // 0x29f61c: 0xb30  tge         $zero, $zero, 44
    ctx->pc = 0x29f61cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f620:
    // 0x29f620: 0xc24  .word       0x00000C24                   # and         $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f624:
    // 0x29f624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f624u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29F624 raw=0x00000001");
label_29f628:
    // 0x29f628: 0xc7c  dsll32      $at, $zero, 17
    ctx->pc = 0x29f628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 17));
label_29f62c:
    // 0x29f62c: 0xd70  tge         $zero, $zero, 53
    ctx->pc = 0x29f62cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f630:
    // 0x29f630: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f630u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f634:
    // 0x29f634: 0xd70  tge         $zero, $zero, 53
    ctx->pc = 0x29f634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f638:
    // 0x29f638: 0xd7c  dsll32      $at, $zero, 21
    ctx->pc = 0x29f638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 21));
label_29f63c:
    // 0x29f63c: 0xd80  sll         $at, $zero, 22
    ctx->pc = 0x29f63cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_29f640:
    // 0x29f640: 0x2ec  .word       0x000002EC                   # dadd        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f640u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f644:
    // 0x29f644: 0xf  sync
    ctx->pc = 0x29f644u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29f648:
    // 0x29f648: 0x3ac  .word       0x000003AC                   # dadd        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f648u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f64c:
    // 0x29f64c: 0x3b0  tge         $zero, $zero, 14
    ctx->pc = 0x29f64cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f650:
    // 0x29f650: 0x3b4  teq         $zero, $zero, 14
    ctx->pc = 0x29f650u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f654:
    // 0x29f654: 0x3b8  dsll        $zero, $zero, 14
    ctx->pc = 0x29f654u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 14);
label_29f658:
    // 0x29f658: 0x424  .word       0x00000424                   # and         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f658u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f65c:
    // 0x29f65c: 0x428  .word       0x00000428                   # mfsa        $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f65cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29f660:
    // 0x29f660: 0x4ac  .word       0x000004AC                   # dadd        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f660u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29f664:
    // 0x29f664: 0x4b0  tge         $zero, $zero, 18
    ctx->pc = 0x29f664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f668:
    // 0x29f668: 0x534  teq         $zero, $zero, 20
    ctx->pc = 0x29f668u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f66c:
    // 0x29f66c: 0x538  dsll        $zero, $zero, 20
    ctx->pc = 0x29f66cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 20);
label_29f670:
    // 0x29f670: 0x5bc  dsll32      $zero, $zero, 22
    ctx->pc = 0x29f670u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 22));
label_29f674:
    // 0x29f674: 0x5c0  sll         $zero, $zero, 23
    ctx->pc = 0x29f674u;
    
label_29f678:
    // 0x29f678: 0x644  .word       0x00000644                   # sllv        $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f678u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f67c:
    // 0x29f67c: 0x648  .word       0x00000648                   # jr          $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_29f680:
    if (ctx->pc == 0x29F680u) {
        ctx->pc = 0x29F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F67Cu;
        // 0x29f680: 0x66c  .word       0x0000066C                   # dadd        $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F684u;
        goto label_29f684;
    }
    ctx->pc = 0x29F67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F67Cu;
        // 0x29f680: 0x66c  .word       0x0000066C                   # dadd        $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F67Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F684u;
label_29f684:
    // 0x29f684: 0xa88  .word       0x00000A88                   # jr          $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
label_29f688:
    if (ctx->pc == 0x29F688u) {
        ctx->pc = 0x29F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F684u;
        // 0x29f688: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F68Cu;
        goto label_29f68c;
    }
    ctx->pc = 0x29F684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F684u;
        // 0x29f688: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F684u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F68Cu;
label_29f68c:
    // 0x29f68c: 0xaac  .word       0x00000AAC                   # dadd        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f68cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f690:
    // 0x29f690: 0xab0  tge         $zero, $zero, 42
    ctx->pc = 0x29f690u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f694:
    // 0x29f694: 0xabc  dsll32      $at, $zero, 10
    ctx->pc = 0x29f694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 10));
label_29f698:
    // 0x29f698: 0xaec  .word       0x00000AEC                   # dadd        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f698u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f69c:
    // 0x29f69c: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29f69cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f6a0:
    // 0x29f6a0: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x29f6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_29f6a4:
    // 0x29f6a4: 0xb24  .word       0x00000B24                   # and         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f6a8:
    // 0x29f6a8: 0xb28  .word       0x00000B28                   # mfsa        $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f6a8u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f6ac:
    // 0x29f6ac: 0xb34  teq         $zero, $zero, 44
    ctx->pc = 0x29f6acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f6b0:
    // 0x29f6b0: 0xb44  .word       0x00000B44                   # sllv        $at, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f6b4:
    // 0x29f6b4: 0x1724  .word       0x00001724                   # and         $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f6b8:
    // 0x29f6b8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f6bc:
    // 0x29f6bc: 0x1744  .word       0x00001744                   # sllv        $v0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f6c0:
    // 0x29f6c0: 0x1748  .word       0x00001748                   # jr          $zero # 00001740 <InstrIdType: CPU_SPECIAL>
label_29f6c4:
    if (ctx->pc == 0x29F6C4u) {
        ctx->pc = 0x29F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6C0u;
        // 0x29f6c4: 0x1750  .word       0x00001750                   # mfhi        $v0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F6C8u;
        goto label_29f6c8;
    }
    ctx->pc = 0x29F6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6C0u;
        // 0x29f6c4: 0x1750  .word       0x00001750                   # mfhi        $v0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F6C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F6C8u;
label_29f6c8:
    // 0x29f6c8: 0x27f8  dsll        $a0, $zero, 31
    ctx->pc = 0x29f6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << 31);
label_29f6cc:
    // 0x29f6cc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f6ccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f6d0:
    // 0x29f6d0: 0x282c  dadd        $a1, $zero, $zero
    ctx->pc = 0x29f6d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_29f6d4:
    // 0x29f6d4: 0x2830  tge         $zero, $zero, 160
    ctx->pc = 0x29f6d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f6d8:
    // 0x29f6d8: 0x283c  dsll32      $a1, $zero, 0
    ctx->pc = 0x29f6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 0));
label_29f6dc:
    // 0x29f6dc: 0x2a74  teq         $zero, $zero, 169
    ctx->pc = 0x29f6dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f6e0:
    // 0x29f6e0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29f6e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29F6E0 raw=0x0000001D");
label_29f6e4:
    // 0x29f6e4: 0x2bb4  teq         $zero, $zero, 174
    ctx->pc = 0x29f6e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f6e8:
    // 0x29f6e8: 0x2bb8  dsll        $a1, $zero, 14
    ctx->pc = 0x29f6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 14);
label_29f6ec:
    // 0x29f6ec: 0x2bbc  dsll32      $a1, $zero, 14
    ctx->pc = 0x29f6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 14));
label_29f6f0:
    // 0x29f6f0: 0x2bc0  sll         $a1, $zero, 15
    ctx->pc = 0x29f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_29f6f4:
    // 0x29f6f4: 0x2c3c  dsll32      $a1, $zero, 16
    ctx->pc = 0x29f6f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 16));
label_29f6f8:
    // 0x29f6f8: 0x2c40  sll         $a1, $zero, 17
    ctx->pc = 0x29f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_29f6fc:
    // 0x29f6fc: 0x2d04  .word       0x00002D04                   # sllv        $a1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f700:
    // 0x29f700: 0x2d08  .word       0x00002D08                   # jr          $zero # 00002D00 <InstrIdType: CPU_SPECIAL>
label_29f704:
    if (ctx->pc == 0x29F704u) {
        ctx->pc = 0x29F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F700u;
        // 0x29f704: 0x2dcc  syscall     183 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0xB7u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F708u;
        goto label_29f708;
    }
    ctx->pc = 0x29F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F700u;
        // 0x29f704: 0x2dcc  syscall     183 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0xB7u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F708u;
label_29f708:
    // 0x29f708: 0x2dd0  .word       0x00002DD0                   # mfhi        $a1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f708u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29f70c:
    // 0x29f70c: 0x2e94  .word       0x00002E94                   # dsllv       $a1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f710:
    // 0x29f710: 0x2e98  .word       0x00002E98                   # mult        $a1, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29f714:
    // 0x29f714: 0x2f54  .word       0x00002F54                   # dsllv       $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f718:
    // 0x29f718: 0x2f58  .word       0x00002F58                   # mult        $a1, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29f71c:
    // 0x29f71c: 0x2f74  teq         $zero, $zero, 189
    ctx->pc = 0x29f71cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f720:
    // 0x29f720: 0x2f78  dsll        $a1, $zero, 29
    ctx->pc = 0x29f720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 29);
label_29f724:
    // 0x29f724: 0x2f80  sll         $a1, $zero, 30
    ctx->pc = 0x29f724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_29f728:
    // 0x29f728: 0x2fa0  .word       0x00002FA0                   # add         $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f728u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29f72c:
    // 0x29f72c: 0x2fd0  .word       0x00002FD0                   # mfhi        $a1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f72cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29f730:
    // 0x29f730: 0x2fdc  .word       0x00002FDC                   # dmult       $zero, $zero # 00002FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f730u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F730 raw=0x00002FDC");
label_29f734:
    // 0x29f734: 0x3000  sll         $a2, $zero, 0
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29f738:
    // 0x29f738: 0x300c  syscall     192
    ctx->pc = 0x29f738u;
    runtime->handleSyscall(rdram, ctx, 0xC0u);
label_29f73c:
    // 0x29f73c: 0x3014  dsllv       $a2, $zero, $zero
    ctx->pc = 0x29f73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f740:
    // 0x29f740: 0x3038  dsll        $a2, $zero, 0
    ctx->pc = 0x29f740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 0);
label_29f744:
    // 0x29f744: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f744u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29f748:
    // 0x29f748: 0x3068  .word       0x00003068                   # mfsa        $a2 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f748u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_29f74c:
    // 0x29f74c: 0x3078  dsll        $a2, $zero, 1
    ctx->pc = 0x29f74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 1);
label_29f750:
    // 0x29f750: 0x308c  syscall     194
    ctx->pc = 0x29f750u;
    runtime->handleSyscall(rdram, ctx, 0xC2u);
label_29f754:
    // 0x29f754: 0x30b8  dsll        $a2, $zero, 2
    ctx->pc = 0x29f754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 2);
label_29f758:
    // 0x29f758: 0x714  .word       0x00000714                   # dsllv       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f758u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f75c:
    // 0x29f75c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f75cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f760:
    // 0x29f760: 0x73c  dsll32      $zero, $zero, 28
    ctx->pc = 0x29f760u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 28));
label_29f764:
    // 0x29f764: 0x740  sll         $zero, $zero, 29
    ctx->pc = 0x29f764u;
    
label_29f768:
    // 0x29f768: 0x744  .word       0x00000744                   # sllv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f76c:
    // 0x29f76c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29f770:
    // 0x29f770: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29f770u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f774:
    // 0x29f774: 0x8e4  .word       0x000008E4                   # and         $at, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f778:
    // 0x29f778: 0x8e8  .word       0x000008E8                   # mfsa        $at # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f778u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29f77c:
    // 0x29f77c: 0x8f8  dsll        $at, $zero, 3
    ctx->pc = 0x29f77cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 3);
label_29f780:
    // 0x29f780: 0x944  .word       0x00000944                   # sllv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f780u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f784:
    // 0x29f784: 0x948  .word       0x00000948                   # jr          $zero # 00000940 <InstrIdType: CPU_SPECIAL>
label_29f788:
    if (ctx->pc == 0x29F788u) {
        ctx->pc = 0x29F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F784u;
        // 0x29f788: 0x94c  syscall     37 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x25u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F78Cu;
        goto label_29f78c;
    }
    ctx->pc = 0x29F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F784u;
        // 0x29f788: 0x94c  syscall     37 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x25u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F784u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F78Cu;
label_29f78c:
    // 0x29f78c: 0x8a0  .word       0x000008A0                   # add         $at, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f78cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29f790:
    // 0x29f790: 0xa2c  .word       0x00000A2C                   # dadd        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f790u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f794:
    // 0x29f794: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f794u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f798:
    // 0x29f798: 0xa5c  .word       0x00000A5C                   # dmult       $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f798u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F798 raw=0x00000A5C");
label_29f79c:
    // 0x29f79c: 0xa60  .word       0x00000A60                   # add         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f79cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29f7a0:
    // 0x29f7a0: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f7a4:
    // 0x29f7a4: 0xb9c  .word       0x00000B9C                   # dmult       $zero, $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F7A4 raw=0x00000B9C");
label_29f7a8:
    // 0x29f7a8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f7a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f7ac:
    // 0x29f7ac: 0xbcc  syscall     47
    ctx->pc = 0x29f7acu;
    runtime->handleSyscall(rdram, ctx, 0x2Fu);
label_29f7b0:
    // 0x29f7b0: 0xbd0  .word       0x00000BD0                   # mfhi        $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7b0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29f7b4:
    // 0x29f7b4: 0xbd4  .word       0x00000BD4                   # dsllv       $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f7b8:
    // 0x29f7b8: 0xcb0  tge         $zero, $zero, 50
    ctx->pc = 0x29f7b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f7bc:
    // 0x29f7bc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f7bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f7c0:
    // 0x29f7c0: 0xcdc  .word       0x00000CDC                   # dmult       $zero, $zero # 00000CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F7C0 raw=0x00000CDC");
label_29f7c4:
    // 0x29f7c4: 0xce0  .word       0x00000CE0                   # add         $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29f7c8:
    // 0x29f7c8: 0xce4  .word       0x00000CE4                   # and         $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f7cc:
    // 0x29f7cc: 0xdc0  sll         $at, $zero, 23
    ctx->pc = 0x29f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_29f7d0:
    // 0x29f7d0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f7d4:
    // 0x29f7d4: 0xdec  .word       0x00000DEC                   # dadd        $at, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29f7d8:
    // 0x29f7d8: 0xdf0  tge         $zero, $zero, 55
    ctx->pc = 0x29f7d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f7dc:
    // 0x29f7dc: 0xdf4  teq         $zero, $zero, 55
    ctx->pc = 0x29f7dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f7e0:
    // 0x29f7e0: 0xf48  .word       0x00000F48                   # jr          $zero # 00000F40 <InstrIdType: CPU_SPECIAL>
label_29f7e4:
    if (ctx->pc == 0x29F7E4u) {
        ctx->pc = 0x29F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7E0u;
        // 0x29f7e4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29F7E4 raw=0x00000015");
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7E8u;
        goto label_29f7e8;
    }
    ctx->pc = 0x29F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7E0u;
        // 0x29f7e4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29F7E4 raw=0x00000015");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F7E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F7E8u;
label_29f7e8:
    // 0x29f7e8: 0xfd8  .word       0x00000FD8                   # mult        $at, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29f7ec:
    // 0x29f7ec: 0xfd0  .word       0x00000FD0                   # mfhi        $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f7ecu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29f7f0:
    // 0x29f7f0: 0xff8  dsll        $at, $zero, 31
    ctx->pc = 0x29f7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 31);
label_29f7f4:
    // 0x29f7f4: 0xf48  .word       0x00000F48                   # jr          $zero # 00000F40 <InstrIdType: CPU_SPECIAL>
label_29f7f8:
    if (ctx->pc == 0x29F7F8u) {
        ctx->pc = 0x29F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7F4u;
        // 0x29f7f8: 0xf4c  syscall     61 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x3Du);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F7FCu;
        goto label_29f7fc;
    }
    ctx->pc = 0x29F7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7F4u;
        // 0x29f7f8: 0xf4c  syscall     61 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x3Du);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F7F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F7FCu;
label_29f7fc:
    // 0x29f7fc: 0xf8c  syscall     62
    ctx->pc = 0x29f7fcu;
    runtime->handleSyscall(rdram, ctx, 0x3Eu);
label_29f800:
    // 0x29f800: 0xf90  .word       0x00000F90                   # mfhi        $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f800u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29f804:
    // 0x29f804: 0xfb8  dsll        $at, $zero, 30
    ctx->pc = 0x29f804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 30);
label_29f808:
    // 0x29f808: 0xfc0  sll         $at, $zero, 31
    ctx->pc = 0x29f808u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_29f80c:
    // 0x29f80c: 0xfcc  syscall     63
    ctx->pc = 0x29f80cu;
    runtime->handleSyscall(rdram, ctx, 0x3Fu);
label_29f810:
    // 0x29f810: 0xfd4  .word       0x00000FD4                   # dsllv       $at, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f814:
    // 0x29f814: 0xfdc  .word       0x00000FDC                   # dmult       $zero, $zero # 00000FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f814u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F814 raw=0x00000FDC");
label_29f818:
    // 0x29f818: 0xfe4  .word       0x00000FE4                   # and         $at, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f81c:
    // 0x29f81c: 0x103c  dsll32      $v0, $zero, 0
    ctx->pc = 0x29f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 0));
label_29f820:
    // 0x29f820: 0x1040  sll         $v0, $zero, 1
    ctx->pc = 0x29f820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_29f824:
    // 0x29f824: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f824u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29f828:
    // 0x29f828: 0x1070  tge         $zero, $zero, 65
    ctx->pc = 0x29f828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f82c:
    // 0x29f82c: 0x10bc  dsll32      $v0, $zero, 2
    ctx->pc = 0x29f82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 2));
label_29f830:
    // 0x29f830: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x29f830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29f834:
    // 0x29f834: 0x10e8  .word       0x000010E8                   # mfsa        $v0 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f834u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29f838:
    // 0x29f838: 0xf54  .word       0x00000F54                   # dsllv       $at, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f83c:
    // 0x29f83c: 0x11b0  tge         $zero, $zero, 70
    ctx->pc = 0x29f83cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f840:
    // 0x29f840: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f840u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f844:
    // 0x29f844: 0x11dc  .word       0x000011DC                   # dmult       $zero, $zero # 000011C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f844u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F844 raw=0x000011DC");
label_29f848:
    // 0x29f848: 0x11e0  .word       0x000011E0                   # add         $v0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29f84c:
    // 0x29f84c: 0x11e4  .word       0x000011E4                   # and         $v0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f850:
    // 0x29f850: 0x1294  .word       0x00001294                   # dsllv       $v0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f854:
    // 0x29f854: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f854u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f858:
    // 0x29f858: 0x12c4  .word       0x000012C4                   # sllv        $v0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f85c:
    // 0x29f85c: 0x12c8  .word       0x000012C8                   # jr          $zero # 000012C0 <InstrIdType: CPU_SPECIAL>
label_29f860:
    if (ctx->pc == 0x29F860u) {
        ctx->pc = 0x29F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F85Cu;
        // 0x29f860: 0x12cc  syscall     75 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x4Bu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F864u;
        goto label_29f864;
    }
    ctx->pc = 0x29F85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F85Cu;
        // 0x29f860: 0x12cc  syscall     75 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x4Bu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F85Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F864u;
label_29f864:
    // 0x29f864: 0x1380  sll         $v0, $zero, 14
    ctx->pc = 0x29f864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_29f868:
    // 0x29f868: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f868u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f86c:
    // 0x29f86c: 0x13b4  teq         $zero, $zero, 78
    ctx->pc = 0x29f86cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f870:
    // 0x29f870: 0x13b8  dsll        $v0, $zero, 14
    ctx->pc = 0x29f870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 14);
label_29f874:
    // 0x29f874: 0x13bc  dsll32      $v0, $zero, 14
    ctx->pc = 0x29f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 14));
label_29f878:
    // 0x29f878: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f878u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29f87c:
    // 0x29f87c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f87cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f880:
    // 0x29f880: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f884:
    // 0x29f884: 0x16d8  .word       0x000016D8                   # mult        $v0, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29f888:
    // 0x29f888: 0x16dc  .word       0x000016DC                   # dmult       $zero, $zero # 000016C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f888u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F888 raw=0x000016DC");
label_29f88c:
    // 0x29f88c: 0x17c8  .word       0x000017C8                   # jr          $zero # 000017C0 <InstrIdType: CPU_SPECIAL>
label_29f890:
    if (ctx->pc == 0x29F890u) {
        ctx->pc = 0x29F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F88Cu;
        // 0x29f890: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F894u;
        goto label_29f894;
    }
    ctx->pc = 0x29F88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F88Cu;
        // 0x29f890: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F88Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F894u;
label_29f894:
    // 0x29f894: 0x17fc  dsll32      $v0, $zero, 31
    ctx->pc = 0x29f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 31));
label_29f898:
    // 0x29f898: 0x1800  sll         $v1, $zero, 0
    ctx->pc = 0x29f898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29f89c:
    // 0x29f89c: 0x1804  sllv        $v1, $zero, $zero
    ctx->pc = 0x29f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f8a0:
    // 0x29f8a0: 0x18d4  .word       0x000018D4                   # dsllv       $v1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f8a4:
    // 0x29f8a4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f8a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f8a8:
    // 0x29f8a8: 0x1904  .word       0x00001904                   # sllv        $v1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f8ac:
    // 0x29f8ac: 0x1908  .word       0x00001908                   # jr          $zero # 00001900 <InstrIdType: CPU_SPECIAL>
label_29f8b0:
    if (ctx->pc == 0x29F8B0u) {
        ctx->pc = 0x29F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8ACu;
        // 0x29f8b0: 0x190c  syscall     100 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x64u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8B4u;
        goto label_29f8b4;
    }
    ctx->pc = 0x29F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8ACu;
        // 0x29f8b0: 0x190c  syscall     100 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x64u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F8ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F8B4u;
label_29f8b4:
    // 0x29f8b4: 0x1ed8  .word       0x00001ED8                   # mult        $v1, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29f8b8:
    // 0x29f8b8: 0x13  mtlo        $zero
    ctx->pc = 0x29f8b8u;
    ctx->lo = GPR_U64(ctx, 0);
label_29f8bc:
    // 0x29f8bc: 0x1edc  .word       0x00001EDC                   # dmult       $zero, $zero # 00001EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F8BC raw=0x00001EDC");
label_29f8c0:
    // 0x29f8c0: 0x1ee0  .word       0x00001EE0                   # add         $v1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29f8c4:
    // 0x29f8c4: 0x1ee4  .word       0x00001EE4                   # and         $v1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f8c8:
    // 0x29f8c8: 0x1ee8  .word       0x00001EE8                   # mfsa        $v1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f8c8u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_29f8cc:
    // 0x29f8cc: 0x1f24  .word       0x00001F24                   # and         $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f8d0:
    // 0x29f8d0: 0x1f28  .word       0x00001F28                   # mfsa        $v1 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f8d0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_29f8d4:
    // 0x29f8d4: 0x1f2c  .word       0x00001F2C                   # dadd        $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_29f8d8:
    // 0x29f8d8: 0x1f34  teq         $zero, $zero, 124
    ctx->pc = 0x29f8d8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f8dc:
    // 0x29f8dc: 0x1f40  sll         $v1, $zero, 29
    ctx->pc = 0x29f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_29f8e0:
    // 0x29f8e0: 0x1f74  teq         $zero, $zero, 125
    ctx->pc = 0x29f8e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f8e4:
    // 0x29f8e4: 0x1f78  dsll        $v1, $zero, 29
    ctx->pc = 0x29f8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 29);
label_29f8e8:
    // 0x29f8e8: 0x1f7c  dsll32      $v1, $zero, 29
    ctx->pc = 0x29f8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 29));
label_29f8ec:
    // 0x29f8ec: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29f8f0:
    // 0x29f8f0: 0x1f94  .word       0x00001F94                   # dsllv       $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f8f4:
    // 0x29f8f4: 0x1fdc  .word       0x00001FDC                   # dmult       $zero, $zero # 00001FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F8F4 raw=0x00001FDC");
label_29f8f8:
    // 0x29f8f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29f8fc:
    // 0x29f8fc: 0x1fe4  .word       0x00001FE4                   # and         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f900:
    // 0x29f900: 0x1ed8  .word       0x00001ED8                   # mult        $v1, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29f904:
    // 0x29f904: 0x1f30  tge         $zero, $zero, 124
    ctx->pc = 0x29f904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f908:
    // 0x29f908: 0x20f0  tge         $zero, $zero, 131
    ctx->pc = 0x29f908u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f90c:
    // 0x29f90c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f90cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f910:
    // 0x29f910: 0x2114  .word       0x00002114                   # dsllv       $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f914:
    // 0x29f914: 0x2118  .word       0x00002118                   # mult        $a0, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29f918:
    // 0x29f918: 0x211c  .word       0x0000211C                   # dmult       $zero, $zero # 00002100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f918u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F918 raw=0x0000211C");
label_29f91c:
    // 0x29f91c: 0x2208  .word       0x00002208                   # jr          $zero # 00002200 <InstrIdType: CPU_SPECIAL>
label_29f920:
    if (ctx->pc == 0x29F920u) {
        ctx->pc = 0x29F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F91Cu;
        // 0x29f920: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F924u;
        goto label_29f924;
    }
    ctx->pc = 0x29F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F91Cu;
        // 0x29f920: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F91Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F924u;
label_29f924:
    // 0x29f924: 0x2208  .word       0x00002208                   # jr          $zero # 00002200 <InstrIdType: CPU_SPECIAL>
label_29f928:
    if (ctx->pc == 0x29F928u) {
        ctx->pc = 0x29F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F924u;
        // 0x29f928: 0x220c  syscall     136 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x88u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F92Cu;
        goto label_29f92c;
    }
    ctx->pc = 0x29F924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F924u;
        // 0x29f928: 0x220c  syscall     136 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x88u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F92Cu;
label_29f92c:
    // 0x29f92c: 0x2210  .word       0x00002210                   # mfhi        $a0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f92cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29f930:
    // 0x29f930: 0x2214  .word       0x00002214                   # dsllv       $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f934:
    // 0x29f934: 0x2218  .word       0x00002218                   # mult        $a0, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29f938:
    // 0x29f938: 0x2254  .word       0x00002254                   # dsllv       $a0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f93c:
    // 0x29f93c: 0x2258  .word       0x00002258                   # mult        $a0, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29f940:
    // 0x29f940: 0x225c  .word       0x0000225C                   # dmult       $zero, $zero # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f940u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F940 raw=0x0000225C");
label_29f944:
    // 0x29f944: 0x2264  .word       0x00002264                   # and         $a0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f948:
    // 0x29f948: 0x2268  .word       0x00002268                   # mfsa        $a0 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f948u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_29f94c:
    // 0x29f94c: 0x2274  teq         $zero, $zero, 137
    ctx->pc = 0x29f94cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f950:
    // 0x29f950: 0x22ac  .word       0x000022AC                   # dadd        $a0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f950u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_29f954:
    // 0x29f954: 0x22b0  tge         $zero, $zero, 138
    ctx->pc = 0x29f954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f958:
    // 0x29f958: 0x22b4  teq         $zero, $zero, 138
    ctx->pc = 0x29f958u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29f95c:
    // 0x29f95c: 0x22c8  .word       0x000022C8                   # jr          $zero # 000022C0 <InstrIdType: CPU_SPECIAL>
label_29f960:
    if (ctx->pc == 0x29F960u) {
        ctx->pc = 0x29F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F95Cu;
        // 0x29f960: 0x23b8  dsll        $a0, $zero, 14 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << 14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F964u;
        goto label_29f964;
    }
    ctx->pc = 0x29F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F95Cu;
        // 0x29f960: 0x23b8  dsll        $a0, $zero, 14 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << 14);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F95Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F964u;
label_29f964:
    // 0x29f964: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29f964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29f968:
    // 0x29f968: 0x23b8  dsll        $a0, $zero, 14
    ctx->pc = 0x29f968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << 14);
label_29f96c:
    // 0x29f96c: 0x2418  .word       0x00002418                   # mult        $a0, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29f970:
    // 0x29f970: 0x23bc  dsll32      $a0, $zero, 14
    ctx->pc = 0x29f970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 14));
label_29f974:
    // 0x29f974: 0x23c0  sll         $a0, $zero, 15
    ctx->pc = 0x29f974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_29f978:
    // 0x29f978: 0x23c4  .word       0x000023C4                   # sllv        $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f97c:
    // 0x29f97c: 0x23c8  .word       0x000023C8                   # jr          $zero # 000023C0 <InstrIdType: CPU_SPECIAL>
label_29f980:
    if (ctx->pc == 0x29F980u) {
        ctx->pc = 0x29F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F97Cu;
        // 0x29f980: 0x240c  syscall     144 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x90u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F984u;
        goto label_29f984;
    }
    ctx->pc = 0x29F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F97Cu;
        // 0x29f980: 0x240c  syscall     144 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x90u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F97Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F984u;
label_29f984:
    // 0x29f984: 0x2410  .word       0x00002410                   # mfhi        $a0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f984u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29f988:
    // 0x29f988: 0x2414  .word       0x00002414                   # dsllv       $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29f98c:
    // 0x29f98c: 0x241c  .word       0x0000241C                   # dmult       $zero, $zero # 00002400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f98cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F98C raw=0x0000241C");
label_29f990:
    // 0x29f990: 0x2428  .word       0x00002428                   # mfsa        $a0 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f990u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_29f994:
    // 0x29f994: 0x245c  .word       0x0000245C                   # dmult       $zero, $zero # 00002440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f994u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29F994 raw=0x0000245C");
label_29f998:
    // 0x29f998: 0x2460  .word       0x00002460                   # add         $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29f99c:
    // 0x29f99c: 0x2464  .word       0x00002464                   # and         $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f9a0:
    // 0x29f9a0: 0x247c  dsll32      $a0, $zero, 17
    ctx->pc = 0x29f9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 17));
label_29f9a4:
    // 0x29f9a4: 0x2480  sll         $a0, $zero, 18
    ctx->pc = 0x29f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29f9a8:
    // 0x29f9a8: 0x24c4  .word       0x000024C4                   # sllv        $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f9ac:
    // 0x29f9ac: 0x24c8  .word       0x000024C8                   # jr          $zero # 000024C0 <InstrIdType: CPU_SPECIAL>
label_29f9b0:
    if (ctx->pc == 0x29F9B0u) {
        ctx->pc = 0x29F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9ACu;
        // 0x29f9b0: 0x24cc  syscall     147 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x93u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F9B4u;
        goto label_29f9b4;
    }
    ctx->pc = 0x29F9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9ACu;
        // 0x29f9b0: 0x24cc  syscall     147 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x93u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F9ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F9B4u;
label_29f9b4:
    // 0x29f9b4: 0x24d8  .word       0x000024D8                   # mult        $a0, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f9b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29f9b8:
    // 0x29f9b8: 0x24e0  .word       0x000024E0                   # add         $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f9b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29f9bc:
    // 0x29f9bc: 0x2524  .word       0x00002524                   # and         $a0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29f9c0:
    // 0x29f9c0: 0x2528  .word       0x00002528                   # mfsa        $a0 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29f9c0u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_29f9c4:
    // 0x29f9c4: 0x252c  .word       0x0000252C                   # dadd        $a0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f9c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_29f9c8:
    // 0x29f9c8: 0x2660  .word       0x00002660                   # add         $a0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f9c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29f9cc:
    // 0x29f9cc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29f9ccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29f9d0:
    // 0x29f9d0: 0x2684  .word       0x00002684                   # sllv        $a0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29f9d4:
    // 0x29f9d4: 0x2688  .word       0x00002688                   # jr          $zero # 00002680 <InstrIdType: CPU_SPECIAL>
label_29f9d8:
    if (ctx->pc == 0x29F9D8u) {
        ctx->pc = 0x29F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9D4u;
        // 0x29f9d8: 0x268c  syscall     154 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x9Au);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F9DCu;
        goto label_29f9dc;
    }
    ctx->pc = 0x29F9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9D4u;
        // 0x29f9d8: 0x268c  syscall     154 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x9Au);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F9D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29F9DCu;
label_29f9dc:
    // 0x29f9dc: 0x0  nop
    ctx->pc = 0x29f9dcu;
    // NOP
}
