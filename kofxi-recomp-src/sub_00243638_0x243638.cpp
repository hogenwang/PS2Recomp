#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243638
// Address: 0x243638 - 0x243bb0
void sub_00243638_0x243638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243638_0x243638");
#endif

    switch (ctx->pc) {
        case 0x243638u: goto label_243638;
        case 0x24363cu: goto label_24363c;
        case 0x243640u: goto label_243640;
        case 0x243644u: goto label_243644;
        case 0x243648u: goto label_243648;
        case 0x24364cu: goto label_24364c;
        case 0x243650u: goto label_243650;
        case 0x243654u: goto label_243654;
        case 0x243658u: goto label_243658;
        case 0x24365cu: goto label_24365c;
        case 0x243660u: goto label_243660;
        case 0x243664u: goto label_243664;
        case 0x243668u: goto label_243668;
        case 0x24366cu: goto label_24366c;
        case 0x243670u: goto label_243670;
        case 0x243674u: goto label_243674;
        case 0x243678u: goto label_243678;
        case 0x24367cu: goto label_24367c;
        case 0x243680u: goto label_243680;
        case 0x243684u: goto label_243684;
        case 0x243688u: goto label_243688;
        case 0x24368cu: goto label_24368c;
        case 0x243690u: goto label_243690;
        case 0x243694u: goto label_243694;
        case 0x243698u: goto label_243698;
        case 0x24369cu: goto label_24369c;
        case 0x2436a0u: goto label_2436a0;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436a8u: goto label_2436a8;
        case 0x2436acu: goto label_2436ac;
        case 0x2436b0u: goto label_2436b0;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436bcu: goto label_2436bc;
        case 0x2436c0u: goto label_2436c0;
        case 0x2436c4u: goto label_2436c4;
        case 0x2436c8u: goto label_2436c8;
        case 0x2436ccu: goto label_2436cc;
        case 0x2436d0u: goto label_2436d0;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436d8u: goto label_2436d8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436e0u: goto label_2436e0;
        case 0x2436e4u: goto label_2436e4;
        case 0x2436e8u: goto label_2436e8;
        case 0x2436ecu: goto label_2436ec;
        case 0x2436f0u: goto label_2436f0;
        case 0x2436f4u: goto label_2436f4;
        case 0x2436f8u: goto label_2436f8;
        case 0x2436fcu: goto label_2436fc;
        case 0x243700u: goto label_243700;
        case 0x243704u: goto label_243704;
        case 0x243708u: goto label_243708;
        case 0x24370cu: goto label_24370c;
        case 0x243710u: goto label_243710;
        case 0x243714u: goto label_243714;
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        case 0x243788u: goto label_243788;
        case 0x24378cu: goto label_24378c;
        case 0x243790u: goto label_243790;
        case 0x243794u: goto label_243794;
        case 0x243798u: goto label_243798;
        case 0x24379cu: goto label_24379c;
        case 0x2437a0u: goto label_2437a0;
        case 0x2437a4u: goto label_2437a4;
        case 0x2437a8u: goto label_2437a8;
        case 0x2437acu: goto label_2437ac;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437b4u: goto label_2437b4;
        case 0x2437b8u: goto label_2437b8;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437c8u: goto label_2437c8;
        case 0x2437ccu: goto label_2437cc;
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        case 0x24381cu: goto label_24381c;
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a10u: goto label_243a10;
        case 0x243a14u: goto label_243a14;
        case 0x243a18u: goto label_243a18;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a20u: goto label_243a20;
        case 0x243a24u: goto label_243a24;
        case 0x243a28u: goto label_243a28;
        case 0x243a2cu: goto label_243a2c;
        case 0x243a30u: goto label_243a30;
        case 0x243a34u: goto label_243a34;
        case 0x243a38u: goto label_243a38;
        case 0x243a3cu: goto label_243a3c;
        case 0x243a40u: goto label_243a40;
        case 0x243a44u: goto label_243a44;
        case 0x243a48u: goto label_243a48;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a50u: goto label_243a50;
        case 0x243a54u: goto label_243a54;
        case 0x243a58u: goto label_243a58;
        case 0x243a5cu: goto label_243a5c;
        case 0x243a60u: goto label_243a60;
        case 0x243a64u: goto label_243a64;
        case 0x243a68u: goto label_243a68;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a70u: goto label_243a70;
        case 0x243a74u: goto label_243a74;
        case 0x243a78u: goto label_243a78;
        case 0x243a7cu: goto label_243a7c;
        case 0x243a80u: goto label_243a80;
        case 0x243a84u: goto label_243a84;
        case 0x243a88u: goto label_243a88;
        case 0x243a8cu: goto label_243a8c;
        case 0x243a90u: goto label_243a90;
        case 0x243a94u: goto label_243a94;
        case 0x243a98u: goto label_243a98;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa0u: goto label_243aa0;
        case 0x243aa4u: goto label_243aa4;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aacu: goto label_243aac;
        case 0x243ab0u: goto label_243ab0;
        case 0x243ab4u: goto label_243ab4;
        case 0x243ab8u: goto label_243ab8;
        case 0x243abcu: goto label_243abc;
        case 0x243ac0u: goto label_243ac0;
        case 0x243ac4u: goto label_243ac4;
        case 0x243ac8u: goto label_243ac8;
        case 0x243accu: goto label_243acc;
        case 0x243ad0u: goto label_243ad0;
        case 0x243ad4u: goto label_243ad4;
        case 0x243ad8u: goto label_243ad8;
        case 0x243adcu: goto label_243adc;
        case 0x243ae0u: goto label_243ae0;
        case 0x243ae4u: goto label_243ae4;
        case 0x243ae8u: goto label_243ae8;
        case 0x243aecu: goto label_243aec;
        case 0x243af0u: goto label_243af0;
        case 0x243af4u: goto label_243af4;
        case 0x243af8u: goto label_243af8;
        case 0x243afcu: goto label_243afc;
        case 0x243b00u: goto label_243b00;
        case 0x243b04u: goto label_243b04;
        case 0x243b08u: goto label_243b08;
        case 0x243b0cu: goto label_243b0c;
        case 0x243b10u: goto label_243b10;
        case 0x243b14u: goto label_243b14;
        case 0x243b18u: goto label_243b18;
        case 0x243b1cu: goto label_243b1c;
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        case 0x243b90u: goto label_243b90;
        case 0x243b94u: goto label_243b94;
        case 0x243b98u: goto label_243b98;
        case 0x243b9cu: goto label_243b9c;
        case 0x243ba0u: goto label_243ba0;
        case 0x243ba4u: goto label_243ba4;
        case 0x243ba8u: goto label_243ba8;
        case 0x243bacu: goto label_243bac;
        default: break;
    }

    ctx->pc = 0x243638u;

label_243638:
    // 0x243638: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x243638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24363c:
    // 0x24363c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_243640:
    // 0x243640: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x243640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_243644:
    // 0x243644: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x243644u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_243648:
    // 0x243648: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x243648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_24364c:
    // 0x24364c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24364cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_243650:
    // 0x243650: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x243650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_243654:
    // 0x243654: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x243654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243658:
    // 0x243658: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x243658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_24365c:
    // 0x24365c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24365cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243660:
    // 0x243660: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x243660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_243664:
    // 0x243664: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x243664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_243668:
    // 0x243668: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x243668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_24366c:
    // 0x24366c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_243670:
    // 0x243670: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x243670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_243674:
    // 0x243674: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x243674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_243678:
    // 0x243678: 0xc08c682  jal         func_231A08
label_24367c:
    if (ctx->pc == 0x24367Cu) {
        ctx->pc = 0x24367Cu;
            // 0x24367c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x243680u;
        goto label_243680;
    }
    ctx->pc = 0x243678u;
    SET_GPR_U32(ctx, 31, 0x243680u);
    ctx->pc = 0x24367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243678u;
            // 0x24367c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243680u; }
        if (ctx->pc != 0x243680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243680u; }
        if (ctx->pc != 0x243680u) { return; }
    }
    ctx->pc = 0x243680u;
