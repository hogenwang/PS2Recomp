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

// Function: sub_002D85E0
// Address: 0x2d85e0 - 0x2d8fc0
void sub_002D85E0_0x2d85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D85E0_0x2d85e0");
#endif

    switch (ctx->pc) {
        case 0x2d85e0u: goto label_2d85e0;
        case 0x2d85e4u: goto label_2d85e4;
        case 0x2d85e8u: goto label_2d85e8;
        case 0x2d85ecu: goto label_2d85ec;
        case 0x2d85f0u: goto label_2d85f0;
        case 0x2d85f4u: goto label_2d85f4;
        case 0x2d85f8u: goto label_2d85f8;
        case 0x2d85fcu: goto label_2d85fc;
        case 0x2d8600u: goto label_2d8600;
        case 0x2d8604u: goto label_2d8604;
        case 0x2d8608u: goto label_2d8608;
        case 0x2d860cu: goto label_2d860c;
        case 0x2d8610u: goto label_2d8610;
        case 0x2d8614u: goto label_2d8614;
        case 0x2d8618u: goto label_2d8618;
        case 0x2d861cu: goto label_2d861c;
        case 0x2d8620u: goto label_2d8620;
        case 0x2d8624u: goto label_2d8624;
        case 0x2d8628u: goto label_2d8628;
        case 0x2d862cu: goto label_2d862c;
        case 0x2d8630u: goto label_2d8630;
        case 0x2d8634u: goto label_2d8634;
        case 0x2d8638u: goto label_2d8638;
        case 0x2d863cu: goto label_2d863c;
        case 0x2d8640u: goto label_2d8640;
        case 0x2d8644u: goto label_2d8644;
        case 0x2d8648u: goto label_2d8648;
        case 0x2d864cu: goto label_2d864c;
        case 0x2d8650u: goto label_2d8650;
        case 0x2d8654u: goto label_2d8654;
        case 0x2d8658u: goto label_2d8658;
        case 0x2d865cu: goto label_2d865c;
        case 0x2d8660u: goto label_2d8660;
        case 0x2d8664u: goto label_2d8664;
        case 0x2d8668u: goto label_2d8668;
        case 0x2d866cu: goto label_2d866c;
        case 0x2d8670u: goto label_2d8670;
        case 0x2d8674u: goto label_2d8674;
        case 0x2d8678u: goto label_2d8678;
        case 0x2d867cu: goto label_2d867c;
        case 0x2d8680u: goto label_2d8680;
        case 0x2d8684u: goto label_2d8684;
        case 0x2d8688u: goto label_2d8688;
        case 0x2d868cu: goto label_2d868c;
        case 0x2d8690u: goto label_2d8690;
        case 0x2d8694u: goto label_2d8694;
        case 0x2d8698u: goto label_2d8698;
        case 0x2d869cu: goto label_2d869c;
        case 0x2d86a0u: goto label_2d86a0;
        case 0x2d86a4u: goto label_2d86a4;
        case 0x2d86a8u: goto label_2d86a8;
        case 0x2d86acu: goto label_2d86ac;
        case 0x2d86b0u: goto label_2d86b0;
        case 0x2d86b4u: goto label_2d86b4;
        case 0x2d86b8u: goto label_2d86b8;
        case 0x2d86bcu: goto label_2d86bc;
        case 0x2d86c0u: goto label_2d86c0;
        case 0x2d86c4u: goto label_2d86c4;
        case 0x2d86c8u: goto label_2d86c8;
        case 0x2d86ccu: goto label_2d86cc;
        case 0x2d86d0u: goto label_2d86d0;
        case 0x2d86d4u: goto label_2d86d4;
        case 0x2d86d8u: goto label_2d86d8;
        case 0x2d86dcu: goto label_2d86dc;
        case 0x2d86e0u: goto label_2d86e0;
        case 0x2d86e4u: goto label_2d86e4;
        case 0x2d86e8u: goto label_2d86e8;
        case 0x2d86ecu: goto label_2d86ec;
        case 0x2d86f0u: goto label_2d86f0;
        case 0x2d86f4u: goto label_2d86f4;
        case 0x2d86f8u: goto label_2d86f8;
        case 0x2d86fcu: goto label_2d86fc;
        case 0x2d8700u: goto label_2d8700;
        case 0x2d8704u: goto label_2d8704;
        case 0x2d8708u: goto label_2d8708;
        case 0x2d870cu: goto label_2d870c;
        case 0x2d8710u: goto label_2d8710;
        case 0x2d8714u: goto label_2d8714;
        case 0x2d8718u: goto label_2d8718;
        case 0x2d871cu: goto label_2d871c;
        case 0x2d8720u: goto label_2d8720;
        case 0x2d8724u: goto label_2d8724;
        case 0x2d8728u: goto label_2d8728;
        case 0x2d872cu: goto label_2d872c;
        case 0x2d8730u: goto label_2d8730;
        case 0x2d8734u: goto label_2d8734;
        case 0x2d8738u: goto label_2d8738;
        case 0x2d873cu: goto label_2d873c;
        case 0x2d8740u: goto label_2d8740;
        case 0x2d8744u: goto label_2d8744;
        case 0x2d8748u: goto label_2d8748;
        case 0x2d874cu: goto label_2d874c;
        case 0x2d8750u: goto label_2d8750;
        case 0x2d8754u: goto label_2d8754;
        case 0x2d8758u: goto label_2d8758;
        case 0x2d875cu: goto label_2d875c;
        case 0x2d8760u: goto label_2d8760;
        case 0x2d8764u: goto label_2d8764;
        case 0x2d8768u: goto label_2d8768;
        case 0x2d876cu: goto label_2d876c;
        case 0x2d8770u: goto label_2d8770;
        case 0x2d8774u: goto label_2d8774;
        case 0x2d8778u: goto label_2d8778;
        case 0x2d877cu: goto label_2d877c;
        case 0x2d8780u: goto label_2d8780;
        case 0x2d8784u: goto label_2d8784;
        case 0x2d8788u: goto label_2d8788;
        case 0x2d878cu: goto label_2d878c;
        case 0x2d8790u: goto label_2d8790;
        case 0x2d8794u: goto label_2d8794;
        case 0x2d8798u: goto label_2d8798;
        case 0x2d879cu: goto label_2d879c;
        case 0x2d87a0u: goto label_2d87a0;
        case 0x2d87a4u: goto label_2d87a4;
        case 0x2d87a8u: goto label_2d87a8;
        case 0x2d87acu: goto label_2d87ac;
        case 0x2d87b0u: goto label_2d87b0;
        case 0x2d87b4u: goto label_2d87b4;
        case 0x2d87b8u: goto label_2d87b8;
        case 0x2d87bcu: goto label_2d87bc;
        case 0x2d87c0u: goto label_2d87c0;
        case 0x2d87c4u: goto label_2d87c4;
        case 0x2d87c8u: goto label_2d87c8;
        case 0x2d87ccu: goto label_2d87cc;
        case 0x2d87d0u: goto label_2d87d0;
        case 0x2d87d4u: goto label_2d87d4;
        case 0x2d87d8u: goto label_2d87d8;
        case 0x2d87dcu: goto label_2d87dc;
        case 0x2d87e0u: goto label_2d87e0;
        case 0x2d87e4u: goto label_2d87e4;
        case 0x2d87e8u: goto label_2d87e8;
        case 0x2d87ecu: goto label_2d87ec;
        case 0x2d87f0u: goto label_2d87f0;
        case 0x2d87f4u: goto label_2d87f4;
        case 0x2d87f8u: goto label_2d87f8;
        case 0x2d87fcu: goto label_2d87fc;
        case 0x2d8800u: goto label_2d8800;
        case 0x2d8804u: goto label_2d8804;
        case 0x2d8808u: goto label_2d8808;
        case 0x2d880cu: goto label_2d880c;
        case 0x2d8810u: goto label_2d8810;
        case 0x2d8814u: goto label_2d8814;
        case 0x2d8818u: goto label_2d8818;
        case 0x2d881cu: goto label_2d881c;
        case 0x2d8820u: goto label_2d8820;
        case 0x2d8824u: goto label_2d8824;
        case 0x2d8828u: goto label_2d8828;
        case 0x2d882cu: goto label_2d882c;
        case 0x2d8830u: goto label_2d8830;
        case 0x2d8834u: goto label_2d8834;
        case 0x2d8838u: goto label_2d8838;
        case 0x2d883cu: goto label_2d883c;
        case 0x2d8840u: goto label_2d8840;
        case 0x2d8844u: goto label_2d8844;
        case 0x2d8848u: goto label_2d8848;
        case 0x2d884cu: goto label_2d884c;
        case 0x2d8850u: goto label_2d8850;
        case 0x2d8854u: goto label_2d8854;
        case 0x2d8858u: goto label_2d8858;
        case 0x2d885cu: goto label_2d885c;
        case 0x2d8860u: goto label_2d8860;
        case 0x2d8864u: goto label_2d8864;
        case 0x2d8868u: goto label_2d8868;
        case 0x2d886cu: goto label_2d886c;
        case 0x2d8870u: goto label_2d8870;
        case 0x2d8874u: goto label_2d8874;
        case 0x2d8878u: goto label_2d8878;
        case 0x2d887cu: goto label_2d887c;
        case 0x2d8880u: goto label_2d8880;
        case 0x2d8884u: goto label_2d8884;
        case 0x2d8888u: goto label_2d8888;
        case 0x2d888cu: goto label_2d888c;
        case 0x2d8890u: goto label_2d8890;
        case 0x2d8894u: goto label_2d8894;
        case 0x2d8898u: goto label_2d8898;
        case 0x2d889cu: goto label_2d889c;
        case 0x2d88a0u: goto label_2d88a0;
        case 0x2d88a4u: goto label_2d88a4;
        case 0x2d88a8u: goto label_2d88a8;
        case 0x2d88acu: goto label_2d88ac;
        case 0x2d88b0u: goto label_2d88b0;
        case 0x2d88b4u: goto label_2d88b4;
        case 0x2d88b8u: goto label_2d88b8;
        case 0x2d88bcu: goto label_2d88bc;
        case 0x2d88c0u: goto label_2d88c0;
        case 0x2d88c4u: goto label_2d88c4;
        case 0x2d88c8u: goto label_2d88c8;
        case 0x2d88ccu: goto label_2d88cc;
        case 0x2d88d0u: goto label_2d88d0;
        case 0x2d88d4u: goto label_2d88d4;
        case 0x2d88d8u: goto label_2d88d8;
        case 0x2d88dcu: goto label_2d88dc;
        case 0x2d88e0u: goto label_2d88e0;
        case 0x2d88e4u: goto label_2d88e4;
        case 0x2d88e8u: goto label_2d88e8;
        case 0x2d88ecu: goto label_2d88ec;
        case 0x2d88f0u: goto label_2d88f0;
        case 0x2d88f4u: goto label_2d88f4;
        case 0x2d88f8u: goto label_2d88f8;
        case 0x2d88fcu: goto label_2d88fc;
        case 0x2d8900u: goto label_2d8900;
        case 0x2d8904u: goto label_2d8904;
        case 0x2d8908u: goto label_2d8908;
        case 0x2d890cu: goto label_2d890c;
        case 0x2d8910u: goto label_2d8910;
        case 0x2d8914u: goto label_2d8914;
        case 0x2d8918u: goto label_2d8918;
        case 0x2d891cu: goto label_2d891c;
        case 0x2d8920u: goto label_2d8920;
        case 0x2d8924u: goto label_2d8924;
        case 0x2d8928u: goto label_2d8928;
        case 0x2d892cu: goto label_2d892c;
        case 0x2d8930u: goto label_2d8930;
        case 0x2d8934u: goto label_2d8934;
        case 0x2d8938u: goto label_2d8938;
        case 0x2d893cu: goto label_2d893c;
        case 0x2d8940u: goto label_2d8940;
        case 0x2d8944u: goto label_2d8944;
        case 0x2d8948u: goto label_2d8948;
        case 0x2d894cu: goto label_2d894c;
        case 0x2d8950u: goto label_2d8950;
        case 0x2d8954u: goto label_2d8954;
        case 0x2d8958u: goto label_2d8958;
        case 0x2d895cu: goto label_2d895c;
        case 0x2d8960u: goto label_2d8960;
        case 0x2d8964u: goto label_2d8964;
        case 0x2d8968u: goto label_2d8968;
        case 0x2d896cu: goto label_2d896c;
        case 0x2d8970u: goto label_2d8970;
        case 0x2d8974u: goto label_2d8974;
        case 0x2d8978u: goto label_2d8978;
        case 0x2d897cu: goto label_2d897c;
        case 0x2d8980u: goto label_2d8980;
        case 0x2d8984u: goto label_2d8984;
        case 0x2d8988u: goto label_2d8988;
        case 0x2d898cu: goto label_2d898c;
        case 0x2d8990u: goto label_2d8990;
        case 0x2d8994u: goto label_2d8994;
        case 0x2d8998u: goto label_2d8998;
        case 0x2d899cu: goto label_2d899c;
        case 0x2d89a0u: goto label_2d89a0;
        case 0x2d89a4u: goto label_2d89a4;
        case 0x2d89a8u: goto label_2d89a8;
        case 0x2d89acu: goto label_2d89ac;
        case 0x2d89b0u: goto label_2d89b0;
        case 0x2d89b4u: goto label_2d89b4;
        case 0x2d89b8u: goto label_2d89b8;
        case 0x2d89bcu: goto label_2d89bc;
        case 0x2d89c0u: goto label_2d89c0;
        case 0x2d89c4u: goto label_2d89c4;
        case 0x2d89c8u: goto label_2d89c8;
        case 0x2d89ccu: goto label_2d89cc;
        case 0x2d89d0u: goto label_2d89d0;
        case 0x2d89d4u: goto label_2d89d4;
        case 0x2d89d8u: goto label_2d89d8;
        case 0x2d89dcu: goto label_2d89dc;
        case 0x2d89e0u: goto label_2d89e0;
        case 0x2d89e4u: goto label_2d89e4;
        case 0x2d89e8u: goto label_2d89e8;
        case 0x2d89ecu: goto label_2d89ec;
        case 0x2d89f0u: goto label_2d89f0;
        case 0x2d89f4u: goto label_2d89f4;
        case 0x2d89f8u: goto label_2d89f8;
        case 0x2d89fcu: goto label_2d89fc;
        case 0x2d8a00u: goto label_2d8a00;
        case 0x2d8a04u: goto label_2d8a04;
        case 0x2d8a08u: goto label_2d8a08;
        case 0x2d8a0cu: goto label_2d8a0c;
        case 0x2d8a10u: goto label_2d8a10;
        case 0x2d8a14u: goto label_2d8a14;
        case 0x2d8a18u: goto label_2d8a18;
        case 0x2d8a1cu: goto label_2d8a1c;
        case 0x2d8a20u: goto label_2d8a20;
        case 0x2d8a24u: goto label_2d8a24;
        case 0x2d8a28u: goto label_2d8a28;
        case 0x2d8a2cu: goto label_2d8a2c;
        case 0x2d8a30u: goto label_2d8a30;
        case 0x2d8a34u: goto label_2d8a34;
        case 0x2d8a38u: goto label_2d8a38;
        case 0x2d8a3cu: goto label_2d8a3c;
        case 0x2d8a40u: goto label_2d8a40;
        case 0x2d8a44u: goto label_2d8a44;
        case 0x2d8a48u: goto label_2d8a48;
        case 0x2d8a4cu: goto label_2d8a4c;
        case 0x2d8a50u: goto label_2d8a50;
        case 0x2d8a54u: goto label_2d8a54;
        case 0x2d8a58u: goto label_2d8a58;
        case 0x2d8a5cu: goto label_2d8a5c;
        case 0x2d8a60u: goto label_2d8a60;
        case 0x2d8a64u: goto label_2d8a64;
        case 0x2d8a68u: goto label_2d8a68;
        case 0x2d8a6cu: goto label_2d8a6c;
        case 0x2d8a70u: goto label_2d8a70;
        case 0x2d8a74u: goto label_2d8a74;
        case 0x2d8a78u: goto label_2d8a78;
        case 0x2d8a7cu: goto label_2d8a7c;
        case 0x2d8a80u: goto label_2d8a80;
        case 0x2d8a84u: goto label_2d8a84;
        case 0x2d8a88u: goto label_2d8a88;
        case 0x2d8a8cu: goto label_2d8a8c;
        case 0x2d8a90u: goto label_2d8a90;
        case 0x2d8a94u: goto label_2d8a94;
        case 0x2d8a98u: goto label_2d8a98;
        case 0x2d8a9cu: goto label_2d8a9c;
        case 0x2d8aa0u: goto label_2d8aa0;
        case 0x2d8aa4u: goto label_2d8aa4;
        case 0x2d8aa8u: goto label_2d8aa8;
        case 0x2d8aacu: goto label_2d8aac;
        case 0x2d8ab0u: goto label_2d8ab0;
        case 0x2d8ab4u: goto label_2d8ab4;
        case 0x2d8ab8u: goto label_2d8ab8;
        case 0x2d8abcu: goto label_2d8abc;
        case 0x2d8ac0u: goto label_2d8ac0;
        case 0x2d8ac4u: goto label_2d8ac4;
        case 0x2d8ac8u: goto label_2d8ac8;
        case 0x2d8accu: goto label_2d8acc;
        case 0x2d8ad0u: goto label_2d8ad0;
        case 0x2d8ad4u: goto label_2d8ad4;
        case 0x2d8ad8u: goto label_2d8ad8;
        case 0x2d8adcu: goto label_2d8adc;
        case 0x2d8ae0u: goto label_2d8ae0;
        case 0x2d8ae4u: goto label_2d8ae4;
        case 0x2d8ae8u: goto label_2d8ae8;
        case 0x2d8aecu: goto label_2d8aec;
        case 0x2d8af0u: goto label_2d8af0;
        case 0x2d8af4u: goto label_2d8af4;
        case 0x2d8af8u: goto label_2d8af8;
        case 0x2d8afcu: goto label_2d8afc;
        case 0x2d8b00u: goto label_2d8b00;
        case 0x2d8b04u: goto label_2d8b04;
        case 0x2d8b08u: goto label_2d8b08;
        case 0x2d8b0cu: goto label_2d8b0c;
        case 0x2d8b10u: goto label_2d8b10;
        case 0x2d8b14u: goto label_2d8b14;
        case 0x2d8b18u: goto label_2d8b18;
        case 0x2d8b1cu: goto label_2d8b1c;
        case 0x2d8b20u: goto label_2d8b20;
        case 0x2d8b24u: goto label_2d8b24;
        case 0x2d8b28u: goto label_2d8b28;
        case 0x2d8b2cu: goto label_2d8b2c;
        case 0x2d8b30u: goto label_2d8b30;
        case 0x2d8b34u: goto label_2d8b34;
        case 0x2d8b38u: goto label_2d8b38;
        case 0x2d8b3cu: goto label_2d8b3c;
        case 0x2d8b40u: goto label_2d8b40;
        case 0x2d8b44u: goto label_2d8b44;
        case 0x2d8b48u: goto label_2d8b48;
        case 0x2d8b4cu: goto label_2d8b4c;
        case 0x2d8b50u: goto label_2d8b50;
        case 0x2d8b54u: goto label_2d8b54;
        case 0x2d8b58u: goto label_2d8b58;
        case 0x2d8b5cu: goto label_2d8b5c;
        case 0x2d8b60u: goto label_2d8b60;
        case 0x2d8b64u: goto label_2d8b64;
        case 0x2d8b68u: goto label_2d8b68;
        case 0x2d8b6cu: goto label_2d8b6c;
        case 0x2d8b70u: goto label_2d8b70;
        case 0x2d8b74u: goto label_2d8b74;
        case 0x2d8b78u: goto label_2d8b78;
        case 0x2d8b7cu: goto label_2d8b7c;
        case 0x2d8b80u: goto label_2d8b80;
        case 0x2d8b84u: goto label_2d8b84;
        case 0x2d8b88u: goto label_2d8b88;
        case 0x2d8b8cu: goto label_2d8b8c;
        case 0x2d8b90u: goto label_2d8b90;
        case 0x2d8b94u: goto label_2d8b94;
        case 0x2d8b98u: goto label_2d8b98;
        case 0x2d8b9cu: goto label_2d8b9c;
        case 0x2d8ba0u: goto label_2d8ba0;
        case 0x2d8ba4u: goto label_2d8ba4;
        case 0x2d8ba8u: goto label_2d8ba8;
        case 0x2d8bacu: goto label_2d8bac;
        case 0x2d8bb0u: goto label_2d8bb0;
        case 0x2d8bb4u: goto label_2d8bb4;
        case 0x2d8bb8u: goto label_2d8bb8;
        case 0x2d8bbcu: goto label_2d8bbc;
        case 0x2d8bc0u: goto label_2d8bc0;
        case 0x2d8bc4u: goto label_2d8bc4;
        case 0x2d8bc8u: goto label_2d8bc8;
        case 0x2d8bccu: goto label_2d8bcc;
        case 0x2d8bd0u: goto label_2d8bd0;
        case 0x2d8bd4u: goto label_2d8bd4;
        case 0x2d8bd8u: goto label_2d8bd8;
        case 0x2d8bdcu: goto label_2d8bdc;
        case 0x2d8be0u: goto label_2d8be0;
        case 0x2d8be4u: goto label_2d8be4;
        case 0x2d8be8u: goto label_2d8be8;
        case 0x2d8becu: goto label_2d8bec;
        case 0x2d8bf0u: goto label_2d8bf0;
        case 0x2d8bf4u: goto label_2d8bf4;
        case 0x2d8bf8u: goto label_2d8bf8;
        case 0x2d8bfcu: goto label_2d8bfc;
        case 0x2d8c00u: goto label_2d8c00;
        case 0x2d8c04u: goto label_2d8c04;
        case 0x2d8c08u: goto label_2d8c08;
        case 0x2d8c0cu: goto label_2d8c0c;
        case 0x2d8c10u: goto label_2d8c10;
        case 0x2d8c14u: goto label_2d8c14;
        case 0x2d8c18u: goto label_2d8c18;
        case 0x2d8c1cu: goto label_2d8c1c;
        case 0x2d8c20u: goto label_2d8c20;
        case 0x2d8c24u: goto label_2d8c24;
        case 0x2d8c28u: goto label_2d8c28;
        case 0x2d8c2cu: goto label_2d8c2c;
        case 0x2d8c30u: goto label_2d8c30;
        case 0x2d8c34u: goto label_2d8c34;
        case 0x2d8c38u: goto label_2d8c38;
        case 0x2d8c3cu: goto label_2d8c3c;
        case 0x2d8c40u: goto label_2d8c40;
        case 0x2d8c44u: goto label_2d8c44;
        case 0x2d8c48u: goto label_2d8c48;
        case 0x2d8c4cu: goto label_2d8c4c;
        case 0x2d8c50u: goto label_2d8c50;
        case 0x2d8c54u: goto label_2d8c54;
        case 0x2d8c58u: goto label_2d8c58;
        case 0x2d8c5cu: goto label_2d8c5c;
        case 0x2d8c60u: goto label_2d8c60;
        case 0x2d8c64u: goto label_2d8c64;
        case 0x2d8c68u: goto label_2d8c68;
        case 0x2d8c6cu: goto label_2d8c6c;
        case 0x2d8c70u: goto label_2d8c70;
        case 0x2d8c74u: goto label_2d8c74;
        case 0x2d8c78u: goto label_2d8c78;
        case 0x2d8c7cu: goto label_2d8c7c;
        case 0x2d8c80u: goto label_2d8c80;
        case 0x2d8c84u: goto label_2d8c84;
        case 0x2d8c88u: goto label_2d8c88;
        case 0x2d8c8cu: goto label_2d8c8c;
        case 0x2d8c90u: goto label_2d8c90;
        case 0x2d8c94u: goto label_2d8c94;
        case 0x2d8c98u: goto label_2d8c98;
        case 0x2d8c9cu: goto label_2d8c9c;
        case 0x2d8ca0u: goto label_2d8ca0;
        case 0x2d8ca4u: goto label_2d8ca4;
        case 0x2d8ca8u: goto label_2d8ca8;
        case 0x2d8cacu: goto label_2d8cac;
        case 0x2d8cb0u: goto label_2d8cb0;
        case 0x2d8cb4u: goto label_2d8cb4;
        case 0x2d8cb8u: goto label_2d8cb8;
        case 0x2d8cbcu: goto label_2d8cbc;
        case 0x2d8cc0u: goto label_2d8cc0;
        case 0x2d8cc4u: goto label_2d8cc4;
        case 0x2d8cc8u: goto label_2d8cc8;
        case 0x2d8cccu: goto label_2d8ccc;
        case 0x2d8cd0u: goto label_2d8cd0;
        case 0x2d8cd4u: goto label_2d8cd4;
        case 0x2d8cd8u: goto label_2d8cd8;
        case 0x2d8cdcu: goto label_2d8cdc;
        case 0x2d8ce0u: goto label_2d8ce0;
        case 0x2d8ce4u: goto label_2d8ce4;
        case 0x2d8ce8u: goto label_2d8ce8;
        case 0x2d8cecu: goto label_2d8cec;
        case 0x2d8cf0u: goto label_2d8cf0;
        case 0x2d8cf4u: goto label_2d8cf4;
        case 0x2d8cf8u: goto label_2d8cf8;
        case 0x2d8cfcu: goto label_2d8cfc;
        case 0x2d8d00u: goto label_2d8d00;
        case 0x2d8d04u: goto label_2d8d04;
        case 0x2d8d08u: goto label_2d8d08;
        case 0x2d8d0cu: goto label_2d8d0c;
        case 0x2d8d10u: goto label_2d8d10;
        case 0x2d8d14u: goto label_2d8d14;
        case 0x2d8d18u: goto label_2d8d18;
        case 0x2d8d1cu: goto label_2d8d1c;
        case 0x2d8d20u: goto label_2d8d20;
        case 0x2d8d24u: goto label_2d8d24;
        case 0x2d8d28u: goto label_2d8d28;
        case 0x2d8d2cu: goto label_2d8d2c;
        case 0x2d8d30u: goto label_2d8d30;
        case 0x2d8d34u: goto label_2d8d34;
        case 0x2d8d38u: goto label_2d8d38;
        case 0x2d8d3cu: goto label_2d8d3c;
        case 0x2d8d40u: goto label_2d8d40;
        case 0x2d8d44u: goto label_2d8d44;
        case 0x2d8d48u: goto label_2d8d48;
        case 0x2d8d4cu: goto label_2d8d4c;
        case 0x2d8d50u: goto label_2d8d50;
        case 0x2d8d54u: goto label_2d8d54;
        case 0x2d8d58u: goto label_2d8d58;
        case 0x2d8d5cu: goto label_2d8d5c;
        case 0x2d8d60u: goto label_2d8d60;
        case 0x2d8d64u: goto label_2d8d64;
        case 0x2d8d68u: goto label_2d8d68;
        case 0x2d8d6cu: goto label_2d8d6c;
        case 0x2d8d70u: goto label_2d8d70;
        case 0x2d8d74u: goto label_2d8d74;
        case 0x2d8d78u: goto label_2d8d78;
        case 0x2d8d7cu: goto label_2d8d7c;
        case 0x2d8d80u: goto label_2d8d80;
        case 0x2d8d84u: goto label_2d8d84;
        case 0x2d8d88u: goto label_2d8d88;
        case 0x2d8d8cu: goto label_2d8d8c;
        case 0x2d8d90u: goto label_2d8d90;
        case 0x2d8d94u: goto label_2d8d94;
        case 0x2d8d98u: goto label_2d8d98;
        case 0x2d8d9cu: goto label_2d8d9c;
        case 0x2d8da0u: goto label_2d8da0;
        case 0x2d8da4u: goto label_2d8da4;
        case 0x2d8da8u: goto label_2d8da8;
        case 0x2d8dacu: goto label_2d8dac;
        case 0x2d8db0u: goto label_2d8db0;
        case 0x2d8db4u: goto label_2d8db4;
        case 0x2d8db8u: goto label_2d8db8;
        case 0x2d8dbcu: goto label_2d8dbc;
        case 0x2d8dc0u: goto label_2d8dc0;
        case 0x2d8dc4u: goto label_2d8dc4;
        case 0x2d8dc8u: goto label_2d8dc8;
        case 0x2d8dccu: goto label_2d8dcc;
        case 0x2d8dd0u: goto label_2d8dd0;
        case 0x2d8dd4u: goto label_2d8dd4;
        case 0x2d8dd8u: goto label_2d8dd8;
        case 0x2d8ddcu: goto label_2d8ddc;
        case 0x2d8de0u: goto label_2d8de0;
        case 0x2d8de4u: goto label_2d8de4;
        case 0x2d8de8u: goto label_2d8de8;
        case 0x2d8decu: goto label_2d8dec;
        case 0x2d8df0u: goto label_2d8df0;
        case 0x2d8df4u: goto label_2d8df4;
        case 0x2d8df8u: goto label_2d8df8;
        case 0x2d8dfcu: goto label_2d8dfc;
        case 0x2d8e00u: goto label_2d8e00;
        case 0x2d8e04u: goto label_2d8e04;
        case 0x2d8e08u: goto label_2d8e08;
        case 0x2d8e0cu: goto label_2d8e0c;
        case 0x2d8e10u: goto label_2d8e10;
        case 0x2d8e14u: goto label_2d8e14;
        case 0x2d8e18u: goto label_2d8e18;
        case 0x2d8e1cu: goto label_2d8e1c;
        case 0x2d8e20u: goto label_2d8e20;
        case 0x2d8e24u: goto label_2d8e24;
        case 0x2d8e28u: goto label_2d8e28;
        case 0x2d8e2cu: goto label_2d8e2c;
        case 0x2d8e30u: goto label_2d8e30;
        case 0x2d8e34u: goto label_2d8e34;
        case 0x2d8e38u: goto label_2d8e38;
        case 0x2d8e3cu: goto label_2d8e3c;
        case 0x2d8e40u: goto label_2d8e40;
        case 0x2d8e44u: goto label_2d8e44;
        case 0x2d8e48u: goto label_2d8e48;
        case 0x2d8e4cu: goto label_2d8e4c;
        case 0x2d8e50u: goto label_2d8e50;
        case 0x2d8e54u: goto label_2d8e54;
        case 0x2d8e58u: goto label_2d8e58;
        case 0x2d8e5cu: goto label_2d8e5c;
        case 0x2d8e60u: goto label_2d8e60;
        case 0x2d8e64u: goto label_2d8e64;
        case 0x2d8e68u: goto label_2d8e68;
        case 0x2d8e6cu: goto label_2d8e6c;
        case 0x2d8e70u: goto label_2d8e70;
        case 0x2d8e74u: goto label_2d8e74;
        case 0x2d8e78u: goto label_2d8e78;
        case 0x2d8e7cu: goto label_2d8e7c;
        case 0x2d8e80u: goto label_2d8e80;
        case 0x2d8e84u: goto label_2d8e84;
        case 0x2d8e88u: goto label_2d8e88;
        case 0x2d8e8cu: goto label_2d8e8c;
        case 0x2d8e90u: goto label_2d8e90;
        case 0x2d8e94u: goto label_2d8e94;
        case 0x2d8e98u: goto label_2d8e98;
        case 0x2d8e9cu: goto label_2d8e9c;
        case 0x2d8ea0u: goto label_2d8ea0;
        case 0x2d8ea4u: goto label_2d8ea4;
        case 0x2d8ea8u: goto label_2d8ea8;
        case 0x2d8eacu: goto label_2d8eac;
        case 0x2d8eb0u: goto label_2d8eb0;
        case 0x2d8eb4u: goto label_2d8eb4;
        case 0x2d8eb8u: goto label_2d8eb8;
        case 0x2d8ebcu: goto label_2d8ebc;
        case 0x2d8ec0u: goto label_2d8ec0;
        case 0x2d8ec4u: goto label_2d8ec4;
        case 0x2d8ec8u: goto label_2d8ec8;
        case 0x2d8eccu: goto label_2d8ecc;
        case 0x2d8ed0u: goto label_2d8ed0;
        case 0x2d8ed4u: goto label_2d8ed4;
        case 0x2d8ed8u: goto label_2d8ed8;
        case 0x2d8edcu: goto label_2d8edc;
        case 0x2d8ee0u: goto label_2d8ee0;
        case 0x2d8ee4u: goto label_2d8ee4;
        case 0x2d8ee8u: goto label_2d8ee8;
        case 0x2d8eecu: goto label_2d8eec;
        case 0x2d8ef0u: goto label_2d8ef0;
        case 0x2d8ef4u: goto label_2d8ef4;
        case 0x2d8ef8u: goto label_2d8ef8;
        case 0x2d8efcu: goto label_2d8efc;
        case 0x2d8f00u: goto label_2d8f00;
        case 0x2d8f04u: goto label_2d8f04;
        case 0x2d8f08u: goto label_2d8f08;
        case 0x2d8f0cu: goto label_2d8f0c;
        case 0x2d8f10u: goto label_2d8f10;
        case 0x2d8f14u: goto label_2d8f14;
        case 0x2d8f18u: goto label_2d8f18;
        case 0x2d8f1cu: goto label_2d8f1c;
        case 0x2d8f20u: goto label_2d8f20;
        case 0x2d8f24u: goto label_2d8f24;
        case 0x2d8f28u: goto label_2d8f28;
        case 0x2d8f2cu: goto label_2d8f2c;
        case 0x2d8f30u: goto label_2d8f30;
        case 0x2d8f34u: goto label_2d8f34;
        case 0x2d8f38u: goto label_2d8f38;
        case 0x2d8f3cu: goto label_2d8f3c;
        case 0x2d8f40u: goto label_2d8f40;
        case 0x2d8f44u: goto label_2d8f44;
        case 0x2d8f48u: goto label_2d8f48;
        case 0x2d8f4cu: goto label_2d8f4c;
        case 0x2d8f50u: goto label_2d8f50;
        case 0x2d8f54u: goto label_2d8f54;
        case 0x2d8f58u: goto label_2d8f58;
        case 0x2d8f5cu: goto label_2d8f5c;
        case 0x2d8f60u: goto label_2d8f60;
        case 0x2d8f64u: goto label_2d8f64;
        case 0x2d8f68u: goto label_2d8f68;
        case 0x2d8f6cu: goto label_2d8f6c;
        case 0x2d8f70u: goto label_2d8f70;
        case 0x2d8f74u: goto label_2d8f74;
        case 0x2d8f78u: goto label_2d8f78;
        case 0x2d8f7cu: goto label_2d8f7c;
        case 0x2d8f80u: goto label_2d8f80;
        case 0x2d8f84u: goto label_2d8f84;
        case 0x2d8f88u: goto label_2d8f88;
        case 0x2d8f8cu: goto label_2d8f8c;
        case 0x2d8f90u: goto label_2d8f90;
        case 0x2d8f94u: goto label_2d8f94;
        case 0x2d8f98u: goto label_2d8f98;
        case 0x2d8f9cu: goto label_2d8f9c;
        case 0x2d8fa0u: goto label_2d8fa0;
        case 0x2d8fa4u: goto label_2d8fa4;
        case 0x2d8fa8u: goto label_2d8fa8;
        case 0x2d8facu: goto label_2d8fac;
        case 0x2d8fb0u: goto label_2d8fb0;
        case 0x2d8fb4u: goto label_2d8fb4;
        case 0x2d8fb8u: goto label_2d8fb8;
        case 0x2d8fbcu: goto label_2d8fbc;
        default: break;
    }

    ctx->pc = 0x2d85e0u;

