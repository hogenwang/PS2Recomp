#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003536A0
// Address: 0x3536a0 - 0x353c00
void sub_003536A0_0x3536a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003536A0_0x3536a0");
#endif

    switch (ctx->pc) {
        case 0x3536a0u: goto label_3536a0;
        case 0x3536a4u: goto label_3536a4;
        case 0x3536a8u: goto label_3536a8;
        case 0x3536acu: goto label_3536ac;
        case 0x3536b0u: goto label_3536b0;
        case 0x3536b4u: goto label_3536b4;
        case 0x3536b8u: goto label_3536b8;
        case 0x3536bcu: goto label_3536bc;
        case 0x3536c0u: goto label_3536c0;
        case 0x3536c4u: goto label_3536c4;
        case 0x3536c8u: goto label_3536c8;
        case 0x3536ccu: goto label_3536cc;
        case 0x3536d0u: goto label_3536d0;
        case 0x3536d4u: goto label_3536d4;
        case 0x3536d8u: goto label_3536d8;
        case 0x3536dcu: goto label_3536dc;
        case 0x3536e0u: goto label_3536e0;
        case 0x3536e4u: goto label_3536e4;
        case 0x3536e8u: goto label_3536e8;
        case 0x3536ecu: goto label_3536ec;
        case 0x3536f0u: goto label_3536f0;
        case 0x3536f4u: goto label_3536f4;
        case 0x3536f8u: goto label_3536f8;
        case 0x3536fcu: goto label_3536fc;
        case 0x353700u: goto label_353700;
        case 0x353704u: goto label_353704;
        case 0x353708u: goto label_353708;
        case 0x35370cu: goto label_35370c;
        case 0x353710u: goto label_353710;
        case 0x353714u: goto label_353714;
        case 0x353718u: goto label_353718;
        case 0x35371cu: goto label_35371c;
        case 0x353720u: goto label_353720;
        case 0x353724u: goto label_353724;
        case 0x353728u: goto label_353728;
        case 0x35372cu: goto label_35372c;
        case 0x353730u: goto label_353730;
        case 0x353734u: goto label_353734;
        case 0x353738u: goto label_353738;
        case 0x35373cu: goto label_35373c;
        case 0x353740u: goto label_353740;
        case 0x353744u: goto label_353744;
        case 0x353748u: goto label_353748;
        case 0x35374cu: goto label_35374c;
        case 0x353750u: goto label_353750;
        case 0x353754u: goto label_353754;
        case 0x353758u: goto label_353758;
        case 0x35375cu: goto label_35375c;
        case 0x353760u: goto label_353760;
        case 0x353764u: goto label_353764;
        case 0x353768u: goto label_353768;
        case 0x35376cu: goto label_35376c;
        case 0x353770u: goto label_353770;
        case 0x353774u: goto label_353774;
        case 0x353778u: goto label_353778;
        case 0x35377cu: goto label_35377c;
        case 0x353780u: goto label_353780;
        case 0x353784u: goto label_353784;
        case 0x353788u: goto label_353788;
        case 0x35378cu: goto label_35378c;
        case 0x353790u: goto label_353790;
        case 0x353794u: goto label_353794;
        case 0x353798u: goto label_353798;
        case 0x35379cu: goto label_35379c;
        case 0x3537a0u: goto label_3537a0;
        case 0x3537a4u: goto label_3537a4;
        case 0x3537a8u: goto label_3537a8;
        case 0x3537acu: goto label_3537ac;
        case 0x3537b0u: goto label_3537b0;
        case 0x3537b4u: goto label_3537b4;
        case 0x3537b8u: goto label_3537b8;
        case 0x3537bcu: goto label_3537bc;
        case 0x3537c0u: goto label_3537c0;
        case 0x3537c4u: goto label_3537c4;
        case 0x3537c8u: goto label_3537c8;
        case 0x3537ccu: goto label_3537cc;
        case 0x3537d0u: goto label_3537d0;
        case 0x3537d4u: goto label_3537d4;
        case 0x3537d8u: goto label_3537d8;
        case 0x3537dcu: goto label_3537dc;
        case 0x3537e0u: goto label_3537e0;
        case 0x3537e4u: goto label_3537e4;
        case 0x3537e8u: goto label_3537e8;
        case 0x3537ecu: goto label_3537ec;
        case 0x3537f0u: goto label_3537f0;
        case 0x3537f4u: goto label_3537f4;
        case 0x3537f8u: goto label_3537f8;
        case 0x3537fcu: goto label_3537fc;
        case 0x353800u: goto label_353800;
        case 0x353804u: goto label_353804;
        case 0x353808u: goto label_353808;
        case 0x35380cu: goto label_35380c;
        case 0x353810u: goto label_353810;
        case 0x353814u: goto label_353814;
        case 0x353818u: goto label_353818;
        case 0x35381cu: goto label_35381c;
        case 0x353820u: goto label_353820;
        case 0x353824u: goto label_353824;
        case 0x353828u: goto label_353828;
        case 0x35382cu: goto label_35382c;
        case 0x353830u: goto label_353830;
        case 0x353834u: goto label_353834;
        case 0x353838u: goto label_353838;
        case 0x35383cu: goto label_35383c;
        case 0x353840u: goto label_353840;
        case 0x353844u: goto label_353844;
        case 0x353848u: goto label_353848;
        case 0x35384cu: goto label_35384c;
        case 0x353850u: goto label_353850;
        case 0x353854u: goto label_353854;
        case 0x353858u: goto label_353858;
        case 0x35385cu: goto label_35385c;
        case 0x353860u: goto label_353860;
        case 0x353864u: goto label_353864;
        case 0x353868u: goto label_353868;
        case 0x35386cu: goto label_35386c;
        case 0x353870u: goto label_353870;
        case 0x353874u: goto label_353874;
        case 0x353878u: goto label_353878;
        case 0x35387cu: goto label_35387c;
        case 0x353880u: goto label_353880;
        case 0x353884u: goto label_353884;
        case 0x353888u: goto label_353888;
        case 0x35388cu: goto label_35388c;
        case 0x353890u: goto label_353890;
        case 0x353894u: goto label_353894;
        case 0x353898u: goto label_353898;
        case 0x35389cu: goto label_35389c;
        case 0x3538a0u: goto label_3538a0;
        case 0x3538a4u: goto label_3538a4;
        case 0x3538a8u: goto label_3538a8;
        case 0x3538acu: goto label_3538ac;
        case 0x3538b0u: goto label_3538b0;
        case 0x3538b4u: goto label_3538b4;
        case 0x3538b8u: goto label_3538b8;
        case 0x3538bcu: goto label_3538bc;
        case 0x3538c0u: goto label_3538c0;
        case 0x3538c4u: goto label_3538c4;
        case 0x3538c8u: goto label_3538c8;
        case 0x3538ccu: goto label_3538cc;
        case 0x3538d0u: goto label_3538d0;
        case 0x3538d4u: goto label_3538d4;
        case 0x3538d8u: goto label_3538d8;
        case 0x3538dcu: goto label_3538dc;
        case 0x3538e0u: goto label_3538e0;
        case 0x3538e4u: goto label_3538e4;
        case 0x3538e8u: goto label_3538e8;
        case 0x3538ecu: goto label_3538ec;
        case 0x3538f0u: goto label_3538f0;
        case 0x3538f4u: goto label_3538f4;
        case 0x3538f8u: goto label_3538f8;
        case 0x3538fcu: goto label_3538fc;
        case 0x353900u: goto label_353900;
        case 0x353904u: goto label_353904;
        case 0x353908u: goto label_353908;
        case 0x35390cu: goto label_35390c;
        case 0x353910u: goto label_353910;
        case 0x353914u: goto label_353914;
        case 0x353918u: goto label_353918;
        case 0x35391cu: goto label_35391c;
        case 0x353920u: goto label_353920;
        case 0x353924u: goto label_353924;
        case 0x353928u: goto label_353928;
        case 0x35392cu: goto label_35392c;
        case 0x353930u: goto label_353930;
        case 0x353934u: goto label_353934;
        case 0x353938u: goto label_353938;
        case 0x35393cu: goto label_35393c;
        case 0x353940u: goto label_353940;
        case 0x353944u: goto label_353944;
        case 0x353948u: goto label_353948;
        case 0x35394cu: goto label_35394c;
        case 0x353950u: goto label_353950;
        case 0x353954u: goto label_353954;
        case 0x353958u: goto label_353958;
        case 0x35395cu: goto label_35395c;
        case 0x353960u: goto label_353960;
        case 0x353964u: goto label_353964;
        case 0x353968u: goto label_353968;
        case 0x35396cu: goto label_35396c;
        case 0x353970u: goto label_353970;
        case 0x353974u: goto label_353974;
        case 0x353978u: goto label_353978;
        case 0x35397cu: goto label_35397c;
        case 0x353980u: goto label_353980;
        case 0x353984u: goto label_353984;
        case 0x353988u: goto label_353988;
        case 0x35398cu: goto label_35398c;
        case 0x353990u: goto label_353990;
        case 0x353994u: goto label_353994;
        case 0x353998u: goto label_353998;
        case 0x35399cu: goto label_35399c;
        case 0x3539a0u: goto label_3539a0;
        case 0x3539a4u: goto label_3539a4;
        case 0x3539a8u: goto label_3539a8;
        case 0x3539acu: goto label_3539ac;
        case 0x3539b0u: goto label_3539b0;
        case 0x3539b4u: goto label_3539b4;
        case 0x3539b8u: goto label_3539b8;
        case 0x3539bcu: goto label_3539bc;
        case 0x3539c0u: goto label_3539c0;
        case 0x3539c4u: goto label_3539c4;
        case 0x3539c8u: goto label_3539c8;
        case 0x3539ccu: goto label_3539cc;
        case 0x3539d0u: goto label_3539d0;
        case 0x3539d4u: goto label_3539d4;
        case 0x3539d8u: goto label_3539d8;
        case 0x3539dcu: goto label_3539dc;
        case 0x3539e0u: goto label_3539e0;
        case 0x3539e4u: goto label_3539e4;
        case 0x3539e8u: goto label_3539e8;
        case 0x3539ecu: goto label_3539ec;
        case 0x3539f0u: goto label_3539f0;
        case 0x3539f4u: goto label_3539f4;
        case 0x3539f8u: goto label_3539f8;
        case 0x3539fcu: goto label_3539fc;
        case 0x353a00u: goto label_353a00;
        case 0x353a04u: goto label_353a04;
        case 0x353a08u: goto label_353a08;
        case 0x353a0cu: goto label_353a0c;
        case 0x353a10u: goto label_353a10;
        case 0x353a14u: goto label_353a14;
        case 0x353a18u: goto label_353a18;
        case 0x353a1cu: goto label_353a1c;
        case 0x353a20u: goto label_353a20;
        case 0x353a24u: goto label_353a24;
        case 0x353a28u: goto label_353a28;
        case 0x353a2cu: goto label_353a2c;
        case 0x353a30u: goto label_353a30;
        case 0x353a34u: goto label_353a34;
        case 0x353a38u: goto label_353a38;
        case 0x353a3cu: goto label_353a3c;
        case 0x353a40u: goto label_353a40;
        case 0x353a44u: goto label_353a44;
        case 0x353a48u: goto label_353a48;
        case 0x353a4cu: goto label_353a4c;
        case 0x353a50u: goto label_353a50;
        case 0x353a54u: goto label_353a54;
        case 0x353a58u: goto label_353a58;
        case 0x353a5cu: goto label_353a5c;
        case 0x353a60u: goto label_353a60;
        case 0x353a64u: goto label_353a64;
        case 0x353a68u: goto label_353a68;
        case 0x353a6cu: goto label_353a6c;
        case 0x353a70u: goto label_353a70;
        case 0x353a74u: goto label_353a74;
        case 0x353a78u: goto label_353a78;
        case 0x353a7cu: goto label_353a7c;
        case 0x353a80u: goto label_353a80;
        case 0x353a84u: goto label_353a84;
        case 0x353a88u: goto label_353a88;
        case 0x353a8cu: goto label_353a8c;
        case 0x353a90u: goto label_353a90;
        case 0x353a94u: goto label_353a94;
        case 0x353a98u: goto label_353a98;
        case 0x353a9cu: goto label_353a9c;
        case 0x353aa0u: goto label_353aa0;
        case 0x353aa4u: goto label_353aa4;
        case 0x353aa8u: goto label_353aa8;
        case 0x353aacu: goto label_353aac;
        case 0x353ab0u: goto label_353ab0;
        case 0x353ab4u: goto label_353ab4;
        case 0x353ab8u: goto label_353ab8;
        case 0x353abcu: goto label_353abc;
        case 0x353ac0u: goto label_353ac0;
        case 0x353ac4u: goto label_353ac4;
        case 0x353ac8u: goto label_353ac8;
        case 0x353accu: goto label_353acc;
        case 0x353ad0u: goto label_353ad0;
        case 0x353ad4u: goto label_353ad4;
        case 0x353ad8u: goto label_353ad8;
        case 0x353adcu: goto label_353adc;
        case 0x353ae0u: goto label_353ae0;
        case 0x353ae4u: goto label_353ae4;
        case 0x353ae8u: goto label_353ae8;
        case 0x353aecu: goto label_353aec;
        case 0x353af0u: goto label_353af0;
        case 0x353af4u: goto label_353af4;
        case 0x353af8u: goto label_353af8;
        case 0x353afcu: goto label_353afc;
        case 0x353b00u: goto label_353b00;
        case 0x353b04u: goto label_353b04;
        case 0x353b08u: goto label_353b08;
        case 0x353b0cu: goto label_353b0c;
        case 0x353b10u: goto label_353b10;
        case 0x353b14u: goto label_353b14;
        case 0x353b18u: goto label_353b18;
        case 0x353b1cu: goto label_353b1c;
        case 0x353b20u: goto label_353b20;
        case 0x353b24u: goto label_353b24;
        case 0x353b28u: goto label_353b28;
        case 0x353b2cu: goto label_353b2c;
        case 0x353b30u: goto label_353b30;
        case 0x353b34u: goto label_353b34;
        case 0x353b38u: goto label_353b38;
        case 0x353b3cu: goto label_353b3c;
        case 0x353b40u: goto label_353b40;
        case 0x353b44u: goto label_353b44;
        case 0x353b48u: goto label_353b48;
        case 0x353b4cu: goto label_353b4c;
        case 0x353b50u: goto label_353b50;
        case 0x353b54u: goto label_353b54;
        case 0x353b58u: goto label_353b58;
        case 0x353b5cu: goto label_353b5c;
        case 0x353b60u: goto label_353b60;
        case 0x353b64u: goto label_353b64;
        case 0x353b68u: goto label_353b68;
        case 0x353b6cu: goto label_353b6c;
        case 0x353b70u: goto label_353b70;
        case 0x353b74u: goto label_353b74;
        case 0x353b78u: goto label_353b78;
        case 0x353b7cu: goto label_353b7c;
        case 0x353b80u: goto label_353b80;
        case 0x353b84u: goto label_353b84;
        case 0x353b88u: goto label_353b88;
        case 0x353b8cu: goto label_353b8c;
        case 0x353b90u: goto label_353b90;
        case 0x353b94u: goto label_353b94;
        case 0x353b98u: goto label_353b98;
        case 0x353b9cu: goto label_353b9c;
        case 0x353ba0u: goto label_353ba0;
        case 0x353ba4u: goto label_353ba4;
        case 0x353ba8u: goto label_353ba8;
        case 0x353bacu: goto label_353bac;
        case 0x353bb0u: goto label_353bb0;
        case 0x353bb4u: goto label_353bb4;
        case 0x353bb8u: goto label_353bb8;
        case 0x353bbcu: goto label_353bbc;
        case 0x353bc0u: goto label_353bc0;
        case 0x353bc4u: goto label_353bc4;
        case 0x353bc8u: goto label_353bc8;
        case 0x353bccu: goto label_353bcc;
        case 0x353bd0u: goto label_353bd0;
        case 0x353bd4u: goto label_353bd4;
        case 0x353bd8u: goto label_353bd8;
        case 0x353bdcu: goto label_353bdc;
        case 0x353be0u: goto label_353be0;
        case 0x353be4u: goto label_353be4;
        case 0x353be8u: goto label_353be8;
        case 0x353becu: goto label_353bec;
        case 0x353bf0u: goto label_353bf0;
        case 0x353bf4u: goto label_353bf4;
        case 0x353bf8u: goto label_353bf8;
        case 0x353bfcu: goto label_353bfc;
        default: break;
    }

    ctx->pc = 0x3536a0u;

