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

// Function: sub_002B6520
// Address: 0x2b6520 - 0x2b6cb0
void sub_002B6520_0x2b6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6520_0x2b6520");
#endif

    switch (ctx->pc) {
        case 0x2b6520u: goto label_2b6520;
        case 0x2b6524u: goto label_2b6524;
        case 0x2b6528u: goto label_2b6528;
        case 0x2b652cu: goto label_2b652c;
        case 0x2b6530u: goto label_2b6530;
        case 0x2b6534u: goto label_2b6534;
        case 0x2b6538u: goto label_2b6538;
        case 0x2b653cu: goto label_2b653c;
        case 0x2b6540u: goto label_2b6540;
        case 0x2b6544u: goto label_2b6544;
        case 0x2b6548u: goto label_2b6548;
        case 0x2b654cu: goto label_2b654c;
        case 0x2b6550u: goto label_2b6550;
        case 0x2b6554u: goto label_2b6554;
        case 0x2b6558u: goto label_2b6558;
        case 0x2b655cu: goto label_2b655c;
        case 0x2b6560u: goto label_2b6560;
        case 0x2b6564u: goto label_2b6564;
        case 0x2b6568u: goto label_2b6568;
        case 0x2b656cu: goto label_2b656c;
        case 0x2b6570u: goto label_2b6570;
        case 0x2b6574u: goto label_2b6574;
        case 0x2b6578u: goto label_2b6578;
        case 0x2b657cu: goto label_2b657c;
        case 0x2b6580u: goto label_2b6580;
        case 0x2b6584u: goto label_2b6584;
        case 0x2b6588u: goto label_2b6588;
        case 0x2b658cu: goto label_2b658c;
        case 0x2b6590u: goto label_2b6590;
        case 0x2b6594u: goto label_2b6594;
        case 0x2b6598u: goto label_2b6598;
        case 0x2b659cu: goto label_2b659c;
        case 0x2b65a0u: goto label_2b65a0;
        case 0x2b65a4u: goto label_2b65a4;
        case 0x2b65a8u: goto label_2b65a8;
        case 0x2b65acu: goto label_2b65ac;
        case 0x2b65b0u: goto label_2b65b0;
        case 0x2b65b4u: goto label_2b65b4;
        case 0x2b65b8u: goto label_2b65b8;
        case 0x2b65bcu: goto label_2b65bc;
        case 0x2b65c0u: goto label_2b65c0;
        case 0x2b65c4u: goto label_2b65c4;
        case 0x2b65c8u: goto label_2b65c8;
        case 0x2b65ccu: goto label_2b65cc;
        case 0x2b65d0u: goto label_2b65d0;
        case 0x2b65d4u: goto label_2b65d4;
        case 0x2b65d8u: goto label_2b65d8;
        case 0x2b65dcu: goto label_2b65dc;
        case 0x2b65e0u: goto label_2b65e0;
        case 0x2b65e4u: goto label_2b65e4;
        case 0x2b65e8u: goto label_2b65e8;
        case 0x2b65ecu: goto label_2b65ec;
        case 0x2b65f0u: goto label_2b65f0;
        case 0x2b65f4u: goto label_2b65f4;
        case 0x2b65f8u: goto label_2b65f8;
        case 0x2b65fcu: goto label_2b65fc;
        case 0x2b6600u: goto label_2b6600;
        case 0x2b6604u: goto label_2b6604;
        case 0x2b6608u: goto label_2b6608;
        case 0x2b660cu: goto label_2b660c;
        case 0x2b6610u: goto label_2b6610;
        case 0x2b6614u: goto label_2b6614;
        case 0x2b6618u: goto label_2b6618;
        case 0x2b661cu: goto label_2b661c;
        case 0x2b6620u: goto label_2b6620;
        case 0x2b6624u: goto label_2b6624;
        case 0x2b6628u: goto label_2b6628;
        case 0x2b662cu: goto label_2b662c;
        case 0x2b6630u: goto label_2b6630;
        case 0x2b6634u: goto label_2b6634;
        case 0x2b6638u: goto label_2b6638;
        case 0x2b663cu: goto label_2b663c;
        case 0x2b6640u: goto label_2b6640;
        case 0x2b6644u: goto label_2b6644;
        case 0x2b6648u: goto label_2b6648;
        case 0x2b664cu: goto label_2b664c;
        case 0x2b6650u: goto label_2b6650;
        case 0x2b6654u: goto label_2b6654;
        case 0x2b6658u: goto label_2b6658;
        case 0x2b665cu: goto label_2b665c;
        case 0x2b6660u: goto label_2b6660;
        case 0x2b6664u: goto label_2b6664;
        case 0x2b6668u: goto label_2b6668;
        case 0x2b666cu: goto label_2b666c;
        case 0x2b6670u: goto label_2b6670;
        case 0x2b6674u: goto label_2b6674;
        case 0x2b6678u: goto label_2b6678;
        case 0x2b667cu: goto label_2b667c;
        case 0x2b6680u: goto label_2b6680;
        case 0x2b6684u: goto label_2b6684;
        case 0x2b6688u: goto label_2b6688;
        case 0x2b668cu: goto label_2b668c;
        case 0x2b6690u: goto label_2b6690;
        case 0x2b6694u: goto label_2b6694;
        case 0x2b6698u: goto label_2b6698;
        case 0x2b669cu: goto label_2b669c;
        case 0x2b66a0u: goto label_2b66a0;
        case 0x2b66a4u: goto label_2b66a4;
        case 0x2b66a8u: goto label_2b66a8;
        case 0x2b66acu: goto label_2b66ac;
        case 0x2b66b0u: goto label_2b66b0;
        case 0x2b66b4u: goto label_2b66b4;
        case 0x2b66b8u: goto label_2b66b8;
        case 0x2b66bcu: goto label_2b66bc;
        case 0x2b66c0u: goto label_2b66c0;
        case 0x2b66c4u: goto label_2b66c4;
        case 0x2b66c8u: goto label_2b66c8;
        case 0x2b66ccu: goto label_2b66cc;
        case 0x2b66d0u: goto label_2b66d0;
        case 0x2b66d4u: goto label_2b66d4;
        case 0x2b66d8u: goto label_2b66d8;
        case 0x2b66dcu: goto label_2b66dc;
        case 0x2b66e0u: goto label_2b66e0;
        case 0x2b66e4u: goto label_2b66e4;
        case 0x2b66e8u: goto label_2b66e8;
        case 0x2b66ecu: goto label_2b66ec;
        case 0x2b66f0u: goto label_2b66f0;
        case 0x2b66f4u: goto label_2b66f4;
        case 0x2b66f8u: goto label_2b66f8;
        case 0x2b66fcu: goto label_2b66fc;
        case 0x2b6700u: goto label_2b6700;
        case 0x2b6704u: goto label_2b6704;
        case 0x2b6708u: goto label_2b6708;
        case 0x2b670cu: goto label_2b670c;
        case 0x2b6710u: goto label_2b6710;
        case 0x2b6714u: goto label_2b6714;
        case 0x2b6718u: goto label_2b6718;
        case 0x2b671cu: goto label_2b671c;
        case 0x2b6720u: goto label_2b6720;
        case 0x2b6724u: goto label_2b6724;
        case 0x2b6728u: goto label_2b6728;
        case 0x2b672cu: goto label_2b672c;
        case 0x2b6730u: goto label_2b6730;
        case 0x2b6734u: goto label_2b6734;
        case 0x2b6738u: goto label_2b6738;
        case 0x2b673cu: goto label_2b673c;
        case 0x2b6740u: goto label_2b6740;
        case 0x2b6744u: goto label_2b6744;
        case 0x2b6748u: goto label_2b6748;
        case 0x2b674cu: goto label_2b674c;
        case 0x2b6750u: goto label_2b6750;
        case 0x2b6754u: goto label_2b6754;
        case 0x2b6758u: goto label_2b6758;
        case 0x2b675cu: goto label_2b675c;
        case 0x2b6760u: goto label_2b6760;
        case 0x2b6764u: goto label_2b6764;
        case 0x2b6768u: goto label_2b6768;
        case 0x2b676cu: goto label_2b676c;
        case 0x2b6770u: goto label_2b6770;
        case 0x2b6774u: goto label_2b6774;
        case 0x2b6778u: goto label_2b6778;
        case 0x2b677cu: goto label_2b677c;
        case 0x2b6780u: goto label_2b6780;
        case 0x2b6784u: goto label_2b6784;
        case 0x2b6788u: goto label_2b6788;
        case 0x2b678cu: goto label_2b678c;
        case 0x2b6790u: goto label_2b6790;
        case 0x2b6794u: goto label_2b6794;
        case 0x2b6798u: goto label_2b6798;
        case 0x2b679cu: goto label_2b679c;
        case 0x2b67a0u: goto label_2b67a0;
        case 0x2b67a4u: goto label_2b67a4;
        case 0x2b67a8u: goto label_2b67a8;
        case 0x2b67acu: goto label_2b67ac;
        case 0x2b67b0u: goto label_2b67b0;
        case 0x2b67b4u: goto label_2b67b4;
        case 0x2b67b8u: goto label_2b67b8;
        case 0x2b67bcu: goto label_2b67bc;
        case 0x2b67c0u: goto label_2b67c0;
        case 0x2b67c4u: goto label_2b67c4;
        case 0x2b67c8u: goto label_2b67c8;
        case 0x2b67ccu: goto label_2b67cc;
        case 0x2b67d0u: goto label_2b67d0;
        case 0x2b67d4u: goto label_2b67d4;
        case 0x2b67d8u: goto label_2b67d8;
        case 0x2b67dcu: goto label_2b67dc;
        case 0x2b67e0u: goto label_2b67e0;
        case 0x2b67e4u: goto label_2b67e4;
        case 0x2b67e8u: goto label_2b67e8;
        case 0x2b67ecu: goto label_2b67ec;
        case 0x2b67f0u: goto label_2b67f0;
        case 0x2b67f4u: goto label_2b67f4;
        case 0x2b67f8u: goto label_2b67f8;
        case 0x2b67fcu: goto label_2b67fc;
        case 0x2b6800u: goto label_2b6800;
        case 0x2b6804u: goto label_2b6804;
        case 0x2b6808u: goto label_2b6808;
        case 0x2b680cu: goto label_2b680c;
        case 0x2b6810u: goto label_2b6810;
        case 0x2b6814u: goto label_2b6814;
        case 0x2b6818u: goto label_2b6818;
        case 0x2b681cu: goto label_2b681c;
        case 0x2b6820u: goto label_2b6820;
        case 0x2b6824u: goto label_2b6824;
        case 0x2b6828u: goto label_2b6828;
        case 0x2b682cu: goto label_2b682c;
        case 0x2b6830u: goto label_2b6830;
        case 0x2b6834u: goto label_2b6834;
        case 0x2b6838u: goto label_2b6838;
        case 0x2b683cu: goto label_2b683c;
        case 0x2b6840u: goto label_2b6840;
        case 0x2b6844u: goto label_2b6844;
        case 0x2b6848u: goto label_2b6848;
        case 0x2b684cu: goto label_2b684c;
        case 0x2b6850u: goto label_2b6850;
        case 0x2b6854u: goto label_2b6854;
        case 0x2b6858u: goto label_2b6858;
        case 0x2b685cu: goto label_2b685c;
        case 0x2b6860u: goto label_2b6860;
        case 0x2b6864u: goto label_2b6864;
        case 0x2b6868u: goto label_2b6868;
        case 0x2b686cu: goto label_2b686c;
        case 0x2b6870u: goto label_2b6870;
        case 0x2b6874u: goto label_2b6874;
        case 0x2b6878u: goto label_2b6878;
        case 0x2b687cu: goto label_2b687c;
        case 0x2b6880u: goto label_2b6880;
        case 0x2b6884u: goto label_2b6884;
        case 0x2b6888u: goto label_2b6888;
        case 0x2b688cu: goto label_2b688c;
        case 0x2b6890u: goto label_2b6890;
        case 0x2b6894u: goto label_2b6894;
        case 0x2b6898u: goto label_2b6898;
        case 0x2b689cu: goto label_2b689c;
        case 0x2b68a0u: goto label_2b68a0;
        case 0x2b68a4u: goto label_2b68a4;
        case 0x2b68a8u: goto label_2b68a8;
        case 0x2b68acu: goto label_2b68ac;
        case 0x2b68b0u: goto label_2b68b0;
        case 0x2b68b4u: goto label_2b68b4;
        case 0x2b68b8u: goto label_2b68b8;
        case 0x2b68bcu: goto label_2b68bc;
        case 0x2b68c0u: goto label_2b68c0;
        case 0x2b68c4u: goto label_2b68c4;
        case 0x2b68c8u: goto label_2b68c8;
        case 0x2b68ccu: goto label_2b68cc;
        case 0x2b68d0u: goto label_2b68d0;
        case 0x2b68d4u: goto label_2b68d4;
        case 0x2b68d8u: goto label_2b68d8;
        case 0x2b68dcu: goto label_2b68dc;
        case 0x2b68e0u: goto label_2b68e0;
        case 0x2b68e4u: goto label_2b68e4;
        case 0x2b68e8u: goto label_2b68e8;
        case 0x2b68ecu: goto label_2b68ec;
        case 0x2b68f0u: goto label_2b68f0;
        case 0x2b68f4u: goto label_2b68f4;
        case 0x2b68f8u: goto label_2b68f8;
        case 0x2b68fcu: goto label_2b68fc;
        case 0x2b6900u: goto label_2b6900;
        case 0x2b6904u: goto label_2b6904;
        case 0x2b6908u: goto label_2b6908;
        case 0x2b690cu: goto label_2b690c;
        case 0x2b6910u: goto label_2b6910;
        case 0x2b6914u: goto label_2b6914;
        case 0x2b6918u: goto label_2b6918;
        case 0x2b691cu: goto label_2b691c;
        case 0x2b6920u: goto label_2b6920;
        case 0x2b6924u: goto label_2b6924;
        case 0x2b6928u: goto label_2b6928;
        case 0x2b692cu: goto label_2b692c;
        case 0x2b6930u: goto label_2b6930;
        case 0x2b6934u: goto label_2b6934;
        case 0x2b6938u: goto label_2b6938;
        case 0x2b693cu: goto label_2b693c;
        case 0x2b6940u: goto label_2b6940;
        case 0x2b6944u: goto label_2b6944;
        case 0x2b6948u: goto label_2b6948;
        case 0x2b694cu: goto label_2b694c;
        case 0x2b6950u: goto label_2b6950;
        case 0x2b6954u: goto label_2b6954;
        case 0x2b6958u: goto label_2b6958;
        case 0x2b695cu: goto label_2b695c;
        case 0x2b6960u: goto label_2b6960;
        case 0x2b6964u: goto label_2b6964;
        case 0x2b6968u: goto label_2b6968;
        case 0x2b696cu: goto label_2b696c;
        case 0x2b6970u: goto label_2b6970;
        case 0x2b6974u: goto label_2b6974;
        case 0x2b6978u: goto label_2b6978;
        case 0x2b697cu: goto label_2b697c;
        case 0x2b6980u: goto label_2b6980;
        case 0x2b6984u: goto label_2b6984;
        case 0x2b6988u: goto label_2b6988;
        case 0x2b698cu: goto label_2b698c;
        case 0x2b6990u: goto label_2b6990;
        case 0x2b6994u: goto label_2b6994;
        case 0x2b6998u: goto label_2b6998;
        case 0x2b699cu: goto label_2b699c;
        case 0x2b69a0u: goto label_2b69a0;
        case 0x2b69a4u: goto label_2b69a4;
        case 0x2b69a8u: goto label_2b69a8;
        case 0x2b69acu: goto label_2b69ac;
        case 0x2b69b0u: goto label_2b69b0;
        case 0x2b69b4u: goto label_2b69b4;
        case 0x2b69b8u: goto label_2b69b8;
        case 0x2b69bcu: goto label_2b69bc;
        case 0x2b69c0u: goto label_2b69c0;
        case 0x2b69c4u: goto label_2b69c4;
        case 0x2b69c8u: goto label_2b69c8;
        case 0x2b69ccu: goto label_2b69cc;
        case 0x2b69d0u: goto label_2b69d0;
        case 0x2b69d4u: goto label_2b69d4;
        case 0x2b69d8u: goto label_2b69d8;
        case 0x2b69dcu: goto label_2b69dc;
        case 0x2b69e0u: goto label_2b69e0;
        case 0x2b69e4u: goto label_2b69e4;
        case 0x2b69e8u: goto label_2b69e8;
        case 0x2b69ecu: goto label_2b69ec;
        case 0x2b69f0u: goto label_2b69f0;
        case 0x2b69f4u: goto label_2b69f4;
        case 0x2b69f8u: goto label_2b69f8;
        case 0x2b69fcu: goto label_2b69fc;
        case 0x2b6a00u: goto label_2b6a00;
        case 0x2b6a04u: goto label_2b6a04;
        case 0x2b6a08u: goto label_2b6a08;
        case 0x2b6a0cu: goto label_2b6a0c;
        case 0x2b6a10u: goto label_2b6a10;
        case 0x2b6a14u: goto label_2b6a14;
        case 0x2b6a18u: goto label_2b6a18;
        case 0x2b6a1cu: goto label_2b6a1c;
        case 0x2b6a20u: goto label_2b6a20;
        case 0x2b6a24u: goto label_2b6a24;
        case 0x2b6a28u: goto label_2b6a28;
        case 0x2b6a2cu: goto label_2b6a2c;
        case 0x2b6a30u: goto label_2b6a30;
        case 0x2b6a34u: goto label_2b6a34;
        case 0x2b6a38u: goto label_2b6a38;
        case 0x2b6a3cu: goto label_2b6a3c;
        case 0x2b6a40u: goto label_2b6a40;
        case 0x2b6a44u: goto label_2b6a44;
        case 0x2b6a48u: goto label_2b6a48;
        case 0x2b6a4cu: goto label_2b6a4c;
        case 0x2b6a50u: goto label_2b6a50;
        case 0x2b6a54u: goto label_2b6a54;
        case 0x2b6a58u: goto label_2b6a58;
        case 0x2b6a5cu: goto label_2b6a5c;
        case 0x2b6a60u: goto label_2b6a60;
        case 0x2b6a64u: goto label_2b6a64;
        case 0x2b6a68u: goto label_2b6a68;
        case 0x2b6a6cu: goto label_2b6a6c;
        case 0x2b6a70u: goto label_2b6a70;
        case 0x2b6a74u: goto label_2b6a74;
        case 0x2b6a78u: goto label_2b6a78;
        case 0x2b6a7cu: goto label_2b6a7c;
        case 0x2b6a80u: goto label_2b6a80;
        case 0x2b6a84u: goto label_2b6a84;
        case 0x2b6a88u: goto label_2b6a88;
        case 0x2b6a8cu: goto label_2b6a8c;
        case 0x2b6a90u: goto label_2b6a90;
        case 0x2b6a94u: goto label_2b6a94;
        case 0x2b6a98u: goto label_2b6a98;
        case 0x2b6a9cu: goto label_2b6a9c;
        case 0x2b6aa0u: goto label_2b6aa0;
        case 0x2b6aa4u: goto label_2b6aa4;
        case 0x2b6aa8u: goto label_2b6aa8;
        case 0x2b6aacu: goto label_2b6aac;
        case 0x2b6ab0u: goto label_2b6ab0;
        case 0x2b6ab4u: goto label_2b6ab4;
        case 0x2b6ab8u: goto label_2b6ab8;
        case 0x2b6abcu: goto label_2b6abc;
        case 0x2b6ac0u: goto label_2b6ac0;
        case 0x2b6ac4u: goto label_2b6ac4;
        case 0x2b6ac8u: goto label_2b6ac8;
        case 0x2b6accu: goto label_2b6acc;
        case 0x2b6ad0u: goto label_2b6ad0;
        case 0x2b6ad4u: goto label_2b6ad4;
        case 0x2b6ad8u: goto label_2b6ad8;
        case 0x2b6adcu: goto label_2b6adc;
        case 0x2b6ae0u: goto label_2b6ae0;
        case 0x2b6ae4u: goto label_2b6ae4;
        case 0x2b6ae8u: goto label_2b6ae8;
        case 0x2b6aecu: goto label_2b6aec;
        case 0x2b6af0u: goto label_2b6af0;
        case 0x2b6af4u: goto label_2b6af4;
        case 0x2b6af8u: goto label_2b6af8;
        case 0x2b6afcu: goto label_2b6afc;
        case 0x2b6b00u: goto label_2b6b00;
        case 0x2b6b04u: goto label_2b6b04;
        case 0x2b6b08u: goto label_2b6b08;
        case 0x2b6b0cu: goto label_2b6b0c;
        case 0x2b6b10u: goto label_2b6b10;
        case 0x2b6b14u: goto label_2b6b14;
        case 0x2b6b18u: goto label_2b6b18;
        case 0x2b6b1cu: goto label_2b6b1c;
        case 0x2b6b20u: goto label_2b6b20;
        case 0x2b6b24u: goto label_2b6b24;
        case 0x2b6b28u: goto label_2b6b28;
        case 0x2b6b2cu: goto label_2b6b2c;
        case 0x2b6b30u: goto label_2b6b30;
        case 0x2b6b34u: goto label_2b6b34;
        case 0x2b6b38u: goto label_2b6b38;
        case 0x2b6b3cu: goto label_2b6b3c;
        case 0x2b6b40u: goto label_2b6b40;
        case 0x2b6b44u: goto label_2b6b44;
        case 0x2b6b48u: goto label_2b6b48;
        case 0x2b6b4cu: goto label_2b6b4c;
        case 0x2b6b50u: goto label_2b6b50;
        case 0x2b6b54u: goto label_2b6b54;
        case 0x2b6b58u: goto label_2b6b58;
        case 0x2b6b5cu: goto label_2b6b5c;
        case 0x2b6b60u: goto label_2b6b60;
        case 0x2b6b64u: goto label_2b6b64;
        case 0x2b6b68u: goto label_2b6b68;
        case 0x2b6b6cu: goto label_2b6b6c;
        case 0x2b6b70u: goto label_2b6b70;
        case 0x2b6b74u: goto label_2b6b74;
        case 0x2b6b78u: goto label_2b6b78;
        case 0x2b6b7cu: goto label_2b6b7c;
        case 0x2b6b80u: goto label_2b6b80;
        case 0x2b6b84u: goto label_2b6b84;
        case 0x2b6b88u: goto label_2b6b88;
        case 0x2b6b8cu: goto label_2b6b8c;
        case 0x2b6b90u: goto label_2b6b90;
        case 0x2b6b94u: goto label_2b6b94;
        case 0x2b6b98u: goto label_2b6b98;
        case 0x2b6b9cu: goto label_2b6b9c;
        case 0x2b6ba0u: goto label_2b6ba0;
        case 0x2b6ba4u: goto label_2b6ba4;
        case 0x2b6ba8u: goto label_2b6ba8;
        case 0x2b6bacu: goto label_2b6bac;
        case 0x2b6bb0u: goto label_2b6bb0;
        case 0x2b6bb4u: goto label_2b6bb4;
        case 0x2b6bb8u: goto label_2b6bb8;
        case 0x2b6bbcu: goto label_2b6bbc;
        case 0x2b6bc0u: goto label_2b6bc0;
        case 0x2b6bc4u: goto label_2b6bc4;
        case 0x2b6bc8u: goto label_2b6bc8;
        case 0x2b6bccu: goto label_2b6bcc;
        case 0x2b6bd0u: goto label_2b6bd0;
        case 0x2b6bd4u: goto label_2b6bd4;
        case 0x2b6bd8u: goto label_2b6bd8;
        case 0x2b6bdcu: goto label_2b6bdc;
        case 0x2b6be0u: goto label_2b6be0;
        case 0x2b6be4u: goto label_2b6be4;
        case 0x2b6be8u: goto label_2b6be8;
        case 0x2b6becu: goto label_2b6bec;
        case 0x2b6bf0u: goto label_2b6bf0;
        case 0x2b6bf4u: goto label_2b6bf4;
        case 0x2b6bf8u: goto label_2b6bf8;
        case 0x2b6bfcu: goto label_2b6bfc;
        case 0x2b6c00u: goto label_2b6c00;
        case 0x2b6c04u: goto label_2b6c04;
        case 0x2b6c08u: goto label_2b6c08;
        case 0x2b6c0cu: goto label_2b6c0c;
        case 0x2b6c10u: goto label_2b6c10;
        case 0x2b6c14u: goto label_2b6c14;
        case 0x2b6c18u: goto label_2b6c18;
        case 0x2b6c1cu: goto label_2b6c1c;
        case 0x2b6c20u: goto label_2b6c20;
        case 0x2b6c24u: goto label_2b6c24;
        case 0x2b6c28u: goto label_2b6c28;
        case 0x2b6c2cu: goto label_2b6c2c;
        case 0x2b6c30u: goto label_2b6c30;
        case 0x2b6c34u: goto label_2b6c34;
        case 0x2b6c38u: goto label_2b6c38;
        case 0x2b6c3cu: goto label_2b6c3c;
        case 0x2b6c40u: goto label_2b6c40;
        case 0x2b6c44u: goto label_2b6c44;
        case 0x2b6c48u: goto label_2b6c48;
        case 0x2b6c4cu: goto label_2b6c4c;
        case 0x2b6c50u: goto label_2b6c50;
        case 0x2b6c54u: goto label_2b6c54;
        case 0x2b6c58u: goto label_2b6c58;
        case 0x2b6c5cu: goto label_2b6c5c;
        case 0x2b6c60u: goto label_2b6c60;
        case 0x2b6c64u: goto label_2b6c64;
        case 0x2b6c68u: goto label_2b6c68;
        case 0x2b6c6cu: goto label_2b6c6c;
        case 0x2b6c70u: goto label_2b6c70;
        case 0x2b6c74u: goto label_2b6c74;
        case 0x2b6c78u: goto label_2b6c78;
        case 0x2b6c7cu: goto label_2b6c7c;
        case 0x2b6c80u: goto label_2b6c80;
        case 0x2b6c84u: goto label_2b6c84;
        case 0x2b6c88u: goto label_2b6c88;
        case 0x2b6c8cu: goto label_2b6c8c;
        case 0x2b6c90u: goto label_2b6c90;
        case 0x2b6c94u: goto label_2b6c94;
        case 0x2b6c98u: goto label_2b6c98;
        case 0x2b6c9cu: goto label_2b6c9c;
        case 0x2b6ca0u: goto label_2b6ca0;
        case 0x2b6ca4u: goto label_2b6ca4;
        case 0x2b6ca8u: goto label_2b6ca8;
        case 0x2b6cacu: goto label_2b6cac;
        default: break;
    }

    ctx->pc = 0x2b6520u;