label_243680:
    // 0x243680: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x243680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_243684:
    // 0x243684: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x243684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_243688:
    // 0x243688: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x243688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24368c:
    // 0x24368c: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x24368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
label_243690:
    // 0x243690: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x243690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_243694:
    // 0x243694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243698:
    // 0x243698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24369c:
    // 0x24369c: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x24369cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2436a0:
    // 0x2436a0: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_2436a4:
    if (ctx->pc == 0x2436A4u) {
        ctx->pc = 0x2436A4u;
            // 0x2436a4: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2436A8u;
        goto label_2436a8;
    }
    ctx->pc = 0x2436A0u;
    {
        const bool branch_taken_0x2436a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2436A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436A0u;
            // 0x2436a4: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436a0) {
            ctx->pc = 0x2436B4u;
            goto label_2436b4;
        }
    }
    ctx->pc = 0x2436A8u;
label_2436a8:
    // 0x2436a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2436a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2436ac:
    // 0x2436ac: 0x10000130  b           . + 4 + (0x130 << 2)
label_2436b0:
    if (ctx->pc == 0x2436B0u) {
        ctx->pc = 0x2436B0u;
            // 0x2436b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2436B4u;
        goto label_2436b4;
    }
    ctx->pc = 0x2436ACu;
    {
        const bool branch_taken_0x2436ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436ACu;
            // 0x2436b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436ac) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x2436B4u;
label_2436b4:
    // 0x2436b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2436b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2436b8:
    // 0x2436b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2436b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2436bc:
    // 0x2436bc: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_2436c0:
    if (ctx->pc == 0x2436C0u) {
        ctx->pc = 0x2436C0u;
            // 0x2436c0: 0x2a80b  movn        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->pc = 0x2436C4u;
        goto label_2436c4;
    }
    ctx->pc = 0x2436BCu;
    {
        const bool branch_taken_0x2436bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2436C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436BCu;
            // 0x2436c0: 0x2a80b  movn        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436bc) {
            ctx->pc = 0x2436F8u;
            goto label_2436f8;
        }
    }
    ctx->pc = 0x2436C4u;
label_2436c4:
    // 0x2436c4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2436c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2436c8:
    // 0x2436c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2436cc:
    if (ctx->pc == 0x2436CCu) {
        ctx->pc = 0x2436CCu;
            // 0x2436cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2436D0u;
        goto label_2436d0;
    }
    ctx->pc = 0x2436C8u;
    {
        const bool branch_taken_0x2436c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436C8u;
            // 0x2436cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436c8) {
            ctx->pc = 0x2436E0u;
            goto label_2436e0;
        }
    }
    ctx->pc = 0x2436D0u;
label_2436d0:
    // 0x2436d0: 0x10820071  beq         $a0, $v0, . + 4 + (0x71 << 2)
label_2436d4:
    if (ctx->pc == 0x2436D4u) {
        ctx->pc = 0x2436D4u;
            // 0x2436d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2436D8u;
        goto label_2436d8;
    }
    ctx->pc = 0x2436D0u;
    {
        const bool branch_taken_0x2436d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2436D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436D0u;
            // 0x2436d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436d0) {
            ctx->pc = 0x243898u;
            goto label_243898;
        }
    }
    ctx->pc = 0x2436D8u;
label_2436d8:
    // 0x2436d8: 0x10000125  b           . + 4 + (0x125 << 2)
label_2436dc:
    if (ctx->pc == 0x2436DCu) {
        ctx->pc = 0x2436E0u;
        goto label_2436e0;
    }
    ctx->pc = 0x2436D8u;
    {
        const bool branch_taken_0x2436d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2436d8) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x2436E0u;
label_2436e0:
    // 0x2436e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2436e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2436e4:
    // 0x2436e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2436e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2436e8:
    // 0x2436e8: 0x10a20055  beq         $a1, $v0, . + 4 + (0x55 << 2)
label_2436ec:
    if (ctx->pc == 0x2436ECu) {
        ctx->pc = 0x2436F0u;
        goto label_2436f0;
    }
    ctx->pc = 0x2436E8u;
    {
        const bool branch_taken_0x2436e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2436e8) {
            ctx->pc = 0x243840u;
            goto label_243840;
        }
    }
    ctx->pc = 0x2436F0u;
label_2436f0:
    // 0x2436f0: 0x1000011f  b           . + 4 + (0x11F << 2)
label_2436f4:
    if (ctx->pc == 0x2436F4u) {
        ctx->pc = 0x2436F8u;
        goto label_2436f8;
    }
    ctx->pc = 0x2436F0u;
    {
        const bool branch_taken_0x2436f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2436f0) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x2436F8u;
label_2436f8:
    // 0x2436f8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x2436f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_2436fc:
    // 0x2436fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2436fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243700:
    // 0x243700: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x243700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_243704:
    // 0x243704: 0x40f809  jalr        $v0
label_243708:
    if (ctx->pc == 0x243708u) {
        ctx->pc = 0x243708u;
            // 0x243708: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24370Cu;
        goto label_24370c;
    }
    ctx->pc = 0x243704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24370Cu);
        ctx->pc = 0x243708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243704u;
            // 0x243708: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24370Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24370Cu; }
            if (ctx->pc != 0x24370Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24370Cu;
label_24370c:
    // 0x24370c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24370cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243710:
    // 0x243710: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_243714:
    if (ctx->pc == 0x243714u) {
        ctx->pc = 0x243714u;
            // 0x243714: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243718u;
        goto label_243718;
    }
    ctx->pc = 0x243710u;
    {
        const bool branch_taken_0x243710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x243714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243710u;
            // 0x243714: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243710) {
            ctx->pc = 0x243724u;
            goto label_243724;
        }
    }
    ctx->pc = 0x243718u;
label_243718:
    // 0x243718: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x243718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24371c:
    // 0x24371c: 0x10000114  b           . + 4 + (0x114 << 2)
label_243720:
    if (ctx->pc == 0x243720u) {
        ctx->pc = 0x243720u;
            // 0x243720: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->pc = 0x243724u;
        goto label_243724;
    }
    ctx->pc = 0x24371Cu;
    {
        const bool branch_taken_0x24371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24371Cu;
            // 0x243720: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24371c) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243724u;
label_243724:
    // 0x243724: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x243724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_243728:
    // 0x243728: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x243728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_24372c:
    // 0x24372c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243730:
    if (ctx->pc == 0x243730u) {
        ctx->pc = 0x243730u;
            // 0x243730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243734u;
        goto label_243734;
    }
    ctx->pc = 0x24372Cu;
    {
        const bool branch_taken_0x24372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24372Cu;
            // 0x243730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24372c) {
            ctx->pc = 0x24373Cu;
            goto label_24373c;
        }
    }
    ctx->pc = 0x243734u;
label_243734:
    // 0x243734: 0xc090d46  jal         func_243518
label_243738:
    if (ctx->pc == 0x243738u) {
        ctx->pc = 0x243738u;
            // 0x243738: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24373Cu;
        goto label_24373c;
    }
    ctx->pc = 0x243734u;
    SET_GPR_U32(ctx, 31, 0x24373Cu);
    ctx->pc = 0x243738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243734u;
            // 0x243738: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243518u;
    if (runtime->hasFunction(0x243518u)) {
        auto targetFn = runtime->lookupFunction(0x243518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24373Cu; }
        if (ctx->pc != 0x24373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243518_0x243518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24373Cu; }
        if (ctx->pc != 0x24373Cu) { return; }
    }
    ctx->pc = 0x24373Cu;
label_24373c:
    // 0x24373c: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x24373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_243740:
    // 0x243740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243744:
    // 0x243744: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x243744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_243748:
    // 0x243748: 0x40f809  jalr        $v0
