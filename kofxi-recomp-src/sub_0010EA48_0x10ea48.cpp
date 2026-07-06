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

// Function: sub_0010EA48
// Address: 0x10ea48 - 0x10f808
void sub_0010EA48_0x10ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA48_0x10ea48");
#endif

    switch (ctx->pc) {
        case 0x10ea48u: goto label_10ea48;
        case 0x10ea4cu: goto label_10ea4c;
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea54u: goto label_10ea54;
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea5cu: goto label_10ea5c;
        case 0x10ea60u: goto label_10ea60;
        case 0x10ea64u: goto label_10ea64;
        case 0x10ea68u: goto label_10ea68;
        case 0x10ea6cu: goto label_10ea6c;
        case 0x10ea70u: goto label_10ea70;
        case 0x10ea74u: goto label_10ea74;
        case 0x10ea78u: goto label_10ea78;
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10ea80u: goto label_10ea80;
        case 0x10ea84u: goto label_10ea84;
        case 0x10ea88u: goto label_10ea88;
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10ea90u: goto label_10ea90;
        case 0x10ea94u: goto label_10ea94;
        case 0x10ea98u: goto label_10ea98;
        case 0x10ea9cu: goto label_10ea9c;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa4u: goto label_10eaa4;
        case 0x10eaa8u: goto label_10eaa8;
        case 0x10eaacu: goto label_10eaac;
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab4u: goto label_10eab4;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eabcu: goto label_10eabc;
        case 0x10eac0u: goto label_10eac0;
        case 0x10eac4u: goto label_10eac4;
        case 0x10eac8u: goto label_10eac8;
        case 0x10eaccu: goto label_10eacc;
        case 0x10ead0u: goto label_10ead0;
        case 0x10ead4u: goto label_10ead4;
        case 0x10ead8u: goto label_10ead8;
        case 0x10eadcu: goto label_10eadc;
        case 0x10eae0u: goto label_10eae0;
        case 0x10eae4u: goto label_10eae4;
        case 0x10eae8u: goto label_10eae8;
        case 0x10eaecu: goto label_10eaec;
        case 0x10eaf0u: goto label_10eaf0;
        case 0x10eaf4u: goto label_10eaf4;
        case 0x10eaf8u: goto label_10eaf8;
        case 0x10eafcu: goto label_10eafc;
        case 0x10eb00u: goto label_10eb00;
        case 0x10eb04u: goto label_10eb04;
        case 0x10eb08u: goto label_10eb08;
        case 0x10eb0cu: goto label_10eb0c;
        case 0x10eb10u: goto label_10eb10;
        case 0x10eb14u: goto label_10eb14;
        case 0x10eb18u: goto label_10eb18;
        case 0x10eb1cu: goto label_10eb1c;
        case 0x10eb20u: goto label_10eb20;
        case 0x10eb24u: goto label_10eb24;
        case 0x10eb28u: goto label_10eb28;
        case 0x10eb2cu: goto label_10eb2c;
        case 0x10eb30u: goto label_10eb30;
        case 0x10eb34u: goto label_10eb34;
        case 0x10eb38u: goto label_10eb38;
        case 0x10eb3cu: goto label_10eb3c;
        case 0x10eb40u: goto label_10eb40;
        case 0x10eb44u: goto label_10eb44;
        case 0x10eb48u: goto label_10eb48;
        case 0x10eb4cu: goto label_10eb4c;
        case 0x10eb50u: goto label_10eb50;
        case 0x10eb54u: goto label_10eb54;
        case 0x10eb58u: goto label_10eb58;
        case 0x10eb5cu: goto label_10eb5c;
        case 0x10eb60u: goto label_10eb60;
        case 0x10eb64u: goto label_10eb64;
        case 0x10eb68u: goto label_10eb68;
        case 0x10eb6cu: goto label_10eb6c;
        case 0x10eb70u: goto label_10eb70;
        case 0x10eb74u: goto label_10eb74;
        case 0x10eb78u: goto label_10eb78;
        case 0x10eb7cu: goto label_10eb7c;
        case 0x10eb80u: goto label_10eb80;
        case 0x10eb84u: goto label_10eb84;
        case 0x10eb88u: goto label_10eb88;
        case 0x10eb8cu: goto label_10eb8c;
        case 0x10eb90u: goto label_10eb90;
        case 0x10eb94u: goto label_10eb94;
        case 0x10eb98u: goto label_10eb98;
        case 0x10eb9cu: goto label_10eb9c;
        case 0x10eba0u: goto label_10eba0;
        case 0x10eba4u: goto label_10eba4;
        case 0x10eba8u: goto label_10eba8;
        case 0x10ebacu: goto label_10ebac;
        case 0x10ebb0u: goto label_10ebb0;
        case 0x10ebb4u: goto label_10ebb4;
        case 0x10ebb8u: goto label_10ebb8;
        case 0x10ebbcu: goto label_10ebbc;
        case 0x10ebc0u: goto label_10ebc0;
        case 0x10ebc4u: goto label_10ebc4;
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebccu: goto label_10ebcc;
        case 0x10ebd0u: goto label_10ebd0;
        case 0x10ebd4u: goto label_10ebd4;
        case 0x10ebd8u: goto label_10ebd8;
        case 0x10ebdcu: goto label_10ebdc;
        case 0x10ebe0u: goto label_10ebe0;
        case 0x10ebe4u: goto label_10ebe4;
        case 0x10ebe8u: goto label_10ebe8;
        case 0x10ebecu: goto label_10ebec;
        case 0x10ebf0u: goto label_10ebf0;
        case 0x10ebf4u: goto label_10ebf4;
        case 0x10ebf8u: goto label_10ebf8;
        case 0x10ebfcu: goto label_10ebfc;
        case 0x10ec00u: goto label_10ec00;
        case 0x10ec04u: goto label_10ec04;
        case 0x10ec08u: goto label_10ec08;
        case 0x10ec0cu: goto label_10ec0c;
        case 0x10ec10u: goto label_10ec10;
        case 0x10ec14u: goto label_10ec14;
        case 0x10ec18u: goto label_10ec18;
        case 0x10ec1cu: goto label_10ec1c;
        case 0x10ec20u: goto label_10ec20;
        case 0x10ec24u: goto label_10ec24;
        case 0x10ec28u: goto label_10ec28;
        case 0x10ec2cu: goto label_10ec2c;
        case 0x10ec30u: goto label_10ec30;
        case 0x10ec34u: goto label_10ec34;
        case 0x10ec38u: goto label_10ec38;
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec40u: goto label_10ec40;
        case 0x10ec44u: goto label_10ec44;
        case 0x10ec48u: goto label_10ec48;
        case 0x10ec4cu: goto label_10ec4c;
        case 0x10ec50u: goto label_10ec50;
        case 0x10ec54u: goto label_10ec54;
        case 0x10ec58u: goto label_10ec58;
        case 0x10ec5cu: goto label_10ec5c;
        case 0x10ec60u: goto label_10ec60;
        case 0x10ec64u: goto label_10ec64;
        case 0x10ec68u: goto label_10ec68;
        case 0x10ec6cu: goto label_10ec6c;
        case 0x10ec70u: goto label_10ec70;
        case 0x10ec74u: goto label_10ec74;
        case 0x10ec78u: goto label_10ec78;
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ec80u: goto label_10ec80;
        case 0x10ec84u: goto label_10ec84;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec8cu: goto label_10ec8c;
        case 0x10ec90u: goto label_10ec90;
        case 0x10ec94u: goto label_10ec94;
        case 0x10ec98u: goto label_10ec98;
        case 0x10ec9cu: goto label_10ec9c;
        case 0x10eca0u: goto label_10eca0;
        case 0x10eca4u: goto label_10eca4;
        case 0x10eca8u: goto label_10eca8;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecb0u: goto label_10ecb0;
        case 0x10ecb4u: goto label_10ecb4;
        case 0x10ecb8u: goto label_10ecb8;
        case 0x10ecbcu: goto label_10ecbc;
        case 0x10ecc0u: goto label_10ecc0;
        case 0x10ecc4u: goto label_10ecc4;
        case 0x10ecc8u: goto label_10ecc8;
        case 0x10ecccu: goto label_10eccc;
        case 0x10ecd0u: goto label_10ecd0;
        case 0x10ecd4u: goto label_10ecd4;
        case 0x10ecd8u: goto label_10ecd8;
        case 0x10ecdcu: goto label_10ecdc;
        case 0x10ece0u: goto label_10ece0;
        case 0x10ece4u: goto label_10ece4;
        case 0x10ece8u: goto label_10ece8;
        case 0x10ececu: goto label_10ecec;
        case 0x10ecf0u: goto label_10ecf0;
        case 0x10ecf4u: goto label_10ecf4;
        case 0x10ecf8u: goto label_10ecf8;
        case 0x10ecfcu: goto label_10ecfc;
        case 0x10ed00u: goto label_10ed00;
        case 0x10ed04u: goto label_10ed04;
        case 0x10ed08u: goto label_10ed08;
        case 0x10ed0cu: goto label_10ed0c;
        case 0x10ed10u: goto label_10ed10;
        case 0x10ed14u: goto label_10ed14;
        case 0x10ed18u: goto label_10ed18;
        case 0x10ed1cu: goto label_10ed1c;
        case 0x10ed20u: goto label_10ed20;
        case 0x10ed24u: goto label_10ed24;
        case 0x10ed28u: goto label_10ed28;
        case 0x10ed2cu: goto label_10ed2c;
        case 0x10ed30u: goto label_10ed30;
        case 0x10ed34u: goto label_10ed34;
        case 0x10ed38u: goto label_10ed38;
        case 0x10ed3cu: goto label_10ed3c;
        case 0x10ed40u: goto label_10ed40;
        case 0x10ed44u: goto label_10ed44;
        case 0x10ed48u: goto label_10ed48;
        case 0x10ed4cu: goto label_10ed4c;
        case 0x10ed50u: goto label_10ed50;
        case 0x10ed54u: goto label_10ed54;
        case 0x10ed58u: goto label_10ed58;
        case 0x10ed5cu: goto label_10ed5c;
        case 0x10ed60u: goto label_10ed60;
        case 0x10ed64u: goto label_10ed64;
        case 0x10ed68u: goto label_10ed68;
        case 0x10ed6cu: goto label_10ed6c;
        case 0x10ed70u: goto label_10ed70;
        case 0x10ed74u: goto label_10ed74;
        case 0x10ed78u: goto label_10ed78;
        case 0x10ed7cu: goto label_10ed7c;
        case 0x10ed80u: goto label_10ed80;
        case 0x10ed84u: goto label_10ed84;
        case 0x10ed88u: goto label_10ed88;
        case 0x10ed8cu: goto label_10ed8c;
        case 0x10ed90u: goto label_10ed90;
        case 0x10ed94u: goto label_10ed94;
        case 0x10ed98u: goto label_10ed98;
        case 0x10ed9cu: goto label_10ed9c;
        case 0x10eda0u: goto label_10eda0;
        case 0x10eda4u: goto label_10eda4;
        case 0x10eda8u: goto label_10eda8;
        case 0x10edacu: goto label_10edac;
        case 0x10edb0u: goto label_10edb0;
        case 0x10edb4u: goto label_10edb4;
        case 0x10edb8u: goto label_10edb8;
        case 0x10edbcu: goto label_10edbc;
        case 0x10edc0u: goto label_10edc0;
        case 0x10edc4u: goto label_10edc4;
        case 0x10edc8u: goto label_10edc8;
        case 0x10edccu: goto label_10edcc;
        case 0x10edd0u: goto label_10edd0;
        case 0x10edd4u: goto label_10edd4;
        case 0x10edd8u: goto label_10edd8;
        case 0x10eddcu: goto label_10eddc;
        case 0x10ede0u: goto label_10ede0;
        case 0x10ede4u: goto label_10ede4;
        case 0x10ede8u: goto label_10ede8;
        case 0x10edecu: goto label_10edec;
        case 0x10edf0u: goto label_10edf0;
        case 0x10edf4u: goto label_10edf4;
        case 0x10edf8u: goto label_10edf8;
        case 0x10edfcu: goto label_10edfc;
        case 0x10ee00u: goto label_10ee00;
        case 0x10ee04u: goto label_10ee04;
        case 0x10ee08u: goto label_10ee08;
        case 0x10ee0cu: goto label_10ee0c;
        case 0x10ee10u: goto label_10ee10;
        case 0x10ee14u: goto label_10ee14;
        case 0x10ee18u: goto label_10ee18;
        case 0x10ee1cu: goto label_10ee1c;
        case 0x10ee20u: goto label_10ee20;
        case 0x10ee24u: goto label_10ee24;
        case 0x10ee28u: goto label_10ee28;
        case 0x10ee2cu: goto label_10ee2c;
        case 0x10ee30u: goto label_10ee30;
        case 0x10ee34u: goto label_10ee34;
        case 0x10ee38u: goto label_10ee38;
        case 0x10ee3cu: goto label_10ee3c;
        case 0x10ee40u: goto label_10ee40;
        case 0x10ee44u: goto label_10ee44;
        case 0x10ee48u: goto label_10ee48;
        case 0x10ee4cu: goto label_10ee4c;
        case 0x10ee50u: goto label_10ee50;
        case 0x10ee54u: goto label_10ee54;
        case 0x10ee58u: goto label_10ee58;
        case 0x10ee5cu: goto label_10ee5c;
        case 0x10ee60u: goto label_10ee60;
        case 0x10ee64u: goto label_10ee64;
        case 0x10ee68u: goto label_10ee68;
        case 0x10ee6cu: goto label_10ee6c;
        case 0x10ee70u: goto label_10ee70;
        case 0x10ee74u: goto label_10ee74;
        case 0x10ee78u: goto label_10ee78;
        case 0x10ee7cu: goto label_10ee7c;
        case 0x10ee80u: goto label_10ee80;
        case 0x10ee84u: goto label_10ee84;
        case 0x10ee88u: goto label_10ee88;
        case 0x10ee8cu: goto label_10ee8c;
        case 0x10ee90u: goto label_10ee90;
        case 0x10ee94u: goto label_10ee94;
        case 0x10ee98u: goto label_10ee98;
        case 0x10ee9cu: goto label_10ee9c;
        case 0x10eea0u: goto label_10eea0;
        case 0x10eea4u: goto label_10eea4;
        case 0x10eea8u: goto label_10eea8;
        case 0x10eeacu: goto label_10eeac;
        case 0x10eeb0u: goto label_10eeb0;
        case 0x10eeb4u: goto label_10eeb4;
        case 0x10eeb8u: goto label_10eeb8;
        case 0x10eebcu: goto label_10eebc;
        case 0x10eec0u: goto label_10eec0;
        case 0x10eec4u: goto label_10eec4;
        case 0x10eec8u: goto label_10eec8;
        case 0x10eeccu: goto label_10eecc;
        case 0x10eed0u: goto label_10eed0;
        case 0x10eed4u: goto label_10eed4;
        case 0x10eed8u: goto label_10eed8;
        case 0x10eedcu: goto label_10eedc;
        case 0x10eee0u: goto label_10eee0;
        case 0x10eee4u: goto label_10eee4;
        case 0x10eee8u: goto label_10eee8;
        case 0x10eeecu: goto label_10eeec;
        case 0x10eef0u: goto label_10eef0;
        case 0x10eef4u: goto label_10eef4;
        case 0x10eef8u: goto label_10eef8;
        case 0x10eefcu: goto label_10eefc;
        case 0x10ef00u: goto label_10ef00;
        case 0x10ef04u: goto label_10ef04;
        case 0x10ef08u: goto label_10ef08;
        case 0x10ef0cu: goto label_10ef0c;
        case 0x10ef10u: goto label_10ef10;
        case 0x10ef14u: goto label_10ef14;
        case 0x10ef18u: goto label_10ef18;
        case 0x10ef1cu: goto label_10ef1c;
        case 0x10ef20u: goto label_10ef20;
        case 0x10ef24u: goto label_10ef24;
        case 0x10ef28u: goto label_10ef28;
        case 0x10ef2cu: goto label_10ef2c;
        case 0x10ef30u: goto label_10ef30;
        case 0x10ef34u: goto label_10ef34;
        case 0x10ef38u: goto label_10ef38;
        case 0x10ef3cu: goto label_10ef3c;
        case 0x10ef40u: goto label_10ef40;
        case 0x10ef44u: goto label_10ef44;
        case 0x10ef48u: goto label_10ef48;
        case 0x10ef4cu: goto label_10ef4c;
        case 0x10ef50u: goto label_10ef50;
        case 0x10ef54u: goto label_10ef54;
        case 0x10ef58u: goto label_10ef58;
        case 0x10ef5cu: goto label_10ef5c;
        case 0x10ef60u: goto label_10ef60;
        case 0x10ef64u: goto label_10ef64;
        case 0x10ef68u: goto label_10ef68;
        case 0x10ef6cu: goto label_10ef6c;
        case 0x10ef70u: goto label_10ef70;
        case 0x10ef74u: goto label_10ef74;
        case 0x10ef78u: goto label_10ef78;
        case 0x10ef7cu: goto label_10ef7c;
        case 0x10ef80u: goto label_10ef80;
        case 0x10ef84u: goto label_10ef84;
        case 0x10ef88u: goto label_10ef88;
        case 0x10ef8cu: goto label_10ef8c;
        case 0x10ef90u: goto label_10ef90;
        case 0x10ef94u: goto label_10ef94;
        case 0x10ef98u: goto label_10ef98;
        case 0x10ef9cu: goto label_10ef9c;
        case 0x10efa0u: goto label_10efa0;
        case 0x10efa4u: goto label_10efa4;
        case 0x10efa8u: goto label_10efa8;
        case 0x10efacu: goto label_10efac;
        case 0x10efb0u: goto label_10efb0;
        case 0x10efb4u: goto label_10efb4;
        case 0x10efb8u: goto label_10efb8;
        case 0x10efbcu: goto label_10efbc;
        case 0x10efc0u: goto label_10efc0;
        case 0x10efc4u: goto label_10efc4;
        case 0x10efc8u: goto label_10efc8;
        case 0x10efccu: goto label_10efcc;
        case 0x10efd0u: goto label_10efd0;
        case 0x10efd4u: goto label_10efd4;
        case 0x10efd8u: goto label_10efd8;
        case 0x10efdcu: goto label_10efdc;
        case 0x10efe0u: goto label_10efe0;
        case 0x10efe4u: goto label_10efe4;
        case 0x10efe8u: goto label_10efe8;
        case 0x10efecu: goto label_10efec;
        case 0x10eff0u: goto label_10eff0;
        case 0x10eff4u: goto label_10eff4;
        case 0x10eff8u: goto label_10eff8;
        case 0x10effcu: goto label_10effc;
        case 0x10f000u: goto label_10f000;
        case 0x10f004u: goto label_10f004;
        case 0x10f008u: goto label_10f008;
        case 0x10f00cu: goto label_10f00c;
        case 0x10f010u: goto label_10f010;
        case 0x10f014u: goto label_10f014;
        case 0x10f018u: goto label_10f018;
        case 0x10f01cu: goto label_10f01c;
        case 0x10f020u: goto label_10f020;
        case 0x10f024u: goto label_10f024;
        case 0x10f028u: goto label_10f028;
        case 0x10f02cu: goto label_10f02c;
        case 0x10f030u: goto label_10f030;
        case 0x10f034u: goto label_10f034;
        case 0x10f038u: goto label_10f038;
        case 0x10f03cu: goto label_10f03c;
        case 0x10f040u: goto label_10f040;
        case 0x10f044u: goto label_10f044;
        case 0x10f048u: goto label_10f048;
        case 0x10f04cu: goto label_10f04c;
        case 0x10f050u: goto label_10f050;
        case 0x10f054u: goto label_10f054;
        case 0x10f058u: goto label_10f058;
        case 0x10f05cu: goto label_10f05c;
        case 0x10f060u: goto label_10f060;
        case 0x10f064u: goto label_10f064;
        case 0x10f068u: goto label_10f068;
        case 0x10f06cu: goto label_10f06c;
        case 0x10f070u: goto label_10f070;
        case 0x10f074u: goto label_10f074;
        case 0x10f078u: goto label_10f078;
        case 0x10f07cu: goto label_10f07c;
        case 0x10f080u: goto label_10f080;
        case 0x10f084u: goto label_10f084;
        case 0x10f088u: goto label_10f088;
        case 0x10f08cu: goto label_10f08c;
        case 0x10f090u: goto label_10f090;
        case 0x10f094u: goto label_10f094;
        case 0x10f098u: goto label_10f098;
        case 0x10f09cu: goto label_10f09c;
        case 0x10f0a0u: goto label_10f0a0;
        case 0x10f0a4u: goto label_10f0a4;
        case 0x10f0a8u: goto label_10f0a8;
        case 0x10f0acu: goto label_10f0ac;
        case 0x10f0b0u: goto label_10f0b0;
        case 0x10f0b4u: goto label_10f0b4;
        case 0x10f0b8u: goto label_10f0b8;
        case 0x10f0bcu: goto label_10f0bc;
        case 0x10f0c0u: goto label_10f0c0;
        case 0x10f0c4u: goto label_10f0c4;
        case 0x10f0c8u: goto label_10f0c8;
        case 0x10f0ccu: goto label_10f0cc;
        case 0x10f0d0u: goto label_10f0d0;
        case 0x10f0d4u: goto label_10f0d4;
        case 0x10f0d8u: goto label_10f0d8;
        case 0x10f0dcu: goto label_10f0dc;
        case 0x10f0e0u: goto label_10f0e0;
        case 0x10f0e4u: goto label_10f0e4;
        case 0x10f0e8u: goto label_10f0e8;
        case 0x10f0ecu: goto label_10f0ec;
        case 0x10f0f0u: goto label_10f0f0;
        case 0x10f0f4u: goto label_10f0f4;
        case 0x10f0f8u: goto label_10f0f8;
        case 0x10f0fcu: goto label_10f0fc;
        case 0x10f100u: goto label_10f100;
        case 0x10f104u: goto label_10f104;
        case 0x10f108u: goto label_10f108;
        case 0x10f10cu: goto label_10f10c;
        case 0x10f110u: goto label_10f110;
        case 0x10f114u: goto label_10f114;
        case 0x10f118u: goto label_10f118;
        case 0x10f11cu: goto label_10f11c;
        case 0x10f120u: goto label_10f120;
        case 0x10f124u: goto label_10f124;
        case 0x10f128u: goto label_10f128;
        case 0x10f12cu: goto label_10f12c;
        case 0x10f130u: goto label_10f130;
        case 0x10f134u: goto label_10f134;
        case 0x10f138u: goto label_10f138;
        case 0x10f13cu: goto label_10f13c;
        case 0x10f140u: goto label_10f140;
        case 0x10f144u: goto label_10f144;
        case 0x10f148u: goto label_10f148;
        case 0x10f14cu: goto label_10f14c;
        case 0x10f150u: goto label_10f150;
        case 0x10f154u: goto label_10f154;
        case 0x10f158u: goto label_10f158;
        case 0x10f15cu: goto label_10f15c;
        case 0x10f160u: goto label_10f160;
        case 0x10f164u: goto label_10f164;
        case 0x10f168u: goto label_10f168;
        case 0x10f16cu: goto label_10f16c;
        case 0x10f170u: goto label_10f170;
        case 0x10f174u: goto label_10f174;
        case 0x10f178u: goto label_10f178;
        case 0x10f17cu: goto label_10f17c;
        case 0x10f180u: goto label_10f180;
        case 0x10f184u: goto label_10f184;
        case 0x10f188u: goto label_10f188;
        case 0x10f18cu: goto label_10f18c;
        case 0x10f190u: goto label_10f190;
        case 0x10f194u: goto label_10f194;
        case 0x10f198u: goto label_10f198;
        case 0x10f19cu: goto label_10f19c;
        case 0x10f1a0u: goto label_10f1a0;
        case 0x10f1a4u: goto label_10f1a4;
        case 0x10f1a8u: goto label_10f1a8;
        case 0x10f1acu: goto label_10f1ac;
        case 0x10f1b0u: goto label_10f1b0;
        case 0x10f1b4u: goto label_10f1b4;
        case 0x10f1b8u: goto label_10f1b8;
        case 0x10f1bcu: goto label_10f1bc;
        case 0x10f1c0u: goto label_10f1c0;
        case 0x10f1c4u: goto label_10f1c4;
        case 0x10f1c8u: goto label_10f1c8;
        case 0x10f1ccu: goto label_10f1cc;
        case 0x10f1d0u: goto label_10f1d0;
        case 0x10f1d4u: goto label_10f1d4;
        case 0x10f1d8u: goto label_10f1d8;
        case 0x10f1dcu: goto label_10f1dc;
        case 0x10f1e0u: goto label_10f1e0;
        case 0x10f1e4u: goto label_10f1e4;
        case 0x10f1e8u: goto label_10f1e8;
        case 0x10f1ecu: goto label_10f1ec;
        case 0x10f1f0u: goto label_10f1f0;
        case 0x10f1f4u: goto label_10f1f4;
        case 0x10f1f8u: goto label_10f1f8;
        case 0x10f1fcu: goto label_10f1fc;
        case 0x10f200u: goto label_10f200;
        case 0x10f204u: goto label_10f204;
        case 0x10f208u: goto label_10f208;
        case 0x10f20cu: goto label_10f20c;
        case 0x10f210u: goto label_10f210;
        case 0x10f214u: goto label_10f214;
        case 0x10f218u: goto label_10f218;
        case 0x10f21cu: goto label_10f21c;
        case 0x10f220u: goto label_10f220;
        case 0x10f224u: goto label_10f224;
        case 0x10f228u: goto label_10f228;
        case 0x10f22cu: goto label_10f22c;
        case 0x10f230u: goto label_10f230;
        case 0x10f234u: goto label_10f234;
        case 0x10f238u: goto label_10f238;
        case 0x10f23cu: goto label_10f23c;
        case 0x10f240u: goto label_10f240;
        case 0x10f244u: goto label_10f244;
        case 0x10f248u: goto label_10f248;
        case 0x10f24cu: goto label_10f24c;
        case 0x10f250u: goto label_10f250;
        case 0x10f254u: goto label_10f254;
        case 0x10f258u: goto label_10f258;
        case 0x10f25cu: goto label_10f25c;
        case 0x10f260u: goto label_10f260;
        case 0x10f264u: goto label_10f264;
        case 0x10f268u: goto label_10f268;
        case 0x10f26cu: goto label_10f26c;
        case 0x10f270u: goto label_10f270;
        case 0x10f274u: goto label_10f274;
        case 0x10f278u: goto label_10f278;
        case 0x10f27cu: goto label_10f27c;
        case 0x10f280u: goto label_10f280;
        case 0x10f284u: goto label_10f284;
        case 0x10f288u: goto label_10f288;
        case 0x10f28cu: goto label_10f28c;
        case 0x10f290u: goto label_10f290;
        case 0x10f294u: goto label_10f294;
        case 0x10f298u: goto label_10f298;
        case 0x10f29cu: goto label_10f29c;
        case 0x10f2a0u: goto label_10f2a0;
        case 0x10f2a4u: goto label_10f2a4;
        case 0x10f2a8u: goto label_10f2a8;
        case 0x10f2acu: goto label_10f2ac;
        case 0x10f2b0u: goto label_10f2b0;
        case 0x10f2b4u: goto label_10f2b4;
        case 0x10f2b8u: goto label_10f2b8;
        case 0x10f2bcu: goto label_10f2bc;
        case 0x10f2c0u: goto label_10f2c0;
        case 0x10f2c4u: goto label_10f2c4;
        case 0x10f2c8u: goto label_10f2c8;
        case 0x10f2ccu: goto label_10f2cc;
        case 0x10f2d0u: goto label_10f2d0;
        case 0x10f2d4u: goto label_10f2d4;
        case 0x10f2d8u: goto label_10f2d8;
        case 0x10f2dcu: goto label_10f2dc;
        case 0x10f2e0u: goto label_10f2e0;
        case 0x10f2e4u: goto label_10f2e4;
        case 0x10f2e8u: goto label_10f2e8;
        case 0x10f2ecu: goto label_10f2ec;
        case 0x10f2f0u: goto label_10f2f0;
        case 0x10f2f4u: goto label_10f2f4;
        case 0x10f2f8u: goto label_10f2f8;
        case 0x10f2fcu: goto label_10f2fc;
        case 0x10f300u: goto label_10f300;
        case 0x10f304u: goto label_10f304;
        case 0x10f308u: goto label_10f308;
        case 0x10f30cu: goto label_10f30c;
        case 0x10f310u: goto label_10f310;
        case 0x10f314u: goto label_10f314;
        case 0x10f318u: goto label_10f318;
        case 0x10f31cu: goto label_10f31c;
        case 0x10f320u: goto label_10f320;
        case 0x10f324u: goto label_10f324;
        case 0x10f328u: goto label_10f328;
        case 0x10f32cu: goto label_10f32c;
        case 0x10f330u: goto label_10f330;
        case 0x10f334u: goto label_10f334;
        case 0x10f338u: goto label_10f338;
        case 0x10f33cu: goto label_10f33c;
        case 0x10f340u: goto label_10f340;
        case 0x10f344u: goto label_10f344;
        case 0x10f348u: goto label_10f348;
        case 0x10f34cu: goto label_10f34c;
        case 0x10f350u: goto label_10f350;
        case 0x10f354u: goto label_10f354;
        case 0x10f358u: goto label_10f358;
        case 0x10f35cu: goto label_10f35c;
        case 0x10f360u: goto label_10f360;
        case 0x10f364u: goto label_10f364;
        case 0x10f368u: goto label_10f368;
        case 0x10f36cu: goto label_10f36c;
        case 0x10f370u: goto label_10f370;
        case 0x10f374u: goto label_10f374;
        case 0x10f378u: goto label_10f378;
        case 0x10f37cu: goto label_10f37c;
        case 0x10f380u: goto label_10f380;
        case 0x10f384u: goto label_10f384;
        case 0x10f388u: goto label_10f388;
        case 0x10f38cu: goto label_10f38c;
        case 0x10f390u: goto label_10f390;
        case 0x10f394u: goto label_10f394;
        case 0x10f398u: goto label_10f398;
        case 0x10f39cu: goto label_10f39c;
        case 0x10f3a0u: goto label_10f3a0;
        case 0x10f3a4u: goto label_10f3a4;
        case 0x10f3a8u: goto label_10f3a8;
        case 0x10f3acu: goto label_10f3ac;
        case 0x10f3b0u: goto label_10f3b0;
        case 0x10f3b4u: goto label_10f3b4;
        case 0x10f3b8u: goto label_10f3b8;
        case 0x10f3bcu: goto label_10f3bc;
        case 0x10f3c0u: goto label_10f3c0;
        case 0x10f3c4u: goto label_10f3c4;
        case 0x10f3c8u: goto label_10f3c8;
        case 0x10f3ccu: goto label_10f3cc;
        case 0x10f3d0u: goto label_10f3d0;
        case 0x10f3d4u: goto label_10f3d4;
        case 0x10f3d8u: goto label_10f3d8;
        case 0x10f3dcu: goto label_10f3dc;
        case 0x10f3e0u: goto label_10f3e0;
        case 0x10f3e4u: goto label_10f3e4;
        case 0x10f3e8u: goto label_10f3e8;
        case 0x10f3ecu: goto label_10f3ec;
        case 0x10f3f0u: goto label_10f3f0;
        case 0x10f3f4u: goto label_10f3f4;
        case 0x10f3f8u: goto label_10f3f8;
        case 0x10f3fcu: goto label_10f3fc;
        case 0x10f400u: goto label_10f400;
        case 0x10f404u: goto label_10f404;
        case 0x10f408u: goto label_10f408;
        case 0x10f40cu: goto label_10f40c;
        case 0x10f410u: goto label_10f410;
        case 0x10f414u: goto label_10f414;
        case 0x10f418u: goto label_10f418;
        case 0x10f41cu: goto label_10f41c;
        case 0x10f420u: goto label_10f420;
        case 0x10f424u: goto label_10f424;
        case 0x10f428u: goto label_10f428;
        case 0x10f42cu: goto label_10f42c;
        case 0x10f430u: goto label_10f430;
        case 0x10f434u: goto label_10f434;
        case 0x10f438u: goto label_10f438;
        case 0x10f43cu: goto label_10f43c;
        case 0x10f440u: goto label_10f440;
        case 0x10f444u: goto label_10f444;
        case 0x10f448u: goto label_10f448;
        case 0x10f44cu: goto label_10f44c;
        case 0x10f450u: goto label_10f450;
        case 0x10f454u: goto label_10f454;
        case 0x10f458u: goto label_10f458;
        case 0x10f45cu: goto label_10f45c;
        case 0x10f460u: goto label_10f460;
        case 0x10f464u: goto label_10f464;
        case 0x10f468u: goto label_10f468;
        case 0x10f46cu: goto label_10f46c;
        case 0x10f470u: goto label_10f470;
        case 0x10f474u: goto label_10f474;
        case 0x10f478u: goto label_10f478;
        case 0x10f47cu: goto label_10f47c;
        case 0x10f480u: goto label_10f480;
        case 0x10f484u: goto label_10f484;
        case 0x10f488u: goto label_10f488;
        case 0x10f48cu: goto label_10f48c;
        case 0x10f490u: goto label_10f490;
        case 0x10f494u: goto label_10f494;
        case 0x10f498u: goto label_10f498;
        case 0x10f49cu: goto label_10f49c;
        case 0x10f4a0u: goto label_10f4a0;
        case 0x10f4a4u: goto label_10f4a4;
        case 0x10f4a8u: goto label_10f4a8;
        case 0x10f4acu: goto label_10f4ac;
        case 0x10f4b0u: goto label_10f4b0;
        case 0x10f4b4u: goto label_10f4b4;
        case 0x10f4b8u: goto label_10f4b8;
        case 0x10f4bcu: goto label_10f4bc;
        case 0x10f4c0u: goto label_10f4c0;
        case 0x10f4c4u: goto label_10f4c4;
        case 0x10f4c8u: goto label_10f4c8;
        case 0x10f4ccu: goto label_10f4cc;
        case 0x10f4d0u: goto label_10f4d0;
        case 0x10f4d4u: goto label_10f4d4;
        case 0x10f4d8u: goto label_10f4d8;
        case 0x10f4dcu: goto label_10f4dc;
        case 0x10f4e0u: goto label_10f4e0;
        case 0x10f4e4u: goto label_10f4e4;
        case 0x10f4e8u: goto label_10f4e8;
        case 0x10f4ecu: goto label_10f4ec;
        case 0x10f4f0u: goto label_10f4f0;
        case 0x10f4f4u: goto label_10f4f4;
        case 0x10f4f8u: goto label_10f4f8;
        case 0x10f4fcu: goto label_10f4fc;
        case 0x10f500u: goto label_10f500;
        case 0x10f504u: goto label_10f504;
        case 0x10f508u: goto label_10f508;
        case 0x10f50cu: goto label_10f50c;
        case 0x10f510u: goto label_10f510;
        case 0x10f514u: goto label_10f514;
        case 0x10f518u: goto label_10f518;
        case 0x10f51cu: goto label_10f51c;
        case 0x10f520u: goto label_10f520;
        case 0x10f524u: goto label_10f524;
        case 0x10f528u: goto label_10f528;
        case 0x10f52cu: goto label_10f52c;
        case 0x10f530u: goto label_10f530;
        case 0x10f534u: goto label_10f534;
        case 0x10f538u: goto label_10f538;
        case 0x10f53cu: goto label_10f53c;
        case 0x10f540u: goto label_10f540;
        case 0x10f544u: goto label_10f544;
        case 0x10f548u: goto label_10f548;
        case 0x10f54cu: goto label_10f54c;
        case 0x10f550u: goto label_10f550;
        case 0x10f554u: goto label_10f554;
        case 0x10f558u: goto label_10f558;
        case 0x10f55cu: goto label_10f55c;
        case 0x10f560u: goto label_10f560;
        case 0x10f564u: goto label_10f564;
        case 0x10f568u: goto label_10f568;
        case 0x10f56cu: goto label_10f56c;
        case 0x10f570u: goto label_10f570;
        case 0x10f574u: goto label_10f574;
        case 0x10f578u: goto label_10f578;
        case 0x10f57cu: goto label_10f57c;
        case 0x10f580u: goto label_10f580;
        case 0x10f584u: goto label_10f584;
        case 0x10f588u: goto label_10f588;
        case 0x10f58cu: goto label_10f58c;
        case 0x10f590u: goto label_10f590;
        case 0x10f594u: goto label_10f594;
        case 0x10f598u: goto label_10f598;
        case 0x10f59cu: goto label_10f59c;
        case 0x10f5a0u: goto label_10f5a0;
        case 0x10f5a4u: goto label_10f5a4;
        case 0x10f5a8u: goto label_10f5a8;
        case 0x10f5acu: goto label_10f5ac;
        case 0x10f5b0u: goto label_10f5b0;
        case 0x10f5b4u: goto label_10f5b4;
        case 0x10f5b8u: goto label_10f5b8;
        case 0x10f5bcu: goto label_10f5bc;
        case 0x10f5c0u: goto label_10f5c0;
        case 0x10f5c4u: goto label_10f5c4;
        case 0x10f5c8u: goto label_10f5c8;
        case 0x10f5ccu: goto label_10f5cc;
        case 0x10f5d0u: goto label_10f5d0;
        case 0x10f5d4u: goto label_10f5d4;
        case 0x10f5d8u: goto label_10f5d8;
        case 0x10f5dcu: goto label_10f5dc;
        case 0x10f5e0u: goto label_10f5e0;
        case 0x10f5e4u: goto label_10f5e4;
        case 0x10f5e8u: goto label_10f5e8;
        case 0x10f5ecu: goto label_10f5ec;
        case 0x10f5f0u: goto label_10f5f0;
        case 0x10f5f4u: goto label_10f5f4;
        case 0x10f5f8u: goto label_10f5f8;
        case 0x10f5fcu: goto label_10f5fc;
        case 0x10f600u: goto label_10f600;
        case 0x10f604u: goto label_10f604;
        case 0x10f608u: goto label_10f608;
        case 0x10f60cu: goto label_10f60c;
        case 0x10f610u: goto label_10f610;
        case 0x10f614u: goto label_10f614;
        case 0x10f618u: goto label_10f618;
        case 0x10f61cu: goto label_10f61c;
        case 0x10f620u: goto label_10f620;
        case 0x10f624u: goto label_10f624;
        case 0x10f628u: goto label_10f628;
        case 0x10f62cu: goto label_10f62c;
        case 0x10f630u: goto label_10f630;
        case 0x10f634u: goto label_10f634;
        case 0x10f638u: goto label_10f638;
        case 0x10f63cu: goto label_10f63c;
        case 0x10f640u: goto label_10f640;
        case 0x10f644u: goto label_10f644;
        case 0x10f648u: goto label_10f648;
        case 0x10f64cu: goto label_10f64c;
        case 0x10f650u: goto label_10f650;
        case 0x10f654u: goto label_10f654;
        case 0x10f658u: goto label_10f658;
        case 0x10f65cu: goto label_10f65c;
        case 0x10f660u: goto label_10f660;
        case 0x10f664u: goto label_10f664;
        case 0x10f668u: goto label_10f668;
        case 0x10f66cu: goto label_10f66c;
        case 0x10f670u: goto label_10f670;
        case 0x10f674u: goto label_10f674;
        case 0x10f678u: goto label_10f678;
        case 0x10f67cu: goto label_10f67c;
        case 0x10f680u: goto label_10f680;
        case 0x10f684u: goto label_10f684;
        case 0x10f688u: goto label_10f688;
        case 0x10f68cu: goto label_10f68c;
        case 0x10f690u: goto label_10f690;
        case 0x10f694u: goto label_10f694;
        case 0x10f698u: goto label_10f698;
        case 0x10f69cu: goto label_10f69c;
        case 0x10f6a0u: goto label_10f6a0;
        case 0x10f6a4u: goto label_10f6a4;
        case 0x10f6a8u: goto label_10f6a8;
        case 0x10f6acu: goto label_10f6ac;
        case 0x10f6b0u: goto label_10f6b0;
        case 0x10f6b4u: goto label_10f6b4;
        case 0x10f6b8u: goto label_10f6b8;
        case 0x10f6bcu: goto label_10f6bc;
        case 0x10f6c0u: goto label_10f6c0;
        case 0x10f6c4u: goto label_10f6c4;
        case 0x10f6c8u: goto label_10f6c8;
        case 0x10f6ccu: goto label_10f6cc;
        case 0x10f6d0u: goto label_10f6d0;
        case 0x10f6d4u: goto label_10f6d4;
        case 0x10f6d8u: goto label_10f6d8;
        case 0x10f6dcu: goto label_10f6dc;
        case 0x10f6e0u: goto label_10f6e0;
        case 0x10f6e4u: goto label_10f6e4;
        case 0x10f6e8u: goto label_10f6e8;
        case 0x10f6ecu: goto label_10f6ec;
        case 0x10f6f0u: goto label_10f6f0;
        case 0x10f6f4u: goto label_10f6f4;
        case 0x10f6f8u: goto label_10f6f8;
        case 0x10f6fcu: goto label_10f6fc;
        case 0x10f700u: goto label_10f700;
        case 0x10f704u: goto label_10f704;
        case 0x10f708u: goto label_10f708;
        case 0x10f70cu: goto label_10f70c;
        case 0x10f710u: goto label_10f710;
        case 0x10f714u: goto label_10f714;
        case 0x10f718u: goto label_10f718;
        case 0x10f71cu: goto label_10f71c;
        case 0x10f720u: goto label_10f720;
        case 0x10f724u: goto label_10f724;
        case 0x10f728u: goto label_10f728;
        case 0x10f72cu: goto label_10f72c;
        case 0x10f730u: goto label_10f730;
        case 0x10f734u: goto label_10f734;
        case 0x10f738u: goto label_10f738;
        case 0x10f73cu: goto label_10f73c;
        case 0x10f740u: goto label_10f740;
        case 0x10f744u: goto label_10f744;
        case 0x10f748u: goto label_10f748;
        case 0x10f74cu: goto label_10f74c;
        case 0x10f750u: goto label_10f750;
        case 0x10f754u: goto label_10f754;
        case 0x10f758u: goto label_10f758;
        case 0x10f75cu: goto label_10f75c;
        case 0x10f760u: goto label_10f760;
        case 0x10f764u: goto label_10f764;
        case 0x10f768u: goto label_10f768;
        case 0x10f76cu: goto label_10f76c;
        case 0x10f770u: goto label_10f770;
        case 0x10f774u: goto label_10f774;
        case 0x10f778u: goto label_10f778;
        case 0x10f77cu: goto label_10f77c;
        case 0x10f780u: goto label_10f780;
        case 0x10f784u: goto label_10f784;
        case 0x10f788u: goto label_10f788;
        case 0x10f78cu: goto label_10f78c;
        case 0x10f790u: goto label_10f790;
        case 0x10f794u: goto label_10f794;
        case 0x10f798u: goto label_10f798;
        case 0x10f79cu: goto label_10f79c;
        case 0x10f7a0u: goto label_10f7a0;
        case 0x10f7a4u: goto label_10f7a4;
        case 0x10f7a8u: goto label_10f7a8;
        case 0x10f7acu: goto label_10f7ac;
        case 0x10f7b0u: goto label_10f7b0;
        case 0x10f7b4u: goto label_10f7b4;
        case 0x10f7b8u: goto label_10f7b8;
        case 0x10f7bcu: goto label_10f7bc;
        case 0x10f7c0u: goto label_10f7c0;
        case 0x10f7c4u: goto label_10f7c4;
        case 0x10f7c8u: goto label_10f7c8;
        case 0x10f7ccu: goto label_10f7cc;
        case 0x10f7d0u: goto label_10f7d0;
        case 0x10f7d4u: goto label_10f7d4;
        case 0x10f7d8u: goto label_10f7d8;
        case 0x10f7dcu: goto label_10f7dc;
        case 0x10f7e0u: goto label_10f7e0;
        case 0x10f7e4u: goto label_10f7e4;
        case 0x10f7e8u: goto label_10f7e8;
        case 0x10f7ecu: goto label_10f7ec;
        case 0x10f7f0u: goto label_10f7f0;
        case 0x10f7f4u: goto label_10f7f4;
        case 0x10f7f8u: goto label_10f7f8;
        case 0x10f7fcu: goto label_10f7fc;
        case 0x10f800u: goto label_10f800;
        case 0x10f804u: goto label_10f804;
        default: break;
    }

    ctx->pc = 0x10ea48u;