label_2b6520:
    // 0x2b6520: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2b6524:
    // 0x2b6524: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2b6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_2b6528:
    // 0x2b6528: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2b6528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_2b652c:
    // 0x2b652c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b652cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6530:
    // 0x2b6530: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2b6534:
    // 0x2b6534: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b6534u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6538:
    // 0x2b6538: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_2b653c:
    // 0x2b653c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b653cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b6540:
    // 0x2b6540: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2b6544:
    // 0x2b6544: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2b6544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b6548:
    // 0x2b6548: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2b654c:
    // 0x2b654c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b654cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6550:
    // 0x2b6550: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2b6554:
    // 0x2b6554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6558:
    // 0x2b6558: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2b655c:
    // 0x2b655c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2b6560:
    // 0x2b6560: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b6560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2b6564:
    // 0x2b6564: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2b6564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b6568:
    // 0x2b6568: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2b6568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_2b656c:
    // 0x2b656c: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2b656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_2b6570:
    // 0x2b6570: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b6570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2b6574:
    // 0x2b6574: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b6578:
    if (ctx->pc == 0x2B6578u) {
        ctx->pc = 0x2B6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6574u;
        // 0x2b6578: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B657Cu;
        goto label_2b657c;
    }
    ctx->pc = 0x2B6574u;
    {
        const bool branch_taken_0x2b6574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6574u;
        // 0x2b6578: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6574) {
            ctx->pc = 0x2B658Cu;
            goto label_2b658c;
        }
    }
    ctx->pc = 0x2B657Cu;