label_24374c:
    if (ctx->pc == 0x24374Cu) {
        ctx->pc = 0x24374Cu;
            // 0x24374c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243750u;
        goto label_243750;
    }
    ctx->pc = 0x243748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243750u);
        ctx->pc = 0x24374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243748u;
            // 0x24374c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243750u; }
            if (ctx->pc != 0x243750u) { return; }
        }
        }
    }
    ctx->pc = 0x243750u;
label_243750:
    // 0x243750: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243754:
    // 0x243754: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_243758:
    if (ctx->pc == 0x243758u) {
        ctx->pc = 0x243758u;
            // 0x243758: 0x9242000b  lbu         $v0, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->pc = 0x24375Cu;
        goto label_24375c;
    }
    ctx->pc = 0x243754u;
    {
        const bool branch_taken_0x243754 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x243754) {
            ctx->pc = 0x243758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243754u;
            // 0x243758: 0x9242000b  lbu         $v0, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243778u;
            goto label_243778;
        }
    }
    ctx->pc = 0x24375Cu;
label_24375c:
    // 0x24375c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243760:
    // 0x243760: 0x10000103  b           . + 4 + (0x103 << 2)
label_243764:
    if (ctx->pc == 0x243764u) {
        ctx->pc = 0x243764u;
            // 0x243764: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->pc = 0x243768u;
        goto label_243768;
    }
    ctx->pc = 0x243760u;
    {
        const bool branch_taken_0x243760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243760u;
            // 0x243764: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243760) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243768u;
label_243768:
    // 0x243768: 0xc090c4c  jal         func_243130
label_24376c:
    if (ctx->pc == 0x24376Cu) {
        ctx->pc = 0x24376Cu;
            // 0x24376c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243770u;
        goto label_243770;
    }
    ctx->pc = 0x243768u;
    SET_GPR_U32(ctx, 31, 0x243770u);
    ctx->pc = 0x24376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243768u;
            // 0x24376c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243770u; }
        if (ctx->pc != 0x243770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243770u; }
        if (ctx->pc != 0x243770u) { return; }
    }
    ctx->pc = 0x243770u;
label_243770:
    // 0x243770: 0x10000011  b           . + 4 + (0x11 << 2)
label_243774:
    if (ctx->pc == 0x243774u) {
        ctx->pc = 0x243774u;
            // 0x243774: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x243778u;
        goto label_243778;
    }
    ctx->pc = 0x243770u;
    {
        const bool branch_taken_0x243770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243770u;
            // 0x243774: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243770) {
            ctx->pc = 0x2437B8u;
            goto label_2437b8;
        }
    }
    ctx->pc = 0x243778u;
label_243778:
    // 0x243778: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x243778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_24377c:
    // 0x24377c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_243780:
    if (ctx->pc == 0x243780u) {
        ctx->pc = 0x243780u;
            // 0x243780: 0x8e4200a8  lw          $v0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->pc = 0x243784u;
        goto label_243784;
    }
    ctx->pc = 0x24377Cu;
    {
        const bool branch_taken_0x24377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24377c) {
            ctx->pc = 0x243780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24377Cu;
            // 0x243780: 0x8e4200a8  lw          $v0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243794u;
            goto label_243794;
        }
    }
    ctx->pc = 0x243784u;
label_243784:
    // 0x243784: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x243784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_243788:
    // 0x243788: 0xc08b5e0  jal         func_22D780
label_24378c:
    if (ctx->pc == 0x24378Cu) {
        ctx->pc = 0x24378Cu;
            // 0x24378c: 0x248466d8  addiu       $a0, $a0, 0x66D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26328));
        ctx->pc = 0x243790u;
        goto label_243790;
    }
    ctx->pc = 0x243788u;
    SET_GPR_U32(ctx, 31, 0x243790u);
    ctx->pc = 0x24378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243788u;
            // 0x24378c: 0x248466d8  addiu       $a0, $a0, 0x66D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243790u; }
        if (ctx->pc != 0x243790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243790u; }
        if (ctx->pc != 0x243790u) { return; }
    }
    ctx->pc = 0x243790u;
label_243790:
    // 0x243790: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x243790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_243794:
    // 0x243794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_243798:
    if (ctx->pc == 0x243798u) {
        ctx->pc = 0x243798u;
            // 0x243798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24379Cu;
        goto label_24379c;
    }
    ctx->pc = 0x243794u;
    {
        const bool branch_taken_0x243794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243794u;
            // 0x243798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243794) {
            ctx->pc = 0x2437B8u;
            goto label_2437b8;
        }
    }
    ctx->pc = 0x24379Cu;
label_24379c:
    // 0x24379c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x24379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2437a0:
    // 0x2437a0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2437a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2437a4:
    // 0x2437a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2437a8:
    if (ctx->pc == 0x2437A8u) {
        ctx->pc = 0x2437A8u;
            // 0x2437a8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x2437ACu;
        goto label_2437ac;
    }
    ctx->pc = 0x2437A4u;
    {
        const bool branch_taken_0x2437a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2437A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2437A4u;
            // 0x2437a8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437a4) {
            ctx->pc = 0x243768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243768;
        }
    }
    ctx->pc = 0x2437ACu;
label_2437ac:
    // 0x2437ac: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2437acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2437b0:
    // 0x2437b0: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x2437b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
label_2437b4:
    // 0x2437b4: 0x0  nop
    ctx->pc = 0x2437b4u;
    // NOP
label_2437b8:
    // 0x2437b8: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x2437b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2437bc:
    // 0x2437bc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2437c0:
    if (ctx->pc == 0x2437C0u) {
        ctx->pc = 0x2437C0u;
            // 0x2437c0: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->pc = 0x2437C4u;
        goto label_2437c4;
    }
    ctx->pc = 0x2437BCu;
    {
        const bool branch_taken_0x2437bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2437bc) {
            ctx->pc = 0x2437C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2437BCu;
            // 0x2437c0: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2437D8u;
            goto label_2437d8;
        }
    }
    ctx->pc = 0x2437C4u;
label_2437c4:
    // 0x2437c4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2437c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2437c8:
    // 0x2437c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2437c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2437cc:
    // 0x2437cc: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2437ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_2437d0:
    // 0x2437d0: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2437d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
label_2437d4:
    // 0x2437d4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2437d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2437d8:
    // 0x2437d8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2437dc:
    // 0x2437dc: 0x8e53004c  lw          $s3, 0x4C($s2)
    ctx->pc = 0x2437dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2437e0:
    // 0x2437e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2437e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2437e4:
    // 0x2437e4: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_2437e8:
    if (ctx->pc == 0x2437E8u) {
        ctx->pc = 0x2437E8u;
            // 0x2437e8: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x2437ECu;
        goto label_2437ec;
    }
    ctx->pc = 0x2437E4u;
    {
        const bool branch_taken_0x2437e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2437E4u;
            // 0x2437e8: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437e4) {
            ctx->pc = 0x243804u;
            goto label_243804;
        }
    }
    ctx->pc = 0x2437ECu;
label_2437ec:
    // 0x2437ec: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x2437ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2437f0:
    // 0x2437f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2437f4:
    if (ctx->pc == 0x2437F4u) {
        ctx->pc = 0x2437F4u;
            // 0x2437f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2437F8u;
        goto label_2437f8;
    }
    ctx->pc = 0x2437F0u;
    {
        const bool branch_taken_0x2437f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2437F0u;
            // 0x2437f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437f0) {
            ctx->pc = 0x243804u;
            goto label_243804;
        }
    }
    ctx->pc = 0x2437F8u;
label_2437f8:
    // 0x2437f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2437f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2437fc:
    // 0x2437fc: 0x40f809  jalr        $v0
label_243800:
    if (ctx->pc == 0x243800u) {
        ctx->pc = 0x243800u;
            // 0x243800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243804u;
        goto label_243804;
    }
    ctx->pc = 0x2437FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243804u);
        ctx->pc = 0x243800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2437FCu;
            // 0x243800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243804u; }
            if (ctx->pc != 0x243804u) { return; }
        }
        }
    }
    ctx->pc = 0x243804u;