label_3536a0:
    // 0x3536a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3536a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3536a4:
    // 0x3536a4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536a8:
    // 0x3536a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3536a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3536ac:
    // 0x3536ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3536acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_3536b0:
    // 0x3536b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3536b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3536b4:
    // 0x3536b4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3536b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_3536b8:
    // 0x3536b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3536b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3536bc:
    // 0x3536bc: 0xa040bed1  sb          $zero, -0x412F($v0)
    ctx->pc = 0x3536bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950609), (uint8_t)GPR_U32(ctx, 0));
label_3536c0:
    // 0x3536c0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536c4:
    // 0x3536c4: 0xa040bed2  sb          $zero, -0x412E($v0)
    ctx->pc = 0x3536c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 0));
label_3536c8:
    // 0x3536c8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536cc:
    // 0x3536cc: 0xa040bed8  sb          $zero, -0x4128($v0)
    ctx->pc = 0x3536ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950616), (uint8_t)GPR_U32(ctx, 0));
label_3536d0:
    // 0x3536d0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536d4:
    // 0x3536d4: 0xa040bed9  sb          $zero, -0x4127($v0)
    ctx->pc = 0x3536d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 0));
label_3536d8:
    // 0x3536d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536dc:
    // 0x3536dc: 0xac40bed4  sw          $zero, -0x412C($v0)
    ctx->pc = 0x3536dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950612), GPR_U32(ctx, 0));