label_2b657c:
    // 0x2b657c: 0xc0ab574  jal         func_2AD5D0
label_2b6580:
    if (ctx->pc == 0x2B6580u) {
        ctx->pc = 0x2B6584u;
        goto label_2b6584;
    }
    ctx->pc = 0x2B657Cu;
    SET_GPR_U32(ctx, 31, 0x2B6584u);
    ctx->pc = 0x2AD5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD5D0u, 0x2B657Cu, 0x2B6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6584u;
label_2b6584:
    // 0x2b6584: 0x104001be  beqz        $v0, . + 4 + (0x1BE << 2)
label_2b6588:
    if (ctx->pc == 0x2B6588u) {
        ctx->pc = 0x2B6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6584u;
        // 0x2b6588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B658Cu;
        goto label_2b658c;
    }
    ctx->pc = 0x2B6584u;
    {
        const bool branch_taken_0x2b6584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6584u;
        // 0x2b6588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6584) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B658Cu;
label_2b658c:
    // 0x2b658c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b6590:
    // 0x2b6590: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2b6594:
    if (ctx->pc == 0x2B6594u) {
        ctx->pc = 0x2B6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6590u;
        // 0x2b6594: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6598u;
        goto label_2b6598;
    }
    ctx->pc = 0x2B6590u;
    {
        const bool branch_taken_0x2b6590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6590) {
            ctx->pc = 0x2B6594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6590u;
            // 0x2b6594: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F4u;
            goto label_2b65f4;
        }
    }
    ctx->pc = 0x2B6598u;
label_2b6598:
    // 0x2b6598: 0xc0ac604  jal         func_2B1810
label_2b659c:
    if (ctx->pc == 0x2B659Cu) {
        ctx->pc = 0x2B659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6598u;
        // 0x2b659c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65A0u;
        goto label_2b65a0;
    }
    ctx->pc = 0x2B6598u;
    SET_GPR_U32(ctx, 31, 0x2B65A0u);
    ctx->pc = 0x2B659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6598u;
    // 0x2b659c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B6598u, 0x2B65A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B65A0u;
label_2b65a0:
    // 0x2b65a0: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b65a4:
    // 0x2b65a4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_2b65a8:
    if (ctx->pc == 0x2B65A8u) {
        ctx->pc = 0x2B65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65A4u;
        // 0x2b65a8: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65ACu;
        goto label_2b65ac;
    }
    ctx->pc = 0x2B65A4u;
    {
        const bool branch_taken_0x2b65a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b65a4) {
            ctx->pc = 0x2B65A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B65A4u;
            // 0x2b65a8: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F4u;
            goto label_2b65f4;
        }
    }
    ctx->pc = 0x2B65ACu;
label_2b65ac:
    // 0x2b65ac: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b65acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b65b0:
    // 0x2b65b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b65b4:
    if (ctx->pc == 0x2B65B4u) {
        ctx->pc = 0x2B65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65B0u;
        // 0x2b65b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65B8u;
        goto label_2b65b8;
    }
    ctx->pc = 0x2B65B0u;
    {
        const bool branch_taken_0x2b65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65B0u;
        // 0x2b65b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65b0) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B65B8u;
label_2b65b8:
    // 0x2b65b8: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b65b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b65bc:
    // 0x2b65bc: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_2b65c0:
    if (ctx->pc == 0x2B65C0u) {
        ctx->pc = 0x2B65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65BCu;
        // 0x2b65c0: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65C4u;
        goto label_2b65c4;
    }
    ctx->pc = 0x2B65BCu;
    {
        const bool branch_taken_0x2b65bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65BCu;
        // 0x2b65c0: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65bc) {
            ctx->pc = 0x2B69A4u;
            goto label_2b69a4;
        }
    }
    ctx->pc = 0x2B65C4u;
label_2b65c4:
    // 0x2b65c4: 0x40f809  jalr        $v0
label_2b65c8:
    if (ctx->pc == 0x2B65C8u) {
        ctx->pc = 0x2B65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65C4u;
        // 0x2b65c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65CCu;
        goto label_2b65cc;
    }
    ctx->pc = 0x2B65C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B65CCu);
        ctx->pc = 0x2B65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65C4u;
        // 0x2b65c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65C4u, 0x2B65CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B65CCu;
label_2b65cc:
    // 0x2b65cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b65ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b65d0:
    // 0x2b65d0: 0x64001ac  bltz        $s2, . + 4 + (0x1AC << 2)
label_2b65d4:
    if (ctx->pc == 0x2B65D4u) {
        ctx->pc = 0x2B65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65D0u;
        // 0x2b65d4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65D8u;
        goto label_2b65d8;
    }
    ctx->pc = 0x2B65D0u;
    {
        const bool branch_taken_0x2b65d0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2B65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65D0u;
        // 0x2b65d4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65d0) {
            ctx->pc = 0x2B6C84u;
            goto label_2b6c84;
        }
    }
    ctx->pc = 0x2B65D8u;
label_2b65d8:
    // 0x2b65d8: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_2b65dc:
    if (ctx->pc == 0x2B65DCu) {
        ctx->pc = 0x2B65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65D8u;
        // 0x2b65dc: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65E0u;
        goto label_2b65e0;
    }
    ctx->pc = 0x2B65D8u;
    {
        const bool branch_taken_0x2b65d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b65d8) {
            ctx->pc = 0x2B65DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B65D8u;
            // 0x2b65dc: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F4u;
            goto label_2b65f4;
        }
    }
    ctx->pc = 0x2B65E0u;
label_2b65e0:
    // 0x2b65e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b65e4:
    // 0x2b65e4: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b65e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b65e8:
    // 0x2b65e8: 0x100000ee  b           . + 4 + (0xEE << 2)
label_2b65ec:
    if (ctx->pc == 0x2B65ECu) {
        ctx->pc = 0x2B65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65E8u;
        // 0x2b65ec: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65F0u;
        goto label_2b65f0;
    }
    ctx->pc = 0x2B65E8u;
    {
        const bool branch_taken_0x2b65e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65E8u;
        // 0x2b65ec: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65e8) {
            ctx->pc = 0x2B69A4u;
            goto label_2b69a4;
        }
    }
    ctx->pc = 0x2B65F0u;
label_2b65f0:
    // 0x2b65f0: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b65f4:
    // 0x2b65f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b65f8:
    // 0x2b65f8: 0x24b300b4  addiu       $s3, $a1, 0xB4
    ctx->pc = 0x2b65f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 180));
label_2b65fc:
    // 0x2b65fc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2b65fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2b6600:
    // 0x2b6600: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b6604:
    // 0x2b6604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b6608:
    if (ctx->pc == 0x2B6608u) {
        ctx->pc = 0x2B6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6604u;
        // 0x2b6608: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B660Cu;
        goto label_2b660c;
    }
    ctx->pc = 0x2B6604u;
    {
        const bool branch_taken_0x2b6604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6604u;
        // 0x2b6608: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6604) {
            ctx->pc = 0x2B6618u;
            goto label_2b6618;
        }
    }
    ctx->pc = 0x2B660Cu;
label_2b660c:
    // 0x2b660c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2b660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2b6610:
    // 0x2b6610: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2b6614:
    if (ctx->pc == 0x2B6614u) {
        ctx->pc = 0x2B6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6610u;
        // 0x2b6614: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6618u;
        goto label_2b6618;
    }
    ctx->pc = 0x2B6610u;
    {
        const bool branch_taken_0x2b6610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6610) {
            ctx->pc = 0x2B6614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6610u;
            // 0x2b6614: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6630u;
            goto label_2b6630;
        }
    }
    ctx->pc = 0x2B6618u;
label_2b6618:
    // 0x2b6618: 0xc0ad736  jal         func_2B5CD8
label_2b661c:
    if (ctx->pc == 0x2B661Cu) {
        ctx->pc = 0x2B661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6618u;
        // 0x2b661c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6620u;
        goto label_2b6620;
    }
    ctx->pc = 0x2B6618u;
    SET_GPR_U32(ctx, 31, 0x2B6620u);
    ctx->pc = 0x2B661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6618u;
    // 0x2b661c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5CD8u, 0x2B6618u, 0x2B6620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6620u;
label_2b6620:
    // 0x2b6620: 0x18400198  blez        $v0, . + 4 + (0x198 << 2)
label_2b6624:
    if (ctx->pc == 0x2B6624u) {
        ctx->pc = 0x2B6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6620u;
        // 0x2b6624: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6628u;
        goto label_2b6628;
    }
    ctx->pc = 0x2B6620u;
    {
        const bool branch_taken_0x2b6620 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6620u;
        // 0x2b6624: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6620) {
            ctx->pc = 0x2B6C84u;
            goto label_2b6c84;
        }
    }
    ctx->pc = 0x2B6628u;
label_2b6628:
    // 0x2b6628: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2b6628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b662c:
    // 0x2b662c: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x2b662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_2b6630:
    // 0x2b6630: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b6634:
    if (ctx->pc == 0x2B6634u) {
        ctx->pc = 0x2B6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6630u;
        // 0x2b6634: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6638u;
        goto label_2b6638;
    }
    ctx->pc = 0x2B6630u;
    {
        const bool branch_taken_0x2b6630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6630u;
        // 0x2b6634: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6630) {
            ctx->pc = 0x2B6644u;
            goto label_2b6644;
        }
    }
    ctx->pc = 0x2B6638u;
label_2b6638:
    // 0x2b6638: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b6638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b663c:
    // 0x2b663c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_2b6640:
    if (ctx->pc == 0x2B6640u) {
        ctx->pc = 0x2B6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B663Cu;
        // 0x2b6640: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6644u;
        goto label_2b6644;
    }
    ctx->pc = 0x2B663Cu;
    {
        const bool branch_taken_0x2b663c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b663c) {
            ctx->pc = 0x2B6640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B663Cu;
            // 0x2b6640: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6664u;
            goto label_2b6664;
        }
    }
    ctx->pc = 0x2B6644u;
label_2b6644:
    // 0x2b6644: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2b6644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b6648:
    // 0x2b6648: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2b6648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2b664c:
    // 0x2b664c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b6650:
    // 0x2b6650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6654:
    if (ctx->pc == 0x2B6654u) {
        ctx->pc = 0x2B6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6650u;
        // 0x2b6654: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6658u;
        goto label_2b6658;
    }
    ctx->pc = 0x2B6650u;
    {
        const bool branch_taken_0x2b6650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6650u;
        // 0x2b6654: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6650) {
            ctx->pc = 0x2B6670u;
            goto label_2b6670;
        }
    }
    ctx->pc = 0x2B6658u;
label_2b6658:
    // 0x2b6658: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b665c:
    // 0x2b665c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2b6660:
    if (ctx->pc == 0x2B6660u) {
        ctx->pc = 0x2B6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B665Cu;
        // 0x2b6660: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6664u;
        goto label_2b6664;
    }
    ctx->pc = 0x2B665Cu;
    {
        const bool branch_taken_0x2b665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B665Cu;
        // 0x2b6660: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b665c) {
            ctx->pc = 0x2B6670u;
            goto label_2b6670;
        }
    }
    ctx->pc = 0x2B6664u;
label_2b6664:
    // 0x2b6664: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6668:
    // 0x2b6668: 0x100000ce  b           . + 4 + (0xCE << 2)
label_2b666c:
    if (ctx->pc == 0x2B666Cu) {
        ctx->pc = 0x2B666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6668u;
        // 0x2b666c: 0x24060091  addiu       $a2, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6670u;
        goto label_2b6670;
    }
    ctx->pc = 0x2B6668u;
    {
        const bool branch_taken_0x2b6668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6668u;
        // 0x2b666c: 0x24060091  addiu       $a2, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6668) {
            ctx->pc = 0x2B69A4u;
            goto label_2b69a4;
        }
    }
    ctx->pc = 0x2B6670u;
label_2b6670:
    // 0x2b6670: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2b6674:
    // 0x2b6674: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x2b6674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_2b6678:
    // 0x2b6678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b667c:
    if (ctx->pc == 0x2B667Cu) {
        ctx->pc = 0x2B667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6678u;
        // 0x2b667c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6680u;
        goto label_2b6680;
    }
    ctx->pc = 0x2B6678u;
    {
        const bool branch_taken_0x2b6678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6678u;
        // 0x2b667c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6678) {
            ctx->pc = 0x2B6690u;
            goto label_2b6690;
        }
    }
    ctx->pc = 0x2B6680u;
label_2b6680:
    // 0x2b6680: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2b6680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2b6684:
    // 0x2b6684: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2b6684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2b6688:
    // 0x2b6688: 0x1000017d  b           . + 4 + (0x17D << 2)
label_2b668c:
    if (ctx->pc == 0x2B668Cu) {
        ctx->pc = 0x2B668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6688u;
        // 0x2b668c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6690u;
        goto label_2b6690;
    }
    ctx->pc = 0x2B6688u;
    {
        const bool branch_taken_0x2b6688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6688u;
        // 0x2b668c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6688) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6690u;
label_2b6690:
    // 0x2b6690: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b6690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b6694:
    // 0x2b6694: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b6698:
    // 0x2b6698: 0x1482004b  bne         $a0, $v0, . + 4 + (0x4B << 2)
label_2b669c:
    if (ctx->pc == 0x2B669Cu) {
        ctx->pc = 0x2B669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6698u;
        // 0x2b669c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B66A0u;
        goto label_2b66a0;
    }
    ctx->pc = 0x2B6698u;
    {
        const bool branch_taken_0x2b6698 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6698u;
        // 0x2b669c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6698) {
            ctx->pc = 0x2B67C8u;
            goto label_2b67c8;
        }
    }
    ctx->pc = 0x2B66A0u;