label_2d85e0:
    // 0x2d85e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d85e4:
    // 0x2d85e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d85e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d85e8:
    // 0x2d85e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d85e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d85ec:
    // 0x2d85ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d85f0:
    if (ctx->pc == 0x2D85F0u) {
        ctx->pc = 0x2D85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85ECu;
        // 0x2d85f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D85F4u;
        goto label_2d85f4;
    }
    ctx->pc = 0x2D85ECu;
    {
        const bool branch_taken_0x2d85ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85ECu;
        // 0x2d85f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85ec) {
            ctx->pc = 0x2D8604u;
            goto label_2d8604;
        }
    }
    ctx->pc = 0x2D85F4u;
label_2d85f4:
    // 0x2d85f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d85f8:
    // 0x2d85f8: 0x40f809  jalr        $v0
label_2d85fc:
    if (ctx->pc == 0x2D85FCu) {
        ctx->pc = 0x2D85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85F8u;
        // 0x2d85fc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8600u;
        goto label_2d8600;
    }
    ctx->pc = 0x2D85F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8600u);
        ctx->pc = 0x2D85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85F8u;
        // 0x2d85fc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D85F8u, 0x2D8600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8600u;
label_2d8600:
    // 0x2d8600: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d8600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d8604:
    // 0x2d8604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8608:
    // 0x2d8608: 0x3e00008  jr          $ra
