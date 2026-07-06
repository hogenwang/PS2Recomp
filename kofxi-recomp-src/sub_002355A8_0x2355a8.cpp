#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002355A8
// Address: 0x2355a8 - 0x235b68
void sub_002355A8_0x2355a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002355A8_0x2355a8");
#endif

    switch (ctx->pc) {
        case 0x2355a8u: goto label_2355a8;
        case 0x2355acu: goto label_2355ac;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b4u: goto label_2355b4;
        case 0x2355b8u: goto label_2355b8;
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c0u: goto label_2355c0;
        case 0x2355c4u: goto label_2355c4;
        case 0x2355c8u: goto label_2355c8;
        case 0x2355ccu: goto label_2355cc;
        case 0x2355d0u: goto label_2355d0;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        case 0x2355dcu: goto label_2355dc;
        case 0x2355e0u: goto label_2355e0;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355e8u: goto label_2355e8;
        case 0x2355ecu: goto label_2355ec;
        case 0x2355f0u: goto label_2355f0;
        case 0x2355f4u: goto label_2355f4;
        case 0x2355f8u: goto label_2355f8;
        case 0x2355fcu: goto label_2355fc;
        case 0x235600u: goto label_235600;
        case 0x235604u: goto label_235604;
        case 0x235608u: goto label_235608;
        case 0x23560cu: goto label_23560c;
        case 0x235610u: goto label_235610;
        case 0x235614u: goto label_235614;
        case 0x235618u: goto label_235618;
        case 0x23561cu: goto label_23561c;
        case 0x235620u: goto label_235620;
        case 0x235624u: goto label_235624;
        case 0x235628u: goto label_235628;
        case 0x23562cu: goto label_23562c;
        case 0x235630u: goto label_235630;
        case 0x235634u: goto label_235634;
        case 0x235638u: goto label_235638;
        case 0x23563cu: goto label_23563c;
        case 0x235640u: goto label_235640;
        case 0x235644u: goto label_235644;
        case 0x235648u: goto label_235648;
        case 0x23564cu: goto label_23564c;
        case 0x235650u: goto label_235650;
        case 0x235654u: goto label_235654;
        case 0x235658u: goto label_235658;
        case 0x23565cu: goto label_23565c;
        case 0x235660u: goto label_235660;
        case 0x235664u: goto label_235664;
        case 0x235668u: goto label_235668;
        case 0x23566cu: goto label_23566c;
        case 0x235670u: goto label_235670;
        case 0x235674u: goto label_235674;
        case 0x235678u: goto label_235678;
        case 0x23567cu: goto label_23567c;
        case 0x235680u: goto label_235680;
        case 0x235684u: goto label_235684;
        case 0x235688u: goto label_235688;
        case 0x23568cu: goto label_23568c;
        case 0x235690u: goto label_235690;
        case 0x235694u: goto label_235694;
        case 0x235698u: goto label_235698;
        case 0x23569cu: goto label_23569c;
        case 0x2356a0u: goto label_2356a0;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356acu: goto label_2356ac;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356b8u: goto label_2356b8;
        case 0x2356bcu: goto label_2356bc;
        case 0x2356c0u: goto label_2356c0;
        case 0x2356c4u: goto label_2356c4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356ccu: goto label_2356cc;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356d4u: goto label_2356d4;
        case 0x2356d8u: goto label_2356d8;
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e0u: goto label_2356e0;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356e8u: goto label_2356e8;
        case 0x2356ecu: goto label_2356ec;
        case 0x2356f0u: goto label_2356f0;
        case 0x2356f4u: goto label_2356f4;
        case 0x2356f8u: goto label_2356f8;
        case 0x2356fcu: goto label_2356fc;
        case 0x235700u: goto label_235700;
        case 0x235704u: goto label_235704;
        case 0x235708u: goto label_235708;
        case 0x23570cu: goto label_23570c;
        case 0x235710u: goto label_235710;
        case 0x235714u: goto label_235714;
        case 0x235718u: goto label_235718;
        case 0x23571cu: goto label_23571c;
        case 0x235720u: goto label_235720;
        case 0x235724u: goto label_235724;
        case 0x235728u: goto label_235728;
        case 0x23572cu: goto label_23572c;
        case 0x235730u: goto label_235730;
        case 0x235734u: goto label_235734;
        case 0x235738u: goto label_235738;
        case 0x23573cu: goto label_23573c;
        case 0x235740u: goto label_235740;
        case 0x235744u: goto label_235744;
        case 0x235748u: goto label_235748;
        case 0x23574cu: goto label_23574c;
        case 0x235750u: goto label_235750;
        case 0x235754u: goto label_235754;
        case 0x235758u: goto label_235758;
        case 0x23575cu: goto label_23575c;
        case 0x235760u: goto label_235760;
        case 0x235764u: goto label_235764;
        case 0x235768u: goto label_235768;
        case 0x23576cu: goto label_23576c;
        case 0x235770u: goto label_235770;
        case 0x235774u: goto label_235774;
        case 0x235778u: goto label_235778;
        case 0x23577cu: goto label_23577c;
        case 0x235780u: goto label_235780;
        case 0x235784u: goto label_235784;
        case 0x235788u: goto label_235788;
        case 0x23578cu: goto label_23578c;
        case 0x235790u: goto label_235790;
        case 0x235794u: goto label_235794;
        case 0x235798u: goto label_235798;
        case 0x23579cu: goto label_23579c;
        case 0x2357a0u: goto label_2357a0;
        case 0x2357a4u: goto label_2357a4;
        case 0x2357a8u: goto label_2357a8;
        case 0x2357acu: goto label_2357ac;
        case 0x2357b0u: goto label_2357b0;
        case 0x2357b4u: goto label_2357b4;
        case 0x2357b8u: goto label_2357b8;
        case 0x2357bcu: goto label_2357bc;
        case 0x2357c0u: goto label_2357c0;
        case 0x2357c4u: goto label_2357c4;
        case 0x2357c8u: goto label_2357c8;
        case 0x2357ccu: goto label_2357cc;
        case 0x2357d0u: goto label_2357d0;
        case 0x2357d4u: goto label_2357d4;
        case 0x2357d8u: goto label_2357d8;
        case 0x2357dcu: goto label_2357dc;
        case 0x2357e0u: goto label_2357e0;
        case 0x2357e4u: goto label_2357e4;
        case 0x2357e8u: goto label_2357e8;
        case 0x2357ecu: goto label_2357ec;
        case 0x2357f0u: goto label_2357f0;
        case 0x2357f4u: goto label_2357f4;
        case 0x2357f8u: goto label_2357f8;
        case 0x2357fcu: goto label_2357fc;
        case 0x235800u: goto label_235800;
        case 0x235804u: goto label_235804;
        case 0x235808u: goto label_235808;
        case 0x23580cu: goto label_23580c;
        case 0x235810u: goto label_235810;
        case 0x235814u: goto label_235814;
        case 0x235818u: goto label_235818;
        case 0x23581cu: goto label_23581c;
        case 0x235820u: goto label_235820;
        case 0x235824u: goto label_235824;
        case 0x235828u: goto label_235828;
        case 0x23582cu: goto label_23582c;
        case 0x235830u: goto label_235830;
        case 0x235834u: goto label_235834;
        case 0x235838u: goto label_235838;
        case 0x23583cu: goto label_23583c;
        case 0x235840u: goto label_235840;
        case 0x235844u: goto label_235844;
        case 0x235848u: goto label_235848;
        case 0x23584cu: goto label_23584c;
        case 0x235850u: goto label_235850;
        case 0x235854u: goto label_235854;
        case 0x235858u: goto label_235858;
        case 0x23585cu: goto label_23585c;
        case 0x235860u: goto label_235860;
        case 0x235864u: goto label_235864;
        case 0x235868u: goto label_235868;
        case 0x23586cu: goto label_23586c;
        case 0x235870u: goto label_235870;
        case 0x235874u: goto label_235874;
        case 0x235878u: goto label_235878;
        case 0x23587cu: goto label_23587c;
        case 0x235880u: goto label_235880;
        case 0x235884u: goto label_235884;
        case 0x235888u: goto label_235888;
        case 0x23588cu: goto label_23588c;
        case 0x235890u: goto label_235890;
        case 0x235894u: goto label_235894;
        case 0x235898u: goto label_235898;
        case 0x23589cu: goto label_23589c;
        case 0x2358a0u: goto label_2358a0;
        case 0x2358a4u: goto label_2358a4;
        case 0x2358a8u: goto label_2358a8;
        case 0x2358acu: goto label_2358ac;
        case 0x2358b0u: goto label_2358b0;
        case 0x2358b4u: goto label_2358b4;
        case 0x2358b8u: goto label_2358b8;
        case 0x2358bcu: goto label_2358bc;
        case 0x2358c0u: goto label_2358c0;
        case 0x2358c4u: goto label_2358c4;
        case 0x2358c8u: goto label_2358c8;
        case 0x2358ccu: goto label_2358cc;
        case 0x2358d0u: goto label_2358d0;
        case 0x2358d4u: goto label_2358d4;
        case 0x2358d8u: goto label_2358d8;
        case 0x2358dcu: goto label_2358dc;
        case 0x2358e0u: goto label_2358e0;
        case 0x2358e4u: goto label_2358e4;
        case 0x2358e8u: goto label_2358e8;
        case 0x2358ecu: goto label_2358ec;
        case 0x2358f0u: goto label_2358f0;
        case 0x2358f4u: goto label_2358f4;
        case 0x2358f8u: goto label_2358f8;
        case 0x2358fcu: goto label_2358fc;
        case 0x235900u: goto label_235900;
        case 0x235904u: goto label_235904;
        case 0x235908u: goto label_235908;
        case 0x23590cu: goto label_23590c;
        case 0x235910u: goto label_235910;
        case 0x235914u: goto label_235914;
        case 0x235918u: goto label_235918;
        case 0x23591cu: goto label_23591c;
        case 0x235920u: goto label_235920;
        case 0x235924u: goto label_235924;
        case 0x235928u: goto label_235928;
        case 0x23592cu: goto label_23592c;
        case 0x235930u: goto label_235930;
        case 0x235934u: goto label_235934;
        case 0x235938u: goto label_235938;
        case 0x23593cu: goto label_23593c;
        case 0x235940u: goto label_235940;
        case 0x235944u: goto label_235944;
        case 0x235948u: goto label_235948;
        case 0x23594cu: goto label_23594c;
        case 0x235950u: goto label_235950;
        case 0x235954u: goto label_235954;
        case 0x235958u: goto label_235958;
        case 0x23595cu: goto label_23595c;
        case 0x235960u: goto label_235960;
        case 0x235964u: goto label_235964;
        case 0x235968u: goto label_235968;
        case 0x23596cu: goto label_23596c;
        case 0x235970u: goto label_235970;
        case 0x235974u: goto label_235974;
        case 0x235978u: goto label_235978;
        case 0x23597cu: goto label_23597c;
        case 0x235980u: goto label_235980;
        case 0x235984u: goto label_235984;
        case 0x235988u: goto label_235988;
        case 0x23598cu: goto label_23598c;
        case 0x235990u: goto label_235990;
        case 0x235994u: goto label_235994;
        case 0x235998u: goto label_235998;
        case 0x23599cu: goto label_23599c;
        case 0x2359a0u: goto label_2359a0;
        case 0x2359a4u: goto label_2359a4;
        case 0x2359a8u: goto label_2359a8;
        case 0x2359acu: goto label_2359ac;
        case 0x2359b0u: goto label_2359b0;
        case 0x2359b4u: goto label_2359b4;
        case 0x2359b8u: goto label_2359b8;
        case 0x2359bcu: goto label_2359bc;
        case 0x2359c0u: goto label_2359c0;
        case 0x2359c4u: goto label_2359c4;
        case 0x2359c8u: goto label_2359c8;
        case 0x2359ccu: goto label_2359cc;
        case 0x2359d0u: goto label_2359d0;
        case 0x2359d4u: goto label_2359d4;
        case 0x2359d8u: goto label_2359d8;
        case 0x2359dcu: goto label_2359dc;
        case 0x2359e0u: goto label_2359e0;
        case 0x2359e4u: goto label_2359e4;
        case 0x2359e8u: goto label_2359e8;
        case 0x2359ecu: goto label_2359ec;
        case 0x2359f0u: goto label_2359f0;
        case 0x2359f4u: goto label_2359f4;
        case 0x2359f8u: goto label_2359f8;
        case 0x2359fcu: goto label_2359fc;
        case 0x235a00u: goto label_235a00;
        case 0x235a04u: goto label_235a04;
        case 0x235a08u: goto label_235a08;
        case 0x235a0cu: goto label_235a0c;
        case 0x235a10u: goto label_235a10;
        case 0x235a14u: goto label_235a14;
        case 0x235a18u: goto label_235a18;
        case 0x235a1cu: goto label_235a1c;
        case 0x235a20u: goto label_235a20;
        case 0x235a24u: goto label_235a24;
        case 0x235a28u: goto label_235a28;
        case 0x235a2cu: goto label_235a2c;
        case 0x235a30u: goto label_235a30;
        case 0x235a34u: goto label_235a34;
        case 0x235a38u: goto label_235a38;
        case 0x235a3cu: goto label_235a3c;
        case 0x235a40u: goto label_235a40;
        case 0x235a44u: goto label_235a44;
        case 0x235a48u: goto label_235a48;
        case 0x235a4cu: goto label_235a4c;
        case 0x235a50u: goto label_235a50;
        case 0x235a54u: goto label_235a54;
        case 0x235a58u: goto label_235a58;
        case 0x235a5cu: goto label_235a5c;
        case 0x235a60u: goto label_235a60;
        case 0x235a64u: goto label_235a64;
        case 0x235a68u: goto label_235a68;
        case 0x235a6cu: goto label_235a6c;
        case 0x235a70u: goto label_235a70;
        case 0x235a74u: goto label_235a74;
        case 0x235a78u: goto label_235a78;
        case 0x235a7cu: goto label_235a7c;
        case 0x235a80u: goto label_235a80;
        case 0x235a84u: goto label_235a84;
        case 0x235a88u: goto label_235a88;
        case 0x235a8cu: goto label_235a8c;
        case 0x235a90u: goto label_235a90;
        case 0x235a94u: goto label_235a94;
        case 0x235a98u: goto label_235a98;
        case 0x235a9cu: goto label_235a9c;
        case 0x235aa0u: goto label_235aa0;
        case 0x235aa4u: goto label_235aa4;
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        case 0x235af0u: goto label_235af0;
        case 0x235af4u: goto label_235af4;
        case 0x235af8u: goto label_235af8;
        case 0x235afcu: goto label_235afc;
        case 0x235b00u: goto label_235b00;
        case 0x235b04u: goto label_235b04;
        case 0x235b08u: goto label_235b08;
        case 0x235b0cu: goto label_235b0c;
        case 0x235b10u: goto label_235b10;
        case 0x235b14u: goto label_235b14;
        case 0x235b18u: goto label_235b18;
        case 0x235b1cu: goto label_235b1c;
        case 0x235b20u: goto label_235b20;
        case 0x235b24u: goto label_235b24;
        case 0x235b28u: goto label_235b28;
        case 0x235b2cu: goto label_235b2c;
        case 0x235b30u: goto label_235b30;
        case 0x235b34u: goto label_235b34;
        case 0x235b38u: goto label_235b38;
        case 0x235b3cu: goto label_235b3c;
        case 0x235b40u: goto label_235b40;
        case 0x235b44u: goto label_235b44;
        case 0x235b48u: goto label_235b48;
        case 0x235b4cu: goto label_235b4c;
        case 0x235b50u: goto label_235b50;
        case 0x235b54u: goto label_235b54;
        case 0x235b58u: goto label_235b58;
        case 0x235b5cu: goto label_235b5c;
        case 0x235b60u: goto label_235b60;
        case 0x235b64u: goto label_235b64;
        default: break;
    }

    ctx->pc = 0x2355a8u;