label_243804:
    // 0x243804: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_243808:
    // 0x243808: 0x8c62ff90  lw          $v0, -0x70($v1)
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967184)));
label_24380c:
    // 0x24380c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243810:
    // 0x243810: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_243814:
    if (ctx->pc == 0x243814u) {
        ctx->pc = 0x243814u;
            // 0x243814: 0xac62ff90  sw          $v0, -0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967184), GPR_U32(ctx, 2));
        ctx->pc = 0x243818u;
        goto label_243818;
    }
    ctx->pc = 0x243810u;
    {
        const bool branch_taken_0x243810 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x243814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243810u;
            // 0x243814: 0xac62ff90  sw          $v0, -0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243810) {
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x243818u;
label_243818:
    // 0x243818: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_24381c:
    if (ctx->pc == 0x24381Cu) {
        ctx->pc = 0x24381Cu;
            // 0x24381c: 0xafd20000  sw          $s2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x243820u;
        goto label_243820;
    }
    ctx->pc = 0x243818u;
    {
        const bool branch_taken_0x243818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243818u;
            // 0x24381c: 0xafd20000  sw          $s2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243818) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243820u;
label_243820:
    // 0x243820: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x243820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_243824:
    // 0x243824: 0x1c4000d2  bgtz        $v0, . + 4 + (0xD2 << 2)
label_243828:
    if (ctx->pc == 0x243828u) {
        ctx->pc = 0x243828u;
            // 0x243828: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x24382Cu;
        goto label_24382c;
    }
    ctx->pc = 0x243824u;
    {
        const bool branch_taken_0x243824 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x243828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243824u;
            // 0x243828: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243824) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x24382Cu;
label_24382c:
    // 0x24382c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243830:
    // 0x243830: 0xc090c4c  jal         func_243130
label_243834:
    if (ctx->pc == 0x243834u) {
        ctx->pc = 0x243834u;
            // 0x243834: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x243838u;
        goto label_243838;
    }
    ctx->pc = 0x243830u;
    SET_GPR_U32(ctx, 31, 0x243838u);
    ctx->pc = 0x243834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243830u;
            // 0x243834: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243838u; }
        if (ctx->pc != 0x243838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243838u; }
        if (ctx->pc != 0x243838u) { return; }
    }
    ctx->pc = 0x243838u;
label_243838:
    // 0x243838: 0x100000cd  b           . + 4 + (0xCD << 2)
label_24383c:
    if (ctx->pc == 0x24383Cu) {
        ctx->pc = 0x243840u;
        goto label_243840;
    }
    ctx->pc = 0x243838u;
    {
        const bool branch_taken_0x243838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243838) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243840u;
label_243840:
    // 0x243840: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_243844:
    if (ctx->pc == 0x243844u) {
        ctx->pc = 0x243844u;
            // 0x243844: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x243848u;
        goto label_243848;
    }
    ctx->pc = 0x243840u;
    {
        const bool branch_taken_0x243840 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243840u;
            // 0x243844: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243840) {
            ctx->pc = 0x243858u;
            goto label_243858;
        }
    }
    ctx->pc = 0x243848u;
label_243848:
    // 0x243848: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_24384c:
    // 0x24384c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_243850:
    if (ctx->pc == 0x243850u) {
        ctx->pc = 0x243850u;
            // 0x243850: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x243854u;
        goto label_243854;
    }
    ctx->pc = 0x24384Cu;
    {
        const bool branch_taken_0x24384c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24384c) {
            ctx->pc = 0x243850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24384Cu;
            // 0x243850: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243860u;
            goto label_243860;
        }
    }
    ctx->pc = 0x243854u;
label_243854:
    // 0x243854: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x243854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_243858:
    // 0x243858: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_24385c:
    if (ctx->pc == 0x24385Cu) {
        ctx->pc = 0x24385Cu;
            // 0x24385c: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->pc = 0x243860u;
        goto label_243860;
    }
    ctx->pc = 0x243858u;
    {
        const bool branch_taken_0x243858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243858u;
            // 0x24385c: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243858) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243860u;
label_243860:
    // 0x243860: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x243860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_243864:
    // 0x243864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_243868:
    if (ctx->pc == 0x243868u) {
        ctx->pc = 0x243868u;
            // 0x243868: 0x2402f6ff  addiu       $v0, $zero, -0x901 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964991));
        ctx->pc = 0x24386Cu;
        goto label_24386c;
    }
    ctx->pc = 0x243864u;
    {
        const bool branch_taken_0x243864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243864u;
            // 0x243868: 0x2402f6ff  addiu       $v0, $zero, -0x901 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964991));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243864) {
            ctx->pc = 0x243878u;
            goto label_243878;
        }
    }
    ctx->pc = 0x24386Cu;
label_24386c:
    // 0x24386c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x24386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_243870:
    // 0x243870: 0x100000bf  b           . + 4 + (0xBF << 2)
label_243874:
    if (ctx->pc == 0x243874u) {
        ctx->pc = 0x243874u;
            // 0x243874: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x243878u;
        goto label_243878;
    }
    ctx->pc = 0x243870u;
    {
        const bool branch_taken_0x243870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243870u;
            // 0x243874: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243870) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243878u;
label_243878:
    // 0x243878: 0x8e150050  lw          $s5, 0x50($s0)
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_24387c:
    // 0x24387c: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x24387cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_243880:
    // 0x243880: 0x8e13004c  lw          $s3, 0x4C($s0)
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_243884:
    // 0x243884: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x243884u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
label_243888:
    // 0x243888: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x243888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24388c:
    // 0x24388c: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x24388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
label_243890:
    // 0x243890: 0x10000009  b           . + 4 + (0x9 << 2)
label_243894:
    if (ctx->pc == 0x243894u) {
        ctx->pc = 0x243894u;
            // 0x243894: 0x55880a  movz        $s1, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->pc = 0x243898u;
        goto label_243898;
    }
    ctx->pc = 0x243890u;
    {
        const bool branch_taken_0x243890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243890u;
            // 0x243894: 0x55880a  movz        $s1, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243890) {
            ctx->pc = 0x2438B8u;
            goto label_2438b8;
        }
    }
    ctx->pc = 0x243898u;
label_243898:
    // 0x243898: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x243898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24389c:
    // 0x24389c: 0xc090d52  jal         func_243548
label_2438a0:
    if (ctx->pc == 0x2438A0u) {
        ctx->pc = 0x2438A0u;
            // 0x2438a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2438A4u;
        goto label_2438a4;
    }
    ctx->pc = 0x24389Cu;
    SET_GPR_U32(ctx, 31, 0x2438A4u);
    ctx->pc = 0x2438A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24389Cu;
            // 0x2438a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243548u;
    if (runtime->hasFunction(0x243548u)) {
        auto targetFn = runtime->lookupFunction(0x243548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438A4u; }
        if (ctx->pc != 0x2438A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243548_0x243548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438A4u; }
        if (ctx->pc != 0x2438A4u) { return; }
    }
    ctx->pc = 0x2438A4u;
label_2438a4:
    // 0x2438a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2438a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2438a8:
    // 0x2438a8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_2438ac:
    if (ctx->pc == 0x2438ACu) {
        ctx->pc = 0x2438ACu;
            // 0x2438ac: 0x24030072  addiu       $v1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->pc = 0x2438B0u;
        goto label_2438b0;
    }
    ctx->pc = 0x2438A8u;
    {
        const bool branch_taken_0x2438a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438A8u;
            // 0x2438ac: 0x24030072  addiu       $v1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438a8) {
            ctx->pc = 0x2438B8u;
            goto label_2438b8;
        }
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x100000af  b           . + 4 + (0xAF << 2)
label_2438b4:
    if (ctx->pc == 0x2438B4u) {
        ctx->pc = 0x2438B4u;
            // 0x2438b4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2438B8u;
        goto label_2438b8;
    }
    ctx->pc = 0x2438B0u;
    {
        const bool branch_taken_0x2438b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438B0u;
            // 0x2438b4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438b0) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x2438B8u;
label_2438b8:
    // 0x2438b8: 0xc098552  jal         func_261548
label_2438bc:
    if (ctx->pc == 0x2438BCu) {
        ctx->pc = 0x2438BCu;
            // 0x2438bc: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x2438C0u;
        goto label_2438c0;
    }
    ctx->pc = 0x2438B8u;
    SET_GPR_U32(ctx, 31, 0x2438C0u);
    ctx->pc = 0x2438BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2438B8u;
            // 0x2438bc: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438C0u; }
        if (ctx->pc != 0x2438C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438C0u; }
        if (ctx->pc != 0x2438C0u) { return; }
    }
    ctx->pc = 0x2438C0u;