label_2d860c:
    if (ctx->pc == 0x2D860Cu) {
        ctx->pc = 0x2D860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8608u;
        // 0x2d860c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8610u;
        goto label_2d8610;
    }
    ctx->pc = 0x2D8608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8608u;
        // 0x2d860c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8610u;
label_2d8610:
    // 0x2d8610: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8610u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2D8610 raw=0x00000035");
label_2d8614:
    // 0x2d8614: 0xc712d046  lwc1        $f18, -0x2FBA($t8)
    ctx->pc = 0x2d8614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294955078)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8618:
    // 0x2d8618: 0x0  nop
    ctx->pc = 0x2d8618u;
    // NOP
label_2d861c:
    // 0x2d861c: 0xc712d344  lwc1        $f18, -0x2CBC($t8)
    ctx->pc = 0x2d861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294955844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8620:
    // 0x2d8620: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x2d8620u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8624:
    // 0x2d8624: 0xc712d43e  lwc1        $f18, -0x2BC2($t8)
    ctx->pc = 0x2d8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294956094)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8628:
    // 0x2d8628: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2d8628u;
    
label_2d862c:
    // 0x2d862c: 0xc712d516  lwc1        $f18, -0x2AEA($t8)
    ctx->pc = 0x2d862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294956310)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8630:
    // 0x2d8630: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8634:
    // 0x2d8634: 0xc712d8f8  lwc1        $f18, -0x2708($t8)
    ctx->pc = 0x2d8634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8638:
    // 0x2d8638: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8638u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d863c:
    // 0x2d863c: 0xc712d9fe  lwc1        $f18, -0x2602($t8)
    ctx->pc = 0x2d863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957566)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8640:
    // 0x2d8640: 0x108  .word       0x00000108                   # jr          $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_2d8644:
    if (ctx->pc == 0x2D8644u) {
        ctx->pc = 0x2D8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8640u;
        // 0x2d8644: 0xc712dae4  lwc1        $f18, -0x251C($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8648u;
        goto label_2d8648;
    }
    ctx->pc = 0x2D8640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8640u;
        // 0x2d8644: 0xc712dae4  lwc1        $f18, -0x251C($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8648u;
label_2d8648:
    // 0x2d8648: 0x118  .word       0x00000118                   # mult        $zero, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d864c:
    // 0x2d864c: 0xc712dbc2  lwc1        $f18, -0x243E($t8)
    ctx->pc = 0x2d864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294958018)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8650:
    // 0x2d8650: 0x128  .word       0x00000128                   # mfsa        $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8650u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8654:
    // 0x2d8654: 0xc712dca2  lwc1        $f18, -0x235E($t8)
    ctx->pc = 0x2d8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294958242)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8658:
    // 0x2d8658: 0x138  dsll        $zero, $zero, 4
    ctx->pc = 0x2d8658u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 4);
label_2d865c:
    // 0x2d865c: 0xc712e09c  lwc1        $f18, -0x1F64($t8)
    ctx->pc = 0x2d865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8660:
    // 0x2d8660: 0x148  .word       0x00000148                   # jr          $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_2d8664:
    if (ctx->pc == 0x2D8664u) {
        ctx->pc = 0x2D8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8660u;
        // 0x2d8664: 0xc712e21a  lwc1        $f18, -0x1DE6($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959642)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8668u;
        goto label_2d8668;
    }
    ctx->pc = 0x2D8660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8660u;
        // 0x2d8664: 0xc712e21a  lwc1        $f18, -0x1DE6($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959642)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8668u;
label_2d8668:
    // 0x2d8668: 0x158  .word       0x00000158                   # mult        $zero, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d866c:
    // 0x2d866c: 0xc712e314  lwc1        $f18, -0x1CEC($t8)
    ctx->pc = 0x2d866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8670:
    // 0x2d8670: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8670u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8674:
    // 0x2d8674: 0xc712e3f2  lwc1        $f18, -0x1C0E($t8)
    ctx->pc = 0x2d8674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294960114)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8678:
    // 0x2d8678: 0x178  dsll        $zero, $zero, 5
    ctx->pc = 0x2d8678u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 5);
label_2d867c:
    // 0x2d867c: 0xc712ea32  lwc1        $f18, -0x15CE($t8)
    ctx->pc = 0x2d867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294961714)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8680:
    // 0x2d8680: 0x184  .word       0x00000184                   # sllv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8680u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8684:
    // 0x2d8684: 0xc712eb48  lwc1        $f18, -0x14B8($t8)
    ctx->pc = 0x2d8684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294961992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8688:
    // 0x2d8688: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8688u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d868c:
    // 0x2d868c: 0xc712eeb6  lwc1        $f18, -0x114A($t8)
    ctx->pc = 0x2d868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294962870)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8690:
    // 0x2d8690: 0x1a0  .word       0x000001A0                   # add         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8690u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8694:
    // 0x2d8694: 0xc712f020  lwc1        $f18, -0xFE0($t8)
    ctx->pc = 0x2d8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d8698:
    // 0x2d8698: 0x1b0  tge         $zero, $zero, 6
    ctx->pc = 0x2d8698u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d869c:
    // 0x2d869c: 0xc712f10e  lwc1        $f18, -0xEF2($t8)
    ctx->pc = 0x2d869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963470)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86a0:
    // 0x2d86a0: 0x1d0  .word       0x000001D0                   # mfhi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86a0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d86a4:
    // 0x2d86a4: 0xc712f1f2  lwc1        $f18, -0xE0E($t8)
    ctx->pc = 0x2d86a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963698)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86a8:
    // 0x2d86a8: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2d86a8u;
    
label_2d86ac:
    // 0x2d86ac: 0xc712f2d4  lwc1        $f18, -0xD2C($t8)
    ctx->pc = 0x2d86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86b0:
    // 0x2d86b0: 0x210  .word       0x00000210                   # mfhi        $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86b0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d86b4:
    // 0x2d86b4: 0xc712f590  lwc1        $f18, -0xA70($t8)
    ctx->pc = 0x2d86b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294964624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86b8:
    // 0x2d86b8: 0x240  sll         $zero, $zero, 9
    ctx->pc = 0x2d86b8u;
    