label_2355a8:
    // 0x2355a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2355ac:
    // 0x2355ac: 0x3402c008  ori         $v0, $zero, 0xC008
    ctx->pc = 0x2355acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49160);
label_2355b0:
    // 0x2355b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2355b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2355b4:
    // 0x2355b4: 0x34426914  ori         $v0, $v0, 0x6914
    ctx->pc = 0x2355b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26900);
label_2355b8:
    // 0x2355b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2355b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2355bc:
    // 0x2355bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2355bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2355c0:
    // 0x2355c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2355c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2355c4:
    // 0x2355c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2355c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2355c8:
    // 0x2355c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2355c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2355cc:
    // 0x2355cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2355ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2355d0:
    // 0x2355d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2355d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2355d4:
    // 0x2355d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2355d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2355d8:
    // 0x2355d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2355d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2355dc:
    // 0x2355dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2355dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2355e0:
    // 0x2355e0: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_2355e4:
    if (ctx->pc == 0x2355E4u) {
        ctx->pc = 0x2355E4u;
            // 0x2355e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2355E8u;
        goto label_2355e8;
    }
    ctx->pc = 0x2355E0u;
    {
        const bool branch_taken_0x2355e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2355E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2355E0u;
            // 0x2355e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355e0) {
            ctx->pc = 0x2355FCu;
            goto label_2355fc;
        }
    }
    ctx->pc = 0x2355E8u;
label_2355e8:
    // 0x2355e8: 0x3402c008  ori         $v0, $zero, 0xC008
    ctx->pc = 0x2355e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49160);
label_2355ec:
    // 0x2355ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2355ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2355f0:
    // 0x2355f0: 0x34426924  ori         $v0, $v0, 0x6924
    ctx->pc = 0x2355f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26916);
label_2355f4:
    // 0x2355f4: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_2355f8:
    if (ctx->pc == 0x2355F8u) {
        ctx->pc = 0x2355FCu;
        goto label_2355fc;
    }
    ctx->pc = 0x2355F4u;
    {
        const bool branch_taken_0x2355f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2355f4) {
            ctx->pc = 0x235610u;
            goto label_235610;
        }
    }
    ctx->pc = 0x2355FCu;
label_2355fc:
    // 0x2355fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2355fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235600:
    // 0x235600: 0xc08d6da  jal         func_235B68
label_235604:
    if (ctx->pc == 0x235604u) {
        ctx->pc = 0x235604u;
            // 0x235604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235608u;
        goto label_235608;
    }
    ctx->pc = 0x235600u;
    SET_GPR_U32(ctx, 31, 0x235608u);
    ctx->pc = 0x235604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235600u;
            // 0x235604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235B68u;
    if (runtime->hasFunction(0x235B68u)) {
        auto targetFn = runtime->lookupFunction(0x235B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235608u; }
        if (ctx->pc != 0x235608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235B68_0x235b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235608u; }
        if (ctx->pc != 0x235608u) { return; }
    }
    ctx->pc = 0x235608u;
label_235608:
    // 0x235608: 0x1000014f  b           . + 4 + (0x14F << 2)
label_23560c:
    if (ctx->pc == 0x23560Cu) {
        ctx->pc = 0x23560Cu;
            // 0x23560c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x235610u;
        goto label_235610;
    }
    ctx->pc = 0x235608u;
    {
        const bool branch_taken_0x235608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235608u;
            // 0x23560c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235608) {
            ctx->pc = 0x235B48u;
            goto label_235b48;
        }
    }
    ctx->pc = 0x235610u;
label_235610:
    // 0x235610: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x235610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235614:
    // 0x235614: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235618:
    // 0x235618: 0x3442697a  ori         $v0, $v0, 0x697A
    ctx->pc = 0x235618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27002);
label_23561c:
    // 0x23561c: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
label_235620:
    if (ctx->pc == 0x235620u) {
        ctx->pc = 0x235620u;
            // 0x235620: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x235624u;
        goto label_235624;
    }
    ctx->pc = 0x23561Cu;
    {
        const bool branch_taken_0x23561c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x235620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23561Cu;
            // 0x235620: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23561c) {
            ctx->pc = 0x235664u;
            goto label_235664;
        }
    }
    ctx->pc = 0x235624u;
label_235624:
    // 0x235624: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_235628:
    if (ctx->pc == 0x235628u) {
        ctx->pc = 0x23562Cu;
        goto label_23562c;
    }
    ctx->pc = 0x235624u;
    {
        const bool branch_taken_0x235624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235624) {
            ctx->pc = 0x235648u;
            goto label_235648;
        }
    }
    ctx->pc = 0x23562Cu;