label_2b66a0:
    // 0x2b66a0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2b66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b66a4:
    // 0x2b66a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b66a8:
    // 0x2b66a8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_2b66ac:
    if (ctx->pc == 0x2B66ACu) {
        ctx->pc = 0x2B66B0u;
        goto label_2b66b0;
    }
    ctx->pc = 0x2B66A8u;
    {
        const bool branch_taken_0x2b66a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b66a8) {
            ctx->pc = 0x2B67C8u;
            goto label_2b67c8;
        }
    }
    ctx->pc = 0x2B66B0u;
label_2b66b0:
    // 0x2b66b0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2b66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2b66b4:
    // 0x2b66b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b66b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b66b8:
    // 0x2b66b8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_2b66bc:
    if (ctx->pc == 0x2B66BCu) {
        ctx->pc = 0x2B66C0u;
        goto label_2b66c0;
    }
    ctx->pc = 0x2B66B8u;
    {
        const bool branch_taken_0x2b66b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b66b8) {
            ctx->pc = 0x2B67C8u;
            goto label_2b67c8;
        }
    }
    ctx->pc = 0x2B66C0u;
label_2b66c0:
    // 0x2b66c0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2b66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b66c4:
    // 0x2b66c4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2b66c8:
    if (ctx->pc == 0x2B66C8u) {
        ctx->pc = 0x2B66CCu;
        goto label_2b66cc;
    }
    ctx->pc = 0x2B66C4u;
    {
        const bool branch_taken_0x2b66c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b66c4) {
            ctx->pc = 0x2B67C8u;
            goto label_2b67c8;
        }
    }
    ctx->pc = 0x2B66CCu;
label_2b66cc:
    // 0x2b66cc: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x2b66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2b66d0:
    // 0x2b66d0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_2b66d4:
    if (ctx->pc == 0x2B66D4u) {
        ctx->pc = 0x2B66D8u;
        goto label_2b66d8;
    }
    ctx->pc = 0x2B66D0u;
    {
        const bool branch_taken_0x2b66d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b66d0) {
            ctx->pc = 0x2B67C8u;
            goto label_2b67c8;
        }
    }
    ctx->pc = 0x2B66D8u;
label_2b66d8:
    // 0x2b66d8: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2b66d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2b66dc:
    // 0x2b66dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b66e0:
    if (ctx->pc == 0x2B66E0u) {
        ctx->pc = 0x2B66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66DCu;
        // 0x2b66e0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B66E4u;
        goto label_2b66e4;
    }
    ctx->pc = 0x2B66DCu;
    {
        const bool branch_taken_0x2b66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66DCu;
        // 0x2b66e0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66dc) {
            ctx->pc = 0x2B66FCu;
            goto label_2b66fc;
        }
    }
    ctx->pc = 0x2B66E4u;
label_2b66e4:
    // 0x2b66e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2b66e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2b66e8:
    // 0x2b66e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b66ec:
    if (ctx->pc == 0x2B66ECu) {
        ctx->pc = 0x2B66F0u;
        goto label_2b66f0;
    }
    ctx->pc = 0x2B66E8u;
    {
        const bool branch_taken_0x2b66e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b66e8) {
            ctx->pc = 0x2B66FCu;
            goto label_2b66fc;
        }
    }
    ctx->pc = 0x2B66F0u;
label_2b66f0:
    // 0x2b66f0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2b66f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_2b66f4:
    // 0x2b66f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b66f8:
    if (ctx->pc == 0x2B66F8u) {
        ctx->pc = 0x2B66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66F4u;
        // 0x2b66f8: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B66FCu;
        goto label_2b66fc;
    }
    ctx->pc = 0x2B66F4u;
    {
        const bool branch_taken_0x2b66f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b66f4) {
            ctx->pc = 0x2B66F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B66F4u;
            // 0x2b66f8: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6708u;
            goto label_2b6708;
        }
    }
    ctx->pc = 0x2B66FCu;
label_2b66fc:
    // 0x2b66fc: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b66fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6700:
    // 0x2b6700: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_2b6704:
    if (ctx->pc == 0x2B6704u) {
        ctx->pc = 0x2B6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6700u;
        // 0x2b6704: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6708u;
        goto label_2b6708;
    }
    ctx->pc = 0x2B6700u;
    {
        const bool branch_taken_0x2b6700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6700u;
        // 0x2b6704: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6700) {
            ctx->pc = 0x2B69A4u;
            goto label_2b69a4;
        }
    }
    ctx->pc = 0x2B6708u;
label_2b6708:
    // 0x2b6708: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2b670c:
    if (ctx->pc == 0x2B670Cu) {
        ctx->pc = 0x2B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6708u;
        // 0x2b670c: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6710u;
        goto label_2b6710;
    }
    ctx->pc = 0x2B6708u;
    {
        const bool branch_taken_0x2b6708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6708) {
            ctx->pc = 0x2B670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6708u;
            // 0x2b670c: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6718u;
            goto label_2b6718;
        }
    }
    ctx->pc = 0x2B6710u;
label_2b6710:
    // 0x2b6710: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b6714:
    if (ctx->pc == 0x2B6714u) {
        ctx->pc = 0x2B6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6710u;
        // 0x2b6714: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6718u;
        goto label_2b6718;
    }
    ctx->pc = 0x2B6710u;
    {
        const bool branch_taken_0x2b6710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6710u;
        // 0x2b6714: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6710) {
            ctx->pc = 0x2B6720u;
            goto label_2b6720;
        }
    }
    ctx->pc = 0x2B6718u;
label_2b6718:
    // 0x2b6718: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2b6718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2b671c:
    // 0x2b671c: 0x42b80b  movn        $s7, $v0, $v0
    ctx->pc = 0x2b671cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_2b6720:
    // 0x2b6720: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_2b6724:
    if (ctx->pc == 0x2B6724u) {
        ctx->pc = 0x2B6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6720u;
        // 0x2b6724: 0x24021101  addiu       $v0, $zero, 0x1101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6728u;
        goto label_2b6728;
    }
    ctx->pc = 0x2B6720u;
    {
        const bool branch_taken_0x2b6720 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6720u;
        // 0x2b6724: 0x24021101  addiu       $v0, $zero, 0x1101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6720) {
            ctx->pc = 0x2B6744u;
            goto label_2b6744;
        }
    }
    ctx->pc = 0x2B6728u;
label_2b6728:
    // 0x2b6728: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x2b6728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b672c:
    // 0x2b672c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b6730:
    // 0x2b6730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6734:
    // 0x2b6734: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x2b6734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_2b6738:
    // 0x2b6738: 0x2e0f809  jalr        $s7
label_2b673c:
    if (ctx->pc == 0x2B673Cu) {
        ctx->pc = 0x2B673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6738u;
        // 0x2b673c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6740u;
        goto label_2b6740;
    }
    ctx->pc = 0x2B6738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x2B6740u);
        ctx->pc = 0x2B673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6738u;
        // 0x2b673c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6738u, 0x2B6740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6740u;
label_2b6740:
    // 0x2b6740: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x2b6740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_2b6744:
    // 0x2b6744: 0xc0ac604  jal         func_2B1810
label_2b6748:
    if (ctx->pc == 0x2B6748u) {
        ctx->pc = 0x2B6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6744u;
        // 0x2b6748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B674Cu;
        goto label_2b674c;
    }
    ctx->pc = 0x2B6744u;
    SET_GPR_U32(ctx, 31, 0x2B674Cu);
    ctx->pc = 0x2B6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6744u;
    // 0x2b6748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B6744u, 0x2B674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B674Cu;
label_2b674c:
    // 0x2b674c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b6750:
    // 0x2b6750: 0x5443ffa7  bnel        $v0, $v1, . + 4 + (-0x59 << 2)
label_2b6754:
    if (ctx->pc == 0x2B6754u) {
        ctx->pc = 0x2B6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6750u;
        // 0x2b6754: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6758u;
        goto label_2b6758;
    }
    ctx->pc = 0x2B6750u;
    {
        const bool branch_taken_0x2b6750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6750) {
            ctx->pc = 0x2B6754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6750u;
            // 0x2b6754: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B6758u;
label_2b6758:
    // 0x2b6758: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b6758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b675c:
    // 0x2b675c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b675cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b6760:
    // 0x2b6760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b6764:
    // 0x2b6764: 0x5440ffa2  bnel        $v0, $zero, . + 4 + (-0x5E << 2)
label_2b6768:
    if (ctx->pc == 0x2B6768u) {
        ctx->pc = 0x2B6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6764u;
        // 0x2b6768: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B676Cu;
        goto label_2b676c;
    }
    ctx->pc = 0x2B6764u;
    {
        const bool branch_taken_0x2b6764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6764) {
            ctx->pc = 0x2B6768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6764u;
            // 0x2b6768: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B676Cu;
label_2b676c:
    // 0x2b676c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x2b676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_2b6770:
    // 0x2b6770: 0x5440ff9f  bnel        $v0, $zero, . + 4 + (-0x61 << 2)
label_2b6774:
    if (ctx->pc == 0x2B6774u) {
        ctx->pc = 0x2B6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6770u;
        // 0x2b6774: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6778u;
        goto label_2b6778;
    }
    ctx->pc = 0x2B6770u;
    {
        const bool branch_taken_0x2b6770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6770) {
            ctx->pc = 0x2B6774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6770u;
            // 0x2b6774: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B6778u;
label_2b6778:
    // 0x2b6778: 0xc0abd8e  jal         func_2AF638
label_2b677c:
    if (ctx->pc == 0x2B677Cu) {
        ctx->pc = 0x2B677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6778u;
        // 0x2b677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6780u;
        goto label_2b6780;
    }
    ctx->pc = 0x2B6778u;
    SET_GPR_U32(ctx, 31, 0x2B6780u);
    ctx->pc = 0x2B677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6778u;
    // 0x2b677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF638u, 0x2B6778u, 0x2B6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6780u;
label_2b6780:
    // 0x2b6780: 0xc0abd9e  jal         func_2AF678
label_2b6784:
    if (ctx->pc == 0x2B6784u) {
        ctx->pc = 0x2B6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6780u;
        // 0x2b6784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6788u;
        goto label_2b6788;
    }
    ctx->pc = 0x2B6780u;
    SET_GPR_U32(ctx, 31, 0x2B6788u);
    ctx->pc = 0x2B6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6780u;
    // 0x2b6784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF678u, 0x2B6780u, 0x2B6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6788u;
label_2b6788:
    // 0x2b6788: 0x5040ff99  beql        $v0, $zero, . + 4 + (-0x67 << 2)
label_2b678c:
    if (ctx->pc == 0x2B678Cu) {
        ctx->pc = 0x2B678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6788u;
        // 0x2b678c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6790u;
        goto label_2b6790;
    }
    ctx->pc = 0x2B6788u;
    {
        const bool branch_taken_0x2b6788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6788) {
            ctx->pc = 0x2B678Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6788u;
            // 0x2b678c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B6790u;
label_2b6790:
    // 0x2b6790: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b6794:
    // 0x2b6794: 0x40f809  jalr        $v0
label_2b6798:
    if (ctx->pc == 0x2B6798u) {
        ctx->pc = 0x2B6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6794u;
        // 0x2b6798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B679Cu;
        goto label_2b679c;
    }
    ctx->pc = 0x2B6794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B679Cu);
        ctx->pc = 0x2B6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6794u;
        // 0x2b6798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6794u, 0x2B679Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B679Cu;
label_2b679c:
    // 0x2b679c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b679cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b67a0:
    // 0x2b67a0: 0x6000138  bltz        $s0, . + 4 + (0x138 << 2)
label_2b67a4:
    if (ctx->pc == 0x2B67A4u) {
        ctx->pc = 0x2B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67A0u;
        // 0x2b67a4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67A8u;
        goto label_2b67a8;
    }
    ctx->pc = 0x2B67A0u;
    {
        const bool branch_taken_0x2b67a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67A0u;
        // 0x2b67a4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67a0) {
            ctx->pc = 0x2B6C84u;
            goto label_2b6c84;
        }
    }
    ctx->pc = 0x2B67A8u;
label_2b67a8:
    // 0x2b67a8: 0x5600ff91  bnel        $s0, $zero, . + 4 + (-0x6F << 2)
label_2b67ac:
    if (ctx->pc == 0x2B67ACu) {
        ctx->pc = 0x2B67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67A8u;
        // 0x2b67ac: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67B0u;
        goto label_2b67b0;
    }
    ctx->pc = 0x2B67A8u;
    {
        const bool branch_taken_0x2b67a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b67a8) {
            ctx->pc = 0x2B67ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B67A8u;
            // 0x2b67ac: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B67B0u;
label_2b67b0:
    // 0x2b67b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b67b4:
    // 0x2b67b4: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b67b8:
    // 0x2b67b8: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2b67bc:
    if (ctx->pc == 0x2B67BCu) {
        ctx->pc = 0x2B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67B8u;
        // 0x2b67bc: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67C0u;
        goto label_2b67c0;
    }
    ctx->pc = 0x2B67B8u;
    {
        const bool branch_taken_0x2b67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67B8u;
        // 0x2b67bc: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67b8) {
            ctx->pc = 0x2B69A4u;
            goto label_2b69a4;
        }
    }
    ctx->pc = 0x2B67C0u;
label_2b67c0:
    // 0x2b67c0: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
label_2b67c4:
    if (ctx->pc == 0x2B67C4u) {
        ctx->pc = 0x2B67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C0u;
        // 0x2b67c4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67C8u;
        goto label_2b67c8;
    }
    ctx->pc = 0x2B67C0u;
    {
        const bool branch_taken_0x2b67c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C0u;
        // 0x2b67c4: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67c0) {
            ctx->pc = 0x2B65F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B67C8u;
label_2b67c8:
    // 0x2b67c8: 0x14f60004  bne         $a3, $s6, . + 4 + (0x4 << 2)
label_2b67cc:
    if (ctx->pc == 0x2B67CCu) {
        ctx->pc = 0x2B67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C8u;
        // 0x2b67cc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67D0u;
        goto label_2b67d0;
    }
    ctx->pc = 0x2B67C8u;
    {
        const bool branch_taken_0x2b67c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        ctx->pc = 0x2B67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C8u;
        // 0x2b67cc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67c8) {
            ctx->pc = 0x2B67DCu;
            goto label_2b67dc;
        }
    }
    ctx->pc = 0x2B67D0u;
label_2b67d0:
    // 0x2b67d0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2b67d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_2b67d4:
    // 0x2b67d4: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_2b67d8:
    if (ctx->pc == 0x2B67D8u) {
        ctx->pc = 0x2B67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67D4u;
        // 0x2b67d8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67DCu;
        goto label_2b67dc;
    }
    ctx->pc = 0x2B67D4u;
    {
        const bool branch_taken_0x2b67d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67D4u;
        // 0x2b67d8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67d4) {
            ctx->pc = 0x2B6B54u;
            goto label_2b6b54;
        }
    }
    ctx->pc = 0x2B67DCu;
label_2b67dc:
    // 0x2b67dc: 0x1482005b  bne         $a0, $v0, . + 4 + (0x5B << 2)
label_2b67e0:
    if (ctx->pc == 0x2B67E0u) {
        ctx->pc = 0x2B67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67DCu;
        // 0x2b67e0: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67E4u;
        goto label_2b67e4;
    }
    ctx->pc = 0x2B67DCu;
    {
        const bool branch_taken_0x2b67dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67DCu;
        // 0x2b67e0: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67dc) {
            ctx->pc = 0x2B694Cu;
            goto label_2b694c;
        }
    }
    ctx->pc = 0x2B67E4u;