label_2438c0:
    // 0x2438c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2438c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2438c4:
    // 0x2438c4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2438c8:
    if (ctx->pc == 0x2438C8u) {
        ctx->pc = 0x2438C8u;
            // 0x2438c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2438CCu;
        goto label_2438cc;
    }
    ctx->pc = 0x2438C4u;
    {
        const bool branch_taken_0x2438c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2438C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438C4u;
            // 0x2438c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438c4) {
            ctx->pc = 0x2438D8u;
            goto label_2438d8;
        }
    }
    ctx->pc = 0x2438CCu;
label_2438cc:
    // 0x2438cc: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x2438ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2438d0:
    // 0x2438d0: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2438d4:
    if (ctx->pc == 0x2438D4u) {
        ctx->pc = 0x2438D4u;
            // 0x2438d4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x2438D8u;
        goto label_2438d8;
    }
    ctx->pc = 0x2438D0u;
    {
        const bool branch_taken_0x2438d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438D0u;
            // 0x2438d4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438d0) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x2438D8u;
label_2438d8:
    // 0x2438d8: 0xc048c96  jal         func_123258
label_2438dc:
    if (ctx->pc == 0x2438DCu) {
        ctx->pc = 0x2438DCu;
            // 0x2438dc: 0x240500b8  addiu       $a1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x2438E0u;
        goto label_2438e0;
    }
    ctx->pc = 0x2438D8u;
    SET_GPR_U32(ctx, 31, 0x2438E0u);
    ctx->pc = 0x2438DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2438D8u;
            // 0x2438dc: 0x240500b8  addiu       $a1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438E0u; }
        if (ctx->pc != 0x2438E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438E0u; }
        if (ctx->pc != 0x2438E0u) { return; }
    }
    ctx->pc = 0x2438E0u;
label_2438e0:
    // 0x2438e0: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x2438e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_2438e4:
    // 0x2438e4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2438e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2438e8:
    // 0x2438e8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2438e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_2438ec:
    // 0x2438ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2438ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2438f0:
    // 0x2438f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2438f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2438f4:
    // 0x2438f4: 0xc090eec  jal         func_243BB0
label_2438f8:
    if (ctx->pc == 0x2438F8u) {
        ctx->pc = 0x2438F8u;
            // 0x2438f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2438FCu;
        goto label_2438fc;
    }
    ctx->pc = 0x2438F4u;
    SET_GPR_U32(ctx, 31, 0x2438FCu);
    ctx->pc = 0x2438F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2438F4u;
            // 0x2438f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243BB0u;
    if (runtime->hasFunction(0x243BB0u)) {
        auto targetFn = runtime->lookupFunction(0x243BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438FCu; }
        if (ctx->pc != 0x2438FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243BB0_0x243bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438FCu; }
        if (ctx->pc != 0x2438FCu) { return; }
    }
    ctx->pc = 0x2438FCu;
label_2438fc:
    // 0x2438fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_243900:
    if (ctx->pc == 0x243900u) {
        ctx->pc = 0x243900u;
            // 0x243900: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x243904u;
        goto label_243904;
    }
    ctx->pc = 0x2438FCu;
    {
        const bool branch_taken_0x2438fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438FCu;
            // 0x243900: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438fc) {
            ctx->pc = 0x243918u;
            goto label_243918;
        }
    }
    ctx->pc = 0x243904u;
label_243904:
    // 0x243904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243908:
    // 0x243908: 0xc098560  jal         func_261580
label_24390c:
    if (ctx->pc == 0x24390Cu) {
        ctx->pc = 0x24390Cu;
            // 0x24390c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->pc = 0x243910u;
        goto label_243910;
    }
    ctx->pc = 0x243908u;
    SET_GPR_U32(ctx, 31, 0x243910u);
    ctx->pc = 0x24390Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243908u;
            // 0x24390c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243910u; }
        if (ctx->pc != 0x243910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243910u; }
        if (ctx->pc != 0x243910u) { return; }
    }
    ctx->pc = 0x243910u;
label_243910:
    // 0x243910: 0x10000097  b           . + 4 + (0x97 << 2)
label_243914:
    if (ctx->pc == 0x243914u) {
        ctx->pc = 0x243918u;
        goto label_243918;
    }
    ctx->pc = 0x243910u;
    {
        const bool branch_taken_0x243910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243910) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243918u;
label_243918:
    // 0x243918: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_24391c:
    if (ctx->pc == 0x24391Cu) {
        ctx->pc = 0x24391Cu;
            // 0x24391c: 0x8e17000c  lw          $s7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x243920u;
        goto label_243920;
    }
    ctx->pc = 0x243918u;
    {
        const bool branch_taken_0x243918 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243918u;
            // 0x24391c: 0x8e17000c  lw          $s7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243918) {
            ctx->pc = 0x243938u;
            goto label_243938;
        }
    }
    ctx->pc = 0x243920u;
label_243920:
    // 0x243920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243924:
    // 0x243924: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x243924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_243928:
    // 0x243928: 0xc090f62  jal         func_243D88
label_24392c:
    if (ctx->pc == 0x24392Cu) {
        ctx->pc = 0x24392Cu;
            // 0x24392c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243930u;
        goto label_243930;
    }
    ctx->pc = 0x243928u;
    SET_GPR_U32(ctx, 31, 0x243930u);
    ctx->pc = 0x24392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243928u;
            // 0x24392c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243D88u;
    if (runtime->hasFunction(0x243D88u)) {
        auto targetFn = runtime->lookupFunction(0x243D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243930u; }
        if (ctx->pc != 0x243930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243D88_0x243d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243930u; }
        if (ctx->pc != 0x243930u) { return; }
    }
    ctx->pc = 0x243930u;
label_243930:
    // 0x243930: 0x10000006  b           . + 4 + (0x6 << 2)
label_243934:
    if (ctx->pc == 0x243934u) {
        ctx->pc = 0x243934u;
            // 0x243934: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->pc = 0x243938u;
        goto label_243938;
    }
    ctx->pc = 0x243930u;
    {
        const bool branch_taken_0x243930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243930u;
            // 0x243934: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243930) {
            ctx->pc = 0x24394Cu;
            goto label_24394c;
        }
    }
    ctx->pc = 0x243938u;
label_243938:
    // 0x243938: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24393c:
    // 0x24393c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x24393cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_243940:
    // 0x243940: 0xc08b4f8  jal         func_22D3E0
label_243944:
    if (ctx->pc == 0x243944u) {
        ctx->pc = 0x243944u;
            // 0x243944: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x243948u;
        goto label_243948;
    }
    ctx->pc = 0x243940u;
    SET_GPR_U32(ctx, 31, 0x243948u);
    ctx->pc = 0x243944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243940u;
            // 0x243944: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243948u; }
        if (ctx->pc != 0x243948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243948u; }
        if (ctx->pc != 0x243948u) { return; }
    }
    ctx->pc = 0x243948u;
label_243948:
    // 0x243948: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x243948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_24394c:
    // 0x24394c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_243950:
    // 0x243950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243954:
    // 0x243954: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x243954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_243958:
    // 0x243958: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x243958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
label_24395c:
    // 0x24395c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x24395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_243960:
    // 0x243960: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x243960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_243964:
    // 0x243964: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_243968:
    // 0x243968: 0x54c3001c  bnel        $a2, $v1, . + 4 + (0x1C << 2)