label_23562c:
    // 0x23562c: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235630:
    // 0x235630: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235634:
    // 0x235634: 0x34426979  ori         $v0, $v0, 0x6979
    ctx->pc = 0x235634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27001);
label_235638:
    // 0x235638: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
label_23563c:
    if (ctx->pc == 0x23563Cu) {
        ctx->pc = 0x235640u;
        goto label_235640;
    }
    ctx->pc = 0x235638u;
    {
        const bool branch_taken_0x235638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235638) {
            ctx->pc = 0x235674u;
            goto label_235674;
        }
    }
    ctx->pc = 0x235640u;
label_235640:
    // 0x235640: 0x10000014  b           . + 4 + (0x14 << 2)
label_235644:
    if (ctx->pc == 0x235644u) {
        ctx->pc = 0x235648u;
        goto label_235648;
    }
    ctx->pc = 0x235640u;
    {
        const bool branch_taken_0x235640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235640) {
            ctx->pc = 0x235694u;
            goto label_235694;
        }
    }
    ctx->pc = 0x235648u;
label_235648:
    // 0x235648: 0x3402c00c  ori         $v0, $zero, 0xC00C
    ctx->pc = 0x235648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49164);
label_23564c:
    // 0x23564c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235650:
    // 0x235650: 0x34426978  ori         $v0, $v0, 0x6978
    ctx->pc = 0x235650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27000);
label_235654:
    // 0x235654: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
label_235658:
    if (ctx->pc == 0x235658u) {
        ctx->pc = 0x23565Cu;
        goto label_23565c;
    }
    ctx->pc = 0x235654u;
    {
        const bool branch_taken_0x235654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235654) {
            ctx->pc = 0x235684u;
            goto label_235684;
        }
    }
    ctx->pc = 0x23565Cu;
label_23565c:
    // 0x23565c: 0x1000000d  b           . + 4 + (0xD << 2)
label_235660:
    if (ctx->pc == 0x235660u) {
        ctx->pc = 0x235664u;
        goto label_235664;
    }
    ctx->pc = 0x23565Cu;
    {
        const bool branch_taken_0x23565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23565c) {
            ctx->pc = 0x235694u;
            goto label_235694;
        }
    }
    ctx->pc = 0x235664u;
label_235664:
    // 0x235664: 0xc08d2b2  jal         func_234AC8
label_235668:
    if (ctx->pc == 0x235668u) {
        ctx->pc = 0x235668u;
            // 0x235668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23566Cu;
        goto label_23566c;
    }
    ctx->pc = 0x235664u;
    SET_GPR_U32(ctx, 31, 0x23566Cu);
    ctx->pc = 0x235668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235664u;
            // 0x235668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234AC8u;
    if (runtime->hasFunction(0x234AC8u)) {
        auto targetFn = runtime->lookupFunction(0x234AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23566Cu; }
        if (ctx->pc != 0x23566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234AC8_0x234ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23566Cu; }
        if (ctx->pc != 0x23566Cu) { return; }
    }
    ctx->pc = 0x23566Cu;
label_23566c:
    // 0x23566c: 0x10000136  b           . + 4 + (0x136 << 2)
label_235670:
    if (ctx->pc == 0x235670u) {
        ctx->pc = 0x235670u;
            // 0x235670: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x235674u;
        goto label_235674;
    }
    ctx->pc = 0x23566Cu;
    {
        const bool branch_taken_0x23566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23566Cu;
            // 0x235670: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23566c) {
            ctx->pc = 0x235B48u;
            goto label_235b48;
        }
    }
    ctx->pc = 0x235674u;
label_235674:
    // 0x235674: 0xc08d2ca  jal         func_234B28
label_235678:
    if (ctx->pc == 0x235678u) {
        ctx->pc = 0x235678u;
            // 0x235678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23567Cu;
        goto label_23567c;
    }
    ctx->pc = 0x235674u;
    SET_GPR_U32(ctx, 31, 0x23567Cu);
    ctx->pc = 0x235678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235674u;
            // 0x235678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234B28u;
    if (runtime->hasFunction(0x234B28u)) {
        auto targetFn = runtime->lookupFunction(0x234B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23567Cu; }
        if (ctx->pc != 0x23567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234B28_0x234b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23567Cu; }
        if (ctx->pc != 0x23567Cu) { return; }
    }
    ctx->pc = 0x23567Cu;
label_23567c:
    // 0x23567c: 0x10000132  b           . + 4 + (0x132 << 2)
label_235680:
    if (ctx->pc == 0x235680u) {
        ctx->pc = 0x235680u;
            // 0x235680: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x235684u;
        goto label_235684;
    }
    ctx->pc = 0x23567Cu;
    {
        const bool branch_taken_0x23567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23567Cu;
            // 0x235680: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23567c) {
            ctx->pc = 0x235B48u;
            goto label_235b48;
        }
    }
    ctx->pc = 0x235684u;
label_235684:
    // 0x235684: 0xc08d332  jal         func_234CC8
label_235688:
    if (ctx->pc == 0x235688u) {
        ctx->pc = 0x235688u;
            // 0x235688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23568Cu;
        goto label_23568c;
    }
    ctx->pc = 0x235684u;
    SET_GPR_U32(ctx, 31, 0x23568Cu);
    ctx->pc = 0x235688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235684u;
            // 0x235688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234CC8u;
    if (runtime->hasFunction(0x234CC8u)) {
        auto targetFn = runtime->lookupFunction(0x234CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23568Cu; }
        if (ctx->pc != 0x23568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234CC8_0x234cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23568Cu; }
        if (ctx->pc != 0x23568Cu) { return; }
    }
    ctx->pc = 0x23568Cu;
label_23568c:
    // 0x23568c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_235690:
    if (ctx->pc == 0x235690u) {
        ctx->pc = 0x235690u;
            // 0x235690: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x235694u;
        goto label_235694;
    }
    ctx->pc = 0x23568Cu;
    {
        const bool branch_taken_0x23568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23568Cu;
            // 0x235690: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23568c) {
            ctx->pc = 0x235B48u;
            goto label_235b48;
        }
    }
    ctx->pc = 0x235694u;
label_235694:
    // 0x235694: 0xc08d54a  jal         func_235528
label_235698:
    if (ctx->pc == 0x235698u) {
        ctx->pc = 0x235698u;
            // 0x235698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23569Cu;
        goto label_23569c;
    }
    ctx->pc = 0x235694u;
    SET_GPR_U32(ctx, 31, 0x23569Cu);
    ctx->pc = 0x235698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235694u;
            // 0x235698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235528u;
    if (runtime->hasFunction(0x235528u)) {
        auto targetFn = runtime->lookupFunction(0x235528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23569Cu; }
        if (ctx->pc != 0x23569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235528_0x235528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23569Cu; }
        if (ctx->pc != 0x23569Cu) { return; }
    }
    ctx->pc = 0x23569Cu;
label_23569c:
    // 0x23569c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23569cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2356a0:
    // 0x2356a0: 0x12400128  beqz        $s2, . + 4 + (0x128 << 2)
label_2356a4:
    if (ctx->pc == 0x2356A4u) {
        ctx->pc = 0x2356A4u;
            // 0x2356a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2356A8u;
        goto label_2356a8;
    }
    ctx->pc = 0x2356A0u;
    {
        const bool branch_taken_0x2356a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356A0u;
            // 0x2356a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a0) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x2356A8u;
label_2356a8:
    // 0x2356a8: 0x34028040  ori         $v0, $zero, 0x8040
    ctx->pc = 0x2356a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_2356ac:
    // 0x2356ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2356acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2356b0:
    // 0x2356b0: 0x34426946  ori         $v0, $v0, 0x6946
    ctx->pc = 0x2356b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26950);
label_2356b4:
    // 0x2356b4: 0x122200a8  beq         $s1, $v0, . + 4 + (0xA8 << 2)
label_2356b8:
    if (ctx->pc == 0x2356B8u) {
        ctx->pc = 0x2356B8u;
            // 0x2356b8: 0x96440030  lhu         $a0, 0x30($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x2356BCu;
        goto label_2356bc;
    }
    ctx->pc = 0x2356B4u;
    {
        const bool branch_taken_0x2356b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2356B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356B4u;
            // 0x2356b8: 0x96440030  lhu         $a0, 0x30($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356b4) {
            ctx->pc = 0x235958u;
            goto label_235958;
        }
    }
    ctx->pc = 0x2356BCu;
label_2356bc:
    // 0x2356bc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2356bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2356c0:
    // 0x2356c0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_2356c4:
    if (ctx->pc == 0x2356C4u) {
        ctx->pc = 0x2356C8u;
        goto label_2356c8;
    }
    ctx->pc = 0x2356C0u;
    {
        const bool branch_taken_0x2356c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2356c0) {
            ctx->pc = 0x23578Cu;
            goto label_23578c;
        }
    }
    ctx->pc = 0x2356C8u;
label_2356c8:
    // 0x2356c8: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2356c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2356cc:
    // 0x2356cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2356ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2356d0:
    // 0x2356d0: 0x34426932  ori         $v0, $v0, 0x6932
    ctx->pc = 0x2356d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26930);
label_2356d4:
    // 0x2356d4: 0x122200a0  beq         $s1, $v0, . + 4 + (0xA0 << 2)
label_2356d8:
    if (ctx->pc == 0x2356D8u) {
        ctx->pc = 0x2356D8u;
            // 0x2356d8: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x2356DCu;
        goto label_2356dc;
    }
    ctx->pc = 0x2356D4u;
    {
        const bool branch_taken_0x2356d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2356D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356D4u;
            // 0x2356d8: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356d4) {
            ctx->pc = 0x235958u;
            goto label_235958;
        }
    }
    ctx->pc = 0x2356DCu;
label_2356dc:
    // 0x2356dc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2356e0:
    if (ctx->pc == 0x2356E0u) {
        ctx->pc = 0x2356E4u;
        goto label_2356e4;
    }
    ctx->pc = 0x2356DCu;
    {
        const bool branch_taken_0x2356dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2356dc) {
            ctx->pc = 0x235738u;
            goto label_235738;
        }
    }
    ctx->pc = 0x2356E4u;