label_10ea48:
    // 0x10ea48: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_10ea4c:
    // 0x10ea4c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x10ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_10ea50:
    // 0x10ea50: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x10ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_10ea54:
    // 0x10ea54: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x10ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_10ea58:
    // 0x10ea58: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x10ea58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10ea5c:
    // 0x10ea5c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_10ea60:
    // 0x10ea60: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x10ea60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10ea64:
    // 0x10ea64: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x10ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_10ea68:
    // 0x10ea68: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x10ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_10ea6c:
    // 0x10ea6c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x10ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_10ea70:
    // 0x10ea70: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x10ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_10ea74:
    // 0x10ea74: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x10ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_10ea78:
    // 0x10ea78: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x10ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_10ea7c:
    // 0x10ea7c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x10ea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_10ea80:
    // 0x10ea80: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_10ea84:
    // 0x10ea84: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x10ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_10ea88:
    // 0x10ea88: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x10ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_10ea8c:
    // 0x10ea8c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10ea8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10ea90:
    // 0x10ea90: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x10ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_10ea94:
    // 0x10ea94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10ea94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10ea98:
    // 0x10ea98: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_10ea9c:
    if (ctx->pc == 0x10EA9Cu) {
        ctx->pc = 0x10EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA98u;
        // 0x10ea9c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAA0u;
        goto label_10eaa0;
    }
    ctx->pc = 0x10EA98u;
    {
        const bool branch_taken_0x10ea98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA98u;
        // 0x10ea9c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea98) {
            ctx->pc = 0x10F70Cu;
            goto label_10f70c;
        }
    }
    ctx->pc = 0x10EAA0u;