label_24396c:
    if (ctx->pc == 0x24396Cu) {
        ctx->pc = 0x24396Cu;
            // 0x24396c: 0xde020060  ld          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x243970u;
        goto label_243970;
    }
    ctx->pc = 0x243968u;
    {
        const bool branch_taken_0x243968 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x243968) {
            ctx->pc = 0x24396Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243968u;
            // 0x24396c: 0xde020060  ld          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2439DCu;
            goto label_2439dc;
        }
    }
    ctx->pc = 0x243970u;
label_243970:
    // 0x243970: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x243970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_243974:
    // 0x243974: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x243974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_243978:
    // 0x243978: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_24397c:
    // 0x24397c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x24397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_243980:
    // 0x243980: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x243980u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_243984:
    // 0x243984: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x243984u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_243988:
    // 0x243988: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x243988u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_24398c:
    // 0x24398c: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x24398cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_243990:
    // 0x243990: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x243990u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
label_243994:
    // 0x243994: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x243994u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
label_243998:
    // 0x243998: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x243998u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
label_24399c:
    // 0x24399c: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x24399cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
label_2439a0:
    // 0x2439a0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2439a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2439a4:
    // 0x2439a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2439a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2439a8:
    // 0x2439a8: 0x0  nop
    ctx->pc = 0x2439a8u;
    // NOP
label_2439ac:
    // 0x2439ac: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
label_2439b0:
    if (ctx->pc == 0x2439B0u) {
        ctx->pc = 0x2439B4u;
        goto label_2439b4;
    }
    ctx->pc = 0x2439ACu;
    {
        const bool branch_taken_0x2439ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2439ac) {
            ctx->pc = 0x243980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243980;
        }
    }
    ctx->pc = 0x2439B4u;
label_2439b4:
    // 0x2439b4: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2439b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2439b8:
    // 0x2439b8: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x2439b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2439bc:
    // 0x2439bc: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x2439bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
label_2439c0:
    // 0x2439c0: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x2439c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
label_2439c4:
    // 0x2439c4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2439c8:
    // 0x2439c8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x2439c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_2439cc:
    // 0x2439cc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2439ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2439d0:
    // 0x2439d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2439d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2439d4:
    // 0x2439d4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2439d8:
    if (ctx->pc == 0x2439D8u) {
        ctx->pc = 0x2439D8u;
            // 0x2439d8: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x2439DCu;
        goto label_2439dc;
    }
    ctx->pc = 0x2439D4u;
    {
        const bool branch_taken_0x2439d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2439D4u;
            // 0x2439d8: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439d4) {
            ctx->pc = 0x243A24u;
            goto label_243a24;
        }
    }
    ctx->pc = 0x2439DCu;
label_2439dc:
    // 0x2439dc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2439e0:
    if (ctx->pc == 0x2439E0u) {
        ctx->pc = 0x2439E0u;
            // 0x2439e0: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x2439E4u;
        goto label_2439e4;
    }
    ctx->pc = 0x2439DCu;
    {
        const bool branch_taken_0x2439dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2439dc) {
            ctx->pc = 0x2439E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2439DCu;
            // 0x2439e0: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243A28u;
            goto label_243a28;
        }
    }
    ctx->pc = 0x2439E4u;
label_2439e4:
    // 0x2439e4: 0xde020058  ld          $v0, 0x58($s0)
    ctx->pc = 0x2439e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 88)));
label_2439e8:
    // 0x2439e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2439e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2439ec:
    // 0x2439ec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2439f0:
    if (ctx->pc == 0x2439F0u) {
        ctx->pc = 0x2439F0u;
            // 0x2439f0: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x2439F4u;
        goto label_2439f4;
    }
    ctx->pc = 0x2439ECu;
    {
        const bool branch_taken_0x2439ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2439ec) {
            ctx->pc = 0x2439F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2439ECu;
            // 0x2439f0: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243A28u;
            goto label_243a28;
        }
    }
    ctx->pc = 0x2439F4u;
label_2439f4:
    // 0x2439f4: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x2439f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2439f8:
    // 0x2439f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2439fc:
    if (ctx->pc == 0x2439FCu) {
        ctx->pc = 0x2439FCu;
            // 0x2439fc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x243A00u;
        goto label_243a00;
    }
    ctx->pc = 0x2439F8u;
    {
        const bool branch_taken_0x2439f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2439f8) {
            ctx->pc = 0x2439FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2439F8u;
            // 0x2439fc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243A1Cu;
            goto label_243a1c;
        }
    }
    ctx->pc = 0x243A00u;
label_243a00:
    // 0x243a00: 0xdc420060  ld          $v0, 0x60($v0)
    ctx->pc = 0x243a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 96)));
label_243a04:
    // 0x243a04: 0x10000007  b           . + 4 + (0x7 << 2)
label_243a08:
    if (ctx->pc == 0x243A08u) {
        ctx->pc = 0x243A08u;
            // 0x243a08: 0xfe020060  sd          $v0, 0x60($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
        ctx->pc = 0x243A0Cu;
        goto label_243a0c;
    }
    ctx->pc = 0x243A04u;
    {
        const bool branch_taken_0x243a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A04u;
            // 0x243a08: 0xfe020060  sd          $v0, 0x60($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a04) {
            ctx->pc = 0x243A24u;
            goto label_243a24;
        }
    }
    ctx->pc = 0x243A0Cu;
label_243a0c:
    // 0x243a0c: 0xc090c4c  jal         func_243130
label_243a10:
    if (ctx->pc == 0x243A10u) {
        ctx->pc = 0x243A10u;
            // 0x243a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A14u;
        goto label_243a14;
    }
    ctx->pc = 0x243A0Cu;
    SET_GPR_U32(ctx, 31, 0x243A14u);
    ctx->pc = 0x243A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A0Cu;
            // 0x243a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A14u; }
        if (ctx->pc != 0x243A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A14u; }
        if (ctx->pc != 0x243A14u) { return; }
    }
    ctx->pc = 0x243A14u;
label_243a14:
    // 0x243a14: 0x10000024  b           . + 4 + (0x24 << 2)
label_243a18:
    if (ctx->pc == 0x243A18u) {
        ctx->pc = 0x243A1Cu;
        goto label_243a1c;
    }
    ctx->pc = 0x243A14u;
    {
        const bool branch_taken_0x243a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a14) {
            ctx->pc = 0x243AA8u;
            goto label_243aa8;
        }
    }
    ctx->pc = 0x243A1Cu;
label_243a1c:
    // 0x243a1c: 0xdc430040  ld          $v1, 0x40($v0)
    ctx->pc = 0x243a1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_243a20:
    // 0x243a20: 0xfe030060  sd          $v1, 0x60($s0)
    ctx->pc = 0x243a20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 3));
label_243a24:
    // 0x243a24: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_243a28:
    // 0x243a28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x243a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_243a2c:
    // 0x243a2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x243a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_243a30:
    // 0x243a30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x243a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243a34:
    // 0x243a34: 0x40f809  jalr        $v0
label_243a38:
    if (ctx->pc == 0x243A38u) {
        ctx->pc = 0x243A38u;
            // 0x243a38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A3Cu;
        goto label_243a3c;
    }
    ctx->pc = 0x243A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243A3Cu);
        ctx->pc = 0x243A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A34u;
            // 0x243a38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243A3Cu; }
            if (ctx->pc != 0x243A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x243A3Cu;
label_243a3c:
    // 0x243a3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243a40:
    // 0x243a40: 0x56400037  bnel        $s2, $zero, . + 4 + (0x37 << 2)
label_243a44:
    if (ctx->pc == 0x243A44u) {
        ctx->pc = 0x243A44u;
            // 0x243a44: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->pc = 0x243A48u;
        goto label_243a48;
    }
    ctx->pc = 0x243A40u;
    {
        const bool branch_taken_0x243a40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a40) {
            ctx->pc = 0x243A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243A40u;
            // 0x243a44: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243B20u;
            goto label_243b20;
        }
    }
    ctx->pc = 0x243A48u;