label_3536e0:
    // 0x3536e0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536e4:
    // 0x3536e4: 0xa040beda  sb          $zero, -0x4126($v0)
    ctx->pc = 0x3536e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 0));
label_3536e8:
    // 0x3536e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536ec:
    // 0x3536ec: 0xac40bedc  sw          $zero, -0x4124($v0)
    ctx->pc = 0x3536ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 0));
label_3536f0:
    // 0x3536f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536f4:
    // 0x3536f4: 0xac40bee0  sw          $zero, -0x4120($v0)
    ctx->pc = 0x3536f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950624), GPR_U32(ctx, 0));
label_3536f8:
    // 0x3536f8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3536f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3536fc:
    // 0x3536fc: 0xac40bee4  sw          $zero, -0x411C($v0)
    ctx->pc = 0x3536fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950628), GPR_U32(ctx, 0));
label_353700:
    // 0x353700: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353704:
    // 0x353704: 0xac40bee8  sw          $zero, -0x4118($v0)
    ctx->pc = 0x353704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 0));
label_353708:
    // 0x353708: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35370c:
    // 0x35370c: 0xac40beec  sw          $zero, -0x4114($v0)
    ctx->pc = 0x35370cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950636), GPR_U32(ctx, 0));
label_353710:
    // 0x353710: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353714:
    // 0x353714: 0xac40bef0  sw          $zero, -0x4110($v0)
    ctx->pc = 0x353714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950640), GPR_U32(ctx, 0));
label_353718:
    // 0x353718: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35371c:
    // 0x35371c: 0xac40bef4  sw          $zero, -0x410C($v0)
    ctx->pc = 0x35371cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 0));
label_353720:
    // 0x353720: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353724:
    // 0x353724: 0xac40bef8  sw          $zero, -0x4108($v0)
    ctx->pc = 0x353724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950648), GPR_U32(ctx, 0));
label_353728:
    // 0x353728: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35372c:
    // 0x35372c: 0xa440bf02  sh          $zero, -0x40FE($v0)
    ctx->pc = 0x35372cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 0));
label_353730:
    // 0x353730: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353734:
    // 0x353734: 0xa040bedb  sb          $zero, -0x4125($v0)
    ctx->pc = 0x353734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950619), (uint8_t)GPR_U32(ctx, 0));
label_353738:
    // 0x353738: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35373c:
    // 0x35373c: 0xa040bf14  sb          $zero, -0x40EC($v0)
    ctx->pc = 0x35373cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 0));
label_353740:
    // 0x353740: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353744:
    // 0x353744: 0x9046bf04  lbu         $a2, -0x40FC($v0)
    ctx->pc = 0x353744u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950660)));
label_353748:
    // 0x353748: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35374c:
    // 0x35374c: 0xa066db78  sb          $a2, -0x2488($v1)
    ctx->pc = 0x35374cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957944), (uint8_t)GPR_U32(ctx, 6));
label_353750:
    // 0x353750: 0x9045bf07  lbu         $a1, -0x40F9($v0)
    ctx->pc = 0x353750u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950663)));
label_353754:
    // 0x353754: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353758:
    // 0x353758: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35375c:
    // 0x35375c: 0xa085ddc0  sb          $a1, -0x2240($a0)
    ctx->pc = 0x35375cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294958528), (uint8_t)GPR_U32(ctx, 5));
label_353760:
    // 0x353760: 0x9046bf05  lbu         $a2, -0x40FB($v0)
    ctx->pc = 0x353760u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950661)));
label_353764:
    // 0x353764: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x353764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_353768:
    // 0x353768: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x353768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
label_35376c:
    // 0x35376c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353770:
    // 0x353770: 0xa066db79  sb          $a2, -0x2487($v1)
    ctx->pc = 0x353770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957945), (uint8_t)GPR_U32(ctx, 6));
label_353774:
    // 0x353774: 0x9047bf08  lbu         $a3, -0x40F8($v0)
    ctx->pc = 0x353774u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950664)));
label_353778:
    // 0x353778: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_35377c:
    // 0x35377c: 0x9063bf09  lbu         $v1, -0x40F7($v1)
    ctx->pc = 0x35377cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950665)));
label_353780:
    // 0x353780: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353784:
    // 0x353784: 0xa0a7ddc1  sb          $a3, -0x223F($a1)
    ctx->pc = 0x353784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294958529), (uint8_t)GPR_U32(ctx, 7));