label_2b67e4:
    // 0x2b67e4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2b67e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b67e8:
    // 0x2b67e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b67ec:
    // 0x2b67ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b67f0:
    if (ctx->pc == 0x2B67F0u) {
        ctx->pc = 0x2B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67ECu;
        // 0x2b67f0: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67F4u;
        goto label_2b67f4;
    }
    ctx->pc = 0x2B67ECu;
    {
        const bool branch_taken_0x2b67ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67ECu;
        // 0x2b67f0: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67ec) {
            ctx->pc = 0x2B6800u;
            goto label_2b6800;
        }
    }
    ctx->pc = 0x2B67F4u;
label_2b67f4:
    // 0x2b67f4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2b67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2b67f8:
    // 0x2b67f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2b67fc:
    if (ctx->pc == 0x2B67FCu) {
        ctx->pc = 0x2B67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67F8u;
        // 0x2b67fc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6800u;
        goto label_2b6800;
    }
    ctx->pc = 0x2B67F8u;
    {
        const bool branch_taken_0x2b67f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b67f8) {
            ctx->pc = 0x2B67FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B67F8u;
            // 0x2b67fc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6810u;
            goto label_2b6810;
        }
    }
    ctx->pc = 0x2B6800u;
label_2b6800:
    // 0x2b6800: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6804:
    // 0x2b6804: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6808:
    // 0x2b6808: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_2b680c:
    if (ctx->pc == 0x2B680Cu) {
        ctx->pc = 0x2B680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6808u;
        // 0x2b680c: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6810u;
        goto label_2b6810;
    }
    ctx->pc = 0x2B6808u;
    {
        const bool branch_taken_0x2b6808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6808u;
        // 0x2b680c: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6808) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B6810u;
label_2b6810:
    // 0x2b6810: 0x90500001  lbu         $s0, 0x1($v0)
    ctx->pc = 0x2b6810u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2b6814:
    // 0x2b6814: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x2b6814u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b6818:
    // 0x2b6818: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2b6818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2b681c:
    // 0x2b681c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2b681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2b6820:
    // 0x2b6820: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2b6824:
    if (ctx->pc == 0x2B6824u) {
        ctx->pc = 0x2B6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6820u;
        // 0x2b6824: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6828u;
        goto label_2b6828;
    }
    ctx->pc = 0x2B6820u;
    {
        const bool branch_taken_0x2b6820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6820) {
            ctx->pc = 0x2B6824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6820u;
            // 0x2b6824: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6830u;
            goto label_2b6830;
        }
    }
    ctx->pc = 0x2B6828u;
label_2b6828:
    // 0x2b6828: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b682c:
    if (ctx->pc == 0x2B682Cu) {
        ctx->pc = 0x2B682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6828u;
        // 0x2b682c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6830u;
        goto label_2b6830;
    }
    ctx->pc = 0x2B6828u;
    {
        const bool branch_taken_0x2b6828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6828u;
        // 0x2b682c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6828) {
            ctx->pc = 0x2B6838u;
            goto label_2b6838;
        }
    }
    ctx->pc = 0x2B6830u;
label_2b6830:
    // 0x2b6830: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2b6830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2b6834:
    // 0x2b6834: 0x42a00b  movn        $s4, $v0, $v0
    ctx->pc = 0x2b6834u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_2b6838:
    // 0x2b6838: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2b683c:
    // 0x2b683c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b6840:
    if (ctx->pc == 0x2B6840u) {
        ctx->pc = 0x2B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B683Cu;
        // 0x2b6840: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6844u;
        goto label_2b6844;
    }
    ctx->pc = 0x2B683Cu;
    {
        const bool branch_taken_0x2b683c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b683c) {
            ctx->pc = 0x2B6840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B683Cu;
            // 0x2b6840: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6850u;
            goto label_2b6850;
        }
    }
    ctx->pc = 0x2B6844u;
label_2b6844:
    // 0x2b6844: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b6844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6848:
    // 0x2b6848: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b684c:
    if (ctx->pc == 0x2B684Cu) {
        ctx->pc = 0x2B684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6848u;
        // 0x2b684c: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6850u;
        goto label_2b6850;
    }
    ctx->pc = 0x2B6848u;
    {
        const bool branch_taken_0x2b6848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6848u;
        // 0x2b684c: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6848) {
            ctx->pc = 0x2B6864u;
            goto label_2b6864;
        }
    }
    ctx->pc = 0x2B6850u;
label_2b6850:
    // 0x2b6850: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2b6854:
    // 0x2b6854: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b6858:
    if (ctx->pc == 0x2B6858u) {
        ctx->pc = 0x2B685Cu;
        goto label_2b685c;
    }
    ctx->pc = 0x2B6854u;
    {
        const bool branch_taken_0x2b6854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6854) {
            ctx->pc = 0x2B6868u;
            goto label_2b6868;
        }
    }
    ctx->pc = 0x2B685Cu;
label_2b685c:
    // 0x2b685c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2b685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2b6860:
    // 0x2b6860: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2b6860u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b6864:
    // 0x2b6864: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2b6864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2b6868:
    // 0x2b6868: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2b686c:
    if (ctx->pc == 0x2B686Cu) {
        ctx->pc = 0x2B686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6868u;
        // 0x2b686c: 0x123200  sll         $a2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6870u;
        goto label_2b6870;
    }
    ctx->pc = 0x2B6868u;
    {
        const bool branch_taken_0x2b6868 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6868u;
        // 0x2b686c: 0x123200  sll         $a2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6868) {
            ctx->pc = 0x2B6880u;
            goto label_2b6880;
        }
    }
    ctx->pc = 0x2B6870u;
label_2b6870:
    // 0x2b6870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6874:
    // 0x2b6874: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x2b6874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_2b6878:
    // 0x2b6878: 0x280f809  jalr        $s4
label_2b687c:
    if (ctx->pc == 0x2B687Cu) {
        ctx->pc = 0x2B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6878u;
        // 0x2b687c: 0x24054004  addiu       $a1, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6880u;
        goto label_2b6880;
    }
    ctx->pc = 0x2B6878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2B6880u);
        ctx->pc = 0x2B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6878u;
        // 0x2b687c: 0x24054004  addiu       $a1, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6878u, 0x2B6880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6880u;
label_2b6880:
    // 0x2b6880: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_2b6884:
    if (ctx->pc == 0x2B6884u) {
        ctx->pc = 0x2B6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6880u;
        // 0x2b6884: 0x123200  sll         $a2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6888u;
        goto label_2b6888;
    }
    ctx->pc = 0x2B6880u;
    {
        const bool branch_taken_0x2b6880 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6880u;
        // 0x2b6884: 0x123200  sll         $a2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6880) {
            ctx->pc = 0x2B689Cu;
            goto label_2b689c;
        }
    }
    ctx->pc = 0x2B6888u;
label_2b6888:
    // 0x2b6888: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2b6888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2b688c:
    // 0x2b688c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6890:
    // 0x2b6890: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x2b6890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_2b6894:
    // 0x2b6894: 0x3c0f809  jalr        $fp
label_2b6898:
    if (ctx->pc == 0x2B6898u) {
        ctx->pc = 0x2B6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6894u;
        // 0x2b6898: 0x24054004  addiu       $a1, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B689Cu;
        goto label_2b689c;
    }
    ctx->pc = 0x2B6894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2B689Cu);
        ctx->pc = 0x2B6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6894u;
        // 0x2b6898: 0x24054004  addiu       $a1, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6894u, 0x2B689Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B689Cu;
label_2b689c:
    // 0x2b689c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b68a0:
    // 0x2b68a0: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
label_2b68a4:
    if (ctx->pc == 0x2B68A4u) {
        ctx->pc = 0x2B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68A0u;
        // 0x2b68a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B68A8u;
        goto label_2b68a8;
    }
    ctx->pc = 0x2B68A0u;
    {
        const bool branch_taken_0x2b68a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68A0u;
        // 0x2b68a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68a0) {
            ctx->pc = 0x2B68C8u;
            goto label_2b68c8;
        }
    }
    ctx->pc = 0x2B68A8u;
label_2b68a8:
    // 0x2b68a8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b68ac:
    // 0x2b68ac: 0x1600ffc4  bnez        $s0, . + 4 + (-0x3C << 2)
label_2b68b0:
    if (ctx->pc == 0x2B68B0u) {
        ctx->pc = 0x2B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68ACu;
        // 0x2b68b0: 0xac500104  sw          $s0, 0x104($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B68B4u;
        goto label_2b68b4;
    }
    ctx->pc = 0x2B68ACu;
    {
        const bool branch_taken_0x2b68ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68ACu;
        // 0x2b68b0: 0xac500104  sw          $s0, 0x104($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68ac) {
            ctx->pc = 0x2B67C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b67c0;
        }
    }
    ctx->pc = 0x2B68B4u;
label_2b68b4:
    // 0x2b68b4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2b68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2b68b8:
    // 0x2b68b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b68bc:
    // 0x2b68bc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2b68bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2b68c0:
    // 0x2b68c0: 0x100000ef  b           . + 4 + (0xEF << 2)
label_2b68c4:
    if (ctx->pc == 0x2B68C4u) {
        ctx->pc = 0x2B68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C0u;
        // 0x2b68c4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B68C8u;
        goto label_2b68c8;
    }
    ctx->pc = 0x2B68C0u;
    {
        const bool branch_taken_0x2b68c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C0u;
        // 0x2b68c4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68c0) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B68C8u;
label_2b68c8:
    // 0x2b68c8: 0x5642001c  bnel        $s2, $v0, . + 4 + (0x1C << 2)
label_2b68cc:
    if (ctx->pc == 0x2B68CCu) {
        ctx->pc = 0x2B68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C8u;
        // 0x2b68cc: 0x2410002f  addiu       $s0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B68D0u;
        goto label_2b68d0;
    }
    ctx->pc = 0x2B68C8u;
    {
        const bool branch_taken_0x2b68c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b68c8) {
            ctx->pc = 0x2B68CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B68C8u;
            // 0x2b68cc: 0x2410002f  addiu       $s0, $zero, 0x2F (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B693Cu;
            goto label_2b693c;
        }
    }
    ctx->pc = 0x2B68D0u;
label_2b68d0:
    // 0x2b68d0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b68d4:
    // 0x2b68d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b68d8:
    // 0x2b68d8: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2b68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2b68dc:
    // 0x2b68dc: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b68dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b68e0:
    // 0x2b68e0: 0xac500108  sw          $s0, 0x108($v0)
    ctx->pc = 0x2b68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 16));
label_2b68e4:
    // 0x2b68e4: 0x260603e8  addiu       $a2, $s0, 0x3E8
    ctx->pc = 0x2b68e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
label_2b68e8:
    // 0x2b68e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b68e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b68ec:
    // 0x2b68ec: 0xc0a5648  jal         func_295920
label_2b68f0:
    if (ctx->pc == 0x2B68F0u) {
        ctx->pc = 0x2B68F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68ECu;
        // 0x2b68f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B68F4u;
        goto label_2b68f4;
    }
    ctx->pc = 0x2B68ECu;
    SET_GPR_U32(ctx, 31, 0x2B68F4u);
    ctx->pc = 0x2B68F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B68ECu;
    // 0x2b68f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B68ECu, 0x2B68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68F4u;
label_2b68f4:
    // 0x2b68f4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2b68f8:
    // 0x2b68f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b68f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b68fc:
    // 0x2b68fc: 0x24a5d438  addiu       $a1, $a1, -0x2BC8
    ctx->pc = 0x2b68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956088));
label_2b6900:
    // 0x2b6900: 0xc04a5f2  jal         func_1297C8