label_2d86bc:
    // 0x2d86bc: 0xc712f6b2  lwc1        $f18, -0x94E($t8)
    ctx->pc = 0x2d86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294964914)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86c0:
    // 0x2d86c0: 0x250  .word       0x00000250                   # mfhi        $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d86c4:
    // 0x2d86c4: 0xc712f810  lwc1        $f18, -0x7F0($t8)
    ctx->pc = 0x2d86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86c8:
    // 0x2d86c8: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d86cc:
    // 0x2d86cc: 0xc712f8f8  lwc1        $f18, -0x708($t8)
    ctx->pc = 0x2d86ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86d0:
    // 0x2d86d0: 0x294  .word       0x00000294                   # dsllv       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d86d4:
    // 0x2d86d4: 0xc712f9e8  lwc1        $f18, -0x618($t8)
    ctx->pc = 0x2d86d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86d8:
    // 0x2d86d8: 0x2d0  .word       0x000002D0                   # mfhi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86d8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d86dc:
    // 0x2d86dc: 0xc712fe4e  lwc1        $f18, -0x1B2($t8)
    ctx->pc = 0x2d86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294966862)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2d86e0:
    // 0x2d86e0: 0x300  sll         $zero, $zero, 12
    ctx->pc = 0x2d86e0u;
    
label_2d86e4:
    // 0x2d86e4: 0xc7130242  lwc1        $f19, 0x242($t8)
    ctx->pc = 0x2d86e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 578)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d86e8:
    // 0x2d86e8: 0x330  tge         $zero, $zero, 12
    ctx->pc = 0x2d86e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d86ec:
    // 0x2d86ec: 0xc7130ff0  lwc1        $f19, 0xFF0($t8)
    ctx->pc = 0x2d86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d86f0:
    // 0x2d86f0: 0x384  .word       0x00000384                   # sllv        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d86f4:
    // 0x2d86f4: 0xc713114a  lwc1        $f19, 0x114A($t8)
    ctx->pc = 0x2d86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4426)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d86f8:
    // 0x2d86f8: 0x398  .word       0x00000398                   # mult        $zero, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d86f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d86fc:
    // 0x2d86fc: 0xc7131236  lwc1        $f19, 0x1236($t8)
    ctx->pc = 0x2d86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4662)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d8700:
    // 0x2d8700: 0x3b0  tge         $zero, $zero, 14
    ctx->pc = 0x2d8700u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8704:
    // 0x2d8704: 0xc713164a  lwc1        $f19, 0x164A($t8)
    ctx->pc = 0x2d8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 5706)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d8708:
    // 0x2d8708: 0x42c  .word       0x0000042C                   # dadd        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8708u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d870c:
    // 0x2d870c: 0xc713174e  lwc1        $f19, 0x174E($t8)
    ctx->pc = 0x2d870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 5966)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d8710:
    // 0x2d8710: 0x450  .word       0x00000450                   # mfhi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8710u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8714:
    // 0x2d8714: 0xc7131838  lwc1        $f19, 0x1838($t8)
    ctx->pc = 0x2d8714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 6200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d8718:
    // 0x2d8718: 0x474  teq         $zero, $zero, 17
    ctx->pc = 0x2d8718u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d871c:
    // 0x2d871c: 0xc7131924  lwc1        $f19, 0x1924($t8)
    ctx->pc = 0x2d871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 6436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d8720:
    // 0x2d8720: 0x4d0  .word       0x000004D0                   # mfhi        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8720u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8724:
    // 0x2d8724: 0xc7131c7e  lwc1        $f19, 0x1C7E($t8)
    ctx->pc = 0x2d8724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 7294)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2d8728:
    // 0x2d8728: 0x528  .word       0x00000528                   # mfsa        $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8728u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d872c:
    // 0x2d872c: 0xca0c8610  lwc2        $12, -0x79F0($s0)
    ctx->pc = 0x2d872cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D872C raw=0xCA0C8610");
label_2d8730:
    // 0x2d8730: 0x540  sll         $zero, $zero, 21
    ctx->pc = 0x2d8730u;
    
label_2d8734:
    // 0x2d8734: 0xca0c87c2  lwc2        $12, -0x783E($s0)
    ctx->pc = 0x2d8734u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8734 raw=0xCA0C87C2");
label_2d8738:
    // 0x2d8738: 0x54c  syscall     21
    ctx->pc = 0x2d8738u;
    runtime->handleSyscall(rdram, ctx, 0x15u);
label_2d873c:
    // 0x2d873c: 0xca0c88b2  lwc2        $12, -0x774E($s0)
    ctx->pc = 0x2d873cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D873C raw=0xCA0C88B2");
label_2d8740:
    // 0x2d8740: 0x564  .word       0x00000564                   # and         $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8740u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8744:
    // 0x2d8744: 0xca15f322  lwc2        $21, -0xCDE($s0)
    ctx->pc = 0x2d8744u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8744 raw=0xCA15F322");
label_2d8748:
    // 0x2d8748: 0x594  .word       0x00000594                   # dsllv       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8748u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d874c:
    // 0x2d874c: 0xca15f86e  lwc2        $21, -0x792($s0)
    ctx->pc = 0x2d874cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D874C raw=0xCA15F86E");
label_2d8750:
    // 0x2d8750: 0x5b4  teq         $zero, $zero, 22
    ctx->pc = 0x2d8750u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8754:
    // 0x2d8754: 0xca15f9f2  lwc2        $21, -0x60E($s0)
    ctx->pc = 0x2d8754u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8754 raw=0xCA15F9F2");
label_2d8758:
    // 0x2d8758: 0x5cc  syscall     23
    ctx->pc = 0x2d8758u;
    runtime->handleSyscall(rdram, ctx, 0x17u);
label_2d875c:
    // 0x2d875c: 0xca15fae4  lwc2        $21, -0x51C($s0)
    ctx->pc = 0x2d875cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D875C raw=0xCA15FAE4");
label_2d8760:
    // 0x2d8760: 0x5e4  .word       0x000005E4                   # and         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8760u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8764:
    // 0x2d8764: 0xca15fc78  lwc2        $21, -0x388($s0)
    ctx->pc = 0x2d8764u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8764 raw=0xCA15FC78");
label_2d8768:
    // 0x2d8768: 0x62c  .word       0x0000062C                   # dadd        $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8768u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d876c:
    // 0x2d876c: 0xca15ff36  lwc2        $21, -0xCA($s0)
    ctx->pc = 0x2d876cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D876C raw=0xCA15FF36");
label_2d8770:
    // 0x2d8770: 0x660  .word       0x00000660                   # add         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8770u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8774:
    // 0x2d8774: 0xca1600da  lwc2        $22, 0xDA($s0)
    ctx->pc = 0x2d8774u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8774 raw=0xCA1600DA");
label_2d8778:
    // 0x2d8778: 0x678  dsll        $zero, $zero, 25
    ctx->pc = 0x2d8778u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 25);
label_2d877c:
    // 0x2d877c: 0xca1601b8  lwc2        $22, 0x1B8($s0)
    ctx->pc = 0x2d877cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D877C raw=0xCA1601B8");
label_2d8780:
    // 0x2d8780: 0x698  .word       0x00000698                   # mult        $zero, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8784:
    // 0x2d8784: 0xcb13174a  lwc2        $19, 0x174A($t8)
    ctx->pc = 0x2d8784u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8784 raw=0xCB13174A");
label_2d8788:
    // 0x2d8788: 0x6c8  .word       0x000006C8                   # jr          $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_2d878c:
    if (ctx->pc == 0x2D878Cu) {
        ctx->pc = 0x2D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8788u;
        // 0x2d878c: 0xcb188a50  lwc2        $24, -0x75B0($t8) (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D878C raw=0xCB188A50");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8790u;
        goto label_2d8790;
    }
    ctx->pc = 0x2D8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8788u;
        // 0x2d878c: 0xcb188a50  lwc2        $24, -0x75B0($t8) (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D878C raw=0xCB188A50");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8788u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8790u;
label_2d8790:
    // 0x2d8790: 0x6e4  .word       0x000006E4                   # and         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8790u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8794:
    // 0x2d8794: 0xcb1c9f74  lwc2        $28, -0x608C($t8)
    ctx->pc = 0x2d8794u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D8794 raw=0xCB1C9F74");
label_2d8798:
    // 0x2d8798: 0x728  .word       0x00000728                   # mfsa        $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8798u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d879c:
    // 0x2d879c: 0xcb1ca130  lwc2        $28, -0x5ED0($t8)
    ctx->pc = 0x2d879cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D879C raw=0xCB1CA130");
label_2d87a0:
    // 0x2d87a0: 0x740  sll         $zero, $zero, 29
    ctx->pc = 0x2d87a0u;
    
label_2d87a4:
    // 0x2d87a4: 0xcb1ca6b6  lwc2        $28, -0x594A($t8)
    ctx->pc = 0x2d87a4u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D87A4 raw=0xCB1CA6B6");
label_2d87a8:
    // 0x2d87a8: 0x76c  .word       0x0000076C                   # dadd        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d87a8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d87ac:
    // 0x2d87ac: 0xcb1ca7f0  lwc2        $28, -0x5810($t8)
    ctx->pc = 0x2d87acu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D87AC raw=0xCB1CA7F0");
label_2d87b0:
    // 0x2d87b0: 0x790  .word       0x00000790                   # mfhi        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d87b0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d87b4:
    // 0x2d87b4: 0xcb1cadcc  lwc2        $28, -0x5234($t8)
    ctx->pc = 0x2d87b4u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2D87B4 raw=0xCB1CADCC");
label_2d87b8:
    // 0x2d87b8: 0x7b8  dsll        $zero, $zero, 30
    ctx->pc = 0x2d87b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 30);
label_2d87bc:
    // 0x2d87bc: 0x7c  dsll32      $zero, $zero, 1
    ctx->pc = 0x2d87bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 1));
label_2d87c0:
    // 0x2d87c0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2d87c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d87c4:
    // 0x2d87c4: 0x7c  dsll32      $zero, $zero, 1
    ctx->pc = 0x2d87c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 1));
label_2d87c8:
    // 0x2d87c8: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x2d87c8u;
    
label_2d87cc:
    // 0x2d87cc: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d87ccu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d87d0:
    // 0x2d87d0: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d87d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d87d4:
    // 0x2d87d4: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x2d87d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_2d87d8:
    // 0x2d87d8: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_2d87dc:
    if (ctx->pc == 0x2D87DCu) {
        ctx->pc = 0x2D87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87D8u;
        // 0x2d87dc: 0x1bc  dsll32      $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D87E0u;
        goto label_2d87e0;
    }
    ctx->pc = 0x2D87D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87D8u;
        // 0x2d87dc: 0x1bc  dsll32      $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D87D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D87E0u;
label_2d87e0:
    // 0x2d87e0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2d87e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d87e4:
    // 0x2d87e4: 0x1bc  dsll32      $zero, $zero, 6
    ctx->pc = 0x2d87e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 6));
label_2d87e8:
    // 0x2d87e8: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x2d87e8u;
    
label_2d87ec:
    // 0x2d87ec: 0x1d0  .word       0x000001D0                   # mfhi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d87ecu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d87f0:
    // 0x2d87f0: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d87f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d87f4:
    // 0x2d87f4: 0x1f8  dsll        $zero, $zero, 7
    ctx->pc = 0x2d87f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 7);
label_2d87f8:
    // 0x2d87f8: 0x208  .word       0x00000208                   # jr          $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_2d87fc:
    if (ctx->pc == 0x2D87FCu) {
        ctx->pc = 0x2D87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87F8u;
        // 0x2d87fc: 0x2f4  teq         $zero, $zero, 11 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8800u;
        goto label_2d8800;
    }
    ctx->pc = 0x2D87F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87F8u;
        // 0x2d87fc: 0x2f4  teq         $zero, $zero, 11 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D87F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8800u;
label_2d8800:
    // 0x2d8800: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8804:
    // 0x2d8804: 0x2f4  teq         $zero, $zero, 11
    ctx->pc = 0x2d8804u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8808:
    // 0x2d8808: 0x2f8  dsll        $zero, $zero, 11
    ctx->pc = 0x2d8808u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 11);
label_2d880c:
    // 0x2d880c: 0x30c  syscall     12
    ctx->pc = 0x2d880cu;
    runtime->handleSyscall(rdram, ctx, 0xCu);
label_2d8810:
    // 0x2d8810: 0x31c  .word       0x0000031C                   # dmult       $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8810u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8810 raw=0x0000031C");
label_2d8814:
    // 0x2d8814: 0x430  tge         $zero, $zero, 16
    ctx->pc = 0x2d8814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8818:
    // 0x2d8818: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2d8818u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2D8818 raw=0x0000001D");
label_2d881c:
    // 0x2d881c: 0x430  tge         $zero, $zero, 16
    ctx->pc = 0x2d881cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8820:
    // 0x2d8820: 0x434  teq         $zero, $zero, 16
    ctx->pc = 0x2d8820u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8824:
    // 0x2d8824: 0x454  .word       0x00000454                   # dsllv       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8824u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8828:
    // 0x2d8828: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8828u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d882c:
    // 0x2d882c: 0x4b4  teq         $zero, $zero, 18
    ctx->pc = 0x2d882cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8830:
    // 0x2d8830: 0x4d8  .word       0x000004D8                   # mult        $zero, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8834:
    // 0x2d8834: 0x4f8  dsll        $zero, $zero, 19
    ctx->pc = 0x2d8834u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 19);
label_2d8838:
    // 0x2d8838: 0x530  tge         $zero, $zero, 20
    ctx->pc = 0x2d8838u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d883c:
    // 0x2d883c: 0x638  dsll        $zero, $zero, 24
    ctx->pc = 0x2d883cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 24);
label_2d8840:
    // 0x2d8840: 0x68c  syscall     26
    ctx->pc = 0x2d8840u;
    runtime->handleSyscall(rdram, ctx, 0x1Au);
label_2d8844:
    // 0x2d8844: 0x694  .word       0x00000694                   # dsllv       $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8844u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8848:
    // 0x2d8848: 0x6cc  syscall     27
    ctx->pc = 0x2d8848u;
    runtime->handleSyscall(rdram, ctx, 0x1Bu);
label_2d884c:
    // 0x2d884c: 0x6e8  .word       0x000006E8                   # mfsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d884cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8850:
    // 0x2d8850: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2d8850u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8854:
    // 0x2d8854: 0x6ec  .word       0x000006EC                   # dadd        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8854u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8858:
    // 0x2d8858: 0x6f4  teq         $zero, $zero, 27
    ctx->pc = 0x2d8858u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d885c:
    // 0x2d885c: 0x700  sll         $zero, $zero, 28
    ctx->pc = 0x2d885cu;
    
label_2d8860:
    // 0x2d8860: 0x720  .word       0x00000720                   # add         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8860u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8864:
    // 0x2d8864: 0x72c  .word       0x0000072C                   # dadd        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8864u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8868:
    // 0x2d8868: 0x734  teq         $zero, $zero, 28
    ctx->pc = 0x2d8868u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d886c:
    // 0x2d886c: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x2d886cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8870:
    // 0x2d8870: 0x738  dsll        $zero, $zero, 28
    ctx->pc = 0x2d8870u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 28);