label_353788:
    // 0x353788: 0x9046bf06  lbu         $a2, -0x40FA($v0)
    ctx->pc = 0x353788u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950662)));
label_35378c:
    // 0x35378c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35378cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353790:
    // 0x353790: 0xa086db7a  sb          $a2, -0x2486($a0)
    ctx->pc = 0x353790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957946), (uint8_t)GPR_U32(ctx, 6));
label_353794:
    // 0x353794: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x353794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_353798:
    // 0x353798: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x353798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_35379c:
    // 0x35379c: 0xa043ddc2  sb          $v1, -0x223E($v0)
    ctx->pc = 0x35379cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958530), (uint8_t)GPR_U32(ctx, 3));
label_3537a0:
    // 0x3537a0: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x3537a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
label_3537a4:
    // 0x3537a4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3537a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3537a8:
    // 0x3537a8: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x3537a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
label_3537ac:
    // 0x3537ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3537b0:
    // 0x3537b0: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x3537b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_3537b4:
    // 0x3537b4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3537b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_3537b8:
    // 0x3537b8: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x3537b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
label_3537bc:
    // 0x3537bc: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x3537bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
label_3537c0:
    // 0x3537c0: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x3537c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
label_3537c4:
    // 0x3537c4: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x3537c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
label_3537c8:
    // 0x3537c8: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x3537c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
label_3537cc:
    // 0x3537cc: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x3537ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
label_3537d0:
    // 0x3537d0: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x3537d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
label_3537d4:
    // 0x3537d4: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x3537d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
label_3537d8:
    // 0x3537d8: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x3537d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
label_3537dc:
    // 0x3537dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3537e0:
    if (ctx->pc == 0x3537E0u) {
        ctx->pc = 0x3537E0u;
            // 0x3537e0: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->pc = 0x3537E4u;
        goto label_3537e4;
    }
    ctx->pc = 0x3537DCu;
    {
        const bool branch_taken_0x3537dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3537E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3537DCu;
            // 0x3537e0: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537dc) {
            ctx->pc = 0x3537A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3537a8;
        }
    }
    ctx->pc = 0x3537E4u;
label_3537e4:
    // 0x3537e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3537e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3537e8:
    // 0x3537e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3537e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_3537ec:
    // 0x3537ec: 0x8051bf15  lb          $s1, -0x40EB($v0)
    ctx->pc = 0x3537ecu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950677)));
label_3537f0:
    // 0x3537f0: 0x8070bf16  lb          $s0, -0x40EA($v1)
    ctx->pc = 0x3537f0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950678)));
label_3537f4:
    // 0x3537f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3537f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3537f8:
    // 0x3537f8: 0x8044bed0  lb          $a0, -0x4130($v0)
    ctx->pc = 0x3537f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
label_3537fc:
    // 0x3537fc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3537fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_353800:
    // 0x353800: 0x24639870  addiu       $v1, $v1, -0x6790
    ctx->pc = 0x353800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940784));
label_353804:
    // 0x353804: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x353804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_353808:
    // 0x353808: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35380c:
    // 0x35380c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353810:
    // 0x353810: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353814:
    // 0x353814: 0x60f809  jalr        $v1
label_353818:
    if (ctx->pc == 0x353818u) {
        ctx->pc = 0x353818u;
            // 0x353818: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->pc = 0x35381Cu;
        goto label_35381c;
    }
    ctx->pc = 0x353814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35381Cu);
        ctx->pc = 0x353818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353814u;
            // 0x353818: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35381Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35381Cu; }
            if (ctx->pc != 0x35381Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35381Cu;
label_35381c:
    // 0x35381c: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x35381cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
label_353820:
    // 0x353820: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x353820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
label_353824:
    // 0x353824: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x353824u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_353828:
    // 0x353828: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x353828u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_35382c:
    // 0x35382c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x35382cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_353830:
    // 0x353830: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_353834:
    if (ctx->pc == 0x353834u) {
        ctx->pc = 0x353838u;
        goto label_353838;
    }
    ctx->pc = 0x353830u;
    {
        const bool branch_taken_0x353830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353830) {
            ctx->pc = 0x353850u;
            goto label_353850;
        }
    }
    ctx->pc = 0x353838u;
label_353838:
    // 0x353838: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_35383c:
    if (ctx->pc == 0x35383Cu) {
        ctx->pc = 0x353840u;
        goto label_353840;
    }
    ctx->pc = 0x353838u;
    {
        const bool branch_taken_0x353838 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x353838) {
            ctx->pc = 0x353864u;
            goto label_353864;
        }
    }
    ctx->pc = 0x353840u;
label_353840:
    // 0x353840: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x353840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_353844:
    // 0x353844: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x353844u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_353848:
    // 0x353848: 0x10000006  b           . + 4 + (0x6 << 2)
label_35384c:
    if (ctx->pc == 0x35384Cu) {
        ctx->pc = 0x35384Cu;
            // 0x35384c: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->pc = 0x353850u;
        goto label_353850;
    }
    ctx->pc = 0x353848u;
    {
        const bool branch_taken_0x353848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353848u;
            // 0x35384c: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353848) {
            ctx->pc = 0x353864u;
            goto label_353864;
        }
    }
    ctx->pc = 0x353850u;
label_353850:
    // 0x353850: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
label_353854:
    if (ctx->pc == 0x353854u) {
        ctx->pc = 0x353858u;
        goto label_353858;
    }
    ctx->pc = 0x353850u;
    {
        const bool branch_taken_0x353850 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x353850) {
            ctx->pc = 0x353864u;
            goto label_353864;
        }
    }
    ctx->pc = 0x353858u;
label_353858:
    // 0x353858: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_35385c:
    // 0x35385c: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x35385cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_353860:
    // 0x353860: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x353860u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_353864:
    // 0x353864: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_353868:
    // 0x353868: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35386c:
    // 0x35386c: 0xa071bf15  sb          $s1, -0x40EB($v1)
    ctx->pc = 0x35386cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950677), (uint8_t)GPR_U32(ctx, 17));
label_353870:
    // 0x353870: 0xc0d4884  jal         func_352210
label_353874:
    if (ctx->pc == 0x353874u) {
        ctx->pc = 0x353874u;
            // 0x353874: 0xa050bf16  sb          $s0, -0x40EA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x353878u;
        goto label_353878;
    }
    ctx->pc = 0x353870u;
    SET_GPR_U32(ctx, 31, 0x353878u);
    ctx->pc = 0x353874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353870u;
            // 0x353874: 0xa050bf16  sb          $s0, -0x40EA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352210u;
    if (runtime->hasFunction(0x352210u)) {
        auto targetFn = runtime->lookupFunction(0x352210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353878u; }
        if (ctx->pc != 0x353878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352210_0x352210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353878u; }
        if (ctx->pc != 0x353878u) { return; }
    }
    ctx->pc = 0x353878u;
label_353878:
    // 0x353878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35387c:
    // 0x35387c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35387cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353880:
    // 0x353880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353884:
    // 0x353884: 0x3e00008  jr          $ra
label_353888:
    if (ctx->pc == 0x353888u) {
        ctx->pc = 0x353888u;
            // 0x353888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35388Cu;
        goto label_35388c;
    }
    ctx->pc = 0x353884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353884u;
            // 0x353888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35388Cu;
label_35388c:
    // 0x35388c: 0x0  nop
    ctx->pc = 0x35388cu;
    // NOP