label_10eaa0:
    // 0x10eaa0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10eaa4:
    // 0x10eaa4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x10eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_10eaa8:
    // 0x10eaa8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10eaac:
    // 0x10eaac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x10eaacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eab0:
    // 0x10eab0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x10eab0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_10eab4:
    // 0x10eab4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x10eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_10eab8:
    // 0x10eab8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10eab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eabc:
    // 0x10eabc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_10eac0:
    // 0x10eac0: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_10eac4:
    if (ctx->pc == 0x10EAC4u) {
        ctx->pc = 0x10EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAC0u;
        // 0x10eac4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAC8u;
        goto label_10eac8;
    }
    ctx->pc = 0x10EAC0u;
    {
        const bool branch_taken_0x10eac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAC0u;
        // 0x10eac4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eac0) {
            ctx->pc = 0x10F6C4u;
            goto label_10f6c4;
        }
    }
    ctx->pc = 0x10EAC8u;
label_10eac8:
    // 0x10eac8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10eacc:
    // 0x10eacc: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10eaccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10ead0:
    // 0x10ead0: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x10ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_10ead4:
    // 0x10ead4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10ead8:
    // 0x10ead8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x10ead8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_10eadc:
    // 0x10eadc: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x10eadcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_10eae0:
    // 0x10eae0: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_10eae4:
    if (ctx->pc == 0x10EAE4u) {
        ctx->pc = 0x10EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAE0u;
        // 0x10eae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAE8u;
        goto label_10eae8;
    }
    ctx->pc = 0x10EAE0u;
    {
        const bool branch_taken_0x10eae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAE0u;
        // 0x10eae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eae0) {
            ctx->pc = 0x10F214u;
            goto label_10f214;
        }
    }
    ctx->pc = 0x10EAE8u;
label_10eae8:
    // 0x10eae8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_10eaec:
    // 0x10eaec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10eaf0:
    // 0x10eaf0: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
label_10eaf4:
    // 0x10eaf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10eaf8:
    // 0x10eaf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10eafc:
    // 0x10eafc: 0x800008  jr          $a0
label_10eb00:
    if (ctx->pc == 0x10EB00u) {
        ctx->pc = 0x10EB04u;
        goto label_10eb04;
    }
    ctx->pc = 0x10EAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EB04u: goto label_10eb04;
            case 0x10EB0Cu: goto label_10eb0c;
            case 0x10EB14u: goto label_10eb14;
            case 0x10EB1Cu: goto label_10eb1c;
            case 0x10EB64u: goto label_10eb64;
            case 0x10EBECu: goto label_10ebec;
            case 0x10EBF4u: goto label_10ebf4;
            case 0x10EBFCu: goto label_10ebfc;
            case 0x10EC04u: goto label_10ec04;
            case 0x10EC0Cu: goto label_10ec0c;
            case 0x10ECC0u: goto label_10ecc0;
            case 0x10ECECu: goto label_10ecec;
            case 0x10EDACu: goto label_10edac;
            case 0x10EEC4u: goto label_10eec4;
            case 0x10EF88u: goto label_10ef88;
            case 0x10EFECu: goto label_10efec;
            case 0x10F130u: goto label_10f130;
            case 0x10F168u: goto label_10f168;
            case 0x10F214u: goto label_10f214;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10EB04u;
label_10eb04:
    // 0x10eb04: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_10eb08:
    if (ctx->pc == 0x10EB08u) {
        ctx->pc = 0x10EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB04u;
        // 0x10eb08: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB0Cu;
        goto label_10eb0c;
    }
    ctx->pc = 0x10EB04u;
    {
        const bool branch_taken_0x10eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB04u;
        // 0x10eb08: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb04) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EB0Cu;
label_10eb0c:
    // 0x10eb0c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_10eb10:
    if (ctx->pc == 0x10EB10u) {
        ctx->pc = 0x10EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB0Cu;
        // 0x10eb10: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB14u;
        goto label_10eb14;
    }
    ctx->pc = 0x10EB0Cu;
    {
        const bool branch_taken_0x10eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB0Cu;
        // 0x10eb10: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb0c) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EB14u;
label_10eb14:
    // 0x10eb14: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_10eb18:
    if (ctx->pc == 0x10EB18u) {
        ctx->pc = 0x10EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB14u;
        // 0x10eb18: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB1Cu;
        goto label_10eb1c;
    }
    ctx->pc = 0x10EB14u;
    {
        const bool branch_taken_0x10eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB14u;
        // 0x10eb18: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb14) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EB1Cu;
label_10eb1c:
    // 0x10eb1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10eb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eb20:
    // 0x10eb20: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10eb24:
    // 0x10eb24: 0x0  nop
    ctx->pc = 0x10eb24u;
    // NOP
label_10eb28:
    // 0x10eb28: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x10eb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10eb2c:
    // 0x10eb2c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x10eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10eb30:
    // 0x10eb30: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10eb30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10eb34:
    // 0x10eb34: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10eb34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_10eb38:
    // 0x10eb38: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10eb38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10eb3c:
    // 0x10eb3c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x10eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_10eb40:
    // 0x10eb40: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10eb44:
    // 0x10eb44: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10eb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10eb48:
    // 0x10eb48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_10eb4c:
    if (ctx->pc == 0x10EB4Cu) {
        ctx->pc = 0x10EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB48u;
        // 0x10eb4c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB50u;
        goto label_10eb50;
    }
    ctx->pc = 0x10EB48u;
    {
        const bool branch_taken_0x10eb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB48u;
        // 0x10eb4c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb48) {
            ctx->pc = 0x10EB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eb28;
        }
    }
    ctx->pc = 0x10EB50u;
label_10eb50:
    // 0x10eb50: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x10eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_10eb54:
    // 0x10eb54: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_10eb58:
    if (ctx->pc == 0x10EB58u) {
        ctx->pc = 0x10EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB54u;
        // 0x10eb58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB5Cu;
        goto label_10eb5c;
    }
    ctx->pc = 0x10EB54u;
    {
        const bool branch_taken_0x10eb54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB54u;
        // 0x10eb58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb54) {
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10EB5Cu;
label_10eb5c:
    // 0x10eb5c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_10eb60:
    if (ctx->pc == 0x10EB60u) {
        ctx->pc = 0x10EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB5Cu;
        // 0x10eb60: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB64u;
        goto label_10eb64;
    }
    ctx->pc = 0x10EB5Cu;
    {
        const bool branch_taken_0x10eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB5Cu;
        // 0x10eb60: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb5c) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EB64u;
label_10eb64:
    // 0x10eb64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10eb64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10eb68:
    // 0x10eb68: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x10eb68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_10eb6c:
    // 0x10eb6c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x10eb6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10eb70:
    // 0x10eb70: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x10eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_10eb74:
    // 0x10eb74: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_10eb78:
    if (ctx->pc == 0x10EB78u) {
        ctx->pc = 0x10EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB74u;
        // 0x10eb78: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB7Cu;
        goto label_10eb7c;
    }
    ctx->pc = 0x10EB74u;
    {
        const bool branch_taken_0x10eb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB74u;
        // 0x10eb78: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb74) {
            ctx->pc = 0x10EB98u;
            goto label_10eb98;
        }
    }
    ctx->pc = 0x10EB7Cu;
label_10eb7c:
    // 0x10eb7c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10eb7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10eb80:
    // 0x10eb80: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10eb84:
    // 0x10eb84: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x10eb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10eb88:
    // 0x10eb88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10eb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10eb8c:
    // 0x10eb8c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10eb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10eb90:
    // 0x10eb90: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_10eb94:
    if (ctx->pc == 0x10EB94u) {
        ctx->pc = 0x10EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB90u;
        // 0x10eb94: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB98u;
        goto label_10eb98;
    }
    ctx->pc = 0x10EB90u;
    {
        const bool branch_taken_0x10eb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB90u;
        // 0x10eb94: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb90) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EB98u;
label_10eb98:
    // 0x10eb98: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10eb9c:
    // 0x10eb9c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10eb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10eba0:
    // 0x10eba0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10eba4:
    if (ctx->pc == 0x10EBA4u) {
        ctx->pc = 0x10EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBA0u;
        // 0x10eba4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBA8u;
        goto label_10eba8;
    }
    ctx->pc = 0x10EBA0u;
    {
        const bool branch_taken_0x10eba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBA0u;
        // 0x10eba4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eba0) {
            ctx->pc = 0x10EBD8u;
            goto label_10ebd8;
        }
    }
    ctx->pc = 0x10EBA8u;
label_10eba8:
    // 0x10eba8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ebac:
    // 0x10ebac: 0x0  nop
    ctx->pc = 0x10ebacu;
    // NOP
label_10ebb0:
    // 0x10ebb0: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x10ebb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10ebb4:
    // 0x10ebb4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x10ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10ebb8:
    // 0x10ebb8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ebbc:
    // 0x10ebbc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10ebbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_10ebc0:
    // 0x10ebc0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10ebc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10ebc4:
    // 0x10ebc4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x10ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_10ebc8:
    // 0x10ebc8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10ebcc:
    // 0x10ebcc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10ebccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10ebd0:
    // 0x10ebd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_10ebd4:
    if (ctx->pc == 0x10EBD4u) {
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBD0u;
        // 0x10ebd4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBD8u;
        goto label_10ebd8;
    }
    ctx->pc = 0x10EBD0u;
    {
        const bool branch_taken_0x10ebd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBD0u;
        // 0x10ebd4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebd0) {
            ctx->pc = 0x10EBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ebb0;
        }
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10ebdc:
    // 0x10ebdc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10ebdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ebe0:
    // 0x10ebe0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10ebe4:
    // 0x10ebe4: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_10ebe8:
    if (ctx->pc == 0x10EBE8u) {
        ctx->pc = 0x10EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBE4u;
        // 0x10ebe8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBECu;
        goto label_10ebec;
    }
    ctx->pc = 0x10EBE4u;
    {
        const bool branch_taken_0x10ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBE4u;
        // 0x10ebe8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebe4) {
            ctx->pc = 0x10EB54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eb54;
        }
    }
    ctx->pc = 0x10EBECu;
label_10ebec:
    // 0x10ebec: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_10ebf0:
    if (ctx->pc == 0x10EBF0u) {
        ctx->pc = 0x10EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBECu;
        // 0x10ebf0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBF4u;
        goto label_10ebf4;
    }
    ctx->pc = 0x10EBECu;
    {
        const bool branch_taken_0x10ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBECu;
        // 0x10ebf0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebec) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EBF4u;
label_10ebf4:
    // 0x10ebf4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_10ebf8:
    if (ctx->pc == 0x10EBF8u) {
        ctx->pc = 0x10EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF4u;
        // 0x10ebf8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBFCu;
        goto label_10ebfc;
    }
    ctx->pc = 0x10EBF4u;
    {
        const bool branch_taken_0x10ebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF4u;
        // 0x10ebf8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebf4) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EBFCu;
label_10ebfc:
    // 0x10ebfc: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_10ec00:
    if (ctx->pc == 0x10EC00u) {
        ctx->pc = 0x10EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBFCu;
        // 0x10ec00: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC04u;
        goto label_10ec04;
    }
    ctx->pc = 0x10EBFCu;
    {
        const bool branch_taken_0x10ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBFCu;
        // 0x10ec00: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebfc) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EC04u;
label_10ec04:
    // 0x10ec04: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_10ec08:
    if (ctx->pc == 0x10EC08u) {
        ctx->pc = 0x10EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC04u;
        // 0x10ec08: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC0Cu;
        goto label_10ec0c;
    }
    ctx->pc = 0x10EC04u;
    {
        const bool branch_taken_0x10ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC04u;
        // 0x10ec08: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec04) {
            ctx->pc = 0x10EAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EC0Cu;
label_10ec0c:
    // 0x10ec0c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10ec10:
    // 0x10ec10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ec14:
    if (ctx->pc == 0x10EC14u) {
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC10u;
        // 0x10ec14: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC18u;
        goto label_10ec18;
    }
    ctx->pc = 0x10EC10u;
    {
        const bool branch_taken_0x10ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC10u;
        // 0x10ec14: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec10) {
            ctx->pc = 0x10EC24u;
            goto label_10ec24;
        }
    }
    ctx->pc = 0x10EC18u;
label_10ec18:
    // 0x10ec18: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10ec18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10ec1c:
    // 0x10ec1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_10ec20:
    if (ctx->pc == 0x10EC20u) {
        ctx->pc = 0x10EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC1Cu;
        // 0x10ec20: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC24u;
        goto label_10ec24;
    }
    ctx->pc = 0x10EC1Cu;
    {
        const bool branch_taken_0x10ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC1Cu;
        // 0x10ec20: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec1c) {
            ctx->pc = 0x10EC38u;
            goto label_10ec38;
        }
    }
    ctx->pc = 0x10EC24u;
label_10ec24:
    // 0x10ec24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ec28:
    if (ctx->pc == 0x10EC28u) {
        ctx->pc = 0x10EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC24u;
        // 0x10ec28: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC2Cu;
        goto label_10ec2c;
    }
    ctx->pc = 0x10EC24u;
    {
        const bool branch_taken_0x10ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC24u;
        // 0x10ec28: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec24) {
            ctx->pc = 0x10EC34u;
            goto label_10ec34;
        }
    }
    ctx->pc = 0x10EC2Cu;
label_10ec2c:
    // 0x10ec2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10ec30:
    if (ctx->pc == 0x10EC30u) {
        ctx->pc = 0x10EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC2Cu;
        // 0x10ec30: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC34u;
        goto label_10ec34;
    }
    ctx->pc = 0x10EC2Cu;
    {
        const bool branch_taken_0x10ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC2Cu;
        // 0x10ec30: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec2c) {
            ctx->pc = 0x10EC38u;
            goto label_10ec38;
        }
    }
    ctx->pc = 0x10EC34u;
label_10ec34:
    // 0x10ec34: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10ec34u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10ec38:
    // 0x10ec38: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10ec3c:
    if (ctx->pc == 0x10EC3Cu) {
        ctx->pc = 0x10EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC38u;
        // 0x10ec3c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC40u;
        goto label_10ec40;
    }
    ctx->pc = 0x10EC38u;
    {
        const bool branch_taken_0x10ec38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC38u;
        // 0x10ec3c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec38) {
            ctx->pc = 0x10EC68u;
            goto label_10ec68;
        }
    }
    ctx->pc = 0x10EC40u;
label_10ec40:
    // 0x10ec40: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10ec44:
    // 0x10ec44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ec48:
    if (ctx->pc == 0x10EC48u) {
        ctx->pc = 0x10EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC44u;
        // 0x10ec48: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC4Cu;
        goto label_10ec4c;
    }
    ctx->pc = 0x10EC44u;
    {
        const bool branch_taken_0x10ec44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC44u;
        // 0x10ec48: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec44) {
            ctx->pc = 0x10EC54u;
            goto label_10ec54;
        }
    }
    ctx->pc = 0x10EC4Cu;