label_2d8874:
    // 0x2d8874: 0x740  sll         $zero, $zero, 29
    ctx->pc = 0x2d8874u;
    
label_2d8878:
    // 0x2d8878: 0x75c  .word       0x0000075C                   # dmult       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8878u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8878 raw=0x0000075C");
label_2d887c:
    // 0x2d887c: 0x798  .word       0x00000798                   # mult        $zero, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d887cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8880:
    // 0x2d8880: 0x818  mult        $at, $zero, $zero
    ctx->pc = 0x2d8880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2d8884:
    // 0x2d8884: 0x890  .word       0x00000890                   # mfhi        $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8884u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8888:
    // 0x2d8888: 0x908  .word       0x00000908                   # jr          $zero # 00000900 <InstrIdType: CPU_SPECIAL>
label_2d888c:
    if (ctx->pc == 0x2D888Cu) {
        ctx->pc = 0x2D888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8888u;
        // 0x2d888c: 0x980  sll         $at, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8890u;
        goto label_2d8890;
    }
    ctx->pc = 0x2D8888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8888u;
        // 0x2d888c: 0x980  sll         $at, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8888u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8890u;
label_2d8890:
    // 0x2d8890: 0xb04  .word       0x00000B04                   # sllv        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8894:
    // 0x2d8894: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2d8894u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8898:
    // 0x2d8898: 0xb04  .word       0x00000B04                   # sllv        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d889c:
    // 0x2d889c: 0xb08  .word       0x00000B08                   # jr          $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
label_2d88a0:
    if (ctx->pc == 0x2D88A0u) {
        ctx->pc = 0x2D88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D889Cu;
        // 0x2d88a0: 0xb20  .word       0x00000B20                   # add         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D88A4u;
        goto label_2d88a4;
    }
    ctx->pc = 0x2D889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D889Cu;
        // 0x2d88a0: 0xb20  .word       0x00000B20                   # add         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D889Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D88A4u;
label_2d88a4:
    // 0x2d88a4: 0xb28  .word       0x00000B28                   # mfsa        $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d88a4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2d88a8:
    // 0x2d88a8: 0xb24  .word       0x00000B24                   # and         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d88ac:
    // 0x2d88ac: 0xb2c  .word       0x00000B2C                   # dadd        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2d88b0:
    // 0x2d88b0: 0xb38  dsll        $at, $zero, 12
    ctx->pc = 0x2d88b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 12);
label_2d88b4:
    // 0x2d88b4: 0xb5c  .word       0x00000B5C                   # dmult       $zero, $zero # 00000B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D88B4 raw=0x00000B5C");
label_2d88b8:
    // 0x2d88b8: 0xb7c  dsll32      $at, $zero, 13
    ctx->pc = 0x2d88b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 13));
label_2d88bc:
    // 0x2d88bc: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x2d88bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_2d88c0:
    // 0x2d88c0: 0xc30  tge         $zero, $zero, 48
    ctx->pc = 0x2d88c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d88c4:
    // 0x2d88c4: 0xd84  .word       0x00000D84                   # sllv        $at, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88c4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d88c8:
    // 0x2d88c8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d88c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d88cc:
    // 0x2d88cc: 0xd84  .word       0x00000D84                   # sllv        $at, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d88d0:
    // 0x2d88d0: 0xd88  .word       0x00000D88                   # jr          $zero # 00000D80 <InstrIdType: CPU_SPECIAL>
label_2d88d4:
    if (ctx->pc == 0x2D88D4u) {
        ctx->pc = 0x2D88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88D0u;
        // 0x2d88d4: 0xe9c  .word       0x00000E9C                   # dmult       $zero, $zero # 00000E80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D88D4 raw=0x00000E9C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D88D8u;
        goto label_2d88d8;
    }
    ctx->pc = 0x2D88D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88D0u;
        // 0x2d88d4: 0xe9c  .word       0x00000E9C                   # dmult       $zero, $zero # 00000E80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D88D4 raw=0x00000E9C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D88D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D88D8u;
label_2d88d8:
    // 0x2d88d8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d88dc:
    // 0x2d88dc: 0xe9c  .word       0x00000E9C                   # dmult       $zero, $zero # 00000E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D88DC raw=0x00000E9C");
label_2d88e0:
    // 0x2d88e0: 0xea0  .word       0x00000EA0                   # add         $at, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2d88e4:
    // 0x2d88e4: 0xfac  .word       0x00000FAC                   # dadd        $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2d88e8:
    // 0x2d88e8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d88ec:
    // 0x2d88ec: 0xfb0  tge         $zero, $zero, 62
    ctx->pc = 0x2d88ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d88f0:
    // 0x2d88f0: 0xfb8  dsll        $at, $zero, 30
    ctx->pc = 0x2d88f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 30);
label_2d88f4:
    // 0x2d88f4: 0x1094  .word       0x00001094                   # dsllv       $v0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d88f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d88f8:
    // 0x2d88f8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d88f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d88fc:
    // 0x2d88fc: 0x1098  .word       0x00001098                   # mult        $v0, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d88fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d8900:
    // 0x2d8900: 0x109c  .word       0x0000109C                   # dmult       $zero, $zero # 00001080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8900u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8900 raw=0x0000109C");
label_2d8904:
    // 0x2d8904: 0x117c  dsll32      $v0, $zero, 5
    ctx->pc = 0x2d8904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 5));
label_2d8908:
    // 0x2d8908: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d8908u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d890c:
    // 0x2d890c: 0x1180  sll         $v0, $zero, 6
    ctx->pc = 0x2d890cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2d8910:
    // 0x2d8910: 0x1184  .word       0x00001184                   # sllv        $v0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8914:
    // 0x2d8914: 0x1264  .word       0x00001264                   # and         $v0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8918:
    // 0x2d8918: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d8918u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d891c:
    // 0x2d891c: 0x1268  .word       0x00001268                   # mfsa        $v0 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d891cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2d8920:
    // 0x2d8920: 0x1270  tge         $zero, $zero, 73
    ctx->pc = 0x2d8920u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8924:
    // 0x2d8924: 0x134c  syscall     77
    ctx->pc = 0x2d8924u;
    runtime->handleSyscall(rdram, ctx, 0x4Du);
label_2d8928:
    // 0x2d8928: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d8928u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d892c:
    // 0x2d892c: 0x1350  .word       0x00001350                   # mfhi        $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d892cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2d8930:
    // 0x2d8930: 0x1358  .word       0x00001358                   # mult        $v0, $zero, $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d8934:
    // 0x2d8934: 0x1460  .word       0x00001460                   # add         $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2d8938:
    // 0x2d8938: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8938u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2D8938 raw=0x00000001");
label_2d893c:
    // 0x2d893c: 0x146c  .word       0x0000146C                   # dadd        $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d893cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2d8940:
    // 0x2d8940: 0x1590  .word       0x00001590                   # mfhi        $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2d8944:
    // 0x2d8944: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8944u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2D8944 raw=0x00000001");
label_2d8948:
    // 0x2d8948: 0x1598  .word       0x00001598                   # mult        $v0, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d894c:
    // 0x2d894c: 0x1690  .word       0x00001690                   # mfhi        $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d894cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2d8950:
    // 0x2d8950: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d8950u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d8954:
    // 0x2d8954: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2d8958:
    // 0x2d8958: 0x1708  .word       0x00001708                   # jr          $zero # 00001700 <InstrIdType: CPU_SPECIAL>
label_2d895c:
    if (ctx->pc == 0x2D895Cu) {
        ctx->pc = 0x2D895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8958u;
        // 0x2d895c: 0x1860  .word       0x00001860                   # add         $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8960u;
        goto label_2d8960;
    }
    ctx->pc = 0x2D8958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8958u;
        // 0x2d895c: 0x1860  .word       0x00001860                   # add         $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8958u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8960u;
label_2d8960:
    // 0x2d8960: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d8960u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d8964:
    // 0x2d8964: 0x1870  tge         $zero, $zero, 97
    ctx->pc = 0x2d8964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8968:
    // 0x2d8968: 0x18d8  .word       0x000018D8                   # mult        $v1, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d896c:
    // 0x2d896c: 0x1a34  teq         $zero, $zero, 104
    ctx->pc = 0x2d896cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8970:
    // 0x2d8970: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2d8970u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8974:
    // 0x2d8974: 0x1a34  teq         $zero, $zero, 104
    ctx->pc = 0x2d8974u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8978:
    // 0x2d8978: 0x1a38  dsll        $v1, $zero, 8
    ctx->pc = 0x2d8978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 8);
label_2d897c:
    // 0x2d897c: 0x1a50  .word       0x00001A50                   # mfhi        $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d897cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2d8980:
    // 0x2d8980: 0x1a6c  .word       0x00001A6C                   # dadd        $v1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8980u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_2d8984:
    // 0x2d8984: 0x1b08  .word       0x00001B08                   # jr          $zero # 00001B00 <InstrIdType: CPU_SPECIAL>
label_2d8988:
    if (ctx->pc == 0x2D8988u) {
        ctx->pc = 0x2D8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8984u;
        // 0x2d8988: 0x1b80  sll         $v1, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D898Cu;
        goto label_2d898c;
    }
    ctx->pc = 0x2D8984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8984u;
        // 0x2d8988: 0x1b80  sll         $v1, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8984u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D898Cu;
label_2d898c:
    // 0x2d898c: 0x1ce4  .word       0x00001CE4                   # and         $v1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8990:
    // 0x2d8990: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d8990u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8994:
    // 0x2d8994: 0x1ce8  .word       0x00001CE8                   # mfsa        $v1 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8994u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_2d8998:
    // 0x2d8998: 0x1d20  .word       0x00001D20                   # add         $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2d899c:
    // 0x2d899c: 0x1d34  teq         $zero, $zero, 116
    ctx->pc = 0x2d899cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d89a0:
    // 0x2d89a0: 0x1d3c  dsll32      $v1, $zero, 20
    ctx->pc = 0x2d89a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 20));
label_2d89a4:
    // 0x2d89a4: 0x1d2c  .word       0x00001D2C                   # dadd        $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_2d89a8:
    // 0x2d89a8: 0x1d44  .word       0x00001D44                   # sllv        $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d89ac:
    // 0x2d89ac: 0x1d4c  syscall     117
    ctx->pc = 0x2d89acu;
    runtime->handleSyscall(rdram, ctx, 0x75u);
label_2d89b0:
    // 0x2d89b0: 0x1d64  .word       0x00001D64                   # and         $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d89b4:
    // 0x2d89b4: 0x1da0  .word       0x00001DA0                   # add         $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2d89b8:
    // 0x2d89b8: 0x1d30  tge         $zero, $zero, 116
    ctx->pc = 0x2d89b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d89bc:
    // 0x2d89bc: 0x1ee4  .word       0x00001EE4                   # and         $v1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d89c0:
    // 0x2d89c0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d89c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d89c4:
    // 0x2d89c4: 0x1ee4  .word       0x00001EE4                   # and         $v1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d89c8:
    // 0x2d89c8: 0x1ee8  .word       0x00001EE8                   # mfsa        $v1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d89c8u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_2d89cc:
    // 0x2d89cc: 0x2014  dsllv       $a0, $zero, $zero
    ctx->pc = 0x2d89ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d89d0:
    // 0x2d89d0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d89d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d89d4:
    // 0x2d89d4: 0x2060  .word       0x00002060                   # add         $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2d89d8:
    // 0x2d89d8: 0x2018  mult        $a0, $zero, $zero
    ctx->pc = 0x2d89d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d89dc:
    // 0x2d89dc: 0x2050  .word       0x00002050                   # mfhi        $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d89e0:
    // 0x2d89e0: 0x2064  .word       0x00002064                   # and         $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d89e4:
    // 0x2d89e4: 0x206c  .word       0x0000206C                   # dadd        $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2d89e8:
    // 0x2d89e8: 0x205c  .word       0x0000205C                   # dmult       $zero, $zero # 00002040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D89E8 raw=0x0000205C");
label_2d89ec:
    // 0x2d89ec: 0x2074  teq         $zero, $zero, 129
    ctx->pc = 0x2d89ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d89f0:
    // 0x2d89f0: 0x207c  dsll32      $a0, $zero, 1
    ctx->pc = 0x2d89f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 1));
label_2d89f4:
    // 0x2d89f4: 0x2094  .word       0x00002094                   # dsllv       $a0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d89f8:
    // 0x2d89f8: 0x20d0  .word       0x000020D0                   # mfhi        $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d89f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d89fc:
    // 0x2d89fc: 0x2228  .word       0x00002228                   # mfsa        $a0 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d89fcu;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_2d8a00:
    // 0x2d8a00: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2d8a00u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2d8a04:
    // 0x2d8a04: 0x2238  dsll        $a0, $zero, 8
    ctx->pc = 0x2d8a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << 8);
label_2d8a08:
    // 0x2d8a08: 0x22a0  .word       0x000022A0                   # add         $a0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2d8a0c:
    // 0x2d8a0c: 0x23e4  .word       0x000023E4                   # and         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8a10:
    // 0x2d8a10: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2d8a10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2d8a14:
    // 0x2d8a14: 0x23e4  .word       0x000023E4                   # and         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8a18:
    // 0x2d8a18: 0x23e8  .word       0x000023E8                   # mfsa        $a0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8a18u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_2d8a1c:
    // 0x2d8a1c: 0x23fc  dsll32      $a0, $zero, 15
    ctx->pc = 0x2d8a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 15));
label_2d8a20:
    // 0x2d8a20: 0x2554  .word       0x00002554                   # dsllv       $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8a24:
    // 0x2d8a24: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d8a24u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8a28:
    // 0x2d8a28: 0x2558  .word       0x00002558                   # mult        $a0, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d8a2c:
    // 0x2d8a2c: 0x2590  .word       0x00002590                   # mfhi        $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d8a30:
    // 0x2d8a30: 0x25a4  .word       0x000025A4                   # and         $a0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8a34:
    // 0x2d8a34: 0x25ac  .word       0x000025AC                   # dadd        $a0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2d8a38:
    // 0x2d8a38: 0x259c  .word       0x0000259C                   # dmult       $zero, $zero # 00002580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8A38 raw=0x0000259C");
label_2d8a3c:
    // 0x2d8a3c: 0x25b4  teq         $zero, $zero, 150
    ctx->pc = 0x2d8a3cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8a40:
    // 0x2d8a40: 0x25bc  dsll32      $a0, $zero, 22
    ctx->pc = 0x2d8a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 22));