label_353890:
    // 0x353890: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x353890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_353894:
    // 0x353894: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_353898:
    // 0x353898: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x353898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_35389c:
    // 0x35389c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x35389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3538a0:
    // 0x3538a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3538a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3538a4:
    // 0x3538a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3538a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3538a8:
    // 0x3538a8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3538a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3538ac:
    // 0x3538ac: 0x9042e810  lbu         $v0, -0x17F0($v0)
    ctx->pc = 0x3538acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961168)));
label_3538b0:
    // 0x3538b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3538b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3538b4:
    // 0x3538b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3538b8:
    if (ctx->pc == 0x3538B8u) {
        ctx->pc = 0x3538B8u;
            // 0x3538b8: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x3538BCu;
        goto label_3538bc;
    }
    ctx->pc = 0x3538B4u;
    {
        const bool branch_taken_0x3538b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538b4) {
            ctx->pc = 0x3538B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3538B4u;
            // 0x3538b8: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3538CCu;
            goto label_3538cc;
        }
    }
    ctx->pc = 0x3538BCu;
label_3538bc:
    // 0x3538bc: 0xc055728  jal         func_155CA0
label_3538c0:
    if (ctx->pc == 0x3538C0u) {
        ctx->pc = 0x3538C4u;
        goto label_3538c4;
    }
    ctx->pc = 0x3538BCu;
    SET_GPR_U32(ctx, 31, 0x3538C4u);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3538C4u; }
        if (ctx->pc != 0x3538C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3538C4u; }
        if (ctx->pc != 0x3538C4u) { return; }
    }
    ctx->pc = 0x3538C4u;
label_3538c4:
    // 0x3538c4: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_3538c8:
    if (ctx->pc == 0x3538C8u) {
        ctx->pc = 0x3538C8u;
            // 0x3538c8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3538CCu;
        goto label_3538cc;
    }
    ctx->pc = 0x3538C4u;
    {
        const bool branch_taken_0x3538c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3538C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3538C4u;
            // 0x3538c8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538c4) {
            ctx->pc = 0x353BE0u;
            goto label_353be0;
        }
    }
    ctx->pc = 0x3538CCu;
label_3538cc:
    // 0x3538cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3538ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3538d0:
    // 0x3538d0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3538d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3538d4:
    // 0x3538d4: 0x5062005b  beql        $v1, $v0, . + 4 + (0x5B << 2)
label_3538d8:
    if (ctx->pc == 0x3538D8u) {
        ctx->pc = 0x3538D8u;
            // 0x3538d8: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3538DCu;
        goto label_3538dc;
    }
    ctx->pc = 0x3538D4u;
    {
        const bool branch_taken_0x3538d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3538d4) {
            ctx->pc = 0x3538D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3538D4u;
            // 0x3538d8: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353A44u;
            goto label_353a44;
        }
    }
    ctx->pc = 0x3538DCu;
label_3538dc:
    // 0x3538dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3538dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3538e0:
    // 0x3538e0: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
label_3538e4:
    if (ctx->pc == 0x3538E4u) {
        ctx->pc = 0x3538E4u;
            // 0x3538e4: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3538E8u;
        goto label_3538e8;
    }
    ctx->pc = 0x3538E0u;
    {
        const bool branch_taken_0x3538e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3538e0) {
            ctx->pc = 0x3538E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3538E0u;
            // 0x3538e4: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35397Cu;
            goto label_35397c;
        }
    }
    ctx->pc = 0x3538E8u;
label_3538e8:
    // 0x3538e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3538ec:
    if (ctx->pc == 0x3538ECu) {
        ctx->pc = 0x3538F0u;
        goto label_3538f0;
    }
    ctx->pc = 0x3538E8u;
    {
        const bool branch_taken_0x3538e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538e8) {
            ctx->pc = 0x3538F8u;
            goto label_3538f8;
        }
    }
    ctx->pc = 0x3538F0u;
label_3538f0:
    // 0x3538f0: 0x10000061  b           . + 4 + (0x61 << 2)
label_3538f4:
    if (ctx->pc == 0x3538F4u) {
        ctx->pc = 0x3538F8u;
        goto label_3538f8;
    }
    ctx->pc = 0x3538F0u;
    {
        const bool branch_taken_0x3538f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538f0) {
            ctx->pc = 0x353A78u;
            goto label_353a78;
        }
    }
    ctx->pc = 0x3538F8u;
label_3538f8:
    // 0x3538f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3538f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3538fc:
    // 0x3538fc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3538fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_353900:
    // 0x353900: 0x8c48e7e0  lw          $t0, -0x1820($v0)
    ctx->pc = 0x353900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
label_353904:
    // 0x353904: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x353904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_353908:
    // 0x353908: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x353908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_35390c:
    // 0x35390c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x35390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_353910:
    // 0x353910: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x353910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_353914:
    // 0x353914: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x353914u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
label_353918:
    // 0x353918: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_35391c:
    // 0x35391c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_353920:
    if (ctx->pc == 0x353920u) {
        ctx->pc = 0x353920u;
            // 0x353920: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->pc = 0x353924u;
        goto label_353924;
    }
    ctx->pc = 0x35391Cu;
    {
        const bool branch_taken_0x35391c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x353920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35391Cu;
            // 0x353920: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35391c) {
            ctx->pc = 0x35392Cu;
            goto label_35392c;
        }
    }
    ctx->pc = 0x353924u;
label_353924:
    // 0x353924: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x353924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_353928:
    // 0x353928: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x353928u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_35392c:
    // 0x35392c: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x35392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_353930:
    // 0x353930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353934:
    // 0x353934: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x353934u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_353938:
    // 0x353938: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x353938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
label_35393c:
    // 0x35393c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x35393cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_353940:
    // 0x353940: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353944:
    // 0x353944: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353948:
    // 0x353948: 0xc0c0ba8  jal         func_302EA0
label_35394c:
    if (ctx->pc == 0x35394Cu) {
        ctx->pc = 0x35394Cu;
            // 0x35394c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x353950u;
        goto label_353950;
    }
    ctx->pc = 0x353948u;
    SET_GPR_U32(ctx, 31, 0x353950u);
    ctx->pc = 0x35394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353948u;
            // 0x35394c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353950u; }
        if (ctx->pc != 0x353950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353950u; }
        if (ctx->pc != 0x353950u) { return; }
    }
    ctx->pc = 0x353950u;
label_353950:
    // 0x353950: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x353950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_353954:
    // 0x353954: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_353958:
    // 0x353958: 0x8c63e7e0  lw          $v1, -0x1820($v1)
    ctx->pc = 0x353958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961120)));
label_35395c:
    // 0x35395c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x35395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_353960:
    // 0x353960: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x353960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
label_353964:
    // 0x353964: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
label_353968:
    if (ctx->pc == 0x353968u) {
        ctx->pc = 0x353968u;
            // 0x353968: 0xac43e7e0  sw          $v1, -0x1820($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961120), GPR_U32(ctx, 3));
        ctx->pc = 0x35396Cu;
        goto label_35396c;
    }
    ctx->pc = 0x353964u;
    {
        const bool branch_taken_0x353964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x353968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353964u;
            // 0x353968: 0xac43e7e0  sw          $v1, -0x1820($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353964) {
            ctx->pc = 0x353A78u;
            goto label_353a78;
        }
    }
    ctx->pc = 0x35396Cu;
label_35396c:
    // 0x35396c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x35396cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_353970:
    // 0x353970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_353974:
    // 0x353974: 0x10000040  b           . + 4 + (0x40 << 2)