label_2b6904:
    if (ctx->pc == 0x2B6904u) {
        ctx->pc = 0x2B6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6900u;
        // 0x2b6904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6908u;
        goto label_2b6908;
    }
    ctx->pc = 0x2B6900u;
    SET_GPR_U32(ctx, 31, 0x2B6908u);
    ctx->pc = 0x2B6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6900u;
    // 0x2b6904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2B6900u, 0x2B6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6908u;
label_2b6908:
    // 0x2b6908: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b6908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2b690c:
    // 0x2b690c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6910:
    // 0x2b6910: 0x24a5d440  addiu       $a1, $a1, -0x2BC0
    ctx->pc = 0x2b6910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956096));
label_2b6914:
    // 0x2b6914: 0xc0a57ee  jal         func_295FB8
label_2b6918:
    if (ctx->pc == 0x2B6918u) {
        ctx->pc = 0x2B6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6914u;
        // 0x2b6918: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B691Cu;
        goto label_2b691c;
    }
    ctx->pc = 0x2B6914u;
    SET_GPR_U32(ctx, 31, 0x2B691Cu);
    ctx->pc = 0x2B6918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6914u;
    // 0x2b6918: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295FB8u, 0x2B6914u, 0x2B691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B691Cu;
label_2b691c:
    // 0x2b691c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2b691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2b6920:
    // 0x2b6920: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2b6920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b6924:
    // 0x2b6924: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b6924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2b6928:
    // 0x2b6928: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x2b6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2b692c:
    // 0x2b692c: 0xc0aecfe  jal         func_2BB3F8
label_2b6930:
    if (ctx->pc == 0x2B6930u) {
        ctx->pc = 0x2B6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B692Cu;
        // 0x2b6930: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6934u;
        goto label_2b6934;
    }
    ctx->pc = 0x2B692Cu;
    SET_GPR_U32(ctx, 31, 0x2B6934u);
    ctx->pc = 0x2B6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B692Cu;
    // 0x2b6930: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB3F8u, 0x2B692Cu, 0x2B6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6934u;
label_2b6934:
    // 0x2b6934: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_2b6938:
    if (ctx->pc == 0x2B6938u) {
        ctx->pc = 0x2B6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6934u;
        // 0x2b6938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B693Cu;
        goto label_2b693c;
    }
    ctx->pc = 0x2B6934u;
    {
        const bool branch_taken_0x2b6934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6934u;
        // 0x2b6938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6934) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B693Cu;
label_2b693c:
    // 0x2b693c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6940:
    // 0x2b6940: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6944:
    // 0x2b6944: 0x10000091  b           . + 4 + (0x91 << 2)
label_2b6948:
    if (ctx->pc == 0x2B6948u) {
        ctx->pc = 0x2B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6944u;
        // 0x2b6948: 0x240600f6  addiu       $a2, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B694Cu;
        goto label_2b694c;
    }
    ctx->pc = 0x2B6944u;
    {
        const bool branch_taken_0x2b6944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6944u;
        // 0x2b6948: 0x240600f6  addiu       $a2, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6944) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B694Cu;
label_2b694c:
    // 0x2b694c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b6950:
    if (ctx->pc == 0x2B6950u) {
        ctx->pc = 0x2B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B694Cu;
        // 0x2b6950: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6954u;
        goto label_2b6954;
    }
    ctx->pc = 0x2B694Cu;
    {
        const bool branch_taken_0x2b694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B694Cu;
        // 0x2b6950: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b694c) {
            ctx->pc = 0x2B6964u;
            goto label_2b6964;
        }
    }
    ctx->pc = 0x2B6954u;
label_2b6954:
    // 0x2b6954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6958:
    // 0x2b6958: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2b6958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2b695c:
    // 0x2b695c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_2b6960:
    if (ctx->pc == 0x2B6960u) {
        ctx->pc = 0x2B6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B695Cu;
        // 0x2b6960: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6964u;
        goto label_2b6964;
    }
    ctx->pc = 0x2B695Cu;
    {
        const bool branch_taken_0x2b695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B695Cu;
        // 0x2b6960: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b695c) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6964u;
label_2b6964:
    // 0x2b6964: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b6964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6968:
    // 0x2b6968: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
label_2b696c:
    if (ctx->pc == 0x2B696Cu) {
        ctx->pc = 0x2B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6968u;
        // 0x2b696c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6970u;
        goto label_2b6970;
    }
    ctx->pc = 0x2B6968u;
    {
        const bool branch_taken_0x2b6968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6968u;
        // 0x2b696c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6968) {
            ctx->pc = 0x2B69DCu;
            goto label_2b69dc;
        }
    }
    ctx->pc = 0x2B6970u;
label_2b6970:
    // 0x2b6970: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2b6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b6974:
    // 0x2b6974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6978:
    // 0x2b6978: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
label_2b697c:
    if (ctx->pc == 0x2B697Cu) {
        ctx->pc = 0x2B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6978u;
        // 0x2b697c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6980u;
        goto label_2b6980;
    }
    ctx->pc = 0x2B6978u;
    {
        const bool branch_taken_0x2b6978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6978) {
            ctx->pc = 0x2B697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6978u;
            // 0x2b697c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B699Cu;
            goto label_2b699c;
        }
    }
    ctx->pc = 0x2B6980u;
label_2b6980:
    // 0x2b6980: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2b6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2b6984:
    // 0x2b6984: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2b6988:
    if (ctx->pc == 0x2B6988u) {
        ctx->pc = 0x2B6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6984u;
        // 0x2b6988: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B698Cu;
        goto label_2b698c;
    }
    ctx->pc = 0x2B6984u;
    {
        const bool branch_taken_0x2b6984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6984) {
            ctx->pc = 0x2B6988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6984u;
            // 0x2b6988: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B699Cu;
            goto label_2b699c;
        }
    }
    ctx->pc = 0x2B698Cu;
label_2b698c:
    // 0x2b698c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2b698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2b6990:
    // 0x2b6990: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b6990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b6994:
    // 0x2b6994: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_2b6998:
    if (ctx->pc == 0x2B6998u) {
        ctx->pc = 0x2B6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6994u;
        // 0x2b6998: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B699Cu;
        goto label_2b699c;
    }
    ctx->pc = 0x2B6994u;
    {
        const bool branch_taken_0x2b6994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6994u;
        // 0x2b6998: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6994) {
            ctx->pc = 0x2B69B8u;
            goto label_2b69b8;
        }
    }
    ctx->pc = 0x2B699Cu;
label_2b699c:
    // 0x2b699c: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b69a0:
    // 0x2b69a0: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_2b69a4:
    // 0x2b69a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b69a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b69a8:
    // 0x2b69a8: 0xc0a5648  jal         func_295920
label_2b69ac:
    if (ctx->pc == 0x2B69ACu) {
        ctx->pc = 0x2B69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69A8u;
        // 0x2b69ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69B0u;
        goto label_2b69b0;
    }
    ctx->pc = 0x2B69A8u;
    SET_GPR_U32(ctx, 31, 0x2B69B0u);
    ctx->pc = 0x2B69ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69A8u;
    // 0x2b69ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B69A8u, 0x2B69B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69B0u;
label_2b69b0:
    // 0x2b69b0: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2b69b4:
    if (ctx->pc == 0x2B69B4u) {
        ctx->pc = 0x2B69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69B0u;
        // 0x2b69b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69B8u;
        goto label_2b69b8;
    }
    ctx->pc = 0x2B69B0u;
    {
        const bool branch_taken_0x2b69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69B0u;
        // 0x2b69b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69b0) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B69B8u;
label_2b69b8:
    // 0x2b69b8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2b69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2b69bc:
    // 0x2b69bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b69bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b69c0:
    // 0x2b69c0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b69c4:
    // 0x2b69c4: 0xc0adb2c  jal         func_2B6CB0
label_2b69c8:
    if (ctx->pc == 0x2B69C8u) {
        ctx->pc = 0x2B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69C4u;
        // 0x2b69c8: 0xac430100  sw          $v1, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69CCu;
        goto label_2b69cc;
    }
    ctx->pc = 0x2B69C4u;
    SET_GPR_U32(ctx, 31, 0x2B69CCu);
    ctx->pc = 0x2B69C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69C4u;
    // 0x2b69c8: 0xac430100  sw          $v1, 0x100($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6CB0u, 0x2B69C4u, 0x2B69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69CCu;
label_2b69cc:
    // 0x2b69cc: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_2b69d0:
    if (ctx->pc == 0x2B69D0u) {
        ctx->pc = 0x2B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69CCu;
        // 0x2b69d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69D4u;
        goto label_2b69d4;
    }
    ctx->pc = 0x2B69CCu;
    {
        const bool branch_taken_0x2b69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69CCu;
        // 0x2b69d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69cc) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B69D4u;
label_2b69d4:
    // 0x2b69d4: 0x1000ff07  b           . + 4 + (-0xF9 << 2)
label_2b69d8:
    if (ctx->pc == 0x2B69D8u) {
        ctx->pc = 0x2B69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69D4u;
        // 0x2b69d8: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69DCu;
        goto label_2b69dc;
    }
    ctx->pc = 0x2B69D4u;
    {
        const bool branch_taken_0x2b69d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69D4u;
        // 0x2b69d8: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69d4) {
            ctx->pc = 0x2B65F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f4;
        }
    }
    ctx->pc = 0x2B69DCu;
label_2b69dc:
    // 0x2b69dc: 0x14820030  bne         $a0, $v0, . + 4 + (0x30 << 2)
label_2b69e0:
    if (ctx->pc == 0x2B69E0u) {
        ctx->pc = 0x2B69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69DCu;
        // 0x2b69e0: 0x28e20014  slti        $v0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69E4u;
        goto label_2b69e4;
    }
    ctx->pc = 0x2B69DCu;
    {
        const bool branch_taken_0x2b69dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69DCu;
        // 0x2b69e0: 0x28e20014  slti        $v0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69dc) {
            ctx->pc = 0x2B6AA0u;
            goto label_2b6aa0;
        }
    }
    ctx->pc = 0x2B69E4u;
label_2b69e4:
    // 0x2b69e4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b69e8:
    // 0x2b69e8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2b69ec:
    if (ctx->pc == 0x2B69ECu) {
        ctx->pc = 0x2B69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69E8u;
        // 0x2b69ec: 0x28e20014  slti        $v0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B69F0u;
        goto label_2b69f0;
    }
    ctx->pc = 0x2B69E8u;
    {
        const bool branch_taken_0x2b69e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69E8u;
        // 0x2b69ec: 0x28e20014  slti        $v0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69e8) {
            ctx->pc = 0x2B6AA0u;
            goto label_2b6aa0;
        }
    }
    ctx->pc = 0x2B69F0u;
label_2b69f0:
    // 0x2b69f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b69f4:
    // 0x2b69f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b69f8:
    // 0x2b69f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2b69f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_2b69fc:
    // 0x2b69fc: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_2b6a00:
    if (ctx->pc == 0x2B6A00u) {
        ctx->pc = 0x2B6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69FCu;
        // 0x2b6a00: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A04u;
        goto label_2b6a04;
    }
    ctx->pc = 0x2B69FCu;
    {
        const bool branch_taken_0x2b69fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b69fc) {
            ctx->pc = 0x2B6A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B69FCu;
            // 0x2b6a00: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6A4Cu;
            goto label_2b6a4c;
        }
    }
    ctx->pc = 0x2B6A04u;
label_2b6a04:
    // 0x2b6a04: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2b6a04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b6a08:
    // 0x2b6a08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2b6a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2b6a0c:
    // 0x2b6a0c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2b6a10:
    if (ctx->pc == 0x2B6A10u) {
        ctx->pc = 0x2B6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A0Cu;
        // 0x2b6a10: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A14u;
        goto label_2b6a14;
    }
    ctx->pc = 0x2B6A0Cu;
    {
        const bool branch_taken_0x2b6a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6a0c) {
            ctx->pc = 0x2B6A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6A0Cu;
            // 0x2b6a10: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6A4Cu;
            goto label_2b6a4c;
        }
    }
    ctx->pc = 0x2B6A14u;
label_2b6a14:
    // 0x2b6a14: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b6a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2b6a18:
    // 0x2b6a18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6a1c:
    if (ctx->pc == 0x2B6A1Cu) {
        ctx->pc = 0x2B6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A18u;
        // 0x2b6a1c: 0x240211d0  addiu       $v0, $zero, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A20u;
        goto label_2b6a20;
    }
    ctx->pc = 0x2B6A18u;
    {
        const bool branch_taken_0x2b6a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A18u;
        // 0x2b6a1c: 0x240211d0  addiu       $v0, $zero, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a18) {
            ctx->pc = 0x2B6A38u;
            goto label_2b6a38;
        }
    }
    ctx->pc = 0x2B6A20u;
label_2b6a20:
    // 0x2b6a20: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2b6a24:
    // 0x2b6a24: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b6a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b6a28:
    // 0x2b6a28: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2b6a28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b6a2c:
    // 0x2b6a2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b6a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2b6a30:
    // 0x2b6a30: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6a34:
    if (ctx->pc == 0x2B6A34u) {
        ctx->pc = 0x2B6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A30u;
        // 0x2b6a34: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A38u;
        goto label_2b6a38;
    }
    ctx->pc = 0x2B6A30u;
    {
        const bool branch_taken_0x2b6a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A30u;
        // 0x2b6a34: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a30) {
            ctx->pc = 0x2B6A48u;
            goto label_2b6a48;
        }
    }
    ctx->pc = 0x2B6A38u;
label_2b6a38:
    // 0x2b6a38: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2b6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2b6a3c:
    // 0x2b6a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6a40:
    // 0x2b6a40: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2b6a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2b6a44:
    // 0x2b6a44: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2b6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_2b6a48:
    // 0x2b6a48: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b6a4c:
    // 0x2b6a4c: 0x40f809  jalr        $v0