label_243a48:
    // 0x243a48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x243a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_243a4c:
    // 0x243a4c: 0xc090bf0  jal         func_242FC0
label_243a50:
    if (ctx->pc == 0x243A50u) {
        ctx->pc = 0x243A50u;
            // 0x243a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A54u;
        goto label_243a54;
    }
    ctx->pc = 0x243A4Cu;
    SET_GPR_U32(ctx, 31, 0x243A54u);
    ctx->pc = 0x243A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A4Cu;
            // 0x243a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (runtime->hasFunction(0x242FC0u)) {
        auto targetFn = runtime->lookupFunction(0x242FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A54u; }
        if (ctx->pc != 0x243A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242FC0_0x242fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A54u; }
        if (ctx->pc != 0x243A54u) { return; }
    }
    ctx->pc = 0x243A54u;
label_243a54:
    // 0x243a54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x243a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243a58:
    // 0x243a58: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_243a5c:
    if (ctx->pc == 0x243A5Cu) {
        ctx->pc = 0x243A60u;
        goto label_243a60;
    }
    ctx->pc = 0x243A58u;
    {
        const bool branch_taken_0x243a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a58) {
            ctx->pc = 0x243AA8u;
            goto label_243aa8;
        }
    }
    ctx->pc = 0x243A60u;
label_243a60:
    // 0x243a60: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x243a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_243a64:
    // 0x243a64: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x243a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_243a68:
    // 0x243a68: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_243a6c:
    if (ctx->pc == 0x243A6Cu) {
        ctx->pc = 0x243A6Cu;
            // 0x243a6c: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x243A70u;
        goto label_243a70;
    }
    ctx->pc = 0x243A68u;
    {
        const bool branch_taken_0x243a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a68) {
            ctx->pc = 0x243A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243A68u;
            // 0x243a6c: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243A98u;
            goto label_243a98;
        }
    }
    ctx->pc = 0x243A70u;
label_243a70:
    // 0x243a70: 0xc090d0a  jal         func_243428
label_243a74:
    if (ctx->pc == 0x243A74u) {
        ctx->pc = 0x243A74u;
            // 0x243a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A78u;
        goto label_243a78;
    }
    ctx->pc = 0x243A70u;
    SET_GPR_U32(ctx, 31, 0x243A78u);
    ctx->pc = 0x243A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A70u;
            // 0x243a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (runtime->hasFunction(0x243428u)) {
        auto targetFn = runtime->lookupFunction(0x243428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A78u; }
        if (ctx->pc != 0x243A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243428_0x243428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A78u; }
        if (ctx->pc != 0x243A78u) { return; }
    }
    ctx->pc = 0x243A78u;
label_243a78:
    // 0x243a78: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x243a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_243a7c:
    // 0x243a7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x243a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_243a80:
    // 0x243a80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x243a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_243a84:
    // 0x243a84: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x243a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243a88:
    // 0x243a88: 0x40f809  jalr        $v0
label_243a8c:
    if (ctx->pc == 0x243A8Cu) {
        ctx->pc = 0x243A8Cu;
            // 0x243a8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A90u;
        goto label_243a90;
    }
    ctx->pc = 0x243A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243A90u);
        ctx->pc = 0x243A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A88u;
            // 0x243a8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243A90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243A90u; }
            if (ctx->pc != 0x243A90u) { return; }
        }
        }
    }
    ctx->pc = 0x243A90u;
label_243a90:
    // 0x243a90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243a94:
    // 0x243a94: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x243a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_243a98:
    // 0x243a98: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x243a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_243a9c:
    // 0x243a9c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_243aa0:
    if (ctx->pc == 0x243AA0u) {
        ctx->pc = 0x243AA0u;
            // 0x243aa0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x243AA4u;
        goto label_243aa4;
    }
    ctx->pc = 0x243A9Cu;
    {
        const bool branch_taken_0x243a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A9Cu;
            // 0x243aa0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a9c) {
            ctx->pc = 0x243A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243a0c;
        }
    }
    ctx->pc = 0x243AA4u;
label_243aa4:
    // 0x243aa4: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x243aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_243aa8:
    // 0x243aa8: 0x5640001d  bnel        $s2, $zero, . + 4 + (0x1D << 2)
label_243aac:
    if (ctx->pc == 0x243AACu) {
        ctx->pc = 0x243AACu;
            // 0x243aac: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->pc = 0x243AB0u;
        goto label_243ab0;
    }
    ctx->pc = 0x243AA8u;
    {
        const bool branch_taken_0x243aa8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x243aa8) {
            ctx->pc = 0x243AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243AA8u;
            // 0x243aac: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243B20u;
            goto label_243b20;
        }
    }
    ctx->pc = 0x243AB0u;
label_243ab0:
    // 0x243ab0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x243ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_243ab4:
    // 0x243ab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_243ab8:
    // 0x243ab8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_243abc:
    if (ctx->pc == 0x243ABCu) {
        ctx->pc = 0x243ABCu;
            // 0x243abc: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x243AC0u;
        goto label_243ac0;
    }
    ctx->pc = 0x243AB8u;
    {
        const bool branch_taken_0x243ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AB8u;
            // 0x243abc: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ab8) {
            ctx->pc = 0x243AC8u;
            goto label_243ac8;
        }
    }
    ctx->pc = 0x243AC0u;
label_243ac0:
    // 0x243ac0: 0xc090c82  jal         func_243208
label_243ac4:
    if (ctx->pc == 0x243AC4u) {
        ctx->pc = 0x243AC4u;
            // 0x243ac4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243AC8u;
        goto label_243ac8;
    }
    ctx->pc = 0x243AC0u;
    SET_GPR_U32(ctx, 31, 0x243AC8u);
    ctx->pc = 0x243AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243AC0u;
            // 0x243ac4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (runtime->hasFunction(0x243208u)) {
        auto targetFn = runtime->lookupFunction(0x243208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AC8u; }
        if (ctx->pc != 0x243AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243208_0x243208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AC8u; }
        if (ctx->pc != 0x243AC8u) { return; }
    }
    ctx->pc = 0x243AC8u;
label_243ac8:
    // 0x243ac8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x243ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_243acc:
    // 0x243acc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x243accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_243ad0:
    // 0x243ad0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_243ad4:
    if (ctx->pc == 0x243AD4u) {
        ctx->pc = 0x243AD4u;
            // 0x243ad4: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->pc = 0x243AD8u;
        goto label_243ad8;
    }
    ctx->pc = 0x243AD0u;
    {
        const bool branch_taken_0x243ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ad0) {
            ctx->pc = 0x243AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243AD0u;
            // 0x243ad4: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243AF0u;
            goto label_243af0;
        }
    }
    ctx->pc = 0x243AD8u;
label_243ad8:
    // 0x243ad8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x243ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_243adc:
    // 0x243adc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_243ae0:
    if (ctx->pc == 0x243AE0u) {
        ctx->pc = 0x243AE0u;
            // 0x243ae0: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->pc = 0x243AE4u;
        goto label_243ae4;
    }
    ctx->pc = 0x243ADCu;
    {
        const bool branch_taken_0x243adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x243adc) {
            ctx->pc = 0x243AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243ADCu;
            // 0x243ae0: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243AF0u;
            goto label_243af0;
        }
    }
    ctx->pc = 0x243AE4u;
label_243ae4:
    // 0x243ae4: 0xc090c4c  jal         func_243130
label_243ae8:
    if (ctx->pc == 0x243AE8u) {
        ctx->pc = 0x243AECu;
        goto label_243aec;
    }
    ctx->pc = 0x243AE4u;
    SET_GPR_U32(ctx, 31, 0x243AECu);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AECu; }
        if (ctx->pc != 0x243AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AECu; }
        if (ctx->pc != 0x243AECu) { return; }
    }
    ctx->pc = 0x243AECu;