label_10ec4c:
    // 0x10ec4c: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_10ec50:
    if (ctx->pc == 0x10EC50u) {
        ctx->pc = 0x10EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC4Cu;
        // 0x10ec50: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC54u;
        goto label_10ec54;
    }
    ctx->pc = 0x10EC4Cu;
    {
        const bool branch_taken_0x10ec4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC4Cu;
        // 0x10ec50: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec4c) {
            ctx->pc = 0x10ECACu;
            goto label_10ecac;
        }
    }
    ctx->pc = 0x10EC54u;
label_10ec54:
    // 0x10ec54: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ec54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ec58:
    // 0x10ec58: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10ec58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10ec5c:
    // 0x10ec5c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ec5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ec60:
    // 0x10ec60: 0x10000013  b           . + 4 + (0x13 << 2)
label_10ec64:
    if (ctx->pc == 0x10EC64u) {
        ctx->pc = 0x10EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC60u;
        // 0x10ec64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC68u;
        goto label_10ec68;
    }
    ctx->pc = 0x10EC60u;
    {
        const bool branch_taken_0x10ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC60u;
        // 0x10ec64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec60) {
            ctx->pc = 0x10ECB0u;
            goto label_10ecb0;
        }
    }
    ctx->pc = 0x10EC68u;
label_10ec68:
    // 0x10ec68: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ec6c:
    // 0x10ec6c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10ec70:
    // 0x10ec70: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ec70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ec74:
    // 0x10ec74: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10ec74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10ec78:
    // 0x10ec78: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x10ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_10ec7c:
    // 0x10ec7c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10ec7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_10ec80:
    // 0x10ec80: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x10ec80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_10ec84:
    // 0x10ec84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10ec88:
    // 0x10ec88: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10ec88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10ec8c:
    // 0x10ec8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10ec90:
    // 0x10ec90: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_10ec94:
    if (ctx->pc == 0x10EC94u) {
        ctx->pc = 0x10EC98u;
        goto label_10ec98;
    }
    ctx->pc = 0x10EC90u;
    {
        const bool branch_taken_0x10ec90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ec90) {
            ctx->pc = 0x10EC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ec78;
        }
    }
    ctx->pc = 0x10EC98u;
label_10ec98:
    // 0x10ec98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10ec9c:
    if (ctx->pc == 0x10EC9Cu) {
        ctx->pc = 0x10EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC98u;
        // 0x10ec9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECA0u;
        goto label_10eca0;
    }
    ctx->pc = 0x10EC98u;
    {
        const bool branch_taken_0x10ec98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC98u;
        // 0x10ec9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec98) {
            ctx->pc = 0x10ECB4u;
            goto label_10ecb4;
        }
    }
    ctx->pc = 0x10ECA0u;
label_10eca0:
    // 0x10eca0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10eca4:
    // 0x10eca4: 0x10000003  b           . + 4 + (0x3 << 2)
label_10eca8:
    if (ctx->pc == 0x10ECA8u) {
        ctx->pc = 0x10ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECA4u;
        // 0x10eca8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECACu;
        goto label_10ecac;
    }
    ctx->pc = 0x10ECA4u;
    {
        const bool branch_taken_0x10eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECA4u;
        // 0x10eca8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eca4) {
            ctx->pc = 0x10ECB4u;
            goto label_10ecb4;
        }
    }
    ctx->pc = 0x10ECACu;
label_10ecac:
    // 0x10ecac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ecacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ecb0:
    // 0x10ecb0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10ecb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10ecb4:
    // 0x10ecb4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10ecb8:
    // 0x10ecb8: 0x10000162  b           . + 4 + (0x162 << 2)
label_10ecbc:
    if (ctx->pc == 0x10ECBCu) {
        ctx->pc = 0x10ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECB8u;
        // 0x10ecbc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECC0u;
        goto label_10ecc0;
    }
    ctx->pc = 0x10ECB8u;
    {
        const bool branch_taken_0x10ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECB8u;
        // 0x10ecbc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecb8) {
            ctx->pc = 0x10F244u;
            goto label_10f244;
        }
    }
    ctx->pc = 0x10ECC0u;
label_10ecc0:
    // 0x10ecc0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_10ecc4:
    // 0x10ecc4: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10ecc8:
    // 0x10ecc8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_10eccc:
    if (ctx->pc == 0x10ECCCu) {
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x2444a5e0  addiu       $a0, $v0, -0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECD0u;
        goto label_10ecd0;
    }
    ctx->pc = 0x10ECC8u;
    {
        const bool branch_taken_0x10ecc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x2444a5e0  addiu       $a0, $v0, -0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecc8) {
            ctx->pc = 0x10ED14u;
            goto label_10ed14;
        }
    }
    ctx->pc = 0x10ECD0u;
label_10ecd0:
    // 0x10ecd0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ecd4:
    // 0x10ecd4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_10ecd8:
    // 0x10ecd8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10ecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10ecdc:
    // 0x10ecdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ece0:
    // 0x10ece0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x10ece0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_10ece4:
    // 0x10ece4: 0x1000000b  b           . + 4 + (0xB << 2)
label_10ece8:
    if (ctx->pc == 0x10ECE8u) {
        ctx->pc = 0x10ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECE4u;
        // 0x10ece8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECECu;
        goto label_10ecec;
    }
    ctx->pc = 0x10ECE4u;
    {
        const bool branch_taken_0x10ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECE4u;
        // 0x10ece8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ece4) {
            ctx->pc = 0x10ED14u;
            goto label_10ed14;
        }
    }
    ctx->pc = 0x10ECECu;
label_10ecec:
    // 0x10ecec: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x10ececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_10ecf0:
    // 0x10ecf0: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10ecf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10ecf4:
    // 0x10ecf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_10ecf8:
    if (ctx->pc == 0x10ECF8u) {
        ctx->pc = 0x10ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECF4u;
        // 0x10ecf8: 0x2444a5f8  addiu       $a0, $v0, -0x5A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECFCu;
        goto label_10ecfc;
    }
    ctx->pc = 0x10ECF4u;
    {
        const bool branch_taken_0x10ecf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECF4u;
        // 0x10ecf8: 0x2444a5f8  addiu       $a0, $v0, -0x5A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecf4) {
            ctx->pc = 0x10ED14u;
            goto label_10ed14;
        }
    }
    ctx->pc = 0x10ECFCu;
label_10ecfc:
    // 0x10ecfc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ed00:
    // 0x10ed00: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x10ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_10ed04:
    // 0x10ed04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ed08:
    // 0x10ed08: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10ed08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10ed0c:
    // 0x10ed0c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x10ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_10ed10:
    // 0x10ed10: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x10ed10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_10ed14:
    // 0x10ed14: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10ed14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10ed18:
    // 0x10ed18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ed1c:
    if (ctx->pc == 0x10ED1Cu) {
        ctx->pc = 0x10ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED18u;
        // 0x10ed1c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED20u;
        goto label_10ed20;
    }
    ctx->pc = 0x10ED18u;
    {
        const bool branch_taken_0x10ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED18u;
        // 0x10ed1c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed18) {
            ctx->pc = 0x10ED2Cu;
            goto label_10ed2c;
        }
    }
    ctx->pc = 0x10ED20u;
label_10ed20:
    // 0x10ed20: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10ed24:
    // 0x10ed24: 0x10000006  b           . + 4 + (0x6 << 2)
label_10ed28:
    if (ctx->pc == 0x10ED28u) {
        ctx->pc = 0x10ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED24u;
        // 0x10ed28: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED2Cu;
        goto label_10ed2c;
    }
    ctx->pc = 0x10ED24u;
    {
        const bool branch_taken_0x10ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED24u;
        // 0x10ed28: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed24) {
            ctx->pc = 0x10ED40u;
            goto label_10ed40;
        }
    }
    ctx->pc = 0x10ED2Cu;
label_10ed2c:
    // 0x10ed2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ed30:
    if (ctx->pc == 0x10ED30u) {
        ctx->pc = 0x10ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED2Cu;
        // 0x10ed30: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED34u;
        goto label_10ed34;
    }
    ctx->pc = 0x10ED2Cu;
    {
        const bool branch_taken_0x10ed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED2Cu;
        // 0x10ed30: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed2c) {
            ctx->pc = 0x10ED3Cu;
            goto label_10ed3c;
        }
    }
    ctx->pc = 0x10ED34u;
label_10ed34:
    // 0x10ed34: 0x10000002  b           . + 4 + (0x2 << 2)
label_10ed38:
    if (ctx->pc == 0x10ED38u) {
        ctx->pc = 0x10ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED34u;
        // 0x10ed38: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED3Cu;
        goto label_10ed3c;
    }
    ctx->pc = 0x10ED34u;
    {
        const bool branch_taken_0x10ed34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED34u;
        // 0x10ed38: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed34) {
            ctx->pc = 0x10ED40u;
            goto label_10ed40;
        }
    }
    ctx->pc = 0x10ED3Cu;
label_10ed3c:
    // 0x10ed3c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10ed3cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10ed40:
    // 0x10ed40: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_10ed44:
    if (ctx->pc == 0x10ED44u) {
        ctx->pc = 0x10ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED40u;
        // 0x10ed44: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED48u;
        goto label_10ed48;
    }
    ctx->pc = 0x10ED40u;
    {
        const bool branch_taken_0x10ed40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED40u;
        // 0x10ed44: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed40) {
            ctx->pc = 0x10ED74u;
            goto label_10ed74;
        }
    }
    ctx->pc = 0x10ED48u;
label_10ed48:
    // 0x10ed48: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10ed48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10ed4c:
    // 0x10ed4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ed50:
    if (ctx->pc == 0x10ED50u) {
        ctx->pc = 0x10ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED4Cu;
        // 0x10ed50: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED54u;
        goto label_10ed54;
    }
    ctx->pc = 0x10ED4Cu;
    {
        const bool branch_taken_0x10ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED4Cu;
        // 0x10ed50: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed4c) {
            ctx->pc = 0x10ED5Cu;
            goto label_10ed5c;
        }
    }
    ctx->pc = 0x10ED54u;
label_10ed54:
    // 0x10ed54: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_10ed58:
    if (ctx->pc == 0x10ED58u) {
        ctx->pc = 0x10ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED54u;
        // 0x10ed58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED5Cu;
        goto label_10ed5c;
    }
    ctx->pc = 0x10ED54u;
    {
        const bool branch_taken_0x10ed54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED54u;
        // 0x10ed58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed54) {
            ctx->pc = 0x10EF70u;
            goto label_10ef70;
        }
    }
    ctx->pc = 0x10ED5Cu;
label_10ed5c:
    // 0x10ed5c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ed60:
    // 0x10ed60: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ed60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ed64:
    // 0x10ed64: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10ed64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10ed68:
    // 0x10ed68: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ed68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ed6c:
    // 0x10ed6c: 0x10000081  b           . + 4 + (0x81 << 2)
label_10ed70:
    if (ctx->pc == 0x10ED70u) {
        ctx->pc = 0x10ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED6Cu;
        // 0x10ed70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED74u;
        goto label_10ed74;
    }
    ctx->pc = 0x10ED6Cu;
    {
        const bool branch_taken_0x10ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED6Cu;
        // 0x10ed70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed6c) {
            ctx->pc = 0x10EF74u;
            goto label_10ef74;
        }
    }
    ctx->pc = 0x10ED74u;
label_10ed74:
    // 0x10ed74: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ed74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ed78:
    // 0x10ed78: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ed7c:
    // 0x10ed7c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10ed7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10ed80:
    // 0x10ed80: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x10ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_10ed84:
    // 0x10ed84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10ed84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10ed88:
    // 0x10ed88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10ed88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10ed8c:
    // 0x10ed8c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x10ed8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_10ed90:
    // 0x10ed90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10ed94:
    // 0x10ed94: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10ed94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10ed98:
    // 0x10ed98: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x10ed98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_10ed9c:
    // 0x10ed9c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_10eda0:
    if (ctx->pc == 0x10EDA0u) {
        ctx->pc = 0x10EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED9Cu;
        // 0x10eda0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDA4u;
        goto label_10eda4;
    }
    ctx->pc = 0x10ED9Cu;
    {
        const bool branch_taken_0x10ed9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED9Cu;
        // 0x10eda0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed9c) {
            ctx->pc = 0x10ED80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ed80;
        }
    }
    ctx->pc = 0x10EDA4u;
label_10eda4:
    // 0x10eda4: 0x10000075  b           . + 4 + (0x75 << 2)
label_10eda8:
    if (ctx->pc == 0x10EDA8u) {
        ctx->pc = 0x10EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDA4u;
        // 0x10eda8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDACu;
        goto label_10edac;
    }
    ctx->pc = 0x10EDA4u;
    {
        const bool branch_taken_0x10eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDA4u;
        // 0x10eda8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eda4) {
            ctx->pc = 0x10EF7Cu;
            goto label_10ef7c;
        }
    }
    ctx->pc = 0x10EDACu;
label_10edac:
    // 0x10edac: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10edb0:
    // 0x10edb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10edb4:
    if (ctx->pc == 0x10EDB4u) {
        ctx->pc = 0x10EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDB0u;
        // 0x10edb4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDB8u;
        goto label_10edb8;
    }
    ctx->pc = 0x10EDB0u;
    {
        const bool branch_taken_0x10edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDB0u;
        // 0x10edb4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edb0) {
            ctx->pc = 0x10EDC4u;
            goto label_10edc4;
        }
    }
    ctx->pc = 0x10EDB8u;
label_10edb8:
    // 0x10edb8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10edb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10edbc:
    // 0x10edbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_10edc0:
    if (ctx->pc == 0x10EDC0u) {
        ctx->pc = 0x10EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDBCu;
        // 0x10edc0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDC4u;
        goto label_10edc4;
    }
    ctx->pc = 0x10EDBCu;
    {
        const bool branch_taken_0x10edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDBCu;
        // 0x10edc0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edbc) {
            ctx->pc = 0x10EDD8u;
            goto label_10edd8;
        }
    }
    ctx->pc = 0x10EDC4u;
label_10edc4:
    // 0x10edc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10edc8:
    if (ctx->pc == 0x10EDC8u) {
        ctx->pc = 0x10EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDC4u;
        // 0x10edc8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDCCu;
        goto label_10edcc;
    }
    ctx->pc = 0x10EDC4u;
    {
        const bool branch_taken_0x10edc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDC4u;
        // 0x10edc8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edc4) {
            ctx->pc = 0x10EDD4u;
            goto label_10edd4;
        }
    }
    ctx->pc = 0x10EDCCu;
label_10edcc:
    // 0x10edcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_10edd0:
    if (ctx->pc == 0x10EDD0u) {
        ctx->pc = 0x10EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDCCu;
        // 0x10edd0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDD4u;
        goto label_10edd4;
    }
    ctx->pc = 0x10EDCCu;
    {
        const bool branch_taken_0x10edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDCCu;
        // 0x10edd0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edcc) {
            ctx->pc = 0x10EDD8u;
            goto label_10edd8;
        }
    }
    ctx->pc = 0x10EDD4u;
label_10edd4:
    // 0x10edd4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10edd8:
    // 0x10edd8: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_10eddc:
    if (ctx->pc == 0x10EDDCu) {
        ctx->pc = 0x10EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDD8u;
        // 0x10eddc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDE0u;
        goto label_10ede0;
    }
    ctx->pc = 0x10EDD8u;
    {
        const bool branch_taken_0x10edd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDD8u;
        // 0x10eddc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edd8) {
            ctx->pc = 0x10EE10u;
            goto label_10ee10;
        }
    }
    ctx->pc = 0x10EDE0u;
label_10ede0:
    // 0x10ede0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x10ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_10ede4:
    // 0x10ede4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ede8:
    if (ctx->pc == 0x10EDE8u) {
        ctx->pc = 0x10EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDE4u;
        // 0x10ede8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDECu;
        goto label_10edec;
    }
    ctx->pc = 0x10EDE4u;
    {
        const bool branch_taken_0x10ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDE4u;
        // 0x10ede8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ede4) {
            ctx->pc = 0x10EDF8u;
            goto label_10edf8;
        }
    }
    ctx->pc = 0x10EDECu;
label_10edec:
    // 0x10edec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10edf0:
    // 0x10edf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_10edf4:
    if (ctx->pc == 0x10EDF4u) {
        ctx->pc = 0x10EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDF0u;
        // 0x10edf4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDF8u;
        goto label_10edf8;
    }
    ctx->pc = 0x10EDF0u;
    {
        const bool branch_taken_0x10edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDF0u;
        // 0x10edf4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edf0) {
            ctx->pc = 0x10EE1Cu;
            goto label_10ee1c;
        }
    }
    ctx->pc = 0x10EDF8u;
label_10edf8:
    // 0x10edf8: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x10edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_10edfc:
    // 0x10edfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ee00:
    if (ctx->pc == 0x10EE00u) {
        ctx->pc = 0x10EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDFCu;
        // 0x10ee00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE04u;
        goto label_10ee04;
    }
    ctx->pc = 0x10EDFCu;
    {
        const bool branch_taken_0x10edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDFCu;
        // 0x10ee00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edfc) {
            ctx->pc = 0x10EE20u;
            goto label_10ee20;
        }
    }
    ctx->pc = 0x10EE04u;
label_10ee04:
    // 0x10ee04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ee08:
    // 0x10ee08: 0x10000004  b           . + 4 + (0x4 << 2)
label_10ee0c:
    if (ctx->pc == 0x10EE0Cu) {
        ctx->pc = 0x10EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE08u;
        // 0x10ee0c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE10u;
        goto label_10ee10;
    }
    ctx->pc = 0x10EE08u;
    {
        const bool branch_taken_0x10ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE08u;
        // 0x10ee0c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee08) {
            ctx->pc = 0x10EE1Cu;
            goto label_10ee1c;
        }
    }
    ctx->pc = 0x10EE10u;
label_10ee10:
    // 0x10ee10: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x10ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10ee14:
    // 0x10ee14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ee18:
    // 0x10ee18: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x10ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_10ee1c:
    // 0x10ee1c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10ee1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10ee20:
    // 0x10ee20: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_10ee24:
    if (ctx->pc == 0x10EE24u) {
        ctx->pc = 0x10EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE20u;
        // 0x10ee24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE28u;
        goto label_10ee28;
    }
    ctx->pc = 0x10EE20u;
    {
        const bool branch_taken_0x10ee20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE20u;
        // 0x10ee24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee20) {
            ctx->pc = 0x10EE54u;
            goto label_10ee54;
        }
    }
    ctx->pc = 0x10EE28u;
label_10ee28:
    // 0x10ee28: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10ee2c:
    // 0x10ee2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ee30:
    if (ctx->pc == 0x10EE30u) {
        ctx->pc = 0x10EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE2Cu;
        // 0x10ee30: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE34u;
        goto label_10ee34;
    }
    ctx->pc = 0x10EE2Cu;
    {
        const bool branch_taken_0x10ee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE2Cu;
        // 0x10ee30: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee2c) {
            ctx->pc = 0x10EE3Cu;
            goto label_10ee3c;
        }
    }
    ctx->pc = 0x10EE34u;