label_353978:
    if (ctx->pc == 0x353978u) {
        ctx->pc = 0x353978u;
            // 0x353978: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x35397Cu;
        goto label_35397c;
    }
    ctx->pc = 0x353974u;
    {
        const bool branch_taken_0x353974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353974u;
            // 0x353978: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353974) {
            ctx->pc = 0x353A78u;
            goto label_353a78;
        }
    }
    ctx->pc = 0x35397Cu;
label_35397c:
    // 0x35397c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x35397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_353980:
    // 0x353980: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x353980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_353984:
    // 0x353984: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x353984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_353988:
    // 0x353988: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x353988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_35398c:
    // 0x35398c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353990:
    // 0x353990: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_353994:
    // 0x353994: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x353994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
label_353998:
    // 0x353998: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x353998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_35399c:
    // 0x35399c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x35399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_3539a0:
    // 0x3539a0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3539a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3539a4:
    // 0x3539a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3539a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3539a8:
    // 0x3539a8: 0xc0c0ba8  jal         func_302EA0
label_3539ac:
    if (ctx->pc == 0x3539ACu) {
        ctx->pc = 0x3539ACu;
            // 0x3539ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3539B0u;
        goto label_3539b0;
    }
    ctx->pc = 0x3539A8u;
    SET_GPR_U32(ctx, 31, 0x3539B0u);
    ctx->pc = 0x3539ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3539A8u;
            // 0x3539ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3539B0u; }
        if (ctx->pc != 0x3539B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3539B0u; }
        if (ctx->pc != 0x3539B0u) { return; }
    }
    ctx->pc = 0x3539B0u;
label_3539b0:
    // 0x3539b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3539b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3539b4:
    // 0x3539b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3539b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3539b8:
    // 0x3539b8: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x3539b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
label_3539bc:
    // 0x3539bc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3539c0:
    if (ctx->pc == 0x3539C0u) {
        ctx->pc = 0x3539C0u;
            // 0x3539c0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x3539C4u;
        goto label_3539c4;
    }
    ctx->pc = 0x3539BCu;
    {
        const bool branch_taken_0x3539bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3539C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3539BCu;
            // 0x3539c0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3539bc) {
            ctx->pc = 0x3539E0u;
            goto label_3539e0;
        }
    }
    ctx->pc = 0x3539C4u;
label_3539c4:
    // 0x3539c4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3539c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3539c8:
    // 0x3539c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3539c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3539cc:
    // 0x3539cc: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x3539ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
label_3539d0:
    // 0x3539d0: 0xc068d08  jal         func_1A3420
label_3539d4:
    if (ctx->pc == 0x3539D4u) {
        ctx->pc = 0x3539D4u;
            // 0x3539d4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x3539D8u;
        goto label_3539d8;
    }
    ctx->pc = 0x3539D0u;
    SET_GPR_U32(ctx, 31, 0x3539D8u);
    ctx->pc = 0x3539D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3539D0u;
            // 0x3539d4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3539D8u; }
        if (ctx->pc != 0x3539D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3539D8u; }
        if (ctx->pc != 0x3539D8u) { return; }
    }
    ctx->pc = 0x3539D8u;
label_3539d8:
    // 0x3539d8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3539dc:
    if (ctx->pc == 0x3539DCu) {
        ctx->pc = 0x3539E0u;
        goto label_3539e0;
    }
    ctx->pc = 0x3539D8u;
    {
        const bool branch_taken_0x3539d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3539d8) {
            ctx->pc = 0x353A78u;
            goto label_353a78;
        }
    }
    ctx->pc = 0x3539E0u;
label_3539e0:
    // 0x3539e0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3539e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
label_3539e4:
    // 0x3539e4: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
label_3539e8:
    // 0x3539e8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x3539e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_3539ec:
    // 0x3539ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3539f0:
    if (ctx->pc == 0x3539F0u) {
        ctx->pc = 0x3539F0u;
            // 0x3539f0: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x3539F4u;
        goto label_3539f4;
    }
    ctx->pc = 0x3539ECu;
    {
        const bool branch_taken_0x3539ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3539ec) {
            ctx->pc = 0x3539F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3539ECu;
            // 0x3539f0: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353A38u;
            goto label_353a38;
        }
    }
    ctx->pc = 0x3539F4u;
label_3539f4:
    // 0x3539f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3539f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3539f8:
    // 0x3539f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3539f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3539fc:
    // 0x3539fc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_353a00:
    if (ctx->pc == 0x353A00u) {
        ctx->pc = 0x353A04u;
        goto label_353a04;
    }
    ctx->pc = 0x3539FCu;
    {
        const bool branch_taken_0x3539fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3539fc) {
            ctx->pc = 0x353A34u;
            goto label_353a34;
        }
    }
    ctx->pc = 0x353A04u;
label_353a04:
    // 0x353a04: 0xc0d4884  jal         func_352210
label_353a08:
    if (ctx->pc == 0x353A08u) {
        ctx->pc = 0x353A0Cu;
        goto label_353a0c;
    }
    ctx->pc = 0x353A04u;
    SET_GPR_U32(ctx, 31, 0x353A0Cu);
    ctx->pc = 0x352210u;
    if (runtime->hasFunction(0x352210u)) {
        auto targetFn = runtime->lookupFunction(0x352210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353A0Cu; }
        if (ctx->pc != 0x353A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352210_0x352210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353A0Cu; }
        if (ctx->pc != 0x353A0Cu) { return; }
    }
    ctx->pc = 0x353A0Cu;
label_353a0c:
    // 0x353a0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_353a10:
    // 0x353a10: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x353a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_353a14:
    // 0x353a14: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x353a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_353a18:
    // 0x353a18: 0x24843ce0  addiu       $a0, $a0, 0x3CE0
    ctx->pc = 0x353a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15584));
label_353a1c:
    // 0x353a1c: 0xac40e7e0  sw          $zero, -0x1820($v0)
    ctx->pc = 0x353a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961120), GPR_U32(ctx, 0));
label_353a20:
    // 0x353a20: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x353a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
label_353a24:
    // 0x353a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353a28:
    // 0x353a28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x353a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353a2c:
    // 0x353a2c: 0xc0556d4  jal         func_155B50
label_353a30:
    if (ctx->pc == 0x353A30u) {
        ctx->pc = 0x353A30u;
            // 0x353a30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353A34u;
        goto label_353a34;
    }
    ctx->pc = 0x353A2Cu;
    SET_GPR_U32(ctx, 31, 0x353A34u);
    ctx->pc = 0x353A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353A2Cu;
            // 0x353a30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353A34u; }
        if (ctx->pc != 0x353A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353A34u; }
        if (ctx->pc != 0x353A34u) { return; }
    }
    ctx->pc = 0x353A34u;
label_353a34:
    // 0x353a34: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x353a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_353a38:
    // 0x353a38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_353a3c:
    // 0x353a3c: 0x1000000e  b           . + 4 + (0xE << 2)
label_353a40:
    if (ctx->pc == 0x353A40u) {
        ctx->pc = 0x353A40u;
            // 0x353a40: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x353A44u;
        goto label_353a44;
    }
    ctx->pc = 0x353A3Cu;
    {
        const bool branch_taken_0x353a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353A3Cu;
            // 0x353a40: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a3c) {
            ctx->pc = 0x353A78u;
            goto label_353a78;
        }
    }
    ctx->pc = 0x353A44u;