label_2b6a50:
    if (ctx->pc == 0x2B6A50u) {
        ctx->pc = 0x2B6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A4Cu;
        // 0x2b6a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A54u;
        goto label_2b6a54;
    }
    ctx->pc = 0x2B6A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6A54u);
        ctx->pc = 0x2B6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A4Cu;
        // 0x2b6a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6A4Cu, 0x2B6A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6A54u;
label_2b6a54:
    // 0x2b6a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6a58:
    // 0x2b6a58: 0x600008a  bltz        $s0, . + 4 + (0x8A << 2)
label_2b6a5c:
    if (ctx->pc == 0x2B6A5Cu) {
        ctx->pc = 0x2B6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A58u;
        // 0x2b6a5c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A60u;
        goto label_2b6a60;
    }
    ctx->pc = 0x2B6A58u;
    {
        const bool branch_taken_0x2b6a58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A58u;
        // 0x2b6a5c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a58) {
            ctx->pc = 0x2B6C84u;
            goto label_2b6c84;
        }
    }
    ctx->pc = 0x2B6A60u;
label_2b6a60:
    // 0x2b6a60: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2b6a64:
    if (ctx->pc == 0x2B6A64u) {
        ctx->pc = 0x2B6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A60u;
        // 0x2b6a64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A68u;
        goto label_2b6a68;
    }
    ctx->pc = 0x2B6A60u;
    {
        const bool branch_taken_0x2b6a60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A60u;
        // 0x2b6a64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a60) {
            ctx->pc = 0x2B6A78u;
            goto label_2b6a78;
        }
    }
    ctx->pc = 0x2B6A68u;
label_2b6a68:
    // 0x2b6a68: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6a6c:
    // 0x2b6a6c: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6a70:
    // 0x2b6a70: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_2b6a74:
    if (ctx->pc == 0x2B6A74u) {
        ctx->pc = 0x2B6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A70u;
        // 0x2b6a74: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A78u;
        goto label_2b6a78;
    }
    ctx->pc = 0x2B6A70u;
    {
        const bool branch_taken_0x2b6a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A70u;
        // 0x2b6a74: 0x240600e5  addiu       $a2, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a70) {
            ctx->pc = 0x2B69A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b69a4;
        }
    }
    ctx->pc = 0x2B6A78u;
label_2b6a78:
    // 0x2b6a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6a7c:
    // 0x2b6a7c: 0xc0ac054  jal         func_2B0150
label_2b6a80:
    if (ctx->pc == 0x2B6A80u) {
        ctx->pc = 0x2B6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A7Cu;
        // 0x2b6a80: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A84u;
        goto label_2b6a84;
    }
    ctx->pc = 0x2B6A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6A84u);
    ctx->pc = 0x2B6A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A7Cu;
    // 0x2b6a80: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0150u, 0x2B6A7Cu, 0x2B6A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A84u;
label_2b6a84:
    // 0x2b6a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6a88:
    // 0x2b6a88: 0xc0a13ac  jal         func_284EB0
label_2b6a8c:
    if (ctx->pc == 0x2B6A8Cu) {
        ctx->pc = 0x2B6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A88u;
        // 0x2b6a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A90u;
        goto label_2b6a90;
    }
    ctx->pc = 0x2B6A88u;
    SET_GPR_U32(ctx, 31, 0x2B6A90u);
    ctx->pc = 0x2B6A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A88u;
    // 0x2b6a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x2B6A88u, 0x2B6A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A90u;
label_2b6a90:
    // 0x2b6a90: 0xc0a139e  jal         func_284E78
label_2b6a94:
    if (ctx->pc == 0x2B6A94u) {
        ctx->pc = 0x2B6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A90u;
        // 0x2b6a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6A98u;
        goto label_2b6a98;
    }
    ctx->pc = 0x2B6A90u;
    SET_GPR_U32(ctx, 31, 0x2B6A98u);
    ctx->pc = 0x2B6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A90u;
    // 0x2b6a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E78u, 0x2B6A90u, 0x2B6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A98u;
label_2b6a98:
    // 0x2b6a98: 0x10000079  b           . + 4 + (0x79 << 2)
label_2b6a9c:
    if (ctx->pc == 0x2B6A9Cu) {
        ctx->pc = 0x2B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A98u;
        // 0x2b6a9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AA0u;
        goto label_2b6aa0;
    }
    ctx->pc = 0x2B6A98u;
    {
        const bool branch_taken_0x2b6a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A98u;
        // 0x2b6a9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a98) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6AA0u;
label_2b6aa0:
    // 0x2b6aa0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2b6aa4:
    if (ctx->pc == 0x2B6AA4u) {
        ctx->pc = 0x2B6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AA0u;
        // 0x2b6aa4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AA8u;
        goto label_2b6aa8;
    }
    ctx->pc = 0x2B6AA0u;
    {
        const bool branch_taken_0x2b6aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6aa0) {
            ctx->pc = 0x2B6AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6AA0u;
            // 0x2b6aa4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6AC4u;
            goto label_2b6ac4;
        }
    }
    ctx->pc = 0x2B6AA8u;
label_2b6aa8:
    // 0x2b6aa8: 0x28820017  slti        $v0, $a0, 0x17
    ctx->pc = 0x2b6aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
label_2b6aac:
    // 0x2b6aac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2b6ab0:
    if (ctx->pc == 0x2B6AB0u) {
        ctx->pc = 0x2B6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AACu;
        // 0x2b6ab0: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AB4u;
        goto label_2b6ab4;
    }
    ctx->pc = 0x2B6AACu;
    {
        const bool branch_taken_0x2b6aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AACu;
        // 0x2b6ab0: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6aac) {
            ctx->pc = 0x2B6AD0u;
            goto label_2b6ad0;
        }
    }
    ctx->pc = 0x2B6AB4u;
label_2b6ab4:
    // 0x2b6ab4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2b6ab8:
    // 0x2b6ab8: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_2b6abc:
    if (ctx->pc == 0x2B6ABCu) {
        ctx->pc = 0x2B6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AB8u;
        // 0x2b6abc: 0x8ca20120  lw          $v0, 0x120($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AC0u;
        goto label_2b6ac0;
    }
    ctx->pc = 0x2B6AB8u;
    {
        const bool branch_taken_0x2b6ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6ab8) {
            ctx->pc = 0x2B6ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6AB8u;
            // 0x2b6abc: 0x8ca20120  lw          $v0, 0x120($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6AE0u;
            goto label_2b6ae0;
        }
    }
    ctx->pc = 0x2B6AC0u;
label_2b6ac0:
    // 0x2b6ac0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b6ac4:
    // 0x2b6ac4: 0x24020301  addiu       $v0, $zero, 0x301
    ctx->pc = 0x2b6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_2b6ac8:
    // 0x2b6ac8: 0x1062feca  beq         $v1, $v0, . + 4 + (-0x136 << 2)
label_2b6acc:
    if (ctx->pc == 0x2B6ACCu) {
        ctx->pc = 0x2B6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AC8u;
        // 0x2b6acc: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AD0u;
        goto label_2b6ad0;
    }
    ctx->pc = 0x2B6AC8u;
    {
        const bool branch_taken_0x2b6ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AC8u;
        // 0x2b6acc: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ac8) {
            ctx->pc = 0x2B65F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65f4;
        }
    }
    ctx->pc = 0x2B6AD0u;
label_2b6ad0:
    // 0x2b6ad0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6ad4:
    // 0x2b6ad4: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6ad8:
    // 0x2b6ad8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2b6adc:
    if (ctx->pc == 0x2B6ADCu) {
        ctx->pc = 0x2B6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AD8u;
        // 0x2b6adc: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AE0u;
        goto label_2b6ae0;
    }
    ctx->pc = 0x2B6AD8u;
    {
        const bool branch_taken_0x2b6ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AD8u;
        // 0x2b6adc: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ad8) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B6AE0u;
label_2b6ae0:
    // 0x2b6ae0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2b6ae4:
    if (ctx->pc == 0x2B6AE4u) {
        ctx->pc = 0x2B6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AE0u;
        // 0x2b6ae4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AE8u;
        goto label_2b6ae8;
    }
    ctx->pc = 0x2B6AE0u;
    {
        const bool branch_taken_0x2b6ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AE0u;
        // 0x2b6ae4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ae0) {
            ctx->pc = 0x2B6B44u;
            goto label_2b6b44;
        }
    }
    ctx->pc = 0x2B6AE8u;
label_2b6ae8:
    // 0x2b6ae8: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x2b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_2b6aec:
    // 0x2b6aec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2b6af0:
    if (ctx->pc == 0x2B6AF0u) {
        ctx->pc = 0x2B6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AECu;
        // 0x2b6af0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6AF4u;
        goto label_2b6af4;
    }
    ctx->pc = 0x2B6AECu;
    {
        const bool branch_taken_0x2b6aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AECu;
        // 0x2b6af0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6aec) {
            ctx->pc = 0x2B6B48u;
            goto label_2b6b48;
        }
    }
    ctx->pc = 0x2B6AF4u;
label_2b6af4:
    // 0x2b6af4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2b6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b6af8:
    // 0x2b6af8: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2b6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2b6afc:
    // 0x2b6afc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6b00:
    if (ctx->pc == 0x2B6B00u) {
        ctx->pc = 0x2B6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AFCu;
        // 0x2b6b00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B04u;
        goto label_2b6b04;
    }
    ctx->pc = 0x2B6AFCu;
    {
        const bool branch_taken_0x2b6afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AFCu;
        // 0x2b6b00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6afc) {
            ctx->pc = 0x2B6B1Cu;
            goto label_2b6b1c;
        }
    }
    ctx->pc = 0x2B6B04u;
label_2b6b04:
    // 0x2b6b04: 0x28621110  slti        $v0, $v1, 0x1110
    ctx->pc = 0x2b6b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4368) ? 1 : 0);
label_2b6b08:
    // 0x2b6b08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b6b0c:
    if (ctx->pc == 0x2B6B0Cu) {
        ctx->pc = 0x2B6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B08u;
        // 0x2b6b0c: 0x30822000  andi        $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B10u;
        goto label_2b6b10;
    }
    ctx->pc = 0x2B6B08u;
    {
        const bool branch_taken_0x2b6b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B08u;
        // 0x2b6b0c: 0x30822000  andi        $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b08) {
            ctx->pc = 0x2B6B20u;
            goto label_2b6b20;
        }
    }
    ctx->pc = 0x2B6B10u;
label_2b6b10:
    // 0x2b6b10: 0x28621121  slti        $v0, $v1, 0x1121
    ctx->pc = 0x2b6b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4385) ? 1 : 0);
label_2b6b14:
    // 0x2b6b14: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
label_2b6b18:
    if (ctx->pc == 0x2B6B18u) {
        ctx->pc = 0x2B6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B14u;
        // 0x2b6b18: 0xaca00120  sw          $zero, 0x120($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B1Cu;
        goto label_2b6b1c;
    }
    ctx->pc = 0x2B6B14u;
    {
        const bool branch_taken_0x2b6b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6b14) {
            ctx->pc = 0x2B6B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B14u;
            // 0x2b6b18: 0xaca00120  sw          $zero, 0x120($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C7Cu;
            goto label_2b6c7c;
        }
    }
    ctx->pc = 0x2B6B1Cu;
label_2b6b1c:
    // 0x2b6b1c: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2b6b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_2b6b20:
    // 0x2b6b20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6b24:
    if (ctx->pc == 0x2B6B24u) {
        ctx->pc = 0x2B6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B20u;
        // 0x2b6b24: 0x28622121  slti        $v0, $v1, 0x2121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8481) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B28u;
        goto label_2b6b28;
    }
    ctx->pc = 0x2B6B20u;
    {
        const bool branch_taken_0x2b6b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B20u;
        // 0x2b6b24: 0x28622121  slti        $v0, $v1, 0x2121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8481) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b20) {
            ctx->pc = 0x2B6B40u;
            goto label_2b6b40;
        }
    }
    ctx->pc = 0x2B6B28u;
label_2b6b28:
    // 0x2b6b28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b6b2c:
    if (ctx->pc == 0x2B6B2Cu) {
        ctx->pc = 0x2B6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B28u;
        // 0x2b6b2c: 0x28622110  slti        $v0, $v1, 0x2110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8464) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B30u;
        goto label_2b6b30;
    }
    ctx->pc = 0x2B6B28u;
    {
        const bool branch_taken_0x2b6b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B28u;
        // 0x2b6b2c: 0x28622110  slti        $v0, $v1, 0x2110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8464) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b28) {
            ctx->pc = 0x2B6B40u;
            goto label_2b6b40;
        }
    }
    ctx->pc = 0x2B6B30u;
label_2b6b30:
    // 0x2b6b30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b6b34:
    if (ctx->pc == 0x2B6B34u) {
        ctx->pc = 0x2B6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B30u;
        // 0x2b6b34: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B38u;
        goto label_2b6b38;
    }
    ctx->pc = 0x2B6B30u;
    {
        const bool branch_taken_0x2b6b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B30u;
        // 0x2b6b34: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b30) {
            ctx->pc = 0x2B6B44u;
            goto label_2b6b44;
        }
    }
    ctx->pc = 0x2B6B38u;
label_2b6b38:
    // 0x2b6b38: 0x10000050  b           . + 4 + (0x50 << 2)
label_2b6b3c:
    if (ctx->pc == 0x2B6B3Cu) {
        ctx->pc = 0x2B6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B38u;
        // 0x2b6b3c: 0xaca00120  sw          $zero, 0x120($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B40u;
        goto label_2b6b40;
    }
    ctx->pc = 0x2B6B38u;
    {
        const bool branch_taken_0x2b6b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B38u;
        // 0x2b6b3c: 0xaca00120  sw          $zero, 0x120($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b38) {
            ctx->pc = 0x2B6C7Cu;
            goto label_2b6c7c;
        }
    }
    ctx->pc = 0x2B6B40u;