label_2d8a44:
    // 0x2d8a44: 0x25d4  .word       0x000025D4                   # dsllv       $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8a48:
    // 0x2d8a48: 0x2610  .word       0x00002610                   # mfhi        $a0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a48u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d8a4c:
    // 0x2d8a4c: 0x25a0  .word       0x000025A0                   # add         $a0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a4cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2d8a50:
    // 0x2d8a50: 0x276c  .word       0x0000276C                   # dadd        $a0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2d8a54:
    // 0x2d8a54: 0xd  break       0
    ctx->pc = 0x2d8a54u;
    runtime->handleBreak(rdram, ctx);
label_2d8a58:
    // 0x2d8a58: 0x276c  .word       0x0000276C                   # dadd        $a0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2d8a5c:
    // 0x2d8a5c: 0x2770  tge         $zero, $zero, 157
    ctx->pc = 0x2d8a5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8a60:
    // 0x2d8a60: 0x2784  .word       0x00002784                   # sllv        $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8a64:
    // 0x2d8a64: 0x2794  .word       0x00002794                   # dsllv       $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8a68:
    // 0x2d8a68: 0x27ac  .word       0x000027AC                   # dadd        $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a68u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2d8a6c:
    // 0x2d8a6c: 0x27c0  sll         $a0, $zero, 31
    ctx->pc = 0x2d8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2d8a70:
    // 0x2d8a70: 0x27d8  .word       0x000027D8                   # mult        $a0, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d8a74:
    // 0x2d8a74: 0x27ec  .word       0x000027EC                   # dadd        $a0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a74u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2d8a78:
    // 0x2d8a78: 0x27fc  dsll32      $a0, $zero, 31
    ctx->pc = 0x2d8a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 31));
label_2d8a7c:
    // 0x2d8a7c: 0x28b8  dsll        $a1, $zero, 2
    ctx->pc = 0x2d8a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 2);
label_2d8a80:
    // 0x2d8a80: 0x2940  sll         $a1, $zero, 5
    ctx->pc = 0x2d8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2d8a84:
    // 0x2d8a84: 0x2954  .word       0x00002954                   # dsllv       $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8a88:
    // 0x2d8a88: 0x2964  .word       0x00002964                   # and         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8a8c:
    // 0x2d8a8c: 0x2a9c  .word       0x00002A9C                   # dmult       $zero, $zero # 00002A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8A8C raw=0x00002A9C");
label_2d8a90:
    // 0x2d8a90: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d8a90u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8a94:
    // 0x2d8a94: 0x2ae8  .word       0x00002AE8                   # mfsa        $a1 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8a94u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2d8a98:
    // 0x2d8a98: 0x2aa0  .word       0x00002AA0                   # add         $a1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8a98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2d8a9c:
    // 0x2d8a9c: 0x2ad8  .word       0x00002AD8                   # mult        $a1, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d8aa0:
    // 0x2d8aa0: 0x2aec  .word       0x00002AEC                   # dadd        $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8aa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2d8aa4:
    // 0x2d8aa4: 0x2af4  teq         $zero, $zero, 171
    ctx->pc = 0x2d8aa4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8aa8:
    // 0x2d8aa8: 0x2ae4  .word       0x00002AE4                   # and         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8aac:
    // 0x2d8aac: 0x2afc  dsll32      $a1, $zero, 11
    ctx->pc = 0x2d8aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 11));
label_2d8ab0:
    // 0x2d8ab0: 0x2b04  .word       0x00002B04                   # sllv        $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8ab4:
    // 0x2d8ab4: 0x2b1c  .word       0x00002B1C                   # dmult       $zero, $zero # 00002B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ab4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8AB4 raw=0x00002B1C");
label_2d8ab8:
    // 0x2d8ab8: 0x2b58  .word       0x00002B58                   # mult        $a1, $zero, $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d8abc:
    // 0x2d8abc: 0x2f90  .word       0x00002F90                   # mfhi        $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8abcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2d8ac0:
    // 0x2d8ac0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d8ac0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8ac4:
    // 0x2d8ac4: 0x2f90  .word       0x00002F90                   # mfhi        $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ac4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2d8ac8:
    // 0x2d8ac8: 0x2f98  .word       0x00002F98                   # mult        $a1, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d8acc:
    // 0x2d8acc: 0x2fa8  .word       0x00002FA8                   # mfsa        $a1 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8accu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2d8ad0:
    // 0x2d8ad0: 0x2fb8  dsll        $a1, $zero, 30
    ctx->pc = 0x2d8ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 30);
label_2d8ad4:
    // 0x2d8ad4: 0x2fd8  .word       0x00002FD8                   # mult        $a1, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d8ad8:
    // 0x2d8ad8: 0x2fe4  .word       0x00002FE4                   # and         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8adc:
    // 0x2d8adc: 0x2ff8  dsll        $a1, $zero, 31
    ctx->pc = 0x2d8adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 31);
label_2d8ae0:
    // 0x2d8ae0: 0x3010  mfhi        $a2
    ctx->pc = 0x2d8ae0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2d8ae4:
    // 0x2d8ae4: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x2d8ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2d8ae8:
    // 0x2d8ae8: 0x3038  dsll        $a2, $zero, 0
    ctx->pc = 0x2d8ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 0);
label_2d8aec:
    // 0x2d8aec: 0x313c  dsll32      $a2, $zero, 4
    ctx->pc = 0x2d8aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 4));
label_2d8af0:
    // 0x2d8af0: 0x13  mtlo        $zero
    ctx->pc = 0x2d8af0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2d8af4:
    // 0x2d8af4: 0x313c  dsll32      $a2, $zero, 4
    ctx->pc = 0x2d8af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 4));
label_2d8af8:
    // 0x2d8af8: 0x3140  sll         $a2, $zero, 5
    ctx->pc = 0x2d8af8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2d8afc:
    // 0x2d8afc: 0x314c  syscall     197
    ctx->pc = 0x2d8afcu;
    runtime->handleSyscall(rdram, ctx, 0xC5u);
label_2d8b00:
    // 0x2d8b00: 0x3160  .word       0x00003160                   # add         $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2d8b04:
    // 0x2d8b04: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x2d8b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8b08:
    // 0x2d8b08: 0x3178  dsll        $a2, $zero, 5
    ctx->pc = 0x2d8b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 5);
label_2d8b0c:
    // 0x2d8b0c: 0x3174  teq         $zero, $zero, 197
    ctx->pc = 0x2d8b0cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8b10:
    // 0x2d8b10: 0x3180  sll         $a2, $zero, 6
    ctx->pc = 0x2d8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2d8b14:
    // 0x2d8b14: 0x3194  .word       0x00003194                   # dsllv       $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8b18:
    // 0x2d8b18: 0x31d4  .word       0x000031D4                   # dsllv       $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8b1c:
    // 0x2d8b1c: 0x31e0  .word       0x000031E0                   # add         $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2d8b20:
    // 0x2d8b20: 0x3158  .word       0x00003158                   # mult        $a2, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2d8b24:
    // 0x2d8b24: 0x31e4  .word       0x000031E4                   # and         $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8b28:
    // 0x2d8b28: 0x31f4  teq         $zero, $zero, 199
    ctx->pc = 0x2d8b28u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8b2c:
    // 0x2d8b2c: 0x31fc  dsll32      $a2, $zero, 7
    ctx->pc = 0x2d8b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 7));
label_2d8b30:
    // 0x2d8b30: 0x3204  .word       0x00003204                   # sllv        $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b34:
    // 0x2d8b34: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2d8b38:
    // 0x2d8b38: 0x3250  .word       0x00003250                   # mfhi        $a2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b38u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2d8b3c:
    // 0x2d8b3c: 0x32a4  .word       0x000032A4                   # and         $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8b40:
    // 0x2d8b40: 0x3394  .word       0x00003394                   # dsllv       $a2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8b44:
    // 0x2d8b44: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2d8b44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2d8b48:
    // 0x2d8b48: 0x33bc  dsll32      $a2, $zero, 14
    ctx->pc = 0x2d8b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 14));
label_2d8b4c:
    // 0x2d8b4c: 0x33c0  sll         $a2, $zero, 15
    ctx->pc = 0x2d8b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2d8b50:
    // 0x2d8b50: 0x33c4  .word       0x000033C4                   # sllv        $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b54:
    // 0x2d8b54: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2d8b58:
    // 0x2d8b58: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8b58u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b5c:
    // 0x2d8b5c: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x2d8b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2d8b60:
    // 0x2d8b60: 0x34c4  .word       0x000034C4                   # sllv        $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b64:
    // 0x2d8b64: 0x34f4  teq         $zero, $zero, 211
    ctx->pc = 0x2d8b64u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8b68:
    // 0x2d8b68: 0x3570  tge         $zero, $zero, 213
    ctx->pc = 0x2d8b68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8b6c:
    // 0x2d8b6c: 0x3b84  .word       0x00003B84                   # sllv        $a3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b70:
    // 0x2d8b70: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2d8b70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2D8B70 raw=0x0000001D");
label_2d8b74:
    // 0x2d8b74: 0x3ba8  .word       0x00003BA8                   # mfsa        $a3 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8b74u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2d8b78:
    // 0x2d8b78: 0x3b84  .word       0x00003B84                   # sllv        $a3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b7c:
    // 0x2d8b7c: 0x3bb0  tge         $zero, $zero, 238
    ctx->pc = 0x2d8b7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8b80:
    // 0x2d8b80: 0x3bc0  sll         $a3, $zero, 15
    ctx->pc = 0x2d8b80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2d8b84:
    // 0x2d8b84: 0x3c14  .word       0x00003C14                   # dsllv       $a3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8b88:
    // 0x2d8b88: 0x3c3c  dsll32      $a3, $zero, 16
    ctx->pc = 0x2d8b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (32 + 16));
label_2d8b8c:
    // 0x2d8b8c: 0x3c44  .word       0x00003C44                   # sllv        $a3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8b90:
    // 0x2d8b90: 0x3c40  sll         $a3, $zero, 17
    ctx->pc = 0x2d8b90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2d8b94:
    // 0x2d8b94: 0x3c48  .word       0x00003C48                   # jr          $zero # 00003C40 <InstrIdType: CPU_SPECIAL>
label_2d8b98:
    if (ctx->pc == 0x2D8B98u) {
        ctx->pc = 0x2D8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B94u;
        // 0x2d8b98: 0x3c78  dsll        $a3, $zero, 17 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 17);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8B9Cu;
        goto label_2d8b9c;
    }
    ctx->pc = 0x2D8B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B94u;
        // 0x2d8b98: 0x3c78  dsll        $a3, $zero, 17 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 17);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8B94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8B9Cu;
label_2d8b9c:
    // 0x2d8b9c: 0x3c80  sll         $a3, $zero, 18
    ctx->pc = 0x2d8b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2d8ba0:
    // 0x2d8ba0: 0x3c8c  syscall     242
    ctx->pc = 0x2d8ba0u;
    runtime->handleSyscall(rdram, ctx, 0xF2u);
label_2d8ba4:
    // 0x2d8ba4: 0x3c94  .word       0x00003C94                   # dsllv       $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8ba8:
    // 0x2d8ba8: 0x3ca8  .word       0x00003CA8                   # mfsa        $a3 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ba8u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2d8bac:
    // 0x2d8bac: 0x3cac  .word       0x00003CAC                   # dadd        $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8bacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_2d8bb0:
    // 0x2d8bb0: 0x3cb4  teq         $zero, $zero, 242
    ctx->pc = 0x2d8bb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8bb4:
    // 0x2d8bb4: 0x3cd0  .word       0x00003CD0                   # mfhi        $a3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8bb4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2d8bb8:
    // 0x2d8bb8: 0x3cf4  teq         $zero, $zero, 243
    ctx->pc = 0x2d8bb8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8bbc:
    // 0x2d8bbc: 0x3d08  .word       0x00003D08                   # jr          $zero # 00003D00 <InstrIdType: CPU_SPECIAL>
label_2d8bc0:
    if (ctx->pc == 0x2D8BC0u) {
        ctx->pc = 0x2D8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BBCu;
        // 0x2d8bc0: 0x3d18  .word       0x00003D18                   # mult        $a3, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8BC4u;
        goto label_2d8bc4;
    }
    ctx->pc = 0x2D8BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BBCu;
        // 0x2d8bc0: 0x3d18  .word       0x00003D18                   # mult        $a3, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8BBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8BC4u;
label_2d8bc4:
    // 0x2d8bc4: 0x3d28  .word       0x00003D28                   # mfsa        $a3 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8bc4u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2d8bc8:
    // 0x2d8bc8: 0x3d34  teq         $zero, $zero, 244
    ctx->pc = 0x2d8bc8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8bcc:
    // 0x2d8bcc: 0x3d60  .word       0x00003D60                   # add         $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8bccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2d8bd0:
    // 0x2d8bd0: 0x3d68  .word       0x00003D68                   # mfsa        $a3 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8bd0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2d8bd4:
    // 0x2d8bd4: 0x3dac  .word       0x00003DAC                   # dadd        $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8bd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_2d8bd8:
    // 0x2d8bd8: 0x3db8  dsll        $a3, $zero, 22
    ctx->pc = 0x2d8bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 22);
label_2d8bdc:
    // 0x2d8bdc: 0x3e38  dsll        $a3, $zero, 24
    ctx->pc = 0x2d8bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 24);
label_2d8be0:
    // 0x2d8be0: 0x3eb0  tge         $zero, $zero, 250
    ctx->pc = 0x2d8be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8be4:
    // 0x2d8be4: 0x3f28  .word       0x00003F28                   # mfsa        $a3 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8be4u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2d8be8:
    // 0x2d8be8: 0x4084  .word       0x00004084                   # sllv        $t0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8bec:
    // 0x2d8bec: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2d8becu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8bf0:
    // 0x2d8bf0: 0x40ac  .word       0x000040AC                   # dadd        $t0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8bf0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_2d8bf4:
    // 0x2d8bf4: 0x40b0  tge         $zero, $zero, 258
    ctx->pc = 0x2d8bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8bf8:
    // 0x2d8bf8: 0x40b4  teq         $zero, $zero, 258
    ctx->pc = 0x2d8bf8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8bfc:
    // 0x2d8bfc: 0x40d4  .word       0x000040D4                   # dsllv       $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8c00:
    // 0x2d8c00: 0x40e4  .word       0x000040E4                   # and         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8c04:
    // 0x2d8c04: 0x40f0  tge         $zero, $zero, 259
    ctx->pc = 0x2d8c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8c08:
    // 0x2d8c08: 0x40f8  dsll        $t0, $zero, 3
    ctx->pc = 0x2d8c08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 3);
label_2d8c0c:
    // 0x2d8c0c: 0x41fc  dsll32      $t0, $zero, 7
    ctx->pc = 0x2d8c0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 7));