label_10ee34:
    // 0x10ee34: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_10ee38:
    if (ctx->pc == 0x10EE38u) {
        ctx->pc = 0x10EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE34u;
        // 0x10ee38: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE3Cu;
        goto label_10ee3c;
    }
    ctx->pc = 0x10EE34u;
    {
        const bool branch_taken_0x10ee34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE34u;
        // 0x10ee38: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee34) {
            ctx->pc = 0x10EEB0u;
            goto label_10eeb0;
        }
    }
    ctx->pc = 0x10EE3Cu;
label_10ee3c:
    // 0x10ee3c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10ee40:
    // 0x10ee40: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ee40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ee44:
    // 0x10ee44: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ee44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ee48:
    // 0x10ee48: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x10ee48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10ee4c:
    // 0x10ee4c: 0x10000019  b           . + 4 + (0x19 << 2)
label_10ee50:
    if (ctx->pc == 0x10EE50u) {
        ctx->pc = 0x10EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE4Cu;
        // 0x10ee50: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE54u;
        goto label_10ee54;
    }
    ctx->pc = 0x10EE4Cu;
    {
        const bool branch_taken_0x10ee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE4Cu;
        // 0x10ee50: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee4c) {
            ctx->pc = 0x10EEB4u;
            goto label_10eeb4;
        }
    }
    ctx->pc = 0x10EE54u;
label_10ee54:
    // 0x10ee54: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x10ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_10ee58:
    // 0x10ee58: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10ee58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10ee5c:
    // 0x10ee5c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x10ee5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_10ee60:
    // 0x10ee60: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_10ee64:
    if (ctx->pc == 0x10EE64u) {
        ctx->pc = 0x10EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE60u;
        // 0x10ee64: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE68u;
        goto label_10ee68;
    }
    ctx->pc = 0x10EE60u;
    {
        const bool branch_taken_0x10ee60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE60u;
        // 0x10ee64: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee60) {
            ctx->pc = 0x10EEB0u;
            goto label_10eeb0;
        }
    }
    ctx->pc = 0x10EE68u;
label_10ee68:
    // 0x10ee68: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ee68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ee6c:
    // 0x10ee6c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10ee6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10ee70:
    // 0x10ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ee74:
    // 0x10ee74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ee78:
    // 0x10ee78: 0xc048382  jal         func_120E08
label_10ee7c:
    if (ctx->pc == 0x10EE7Cu) {
        ctx->pc = 0x10EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE78u;
        // 0x10ee7c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE80u;
        goto label_10ee80;
    }
    ctx->pc = 0x10EE78u;
    SET_GPR_U32(ctx, 31, 0x10EE80u);
    ctx->pc = 0x10EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE78u;
    // 0x10ee7c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E08u, 0x10EE78u, 0x10EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE80u;
label_10ee80:
    // 0x10ee80: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10ee80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_10ee84:
    // 0x10ee84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ee88:
    // 0x10ee88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10ee8c:
    // 0x10ee8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ee90:
    // 0x10ee90: 0xc04818c  jal         func_120630
label_10ee94:
    if (ctx->pc == 0x10EE94u) {
        ctx->pc = 0x10EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE90u;
        // 0x10ee94: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE98u;
        goto label_10ee98;
    }
    ctx->pc = 0x10EE90u;
    SET_GPR_U32(ctx, 31, 0x10EE98u);
    ctx->pc = 0x10EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE90u;
    // 0x10ee94: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x10EE90u, 0x10EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE98u;
label_10ee98:
    // 0x10ee98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10ee98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10ee9c:
    // 0x10ee9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ee9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10eea0:
    // 0x10eea0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_10eea4:
    if (ctx->pc == 0x10EEA4u) {
        ctx->pc = 0x10EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEA0u;
        // 0x10eea4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEA8u;
        goto label_10eea8;
    }
    ctx->pc = 0x10EEA0u;
    {
        const bool branch_taken_0x10eea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEA0u;
        // 0x10eea4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eea0) {
            ctx->pc = 0x10EE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ee70;
        }
    }
    ctx->pc = 0x10EEA8u;
label_10eea8:
    // 0x10eea8: 0x10000004  b           . + 4 + (0x4 << 2)
label_10eeac:
    if (ctx->pc == 0x10EEACu) {
        ctx->pc = 0x10EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEA8u;
        // 0x10eeac: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEB0u;
        goto label_10eeb0;
    }
    ctx->pc = 0x10EEA8u;
    {
        const bool branch_taken_0x10eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEA8u;
        // 0x10eeac: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eea8) {
            ctx->pc = 0x10EEBCu;
            goto label_10eebc;
        }
    }
    ctx->pc = 0x10EEB0u;
label_10eeb0:
    // 0x10eeb0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10eeb0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10eeb4:
    // 0x10eeb4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10eeb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10eeb8:
    // 0x10eeb8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10eebc:
    // 0x10eebc: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_10eec0:
    if (ctx->pc == 0x10EEC0u) {
        ctx->pc = 0x10EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEBCu;
        // 0x10eec0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEC4u;
        goto label_10eec4;
    }
    ctx->pc = 0x10EEBCu;
    {
        const bool branch_taken_0x10eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEBCu;
        // 0x10eec0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eebc) {
            ctx->pc = 0x10F244u;
            goto label_10f244;
        }
    }
    ctx->pc = 0x10EEC4u;
label_10eec4:
    // 0x10eec4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10eec8:
    // 0x10eec8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10eecc:
    if (ctx->pc == 0x10EECCu) {
        ctx->pc = 0x10EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEC8u;
        // 0x10eecc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EED0u;
        goto label_10eed0;
    }
    ctx->pc = 0x10EEC8u;
    {
        const bool branch_taken_0x10eec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEC8u;
        // 0x10eecc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eec8) {
            ctx->pc = 0x10EEDCu;
            goto label_10eedc;
        }
    }
    ctx->pc = 0x10EED0u;
label_10eed0:
    // 0x10eed0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10eed0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10eed4:
    // 0x10eed4: 0x10000006  b           . + 4 + (0x6 << 2)
label_10eed8:
    if (ctx->pc == 0x10EED8u) {
        ctx->pc = 0x10EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EED4u;
        // 0x10eed8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEDCu;
        goto label_10eedc;
    }
    ctx->pc = 0x10EED4u;
    {
        const bool branch_taken_0x10eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EED4u;
        // 0x10eed8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eed4) {
            ctx->pc = 0x10EEF0u;
            goto label_10eef0;
        }
    }
    ctx->pc = 0x10EEDCu;
label_10eedc:
    // 0x10eedc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10eee0:
    if (ctx->pc == 0x10EEE0u) {
        ctx->pc = 0x10EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEDCu;
        // 0x10eee0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEE4u;
        goto label_10eee4;
    }
    ctx->pc = 0x10EEDCu;
    {
        const bool branch_taken_0x10eedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEDCu;
        // 0x10eee0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eedc) {
            ctx->pc = 0x10EEECu;
            goto label_10eeec;
        }
    }
    ctx->pc = 0x10EEE4u;
label_10eee4:
    // 0x10eee4: 0x10000002  b           . + 4 + (0x2 << 2)
label_10eee8:
    if (ctx->pc == 0x10EEE8u) {
        ctx->pc = 0x10EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEE4u;
        // 0x10eee8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEECu;
        goto label_10eeec;
    }
    ctx->pc = 0x10EEE4u;
    {
        const bool branch_taken_0x10eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEE4u;
        // 0x10eee8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eee4) {
            ctx->pc = 0x10EEF0u;
            goto label_10eef0;
        }
    }
    ctx->pc = 0x10EEECu;
label_10eeec:
    // 0x10eeec: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10eeecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10eef0:
    // 0x10eef0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10eef4:
    if (ctx->pc == 0x10EEF4u) {
        ctx->pc = 0x10EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF0u;
        // 0x10eef4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEF8u;
        goto label_10eef8;
    }
    ctx->pc = 0x10EEF0u;
    {
        const bool branch_taken_0x10eef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF0u;
        // 0x10eef4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eef0) {
            ctx->pc = 0x10EF20u;
            goto label_10ef20;
        }
    }
    ctx->pc = 0x10EEF8u;
label_10eef8:
    // 0x10eef8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10eef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10eefc:
    // 0x10eefc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ef00:
    if (ctx->pc == 0x10EF00u) {
        ctx->pc = 0x10EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEFCu;
        // 0x10ef00: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF04u;
        goto label_10ef04;
    }
    ctx->pc = 0x10EEFCu;
    {
        const bool branch_taken_0x10eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEFCu;
        // 0x10ef00: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eefc) {
            ctx->pc = 0x10EF0Cu;
            goto label_10ef0c;
        }
    }
    ctx->pc = 0x10EF04u;
label_10ef04:
    // 0x10ef04: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_10ef08:
    if (ctx->pc == 0x10EF08u) {
        ctx->pc = 0x10EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF04u;
        // 0x10ef08: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF0Cu;
        goto label_10ef0c;
    }
    ctx->pc = 0x10EF04u;
    {
        const bool branch_taken_0x10ef04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF04u;
        // 0x10ef08: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef04) {
            ctx->pc = 0x10EF70u;
            goto label_10ef70;
        }
    }
    ctx->pc = 0x10EF0Cu;
label_10ef0c:
    // 0x10ef0c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ef0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ef10:
    // 0x10ef10: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10ef10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10ef14:
    // 0x10ef14: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ef14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ef18:
    // 0x10ef18: 0x10000016  b           . + 4 + (0x16 << 2)
label_10ef1c:
    if (ctx->pc == 0x10EF1Cu) {
        ctx->pc = 0x10EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF18u;
        // 0x10ef1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF20u;
        goto label_10ef20;
    }
    ctx->pc = 0x10EF18u;
    {
        const bool branch_taken_0x10ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF18u;
        // 0x10ef1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef18) {
            ctx->pc = 0x10EF74u;
            goto label_10ef74;
        }
    }
    ctx->pc = 0x10EF20u;
label_10ef20:
    // 0x10ef20: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ef20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ef24:
    // 0x10ef24: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ef24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ef28:
    // 0x10ef28: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10ef28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10ef2c:
    // 0x10ef2c: 0x0  nop
    ctx->pc = 0x10ef2cu;
    // NOP
label_10ef30:
    // 0x10ef30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ef34:
    // 0x10ef34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ef38:
    // 0x10ef38: 0xc04872c  jal         func_121CB0
label_10ef3c:
    if (ctx->pc == 0x10EF3Cu) {
        ctx->pc = 0x10EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF38u;
        // 0x10ef3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF40u;
        goto label_10ef40;
    }
    ctx->pc = 0x10EF38u;
    SET_GPR_U32(ctx, 31, 0x10EF40u);
    ctx->pc = 0x10EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF38u;
    // 0x10ef3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x10EF38u, 0x10EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF40u;
label_10ef40:
    // 0x10ef40: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10ef40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_10ef44:
    // 0x10ef44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ef48:
    // 0x10ef48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10ef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10ef4c:
    // 0x10ef4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ef50:
    // 0x10ef50: 0xc04857a  jal         func_1215E8
label_10ef54:
    if (ctx->pc == 0x10EF54u) {
        ctx->pc = 0x10EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF50u;
        // 0x10ef54: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF58u;
        goto label_10ef58;
    }
    ctx->pc = 0x10EF50u;
    SET_GPR_U32(ctx, 31, 0x10EF58u);
    ctx->pc = 0x10EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF50u;
    // 0x10ef54: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x10EF50u, 0x10EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF58u;
label_10ef58:
    // 0x10ef58: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10ef58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10ef5c:
    // 0x10ef5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ef60:
    // 0x10ef60: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_10ef64:
    if (ctx->pc == 0x10EF64u) {
        ctx->pc = 0x10EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF60u;
        // 0x10ef64: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF68u;
        goto label_10ef68;
    }
    ctx->pc = 0x10EF60u;
    {
        const bool branch_taken_0x10ef60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF60u;
        // 0x10ef64: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef60) {
            ctx->pc = 0x10EF30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ef30;
        }
    }
    ctx->pc = 0x10EF68u;
label_10ef68:
    // 0x10ef68: 0x10000004  b           . + 4 + (0x4 << 2)
label_10ef6c:
    if (ctx->pc == 0x10EF6Cu) {
        ctx->pc = 0x10EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF68u;
        // 0x10ef6c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF70u;
        goto label_10ef70;
    }
    ctx->pc = 0x10EF68u;
    {
        const bool branch_taken_0x10ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF68u;
        // 0x10ef6c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef68) {
            ctx->pc = 0x10EF7Cu;
            goto label_10ef7c;
        }
    }
    ctx->pc = 0x10EF70u;
label_10ef70:
    // 0x10ef70: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ef70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ef74:
    // 0x10ef74: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10ef74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10ef78:
    // 0x10ef78: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x10ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10ef7c:
    // 0x10ef7c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x10ef7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10ef80:
    // 0x10ef80: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_10ef84:
    if (ctx->pc == 0x10EF84u) {
        ctx->pc = 0x10EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF80u;
        // 0x10ef84: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF88u;
        goto label_10ef88;
    }
    ctx->pc = 0x10EF80u;
    {
        const bool branch_taken_0x10ef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF80u;
        // 0x10ef84: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef80) {
            ctx->pc = 0x10F248u;
            goto label_10f248;
        }
    }
    ctx->pc = 0x10EF88u;
label_10ef88:
    // 0x10ef88: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10ef88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10ef8c:
    // 0x10ef8c: 0xc048c12  jal         func_123048
label_10ef90:
    if (ctx->pc == 0x10EF90u) {
        ctx->pc = 0x10EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF8Cu;
        // 0x10ef90: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF94u;
        goto label_10ef94;
    }
    ctx->pc = 0x10EF8Cu;
    SET_GPR_U32(ctx, 31, 0x10EF94u);
    ctx->pc = 0x10EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF8Cu;
    // 0x10ef90: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x10EF8Cu, 0x10EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF94u;
label_10ef94:
    // 0x10ef94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10ef94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_10ef98:
    // 0x10ef98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10ef98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ef9c:
    // 0x10ef9c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x10ef9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10efa0:
    // 0x10efa0: 0x0  nop
    ctx->pc = 0x10efa0u;
    // NOP
label_10efa4:
    // 0x10efa4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_10efa8:
    if (ctx->pc == 0x10EFA8u) {
        ctx->pc = 0x10EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFA4u;
        // 0x10efa8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EFACu;
        goto label_10efac;
    }
    ctx->pc = 0x10EFA4u;
    {
        const bool branch_taken_0x10efa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFA4u;
        // 0x10efa8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efa4) {
            ctx->pc = 0x10EFBCu;
            goto label_10efbc;
        }
    }
    ctx->pc = 0x10EFACu;
label_10efac:
    // 0x10efac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10efacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10efb0:
    // 0x10efb0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10efb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10efb4:
    // 0x10efb4: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_10efb8:
    if (ctx->pc == 0x10EFB8u) {
        ctx->pc = 0x10EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFB4u;
        // 0x10efb8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EFBCu;
        goto label_10efbc;
    }
    ctx->pc = 0x10EFB4u;
    {
        const bool branch_taken_0x10efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFB4u;
        // 0x10efb8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efb4) {
            ctx->pc = 0x10F6D4u;
            goto label_10f6d4;
        }
    }
    ctx->pc = 0x10EFBCu;
label_10efbc:
    // 0x10efbc: 0xc048930  jal         func_1224C0
label_10efc0:
    if (ctx->pc == 0x10EFC0u) {
        ctx->pc = 0x10EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFBCu;
        // 0x10efc0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EFC4u;
        goto label_10efc4;
    }
    ctx->pc = 0x10EFBCu;
    SET_GPR_U32(ctx, 31, 0x10EFC4u);
    ctx->pc = 0x10EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFBCu;
    // 0x10efc0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x10EFBCu, 0x10EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFC4u;
label_10efc4:
    // 0x10efc4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x10efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10efc8:
    // 0x10efc8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10efc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10efcc:
    // 0x10efcc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x10efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10efd0:
    // 0x10efd0: 0xc043a1c  jal         func_10E870
label_10efd4:
    if (ctx->pc == 0x10EFD4u) {
        ctx->pc = 0x10EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFD0u;
        // 0x10efd4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EFD8u;
        goto label_10efd8;
    }
    ctx->pc = 0x10EFD0u;
    SET_GPR_U32(ctx, 31, 0x10EFD8u);
    ctx->pc = 0x10EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFD0u;
    // 0x10efd4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E870u, 0x10EFD0u, 0x10EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFD8u;
label_10efd8:
    // 0x10efd8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x10efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10efdc:
    // 0x10efdc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10efe0:
    // 0x10efe0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x10efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_10efe4:
    // 0x10efe4: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_10efe8:
    if (ctx->pc == 0x10EFE8u) {
        ctx->pc = 0x10EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFE4u;
        // 0x10efe8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EFECu;
        goto label_10efec;
    }
    ctx->pc = 0x10EFE4u;
    {
        const bool branch_taken_0x10efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFE4u;
        // 0x10efe8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efe4) {
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10EFECu;
label_10efec:
    // 0x10efec: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10efecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10eff0:
    // 0x10eff0: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x10eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10eff4:
    // 0x10eff4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_10eff8:
    if (ctx->pc == 0x10EFF8u) {
        ctx->pc = 0x10EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFF4u;
        // 0x10eff8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EFFCu;
        goto label_10effc;
    }
    ctx->pc = 0x10EFF4u;
    {
        const bool branch_taken_0x10eff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFF4u;
        // 0x10eff8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eff4) {
            ctx->pc = 0x10F080u;
            goto label_10f080;
        }
    }
    ctx->pc = 0x10EFFCu;
label_10effc:
    // 0x10effc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10effcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f000:
    // 0x10f000: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x10f000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_10f004:
    // 0x10f004: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f008:
    // 0x10f008: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f00c:
    // 0x10f00c: 0x60f809  jalr        $v1
label_10f010:
    if (ctx->pc == 0x10F010u) {
        ctx->pc = 0x10F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F00Cu;
        // 0x10f010: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F014u;
        goto label_10f014;
    }
    ctx->pc = 0x10F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F014u);
        ctx->pc = 0x10F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F00Cu;
        // 0x10f010: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F00Cu, 0x10F014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F014u;
label_10f014:
    // 0x10f014: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f018:
    // 0x10f018: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x10f018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_10f01c:
    // 0x10f01c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f020:
    // 0x10f020: 0x60f809  jalr        $v1
label_10f024:
    if (ctx->pc == 0x10F024u) {
        ctx->pc = 0x10F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F020u;
        // 0x10f024: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F028u;
        goto label_10f028;
    }
    ctx->pc = 0x10F020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F028u);
        ctx->pc = 0x10F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F020u;
        // 0x10f024: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F020u, 0x10F028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F028u;
label_10f028:
    // 0x10f028: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f02c:
    // 0x10f02c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x10f02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_10f030:
    // 0x10f030: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f034:
    // 0x10f034: 0x60f809  jalr        $v1
label_10f038:
    if (ctx->pc == 0x10F038u) {
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F03Cu;
        goto label_10f03c;
    }
    ctx->pc = 0x10F034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F03Cu);
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F034u, 0x10F03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F03Cu;
label_10f03c:
    // 0x10f03c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f040:
    // 0x10f040: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x10f040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_10f044:
    // 0x10f044: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f048:
    // 0x10f048: 0x60f809  jalr        $v1
label_10f04c:
    if (ctx->pc == 0x10F04Cu) {
        ctx->pc = 0x10F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F048u;
        // 0x10f04c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F050u;
        goto label_10f050;
    }
    ctx->pc = 0x10F048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F050u);
        ctx->pc = 0x10F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F048u;
        // 0x10f04c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F048u, 0x10F050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F050u;
label_10f050:
    // 0x10f050: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f054:
    // 0x10f054: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x10f054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_10f058:
    // 0x10f058: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f05c:
    // 0x10f05c: 0x60f809  jalr        $v1