label_2b6b40:
    // 0x2b6b40: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b6b44:
    // 0x2b6b44: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6b48:
    // 0x2b6b48: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6b4c:
    // 0x2b6b4c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b6b50:
    if (ctx->pc == 0x2B6B50u) {
        ctx->pc = 0x2B6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B4Cu;
        // 0x2b6b50: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B54u;
        goto label_2b6b54;
    }
    ctx->pc = 0x2B6B4Cu;
    {
        const bool branch_taken_0x2b6b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B4Cu;
        // 0x2b6b50: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b4c) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B6B54u;
label_2b6b54:
    // 0x2b6b54: 0xc0ac604  jal         func_2B1810
label_2b6b58:
    if (ctx->pc == 0x2B6B58u) {
        ctx->pc = 0x2B6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B54u;
        // 0x2b6b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B5Cu;
        goto label_2b6b5c;
    }
    ctx->pc = 0x2B6B54u;
    SET_GPR_U32(ctx, 31, 0x2B6B5Cu);
    ctx->pc = 0x2B6B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B54u;
    // 0x2b6b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B6B54u, 0x2B6B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B5Cu;
label_2b6b5c:
    // 0x2b6b5c: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b6b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b6b60:
    // 0x2b6b60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2b6b64:
    if (ctx->pc == 0x2B6B64u) {
        ctx->pc = 0x2B6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B60u;
        // 0x2b6b64: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B68u;
        goto label_2b6b68;
    }
    ctx->pc = 0x2B6B60u;
    {
        const bool branch_taken_0x2b6b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B60u;
        // 0x2b6b64: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b60) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6B68u;
label_2b6b68:
    // 0x2b6b68: 0x56c2000e  bnel        $s6, $v0, . + 4 + (0xE << 2)
label_2b6b6c:
    if (ctx->pc == 0x2B6B6Cu) {
        ctx->pc = 0x2B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B68u;
        // 0x2b6b6c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B70u;
        goto label_2b6b70;
    }
    ctx->pc = 0x2B6B68u;
    {
        const bool branch_taken_0x2b6b68 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6b68) {
            ctx->pc = 0x2B6B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B68u;
            // 0x2b6b6c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6BA4u;
            goto label_2b6ba4;
        }
    }
    ctx->pc = 0x2B6B70u;
label_2b6b70:
    // 0x2b6b70: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2b6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2b6b74:
    // 0x2b6b74: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2b6b78:
    if (ctx->pc == 0x2B6B78u) {
        ctx->pc = 0x2B6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B74u;
        // 0x2b6b78: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B7Cu;
        goto label_2b6b7c;
    }
    ctx->pc = 0x2B6B74u;
    {
        const bool branch_taken_0x2b6b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6b74) {
            ctx->pc = 0x2B6B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B74u;
            // 0x2b6b78: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6BA4u;
            goto label_2b6ba4;
        }
    }
    ctx->pc = 0x2B6B7Cu;
label_2b6b7c:
    // 0x2b6b7c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2b6b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b6b80:
    // 0x2b6b80: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6b84:
    // 0x2b6b84: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x2b6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2b6b88:
    // 0x2b6b88: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2b6b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b6b8c:
    // 0x2b6b8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6b90:
    // 0x2b6b90: 0xc0a5648  jal         func_295920
label_2b6b94:
    if (ctx->pc == 0x2B6B94u) {
        ctx->pc = 0x2B6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B90u;
        // 0x2b6b94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B98u;
        goto label_2b6b98;
    }
    ctx->pc = 0x2B6B90u;
    SET_GPR_U32(ctx, 31, 0x2B6B98u);
    ctx->pc = 0x2B6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B90u;
    // 0x2b6b94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B6B90u, 0x2B6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B98u;
label_2b6b98:
    // 0x2b6b98: 0x10000035  b           . + 4 + (0x35 << 2)
label_2b6b9c:
    if (ctx->pc == 0x2B6B9Cu) {
        ctx->pc = 0x2B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B98u;
        // 0x2b6b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BA0u;
        goto label_2b6ba0;
    }
    ctx->pc = 0x2B6B98u;
    {
        const bool branch_taken_0x2b6b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B98u;
        // 0x2b6b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b98) {
            ctx->pc = 0x2B6C70u;
            goto label_2b6c70;
        }
    }
    ctx->pc = 0x2B6BA0u;
label_2b6ba0:
    // 0x2b6ba0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b6ba4:
    // 0x2b6ba4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2b6ba8:
    if (ctx->pc == 0x2B6BA8u) {
        ctx->pc = 0x2B6BACu;
        goto label_2b6bac;
    }
    ctx->pc = 0x2B6BA4u;
    {
        const bool branch_taken_0x2b6ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ba4) {
            ctx->pc = 0x2B6BF0u;
            goto label_2b6bf0;
        }
    }
    ctx->pc = 0x2B6BACu;
label_2b6bac:
    // 0x2b6bac: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2b6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2b6bb0:
    // 0x2b6bb0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b6bb4:
    if (ctx->pc == 0x2B6BB4u) {
        ctx->pc = 0x2B6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BB0u;
        // 0x2b6bb4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BB8u;
        goto label_2b6bb8;
    }
    ctx->pc = 0x2B6BB0u;
    {
        const bool branch_taken_0x2b6bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6bb0) {
            ctx->pc = 0x2B6BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6BB0u;
            // 0x2b6bb4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6BC4u;
            goto label_2b6bc4;
        }
    }
    ctx->pc = 0x2B6BB8u;
label_2b6bb8:
    // 0x2b6bb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b6bb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6bbc:
    // 0x2b6bbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b6bc0:
    if (ctx->pc == 0x2B6BC0u) {
        ctx->pc = 0x2B6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BBCu;
        // 0x2b6bc0: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BC4u;
        goto label_2b6bc4;
    }
    ctx->pc = 0x2B6BBCu;
    {
        const bool branch_taken_0x2b6bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BBCu;
        // 0x2b6bc0: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bbc) {
            ctx->pc = 0x2B6BD8u;
            goto label_2b6bd8;
        }
    }
    ctx->pc = 0x2B6BC4u;
label_2b6bc4:
    // 0x2b6bc4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2b6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2b6bc8:
    // 0x2b6bc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b6bcc:
    if (ctx->pc == 0x2B6BCCu) {
        ctx->pc = 0x2B6BD0u;
        goto label_2b6bd0;
    }
    ctx->pc = 0x2B6BC8u;
    {
        const bool branch_taken_0x2b6bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6bc8) {
            ctx->pc = 0x2B6BDCu;
            goto label_2b6bdc;
        }
    }
    ctx->pc = 0x2B6BD0u;
label_2b6bd0:
    // 0x2b6bd0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2b6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2b6bd4:
    // 0x2b6bd4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2b6bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b6bd8:
    // 0x2b6bd8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2b6bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2b6bdc:
    // 0x2b6bdc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2b6be0:
    if (ctx->pc == 0x2B6BE0u) {
        ctx->pc = 0x2B6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BDCu;
        // 0x2b6be0: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BE4u;
        goto label_2b6be4;
    }
    ctx->pc = 0x2B6BDCu;
    {
        const bool branch_taken_0x2b6bdc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BDCu;
        // 0x2b6be0: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bdc) {
            ctx->pc = 0x2B6BF0u;
            goto label_2b6bf0;
        }
    }
    ctx->pc = 0x2B6BE4u;
label_2b6be4:
    // 0x2b6be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6be8:
    // 0x2b6be8: 0x280f809  jalr        $s4
label_2b6bec:
    if (ctx->pc == 0x2B6BECu) {
        ctx->pc = 0x2B6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BE8u;
        // 0x2b6bec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BF0u;
        goto label_2b6bf0;
    }
    ctx->pc = 0x2B6BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2B6BF0u);
        ctx->pc = 0x2B6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BE8u;
        // 0x2b6bec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BE8u, 0x2B6BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6BF0u;
label_2b6bf0:
    // 0x2b6bf0: 0x5ea00003  bgtzl       $s5, . + 4 + (0x3 << 2)
label_2b6bf4:
    if (ctx->pc == 0x2B6BF4u) {
        ctx->pc = 0x2B6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BF0u;
        // 0x2b6bf4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BF8u;
        goto label_2b6bf8;
    }
    ctx->pc = 0x2B6BF0u;
    {
        const bool branch_taken_0x2b6bf0 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x2b6bf0) {
            ctx->pc = 0x2B6BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6BF0u;
            // 0x2b6bf4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C00u;
            goto label_2b6c00;
        }
    }
    ctx->pc = 0x2B6BF8u;
label_2b6bf8:
    // 0x2b6bf8: 0x10000021  b           . + 4 + (0x21 << 2)
label_2b6bfc:
    if (ctx->pc == 0x2B6BFCu) {
        ctx->pc = 0x2B6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BF8u;
        // 0x2b6bfc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C00u;
        goto label_2b6c00;
    }
    ctx->pc = 0x2B6BF8u;
    {
        const bool branch_taken_0x2b6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BF8u;
        // 0x2b6bfc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bf8) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6C00u;
label_2b6c00:
    // 0x2b6c00: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2b6c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b6c04:
    // 0x2b6c04: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x2b6c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2b6c08:
    // 0x2b6c08: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2b6c0c:
    // 0x2b6c0c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2b6c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2b6c10:
    // 0x2b6c10: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2b6c10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2b6c14:
    // 0x2b6c14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6c18:
    // 0x2b6c18: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2b6c1c:
    // 0x2b6c1c: 0xc049c48  jal         func_127120
label_2b6c20:
    if (ctx->pc == 0x2B6C20u) {
        ctx->pc = 0x2B6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C1Cu;
        // 0x2b6c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C24u;
        goto label_2b6c24;
    }
    ctx->pc = 0x2B6C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B6C24u);
    ctx->pc = 0x2B6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C1Cu;
    // 0x2b6c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B6C1Cu, 0x2B6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C24u;
label_2b6c24:
    // 0x2b6c24: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2b6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b6c28:
    // 0x2b6c28: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2b6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2b6c2c:
    // 0x2b6c2c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2b6c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2b6c30:
    // 0x2b6c30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b6c34:
    // 0x2b6c34: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2b6c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_2b6c38:
    // 0x2b6c38: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2b6c3c:
    if (ctx->pc == 0x2B6C3Cu) {
        ctx->pc = 0x2B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C38u;
        // 0x2b6c3c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C40u;
        goto label_2b6c40;
    }
    ctx->pc = 0x2B6C38u;
    {
        const bool branch_taken_0x2b6c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C38u;
        // 0x2b6c3c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c38) {
            ctx->pc = 0x2B6C4Cu;
            goto label_2b6c4c;
        }
    }
    ctx->pc = 0x2B6C40u;
label_2b6c40:
    // 0x2b6c40: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2b6c44:
    // 0x2b6c44: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2b6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2b6c48:
    // 0x2b6c48: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2b6c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_2b6c4c:
    // 0x2b6c4c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b6c50:
    // 0x2b6c50: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
label_2b6c54:
    if (ctx->pc == 0x2B6C54u) {
        ctx->pc = 0x2B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C50u;
        // 0x2b6c54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C58u;
        goto label_2b6c58;
    }
    ctx->pc = 0x2B6C50u;
    {
        const bool branch_taken_0x2b6c50 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C50u;
        // 0x2b6c54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c50) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6C58u;
label_2b6c58:
    // 0x2b6c58: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b6c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6c5c:
    // 0x2b6c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b6c60:
    // 0x2b6c60: 0xc0ab99e  jal         func_2AE678
label_2b6c64:
    if (ctx->pc == 0x2B6C64u) {
        ctx->pc = 0x2B6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C60u;
        // 0x2b6c64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C68u;
        goto label_2b6c68;
    }
    ctx->pc = 0x2B6C60u;
    SET_GPR_U32(ctx, 31, 0x2B6C68u);
    ctx->pc = 0x2B6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C60u;
    // 0x2b6c64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE678u, 0x2B6C60u, 0x2B6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C68u;
label_2b6c68:
    // 0x2b6c68: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6c6c:
    if (ctx->pc == 0x2B6C6Cu) {
        ctx->pc = 0x2B6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C68u;
        // 0x2b6c6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C70u;
        goto label_2b6c70;
    }
    ctx->pc = 0x2B6C68u;
    {
        const bool branch_taken_0x2b6c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C68u;
        // 0x2b6c6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c68) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6C70u;
label_2b6c70:
    // 0x2b6c70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6c74:
    // 0x2b6c74: 0xc0adb7e  jal         func_2B6DF8
label_2b6c78:
    if (ctx->pc == 0x2B6C78u) {
        ctx->pc = 0x2B6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C74u;
        // 0x2b6c78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C7Cu;
        goto label_2b6c7c;
    }
    ctx->pc = 0x2B6C74u;
    SET_GPR_U32(ctx, 31, 0x2B6C7Cu);
    ctx->pc = 0x2B6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C74u;
    // 0x2b6c78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B6C74u, 0x2B6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C7Cu;
label_2b6c7c:
    // 0x2b6c7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b6c80:
    // 0x2b6c80: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b6c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b6c84:
    // 0x2b6c84: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2b6c84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b6c88:
    // 0x2b6c88: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2b6c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b6c8c:
    // 0x2b6c8c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b6c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b6c90:
    // 0x2b6c90: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b6c90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b6c94:
    // 0x2b6c94: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b6c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b6c98:
    // 0x2b6c98: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b6c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6c9c:
    // 0x2b6c9c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b6c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b6ca0:
    // 0x2b6ca0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b6ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b6ca4:
    // 0x2b6ca4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b6ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6ca8:
    // 0x2b6ca8: 0x3e00008  jr          $ra
label_2b6cac:
    if (ctx->pc == 0x2B6CACu) {
        ctx->pc = 0x2B6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CA8u;
        // 0x2b6cac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6CB0u;
        goto label_fallthrough_0x2b6ca8;
    }
    ctx->pc = 0x2B6CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CA8u;
        // 0x2b6cac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b6ca8:
    ctx->pc = 0x2B6CB0u;
}