label_2d8c10:
    // 0x2d8c10: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2d8c10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8c14:
    // 0x2d8c14: 0x41fc  dsll32      $t0, $zero, 7
    ctx->pc = 0x2d8c14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 7));
label_2d8c18:
    // 0x2d8c18: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x2d8c18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2d8c1c:
    // 0x2d8c1c: 0x421c  .word       0x0000421C                   # dmult       $zero, $zero # 00004200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8C1C raw=0x0000421C");
label_2d8c20:
    // 0x2d8c20: 0x4258  .word       0x00004258                   # mult        $t0, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2d8c24:
    // 0x2d8c24: 0x42d4  .word       0x000042D4                   # dsllv       $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8c28:
    // 0x2d8c28: 0x4320  .word       0x00004320                   # add         $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2d8c2c:
    // 0x2d8c2c: 0x4398  .word       0x00004398                   # mult        $t0, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2d8c30:
    // 0x2d8c30: 0x4508  .word       0x00004508                   # jr          $zero # 00004500 <InstrIdType: CPU_SPECIAL>
label_2d8c34:
    if (ctx->pc == 0x2D8C34u) {
        ctx->pc = 0x2D8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C30u;
        // 0x2d8c34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2D8C34 raw=0x00000015");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8C38u;
        goto label_2d8c38;
    }
    ctx->pc = 0x2D8C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C30u;
        // 0x2d8c34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2D8C34 raw=0x00000015");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8C38u;
label_2d8c38:
    // 0x2d8c38: 0x4508  .word       0x00004508                   # jr          $zero # 00004500 <InstrIdType: CPU_SPECIAL>
label_2d8c3c:
    if (ctx->pc == 0x2D8C3Cu) {
        ctx->pc = 0x2D8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C38u;
        // 0x2d8c3c: 0x450c  syscall     276 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x114u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8C40u;
        goto label_2d8c40;
    }
    ctx->pc = 0x2D8C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C38u;
        // 0x2d8c3c: 0x450c  syscall     276 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x114u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8C40u;
label_2d8c40:
    // 0x2d8c40: 0x4544  .word       0x00004544                   # sllv        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8c44:
    // 0x2d8c44: 0x4548  .word       0x00004548                   # jr          $zero # 00004540 <InstrIdType: CPU_SPECIAL>
label_2d8c48:
    if (ctx->pc == 0x2D8C48u) {
        ctx->pc = 0x2D8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C44u;
        // 0x2d8c48: 0x454c  syscall     277 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x115u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8C4Cu;
        goto label_2d8c4c;
    }
    ctx->pc = 0x2D8C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C44u;
        // 0x2d8c48: 0x454c  syscall     277 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x115u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8C4Cu;
label_2d8c4c:
    // 0x2d8c4c: 0x456c  .word       0x0000456C                   # dadd        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_2d8c50:
    // 0x2d8c50: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c50u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2d8c54:
    // 0x2d8c54: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2d8c58:
    // 0x2d8c58: 0x4674  teq         $zero, $zero, 281
    ctx->pc = 0x2d8c58u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8c5c:
    // 0x2d8c5c: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x2d8c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2d8c60:
    // 0x2d8c60: 0x4684  .word       0x00004684                   # sllv        $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8c64:
    // 0x2d8c64: 0x468c  syscall     282
    ctx->pc = 0x2d8c64u;
    runtime->handleSyscall(rdram, ctx, 0x11Au);
label_2d8c68:
    // 0x2d8c68: 0x46b4  teq         $zero, $zero, 282
    ctx->pc = 0x2d8c68u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8c6c:
    // 0x2d8c6c: 0x4728  .word       0x00004728                   # mfsa        $t0 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8c6cu;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_2d8c70:
    // 0x2d8c70: 0x4768  .word       0x00004768                   # mfsa        $t0 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8c70u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_2d8c74:
    // 0x2d8c74: 0x47b0  tge         $zero, $zero, 286
    ctx->pc = 0x2d8c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8c78:
    // 0x2d8c78: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x2d8c78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8c7c:
    // 0x2d8c7c: 0x48a8  .word       0x000048A8                   # mfsa        $t1 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8c7cu;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_2d8c80:
    // 0x2d8c80: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2d8c84:
    // 0x2d8c84: 0x4998  .word       0x00004998                   # mult        $t1, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2d8c88:
    // 0x2d8c88: 0x4678  dsll        $t0, $zero, 25
    ctx->pc = 0x2d8c88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 25);
label_2d8c8c:
    // 0x2d8c8c: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c8cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2d8c90:
    // 0x2d8c90: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2d8c90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8c94:
    // 0x2d8c94: 0x4b5c  .word       0x00004B5C                   # dmult       $zero, $zero # 00004B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8C94 raw=0x00004B5C");
label_2d8c98:
    // 0x2d8c98: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c98u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2d8c9c:
    // 0x2d8c9c: 0x4b14  .word       0x00004B14                   # dsllv       $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8c9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8ca0:
    // 0x2d8ca0: 0x4b3c  dsll32      $t1, $zero, 12
    ctx->pc = 0x2d8ca0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 12));
label_2d8ca4:
    // 0x2d8ca4: 0x4b58  .word       0x00004B58                   # mult        $t1, $zero, $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2d8ca8:
    // 0x2d8ca8: 0x4b60  .word       0x00004B60                   # add         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ca8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2d8cac:
    // 0x2d8cac: 0x4b64  .word       0x00004B64                   # and         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8cacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8cb0:
    // 0x2d8cb0: 0x4b70  tge         $zero, $zero, 301
    ctx->pc = 0x2d8cb0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8cb4:
    // 0x2d8cb4: 0x4bc4  .word       0x00004BC4                   # sllv        $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8cb8:
    // 0x2d8cb8: 0x4bd8  .word       0x00004BD8                   # mult        $t1, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2d8cbc:
    // 0x2d8cbc: 0x4c24  .word       0x00004C24                   # and         $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8cbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8cc0:
    // 0x2d8cc0: 0x4c34  teq         $zero, $zero, 304
    ctx->pc = 0x2d8cc0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8cc4:
    // 0x2d8cc4: 0x4c54  .word       0x00004C54                   # dsllv       $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8cc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8cc8:
    // 0x2d8cc8: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x2d8cc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8ccc:
    // 0x2d8ccc: 0x4c84  .word       0x00004C84                   # sllv        $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8cccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8cd0:
    // 0x2d8cd0: 0x4cb8  dsll        $t1, $zero, 18
    ctx->pc = 0x2d8cd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 18);
label_2d8cd4:
    // 0x2d8cd4: 0x4d30  tge         $zero, $zero, 308
    ctx->pc = 0x2d8cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8cd8:
    // 0x2d8cd8: 0x4da8  .word       0x00004DA8                   # mfsa        $t1 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8cd8u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_2d8cdc:
    // 0x2d8cdc: 0x4e20  .word       0x00004E20                   # add         $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8cdcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2d8ce0:
    // 0x2d8ce0: 0x4e98  .word       0x00004E98                   # mult        $t1, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2d8ce4:
    // 0x2d8ce4: 0x4ff8  dsll        $t1, $zero, 31
    ctx->pc = 0x2d8ce4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 31);
label_2d8ce8:
    // 0x2d8ce8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8ce8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8cec:
    // 0x2d8cec: 0x4ff8  dsll        $t1, $zero, 31
    ctx->pc = 0x2d8cecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 31);
label_2d8cf0:
    // 0x2d8cf0: 0x4ffc  dsll32      $t1, $zero, 31
    ctx->pc = 0x2d8cf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 31));
label_2d8cf4:
    // 0x2d8cf4: 0x5038  dsll        $t2, $zero, 0
    ctx->pc = 0x2d8cf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << 0);
label_2d8cf8:
    // 0x2d8cf8: 0x5098  .word       0x00005098                   # mult        $t2, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_2d8cfc:
    // 0x2d8cfc: 0x88  .word       0x00000088                   # jr          $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_2d8d00:
    if (ctx->pc == 0x2D8D00u) {
        ctx->pc = 0x2D8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CFCu;
        // 0x2d8d00: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2D8D00 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8D04u;
        goto label_2d8d04;
    }
    ctx->pc = 0x2D8CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CFCu;
        // 0x2d8d00: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2D8D00 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8D04u;
label_2d8d04:
    // 0x2d8d04: 0x94  .word       0x00000094                   # dsllv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8d08:
    // 0x2d8d08: 0x1b0  tge         $zero, $zero, 6
    ctx->pc = 0x2d8d08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8d0c:
    // 0x2d8d0c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8d0cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8d10:
    // 0x2d8d10: 0x210  .word       0x00000210                   # mfhi        $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d10u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8d14:
    // 0x2d8d14: 0x250  .word       0x00000250                   # mfhi        $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d14u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8d18:
    // 0x2d8d18: 0x298  .word       0x00000298                   # mult        $zero, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8d1c:
    // 0x2d8d1c: 0x310  .word       0x00000310                   # mfhi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d1cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8d20:
    // 0x2d8d20: 0x49c  .word       0x0000049C                   # dmult       $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8D20 raw=0x0000049C");
label_2d8d24:
    // 0x2d8d24: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d8d24u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8d28:
    // 0x2d8d28: 0x4b0  tge         $zero, $zero, 18
    ctx->pc = 0x2d8d28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8d2c:
    // 0x2d8d2c: 0x4cc  syscall     19
    ctx->pc = 0x2d8d2cu;
    runtime->handleSyscall(rdram, ctx, 0x13u);
label_2d8d30:
    // 0x2d8d30: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x2d8d30u;
    
label_2d8d34:
    // 0x2d8d34: 0x52c  .word       0x0000052C                   # dadd        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8d38:
    // 0x2d8d38: 0x55c  .word       0x0000055C                   # dmult       $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8D38 raw=0x0000055C");
label_2d8d3c:
    // 0x2d8d3c: 0x638  dsll        $zero, $zero, 24
    ctx->pc = 0x2d8d3cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 24);
label_2d8d40:
    // 0x2d8d40: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2d8d40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8d44:
    // 0x2d8d44: 0x728  .word       0x00000728                   # mfsa        $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8d44u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8d48:
    // 0x2d8d48: 0x7a0  .word       0x000007A0                   # add         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8d4c:
    // 0x2d8d4c: 0x818  mult        $at, $zero, $zero
    ctx->pc = 0x2d8d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2d8d50:
    // 0x2d8d50: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x2d8d50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_2d8d54:
    // 0x2d8d54: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2d8d54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8d58:
    // 0x2d8d58: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x2d8d58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_2d8d5c:
    // 0x2d8d5c: 0x7c  dsll32      $zero, $zero, 1
    ctx->pc = 0x2d8d5cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 1));
label_2d8d60:
    // 0x2d8d60: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8d64:
    // 0x2d8d64: 0xac  .word       0x000000AC                   # dadd        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8d68:
    // 0x2d8d68: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x2d8d68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_2d8d6c:
    // 0x2d8d6c: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8d70:
    // 0x2d8d70: 0x1dc  .word       0x000001DC                   # dmult       $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8D70 raw=0x000001DC");
label_2d8d74:
    // 0x2d8d74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8d74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8d78:
    // 0x2d8d78: 0x248  .word       0x00000248                   # jr          $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_2d8d7c:
    if (ctx->pc == 0x2D8D7Cu) {
        ctx->pc = 0x2D8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D78u;
        // 0x2d8d7c: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8D80u;
        goto label_2d8d80;
    }
    ctx->pc = 0x2D8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D78u;
        // 0x2d8d7c: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8D80u;
label_2d8d80:
    // 0x2d8d80: 0x2b0  tge         $zero, $zero, 10
    ctx->pc = 0x2d8d80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8d84:
    // 0x2d8d84: 0x2f0  tge         $zero, $zero, 11
    ctx->pc = 0x2d8d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8d88:
    // 0x2d8d88: 0x484  .word       0x00000484                   # sllv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8d8c:
    // 0x2d8d8c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8d8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8d90:
    // 0x2d8d90: 0x48c  syscall     18
    ctx->pc = 0x2d8d90u;
    runtime->handleSyscall(rdram, ctx, 0x12u);
label_2d8d94:
    // 0x2d8d94: 0x4a0  .word       0x000004A0                   # add         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8d98:
    // 0x2d8d98: 0x520  .word       0x00000520                   # add         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8d98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8d9c:
    // 0x2d8d9c: 0x598  .word       0x00000598                   # mult        $zero, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8da0:
    // 0x2d8da0: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_2d8da4:
    if (ctx->pc == 0x2D8DA4u) {
        ctx->pc = 0x2D8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DA0u;
        // 0x2d8da4: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8DA8u;
        goto label_2d8da8;
    }
    ctx->pc = 0x2D8DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DA0u;
        // 0x2d8da4: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8DA8u;
label_2d8da8:
    // 0x2d8da8: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_2d8dac:
    if (ctx->pc == 0x2D8DACu) {
        ctx->pc = 0x2D8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DA8u;
        // 0x2d8dac: 0x70c  syscall     28 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x1Cu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8DB0u;
        goto label_2d8db0;
    }
    ctx->pc = 0x2D8DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DA8u;
        // 0x2d8dac: 0x70c  syscall     28 (Delay Slot)
        runtime->handleSyscall(rdram, ctx, 0x1Cu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8DB0u;
label_2d8db0:
    // 0x2d8db0: 0x73c  dsll32      $zero, $zero, 28
    ctx->pc = 0x2d8db0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 28));
label_2d8db4:
    // 0x2d8db4: 0x748  .word       0x00000748                   # jr          $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_2d8db8:
    if (ctx->pc == 0x2D8DB8u) {
        ctx->pc = 0x2D8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DB4u;
        // 0x2d8db8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8DBCu;
        goto label_2d8dbc;
    }
    ctx->pc = 0x2D8DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DB4u;
        // 0x2d8db8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8DBCu;
label_2d8dbc:
    // 0x2d8dbc: 0x764  .word       0x00000764                   # and         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8dbcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8dc0:
    // 0x2d8dc0: 0x77c  dsll32      $zero, $zero, 29
    ctx->pc = 0x2d8dc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 29));
label_2d8dc4:
    // 0x2d8dc4: 0x7a4  .word       0x000007A4                   # and         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8dc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8dc8:
    // 0x2d8dc8: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x2d8dc8u;
    
label_2d8dcc:
    // 0x2d8dcc: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8dccu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8dd0:
    // 0x2d8dd0: 0x7e8  .word       0x000007E8                   # mfsa        $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8dd0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8dd4:
    // 0x2d8dd4: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x2d8dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8dd8:
    // 0x2d8dd8: 0x80c  syscall     32
    ctx->pc = 0x2d8dd8u;
    runtime->handleSyscall(rdram, ctx, 0x20u);