label_10f060:
    if (ctx->pc == 0x10F060u) {
        ctx->pc = 0x10F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F05Cu;
        // 0x10f060: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F064u;
        goto label_10f064;
    }
    ctx->pc = 0x10F05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F064u);
        ctx->pc = 0x10F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F05Cu;
        // 0x10f060: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F05Cu, 0x10F064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F064u;
label_10f064:
    // 0x10f064: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f068:
    // 0x10f068: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x10f068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_10f06c:
    // 0x10f06c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f070:
    // 0x10f070: 0x60f809  jalr        $v1
label_10f074:
    if (ctx->pc == 0x10F074u) {
        ctx->pc = 0x10F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F070u;
        // 0x10f074: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F078u;
        goto label_10f078;
    }
    ctx->pc = 0x10F070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F078u);
        ctx->pc = 0x10F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F070u;
        // 0x10f074: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F070u, 0x10F078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F078u;
label_10f078:
    // 0x10f078: 0x1000019e  b           . + 4 + (0x19E << 2)
label_10f07c:
    if (ctx->pc == 0x10F07Cu) {
        ctx->pc = 0x10F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F078u;
        // 0x10f07c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F080u;
        goto label_10f080;
    }
    ctx->pc = 0x10F078u;
    {
        const bool branch_taken_0x10f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F078u;
        // 0x10f07c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f078) {
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10F080u;
label_10f080:
    // 0x10f080: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_10f084:
    if (ctx->pc == 0x10F084u) {
        ctx->pc = 0x10F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F080u;
        // 0x10f084: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F088u;
        goto label_10f088;
    }
    ctx->pc = 0x10F080u;
    {
        const bool branch_taken_0x10f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F080u;
        // 0x10f084: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f080) {
            ctx->pc = 0x10F0E0u;
            goto label_10f0e0;
        }
    }
    ctx->pc = 0x10F088u;
label_10f088:
    // 0x10f088: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_10f08c:
    if (ctx->pc == 0x10F08Cu) {
        ctx->pc = 0x10F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F088u;
        // 0x10f08c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F090u;
        goto label_10f090;
    }
    ctx->pc = 0x10F088u;
    {
        const bool branch_taken_0x10f088 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F088u;
        // 0x10f08c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f088) {
            ctx->pc = 0x10F0CCu;
            goto label_10f0cc;
        }
    }
    ctx->pc = 0x10F090u;
label_10f090:
    // 0x10f090: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10f090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10f094:
    // 0x10f094: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10f098:
    if (ctx->pc == 0x10F098u) {
        ctx->pc = 0x10F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F094u;
        // 0x10f098: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F09Cu;
        goto label_10f09c;
    }
    ctx->pc = 0x10F094u;
    {
        const bool branch_taken_0x10f094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F094u;
        // 0x10f098: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f094) {
            ctx->pc = 0x10F0CCu;
            goto label_10f0cc;
        }
    }
    ctx->pc = 0x10F09Cu;
label_10f09c:
    // 0x10f09c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f09cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f0a0:
    // 0x10f0a0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f0a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f0a4:
    // 0x10f0a4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f0a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f0a8:
    // 0x10f0a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f0ac:
    // 0x10f0ac: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x10f0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_10f0b0:
    // 0x10f0b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_10f0b4:
    if (ctx->pc == 0x10F0B4u) {
        ctx->pc = 0x10F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B0u;
        // 0x10f0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0B8u;
        goto label_10f0b8;
    }
    ctx->pc = 0x10F0B0u;
    {
        const bool branch_taken_0x10f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B0u;
        // 0x10f0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0b0) {
            ctx->pc = 0x10F128u;
            goto label_10f128;
        }
    }
    ctx->pc = 0x10F0B8u;
label_10f0b8:
    // 0x10f0b8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10f0bc:
    // 0x10f0bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_10f0c0:
    if (ctx->pc == 0x10F0C0u) {
        ctx->pc = 0x10F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0BCu;
        // 0x10f0c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0C4u;
        goto label_10f0c4;
    }
    ctx->pc = 0x10F0BCu;
    {
        const bool branch_taken_0x10f0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0BCu;
        // 0x10f0c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0bc) {
            ctx->pc = 0x10F0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f0a8;
        }
    }
    ctx->pc = 0x10F0C4u;
label_10f0c4:
    // 0x10f0c4: 0x10000060  b           . + 4 + (0x60 << 2)
label_10f0c8:
    if (ctx->pc == 0x10F0C8u) {
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0CCu;
        goto label_10f0cc;
    }
    ctx->pc = 0x10F0C4u;
    {
        const bool branch_taken_0x10f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0c4) {
            ctx->pc = 0x10F248u;
            goto label_10f248;
        }
    }
    ctx->pc = 0x10F0CCu;
label_10f0cc:
    // 0x10f0cc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f0ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f0d0:
    // 0x10f0d0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f0d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f0d4:
    // 0x10f0d4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f0d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f0d8:
    // 0x10f0d8: 0x10000013  b           . + 4 + (0x13 << 2)
label_10f0dc:
    if (ctx->pc == 0x10F0DCu) {
        ctx->pc = 0x10F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D8u;
        // 0x10f0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0E0u;
        goto label_10f0e0;
    }
    ctx->pc = 0x10F0D8u;
    {
        const bool branch_taken_0x10f0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D8u;
        // 0x10f0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0d8) {
            ctx->pc = 0x10F128u;
            goto label_10f128;
        }
    }
    ctx->pc = 0x10F0E0u;
label_10f0e0:
    // 0x10f0e0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10f0e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10f0e4:
    // 0x10f0e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10f0e8:
    if (ctx->pc == 0x10F0E8u) {
        ctx->pc = 0x10F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0E4u;
        // 0x10f0e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0ECu;
        goto label_10f0ec;
    }
    ctx->pc = 0x10F0E4u;
    {
        const bool branch_taken_0x10f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0E4u;
        // 0x10f0e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0e4) {
            ctx->pc = 0x10F11Cu;
            goto label_10f11c;
        }
    }
    ctx->pc = 0x10F0ECu;
label_10f0ec:
    // 0x10f0ec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f0ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f0f0:
    // 0x10f0f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f0f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f0f4:
    // 0x10f0f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f0f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f0f8:
    // 0x10f0f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10f0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10f0fc:
    // 0x10f0fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10f100:
    // 0x10f100: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_10f104:
    // 0x10f104: 0x0  nop
    ctx->pc = 0x10f104u;
    // NOP
label_10f108:
    // 0x10f108: 0x0  nop
    ctx->pc = 0x10f108u;
    // NOP
label_10f10c:
    // 0x10f10c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_10f110:
    if (ctx->pc == 0x10F110u) {
        ctx->pc = 0x10F114u;
        goto label_10f114;
    }
    ctx->pc = 0x10F10Cu;
    {
        const bool branch_taken_0x10f10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f10c) {
            ctx->pc = 0x10F0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f0f8;
        }
    }
    ctx->pc = 0x10F114u;
label_10f114:
    // 0x10f114: 0x1000004c  b           . + 4 + (0x4C << 2)
label_10f118:
    if (ctx->pc == 0x10F118u) {
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F11Cu;
        goto label_10f11c;
    }
    ctx->pc = 0x10F114u;
    {
        const bool branch_taken_0x10f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f114) {
            ctx->pc = 0x10F248u;
            goto label_10f248;
        }
    }
    ctx->pc = 0x10F11Cu;
label_10f11c:
    // 0x10f11c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f11cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f120:
    // 0x10f120: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f120u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f124:
    // 0x10f124: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f124u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f128:
    // 0x10f128: 0x10000047  b           . + 4 + (0x47 << 2)
label_10f12c:
    if (ctx->pc == 0x10F12Cu) {
        ctx->pc = 0x10F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F128u;
        // 0x10f12c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F130u;
        goto label_10f130;
    }
    ctx->pc = 0x10F128u;
    {
        const bool branch_taken_0x10f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F128u;
        // 0x10f12c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f128) {
            ctx->pc = 0x10F248u;
            goto label_10f248;
        }
    }
    ctx->pc = 0x10F130u;
label_10f130:
    // 0x10f130: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10f130u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10f134:
    // 0x10f134: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x10f134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10f138:
    // 0x10f138: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x10f138u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10f13c:
    // 0x10f13c: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x10f13cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_10f140:
    // 0x10f140: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10f140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f144:
    // 0x10f144: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f144u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f148:
    // 0x10f148: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10f148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10f14c:
    // 0x10f14c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f14cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f150:
    // 0x10f150: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10f150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10f154:
    // 0x10f154: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f154u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f158:
    // 0x10f158: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10f15c:
    // 0x10f15c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10f160:
    // 0x10f160: 0x10000038  b           . + 4 + (0x38 << 2)
label_10f164:
    if (ctx->pc == 0x10F164u) {
        ctx->pc = 0x10F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F160u;
        // 0x10f164: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F168u;
        goto label_10f168;
    }
    ctx->pc = 0x10F160u;
    {
        const bool branch_taken_0x10f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F160u;
        // 0x10f164: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f160) {
            ctx->pc = 0x10F244u;
            goto label_10f244;
        }
    }
    ctx->pc = 0x10F168u;
label_10f168:
    // 0x10f168: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10f168u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10f16c:
    // 0x10f16c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x10f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_10f170:
    // 0x10f170: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10f170u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10f174:
    // 0x10f174: 0x2444a5e0  addiu       $a0, $v0, -0x5A20
    ctx->pc = 0x10f174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944224));
label_10f178:
    // 0x10f178: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10f17c:
    if (ctx->pc == 0x10F17Cu) {
        ctx->pc = 0x10F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F178u;
        // 0x10f17c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F180u;
        goto label_10f180;
    }
    ctx->pc = 0x10F178u;
    {
        const bool branch_taken_0x10f178 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F178u;
        // 0x10f17c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f178) {
            ctx->pc = 0x10F1A8u;
            goto label_10f1a8;
        }
    }
    ctx->pc = 0x10F180u;
label_10f180:
    // 0x10f180: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10f184:
    // 0x10f184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10f188:
    if (ctx->pc == 0x10F188u) {
        ctx->pc = 0x10F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F184u;
        // 0x10f188: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F18Cu;
        goto label_10f18c;
    }
    ctx->pc = 0x10F184u;
    {
        const bool branch_taken_0x10f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F184u;
        // 0x10f188: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f184) {
            ctx->pc = 0x10F194u;
            goto label_10f194;
        }
    }
    ctx->pc = 0x10F18Cu;
label_10f18c:
    // 0x10f18c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_10f190:
    if (ctx->pc == 0x10F190u) {
        ctx->pc = 0x10F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F18Cu;
        // 0x10f190: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F194u;
        goto label_10f194;
    }
    ctx->pc = 0x10F18Cu;
    {
        const bool branch_taken_0x10f18c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F18Cu;
        // 0x10f190: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f18c) {
            ctx->pc = 0x10F1E4u;
            goto label_10f1e4;
        }
    }
    ctx->pc = 0x10F194u;
label_10f194:
    // 0x10f194: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f194u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f198:
    // 0x10f198: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10f198u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10f19c:
    // 0x10f19c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f19cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f1a0:
    // 0x10f1a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_10f1a4:
    if (ctx->pc == 0x10F1A4u) {
        ctx->pc = 0x10F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1A0u;
        // 0x10f1a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1A8u;
        goto label_10f1a8;
    }
    ctx->pc = 0x10F1A0u;
    {
        const bool branch_taken_0x10f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1A0u;
        // 0x10f1a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1a0) {
            ctx->pc = 0x10F1E8u;
            goto label_10f1e8;
        }
    }
    ctx->pc = 0x10F1A8u;
label_10f1a8:
    // 0x10f1a8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f1a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f1ac:
    // 0x10f1ac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f1acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f1b0:
    // 0x10f1b0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f1b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f1b4:
    // 0x10f1b4: 0x0  nop
    ctx->pc = 0x10f1b4u;
    // NOP
label_10f1b8:
    // 0x10f1b8: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x10f1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_10f1bc:
    // 0x10f1bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10f1c0:
    // 0x10f1c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10f1c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10f1c4:
    // 0x10f1c4: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x10f1c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_10f1c8:
    // 0x10f1c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f1cc:
    // 0x10f1cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10f1ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10f1d0:
    // 0x10f1d0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x10f1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_10f1d4:
    // 0x10f1d4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_10f1d8:
    if (ctx->pc == 0x10F1D8u) {
        ctx->pc = 0x10F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1D4u;
        // 0x10f1d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1DCu;
        goto label_10f1dc;
    }
    ctx->pc = 0x10F1D4u;
    {
        const bool branch_taken_0x10f1d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1D4u;
        // 0x10f1d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1d4) {
            ctx->pc = 0x10F1B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f1b8;
        }
    }
    ctx->pc = 0x10F1DCu;
label_10f1dc:
    // 0x10f1dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_10f1e0:
    if (ctx->pc == 0x10F1E0u) {
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1E4u;
        goto label_10f1e4;
    }
    ctx->pc = 0x10F1DCu;
    {
        const bool branch_taken_0x10f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1dc) {
            ctx->pc = 0x10F1F0u;
            goto label_10f1f0;
        }
    }
    ctx->pc = 0x10F1E4u;
label_10f1e4:
    // 0x10f1e4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f1e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f1e8:
    // 0x10f1e8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f1e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f1ec:
    // 0x10f1ec: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10f1f0:
    // 0x10f1f0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x10f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_10f1f4:
    // 0x10f1f4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x10f1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_10f1f8:
    // 0x10f1f8: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x10f1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10f1fc:
    // 0x10f1fc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x10f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10f200:
    // 0x10f200: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x10f200u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_10f204:
    // 0x10f204: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10f208:
    // 0x10f208: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x10f208u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10f20c:
    // 0x10f20c: 0x1000000e  b           . + 4 + (0xE << 2)
label_10f210:
    if (ctx->pc == 0x10F210u) {
        ctx->pc = 0x10F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F20Cu;
        // 0x10f210: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F214u;
        goto label_10f214;
    }
    ctx->pc = 0x10F20Cu;
    {
        const bool branch_taken_0x10f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F20Cu;
        // 0x10f210: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f20c) {
            ctx->pc = 0x10F248u;
            goto label_10f248;
        }
    }
    ctx->pc = 0x10F214u;
label_10f214:
    // 0x10f214: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x10f214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_10f218:
    // 0x10f218: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_10f21c:
    if (ctx->pc == 0x10F21Cu) {
        ctx->pc = 0x10F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F218u;
        // 0x10f21c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F220u;
        goto label_10f220;
    }
    ctx->pc = 0x10F218u;
    {
        const bool branch_taken_0x10f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F218u;
        // 0x10f21c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f218) {
            ctx->pc = 0x10F6F0u;
            goto label_10f6f0;
        }
    }
    ctx->pc = 0x10F220u;
label_10f220:
    // 0x10f220: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x10f220u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_10f224:
    // 0x10f224: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10f224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f228:
    // 0x10f228: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f228u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f22c:
    // 0x10f22c: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x10f22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_10f230:
    // 0x10f230: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10f230u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10f234:
    // 0x10f234: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x10f234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_10f238:
    // 0x10f238: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10f238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_10f23c:
    // 0x10f23c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x10f23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10f240:
    // 0x10f240: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10f240u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10f244:
    // 0x10f244: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x10f244u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_10f248:
    // 0x10f248: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x10f248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10f24c:
    // 0x10f24c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10f24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f250:
    // 0x10f250: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10f250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10f254:
    // 0x10f254: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x10f254u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_10f258:
    // 0x10f258: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x10f258u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_10f25c:
    // 0x10f25c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x10f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10f260:
    // 0x10f260: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x10f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f264:
    // 0x10f264: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x10f264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_10f268:
    // 0x10f268: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10f268u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10f26c:
    // 0x10f26c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x10f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_10f270:
    // 0x10f270: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_10f274:
    if (ctx->pc == 0x10F274u) {
        ctx->pc = 0x10F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F270u;
        // 0x10f274: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F278u;
        goto label_10f278;
    }
    ctx->pc = 0x10F270u;
    {
        const bool branch_taken_0x10f270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F270u;
        // 0x10f274: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f270) {
            ctx->pc = 0x10F294u;
            goto label_10f294;
        }
    }
    ctx->pc = 0x10F278u;
label_10f278:
    // 0x10f278: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x10f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_10f27c:
    // 0x10f27c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10f280:
    if (ctx->pc == 0x10F280u) {
        ctx->pc = 0x10F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F27Cu;
        // 0x10f280: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F284u;
        goto label_10f284;
    }
    ctx->pc = 0x10F27Cu;
    {
        const bool branch_taken_0x10f27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F27Cu;
        // 0x10f280: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f27c) {
            ctx->pc = 0x10F2B4u;
            goto label_10f2b4;
        }
    }
    ctx->pc = 0x10F284u;
label_10f284:
    // 0x10f284: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10f284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f288:
    // 0x10f288: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10f28c:
    // 0x10f28c: 0x10000008  b           . + 4 + (0x8 << 2)
label_10f290:
    if (ctx->pc == 0x10F290u) {
        ctx->pc = 0x10F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F28Cu;
        // 0x10f290: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F294u;
        goto label_10f294;
    }
    ctx->pc = 0x10F28Cu;
    {
        const bool branch_taken_0x10f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F28Cu;
        // 0x10f290: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f28c) {
            ctx->pc = 0x10F2B0u;
            goto label_10f2b0;
        }
    }
    ctx->pc = 0x10F294u;
label_10f294:
    // 0x10f294: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x10f294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_10f298:
    // 0x10f298: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10f29c:
    // 0x10f29c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_10f2a0:
    if (ctx->pc == 0x10F2A0u) {
        ctx->pc = 0x10F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F29Cu;
        // 0x10f2a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F2A4u;
        goto label_10f2a4;
    }
    ctx->pc = 0x10F29Cu;
    {
        const bool branch_taken_0x10f29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F29Cu;
        // 0x10f2a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f29c) {
            ctx->pc = 0x10F2B4u;
            goto label_10f2b4;
        }
    }
    ctx->pc = 0x10F2A4u;
label_10f2a4:
    // 0x10f2a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f2a8:
    // 0x10f2a8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10f2ac:
    // 0x10f2ac: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x10f2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_10f2b0:
    // 0x10f2b0: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x10f2b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_10f2b4:
    // 0x10f2b4: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_10f2b8:
    if (ctx->pc == 0x10F2B8u) {
        ctx->pc = 0x10F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2B4u;
        // 0x10f2b8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F2BCu;
        goto label_10f2bc;
    }
    ctx->pc = 0x10F2B4u;
    {
        const bool branch_taken_0x10f2b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2B4u;
        // 0x10f2b8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f2b4) {
            ctx->pc = 0x10F3C0u;
            goto label_10f3c0;
        }
    }
    ctx->pc = 0x10F2BCu;
label_10f2bc:
    // 0x10f2bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_10f2c0:
    if (ctx->pc == 0x10F2C0u) {
        ctx->pc = 0x10F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2BCu;
        // 0x10f2c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F2C4u;
        goto label_10f2c4;
    }
    ctx->pc = 0x10F2BCu;
    {
        const bool branch_taken_0x10f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2BCu;
        // 0x10f2c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f2bc) {
            ctx->pc = 0x10F314u;
            goto label_10f314;
        }
    }
    ctx->pc = 0x10F2C4u;
label_10f2c4:
    // 0x10f2c4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10f2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10f2c8:
    // 0x10f2c8: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f2c8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f2cc:
    // 0x10f2cc: 0x0  nop
    ctx->pc = 0x10f2ccu;
    // NOP
label_10f2d0:
    // 0x10f2d0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10f2d4:
    // 0x10f2d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f2d8:
    // 0x10f2d8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10f2d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10f2dc:
    // 0x10f2dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f2e0:
    // 0x10f2e0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f2e4:
    // 0x10f2e4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f2e8:
    // 0x10f2e8: 0x60f809  jalr        $v1
label_10f2ec:
    if (ctx->pc == 0x10F2ECu) {
        ctx->pc = 0x10F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2E8u;
        // 0x10f2ec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F2F0u;
        goto label_10f2f0;
    }
    ctx->pc = 0x10F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F2F0u);
        ctx->pc = 0x10F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2E8u;
        // 0x10f2ec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2E8u, 0x10F2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F2F0u;