label_243aec:
    // 0x243aec: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x243aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_243af0:
    // 0x243af0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_243af4:
    if (ctx->pc == 0x243AF4u) {
        ctx->pc = 0x243AF4u;
            // 0x243af4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x243AF8u;
        goto label_243af8;
    }
    ctx->pc = 0x243AF0u;
    {
        const bool branch_taken_0x243af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x243af0) {
            ctx->pc = 0x243AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243AF0u;
            // 0x243af4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243AF8u;
label_243af8:
    // 0x243af8: 0xc090c4c  jal         func_243130
label_243afc:
    if (ctx->pc == 0x243AFCu) {
        ctx->pc = 0x243B00u;
        goto label_243b00;
    }
    ctx->pc = 0x243AF8u;
    SET_GPR_U32(ctx, 31, 0x243B00u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B00u; }
        if (ctx->pc != 0x243B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B00u; }
        if (ctx->pc != 0x243B00u) { return; }
    }
    ctx->pc = 0x243B00u;
label_243b00:
    // 0x243b00: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_243b04:
    // 0x243b04: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x243b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_243b08:
    // 0x243b08: 0xc098560  jal         func_261580
label_243b0c:
    if (ctx->pc == 0x243B0Cu) {
        ctx->pc = 0x243B0Cu;
            // 0x243b0c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->pc = 0x243B10u;
        goto label_243b10;
    }
    ctx->pc = 0x243B08u;
    SET_GPR_U32(ctx, 31, 0x243B10u);
    ctx->pc = 0x243B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B08u;
            // 0x243b0c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B10u; }
        if (ctx->pc != 0x243B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B10u; }
        if (ctx->pc != 0x243B10u) { return; }
    }
    ctx->pc = 0x243B10u;
label_243b10:
    // 0x243b10: 0xc098560  jal         func_261580
label_243b14:
    if (ctx->pc == 0x243B14u) {
        ctx->pc = 0x243B14u;
            // 0x243b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B18u;
        goto label_243b18;
    }
    ctx->pc = 0x243B10u;
    SET_GPR_U32(ctx, 31, 0x243B18u);
    ctx->pc = 0x243B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B10u;
            // 0x243b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B18u; }
        if (ctx->pc != 0x243B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B18u; }
        if (ctx->pc != 0x243B18u) { return; }
    }
    ctx->pc = 0x243B18u;
label_243b18:
    // 0x243b18: 0x10000015  b           . + 4 + (0x15 << 2)
label_243b1c:
    if (ctx->pc == 0x243B1Cu) {
        ctx->pc = 0x243B20u;
        goto label_243b20;
    }
    ctx->pc = 0x243B18u;
    {
        const bool branch_taken_0x243b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b18) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243B20u;
label_243b20:
    // 0x243b20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_243b24:
    if (ctx->pc == 0x243B24u) {
        ctx->pc = 0x243B28u;
        goto label_243b28;
    }
    ctx->pc = 0x243B20u;
    {
        const bool branch_taken_0x243b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b20) {
            ctx->pc = 0x243B40u;
            goto label_243b40;
        }
    }
    ctx->pc = 0x243B28u;
label_243b28:
    // 0x243b28: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_243b2c:
    if (ctx->pc == 0x243B2Cu) {
        ctx->pc = 0x243B2Cu;
            // 0x243b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B30u;
        goto label_243b30;
    }
    ctx->pc = 0x243B28u;
    {
        const bool branch_taken_0x243b28 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B28u;
            // 0x243b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b28) {
            ctx->pc = 0x243B34u;
            goto label_243b34;
        }
    }
    ctx->pc = 0x243B30u;
label_243b30:
    // 0x243b30: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x243b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_243b34:
    // 0x243b34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x243b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_243b38:
    // 0x243b38: 0x40f809  jalr        $v0
label_243b3c:
    if (ctx->pc == 0x243B3Cu) {
        ctx->pc = 0x243B3Cu;
            // 0x243b3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B40u;
        goto label_243b40;
    }
    ctx->pc = 0x243B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243B40u);
        ctx->pc = 0x243B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B38u;
            // 0x243b3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243B40u; }
            if (ctx->pc != 0x243B40u) { return; }
        }
        }
    }
    ctx->pc = 0x243B40u;
label_243b40:
    // 0x243b40: 0x53c00006  beql        $fp, $zero, . + 4 + (0x6 << 2)
label_243b44:
    if (ctx->pc == 0x243B44u) {
        ctx->pc = 0x243B44u;
            // 0x243b44: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x243B48u;
        goto label_243b48;
    }
    ctx->pc = 0x243B40u;
    {
        const bool branch_taken_0x243b40 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b40) {
            ctx->pc = 0x243B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243B40u;
            // 0x243b44: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243B5Cu;
            goto label_243b5c;
        }
    }
    ctx->pc = 0x243B48u;
label_243b48:
    // 0x243b48: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x243b48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
label_243b4c:
    // 0x243b4c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x243b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_243b50:
    // 0x243b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243b54:
    // 0x243b54: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x243b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_243b58:
    // 0x243b58: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x243b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_243b5c:
    // 0x243b5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x243b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_243b60:
    // 0x243b60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243b64:
    if (ctx->pc == 0x243B64u) {
        ctx->pc = 0x243B64u;
            // 0x243b64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B68u;
        goto label_243b68;
    }
    ctx->pc = 0x243B60u;
    {
        const bool branch_taken_0x243b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B60u;
            // 0x243b64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b60) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243B68u;
label_243b68:
    // 0x243b68: 0xc090d46  jal         func_243518
label_243b6c:
    if (ctx->pc == 0x243B6Cu) {
        ctx->pc = 0x243B6Cu;
            // 0x243b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B70u;
        goto label_243b70;
    }
    ctx->pc = 0x243B68u;
    SET_GPR_U32(ctx, 31, 0x243B70u);
    ctx->pc = 0x243B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B68u;
            // 0x243b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243518u;
    if (runtime->hasFunction(0x243518u)) {
        auto targetFn = runtime->lookupFunction(0x243518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B70u; }
        if (ctx->pc != 0x243B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243518_0x243518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B70u; }
        if (ctx->pc != 0x243B70u) { return; }
    }
    ctx->pc = 0x243B70u;
label_243b70:
    // 0x243b70: 0xc08c698  jal         func_231A60
label_243b74:
    if (ctx->pc == 0x243B74u) {
        ctx->pc = 0x243B74u;
            // 0x243b74: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x243B78u;
        goto label_243b78;
    }
    ctx->pc = 0x243B70u;
    SET_GPR_U32(ctx, 31, 0x243B78u);
    ctx->pc = 0x243B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B70u;
            // 0x243b74: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B78u; }
        if (ctx->pc != 0x243B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B78u; }
        if (ctx->pc != 0x243B78u) { return; }
    }
    ctx->pc = 0x243B78u;
label_243b78:
    // 0x243b78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x243b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_243b7c:
    // 0x243b7c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x243b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_243b80:
    // 0x243b80: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x243b80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_243b84:
    // 0x243b84: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x243b84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_243b88:
    // 0x243b88: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x243b88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_243b8c:
    // 0x243b8c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x243b8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_243b90:
    // 0x243b90: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x243b90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_243b94:
    // 0x243b94: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x243b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_243b98:
    // 0x243b98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x243b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_243b9c:
    // 0x243b9c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x243b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_243ba0:
    // 0x243ba0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x243ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243ba4:
    // 0x243ba4: 0x3e00008  jr          $ra
label_243ba8:
    if (ctx->pc == 0x243BA8u) {
        ctx->pc = 0x243BA8u;
            // 0x243ba8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x243BACu;
        goto label_243bac;
    }
    ctx->pc = 0x243BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BA4u;
            // 0x243ba8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243BACu;
label_243bac:
    // 0x243bac: 0x0  nop
    ctx->pc = 0x243bacu;
    // NOP
    ctx->pc = 0x243bb0u;
}