label_2d8ddc:
    // 0x2d8ddc: 0x830  tge         $zero, $zero, 32
    ctx->pc = 0x2d8ddcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8de0:
    // 0x2d8de0: 0x8b0  tge         $zero, $zero, 34
    ctx->pc = 0x2d8de0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8de4:
    // 0x2d8de4: 0x928  .word       0x00000928                   # mfsa        $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8de4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2d8de8:
    // 0x2d8de8: 0xc10  .word       0x00000C10                   # mfhi        $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8de8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8dec:
    // 0x2d8dec: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2d8decu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8df0:
    // 0x2d8df0: 0xc10  .word       0x00000C10                   # mfhi        $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8df0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8df4:
    // 0x2d8df4: 0xc14  .word       0x00000C14                   # dsllv       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8df8:
    // 0x2d8df8: 0xc3c  dsll32      $at, $zero, 16
    ctx->pc = 0x2d8df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 16));
label_2d8dfc:
    // 0x2d8dfc: 0xc44  .word       0x00000C44                   # sllv        $at, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8e00:
    // 0x2d8e00: 0xc4c  syscall     49
    ctx->pc = 0x2d8e00u;
    runtime->handleSyscall(rdram, ctx, 0x31u);
label_2d8e04:
    // 0x2d8e04: 0xc70  tge         $zero, $zero, 49
    ctx->pc = 0x2d8e04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8e08:
    // 0x2d8e08: 0xc98  .word       0x00000C98                   # mult        $at, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2d8e0c:
    // 0x2d8e0c: 0xcb8  dsll        $at, $zero, 18
    ctx->pc = 0x2d8e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 18);
label_2d8e10:
    // 0x2d8e10: 0xcf0  tge         $zero, $zero, 51
    ctx->pc = 0x2d8e10u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8e14:
    // 0x2d8e14: 0xd68  .word       0x00000D68                   # mfsa        $at # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8e14u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2d8e18:
    // 0x2d8e18: 0xde0  .word       0x00000DE0                   # add         $at, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2d8e1c:
    // 0x2d8e1c: 0xf2c  .word       0x00000F2C                   # dadd        $at, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e1cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2d8e20:
    // 0x2d8e20: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8e20u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8e24:
    // 0x2d8e24: 0xf30  tge         $zero, $zero, 60
    ctx->pc = 0x2d8e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8e28:
    // 0x2d8e28: 0xf3c  dsll32      $at, $zero, 28
    ctx->pc = 0x2d8e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 28));
label_2d8e2c:
    // 0x2d8e2c: 0xf40  sll         $at, $zero, 29
    ctx->pc = 0x2d8e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2d8e30:
    // 0x2d8e30: 0xf50  .word       0x00000F50                   # mfhi        $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e30u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8e34:
    // 0x2d8e34: 0x1168  .word       0x00001168                   # mfsa        $v0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8e34u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2d8e38:
    // 0x2d8e38: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2d8e38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8e3c:
    // 0x2d8e3c: 0x1194  .word       0x00001194                   # dsllv       $v0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8e40:
    // 0x2d8e40: 0x11bc  dsll32      $v0, $zero, 6
    ctx->pc = 0x2d8e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 6));
label_2d8e44:
    // 0x2d8e44: 0x1218  .word       0x00001218                   # mult        $v0, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d8e48:
    // 0x2d8e48: 0x12a0  .word       0x000012A0                   # add         $v0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2d8e4c:
    // 0x2d8e4c: 0x1318  .word       0x00001318                   # mult        $v0, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d8e50:
    // 0x2d8e50: 0x1390  .word       0x00001390                   # mfhi        $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2d8e54:
    // 0x2d8e54: 0x14fc  dsll32      $v0, $zero, 19
    ctx->pc = 0x2d8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 19));
label_2d8e58:
    // 0x2d8e58: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2d8e58u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2d8e5c:
    // 0x2d8e5c: 0x1524  .word       0x00001524                   # and         $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8e60:
    // 0x2d8e60: 0x154c  syscall     85
    ctx->pc = 0x2d8e60u;
    runtime->handleSyscall(rdram, ctx, 0x55u);
label_2d8e64:
    // 0x2d8e64: 0x15a8  .word       0x000015A8                   # mfsa        $v0 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8e64u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2d8e68:
    // 0x2d8e68: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2d8e6c:
    // 0x2d8e6c: 0x15ec  .word       0x000015EC                   # dadd        $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e6cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2d8e70:
    // 0x2d8e70: 0x15e4  .word       0x000015E4                   # and         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8e74:
    // 0x2d8e74: 0x15f0  tge         $zero, $zero, 87
    ctx->pc = 0x2d8e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8e78:
    // 0x2d8e78: 0x1600  sll         $v0, $zero, 24
    ctx->pc = 0x2d8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2d8e7c:
    // 0x2d8e7c: 0x1638  dsll        $v0, $zero, 24
    ctx->pc = 0x2d8e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 24);
label_2d8e80:
    // 0x2d8e80: 0x16b0  tge         $zero, $zero, 90
    ctx->pc = 0x2d8e80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8e84:
    // 0x2d8e84: 0xec  .word       0x000000EC                   # dadd        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8e88:
    // 0x2d8e88: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2D8E88 raw=0x00000005");
label_2d8e8c:
    // 0x2d8e8c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2d8e8cu;
    
label_2d8e90:
    // 0x2d8e90: 0x124  .word       0x00000124                   # and         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8e94:
    // 0x2d8e94: 0x150  .word       0x00000150                   # mfhi        $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e94u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8e98:
    // 0x2d8e98: 0x160  .word       0x00000160                   # add         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8e9c:
    // 0x2d8e9c: 0x1d0  .word       0x000001D0                   # mfhi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8e9cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8ea0:
    // 0x2d8ea0: 0x110  .word       0x00000110                   # mfhi        $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ea0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8ea4:
    // 0x2d8ea4: 0xf  sync
    ctx->pc = 0x2d8ea4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2d8ea8:
    // 0x2d8ea8: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x2d8ea8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8eac:
    // 0x2d8eac: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2d8eacu;
    
label_2d8eb0:
    // 0x2d8eb0: 0x260  .word       0x00000260                   # add         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8eb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8eb4:
    // 0x2d8eb4: 0x2a4  .word       0x000002A4                   # and         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8eb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8eb8:
    // 0x2d8eb8: 0x2d8  .word       0x000002D8                   # mult        $zero, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8ebc:
    // 0x2d8ebc: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x2d8ebcu;
    
label_2d8ec0:
    // 0x2d8ec0: 0x3a0  .word       0x000003A0                   # add         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ec0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8ec4:
    // 0x2d8ec4: 0x3a8  .word       0x000003A8                   # mfsa        $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8ec4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8ec8:
    // 0x2d8ec8: 0x3a4  .word       0x000003A4                   # and         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ec8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8ecc:
    // 0x2d8ecc: 0x3ac  .word       0x000003AC                   # dadd        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8eccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8ed0:
    // 0x2d8ed0: 0x3b8  dsll        $zero, $zero, 14
    ctx->pc = 0x2d8ed0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 14);
label_2d8ed4:
    // 0x2d8ed4: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ed4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8ed8:
    // 0x2d8ed8: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ed8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8edc:
    // 0x2d8edc: 0x4a8  .word       0x000004A8                   # mfsa        $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8edcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2d8ee0:
    // 0x2d8ee0: 0x520  .word       0x00000520                   # add         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ee0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8ee4:
    // 0x2d8ee4: 0x7c  dsll32      $zero, $zero, 1
    ctx->pc = 0x2d8ee4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 1));
label_2d8ee8:
    // 0x2d8ee8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2d8ee8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8eec:
    // 0x2d8eec: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x2d8eecu;
    
label_2d8ef0:
    // 0x2d8ef0: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ef0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2D8EF0 raw=0x0000009C");
label_2d8ef4:
    // 0x2d8ef4: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x2d8ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8ef8:
    // 0x2d8ef8: 0xd0  .word       0x000000D0                   # mfhi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8ef8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2d8efc:
    // 0x2d8efc: 0x1e4  .word       0x000001E4                   # and         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8efcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8f00:
    // 0x2d8f00: 0x9  jalr        $zero, $zero
label_2d8f04:
    if (ctx->pc == 0x2D8F04u) {
        ctx->pc = 0x2D8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F00u;
        // 0x2d8f04: 0x238  dsll        $zero, $zero, 8 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F08u;
        goto label_2d8f08;
    }
    ctx->pc = 0x2D8F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F00u;
        // 0x2d8f04: 0x238  dsll        $zero, $zero, 8 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F00u, 0x2D8F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8F08u;
label_2d8f08:
    // 0x2d8f08: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8f0c:
    // 0x2d8f0c: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2d8f0cu;
    
label_2d8f10:
    // 0x2d8f10: 0x324  .word       0x00000324                   # and         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8f14:
    // 0x2d8f14: 0x338  dsll        $zero, $zero, 12
    ctx->pc = 0x2d8f14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_2d8f18:
    // 0x2d8f18: 0x36c  .word       0x0000036C                   # dadd        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8f1c:
    // 0x2d8f1c: 0x3b8  dsll        $zero, $zero, 14
    ctx->pc = 0x2d8f1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 14);
label_2d8f20:
    // 0x2d8f20: 0x430  tge         $zero, $zero, 16
    ctx->pc = 0x2d8f20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8f24:
    // 0x2d8f24: 0x48c  syscall     18
    ctx->pc = 0x2d8f24u;
    runtime->handleSyscall(rdram, ctx, 0x12u);
label_2d8f28:
    // 0x2d8f28: 0x5ac  .word       0x000005AC                   # dadd        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f28u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8f2c:
    // 0x2d8f2c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2d8f2cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8f30:
    // 0x2d8f30: 0x5ac  .word       0x000005AC                   # dadd        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8f34:
    // 0x2d8f34: 0x5b4  teq         $zero, $zero, 22
    ctx->pc = 0x2d8f34u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8f38:
    // 0x2d8f38: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x2d8f38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8f3c:
    // 0x2d8f3c: 0x5b8  dsll        $zero, $zero, 22
    ctx->pc = 0x2d8f3cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 22);
label_2d8f40:
    // 0x2d8f40: 0x5c4  .word       0x000005C4                   # sllv        $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f40u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8f44:
    // 0x2d8f44: 0x5e0  .word       0x000005E0                   # add         $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2d8f48:
    // 0x2d8f48: 0x618  .word       0x00000618                   # mult        $zero, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8f4c:
    // 0x2d8f4c: 0x77c  dsll32      $zero, $zero, 29
    ctx->pc = 0x2d8f4cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 29));
label_2d8f50:
    // 0x2d8f50: 0x8  jr          $zero
label_2d8f54:
    if (ctx->pc == 0x2D8F54u) {
        ctx->pc = 0x2D8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F50u;
        // 0x2d8f54: 0x77c  dsll32      $zero, $zero, 29 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8F58u;
        goto label_2d8f58;
    }
    ctx->pc = 0x2D8F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F50u;
        // 0x2d8f54: 0x77c  dsll32      $zero, $zero, 29 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 29));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8F58u;
label_2d8f58:
    // 0x2d8f58: 0x794  .word       0x00000794                   # dsllv       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2d8f5c:
    // 0x2d8f5c: 0x7ac  .word       0x000007AC                   # dadd        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f5cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8f60:
    // 0x2d8f60: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x2d8f60u;
    
label_2d8f64:
    // 0x2d8f64: 0x7d8  .word       0x000007D8                   # mult        $zero, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2d8f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d8f68:
    // 0x2d8f68: 0x7ec  .word       0x000007EC                   # dadd        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f68u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2d8f6c:
    // 0x2d8f6c: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2d8f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2d8f70:
    // 0x2d8f70: 0x820  add         $at, $zero, $zero
    ctx->pc = 0x2d8f70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2d8f74:
    // 0x2d8f74: 0x944  .word       0x00000944                   # sllv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f74u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8f78:
    // 0x2d8f78: 0x11  mthi        $zero
    ctx->pc = 0x2d8f78u;
    ctx->hi = GPR_U64(ctx, 0);
label_2d8f7c:
    // 0x2d8f7c: 0x944  .word       0x00000944                   # sllv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8f80:
    // 0x2d8f80: 0x970  tge         $zero, $zero, 37
    ctx->pc = 0x2d8f80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8f84:
    // 0x2d8f84: 0x990  .word       0x00000990                   # mfhi        $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f84u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8f88:
    // 0x2d8f88: 0x9a4  .word       0x000009A4                   # and         $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2d8f8c:
    // 0x2d8f8c: 0x9b4  teq         $zero, $zero, 38
    ctx->pc = 0x2d8f8cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2d8f90:
    // 0x2d8f90: 0x9bc  dsll32      $at, $zero, 6
    ctx->pc = 0x2d8f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 6));
label_2d8f94:
    // 0x2d8f94: 0xa0c  syscall     40
    ctx->pc = 0x2d8f94u;
    runtime->handleSyscall(rdram, ctx, 0x28u);
label_2d8f98:
    // 0x2d8f98: 0xa10  .word       0x00000A10                   # mfhi        $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8f98u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8f9c:
    // 0x2d8f9c: 0xa3c  dsll32      $at, $zero, 8
    ctx->pc = 0x2d8f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 8));
label_2d8fa0:
    // 0x2d8fa0: 0xa44  .word       0x00000A44                   # sllv        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2d8fa4:
    // 0x2d8fa4: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2d8fa4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2d8fa8:
    // 0x2d8fa8: 0xa78  dsll        $at, $zero, 9
    ctx->pc = 0x2d8fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 9);
label_2d8fac:
    // 0x2d8fac: 0xb48  .word       0x00000B48                   # jr          $zero # 00000B40 <InstrIdType: CPU_SPECIAL>
label_2d8fb0:
    if (ctx->pc == 0x2D8FB0u) {
        ctx->pc = 0x2D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FACu;
        // 0x2d8fb0: 0xbc0  sll         $at, $zero, 15 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8FB4u;
        goto label_2d8fb4;
    }
    ctx->pc = 0x2D8FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FACu;
        // 0x2d8fb0: 0xbc0  sll         $at, $zero, 15 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8FACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8FB4u;
label_2d8fb4:
    // 0x2d8fb4: 0xc38  dsll        $at, $zero, 16
    ctx->pc = 0x2d8fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 16);
label_2d8fb8:
    // 0x2d8fb8: 0xcb8  dsll        $at, $zero, 18
    ctx->pc = 0x2d8fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 18);
label_2d8fbc:
    // 0x2d8fbc: 0xd30  tge         $zero, $zero, 52
    ctx->pc = 0x2d8fbcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
}