label_10f2f0:
    // 0x10f2f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f2f4:
    // 0x10f2f4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f2f8:
    // 0x10f2f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f2fc:
    // 0x10f2fc: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10f2fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10f300:
    // 0x10f300: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10f300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10f304:
    // 0x10f304: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_10f308:
    if (ctx->pc == 0x10F308u) {
        ctx->pc = 0x10F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F304u;
        // 0x10f308: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F30Cu;
        goto label_10f30c;
    }
    ctx->pc = 0x10F304u;
    {
        const bool branch_taken_0x10f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F304u;
        // 0x10f308: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f304) {
            ctx->pc = 0x10F2D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f2d0;
        }
    }
    ctx->pc = 0x10F30Cu;
label_10f30c:
    // 0x10f30c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10f310:
    if (ctx->pc == 0x10F310u) {
        ctx->pc = 0x10F314u;
        goto label_10f314;
    }
    ctx->pc = 0x10F30Cu;
    {
        const bool branch_taken_0x10f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f30c) {
            ctx->pc = 0x10F318u;
            goto label_10f318;
        }
    }
    ctx->pc = 0x10F314u;
label_10f314:
    // 0x10f314: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f314u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f318:
    // 0x10f318: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_10f31c:
    if (ctx->pc == 0x10F31Cu) {
        ctx->pc = 0x10F320u;
        goto label_10f320;
    }
    ctx->pc = 0x10F318u;
    {
        const bool branch_taken_0x10f318 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x10f318) {
            ctx->pc = 0x10F350u;
            goto label_10f350;
        }
    }
    ctx->pc = 0x10F320u;
label_10f320:
    // 0x10f320: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10f320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10f324:
    // 0x10f324: 0x0  nop
    ctx->pc = 0x10f324u;
    // NOP
label_10f328:
    // 0x10f328: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f32c:
    // 0x10f32c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10f330:
    // 0x10f330: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f334:
    // 0x10f334: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f338:
    // 0x10f338: 0x60f809  jalr        $v1
label_10f33c:
    if (ctx->pc == 0x10F33Cu) {
        ctx->pc = 0x10F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F338u;
        // 0x10f33c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F340u;
        goto label_10f340;
    }
    ctx->pc = 0x10F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F340u);
        ctx->pc = 0x10F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F338u;
        // 0x10f33c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F338u, 0x10F340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F340u;
label_10f340:
    // 0x10f340: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f344:
    // 0x10f344: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f348:
    // 0x10f348: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10f34c:
    if (ctx->pc == 0x10F34Cu) {
        ctx->pc = 0x10F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F348u;
        // 0x10f34c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F350u;
        goto label_10f350;
    }
    ctx->pc = 0x10F348u;
    {
        const bool branch_taken_0x10f348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F348u;
        // 0x10f34c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f348) {
            ctx->pc = 0x10F328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f328;
        }
    }
    ctx->pc = 0x10F350u;
label_10f350:
    // 0x10f350: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_10f354:
    if (ctx->pc == 0x10F354u) {
        ctx->pc = 0x10F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F350u;
        // 0x10f354: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F358u;
        goto label_10f358;
    }
    ctx->pc = 0x10F350u;
    {
        const bool branch_taken_0x10f350 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F350u;
        // 0x10f354: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f350) {
            ctx->pc = 0x10F388u;
            goto label_10f388;
        }
    }
    ctx->pc = 0x10F358u;
label_10f358:
    // 0x10f358: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10f358u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_10f35c:
    // 0x10f35c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f360:
    // 0x10f360: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10f360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10f364:
    // 0x10f364: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f368:
    // 0x10f368: 0x60f809  jalr        $v1
label_10f36c:
    if (ctx->pc == 0x10F36Cu) {
        ctx->pc = 0x10F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F368u;
        // 0x10f36c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F370u;
        goto label_10f370;
    }
    ctx->pc = 0x10F368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F370u);
        ctx->pc = 0x10F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F368u;
        // 0x10f36c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F368u, 0x10F370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F370u;
label_10f370:
    // 0x10f370: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f374:
    // 0x10f374: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f378:
    // 0x10f378: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x10f378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f37c:
    // 0x10f37c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10f380:
    if (ctx->pc == 0x10F380u) {
        ctx->pc = 0x10F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F37Cu;
        // 0x10f380: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F384u;
        goto label_10f384;
    }
    ctx->pc = 0x10F37Cu;
    {
        const bool branch_taken_0x10f37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F37Cu;
        // 0x10f380: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f37c) {
            ctx->pc = 0x10F358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f358;
        }
    }
    ctx->pc = 0x10F384u;
label_10f384:
    // 0x10f384: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10f384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f388:
    // 0x10f388: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_10f38c:
    if (ctx->pc == 0x10F38Cu) {
        ctx->pc = 0x10F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F388u;
        // 0x10f38c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F390u;
        goto label_10f390;
    }
    ctx->pc = 0x10F388u;
    {
        const bool branch_taken_0x10f388 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F388u;
        // 0x10f38c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f388) {
            ctx->pc = 0x10EFE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10efe4;
        }
    }
    ctx->pc = 0x10F390u;
label_10f390:
    // 0x10f390: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f394:
    // 0x10f394: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x10f394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10f398:
    // 0x10f398: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f39c:
    // 0x10f39c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f3a0:
    // 0x10f3a0: 0x60f809  jalr        $v1
label_10f3a4:
    if (ctx->pc == 0x10F3A4u) {
        ctx->pc = 0x10F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3A0u;
        // 0x10f3a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F3A8u;
        goto label_10f3a8;
    }
    ctx->pc = 0x10F3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F3A8u);
        ctx->pc = 0x10F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3A0u;
        // 0x10f3a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3A0u, 0x10F3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F3A8u;
label_10f3a8:
    // 0x10f3a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f3ac:
    // 0x10f3ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f3b0:
    // 0x10f3b0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10f3b4:
    if (ctx->pc == 0x10F3B4u) {
        ctx->pc = 0x10F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3B0u;
        // 0x10f3b4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F3B8u;
        goto label_10f3b8;
    }
    ctx->pc = 0x10F3B0u;
    {
        const bool branch_taken_0x10f3b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3B0u;
        // 0x10f3b4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3b0) {
            ctx->pc = 0x10F390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f390;
        }
    }
    ctx->pc = 0x10F3B8u;
label_10f3b8:
    // 0x10f3b8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_10f3bc:
    if (ctx->pc == 0x10F3BCu) {
        ctx->pc = 0x10F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3B8u;
        // 0x10f3bc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F3C0u;
        goto label_10f3c0;
    }
    ctx->pc = 0x10F3B8u;
    {
        const bool branch_taken_0x10f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3B8u;
        // 0x10f3bc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3b8) {
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10F3C0u;
label_10f3c0:
    // 0x10f3c0: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x10f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_10f3c4:
    // 0x10f3c4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_10f3c8:
    if (ctx->pc == 0x10F3C8u) {
        ctx->pc = 0x10F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3C4u;
        // 0x10f3c8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F3CCu;
        goto label_10f3cc;
    }
    ctx->pc = 0x10F3C4u;
    {
        const bool branch_taken_0x10f3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3C4u;
        // 0x10f3c8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3c4) {
            ctx->pc = 0x10F5A4u;
            goto label_10f5a4;
        }
    }
    ctx->pc = 0x10F3CCu;
label_10f3cc:
    // 0x10f3cc: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_10f3d0:
    if (ctx->pc == 0x10F3D0u) {
        ctx->pc = 0x10F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3CCu;
        // 0x10f3d0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F3D4u;
        goto label_10f3d4;
    }
    ctx->pc = 0x10F3CCu;
    {
        const bool branch_taken_0x10f3cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x10F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3CCu;
        // 0x10f3d0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3cc) {
            ctx->pc = 0x10F488u;
            goto label_10f488;
        }
    }
    ctx->pc = 0x10F3D4u;
label_10f3d4:
    // 0x10f3d4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f3d8:
    // 0x10f3d8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_10f3dc:
    if (ctx->pc == 0x10F3DCu) {
        ctx->pc = 0x10F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3D8u;
        // 0x10f3dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F3E0u;
        goto label_10f3e0;
    }
    ctx->pc = 0x10F3D8u;
    {
        const bool branch_taken_0x10f3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3D8u;
        // 0x10f3dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3d8) {
            ctx->pc = 0x10F434u;
            goto label_10f434;
        }
    }
    ctx->pc = 0x10F3E0u;
label_10f3e0:
    // 0x10f3e0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10f3e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10f3e4:
    // 0x10f3e4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f3e4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f3e8:
    // 0x10f3e8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10f3ec:
    // 0x10f3ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f3f0:
    // 0x10f3f0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10f3f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10f3f4:
    // 0x10f3f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f3f8:
    // 0x10f3f8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f3fc:
    // 0x10f3fc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f400:
    // 0x10f400: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10f404:
    // 0x10f404: 0x60f809  jalr        $v1
label_10f408:
    if (ctx->pc == 0x10F408u) {
        ctx->pc = 0x10F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F404u;
        // 0x10f408: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F40Cu;
        goto label_10f40c;
    }
    ctx->pc = 0x10F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F40Cu);
        ctx->pc = 0x10F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F404u;
        // 0x10f408: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F404u, 0x10F40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F40Cu;
label_10f40c:
    // 0x10f40c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f410:
    // 0x10f410: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10f410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f414:
    // 0x10f414: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f418:
    // 0x10f418: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10f418u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10f41c:
    // 0x10f41c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_10f420:
    // 0x10f420: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10f420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10f424:
    // 0x10f424: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_10f428:
    if (ctx->pc == 0x10F428u) {
        ctx->pc = 0x10F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F424u;
        // 0x10f428: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F42Cu;
        goto label_10f42c;
    }
    ctx->pc = 0x10F424u;
    {
        const bool branch_taken_0x10f424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F424u;
        // 0x10f428: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f424) {
            ctx->pc = 0x10F3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f3e8;
        }
    }
    ctx->pc = 0x10F42Cu;
label_10f42c:
    // 0x10f42c: 0x10000003  b           . + 4 + (0x3 << 2)
label_10f430:
    if (ctx->pc == 0x10F430u) {
        ctx->pc = 0x10F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F42Cu;
        // 0x10f430: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F434u;
        goto label_10f434;
    }
    ctx->pc = 0x10F42Cu;
    {
        const bool branch_taken_0x10f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F42Cu;
        // 0x10f430: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f42c) {
            ctx->pc = 0x10F43Cu;
            goto label_10f43c;
        }
    }
    ctx->pc = 0x10F434u;
label_10f434:
    // 0x10f434: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f434u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f438:
    // 0x10f438: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f43c:
    // 0x10f43c: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_10f440:
    if (ctx->pc == 0x10F440u) {
        ctx->pc = 0x10F444u;
        goto label_10f444;
    }
    ctx->pc = 0x10F43Cu;
    {
        const bool branch_taken_0x10f43c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10f43c) {
            ctx->pc = 0x10F534u;
            goto label_10f534;
        }
    }
    ctx->pc = 0x10F444u;
label_10f444:
    // 0x10f444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f448:
    // 0x10f448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f44c:
    // 0x10f44c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10f44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10f450:
    // 0x10f450: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f454:
    // 0x10f454: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10f454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_10f458:
    // 0x10f458: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f45c:
    // 0x10f45c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10f460:
    // 0x10f460: 0x60f809  jalr        $v1
label_10f464:
    if (ctx->pc == 0x10F464u) {
        ctx->pc = 0x10F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F460u;
        // 0x10f464: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F468u;
        goto label_10f468;
    }
    ctx->pc = 0x10F460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F468u);
        ctx->pc = 0x10F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F460u;
        // 0x10f464: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F460u, 0x10F468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F468u;
label_10f468:
    // 0x10f468: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f46c:
    // 0x10f46c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10f46cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10f470:
    // 0x10f470: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f474:
    // 0x10f474: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10f474u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10f478:
    // 0x10f478: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_10f47c:
    if (ctx->pc == 0x10F47Cu) {
        ctx->pc = 0x10F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F478u;
        // 0x10f47c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F480u;
        goto label_10f480;
    }
    ctx->pc = 0x10F478u;
    {
        const bool branch_taken_0x10f478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F478u;
        // 0x10f47c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f478) {
            ctx->pc = 0x10F448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f448;
        }
    }
    ctx->pc = 0x10F480u;
label_10f480:
    // 0x10f480: 0x1000002c  b           . + 4 + (0x2C << 2)
label_10f484:
    if (ctx->pc == 0x10F484u) {
        ctx->pc = 0x10F488u;
        goto label_10f488;
    }
    ctx->pc = 0x10F480u;
    {
        const bool branch_taken_0x10f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f480) {
            ctx->pc = 0x10F534u;
            goto label_10f534;
        }
    }
    ctx->pc = 0x10F488u;
label_10f488:
    // 0x10f488: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_10f48c:
    if (ctx->pc == 0x10F48Cu) {
        ctx->pc = 0x10F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F488u;
        // 0x10f48c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F490u;
        goto label_10f490;
    }
    ctx->pc = 0x10F488u;
    {
        const bool branch_taken_0x10f488 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F488u;
        // 0x10f48c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f488) {
            ctx->pc = 0x10F4E0u;
            goto label_10f4e0;
        }
    }
    ctx->pc = 0x10F490u;
label_10f490:
    // 0x10f490: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f490u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f494:
    // 0x10f494: 0x0  nop
    ctx->pc = 0x10f494u;
    // NOP
label_10f498:
    // 0x10f498: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f49c:
    // 0x10f49c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10f49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10f4a0:
    // 0x10f4a0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f4a4:
    // 0x10f4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f4a8:
    // 0x10f4a8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f4ac:
    // 0x10f4ac: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10f4b0:
    // 0x10f4b0: 0x60f809  jalr        $v1
label_10f4b4:
    if (ctx->pc == 0x10F4B4u) {
        ctx->pc = 0x10F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B0u;
        // 0x10f4b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F4B8u;
        goto label_10f4b8;
    }
    ctx->pc = 0x10F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F4B8u);
        ctx->pc = 0x10F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B0u;
        // 0x10f4b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4B0u, 0x10F4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F4B8u;
label_10f4b8:
    // 0x10f4b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f4bc:
    // 0x10f4bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f4c0:
    // 0x10f4c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f4c4:
    // 0x10f4c4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10f4c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10f4c8:
    // 0x10f4c8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_10f4cc:
    // 0x10f4cc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10f4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10f4d0:
    // 0x10f4d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_10f4d4:
    if (ctx->pc == 0x10F4D4u) {
        ctx->pc = 0x10F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4D0u;
        // 0x10f4d4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F4D8u;
        goto label_10f4d8;
    }
    ctx->pc = 0x10F4D0u;
    {
        const bool branch_taken_0x10f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4D0u;
        // 0x10f4d4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4d0) {
            ctx->pc = 0x10F498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f498;
        }
    }
    ctx->pc = 0x10F4D8u;
label_10f4d8:
    // 0x10f4d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_10f4dc:
    if (ctx->pc == 0x10F4DCu) {
        ctx->pc = 0x10F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4D8u;
        // 0x10f4dc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F4E0u;
        goto label_10f4e0;
    }
    ctx->pc = 0x10F4D8u;
    {
        const bool branch_taken_0x10f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4D8u;
        // 0x10f4dc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4d8) {
            ctx->pc = 0x10F4E8u;
            goto label_10f4e8;
        }
    }
    ctx->pc = 0x10F4E0u;
label_10f4e0:
    // 0x10f4e0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f4e0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f4e4:
    // 0x10f4e4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x10f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f4e8:
    // 0x10f4e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_10f4ec:
    if (ctx->pc == 0x10F4ECu) {
        ctx->pc = 0x10F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4E8u;
        // 0x10f4ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F4F0u;
        goto label_10f4f0;
    }
    ctx->pc = 0x10F4E8u;
    {
        const bool branch_taken_0x10f4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4E8u;
        // 0x10f4ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4e8) {
            ctx->pc = 0x10F534u;
            goto label_10f534;
        }
    }
    ctx->pc = 0x10F4F0u;
label_10f4f0:
    // 0x10f4f0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10f4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10f4f4:
    // 0x10f4f4: 0x0  nop
    ctx->pc = 0x10f4f4u;
    // NOP
label_10f4f8:
    // 0x10f4f8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10f4fc:
    // 0x10f4fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f500:
    // 0x10f500: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10f500u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10f504:
    // 0x10f504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f508:
    // 0x10f508: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f50c:
    // 0x10f50c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f510:
    // 0x10f510: 0x60f809  jalr        $v1
label_10f514:
    if (ctx->pc == 0x10F514u) {
        ctx->pc = 0x10F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F510u;
        // 0x10f514: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F518u;
        goto label_10f518;
    }
    ctx->pc = 0x10F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F518u);
        ctx->pc = 0x10F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F510u;
        // 0x10f514: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F510u, 0x10F518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F518u;
label_10f518:
    // 0x10f518: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f51c:
    // 0x10f51c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f520:
    // 0x10f520: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f524:
    // 0x10f524: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10f524u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10f528:
    // 0x10f528: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10f528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10f52c:
    // 0x10f52c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_10f530:
    if (ctx->pc == 0x10F530u) {
        ctx->pc = 0x10F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F52Cu;
        // 0x10f530: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F534u;
        goto label_10f534;
    }
    ctx->pc = 0x10F52Cu;
    {
        const bool branch_taken_0x10f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F52Cu;
        // 0x10f530: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f52c) {
            ctx->pc = 0x10F4F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f4f8;
        }
    }
    ctx->pc = 0x10F534u;
label_10f534:
    // 0x10f534: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_10f538:
    if (ctx->pc == 0x10F538u) {
        ctx->pc = 0x10F53Cu;
        goto label_10f53c;
    }
    ctx->pc = 0x10F534u;
    {
        const bool branch_taken_0x10f534 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x10f534) {
            ctx->pc = 0x10F568u;
            goto label_10f568;
        }
    }
    ctx->pc = 0x10F53Cu;
label_10f53c:
    // 0x10f53c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10f53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10f540:
    // 0x10f540: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f544:
    // 0x10f544: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10f544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10f548:
    // 0x10f548: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f54c:
    // 0x10f54c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f550:
    // 0x10f550: 0x60f809  jalr        $v1
label_10f554:
    if (ctx->pc == 0x10F554u) {
        ctx->pc = 0x10F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F550u;
        // 0x10f554: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F558u;
        goto label_10f558;
    }
    ctx->pc = 0x10F550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F558u);
        ctx->pc = 0x10F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F550u;
        // 0x10f554: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F550u, 0x10F558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F558u;
label_10f558:
    // 0x10f558: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f55c:
    // 0x10f55c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f560:
    // 0x10f560: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10f564:
    if (ctx->pc == 0x10F564u) {
        ctx->pc = 0x10F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F560u;
        // 0x10f564: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F568u;
        goto label_10f568;
    }
    ctx->pc = 0x10F560u;
    {
        const bool branch_taken_0x10f560 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F560u;
        // 0x10f564: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f560) {
            ctx->pc = 0x10F540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f540;
        }
    }
    ctx->pc = 0x10F568u;
label_10f568:
    // 0x10f568: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_10f56c:
    if (ctx->pc == 0x10F56Cu) {
        ctx->pc = 0x10F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F568u;
        // 0x10f56c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F570u;
        goto label_10f570;
    }
    ctx->pc = 0x10F568u;
    {
        const bool branch_taken_0x10f568 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f568) {
            ctx->pc = 0x10F56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F568u;
            // 0x10f56c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10F570u;
label_10f570:
    // 0x10f570: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10f570u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_10f574:
    // 0x10f574: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f578:
    // 0x10f578: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10f57c:
    // 0x10f57c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f580:
    // 0x10f580: 0x60f809  jalr        $v1
label_10f584:
    if (ctx->pc == 0x10F584u) {
        ctx->pc = 0x10F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F580u;
        // 0x10f584: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F588u;
        goto label_10f588;
    }
    ctx->pc = 0x10F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F588u);
        ctx->pc = 0x10F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F580u;
        // 0x10f584: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F580u, 0x10F588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F588u;