label_353a44:
    // 0x353a44: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x353a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_353a48:
    // 0x353a48: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x353a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_353a4c:
    // 0x353a4c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x353a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_353a50:
    // 0x353a50: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x353a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_353a54:
    // 0x353a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353a58:
    // 0x353a58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_353a5c:
    // 0x353a5c: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x353a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
label_353a60:
    // 0x353a60: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x353a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_353a64:
    // 0x353a64: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x353a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_353a68:
    // 0x353a68: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x353a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_353a6c:
    // 0x353a6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353a70:
    // 0x353a70: 0xc0c0ba8  jal         func_302EA0
label_353a74:
    if (ctx->pc == 0x353A74u) {
        ctx->pc = 0x353A74u;
            // 0x353a74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353A78u;
        goto label_353a78;
    }
    ctx->pc = 0x353A70u;
    SET_GPR_U32(ctx, 31, 0x353A78u);
    ctx->pc = 0x353A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353A70u;
            // 0x353a74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353A78u; }
        if (ctx->pc != 0x353A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353A78u; }
        if (ctx->pc != 0x353A78u) { return; }
    }
    ctx->pc = 0x353A78u;
label_353a78:
    // 0x353a78: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353a7c:
    // 0x353a7c: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x353a7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
label_353a80:
    // 0x353a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x353a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_353a84:
    // 0x353a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_353a88:
    if (ctx->pc == 0x353A88u) {
        ctx->pc = 0x353A8Cu;
        goto label_353a8c;
    }
    ctx->pc = 0x353A84u;
    {
        const bool branch_taken_0x353a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a84) {
            ctx->pc = 0x353A98u;
            goto label_353a98;
        }
    }
    ctx->pc = 0x353A8Cu;
label_353a8c:
    // 0x353a8c: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x353a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
label_353a90:
    // 0x353a90: 0x10000003  b           . + 4 + (0x3 << 2)
label_353a94:
    if (ctx->pc == 0x353A94u) {
        ctx->pc = 0x353A94u;
            // 0x353a94: 0x263197b4  addiu       $s1, $s1, -0x684C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940596));
        ctx->pc = 0x353A98u;
        goto label_353a98;
    }
    ctx->pc = 0x353A90u;
    {
        const bool branch_taken_0x353a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353A90u;
            // 0x353a94: 0x263197b4  addiu       $s1, $s1, -0x684C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a90) {
            ctx->pc = 0x353AA0u;
            goto label_353aa0;
        }
    }
    ctx->pc = 0x353A98u;
label_353a98:
    // 0x353a98: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x353a98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
label_353a9c:
    // 0x353a9c: 0x263197c0  addiu       $s1, $s1, -0x6840
    ctx->pc = 0x353a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940608));
label_353aa0:
    // 0x353aa0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353aa4:
    // 0x353aa4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x353aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_353aa8:
    // 0x353aa8: 0xc441bf28  lwc1        $f1, -0x40D8($v0)
    ctx->pc = 0x353aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353aac:
    // 0x353aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353ab0:
    // 0x353ab0: 0x0  nop
    ctx->pc = 0x353ab0u;
    // NOP
label_353ab4:
    // 0x353ab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x353ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_353ab8:
    // 0x353ab8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_353abc:
    if (ctx->pc == 0x353ABCu) {
        ctx->pc = 0x353AC0u;
        goto label_353ac0;
    }
    ctx->pc = 0x353AB8u;
    {
        const bool branch_taken_0x353ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353ab8) {
            ctx->pc = 0x353AE0u;
            goto label_353ae0;
        }
    }
    ctx->pc = 0x353AC0u;
label_353ac0:
    // 0x353ac0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x353ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_353ac4:
    // 0x353ac4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353ac8:
    // 0x353ac8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x353ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_353acc:
    // 0x353acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353ad0:
    // 0x353ad0: 0x0  nop
    ctx->pc = 0x353ad0u;
    // NOP
label_353ad4:
    // 0x353ad4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353ad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_353ad8:
    // 0x353ad8: 0x10000003  b           . + 4 + (0x3 << 2)
label_353adc:
    if (ctx->pc == 0x353ADCu) {
        ctx->pc = 0x353ADCu;
            // 0x353adc: 0xe440bf28  swc1        $f0, -0x40D8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), bits); }
        ctx->pc = 0x353AE0u;
        goto label_353ae0;
    }
    ctx->pc = 0x353AD8u;
    {
        const bool branch_taken_0x353ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353AD8u;
            // 0x353adc: 0xe440bf28  swc1        $f0, -0x40D8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ad8) {
            ctx->pc = 0x353AE8u;
            goto label_353ae8;
        }
    }
    ctx->pc = 0x353AE0u;
label_353ae0:
    // 0x353ae0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353ae4:
    // 0x353ae4: 0xe440bf28  swc1        $f0, -0x40D8($v0)
    ctx->pc = 0x353ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), bits); }
label_353ae8:
    // 0x353ae8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353aec:
    // 0x353aec: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x353aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_353af0:
    // 0x353af0: 0xc454bf28  lwc1        $f20, -0x40D8($v0)
    ctx->pc = 0x353af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_353af4:
    // 0x353af4: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x353af4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
label_353af8:
    // 0x353af8: 0xc048930  jal         func_1224C0
label_353afc:
    if (ctx->pc == 0x353AFCu) {
        ctx->pc = 0x353AFCu;
            // 0x353afc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x353B00u;
        goto label_353b00;
    }
    ctx->pc = 0x353AF8u;
    SET_GPR_U32(ctx, 31, 0x353B00u);
    ctx->pc = 0x353AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353AF8u;
            // 0x353afc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B00u; }
        if (ctx->pc != 0x353B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B00u; }
        if (ctx->pc != 0x353B00u) { return; }
    }
    ctx->pc = 0x353B00u;
label_353b00:
    // 0x353b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353b04:
    // 0x353b04: 0xc048a76  jal         func_1229D8
label_353b08:
    if (ctx->pc == 0x353B08u) {
        ctx->pc = 0x353B08u;
            // 0x353b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353B0Cu;
        goto label_353b0c;
    }
    ctx->pc = 0x353B04u;
    SET_GPR_U32(ctx, 31, 0x353B0Cu);
    ctx->pc = 0x353B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353B04u;
            // 0x353b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B0Cu; }
        if (ctx->pc != 0x353B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B0Cu; }
        if (ctx->pc != 0x353B0Cu) { return; }
    }
    ctx->pc = 0x353B0Cu;
label_353b0c:
    // 0x353b0c: 0xc048bde  jal         func_122F78
label_353b10:
    if (ctx->pc == 0x353B10u) {
        ctx->pc = 0x353B10u;
            // 0x353b10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353B14u;
        goto label_353b14;
    }
    ctx->pc = 0x353B0Cu;
    SET_GPR_U32(ctx, 31, 0x353B14u);
    ctx->pc = 0x353B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353B0Cu;
            // 0x353b10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B14u; }
        if (ctx->pc != 0x353B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B14u; }
        if (ctx->pc != 0x353B14u) { return; }
    }
    ctx->pc = 0x353B14u;
label_353b14:
    // 0x353b14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_353b18:
    // 0x353b18: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x353b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_353b1c:
    // 0x353b1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x353b1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_353b20:
    // 0x353b20: 0xc048930  jal         func_1224C0