label_2356e4:
    // 0x2356e4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2356e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2356e8:
    // 0x2356e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2356e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2356ec:
    // 0x2356ec: 0x34426918  ori         $v0, $v0, 0x6918
    ctx->pc = 0x2356ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26904);
label_2356f0:
    // 0x2356f0: 0x12220089  beq         $s1, $v0, . + 4 + (0x89 << 2)
label_2356f4:
    if (ctx->pc == 0x2356F4u) {
        ctx->pc = 0x2356F4u;
            // 0x2356f4: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x2356F8u;
        goto label_2356f8;
    }
    ctx->pc = 0x2356F0u;
    {
        const bool branch_taken_0x2356f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2356F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356F0u;
            // 0x2356f4: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356f0) {
            ctx->pc = 0x235918u;
            goto label_235918;
        }
    }
    ctx->pc = 0x2356F8u;
label_2356f8:
    // 0x2356f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2356fc:
    if (ctx->pc == 0x2356FCu) {
        ctx->pc = 0x235700u;
        goto label_235700;
    }
    ctx->pc = 0x2356F8u;
    {
        const bool branch_taken_0x2356f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2356f8) {
            ctx->pc = 0x23571Cu;
            goto label_23571c;
        }
    }
    ctx->pc = 0x235700u;
label_235700:
    // 0x235700: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x235700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235704:
    // 0x235704: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235708:
    // 0x235708: 0x34426910  ori         $v0, $v0, 0x6910
    ctx->pc = 0x235708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26896);
label_23570c:
    // 0x23570c: 0x1222005a  beq         $s1, $v0, . + 4 + (0x5A << 2)
label_235710:
    if (ctx->pc == 0x235710u) {
        ctx->pc = 0x235710u;
            // 0x235710: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x235714u;
        goto label_235714;
    }
    ctx->pc = 0x23570Cu;
    {
        const bool branch_taken_0x23570c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x235710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23570Cu;
            // 0x235710: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23570c) {
            ctx->pc = 0x235878u;
            goto label_235878;
        }
    }
    ctx->pc = 0x235714u;
label_235714:
    // 0x235714: 0x1000009a  b           . + 4 + (0x9A << 2)
label_235718:
    if (ctx->pc == 0x235718u) {
        ctx->pc = 0x235718u;
            // 0x235718: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x23571Cu;
        goto label_23571c;
    }
    ctx->pc = 0x235714u;
    {
        const bool branch_taken_0x235714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235714u;
            // 0x235718: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235714) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x23571Cu;
label_23571c:
    // 0x23571c: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235720:
    // 0x235720: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235724:
    // 0x235724: 0x34426931  ori         $v0, $v0, 0x6931
    ctx->pc = 0x235724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26929);
label_235728:
    // 0x235728: 0x5222008c  beql        $s1, $v0, . + 4 + (0x8C << 2)
label_23572c:
    if (ctx->pc == 0x23572Cu) {
        ctx->pc = 0x23572Cu;
            // 0x23572c: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x235730u;
        goto label_235730;
    }
    ctx->pc = 0x235728u;
    {
        const bool branch_taken_0x235728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235728) {
            ctx->pc = 0x23572Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235728u;
            // 0x23572c: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23595Cu;
            goto label_23595c;
        }
    }
    ctx->pc = 0x235730u;
label_235730:
    // 0x235730: 0x10000093  b           . + 4 + (0x93 << 2)
label_235734:
    if (ctx->pc == 0x235734u) {
        ctx->pc = 0x235734u;
            // 0x235734: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x235738u;
        goto label_235738;
    }
    ctx->pc = 0x235730u;
    {
        const bool branch_taken_0x235730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235730u;
            // 0x235734: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235730) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235738u;
label_235738:
    // 0x235738: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x235738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23573c:
    // 0x23573c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235740:
    // 0x235740: 0x3442697b  ori         $v0, $v0, 0x697B
    ctx->pc = 0x235740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27003);
label_235744:
    // 0x235744: 0x1222008d  beq         $s1, $v0, . + 4 + (0x8D << 2)
label_235748:
    if (ctx->pc == 0x235748u) {
        ctx->pc = 0x235748u;
            // 0x235748: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x23574Cu;
        goto label_23574c;
    }
    ctx->pc = 0x235744u;
    {
        const bool branch_taken_0x235744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x235748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235744u;
            // 0x235748: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235744) {
            ctx->pc = 0x23597Cu;
            goto label_23597c;
        }
    }
    ctx->pc = 0x23574Cu;
label_23574c:
    // 0x23574c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_235750:
    if (ctx->pc == 0x235750u) {
        ctx->pc = 0x235754u;
        goto label_235754;
    }
    ctx->pc = 0x23574Cu;
    {
        const bool branch_taken_0x23574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23574c) {
            ctx->pc = 0x235770u;
            goto label_235770;
        }
    }
    ctx->pc = 0x235754u;
label_235754:
    // 0x235754: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x235754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235758:
    // 0x235758: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23575c:
    // 0x23575c: 0x34426949  ori         $v0, $v0, 0x6949
    ctx->pc = 0x23575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26953);
label_235760:
    // 0x235760: 0x5222007e  beql        $s1, $v0, . + 4 + (0x7E << 2)
label_235764:
    if (ctx->pc == 0x235764u) {
        ctx->pc = 0x235764u;
            // 0x235764: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x235768u;
        goto label_235768;
    }
    ctx->pc = 0x235760u;
    {
        const bool branch_taken_0x235760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235760) {
            ctx->pc = 0x235764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235760u;
            // 0x235764: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23595Cu;
            goto label_23595c;
        }
    }
    ctx->pc = 0x235768u;
label_235768:
    // 0x235768: 0x10000085  b           . + 4 + (0x85 << 2)
label_23576c:
    if (ctx->pc == 0x23576Cu) {
        ctx->pc = 0x23576Cu;
            // 0x23576c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x235770u;
        goto label_235770;
    }
    ctx->pc = 0x235768u;
    {
        const bool branch_taken_0x235768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235768u;
            // 0x23576c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235768) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235770u;
label_235770:
    // 0x235770: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x235770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235774:
    // 0x235774: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235778:
    // 0x235778: 0x3442697f  ori         $v0, $v0, 0x697F
    ctx->pc = 0x235778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27007);
label_23577c:
    // 0x23577c: 0x52220069  beql        $s1, $v0, . + 4 + (0x69 << 2)
label_235780:
    if (ctx->pc == 0x235780u) {
        ctx->pc = 0x235780u;
            // 0x235780: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x235784u;
        goto label_235784;
    }
    ctx->pc = 0x23577Cu;
    {
        const bool branch_taken_0x23577c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23577c) {
            ctx->pc = 0x235780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23577Cu;
            // 0x235780: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235924u;
            goto label_235924;
        }
    }
    ctx->pc = 0x235784u;
label_235784:
    // 0x235784: 0x1000007e  b           . + 4 + (0x7E << 2)
label_235788:
    if (ctx->pc == 0x235788u) {
        ctx->pc = 0x235788u;
            // 0x235788: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x23578Cu;
        goto label_23578c;
    }
    ctx->pc = 0x235784u;
    {
        const bool branch_taken_0x235784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235784u;
            // 0x235788: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235784) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x23578Cu;
label_23578c:
    // 0x23578c: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x23578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235790:
    // 0x235790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235794:
    // 0x235794: 0x3442693b  ori         $v0, $v0, 0x693B
    ctx->pc = 0x235794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26939);
label_235798:
    // 0x235798: 0x12220069  beq         $s1, $v0, . + 4 + (0x69 << 2)
label_23579c:
    if (ctx->pc == 0x23579Cu) {
        ctx->pc = 0x23579Cu;
            // 0x23579c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x2357A0u;
        goto label_2357a0;
    }
    ctx->pc = 0x235798u;
    {
        const bool branch_taken_0x235798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23579Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235798u;
            // 0x23579c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235798) {
            ctx->pc = 0x235940u;
            goto label_235940;
        }
    }
    ctx->pc = 0x2357A0u;
label_2357a0:
    // 0x2357a0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2357a4:
    if (ctx->pc == 0x2357A4u) {
        ctx->pc = 0x2357A8u;
        goto label_2357a8;
    }
    ctx->pc = 0x2357A0u;
    {
        const bool branch_taken_0x2357a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2357a0) {
            ctx->pc = 0x2357FCu;
            goto label_2357fc;
        }
    }
    ctx->pc = 0x2357A8u;
label_2357a8:
    // 0x2357a8: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2357a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2357ac:
    // 0x2357ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2357acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2357b0:
    // 0x2357b0: 0x34426917  ori         $v0, $v0, 0x6917
    ctx->pc = 0x2357b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26903);
label_2357b4:
    // 0x2357b4: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
label_2357b8:
    if (ctx->pc == 0x2357B8u) {
        ctx->pc = 0x2357B8u;
            // 0x2357b8: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x2357BCu;
        goto label_2357bc;
    }
    ctx->pc = 0x2357B4u;
    {
        const bool branch_taken_0x2357b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2357B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2357B4u;
            // 0x2357b8: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357b4) {
            ctx->pc = 0x235864u;
            goto label_235864;
        }
    }
    ctx->pc = 0x2357BCu;
label_2357bc:
    // 0x2357bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2357c0:
    if (ctx->pc == 0x2357C0u) {
        ctx->pc = 0x2357C4u;
        goto label_2357c4;
    }
    ctx->pc = 0x2357BCu;
    {
        const bool branch_taken_0x2357bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2357bc) {
            ctx->pc = 0x2357E0u;
            goto label_2357e0;
        }
    }
    ctx->pc = 0x2357C4u;
label_2357c4:
    // 0x2357c4: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2357c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2357c8:
    // 0x2357c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2357c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2357cc:
    // 0x2357cc: 0x34426911  ori         $v0, $v0, 0x6911
    ctx->pc = 0x2357ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26897);
label_2357d0:
    // 0x2357d0: 0x522200db  beql        $s1, $v0, . + 4 + (0xDB << 2)