label_10f588:
    // 0x10f588: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f58c:
    // 0x10f58c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f590:
    // 0x10f590: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x10f590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f594:
    // 0x10f594: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10f598:
    if (ctx->pc == 0x10F598u) {
        ctx->pc = 0x10F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F594u;
        // 0x10f598: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F59Cu;
        goto label_10f59c;
    }
    ctx->pc = 0x10F594u;
    {
        const bool branch_taken_0x10f594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F594u;
        // 0x10f598: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f594) {
            ctx->pc = 0x10F570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f570;
        }
    }
    ctx->pc = 0x10F59Cu;
label_10f59c:
    // 0x10f59c: 0x10000055  b           . + 4 + (0x55 << 2)
label_10f5a0:
    if (ctx->pc == 0x10F5A0u) {
        ctx->pc = 0x10F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F59Cu;
        // 0x10f5a0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F5A4u;
        goto label_10f5a4;
    }
    ctx->pc = 0x10F59Cu;
    {
        const bool branch_taken_0x10f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F59Cu;
        // 0x10f5a0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f59c) {
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10F5A4u;
label_10f5a4:
    // 0x10f5a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f5a8:
    // 0x10f5a8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_10f5ac:
    if (ctx->pc == 0x10F5ACu) {
        ctx->pc = 0x10F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5A8u;
        // 0x10f5ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F5B0u;
        goto label_10f5b0;
    }
    ctx->pc = 0x10F5A8u;
    {
        const bool branch_taken_0x10f5a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5A8u;
        // 0x10f5ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5a8) {
            ctx->pc = 0x10F600u;
            goto label_10f600;
        }
    }
    ctx->pc = 0x10F5B0u;
label_10f5b0:
    // 0x10f5b0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f5b0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f5b4:
    // 0x10f5b4: 0x0  nop
    ctx->pc = 0x10f5b4u;
    // NOP
label_10f5b8:
    // 0x10f5b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f5bc:
    // 0x10f5bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10f5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10f5c0:
    // 0x10f5c0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f5c4:
    // 0x10f5c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f5c8:
    // 0x10f5c8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f5cc:
    // 0x10f5cc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x10f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_10f5d0:
    // 0x10f5d0: 0x60f809  jalr        $v1
label_10f5d4:
    if (ctx->pc == 0x10F5D4u) {
        ctx->pc = 0x10F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5D0u;
        // 0x10f5d4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F5D8u;
        goto label_10f5d8;
    }
    ctx->pc = 0x10F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F5D8u);
        ctx->pc = 0x10F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5D0u;
        // 0x10f5d4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5D0u, 0x10F5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F5D8u;
label_10f5d8:
    // 0x10f5d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f5dc:
    // 0x10f5dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10f5e0:
    // 0x10f5e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f5e4:
    // 0x10f5e4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x10f5e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10f5e8:
    // 0x10f5e8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x10f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_10f5ec:
    // 0x10f5ec: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10f5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10f5f0:
    // 0x10f5f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_10f5f4:
    if (ctx->pc == 0x10F5F4u) {
        ctx->pc = 0x10F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5F0u;
        // 0x10f5f4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F5F8u;
        goto label_10f5f8;
    }
    ctx->pc = 0x10F5F0u;
    {
        const bool branch_taken_0x10f5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5F0u;
        // 0x10f5f4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5f0) {
            ctx->pc = 0x10F5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f5b8;
        }
    }
    ctx->pc = 0x10F5F8u;
label_10f5f8:
    // 0x10f5f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_10f5fc:
    if (ctx->pc == 0x10F5FCu) {
        ctx->pc = 0x10F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5F8u;
        // 0x10f5fc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F600u;
        goto label_10f600;
    }
    ctx->pc = 0x10F5F8u;
    {
        const bool branch_taken_0x10f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5F8u;
        // 0x10f5fc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5f8) {
            ctx->pc = 0x10F608u;
            goto label_10f608;
        }
    }
    ctx->pc = 0x10F600u;
label_10f600:
    // 0x10f600: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x10f600u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f604:
    // 0x10f604: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x10f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f608:
    // 0x10f608: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_10f60c:
    if (ctx->pc == 0x10F60Cu) {
        ctx->pc = 0x10F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F608u;
        // 0x10f60c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F610u;
        goto label_10f610;
    }
    ctx->pc = 0x10F608u;
    {
        const bool branch_taken_0x10f608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F608u;
        // 0x10f60c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f608) {
            ctx->pc = 0x10F654u;
            goto label_10f654;
        }
    }
    ctx->pc = 0x10F610u;
label_10f610:
    // 0x10f610: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x10f610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10f614:
    // 0x10f614: 0x0  nop
    ctx->pc = 0x10f614u;
    // NOP
label_10f618:
    // 0x10f618: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x10f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10f61c:
    // 0x10f61c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f620:
    // 0x10f620: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x10f620u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10f624:
    // 0x10f624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10f624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10f628:
    // 0x10f628: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f62c:
    // 0x10f62c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f630:
    // 0x10f630: 0x60f809  jalr        $v1
label_10f634:
    if (ctx->pc == 0x10F634u) {
        ctx->pc = 0x10F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F630u;
        // 0x10f634: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F638u;
        goto label_10f638;
    }
    ctx->pc = 0x10F630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F638u);
        ctx->pc = 0x10F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F630u;
        // 0x10f634: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F630u, 0x10F638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F638u;
label_10f638:
    // 0x10f638: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f63c:
    // 0x10f63c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x10f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_10f640:
    // 0x10f640: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f644:
    // 0x10f644: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x10f644u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10f648:
    // 0x10f648: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x10f648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10f64c:
    // 0x10f64c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_10f650:
    if (ctx->pc == 0x10F650u) {
        ctx->pc = 0x10F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F64Cu;
        // 0x10f650: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F654u;
        goto label_10f654;
    }
    ctx->pc = 0x10F64Cu;
    {
        const bool branch_taken_0x10f64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F64Cu;
        // 0x10f650: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f64c) {
            ctx->pc = 0x10F618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f618;
        }
    }
    ctx->pc = 0x10F654u;
label_10f654:
    // 0x10f654: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_10f658:
    if (ctx->pc == 0x10F658u) {
        ctx->pc = 0x10F65Cu;
        goto label_10f65c;
    }
    ctx->pc = 0x10F654u;
    {
        const bool branch_taken_0x10f654 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x10f654) {
            ctx->pc = 0x10F688u;
            goto label_10f688;
        }
    }
    ctx->pc = 0x10F65Cu;
label_10f65c:
    // 0x10f65c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10f65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10f660:
    // 0x10f660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f664:
    // 0x10f664: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10f668:
    // 0x10f668: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f66c:
    // 0x10f66c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f670:
    // 0x10f670: 0x60f809  jalr        $v1
label_10f674:
    if (ctx->pc == 0x10F674u) {
        ctx->pc = 0x10F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F670u;
        // 0x10f674: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F678u;
        goto label_10f678;
    }
    ctx->pc = 0x10F670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F678u);
        ctx->pc = 0x10F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F670u;
        // 0x10f674: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F670u, 0x10F678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F678u;
label_10f678:
    // 0x10f678: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f67c:
    // 0x10f67c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f680:
    // 0x10f680: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_10f684:
    if (ctx->pc == 0x10F684u) {
        ctx->pc = 0x10F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F680u;
        // 0x10f684: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F688u;
        goto label_10f688;
    }
    ctx->pc = 0x10F680u;
    {
        const bool branch_taken_0x10f680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F680u;
        // 0x10f684: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f680) {
            ctx->pc = 0x10F660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f660;
        }
    }
    ctx->pc = 0x10F688u;
label_10f688:
    // 0x10f688: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_10f68c:
    if (ctx->pc == 0x10F68Cu) {
        ctx->pc = 0x10F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F688u;
        // 0x10f68c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F690u;
        goto label_10f690;
    }
    ctx->pc = 0x10F688u;
    {
        const bool branch_taken_0x10f688 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f688) {
            ctx->pc = 0x10F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F688u;
            // 0x10f68c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10F690u;
label_10f690:
    // 0x10f690: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10f690u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_10f694:
    // 0x10f694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f698:
    // 0x10f698: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10f698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10f69c:
    // 0x10f69c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f6a0:
    // 0x10f6a0: 0x60f809  jalr        $v1
label_10f6a4:
    if (ctx->pc == 0x10F6A4u) {
        ctx->pc = 0x10F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A0u;
        // 0x10f6a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6A8u;
        goto label_10f6a8;
    }
    ctx->pc = 0x10F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F6A8u);
        ctx->pc = 0x10F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A0u;
        // 0x10f6a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6A0u, 0x10F6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F6A8u;
label_10f6a8:
    // 0x10f6a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f6ac:
    // 0x10f6ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f6b0:
    // 0x10f6b0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x10f6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10f6b4:
    // 0x10f6b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10f6b8:
    if (ctx->pc == 0x10F6B8u) {
        ctx->pc = 0x10F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6B4u;
        // 0x10f6b8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6BCu;
        goto label_10f6bc;
    }
    ctx->pc = 0x10F6B4u;
    {
        const bool branch_taken_0x10f6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6B4u;
        // 0x10f6b8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6b4) {
            ctx->pc = 0x10F690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f690;
        }
    }
    ctx->pc = 0x10F6BCu;
label_10f6bc:
    // 0x10f6bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_10f6c0:
    if (ctx->pc == 0x10F6C0u) {
        ctx->pc = 0x10F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6BCu;
        // 0x10f6c0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6C4u;
        goto label_10f6c4;
    }
    ctx->pc = 0x10F6BCu;
    {
        const bool branch_taken_0x10f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6BCu;
        // 0x10f6c0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6bc) {
            ctx->pc = 0x10F6F4u;
            goto label_10f6f4;
        }
    }
    ctx->pc = 0x10F6C4u;
label_10f6c4:
    // 0x10f6c4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_10f6c8:
    if (ctx->pc == 0x10F6C8u) {
        ctx->pc = 0x10F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6C4u;
        // 0x10f6c8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6CCu;
        goto label_10f6cc;
    }
    ctx->pc = 0x10F6C4u;
    {
        const bool branch_taken_0x10f6c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6C4u;
        // 0x10f6c8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6c4) {
            ctx->pc = 0x10F6F0u;
            goto label_10f6f0;
        }
    }
    ctx->pc = 0x10F6CCu;
label_10f6cc:
    // 0x10f6cc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f6ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f6d0:
    // 0x10f6d0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x10f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_10f6d4:
    // 0x10f6d4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f6d8:
    // 0x10f6d8: 0x60f809  jalr        $v1
label_10f6dc:
    if (ctx->pc == 0x10F6DCu) {
        ctx->pc = 0x10F6E0u;
        goto label_10f6e0;
    }
    ctx->pc = 0x10F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F6E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6D8u, 0x10F6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F6E0u;
label_10f6e0:
    // 0x10f6e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x10f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f6e4:
    // 0x10f6e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10f6e8:
    // 0x10f6e8: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_10f6ec:
    if (ctx->pc == 0x10F6ECu) {
        ctx->pc = 0x10F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6E8u;
        // 0x10f6ec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6F0u;
        goto label_10f6f0;
    }
    ctx->pc = 0x10F6E8u;
    {
        const bool branch_taken_0x10f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6E8u;
        // 0x10f6ec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6e8) {
            ctx->pc = 0x10EFE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10efe4;
        }
    }
    ctx->pc = 0x10F6F0u;
label_10f6f0:
    // 0x10f6f0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10f6f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10f6f4:
    // 0x10f6f4: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x10f6f4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_10f6f8:
    // 0x10f6f8: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x10f6f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10f6fc:
    // 0x10f6fc: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_10f700:
    if (ctx->pc == 0x10F700u) {
        ctx->pc = 0x10F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6FCu;
        // 0x10f700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F704u;
        goto label_10f704;
    }
    ctx->pc = 0x10F6FCu;
    {
        const bool branch_taken_0x10f6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6FCu;
        // 0x10f700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6fc) {
            ctx->pc = 0x10EAA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10eaa8;
        }
    }
    ctx->pc = 0x10F704u;
label_10f704:
    // 0x10f704: 0x10000004  b           . + 4 + (0x4 << 2)
label_10f708:
    if (ctx->pc == 0x10F708u) {
        ctx->pc = 0x10F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F704u;
        // 0x10f708: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F70Cu;
        goto label_10f70c;
    }
    ctx->pc = 0x10F704u;
    {
        const bool branch_taken_0x10f704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F704u;
        // 0x10f708: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f704) {
            ctx->pc = 0x10F718u;
            goto label_10f718;
        }
    }
    ctx->pc = 0x10F70Cu;
label_10f70c:
    // 0x10f70c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10f710:
    // 0x10f710: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x10f710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_10f714:
    // 0x10f714: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x10f714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10f718:
    // 0x10f718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f71c:
    // 0x10f71c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10f720:
    // 0x10f720: 0x60f809  jalr        $v1
label_10f724:
    if (ctx->pc == 0x10F724u) {
        ctx->pc = 0x10F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F720u;
        // 0x10f724: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F728u;
        goto label_10f728;
    }
    ctx->pc = 0x10F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F728u);
        ctx->pc = 0x10F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F720u;
        // 0x10f724: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F720u, 0x10F728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F728u;
label_10f728:
    // 0x10f728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x10f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10f72c:
    // 0x10f72c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x10f72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_10f730:
    // 0x10f730: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x10f730u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_10f734:
    // 0x10f734: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x10f734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_10f738:
    // 0x10f738: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x10f738u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_10f73c:
    // 0x10f73c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x10f73cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_10f740:
    // 0x10f740: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_10f744:
    // 0x10f744: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x10f744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_10f748:
    // 0x10f748: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x10f748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_10f74c:
    // 0x10f74c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x10f74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10f750:
    // 0x10f750: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x10f750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_10f754:
    // 0x10f754: 0x3e00008  jr          $ra
label_10f758:
    if (ctx->pc == 0x10F758u) {
        ctx->pc = 0x10F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F754u;
        // 0x10f758: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F75Cu;
        goto label_10f75c;
    }
    ctx->pc = 0x10F754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F754u;
        // 0x10f758: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F75Cu;
label_10f75c:
    // 0x10f75c: 0x0  nop
    ctx->pc = 0x10f75cu;
    // NOP
label_10f760:
    // 0x10f760: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10f764:
    // 0x10f764: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10f768:
    if (ctx->pc == 0x10F768u) {
        ctx->pc = 0x10F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F764u;
        // 0x10f768: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F76Cu;
        goto label_10f76c;
    }
    ctx->pc = 0x10F764u;
    {
        const bool branch_taken_0x10f764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F764u;
        // 0x10f768: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f764) {
            ctx->pc = 0x10F774u;
            goto label_10f774;
        }
    }
    ctx->pc = 0x10F76Cu;
label_10f76c:
    // 0x10f76c: 0x3e00008  jr          $ra
label_10f770:
    if (ctx->pc == 0x10F770u) {
        ctx->pc = 0x10F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F76Cu;
        // 0x10f770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F774u;
        goto label_10f774;
    }
    ctx->pc = 0x10F76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F76Cu;
        // 0x10f770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F774u;
label_10f774:
    // 0x10f774: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x10f774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_10f778:
    // 0x10f778: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_10f77c:
    if (ctx->pc == 0x10F77Cu) {
        ctx->pc = 0x10F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F778u;
        // 0x10f77c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F780u;
        goto label_10f780;
    }
    ctx->pc = 0x10F778u;
    {
        const bool branch_taken_0x10f778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f778) {
            ctx->pc = 0x10F77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F778u;
            // 0x10f77c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F7ACu;
            goto label_10f7ac;
        }
    }
    ctx->pc = 0x10F780u;
label_10f780:
    // 0x10f780: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x10f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_10f784:
    // 0x10f784: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x10f784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_10f788:
    // 0x10f788: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x10f788u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_10f78c:
    // 0x10f78c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x10f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_10f790:
    // 0x10f790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f794:
    // 0x10f794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10f794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10f798:
    // 0x10f798: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10f79c:
    // 0x10f79c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x10f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_10f7a0:
    // 0x10f7a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10f7a4:
    // 0x10f7a4: 0x3e00008  jr          $ra
label_10f7a8:
    if (ctx->pc == 0x10F7A8u) {
        ctx->pc = 0x10F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7A4u;
        // 0x10f7a8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7ACu;
        goto label_10f7ac;
    }
    ctx->pc = 0x10F7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7A4u;
        // 0x10f7a8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7ACu;
label_10f7ac:
    // 0x10f7ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f7b0:
    // 0x10f7b0: 0x3e00008  jr          $ra
label_10f7b4:
    if (ctx->pc == 0x10F7B4u) {
        ctx->pc = 0x10F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7B0u;
        // 0x10f7b4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7B8u;
        goto label_10f7b8;
    }
    ctx->pc = 0x10F7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7B0u;
        // 0x10f7b4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7B8u;
label_10f7b8:
    // 0x10f7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10f7bc:
    // 0x10f7bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10f7c0:
    // 0x10f7c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_10f7c4:
    if (ctx->pc == 0x10F7C4u) {
        ctx->pc = 0x10F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7C0u;
        // 0x10f7c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7C8u;
        goto label_10f7c8;
    }
    ctx->pc = 0x10F7C0u;
    {
        const bool branch_taken_0x10f7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7C0u;
        // 0x10f7c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7c0) {
            ctx->pc = 0x10F7D0u;
            goto label_10f7d0;
        }
    }
    ctx->pc = 0x10F7C8u;
label_10f7c8:
    // 0x10f7c8: 0xc0439be  jal         func_10E6F8
label_10f7cc:
    if (ctx->pc == 0x10F7CCu) {
        ctx->pc = 0x10F7D0u;
        goto label_10f7d0;
    }
    ctx->pc = 0x10F7C8u;
    SET_GPR_U32(ctx, 31, 0x10F7D0u);
    ctx->pc = 0x10E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E6F8u, 0x10F7C8u, 0x10F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7D0u;
label_10f7d0:
    // 0x10f7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f7d4:
    // 0x10f7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f7d8:
    // 0x10f7d8: 0x3e00008  jr          $ra
label_10f7dc:
    if (ctx->pc == 0x10F7DCu) {
        ctx->pc = 0x10F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7D8u;
        // 0x10f7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7E0u;
        goto label_10f7e0;
    }
    ctx->pc = 0x10F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7D8u;
        // 0x10f7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7E0u;
label_10f7e0:
    // 0x10f7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10f7e4:
    // 0x10f7e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10f7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10f7e8:
    // 0x10f7e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_10f7ec:
    if (ctx->pc == 0x10F7ECu) {
        ctx->pc = 0x10F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7E8u;
        // 0x10f7ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7F0u;
        goto label_10f7f0;
    }
    ctx->pc = 0x10F7E8u;
    {
        const bool branch_taken_0x10f7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7E8u;
        // 0x10f7ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7e8) {
            ctx->pc = 0x10F7F8u;
            goto label_10f7f8;
        }
    }
    ctx->pc = 0x10F7F0u;
label_10f7f0:
    // 0x10f7f0: 0xc0439ea  jal         func_10E7A8
label_10f7f4:
    if (ctx->pc == 0x10F7F4u) {
        ctx->pc = 0x10F7F8u;
        goto label_10f7f8;
    }
    ctx->pc = 0x10F7F0u;
    SET_GPR_U32(ctx, 31, 0x10F7F8u);
    ctx->pc = 0x10E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A8u, 0x10F7F0u, 0x10F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7F8u;
label_10f7f8:
    // 0x10f7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f7fc:
    // 0x10f7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f800:
    // 0x10f800: 0x3e00008  jr          $ra
label_10f804:
    if (ctx->pc == 0x10F804u) {
        ctx->pc = 0x10F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F800u;
        // 0x10f804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F808u;
        goto label_fallthrough_0x10f800;
    }
    ctx->pc = 0x10F800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F800u;
        // 0x10f804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f800:
    ctx->pc = 0x10F808u;
}