label_353b24:
    if (ctx->pc == 0x353B24u) {
        ctx->pc = 0x353B24u;
            // 0x353b24: 0x2903c  dsll32      $s2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x353B28u;
        goto label_353b28;
    }
    ctx->pc = 0x353B20u;
    SET_GPR_U32(ctx, 31, 0x353B28u);
    ctx->pc = 0x353B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353B20u;
            // 0x353b24: 0x2903c  dsll32      $s2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B28u; }
        if (ctx->pc != 0x353B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B28u; }
        if (ctx->pc != 0x353B28u) { return; }
    }
    ctx->pc = 0x353B28u;
label_353b28:
    // 0x353b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x353b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_353b2c:
    // 0x353b2c: 0xc048a76  jal         func_1229D8
label_353b30:
    if (ctx->pc == 0x353B30u) {
        ctx->pc = 0x353B30u;
            // 0x353b30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353B34u;
        goto label_353b34;
    }
    ctx->pc = 0x353B2Cu;
    SET_GPR_U32(ctx, 31, 0x353B34u);
    ctx->pc = 0x353B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353B2Cu;
            // 0x353b30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B34u; }
        if (ctx->pc != 0x353B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B34u; }
        if (ctx->pc != 0x353B34u) { return; }
    }
    ctx->pc = 0x353B34u;
label_353b34:
    // 0x353b34: 0xc048bde  jal         func_122F78
label_353b38:
    if (ctx->pc == 0x353B38u) {
        ctx->pc = 0x353B38u;
            // 0x353b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353B3Cu;
        goto label_353b3c;
    }
    ctx->pc = 0x353B34u;
    SET_GPR_U32(ctx, 31, 0x353B3Cu);
    ctx->pc = 0x353B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353B34u;
            // 0x353b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B3Cu; }
        if (ctx->pc != 0x353B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353B3Cu; }
        if (ctx->pc != 0x353B3Cu) { return; }
    }
    ctx->pc = 0x353B3Cu;
label_353b3c:
    // 0x353b3c: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x353b3cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_353b40:
    // 0x353b40: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x353b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_353b44:
    // 0x353b44: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x353b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_353b48:
    // 0x353b48: 0x102043  sra         $a0, $s0, 1
    ctx->pc = 0x353b48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
label_353b4c:
    // 0x353b4c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x353b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_353b50:
    // 0x353b50: 0x9063e7e8  lbu         $v1, -0x1818($v1)
    ctx->pc = 0x353b50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961128)));
label_353b54:
    // 0x353b54: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x353b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_353b58:
    // 0x353b58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_353b5c:
    // 0x353b5c: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x353b5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_353b60:
    // 0x353b60: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x353b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_353b64:
    // 0x353b64: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_353b68:
    if (ctx->pc == 0x353B68u) {
        ctx->pc = 0x353B68u;
            // 0x353b68: 0xffa50020  sd          $a1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
        ctx->pc = 0x353B6Cu;
        goto label_353b6c;
    }
    ctx->pc = 0x353B64u;
    {
        const bool branch_taken_0x353b64 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x353B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353B64u;
            // 0x353b68: 0xffa50020  sd          $a1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b64) {
            ctx->pc = 0x353B74u;
            goto label_353b74;
        }
    }
    ctx->pc = 0x353B6Cu;
label_353b6c:
    // 0x353b6c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x353b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_353b70:
    // 0x353b70: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x353b70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_353b74:
    // 0x353b74: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x353b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_353b78:
    // 0x353b78: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x353b78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_353b7c:
    // 0x353b7c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_353b80:
    if (ctx->pc == 0x353B80u) {
        ctx->pc = 0x353B80u;
            // 0x353b80: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x353B84u;
        goto label_353b84;
    }
    ctx->pc = 0x353B7Cu;
    {
        const bool branch_taken_0x353b7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x353B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353B7Cu;
            // 0x353b80: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b7c) {
            ctx->pc = 0x353B8Cu;
            goto label_353b8c;
        }
    }
    ctx->pc = 0x353B84u;
label_353b84:
    // 0x353b84: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x353b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_353b88:
    // 0x353b88: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x353b88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_353b8c:
    // 0x353b8c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x353b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_353b90:
    // 0x353b90: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x353b90u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_353b94:
    // 0x353b94: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x353b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_353b98:
    // 0x353b98: 0x962a0002  lhu         $t2, 0x2($s1)
    ctx->pc = 0x353b98u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_353b9c:
    // 0x353b9c: 0x962b0004  lhu         $t3, 0x4($s1)
    ctx->pc = 0x353b9cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_353ba0:
    // 0x353ba0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x353ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353ba4:
    // 0x353ba4: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x353ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_353ba8:
    // 0x353ba8: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x353ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
label_353bac:
    // 0x353bac: 0xc0c0bd4  jal         func_302F50
label_353bb0:
    if (ctx->pc == 0x353BB0u) {
        ctx->pc = 0x353BB0u;
            // 0x353bb0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353BB4u;
        goto label_353bb4;
    }
    ctx->pc = 0x353BACu;
    SET_GPR_U32(ctx, 31, 0x353BB4u);
    ctx->pc = 0x353BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353BACu;
            // 0x353bb0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302F50u;
    if (runtime->hasFunction(0x302F50u)) {
        auto targetFn = runtime->lookupFunction(0x302F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353BB4u; }
        if (ctx->pc != 0x353BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302F50_0x302f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353BB4u; }
        if (ctx->pc != 0x353BB4u) { return; }
    }
    ctx->pc = 0x353BB4u;
label_353bb4:
    // 0x353bb4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x353bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_353bb8:
    // 0x353bb8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x353bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_353bbc:
    // 0x353bbc: 0x8c84e7e8  lw          $a0, -0x1818($a0)
    ctx->pc = 0x353bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961128)));
label_353bc0:
    // 0x353bc0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x353bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_353bc4:
    // 0x353bc4: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x353bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_353bc8:
    // 0x353bc8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_353bcc:
    if (ctx->pc == 0x353BCCu) {
        ctx->pc = 0x353BCCu;
            // 0x353bcc: 0xac64e7e8  sw          $a0, -0x1818($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961128), GPR_U32(ctx, 4));
        ctx->pc = 0x353BD0u;
        goto label_353bd0;
    }
    ctx->pc = 0x353BC8u;
    {
        const bool branch_taken_0x353bc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x353BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353BC8u;
            // 0x353bcc: 0xac64e7e8  sw          $a0, -0x1818($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bc8) {
            ctx->pc = 0x353BDCu;
            goto label_353bdc;
        }
    }
    ctx->pc = 0x353BD0u;
label_353bd0:
    // 0x353bd0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_353bd4:
    // 0x353bd4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x353bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_353bd8:
    // 0x353bd8: 0xac64e7e8  sw          $a0, -0x1818($v1)
    ctx->pc = 0x353bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961128), GPR_U32(ctx, 4));
label_353bdc:
    // 0x353bdc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x353bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_353be0:
    // 0x353be0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x353be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_353be4:
    // 0x353be4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x353be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_353be8:
    // 0x353be8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x353be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_353bec:
    // 0x353bec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x353becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353bf0:
    // 0x353bf0: 0x3e00008  jr          $ra
label_353bf4:
    if (ctx->pc == 0x353BF4u) {
        ctx->pc = 0x353BF4u;
            // 0x353bf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x353BF8u;
        goto label_353bf8;
    }
    ctx->pc = 0x353BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353BF0u;
            // 0x353bf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353BF8u;
label_353bf8:
    // 0x353bf8: 0x0  nop
    ctx->pc = 0x353bf8u;
    // NOP
label_353bfc:
    // 0x353bfc: 0x0  nop
    ctx->pc = 0x353bfcu;
    // NOP
    ctx->pc = 0x353c00u;
}