label_2357d4:
    if (ctx->pc == 0x2357D4u) {
        ctx->pc = 0x2357D4u;
            // 0x2357d4: 0xa6640010  sh          $a0, 0x10($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2357D8u;
        goto label_2357d8;
    }
    ctx->pc = 0x2357D0u;
    {
        const bool branch_taken_0x2357d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2357d0) {
            ctx->pc = 0x2357D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2357D0u;
            // 0x2357d4: 0xa6640010  sh          $a0, 0x10($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x2357D8u;
label_2357d8:
    // 0x2357d8: 0x10000069  b           . + 4 + (0x69 << 2)
label_2357dc:
    if (ctx->pc == 0x2357DCu) {
        ctx->pc = 0x2357DCu;
            // 0x2357dc: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x2357E0u;
        goto label_2357e0;
    }
    ctx->pc = 0x2357D8u;
    {
        const bool branch_taken_0x2357d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2357D8u;
            // 0x2357dc: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357d8) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x2357E0u;
label_2357e0:
    // 0x2357e0: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2357e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2357e4:
    // 0x2357e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2357e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2357e8:
    // 0x2357e8: 0x34426935  ori         $v0, $v0, 0x6935
    ctx->pc = 0x2357e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26933);
label_2357ec:
    // 0x2357ec: 0x5222005b  beql        $s1, $v0, . + 4 + (0x5B << 2)
label_2357f0:
    if (ctx->pc == 0x2357F0u) {
        ctx->pc = 0x2357F0u;
            // 0x2357f0: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x2357F4u;
        goto label_2357f4;
    }
    ctx->pc = 0x2357ECu;
    {
        const bool branch_taken_0x2357ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2357ec) {
            ctx->pc = 0x2357F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2357ECu;
            // 0x2357f0: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23595Cu;
            goto label_23595c;
        }
    }
    ctx->pc = 0x2357F4u;
label_2357f4:
    // 0x2357f4: 0x10000062  b           . + 4 + (0x62 << 2)
label_2357f8:
    if (ctx->pc == 0x2357F8u) {
        ctx->pc = 0x2357F8u;
            // 0x2357f8: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x2357FCu;
        goto label_2357fc;
    }
    ctx->pc = 0x2357F4u;
    {
        const bool branch_taken_0x2357f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2357F4u;
            // 0x2357f8: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357f4) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x2357FCu;
label_2357fc:
    // 0x2357fc: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2357fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235800:
    // 0x235800: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235804:
    // 0x235804: 0x34426948  ori         $v0, $v0, 0x6948
    ctx->pc = 0x235804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26952);
label_235808:
    // 0x235808: 0x12220053  beq         $s1, $v0, . + 4 + (0x53 << 2)
label_23580c:
    if (ctx->pc == 0x23580Cu) {
        ctx->pc = 0x23580Cu;
            // 0x23580c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x235810u;
        goto label_235810;
    }
    ctx->pc = 0x235808u;
    {
        const bool branch_taken_0x235808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235808u;
            // 0x23580c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235808) {
            ctx->pc = 0x235958u;
            goto label_235958;
        }
    }
    ctx->pc = 0x235810u;
label_235810:
    // 0x235810: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_235814:
    if (ctx->pc == 0x235814u) {
        ctx->pc = 0x235818u;
        goto label_235818;
    }
    ctx->pc = 0x235810u;
    {
        const bool branch_taken_0x235810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235810) {
            ctx->pc = 0x235834u;
            goto label_235834;
        }
    }
    ctx->pc = 0x235818u;
label_235818:
    // 0x235818: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x235818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_23581c:
    // 0x23581c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235820:
    // 0x235820: 0x34426947  ori         $v0, $v0, 0x6947
    ctx->pc = 0x235820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26951);
label_235824:
    // 0x235824: 0x5222004d  beql        $s1, $v0, . + 4 + (0x4D << 2)
label_235828:
    if (ctx->pc == 0x235828u) {
        ctx->pc = 0x235828u;
            // 0x235828: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x23582Cu;
        goto label_23582c;
    }
    ctx->pc = 0x235824u;
    {
        const bool branch_taken_0x235824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235824) {
            ctx->pc = 0x235828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235824u;
            // 0x235828: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23595Cu;
            goto label_23595c;
        }
    }
    ctx->pc = 0x23582Cu;
label_23582c:
    // 0x23582c: 0x10000054  b           . + 4 + (0x54 << 2)
label_235830:
    if (ctx->pc == 0x235830u) {
        ctx->pc = 0x235830u;
            // 0x235830: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x235834u;
        goto label_235834;
    }
    ctx->pc = 0x23582Cu;
    {
        const bool branch_taken_0x23582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23582Cu;
            // 0x235830: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23582c) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235834u;
label_235834:
    // 0x235834: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235838:
    // 0x235838: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23583c:
    // 0x23583c: 0x3442697e  ori         $v0, $v0, 0x697E
    ctx->pc = 0x23583cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27006);
label_235840:
    // 0x235840: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
label_235844:
    if (ctx->pc == 0x235844u) {
        ctx->pc = 0x235844u;
            // 0x235844: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->pc = 0x235848u;
        goto label_235848;
    }
    ctx->pc = 0x235840u;
    {
        const bool branch_taken_0x235840 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235840) {
            ctx->pc = 0x235844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235840u;
            // 0x235844: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235870u;
            goto label_235870;
        }
    }
    ctx->pc = 0x235848u;
label_235848:
    // 0x235848: 0x3402c028  ori         $v0, $zero, 0xC028
    ctx->pc = 0x235848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49192);
label_23584c:
    // 0x23584c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235850:
    // 0x235850: 0x34426936  ori         $v0, $v0, 0x6936
    ctx->pc = 0x235850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26934);
label_235854:
    // 0x235854: 0x52220041  beql        $s1, $v0, . + 4 + (0x41 << 2)
label_235858:
    if (ctx->pc == 0x235858u) {
        ctx->pc = 0x235858u;
            // 0x235858: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x23585Cu;
        goto label_23585c;
    }
    ctx->pc = 0x235854u;
    {
        const bool branch_taken_0x235854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235854) {
            ctx->pc = 0x235858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235854u;
            // 0x235858: 0x8e4200cc  lw          $v0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23595Cu;
            goto label_23595c;
        }
    }
    ctx->pc = 0x23585Cu;
label_23585c:
    // 0x23585c: 0x10000048  b           . + 4 + (0x48 << 2)
label_235860:
    if (ctx->pc == 0x235860u) {
        ctx->pc = 0x235860u;
            // 0x235860: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x235864u;
        goto label_235864;
    }
    ctx->pc = 0x23585Cu;
    {
        const bool branch_taken_0x23585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23585Cu;
            // 0x235860: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23585c) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235864u;
label_235864:
    // 0x235864: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x235864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_235868:
    // 0x235868: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_23586c:
    if (ctx->pc == 0x23586Cu) {
        ctx->pc = 0x23586Cu;
            // 0x23586c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x235870u;
        goto label_235870;
    }
    ctx->pc = 0x235868u;
    {
        const bool branch_taken_0x235868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235868u;
            // 0x23586c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235868) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235870u;
label_235870:
    // 0x235870: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_235874:
    if (ctx->pc == 0x235874u) {
        ctx->pc = 0x235874u;
            // 0x235874: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x235878u;
        goto label_235878;
    }
    ctx->pc = 0x235870u;
    {
        const bool branch_taken_0x235870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235870u;
            // 0x235874: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235870) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235878u;
label_235878:
    // 0x235878: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23587c:
    if (ctx->pc == 0x23587Cu) {
        ctx->pc = 0x23587Cu;
            // 0x23587c: 0x96630010  lhu         $v1, 0x10($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x235880u;
        goto label_235880;
    }
    ctx->pc = 0x235878u;
    {
        const bool branch_taken_0x235878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235878u;
            // 0x23587c: 0x96630010  lhu         $v1, 0x10($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235878) {
            ctx->pc = 0x2358B0u;
            goto label_2358b0;
        }
    }
    ctx->pc = 0x235880u;
label_235880:
    // 0x235880: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x235880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_235884:
    // 0x235884: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_235888:
    if (ctx->pc == 0x235888u) {
        ctx->pc = 0x235888u;
            // 0x235888: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x23588Cu;
        goto label_23588c;
    }
    ctx->pc = 0x235884u;
    {
        const bool branch_taken_0x235884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235884u;
            // 0x235888: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235884) {
            ctx->pc = 0x2358BCu;
            goto label_2358bc;
        }
    }
    ctx->pc = 0x23588Cu;
label_23588c:
    // 0x23588c: 0xc08c682  jal         func_231A08
label_235890:
    if (ctx->pc == 0x235890u) {
        ctx->pc = 0x235894u;
        goto label_235894;
    }
    ctx->pc = 0x23588Cu;
    SET_GPR_U32(ctx, 31, 0x235894u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235894u; }
        if (ctx->pc != 0x235894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235894u; }
        if (ctx->pc != 0x235894u) { return; }
    }
    ctx->pc = 0x235894u;
label_235894:
    // 0x235894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235898:
    // 0x235898: 0xc08d4e4  jal         func_235390
label_23589c:
    if (ctx->pc == 0x23589Cu) {
        ctx->pc = 0x23589Cu;
            // 0x23589c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2358A0u;
        goto label_2358a0;
    }
    ctx->pc = 0x235898u;
    SET_GPR_U32(ctx, 31, 0x2358A0u);
    ctx->pc = 0x23589Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235898u;
            // 0x23589c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235390u;
    if (runtime->hasFunction(0x235390u)) {
        auto targetFn = runtime->lookupFunction(0x235390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358A0u; }
        if (ctx->pc != 0x2358A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235390_0x235390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358A0u; }
        if (ctx->pc != 0x2358A0u) { return; }
    }
    ctx->pc = 0x2358A0u;
label_2358a0:
    // 0x2358a0: 0xc08c698  jal         func_231A60
label_2358a4:
    if (ctx->pc == 0x2358A4u) {
        ctx->pc = 0x2358A4u;
            // 0x2358a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2358A8u;
        goto label_2358a8;
    }
    ctx->pc = 0x2358A0u;
    SET_GPR_U32(ctx, 31, 0x2358A8u);
    ctx->pc = 0x2358A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2358A0u;
            // 0x2358a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358A8u; }
        if (ctx->pc != 0x2358A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358A8u; }
        if (ctx->pc != 0x2358A8u) { return; }
    }
    ctx->pc = 0x2358A8u;
label_2358a8:
    // 0x2358a8: 0x96440030  lhu         $a0, 0x30($s2)
    ctx->pc = 0x2358a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_2358ac:
    // 0x2358ac: 0x96630010  lhu         $v1, 0x10($s3)
    ctx->pc = 0x2358acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_2358b0:
    // 0x2358b0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2358b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2358b4:
    // 0x2358b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2358b8:
    if (ctx->pc == 0x2358B8u) {
        ctx->pc = 0x2358B8u;
            // 0x2358b8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2358BCu;
        goto label_2358bc;
    }
    ctx->pc = 0x2358B4u;
    {
        const bool branch_taken_0x2358b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358B4u;
            // 0x2358b8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358b4) {
            ctx->pc = 0x2358E8u;
            goto label_2358e8;
        }
    }
    ctx->pc = 0x2358BCu;
label_2358bc:
    // 0x2358bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2358c0:
    if (ctx->pc == 0x2358C0u) {
        ctx->pc = 0x2358C0u;
            // 0x2358c0: 0x306371ad  andi        $v1, $v1, 0x71AD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29101);
        ctx->pc = 0x2358C4u;
        goto label_2358c4;
    }
    ctx->pc = 0x2358BCu;
    {
        const bool branch_taken_0x2358bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358BCu;
            // 0x2358c0: 0x306371ad  andi        $v1, $v1, 0x71AD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29101);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358bc) {
            ctx->pc = 0x2358ECu;
            goto label_2358ec;
        }
    }
    ctx->pc = 0x2358C4u;
label_2358c4:
    // 0x2358c4: 0xc08c682  jal         func_231A08
label_2358c8:
    if (ctx->pc == 0x2358C8u) {
        ctx->pc = 0x2358CCu;
        goto label_2358cc;
    }
    ctx->pc = 0x2358C4u;
    SET_GPR_U32(ctx, 31, 0x2358CCu);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358CCu; }
        if (ctx->pc != 0x2358CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358CCu; }
        if (ctx->pc != 0x2358CCu) { return; }
    }
    ctx->pc = 0x2358CCu;
label_2358cc:
    // 0x2358cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2358ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2358d0:
    // 0x2358d0: 0xc08d504  jal         func_235410
label_2358d4:
    if (ctx->pc == 0x2358D4u) {
        ctx->pc = 0x2358D4u;
            // 0x2358d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2358D8u;
        goto label_2358d8;
    }
    ctx->pc = 0x2358D0u;
    SET_GPR_U32(ctx, 31, 0x2358D8u);
    ctx->pc = 0x2358D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2358D0u;
            // 0x2358d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235410u;
    if (runtime->hasFunction(0x235410u)) {
        auto targetFn = runtime->lookupFunction(0x235410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358D8u; }
        if (ctx->pc != 0x2358D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235410_0x235410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358D8u; }
        if (ctx->pc != 0x2358D8u) { return; }
    }
    ctx->pc = 0x2358D8u;
label_2358d8:
    // 0x2358d8: 0xc08c698  jal         func_231A60
label_2358dc:
    if (ctx->pc == 0x2358DCu) {
        ctx->pc = 0x2358DCu;
            // 0x2358dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2358E0u;
        goto label_2358e0;
    }
    ctx->pc = 0x2358D8u;
    SET_GPR_U32(ctx, 31, 0x2358E0u);
    ctx->pc = 0x2358DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2358D8u;
            // 0x2358dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358E0u; }
        if (ctx->pc != 0x2358E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358E0u; }
        if (ctx->pc != 0x2358E0u) { return; }
    }
    ctx->pc = 0x2358E0u;
label_2358e0:
    // 0x2358e0: 0x96440030  lhu         $a0, 0x30($s2)
    ctx->pc = 0x2358e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_2358e4:
    // 0x2358e4: 0x96630010  lhu         $v1, 0x10($s3)
    ctx->pc = 0x2358e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_2358e8:
    // 0x2358e8: 0x306371ad  andi        $v1, $v1, 0x71AD
    ctx->pc = 0x2358e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29101);
label_2358ec:
    // 0x2358ec: 0x30828e52  andi        $v0, $a0, 0x8E52
    ctx->pc = 0x2358ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)36434);
label_2358f0:
    // 0x2358f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2358f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2358f4:
    // 0x2358f4: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x2358f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_2358f8:
    // 0x2358f8: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
label_2358fc:
    if (ctx->pc == 0x2358FCu) {
        ctx->pc = 0x2358FCu;
            // 0x2358fc: 0xa6420030  sh          $v0, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x235900u;
        goto label_235900;
    }
    ctx->pc = 0x2358F8u;
    {
        const bool branch_taken_0x2358f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358F8u;
            // 0x2358fc: 0xa6420030  sh          $v0, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358f8) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235900u;
label_235900:
    // 0x235900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235904:
    // 0x235904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235908:
    // 0x235908: 0x60f809  jalr        $v1
label_23590c:
    if (ctx->pc == 0x23590Cu) {
        ctx->pc = 0x23590Cu;
            // 0x23590c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235910u;
        goto label_235910;
    }
    ctx->pc = 0x235908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x235910u);
        ctx->pc = 0x23590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235908u;
            // 0x23590c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235910u; }
            if (ctx->pc != 0x235910u) { return; }
        }
        }
    }
    ctx->pc = 0x235910u;
label_235910:
    // 0x235910: 0x1000008c  b           . + 4 + (0x8C << 2)
label_235914:
    if (ctx->pc == 0x235914u) {
        ctx->pc = 0x235914u;
            // 0x235914: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235918u;
        goto label_235918;
    }
    ctx->pc = 0x235910u;
    {
        const bool branch_taken_0x235910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235910u;
            // 0x235914: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235910) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x235918u;
label_235918:
    // 0x235918: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x235918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_23591c:
    // 0x23591c: 0x10000088  b           . + 4 + (0x88 << 2)
label_235920:
    if (ctx->pc == 0x235920u) {
        ctx->pc = 0x235920u;
            // 0x235920: 0xfe420048  sd          $v0, 0x48($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 2));
        ctx->pc = 0x235924u;
        goto label_235924;
    }
    ctx->pc = 0x23591Cu;
    {
        const bool branch_taken_0x23591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23591Cu;
            // 0x235920: 0xfe420048  sd          $v0, 0x48($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23591c) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235924u;
label_235924:
    // 0x235924: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_235928:
    if (ctx->pc == 0x235928u) {
        ctx->pc = 0x235928u;
            // 0x235928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23592Cu;
        goto label_23592c;
    }
    ctx->pc = 0x235924u;
    {
        const bool branch_taken_0x235924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235924u;
            // 0x235928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235924) {
            ctx->pc = 0x235988u;
            goto label_235988;
        }
    }
    ctx->pc = 0x23592Cu;
label_23592c:
    // 0x23592c: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x23592cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_235930:
    // 0x235930: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x235930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_235934:
    // 0x235934: 0x34a5697f  ori         $a1, $a1, 0x697F
    ctx->pc = 0x235934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27007);
label_235938:
    // 0x235938: 0x1000000c  b           . + 4 + (0xC << 2)
label_23593c:
    if (ctx->pc == 0x23593Cu) {
        ctx->pc = 0x23593Cu;
            // 0x23593c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235940u;
        goto label_235940;
    }
    ctx->pc = 0x235938u;
    {
        const bool branch_taken_0x235938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235938u;
            // 0x23593c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235938) {
            ctx->pc = 0x23596Cu;
            goto label_23596c;
        }
    }
    ctx->pc = 0x235940u;
label_235940:
    // 0x235940: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_235944:
    // 0x235944: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x235944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_235948:
    // 0x235948: 0xc08b538  jal         func_22D4E0
label_23594c:
    if (ctx->pc == 0x23594Cu) {
        ctx->pc = 0x23594Cu;
            // 0x23594c: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->pc = 0x235950u;
        goto label_235950;
    }
    ctx->pc = 0x235948u;
    SET_GPR_U32(ctx, 31, 0x235950u);
    ctx->pc = 0x23594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235948u;
            // 0x23594c: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235950u; }
        if (ctx->pc != 0x235950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235950u; }
        if (ctx->pc != 0x235950u) { return; }
    }
    ctx->pc = 0x235950u;
label_235950:
    // 0x235950: 0x1000007c  b           . + 4 + (0x7C << 2)
label_235954:
    if (ctx->pc == 0x235954u) {
        ctx->pc = 0x235954u;
            // 0x235954: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235958u;
        goto label_235958;
    }
    ctx->pc = 0x235950u;
    {
        const bool branch_taken_0x235950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235950u;
            // 0x235954: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235950) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x235958u;
label_235958:
    // 0x235958: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x235958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_23595c:
    // 0x23595c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_235960:
    if (ctx->pc == 0x235960u) {
        ctx->pc = 0x235960u;
            // 0x235960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235964u;
        goto label_235964;
    }
    ctx->pc = 0x23595Cu;
    {
        const bool branch_taken_0x23595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23595Cu;
            // 0x235960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23595c) {
            ctx->pc = 0x235988u;
            goto label_235988;
        }
    }
    ctx->pc = 0x235964u;
label_235964:
    // 0x235964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235968:
    // 0x235968: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x235968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23596c:
    // 0x23596c: 0x40f809  jalr        $v0
label_235970:
    if (ctx->pc == 0x235970u) {
        ctx->pc = 0x235974u;
        goto label_235974;
    }
    ctx->pc = 0x23596Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235974u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x235974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235974u; }
            if (ctx->pc != 0x235974u) { return; }
        }
        }
    }
    ctx->pc = 0x235974u;
label_235974:
    // 0x235974: 0x10000072  b           . + 4 + (0x72 << 2)
label_235978:
    if (ctx->pc == 0x235978u) {
        ctx->pc = 0x235978u;
            // 0x235978: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23597Cu;
        goto label_23597c;
    }
    ctx->pc = 0x235974u;
    {
        const bool branch_taken_0x235974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235974u;
            // 0x235978: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235974) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x23597Cu;
label_23597c:
    // 0x23597c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x23597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_235980:
    // 0x235980: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_235984:
    if (ctx->pc == 0x235984u) {
        ctx->pc = 0x235988u;
        goto label_235988;
    }
    ctx->pc = 0x235980u;
    {
        const bool branch_taken_0x235980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x235980) {
            ctx->pc = 0x235990u;
            goto label_235990;
        }
    }
    ctx->pc = 0x235988u;
label_235988:
    // 0x235988: 0x1000006e  b           . + 4 + (0x6E << 2)
label_23598c:
    if (ctx->pc == 0x23598Cu) {
        ctx->pc = 0x23598Cu;
            // 0x23598c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->pc = 0x235990u;
        goto label_235990;
    }
    ctx->pc = 0x235988u;
    {
        const bool branch_taken_0x235988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235988u;
            // 0x23598c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235988) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x235990u;
label_235990:
    // 0x235990: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x235990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
label_235994:
    // 0x235994: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x235994u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_235998:
    // 0x235998: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x235998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23599c:
    // 0x23599c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2359a0:
    // 0x2359a0: 0x34426916  ori         $v0, $v0, 0x6916
    ctx->pc = 0x2359a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26902);
label_2359a4:
    // 0x2359a4: 0x12220033  beq         $s1, $v0, . + 4 + (0x33 << 2)
label_2359a8:
    if (ctx->pc == 0x2359A8u) {
        ctx->pc = 0x2359A8u;
            // 0x2359a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2359ACu;
        goto label_2359ac;
    }
    ctx->pc = 0x2359A4u;
    {
        const bool branch_taken_0x2359a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2359A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359A4u;
            // 0x2359a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359a4) {
            ctx->pc = 0x235A74u;
            goto label_235a74;
        }
    }
    ctx->pc = 0x2359ACu;
label_2359ac:
    // 0x2359ac: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2359acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2359b0:
    // 0x2359b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2359b4:
    if (ctx->pc == 0x2359B4u) {
        ctx->pc = 0x2359B8u;
        goto label_2359b8;
    }
    ctx->pc = 0x2359B0u;
    {
        const bool branch_taken_0x2359b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2359b0) {
            ctx->pc = 0x235A0Cu;
            goto label_235a0c;
        }
    }
    ctx->pc = 0x2359B8u;
label_2359b8:
    // 0x2359b8: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2359b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2359bc:
    // 0x2359bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2359bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2359c0:
    // 0x2359c0: 0x3442690e  ori         $v0, $v0, 0x690E
    ctx->pc = 0x2359c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26894);
label_2359c4:
    // 0x2359c4: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
label_2359c8:
    if (ctx->pc == 0x2359C8u) {
        ctx->pc = 0x2359C8u;
            // 0x2359c8: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x2359CCu;
        goto label_2359cc;
    }
    ctx->pc = 0x2359C4u;
    {
        const bool branch_taken_0x2359c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2359C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359C4u;
            // 0x2359c8: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359c4) {
            ctx->pc = 0x235A74u;
            goto label_235a74;
        }
    }
    ctx->pc = 0x2359CCu;
label_2359cc:
    // 0x2359cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2359d0:
    if (ctx->pc == 0x2359D0u) {
        ctx->pc = 0x2359D4u;
        goto label_2359d4;
    }
    ctx->pc = 0x2359CCu;
    {
        const bool branch_taken_0x2359cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2359cc) {
            ctx->pc = 0x2359F0u;
            goto label_2359f0;
        }
    }
    ctx->pc = 0x2359D4u;
label_2359d4:
    // 0x2359d4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2359d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2359d8:
    // 0x2359d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2359d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2359dc:
    // 0x2359dc: 0x3442690c  ori         $v0, $v0, 0x690C
    ctx->pc = 0x2359dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26892);
label_2359e0:
    // 0x2359e0: 0x52220025  beql        $s1, $v0, . + 4 + (0x25 << 2)
label_2359e4:
    if (ctx->pc == 0x2359E4u) {
        ctx->pc = 0x2359E4u;
            // 0x2359e4: 0x92620011  lbu         $v0, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->pc = 0x2359E8u;
        goto label_2359e8;
    }
    ctx->pc = 0x2359E0u;
    {
        const bool branch_taken_0x2359e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2359e0) {
            ctx->pc = 0x2359E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2359E0u;
            // 0x2359e4: 0x92620011  lbu         $v0, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235A78u;
            goto label_235a78;
        }
    }
    ctx->pc = 0x2359E8u;
label_2359e8:
    // 0x2359e8: 0x10000039  b           . + 4 + (0x39 << 2)
label_2359ec:
    if (ctx->pc == 0x2359ECu) {
        ctx->pc = 0x2359ECu;
            // 0x2359ec: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x2359F0u;
        goto label_2359f0;
    }
    ctx->pc = 0x2359E8u;
    {
        const bool branch_taken_0x2359e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2359E8u;
            // 0x2359ec: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359e8) {
            ctx->pc = 0x235AD0u;
            goto label_235ad0;
        }
    }
    ctx->pc = 0x2359F0u;
label_2359f0:
    // 0x2359f0: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2359f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2359f4:
    // 0x2359f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2359f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2359f8:
    // 0x2359f8: 0x34426913  ori         $v0, $v0, 0x6913
    ctx->pc = 0x2359f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26899);
label_2359fc:
    // 0x2359fc: 0x5222001e  beql        $s1, $v0, . + 4 + (0x1E << 2)
label_235a00:
    if (ctx->pc == 0x235A00u) {
        ctx->pc = 0x235A00u;
            // 0x235a00: 0x92620011  lbu         $v0, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->pc = 0x235A04u;
        goto label_235a04;
    }
    ctx->pc = 0x2359FCu;
    {
        const bool branch_taken_0x2359fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2359fc) {
            ctx->pc = 0x235A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2359FCu;
            // 0x235a00: 0x92620011  lbu         $v0, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235A78u;
            goto label_235a78;
        }
    }
    ctx->pc = 0x235A04u;
label_235a04:
    // 0x235a04: 0x10000032  b           . + 4 + (0x32 << 2)
label_235a08:
    if (ctx->pc == 0x235A08u) {
        ctx->pc = 0x235A08u;
            // 0x235a08: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x235A0Cu;
        goto label_235a0c;
    }
    ctx->pc = 0x235A04u;
    {
        const bool branch_taken_0x235a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A04u;
            // 0x235a08: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a04) {
            ctx->pc = 0x235AD0u;
            goto label_235ad0;
        }
    }
    ctx->pc = 0x235A0Cu;
label_235a0c:
    // 0x235a0c: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x235a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235a10:
    // 0x235a10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235a14:
    // 0x235a14: 0x3442690f  ori         $v0, $v0, 0x690F
    ctx->pc = 0x235a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26895);
label_235a18:
    // 0x235a18: 0x12220024  beq         $s1, $v0, . + 4 + (0x24 << 2)
label_235a1c:
    if (ctx->pc == 0x235A1Cu) {
        ctx->pc = 0x235A1Cu;
            // 0x235a1c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x235A20u;
        goto label_235a20;
    }
    ctx->pc = 0x235A18u;
    {
        const bool branch_taken_0x235a18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x235A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A18u;
            // 0x235a1c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a18) {
            ctx->pc = 0x235AACu;
            goto label_235aac;
        }
    }
    ctx->pc = 0x235A20u;
label_235a20:
    // 0x235a20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_235a24:
    if (ctx->pc == 0x235A24u) {
        ctx->pc = 0x235A28u;
        goto label_235a28;
    }
    ctx->pc = 0x235A20u;
    {
        const bool branch_taken_0x235a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235a20) {
            ctx->pc = 0x235A44u;
            goto label_235a44;
        }
    }
    ctx->pc = 0x235A28u;
label_235a28:
    // 0x235a28: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x235a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235a2c:
    // 0x235a2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235a30:
    // 0x235a30: 0x3442690d  ori         $v0, $v0, 0x690D
    ctx->pc = 0x235a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26893);
label_235a34:
    // 0x235a34: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
label_235a38:
    if (ctx->pc == 0x235A38u) {
        ctx->pc = 0x235A3Cu;
        goto label_235a3c;
    }
    ctx->pc = 0x235A34u;
    {
        const bool branch_taken_0x235a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235a34) {
            ctx->pc = 0x235AA0u;
            goto label_235aa0;
        }
    }
    ctx->pc = 0x235A3Cu;
label_235a3c:
    // 0x235a3c: 0x10000024  b           . + 4 + (0x24 << 2)
label_235a40:
    if (ctx->pc == 0x235A40u) {
        ctx->pc = 0x235A40u;
            // 0x235a40: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x235A44u;
        goto label_235a44;
    }
    ctx->pc = 0x235A3Cu;
    {
        const bool branch_taken_0x235a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A3Cu;
            // 0x235a40: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a3c) {
            ctx->pc = 0x235AD0u;
            goto label_235ad0;
        }
    }
    ctx->pc = 0x235A44u;
label_235a44:
    // 0x235a44: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x235a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235a48:
    // 0x235a48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235a4c:
    // 0x235a4c: 0x34426912  ori         $v0, $v0, 0x6912
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26898);
label_235a50:
    // 0x235a50: 0x12220019  beq         $s1, $v0, . + 4 + (0x19 << 2)
label_235a54:
    if (ctx->pc == 0x235A54u) {
        ctx->pc = 0x235A58u;
        goto label_235a58;
    }
    ctx->pc = 0x235A50u;
    {
        const bool branch_taken_0x235a50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235a50) {
            ctx->pc = 0x235AB8u;
            goto label_235ab8;
        }
    }
    ctx->pc = 0x235A58u;
label_235a58:
    // 0x235a58: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x235a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_235a5c:
    // 0x235a5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x235a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_235a60:
    // 0x235a60: 0x34426915  ori         $v0, $v0, 0x6915
    ctx->pc = 0x235a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26901);
label_235a64:
    // 0x235a64: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
label_235a68:
    if (ctx->pc == 0x235A68u) {
        ctx->pc = 0x235A6Cu;
        goto label_235a6c;
    }
    ctx->pc = 0x235A64u;
    {
        const bool branch_taken_0x235a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x235a64) {
            ctx->pc = 0x235AC4u;
            goto label_235ac4;
        }
    }
    ctx->pc = 0x235A6Cu;
label_235a6c:
    // 0x235a6c: 0x10000018  b           . + 4 + (0x18 << 2)
label_235a70:
    if (ctx->pc == 0x235A70u) {
        ctx->pc = 0x235A70u;
            // 0x235a70: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x235A74u;
        goto label_235a74;
    }
    ctx->pc = 0x235A6Cu;
    {
        const bool branch_taken_0x235a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A6Cu;
            // 0x235a70: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a6c) {
            ctx->pc = 0x235AD0u;
            goto label_235ad0;
        }
    }
    ctx->pc = 0x235A74u;
label_235a74:
    // 0x235a74: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x235a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_235a78:
    // 0x235a78: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_235a7c:
    if (ctx->pc == 0x235A7Cu) {
        ctx->pc = 0x235A7Cu;
            // 0x235a7c: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x235A80u;
        goto label_235a80;
    }
    ctx->pc = 0x235A78u;
    {
        const bool branch_taken_0x235a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235a78) {
            ctx->pc = 0x235A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235A78u;
            // 0x235a7c: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235AD0u;
            goto label_235ad0;
        }
    }
    ctx->pc = 0x235A80u;
label_235a80:
    // 0x235a80: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x235a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_235a84:
    // 0x235a84: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x235a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_235a88:
    // 0x235a88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_235a8c:
    if (ctx->pc == 0x235A8Cu) {
        ctx->pc = 0x235A8Cu;
            // 0x235a8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x235A90u;
        goto label_235a90;
    }
    ctx->pc = 0x235A88u;
    {
        const bool branch_taken_0x235a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A88u;
            // 0x235a8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a88) {
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235A90u;
label_235a90:
    // 0x235a90: 0xa2630011  sb          $v1, 0x11($s3)
    ctx->pc = 0x235a90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 3));
label_235a94:
    // 0x235a94: 0xa2620010  sb          $v0, 0x10($s3)
    ctx->pc = 0x235a94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 2));
label_235a98:
    // 0x235a98: 0x1000000c  b           . + 4 + (0xC << 2)
label_235a9c:
    if (ctx->pc == 0x235A9Cu) {
        ctx->pc = 0x235A9Cu;
            // 0x235a9c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x235AA0u;
        goto label_235aa0;
    }
    ctx->pc = 0x235A98u;
    {
        const bool branch_taken_0x235a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235A98u;
            // 0x235a9c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a98) {
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235AA0u;
label_235aa0:
    // 0x235aa0: 0x3c06c020  lui         $a2, 0xC020
    ctx->pc = 0x235aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49184 << 16));
label_235aa4:
    // 0x235aa4: 0x10000009  b           . + 4 + (0x9 << 2)
label_235aa8:
    if (ctx->pc == 0x235AA8u) {
        ctx->pc = 0x235AA8u;
            // 0x235aa8: 0x34c66921  ori         $a2, $a2, 0x6921 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26913);
        ctx->pc = 0x235AACu;
        goto label_235aac;
    }
    ctx->pc = 0x235AA4u;
    {
        const bool branch_taken_0x235aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235AA4u;
            // 0x235aa8: 0x34c66921  ori         $a2, $a2, 0x6921 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26913);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235aa4) {
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235AACu;
label_235aac:
    // 0x235aac: 0x3c06c020  lui         $a2, 0xC020
    ctx->pc = 0x235aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49184 << 16));
label_235ab0:
    // 0x235ab0: 0x10000006  b           . + 4 + (0x6 << 2)
label_235ab4:
    if (ctx->pc == 0x235AB4u) {
        ctx->pc = 0x235AB4u;
            // 0x235ab4: 0x34c66922  ori         $a2, $a2, 0x6922 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26914);
        ctx->pc = 0x235AB8u;
        goto label_235ab8;
    }
    ctx->pc = 0x235AB0u;
    {
        const bool branch_taken_0x235ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235AB0u;
            // 0x235ab4: 0x34c66922  ori         $a2, $a2, 0x6922 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26914);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ab0) {
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x3c06c020  lui         $a2, 0xC020
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49184 << 16));
label_235abc:
    // 0x235abc: 0x10000003  b           . + 4 + (0x3 << 2)
label_235ac0:
    if (ctx->pc == 0x235AC0u) {
        ctx->pc = 0x235AC0u;
            // 0x235ac0: 0x34c66923  ori         $a2, $a2, 0x6923 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26915);
        ctx->pc = 0x235AC4u;
        goto label_235ac4;
    }
    ctx->pc = 0x235ABCu;
    {
        const bool branch_taken_0x235abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235ABCu;
            // 0x235ac0: 0x34c66923  ori         $a2, $a2, 0x6923 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26915);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235abc) {
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235AC4u;
label_235ac4:
    // 0x235ac4: 0x3c06c020  lui         $a2, 0xC020
    ctx->pc = 0x235ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49184 << 16));
label_235ac8:
    // 0x235ac8: 0x34c66925  ori         $a2, $a2, 0x6925
    ctx->pc = 0x235ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26917);
label_235acc:
    // 0x235acc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x235accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_235ad0:
    // 0x235ad0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x235ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235ad4:
    // 0x235ad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235ad8:
    // 0x235ad8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_235adc:
    // 0x235adc: 0x40f809  jalr        $v0
label_235ae0:
    if (ctx->pc == 0x235AE0u) {
        ctx->pc = 0x235AE0u;
            // 0x235ae0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235AE4u;
        goto label_235ae4;
    }
    ctx->pc = 0x235ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235AE4u);
        ctx->pc = 0x235AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235ADCu;
            // 0x235ae0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235AE4u; }
            if (ctx->pc != 0x235AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x235AE4u;
label_235ae4:
    // 0x235ae4: 0x3c03c020  lui         $v1, 0xC020
    ctx->pc = 0x235ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49184 << 16));
label_235ae8:
    // 0x235ae8: 0x3463690f  ori         $v1, $v1, 0x690F
    ctx->pc = 0x235ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26895);
label_235aec:
    // 0x235aec: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
label_235af0:
    if (ctx->pc == 0x235AF0u) {
        ctx->pc = 0x235AF0u;
            // 0x235af0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235AF4u;
        goto label_235af4;
    }
    ctx->pc = 0x235AECu;
    {
        const bool branch_taken_0x235aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x235AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235AECu;
            // 0x235af0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235aec) {
            ctx->pc = 0x235B38u;
            goto label_235b38;
        }
    }
    ctx->pc = 0x235AF4u;
label_235af4:
    // 0x235af4: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x235af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_235af8:
    // 0x235af8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_235afc:
    if (ctx->pc == 0x235AFCu) {
        ctx->pc = 0x235B00u;
        goto label_235b00;
    }
    ctx->pc = 0x235AF8u;
    {
        const bool branch_taken_0x235af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235af8) {
            ctx->pc = 0x235B18u;
            goto label_235b18;
        }
    }
    ctx->pc = 0x235B00u;
label_235b00:
    // 0x235b00: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x235b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_235b04:
    // 0x235b04: 0x3442690d  ori         $v0, $v0, 0x690D
    ctx->pc = 0x235b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26893);
label_235b08:
    // 0x235b08: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_235b0c:
    if (ctx->pc == 0x235B0Cu) {
        ctx->pc = 0x235B0Cu;
            // 0x235b0c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235B10u;
        goto label_235b10;
    }
    ctx->pc = 0x235B08u;
    {
        const bool branch_taken_0x235b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B08u;
            // 0x235b0c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b08) {
            ctx->pc = 0x235B38u;
            goto label_235b38;
        }
    }
    ctx->pc = 0x235B10u;
label_235b10:
    // 0x235b10: 0x1000000d  b           . + 4 + (0xD << 2)
label_235b14:
    if (ctx->pc == 0x235B14u) {
        ctx->pc = 0x235B14u;
            // 0x235b14: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x235B18u;
        goto label_235b18;
    }
    ctx->pc = 0x235B10u;
    {
        const bool branch_taken_0x235b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B10u;
            // 0x235b14: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b10) {
            ctx->pc = 0x235B48u;
            goto label_235b48;
        }
    }
    ctx->pc = 0x235B18u;
label_235b18:
    // 0x235b18: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_235b1c:
    // 0x235b1c: 0x34426912  ori         $v0, $v0, 0x6912
    ctx->pc = 0x235b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26898);
label_235b20:
    // 0x235b20: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
label_235b24:
    if (ctx->pc == 0x235B24u) {
        ctx->pc = 0x235B24u;
            // 0x235b24: 0x92620011  lbu         $v0, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->pc = 0x235B28u;
        goto label_235b28;
    }
    ctx->pc = 0x235B20u;
    {
        const bool branch_taken_0x235b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x235b20) {
            ctx->pc = 0x235B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235B20u;
            // 0x235b24: 0x92620011  lbu         $v0, 0x11($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235B3Cu;
            goto label_235b3c;
        }
    }
    ctx->pc = 0x235B28u;
label_235b28:
    // 0x235b28: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_235b2c:
    // 0x235b2c: 0x34426915  ori         $v0, $v0, 0x6915
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26901);
label_235b30:
    // 0x235b30: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_235b34:
    if (ctx->pc == 0x235B34u) {
        ctx->pc = 0x235B34u;
            // 0x235b34: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235B38u;
        goto label_235b38;
    }
    ctx->pc = 0x235B30u;
    {
        const bool branch_taken_0x235b30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B30u;
            // 0x235b34: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b30) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x235B38u;
label_235b38:
    // 0x235b38: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x235b38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_235b3c:
    // 0x235b3c: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x235b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_235b40:
    // 0x235b40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x235b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_235b44:
    // 0x235b44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x235b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_235b48:
    // 0x235b48: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_235b4c:
    // 0x235b4c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x235b4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_235b50:
    // 0x235b50: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x235b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235b54:
    // 0x235b54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235b58:
    // 0x235b58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235b5c:
    // 0x235b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235b60:
    // 0x235b60: 0x3e00008  jr          $ra
label_235b64:
    if (ctx->pc == 0x235B64u) {
        ctx->pc = 0x235B64u;
            // 0x235b64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x235B68u;
        goto label_fallthrough_0x235b60;
    }
    ctx->pc = 0x235B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235B60u;
            // 0x235b64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x235b60:
    ctx->pc = 0x235B68u;
    ctx->pc = 0x235b68u;
}
