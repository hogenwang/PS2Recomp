#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB720
// Address: 0x2ab720 - 0x2abb70
void sub_002AB720_0x2ab720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB720_0x2ab720");
#endif

    switch (ctx->pc) {
        case 0x2ab720u: goto label_2ab720;
        case 0x2ab724u: goto label_2ab724;
        case 0x2ab728u: goto label_2ab728;
        case 0x2ab72cu: goto label_2ab72c;
        case 0x2ab730u: goto label_2ab730;
        case 0x2ab734u: goto label_2ab734;
        case 0x2ab738u: goto label_2ab738;
        case 0x2ab73cu: goto label_2ab73c;
        case 0x2ab740u: goto label_2ab740;
        case 0x2ab744u: goto label_2ab744;
        case 0x2ab748u: goto label_2ab748;
        case 0x2ab74cu: goto label_2ab74c;
        case 0x2ab750u: goto label_2ab750;
        case 0x2ab754u: goto label_2ab754;
        case 0x2ab758u: goto label_2ab758;
        case 0x2ab75cu: goto label_2ab75c;
        case 0x2ab760u: goto label_2ab760;
        case 0x2ab764u: goto label_2ab764;
        case 0x2ab768u: goto label_2ab768;
        case 0x2ab76cu: goto label_2ab76c;
        case 0x2ab770u: goto label_2ab770;
        case 0x2ab774u: goto label_2ab774;
        case 0x2ab778u: goto label_2ab778;
        case 0x2ab77cu: goto label_2ab77c;
        case 0x2ab780u: goto label_2ab780;
        case 0x2ab784u: goto label_2ab784;
        case 0x2ab788u: goto label_2ab788;
        case 0x2ab78cu: goto label_2ab78c;
        case 0x2ab790u: goto label_2ab790;
        case 0x2ab794u: goto label_2ab794;
        case 0x2ab798u: goto label_2ab798;
        case 0x2ab79cu: goto label_2ab79c;
        case 0x2ab7a0u: goto label_2ab7a0;
        case 0x2ab7a4u: goto label_2ab7a4;
        case 0x2ab7a8u: goto label_2ab7a8;
        case 0x2ab7acu: goto label_2ab7ac;
        case 0x2ab7b0u: goto label_2ab7b0;
        case 0x2ab7b4u: goto label_2ab7b4;
        case 0x2ab7b8u: goto label_2ab7b8;
        case 0x2ab7bcu: goto label_2ab7bc;
        case 0x2ab7c0u: goto label_2ab7c0;
        case 0x2ab7c4u: goto label_2ab7c4;
        case 0x2ab7c8u: goto label_2ab7c8;
        case 0x2ab7ccu: goto label_2ab7cc;
        case 0x2ab7d0u: goto label_2ab7d0;
        case 0x2ab7d4u: goto label_2ab7d4;
        case 0x2ab7d8u: goto label_2ab7d8;
        case 0x2ab7dcu: goto label_2ab7dc;
        case 0x2ab7e0u: goto label_2ab7e0;
        case 0x2ab7e4u: goto label_2ab7e4;
        case 0x2ab7e8u: goto label_2ab7e8;
        case 0x2ab7ecu: goto label_2ab7ec;
        case 0x2ab7f0u: goto label_2ab7f0;
        case 0x2ab7f4u: goto label_2ab7f4;
        case 0x2ab7f8u: goto label_2ab7f8;
        case 0x2ab7fcu: goto label_2ab7fc;
        case 0x2ab800u: goto label_2ab800;
        case 0x2ab804u: goto label_2ab804;
        case 0x2ab808u: goto label_2ab808;
        case 0x2ab80cu: goto label_2ab80c;
        case 0x2ab810u: goto label_2ab810;
        case 0x2ab814u: goto label_2ab814;
        case 0x2ab818u: goto label_2ab818;
        case 0x2ab81cu: goto label_2ab81c;
        case 0x2ab820u: goto label_2ab820;
        case 0x2ab824u: goto label_2ab824;
        case 0x2ab828u: goto label_2ab828;
        case 0x2ab82cu: goto label_2ab82c;
        case 0x2ab830u: goto label_2ab830;
        case 0x2ab834u: goto label_2ab834;
        case 0x2ab838u: goto label_2ab838;
        case 0x2ab83cu: goto label_2ab83c;
        case 0x2ab840u: goto label_2ab840;
        case 0x2ab844u: goto label_2ab844;
        case 0x2ab848u: goto label_2ab848;
        case 0x2ab84cu: goto label_2ab84c;
        case 0x2ab850u: goto label_2ab850;
        case 0x2ab854u: goto label_2ab854;
        case 0x2ab858u: goto label_2ab858;
        case 0x2ab85cu: goto label_2ab85c;
        case 0x2ab860u: goto label_2ab860;
        case 0x2ab864u: goto label_2ab864;
        case 0x2ab868u: goto label_2ab868;
        case 0x2ab86cu: goto label_2ab86c;
        case 0x2ab870u: goto label_2ab870;
        case 0x2ab874u: goto label_2ab874;
        case 0x2ab878u: goto label_2ab878;
        case 0x2ab87cu: goto label_2ab87c;
        case 0x2ab880u: goto label_2ab880;
        case 0x2ab884u: goto label_2ab884;
        case 0x2ab888u: goto label_2ab888;
        case 0x2ab88cu: goto label_2ab88c;
        case 0x2ab890u: goto label_2ab890;
        case 0x2ab894u: goto label_2ab894;
        case 0x2ab898u: goto label_2ab898;
        case 0x2ab89cu: goto label_2ab89c;
        case 0x2ab8a0u: goto label_2ab8a0;
        case 0x2ab8a4u: goto label_2ab8a4;
        case 0x2ab8a8u: goto label_2ab8a8;
        case 0x2ab8acu: goto label_2ab8ac;
        case 0x2ab8b0u: goto label_2ab8b0;
        case 0x2ab8b4u: goto label_2ab8b4;
        case 0x2ab8b8u: goto label_2ab8b8;
        case 0x2ab8bcu: goto label_2ab8bc;
        case 0x2ab8c0u: goto label_2ab8c0;
        case 0x2ab8c4u: goto label_2ab8c4;
        case 0x2ab8c8u: goto label_2ab8c8;
        case 0x2ab8ccu: goto label_2ab8cc;
        case 0x2ab8d0u: goto label_2ab8d0;
        case 0x2ab8d4u: goto label_2ab8d4;
        case 0x2ab8d8u: goto label_2ab8d8;
        case 0x2ab8dcu: goto label_2ab8dc;
        case 0x2ab8e0u: goto label_2ab8e0;
        case 0x2ab8e4u: goto label_2ab8e4;
        case 0x2ab8e8u: goto label_2ab8e8;
        case 0x2ab8ecu: goto label_2ab8ec;
        case 0x2ab8f0u: goto label_2ab8f0;
        case 0x2ab8f4u: goto label_2ab8f4;
        case 0x2ab8f8u: goto label_2ab8f8;
        case 0x2ab8fcu: goto label_2ab8fc;
        case 0x2ab900u: goto label_2ab900;
        case 0x2ab904u: goto label_2ab904;
        case 0x2ab908u: goto label_2ab908;
        case 0x2ab90cu: goto label_2ab90c;
        case 0x2ab910u: goto label_2ab910;
        case 0x2ab914u: goto label_2ab914;
        case 0x2ab918u: goto label_2ab918;
        case 0x2ab91cu: goto label_2ab91c;
        case 0x2ab920u: goto label_2ab920;
        case 0x2ab924u: goto label_2ab924;
        case 0x2ab928u: goto label_2ab928;
        case 0x2ab92cu: goto label_2ab92c;
        case 0x2ab930u: goto label_2ab930;
        case 0x2ab934u: goto label_2ab934;
        case 0x2ab938u: goto label_2ab938;
        case 0x2ab93cu: goto label_2ab93c;
        case 0x2ab940u: goto label_2ab940;
        case 0x2ab944u: goto label_2ab944;
        case 0x2ab948u: goto label_2ab948;
        case 0x2ab94cu: goto label_2ab94c;
        case 0x2ab950u: goto label_2ab950;
        case 0x2ab954u: goto label_2ab954;
        case 0x2ab958u: goto label_2ab958;
        case 0x2ab95cu: goto label_2ab95c;
        case 0x2ab960u: goto label_2ab960;
        case 0x2ab964u: goto label_2ab964;
        case 0x2ab968u: goto label_2ab968;
        case 0x2ab96cu: goto label_2ab96c;
        case 0x2ab970u: goto label_2ab970;
        case 0x2ab974u: goto label_2ab974;
        case 0x2ab978u: goto label_2ab978;
        case 0x2ab97cu: goto label_2ab97c;
        case 0x2ab980u: goto label_2ab980;
        case 0x2ab984u: goto label_2ab984;
        case 0x2ab988u: goto label_2ab988;
        case 0x2ab98cu: goto label_2ab98c;
        case 0x2ab990u: goto label_2ab990;
        case 0x2ab994u: goto label_2ab994;
        case 0x2ab998u: goto label_2ab998;
        case 0x2ab99cu: goto label_2ab99c;
        case 0x2ab9a0u: goto label_2ab9a0;
        case 0x2ab9a4u: goto label_2ab9a4;
        case 0x2ab9a8u: goto label_2ab9a8;
        case 0x2ab9acu: goto label_2ab9ac;
        case 0x2ab9b0u: goto label_2ab9b0;
        case 0x2ab9b4u: goto label_2ab9b4;
        case 0x2ab9b8u: goto label_2ab9b8;
        case 0x2ab9bcu: goto label_2ab9bc;
        case 0x2ab9c0u: goto label_2ab9c0;
        case 0x2ab9c4u: goto label_2ab9c4;
        case 0x2ab9c8u: goto label_2ab9c8;
        case 0x2ab9ccu: goto label_2ab9cc;
        case 0x2ab9d0u: goto label_2ab9d0;
        case 0x2ab9d4u: goto label_2ab9d4;
        case 0x2ab9d8u: goto label_2ab9d8;
        case 0x2ab9dcu: goto label_2ab9dc;
        case 0x2ab9e0u: goto label_2ab9e0;
        case 0x2ab9e4u: goto label_2ab9e4;
        case 0x2ab9e8u: goto label_2ab9e8;
        case 0x2ab9ecu: goto label_2ab9ec;
        case 0x2ab9f0u: goto label_2ab9f0;
        case 0x2ab9f4u: goto label_2ab9f4;
        case 0x2ab9f8u: goto label_2ab9f8;
        case 0x2ab9fcu: goto label_2ab9fc;
        case 0x2aba00u: goto label_2aba00;
        case 0x2aba04u: goto label_2aba04;
        case 0x2aba08u: goto label_2aba08;
        case 0x2aba0cu: goto label_2aba0c;
        case 0x2aba10u: goto label_2aba10;
        case 0x2aba14u: goto label_2aba14;
        case 0x2aba18u: goto label_2aba18;
        case 0x2aba1cu: goto label_2aba1c;
        case 0x2aba20u: goto label_2aba20;
        case 0x2aba24u: goto label_2aba24;
        case 0x2aba28u: goto label_2aba28;
        case 0x2aba2cu: goto label_2aba2c;
        case 0x2aba30u: goto label_2aba30;
        case 0x2aba34u: goto label_2aba34;
        case 0x2aba38u: goto label_2aba38;
        case 0x2aba3cu: goto label_2aba3c;
        case 0x2aba40u: goto label_2aba40;
        case 0x2aba44u: goto label_2aba44;
        case 0x2aba48u: goto label_2aba48;
        case 0x2aba4cu: goto label_2aba4c;
        case 0x2aba50u: goto label_2aba50;
        case 0x2aba54u: goto label_2aba54;
        case 0x2aba58u: goto label_2aba58;
        case 0x2aba5cu: goto label_2aba5c;
        case 0x2aba60u: goto label_2aba60;
        case 0x2aba64u: goto label_2aba64;
        case 0x2aba68u: goto label_2aba68;
        case 0x2aba6cu: goto label_2aba6c;
        case 0x2aba70u: goto label_2aba70;
        case 0x2aba74u: goto label_2aba74;
        case 0x2aba78u: goto label_2aba78;
        case 0x2aba7cu: goto label_2aba7c;
        case 0x2aba80u: goto label_2aba80;
        case 0x2aba84u: goto label_2aba84;
        case 0x2aba88u: goto label_2aba88;
        case 0x2aba8cu: goto label_2aba8c;
        case 0x2aba90u: goto label_2aba90;
        case 0x2aba94u: goto label_2aba94;
        case 0x2aba98u: goto label_2aba98;
        case 0x2aba9cu: goto label_2aba9c;
        case 0x2abaa0u: goto label_2abaa0;
        case 0x2abaa4u: goto label_2abaa4;
        case 0x2abaa8u: goto label_2abaa8;
        case 0x2abaacu: goto label_2abaac;
        case 0x2abab0u: goto label_2abab0;
        case 0x2abab4u: goto label_2abab4;
        case 0x2abab8u: goto label_2abab8;
        case 0x2ababcu: goto label_2ababc;
        case 0x2abac0u: goto label_2abac0;
        case 0x2abac4u: goto label_2abac4;
        case 0x2abac8u: goto label_2abac8;
        case 0x2abaccu: goto label_2abacc;
        case 0x2abad0u: goto label_2abad0;
        case 0x2abad4u: goto label_2abad4;
        case 0x2abad8u: goto label_2abad8;
        case 0x2abadcu: goto label_2abadc;
        case 0x2abae0u: goto label_2abae0;
        case 0x2abae4u: goto label_2abae4;
        case 0x2abae8u: goto label_2abae8;
        case 0x2abaecu: goto label_2abaec;
        case 0x2abaf0u: goto label_2abaf0;
        case 0x2abaf4u: goto label_2abaf4;
        case 0x2abaf8u: goto label_2abaf8;
        case 0x2abafcu: goto label_2abafc;
        case 0x2abb00u: goto label_2abb00;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb08u: goto label_2abb08;
        case 0x2abb0cu: goto label_2abb0c;
        case 0x2abb10u: goto label_2abb10;
        case 0x2abb14u: goto label_2abb14;
        case 0x2abb18u: goto label_2abb18;
        case 0x2abb1cu: goto label_2abb1c;
        case 0x2abb20u: goto label_2abb20;
        case 0x2abb24u: goto label_2abb24;
        case 0x2abb28u: goto label_2abb28;
        case 0x2abb2cu: goto label_2abb2c;
        case 0x2abb30u: goto label_2abb30;
        case 0x2abb34u: goto label_2abb34;
        case 0x2abb38u: goto label_2abb38;
        case 0x2abb3cu: goto label_2abb3c;
        case 0x2abb40u: goto label_2abb40;
        case 0x2abb44u: goto label_2abb44;
        case 0x2abb48u: goto label_2abb48;
        case 0x2abb4cu: goto label_2abb4c;
        case 0x2abb50u: goto label_2abb50;
        case 0x2abb54u: goto label_2abb54;
        case 0x2abb58u: goto label_2abb58;
        case 0x2abb5cu: goto label_2abb5c;
        case 0x2abb60u: goto label_2abb60;
        case 0x2abb64u: goto label_2abb64;
        case 0x2abb68u: goto label_2abb68;
        case 0x2abb6cu: goto label_2abb6c;
        default: break;
    }

    ctx->pc = 0x2ab720u;

label_2ab720:
    // 0x2ab720: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ab720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2ab724:
    // 0x2ab724: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2ab724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_2ab728:
    // 0x2ab728: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2ab728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2ab72c:
    // 0x2ab72c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ab72cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab730:
    // 0x2ab730: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2ab730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_2ab734:
    // 0x2ab734: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ab734u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab738:
    // 0x2ab738: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2ab738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2ab73c:
    // 0x2ab73c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2ab73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2ab740:
    // 0x2ab740: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ab740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab744:
    // 0x2ab744: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ab744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2ab748:
    // 0x2ab748: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ab748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab74c:
    // 0x2ab74c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ab74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2ab750:
    // 0x2ab750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ab754:
    // 0x2ab754: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ab754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2ab758:
    // 0x2ab758: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2ab758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2ab75c:
    // 0x2ab75c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2ab75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2ab760:
    // 0x2ab760: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2ab760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2ab764:
    // 0x2ab764: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2ab764u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ab768:
    // 0x2ab768: 0x24021050  addiu       $v0, $zero, 0x1050
    ctx->pc = 0x2ab768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4176));
label_2ab76c:
    // 0x2ab76c: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
label_2ab770:
    if (ctx->pc == 0x2AB770u) {
        ctx->pc = 0x2AB770u;
            // 0x2ab770: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x2AB774u;
        goto label_2ab774;
    }
    ctx->pc = 0x2AB76Cu;
    {
        const bool branch_taken_0x2ab76c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB76Cu;
            // 0x2ab770: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab76c) {
            ctx->pc = 0x2AB82Cu;
            goto label_2ab82c;
        }
    }
    ctx->pc = 0x2AB774u;
label_2ab774:
    // 0x2ab774: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2ab774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2ab778:
    // 0x2ab778: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2ab778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2ab77c:
    // 0x2ab77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab780:
    // 0x2ab780: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2ab780u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2ab784:
    // 0x2ab784: 0xc0ac856  jal         func_2B2158
label_2ab788:
    if (ctx->pc == 0x2AB788u) {
        ctx->pc = 0x2AB788u;
            // 0x2ab788: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x2AB78Cu;
        goto label_2ab78c;
    }
    ctx->pc = 0x2AB784u;
    SET_GPR_U32(ctx, 31, 0x2AB78Cu);
    ctx->pc = 0x2AB788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB784u;
            // 0x2ab788: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (runtime->hasFunction(0x2B2158u)) {
        auto targetFn = runtime->lookupFunction(0x2B2158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB78Cu; }
        if (ctx->pc != 0x2AB78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2158_0x2b2158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB78Cu; }
        if (ctx->pc != 0x2AB78Cu) { return; }
    }
    ctx->pc = 0x2AB78Cu;
label_2ab78c:
    // 0x2ab78c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2ab78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2ab790:
    // 0x2ab790: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2ab790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2ab794:
    // 0x2ab794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab798:
    // 0x2ab798: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ab798u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ab79c:
    // 0x2ab79c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2ab79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ab7a0:
    // 0x2ab7a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2ab7a4:
    if (ctx->pc == 0x2AB7A4u) {
        ctx->pc = 0x2AB7A4u;
            // 0x2ab7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7A8u;
        goto label_2ab7a8;
    }
    ctx->pc = 0x2AB7A0u;
    {
        const bool branch_taken_0x2ab7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7A0u;
            // 0x2ab7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7a0) {
            ctx->pc = 0x2AB7BCu;
            goto label_2ab7bc;
        }
    }
    ctx->pc = 0x2AB7A8u;
label_2ab7a8:
    // 0x2ab7a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ab7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7ac:
    // 0x2ab7ac: 0xc0acb86  jal         func_2B2E18
label_2ab7b0:
    if (ctx->pc == 0x2AB7B0u) {
        ctx->pc = 0x2AB7B0u;
            // 0x2ab7b0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2AB7B4u;
        goto label_2ab7b4;
    }
    ctx->pc = 0x2AB7ACu;
    SET_GPR_U32(ctx, 31, 0x2AB7B4u);
    ctx->pc = 0x2AB7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7ACu;
            // 0x2ab7b0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E18u;
    if (runtime->hasFunction(0x2B2E18u)) {
        auto targetFn = runtime->lookupFunction(0x2B2E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7B4u; }
        if (ctx->pc != 0x2AB7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2E18_0x2b2e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7B4u; }
        if (ctx->pc != 0x2AB7B4u) { return; }
    }
    ctx->pc = 0x2AB7B4u;
label_2ab7b4:
    // 0x2ab7b4: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_2ab7b8:
    if (ctx->pc == 0x2AB7B8u) {
        ctx->pc = 0x2AB7B8u;
            // 0x2ab7b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2AB7BCu;
        goto label_2ab7bc;
    }
    ctx->pc = 0x2AB7B4u;
    {
        const bool branch_taken_0x2ab7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7B4u;
            // 0x2ab7b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7b4) {
            ctx->pc = 0x2ABB48u;
            goto label_2abb48;
        }
    }
    ctx->pc = 0x2AB7BCu;
label_2ab7bc:
    // 0x2ab7bc: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2ab7bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2ab7c0:
    // 0x2ab7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab7c4:
    // 0x2ab7c4: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_2ab7c8:
    if (ctx->pc == 0x2AB7C8u) {
        ctx->pc = 0x2AB7C8u;
            // 0x2ab7c8: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x2AB7CCu;
        goto label_2ab7cc;
    }
    ctx->pc = 0x2AB7C4u;
    {
        const bool branch_taken_0x2ab7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ab7c4) {
            ctx->pc = 0x2AB7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7C4u;
            // 0x2ab7c8: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB7F4u;
            goto label_2ab7f4;
        }
    }
    ctx->pc = 0x2AB7CCu;
label_2ab7cc:
    // 0x2ab7cc: 0xc0acbea  jal         func_2B2FA8
label_2ab7d0:
    if (ctx->pc == 0x2AB7D0u) {
        ctx->pc = 0x2AB7D0u;
            // 0x2ab7d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2AB7D4u;
        goto label_2ab7d4;
    }
    ctx->pc = 0x2AB7CCu;
    SET_GPR_U32(ctx, 31, 0x2AB7D4u);
    ctx->pc = 0x2AB7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7CCu;
            // 0x2ab7d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7D4u; }
        if (ctx->pc != 0x2AB7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7D4u; }
        if (ctx->pc != 0x2AB7D4u) { return; }
    }
    ctx->pc = 0x2AB7D4u;
label_2ab7d4:
    // 0x2ab7d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab7d8:
    // 0x2ab7d8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ab7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ab7dc:
    // 0x2ab7dc: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x2ab7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2ab7e0:
    // 0x2ab7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7e4:
    // 0x2ab7e4: 0xc0a5648  jal         func_295920
label_2ab7e8:
    if (ctx->pc == 0x2AB7E8u) {
        ctx->pc = 0x2AB7E8u;
            // 0x2ab7e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7ECu;
        goto label_2ab7ec;
    }
    ctx->pc = 0x2AB7E4u;
    SET_GPR_U32(ctx, 31, 0x2AB7ECu);
    ctx->pc = 0x2AB7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7E4u;
            // 0x2ab7e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7ECu; }
        if (ctx->pc != 0x2AB7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7ECu; }
        if (ctx->pc != 0x2AB7ECu) { return; }
    }
    ctx->pc = 0x2AB7ECu;
label_2ab7ec:
    // 0x2ab7ec: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_2ab7f0:
    if (ctx->pc == 0x2AB7F0u) {
        ctx->pc = 0x2AB7F0u;
            // 0x2ab7f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AB7F4u;
        goto label_2ab7f4;
    }
    ctx->pc = 0x2AB7ECu;
    {
        const bool branch_taken_0x2ab7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7ECu;
            // 0x2ab7f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7ec) {
            ctx->pc = 0x2ABB44u;
            goto label_2abb44;
        }
    }
    ctx->pc = 0x2AB7F4u;
label_2ab7f4:
    // 0x2ab7f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ab7f8:
    if (ctx->pc == 0x2AB7F8u) {
        ctx->pc = 0x2AB7F8u;
            // 0x2ab7f8: 0x2637ffff  addiu       $s7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x2AB7FCu;
        goto label_2ab7fc;
    }
    ctx->pc = 0x2AB7F4u;
    {
        const bool branch_taken_0x2ab7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7F4u;
            // 0x2ab7f8: 0x2637ffff  addiu       $s7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7f4) {
            ctx->pc = 0x2AB818u;
            goto label_2ab818;
        }
    }
    ctx->pc = 0x2AB7FCu;
label_2ab7fc:
    // 0x2ab7fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ab7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ab800:
    // 0x2ab800: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ab800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ab804:
    // 0x2ab804: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ab808:
    if (ctx->pc == 0x2AB808u) {
        ctx->pc = 0x2AB808u;
            // 0x2ab808: 0x24021090  addiu       $v0, $zero, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
        ctx->pc = 0x2AB80Cu;
        goto label_2ab80c;
    }
    ctx->pc = 0x2AB804u;
    {
        const bool branch_taken_0x2ab804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB804u;
            // 0x2ab808: 0x24021090  addiu       $v0, $zero, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab804) {
            ctx->pc = 0x2AB81Cu;
            goto label_2ab81c;
        }
    }
    ctx->pc = 0x2AB80Cu;
label_2ab80c:
    // 0x2ab80c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ab80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ab810:
    // 0x2ab810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ab814:
    if (ctx->pc == 0x2AB814u) {
        ctx->pc = 0x2AB814u;
            // 0x2ab814: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->pc = 0x2AB818u;
        goto label_2ab818;
    }
    ctx->pc = 0x2AB810u;
    {
        const bool branch_taken_0x2ab810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB810u;
            // 0x2ab814: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab810) {
            ctx->pc = 0x2AB824u;
            goto label_2ab824;
        }
    }
    ctx->pc = 0x2AB818u;
label_2ab818:
    // 0x2ab818: 0x24021090  addiu       $v0, $zero, 0x1090
    ctx->pc = 0x2ab818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
label_2ab81c:
    // 0x2ab81c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ab820:
    if (ctx->pc == 0x2AB820u) {
        ctx->pc = 0x2AB820u;
            // 0x2ab820: 0x24041090  addiu       $a0, $zero, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
        ctx->pc = 0x2AB824u;
        goto label_2ab824;
    }
    ctx->pc = 0x2AB81Cu;
    {
        const bool branch_taken_0x2ab81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB81Cu;
            // 0x2ab820: 0x24041090  addiu       $a0, $zero, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab81c) {
            ctx->pc = 0x2AB828u;
            goto label_2ab828;
        }
    }
    ctx->pc = 0x2AB824u;
label_2ab824:
    // 0x2ab824: 0x24041052  addiu       $a0, $zero, 0x1052
    ctx->pc = 0x2ab824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
label_2ab828:
    // 0x2ab828: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2ab828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2ab82c:
    // 0x2ab82c: 0x24021090  addiu       $v0, $zero, 0x1090
    ctx->pc = 0x2ab82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
label_2ab830:
    // 0x2ab830: 0x14820052  bne         $a0, $v0, . + 4 + (0x52 << 2)
label_2ab834:
    if (ctx->pc == 0x2AB834u) {
        ctx->pc = 0x2AB834u;
            // 0x2ab834: 0x24021051  addiu       $v0, $zero, 0x1051 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4177));
        ctx->pc = 0x2AB838u;
        goto label_2ab838;
    }
    ctx->pc = 0x2AB830u;
    {
        const bool branch_taken_0x2ab830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB830u;
            // 0x2ab834: 0x24021051  addiu       $v0, $zero, 0x1051 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab830) {
            ctx->pc = 0x2AB97Cu;
            goto label_2ab97c;
        }
    }
    ctx->pc = 0x2AB838u;
label_2ab838:
    // 0x2ab838: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2ab838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2ab83c:
    // 0x2ab83c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ab83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab840:
    // 0x2ab840: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ab840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2ab844:
    // 0x2ab844: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x2ab844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2ab848:
    // 0x2ab848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ab84c:
    if (ctx->pc == 0x2AB84Cu) {
        ctx->pc = 0x2AB84Cu;
            // 0x2ab84c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2AB850u;
        goto label_2ab850;
    }
    ctx->pc = 0x2AB848u;
    {
        const bool branch_taken_0x2ab848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB848u;
            // 0x2ab84c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab848) {
            ctx->pc = 0x2AB864u;
            goto label_2ab864;
        }
    }
    ctx->pc = 0x2AB850u;
label_2ab850:
    // 0x2ab850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab854:
    // 0x2ab854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ab854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ab858:
    // 0x2ab858: 0x40f809  jalr        $v0
label_2ab85c:
    if (ctx->pc == 0x2AB85Cu) {
        ctx->pc = 0x2AB85Cu;
            // 0x2ab85c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x2AB860u;
        goto label_2ab860;
    }
    ctx->pc = 0x2AB858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB860u);
        ctx->pc = 0x2AB85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB858u;
            // 0x2ab85c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AB860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AB860u; }
            if (ctx->pc != 0x2AB860u) { return; }
        }
        }
    }
    ctx->pc = 0x2AB860u;
label_2ab860:
    // 0x2ab860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab864:
    // 0x2ab864: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_2ab868:
    if (ctx->pc == 0x2AB868u) {
        ctx->pc = 0x2AB868u;
            // 0x2ab868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AB86Cu;
        goto label_2ab86c;
    }
    ctx->pc = 0x2AB864u;
    {
        const bool branch_taken_0x2ab864 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2AB868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB864u;
            // 0x2ab868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab864) {
            ctx->pc = 0x2AB87Cu;
            goto label_2ab87c;
        }
    }
    ctx->pc = 0x2AB86Cu;
label_2ab86c:
    // 0x2ab86c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ab86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ab870:
    // 0x2ab870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ab870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ab874:
    // 0x2ab874: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2ab878:
    if (ctx->pc == 0x2AB878u) {
        ctx->pc = 0x2AB878u;
            // 0x2ab878: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x2AB87Cu;
        goto label_2ab87c;
    }
    ctx->pc = 0x2AB874u;
    {
        const bool branch_taken_0x2ab874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB874u;
            // 0x2ab878: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab874) {
            ctx->pc = 0x2ABB44u;
            goto label_2abb44;
        }
    }
    ctx->pc = 0x2AB87Cu;
label_2ab87c:
    // 0x2ab87c: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
label_2ab880:
    if (ctx->pc == 0x2AB880u) {
        ctx->pc = 0x2AB880u;
            // 0x2ab880: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2AB884u;
        goto label_2ab884;
    }
    ctx->pc = 0x2AB87Cu;
    {
        const bool branch_taken_0x2ab87c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB87Cu;
            // 0x2ab880: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab87c) {
            ctx->pc = 0x2AB924u;
            goto label_2ab924;
        }
    }
    ctx->pc = 0x2AB884u;
label_2ab884:
    // 0x2ab884: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ab884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ab888:
    // 0x2ab888: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2ab88c:
    if (ctx->pc == 0x2AB88Cu) {
        ctx->pc = 0x2AB88Cu;
            // 0x2ab88c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2AB890u;
        goto label_2ab890;
    }
    ctx->pc = 0x2AB888u;
    {
        const bool branch_taken_0x2ab888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB888u;
            // 0x2ab88c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab888) {
            ctx->pc = 0x2AB8D8u;
            goto label_2ab8d8;
        }
    }
    ctx->pc = 0x2AB890u;
label_2ab890:
    // 0x2ab890: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_2ab894:
    if (ctx->pc == 0x2AB894u) {
        ctx->pc = 0x2AB894u;
            // 0x2ab894: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->pc = 0x2AB898u;
        goto label_2ab898;
    }
    ctx->pc = 0x2AB890u;
    {
        const bool branch_taken_0x2ab890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB890u;
            // 0x2ab894: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab890) {
            ctx->pc = 0x2AB8D8u;
            goto label_2ab8d8;
        }
    }
    ctx->pc = 0x2AB898u;
label_2ab898:
    // 0x2ab898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab89c:
    // 0x2ab89c: 0xc0ac62c  jal         func_2B18B0
label_2ab8a0:
    if (ctx->pc == 0x2AB8A0u) {
        ctx->pc = 0x2AB8A0u;
            // 0x2ab8a0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2AB8A4u;
        goto label_2ab8a4;
    }
    ctx->pc = 0x2AB89Cu;
    SET_GPR_U32(ctx, 31, 0x2AB8A4u);
    ctx->pc = 0x2AB8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB89Cu;
            // 0x2ab8a0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B18B0u;
    if (runtime->hasFunction(0x2B18B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B18B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8A4u; }
        if (ctx->pc != 0x2AB8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B18B0_0x2b18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8A4u; }
        if (ctx->pc != 0x2AB8A4u) { return; }
    }
    ctx->pc = 0x2AB8A4u;
label_2ab8a4:
    // 0x2ab8a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ab8a8:
    if (ctx->pc == 0x2AB8A8u) {
        ctx->pc = 0x2AB8A8u;
            // 0x2ab8a8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x2AB8ACu;
        goto label_2ab8ac;
    }
    ctx->pc = 0x2AB8A4u;
    {
        const bool branch_taken_0x2ab8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8A4u;
            // 0x2ab8a8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8a4) {
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB8ACu;
label_2ab8ac:
    // 0x2ab8ac: 0xc0ac6c2  jal         func_2B1B08
label_2ab8b0:
    if (ctx->pc == 0x2AB8B0u) {
        ctx->pc = 0x2AB8B0u;
            // 0x2ab8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8B4u;
        goto label_2ab8b4;
    }
    ctx->pc = 0x2AB8ACu;
    SET_GPR_U32(ctx, 31, 0x2AB8B4u);
    ctx->pc = 0x2AB8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8ACu;
            // 0x2ab8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1B08u;
    if (runtime->hasFunction(0x2B1B08u)) {
        auto targetFn = runtime->lookupFunction(0x2B1B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8B4u; }
        if (ctx->pc != 0x2AB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1B08_0x2b1b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8B4u; }
        if (ctx->pc != 0x2AB8B4u) { return; }
    }
    ctx->pc = 0x2AB8B4u;
label_2ab8b4:
    // 0x2ab8b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2ab8b8:
    if (ctx->pc == 0x2AB8B8u) {
        ctx->pc = 0x2AB8BCu;
        goto label_2ab8bc;
    }
    ctx->pc = 0x2AB8B4u;
    {
        const bool branch_taken_0x2ab8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab8b4) {
            ctx->pc = 0x2AB8C0u;
            goto label_2ab8c0;
        }
    }
    ctx->pc = 0x2AB8BCu;
label_2ab8bc:
    // 0x2ab8bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ab8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab8c0:
    // 0x2ab8c0: 0xc0a390c  jal         func_28E430
label_2ab8c4:
    if (ctx->pc == 0x2AB8C4u) {
        ctx->pc = 0x2AB8C4u;
            // 0x2ab8c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2AB8C8u;
        goto label_2ab8c8;
    }
    ctx->pc = 0x2AB8C0u;
    SET_GPR_U32(ctx, 31, 0x2AB8C8u);
    ctx->pc = 0x2AB8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8C0u;
            // 0x2ab8c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8C8u; }
        if (ctx->pc != 0x2AB8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8C8u; }
        if (ctx->pc != 0x2AB8C8u) { return; }
    }
    ctx->pc = 0x2AB8C8u;
label_2ab8c8:
    // 0x2ab8c8: 0xc0a3d02  jal         func_28F408
label_2ab8cc:
    if (ctx->pc == 0x2AB8CCu) {
        ctx->pc = 0x2AB8CCu;
            // 0x2ab8cc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x2AB8D0u;
        goto label_2ab8d0;
    }
    ctx->pc = 0x2AB8C8u;
    SET_GPR_U32(ctx, 31, 0x2AB8D0u);
    ctx->pc = 0x2AB8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8C8u;
            // 0x2ab8cc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8D0u; }
        if (ctx->pc != 0x2AB8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8D0u; }
        if (ctx->pc != 0x2AB8D0u) { return; }
    }
    ctx->pc = 0x2AB8D0u;
label_2ab8d0:
    // 0x2ab8d0: 0x10000014  b           . + 4 + (0x14 << 2)
label_2ab8d4:
    if (ctx->pc == 0x2AB8D4u) {
        ctx->pc = 0x2AB8D8u;
        goto label_2ab8d8;
    }
    ctx->pc = 0x2AB8D0u;
    {
        const bool branch_taken_0x2ab8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab8d0) {
            ctx->pc = 0x2AB924u;
            goto label_2ab924;
        }
    }
    ctx->pc = 0x2AB8D8u;
label_2ab8d8:
    // 0x2ab8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab8dc:
    // 0x2ab8dc: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
label_2ab8e0:
    if (ctx->pc == 0x2AB8E0u) {
        ctx->pc = 0x2AB8E0u;
            // 0x2ab8e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2AB8E4u;
        goto label_2ab8e4;
    }
    ctx->pc = 0x2AB8DCu;
    {
        const bool branch_taken_0x2ab8dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8DCu;
            // 0x2ab8e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8dc) {
            ctx->pc = 0x2AB924u;
            goto label_2ab924;
        }
    }
    ctx->pc = 0x2AB8E4u;
label_2ab8e4:
    // 0x2ab8e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2ab8e8:
    if (ctx->pc == 0x2AB8E8u) {
        ctx->pc = 0x2AB8ECu;
        goto label_2ab8ec;
    }
    ctx->pc = 0x2AB8E4u;
    {
        const bool branch_taken_0x2ab8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab8e4) {
            ctx->pc = 0x2AB8F8u;
            goto label_2ab8f8;
        }
    }
    ctx->pc = 0x2AB8ECu;
label_2ab8ec:
    // 0x2ab8ec: 0xc0a390c  jal         func_28E430
label_2ab8f0:
    if (ctx->pc == 0x2AB8F0u) {
        ctx->pc = 0x2AB8F4u;
        goto label_2ab8f4;
    }
    ctx->pc = 0x2AB8ECu;
    SET_GPR_U32(ctx, 31, 0x2AB8F4u);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8F4u; }
        if (ctx->pc != 0x2AB8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB8F4u; }
        if (ctx->pc != 0x2AB8F4u) { return; }
    }
    ctx->pc = 0x2AB8F4u;
label_2ab8f4:
    // 0x2ab8f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ab8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ab8f8:
    // 0x2ab8f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ab8fc:
    if (ctx->pc == 0x2AB8FCu) {
        ctx->pc = 0x2AB8FCu;
            // 0x2ab8fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AB900u;
        goto label_2ab900;
    }
    ctx->pc = 0x2AB8F8u;
    {
        const bool branch_taken_0x2ab8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8F8u;
            // 0x2ab8fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8f8) {
            ctx->pc = 0x2AB90Cu;
            goto label_2ab90c;
        }
    }
    ctx->pc = 0x2AB900u;
label_2ab900:
    // 0x2ab900: 0xc0a3d02  jal         func_28F408
label_2ab904:
    if (ctx->pc == 0x2AB904u) {
        ctx->pc = 0x2AB904u;
            // 0x2ab904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB908u;
        goto label_2ab908;
    }
    ctx->pc = 0x2AB900u;
    SET_GPR_U32(ctx, 31, 0x2AB908u);
    ctx->pc = 0x2AB904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB900u;
            // 0x2ab904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB908u; }
        if (ctx->pc != 0x2AB908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB908u; }
        if (ctx->pc != 0x2AB908u) { return; }
    }
    ctx->pc = 0x2AB908u;
label_2ab908:
    // 0x2ab908: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab90c:
    // 0x2ab90c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ab90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ab910:
    // 0x2ab910: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2ab914:
    // 0x2ab914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab918:
    // 0x2ab918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ab918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab91c:
    // 0x2ab91c: 0xc0a5648  jal         func_295920
label_2ab920:
    if (ctx->pc == 0x2AB920u) {
        ctx->pc = 0x2AB920u;
            // 0x2ab920: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB924u;
        goto label_2ab924;
    }
    ctx->pc = 0x2AB91Cu;
    SET_GPR_U32(ctx, 31, 0x2AB924u);
    ctx->pc = 0x2AB920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB91Cu;
            // 0x2ab920: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB924u; }
        if (ctx->pc != 0x2AB924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB924u; }
        if (ctx->pc != 0x2AB924u) { return; }
    }
    ctx->pc = 0x2AB924u;
label_2ab924:
    // 0x2ab924: 0x56200014  bnel        $s1, $zero, . + 4 + (0x14 << 2)
label_2ab928:
    if (ctx->pc == 0x2AB928u) {
        ctx->pc = 0x2AB928u;
            // 0x2ab928: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2AB92Cu;
        goto label_2ab92c;
    }
    ctx->pc = 0x2AB924u;
    {
        const bool branch_taken_0x2ab924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab924) {
            ctx->pc = 0x2AB928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB924u;
            // 0x2ab928: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB978u;
            goto label_2ab978;
        }
    }
    ctx->pc = 0x2AB92Cu;
label_2ab92c:
    // 0x2ab92c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2ab92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_2ab930:
    // 0x2ab930: 0x24021051  addiu       $v0, $zero, 0x1051
    ctx->pc = 0x2ab930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4177));
label_2ab934:
    // 0x2ab934: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2ab934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2ab938:
    // 0x2ab938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ab938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab93c:
    // 0x2ab93c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2ab93cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ab940:
    // 0x2ab940: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ab944:
    // 0x2ab944: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2ab944u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab948:
    // 0x2ab948: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ab94c:
    // 0x2ab94c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2ab94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ab950:
    // 0x2ab950: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2ab950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2ab954:
    // 0x2ab954: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ab954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2ab958:
    // 0x2ab958: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ab958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ab95c:
    // 0x2ab95c: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x2ab95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_2ab960:
    // 0x2ab960: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x2ab960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
label_2ab964:
    // 0x2ab964: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2ab964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2ab968:
    // 0x2ab968: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2ab96c:
    // 0x2ab96c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2ab96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2ab970:
    // 0x2ab970: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2ab970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2ab974:
    // 0x2ab974: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2ab974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2ab978:
    // 0x2ab978: 0x24021051  addiu       $v0, $zero, 0x1051
    ctx->pc = 0x2ab978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4177));
label_2ab97c:
    // 0x2ab97c: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
label_2ab980:
    if (ctx->pc == 0x2AB980u) {
        ctx->pc = 0x2AB980u;
            // 0x2ab980: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->pc = 0x2AB984u;
        goto label_2ab984;
    }
    ctx->pc = 0x2AB97Cu;
    {
        const bool branch_taken_0x2ab97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB97Cu;
            // 0x2ab980: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab97c) {
            ctx->pc = 0x2AB9E8u;
            goto label_2ab9e8;
        }
    }
    ctx->pc = 0x2AB984u;
label_2ab984:
    // 0x2ab984: 0xc0acbb2  jal         func_2B2EC8
label_2ab988:
    if (ctx->pc == 0x2AB988u) {
        ctx->pc = 0x2AB988u;
            // 0x2ab988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB98Cu;
        goto label_2ab98c;
    }
    ctx->pc = 0x2AB984u;
    SET_GPR_U32(ctx, 31, 0x2AB98Cu);
    ctx->pc = 0x2AB988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB984u;
            // 0x2ab988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2EC8u;
    if (runtime->hasFunction(0x2B2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB98Cu; }
        if (ctx->pc != 0x2AB98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2EC8_0x2b2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB98Cu; }
        if (ctx->pc != 0x2AB98Cu) { return; }
    }
    ctx->pc = 0x2AB98Cu;
label_2ab98c:
    // 0x2ab98c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab990:
    // 0x2ab990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab994:
    // 0x2ab994: 0x16c2006b  bne         $s6, $v0, . + 4 + (0x6B << 2)
label_2ab998:
    if (ctx->pc == 0x2AB998u) {
        ctx->pc = 0x2AB998u;
            // 0x2ab998: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB99Cu;
        goto label_2ab99c;
    }
    ctx->pc = 0x2AB994u;
    {
        const bool branch_taken_0x2ab994 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB994u;
            // 0x2ab998: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab994) {
            ctx->pc = 0x2ABB44u;
            goto label_2abb44;
        }
    }
    ctx->pc = 0x2AB99Cu;
label_2ab99c:
    // 0x2ab99c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2ab99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2ab9a0:
    // 0x2ab9a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ab9a4:
    if (ctx->pc == 0x2AB9A4u) {
        ctx->pc = 0x2AB9A4u;
            // 0x2ab9a4: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x2AB9A8u;
        goto label_2ab9a8;
    }
    ctx->pc = 0x2AB9A0u;
    {
        const bool branch_taken_0x2ab9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9a0) {
            ctx->pc = 0x2AB9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9A0u;
            // 0x2ab9a4: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB9B4u;
            goto label_2ab9b4;
        }
    }
    ctx->pc = 0x2AB9A8u;
label_2ab9a8:
    // 0x2ab9a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ab9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab9ac:
    // 0x2ab9ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ab9b0:
    if (ctx->pc == 0x2AB9B0u) {
        ctx->pc = 0x2AB9B0u;
            // 0x2ab9b0: 0x8e1400c8  lw          $s4, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2AB9B4u;
        goto label_2ab9b4;
    }
    ctx->pc = 0x2AB9ACu;
    {
        const bool branch_taken_0x2ab9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9ACu;
            // 0x2ab9b0: 0x8e1400c8  lw          $s4, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9ac) {
            ctx->pc = 0x2AB9C8u;
            goto label_2ab9c8;
        }
    }
    ctx->pc = 0x2AB9B4u;
label_2ab9b4:
    // 0x2ab9b4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2ab9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2ab9b8:
    // 0x2ab9b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ab9bc:
    if (ctx->pc == 0x2AB9BCu) {
        ctx->pc = 0x2AB9C0u;
        goto label_2ab9c0;
    }
    ctx->pc = 0x2AB9B8u;
    {
        const bool branch_taken_0x2ab9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9b8) {
            ctx->pc = 0x2AB9C8u;
            goto label_2ab9c8;
        }
    }
    ctx->pc = 0x2AB9C0u;
label_2ab9c0:
    // 0x2ab9c0: 0x8c540084  lw          $s4, 0x84($v0)
    ctx->pc = 0x2ab9c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2ab9c4:
    // 0x2ab9c4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2ab9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ab9c8:
    // 0x2ab9c8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2ab9cc:
    if (ctx->pc == 0x2AB9CCu) {
        ctx->pc = 0x2AB9CCu;
            // 0x2ab9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9D0u;
        goto label_2ab9d0;
    }
    ctx->pc = 0x2AB9C8u;
    {
        const bool branch_taken_0x2ab9c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9C8u;
            // 0x2ab9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9c8) {
            ctx->pc = 0x2AB9E0u;
            goto label_2ab9e0;
        }
    }
    ctx->pc = 0x2AB9D0u;
label_2ab9d0:
    // 0x2ab9d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ab9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ab9d4:
    // 0x2ab9d4: 0x24054008  addiu       $a1, $zero, 0x4008
    ctx->pc = 0x2ab9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
label_2ab9d8:
    // 0x2ab9d8: 0x260f809  jalr        $s3
label_2ab9dc:
    if (ctx->pc == 0x2AB9DCu) {
        ctx->pc = 0x2AB9DCu;
            // 0x2ab9dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2AB9E0u;
        goto label_2ab9e0;
    }
    ctx->pc = 0x2AB9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2AB9E0u);
        ctx->pc = 0x2AB9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9D8u;
            // 0x2ab9dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AB9E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9E0u; }
            if (ctx->pc != 0x2AB9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2AB9E0u;
label_2ab9e0:
    // 0x2ab9e0: 0x10000058  b           . + 4 + (0x58 << 2)
label_2ab9e4:
    if (ctx->pc == 0x2AB9E4u) {
        ctx->pc = 0x2AB9E4u;
            // 0x2ab9e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9E8u;
        goto label_2ab9e8;
    }
    ctx->pc = 0x2AB9E0u;
    {
        const bool branch_taken_0x2ab9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9E0u;
            // 0x2ab9e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9e0) {
            ctx->pc = 0x2ABB44u;
            goto label_2abb44;
        }
    }
    ctx->pc = 0x2AB9E8u;
label_2ab9e8:
    // 0x2ab9e8: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
label_2ab9ec:
    if (ctx->pc == 0x2AB9ECu) {
        ctx->pc = 0x2AB9F0u;
        goto label_2ab9f0;
    }
    ctx->pc = 0x2AB9E8u;
    {
        const bool branch_taken_0x2ab9e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab9e8) {
            ctx->pc = 0x2ABB30u;
            goto label_2abb30;
        }
    }
    ctx->pc = 0x2AB9F0u;
label_2ab9f0:
    // 0x2ab9f0: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2ab9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2ab9f4:
    // 0x2ab9f4: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2ab9f8:
    // 0x2ab9f8: 0xc0a5102  jal         func_294408
label_2ab9fc:
    if (ctx->pc == 0x2AB9FCu) {
        ctx->pc = 0x2AB9FCu;
            // 0x2ab9fc: 0x8c450100  lw          $a1, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->pc = 0x2ABA00u;
        goto label_2aba00;
    }
    ctx->pc = 0x2AB9F8u;
    SET_GPR_U32(ctx, 31, 0x2ABA00u);
    ctx->pc = 0x2AB9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9F8u;
            // 0x2ab9fc: 0x8c450100  lw          $a1, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA00u; }
        if (ctx->pc != 0x2ABA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA00u; }
        if (ctx->pc != 0x2ABA00u) { return; }
    }
    ctx->pc = 0x2ABA00u;
label_2aba00:
    // 0x2aba00: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_2aba04:
    if (ctx->pc == 0x2ABA04u) {
        ctx->pc = 0x2ABA04u;
            // 0x2aba04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2ABA08u;
        goto label_2aba08;
    }
    ctx->pc = 0x2ABA00u;
    {
        const bool branch_taken_0x2aba00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA00u;
            // 0x2aba04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba00) {
            ctx->pc = 0x2ABB44u;
            goto label_2abb44;
        }
    }
    ctx->pc = 0x2ABA08u;
label_2aba08:
    // 0x2aba08: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2aba08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2aba0c:
    // 0x2aba0c: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2aba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2aba10:
    // 0x2aba10: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x2aba10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_2aba14:
    // 0x2aba14: 0xc0a513c  jal         func_2944F0
label_2aba18:
    if (ctx->pc == 0x2ABA18u) {
        ctx->pc = 0x2ABA18u;
            // 0x2aba18: 0x24a500a8  addiu       $a1, $a1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
        ctx->pc = 0x2ABA1Cu;
        goto label_2aba1c;
    }
    ctx->pc = 0x2ABA14u;
    SET_GPR_U32(ctx, 31, 0x2ABA1Cu);
    ctx->pc = 0x2ABA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA14u;
            // 0x2aba18: 0x24a500a8  addiu       $a1, $a1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA1Cu; }
        if (ctx->pc != 0x2ABA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA1Cu; }
        if (ctx->pc != 0x2ABA1Cu) { return; }
    }
    ctx->pc = 0x2ABA1Cu;
label_2aba1c:
    // 0x2aba1c: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2aba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2aba20:
    // 0x2aba20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2aba20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aba24:
    // 0x2aba24: 0xc0a513c  jal         func_2944F0
label_2aba28:
    if (ctx->pc == 0x2ABA28u) {
        ctx->pc = 0x2ABA28u;
            // 0x2aba28: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA2Cu;
        goto label_2aba2c;
    }
    ctx->pc = 0x2ABA24u;
    SET_GPR_U32(ctx, 31, 0x2ABA2Cu);
    ctx->pc = 0x2ABA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA24u;
            // 0x2aba28: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA2Cu; }
        if (ctx->pc != 0x2ABA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA2Cu; }
        if (ctx->pc != 0x2ABA2Cu) { return; }
    }
    ctx->pc = 0x2ABA2Cu;
label_2aba2c:
    // 0x2aba2c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2aba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2aba30:
    // 0x2aba30: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x2aba30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_2aba34:
    // 0x2aba34: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2aba34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_2aba38:
    // 0x2aba38: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x2aba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_2aba3c:
    // 0x2aba3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2aba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2aba40:
    // 0x2aba40: 0xc0a3942  jal         func_28E508
label_2aba44:
    if (ctx->pc == 0x2ABA44u) {
        ctx->pc = 0x2ABA44u;
            // 0x2aba44: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2ABA48u;
        goto label_2aba48;
    }
    ctx->pc = 0x2ABA40u;
    SET_GPR_U32(ctx, 31, 0x2ABA48u);
    ctx->pc = 0x2ABA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA40u;
            // 0x2aba44: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (runtime->hasFunction(0x28E508u)) {
        auto targetFn = runtime->lookupFunction(0x28E508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA48u; }
        if (ctx->pc != 0x2ABA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E508_0x28e508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA48u; }
        if (ctx->pc != 0x2ABA48u) { return; }
    }
    ctx->pc = 0x2ABA48u;
label_2aba48:
    // 0x2aba48: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2aba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2aba4c:
    // 0x2aba4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aba4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aba50:
    // 0x2aba50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2aba50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2aba54:
    // 0x2aba54: 0xc0a513c  jal         func_2944F0
label_2aba58:
    if (ctx->pc == 0x2ABA58u) {
        ctx->pc = 0x2ABA58u;
            // 0x2aba58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA5Cu;
        goto label_2aba5c;
    }
    ctx->pc = 0x2ABA54u;
    SET_GPR_U32(ctx, 31, 0x2ABA5Cu);
    ctx->pc = 0x2ABA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA54u;
            // 0x2aba58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA5Cu; }
        if (ctx->pc != 0x2ABA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA5Cu; }
        if (ctx->pc != 0x2ABA5Cu) { return; }
    }
    ctx->pc = 0x2ABA5Cu;
label_2aba5c:
    // 0x2aba5c: 0x26430006  addiu       $v1, $s2, 0x6
    ctx->pc = 0x2aba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_2aba60:
    // 0x2aba60: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2aba60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_2aba64:
    // 0x2aba64: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2aba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2aba68:
    // 0x2aba68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2aba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2aba6c:
    // 0x2aba6c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2aba6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_2aba70:
    // 0x2aba70: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2aba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2aba74:
    // 0x2aba74: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2aba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2aba78:
    // 0x2aba78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aba7c:
    // 0x2aba7c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2aba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2aba80:
    // 0x2aba80: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x2aba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2aba84:
    // 0x2aba84: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2aba84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2aba88:
    // 0x2aba88: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x2aba88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_2aba8c:
    // 0x2aba8c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2aba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2aba90:
    // 0x2aba90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2aba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2aba94:
    // 0x2aba94: 0xc0a3942  jal         func_28E508
label_2aba98:
    if (ctx->pc == 0x2ABA98u) {
        ctx->pc = 0x2ABA98u;
            // 0x2aba98: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2ABA9Cu;
        goto label_2aba9c;
    }
    ctx->pc = 0x2ABA94u;
    SET_GPR_U32(ctx, 31, 0x2ABA9Cu);
    ctx->pc = 0x2ABA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA94u;
            // 0x2aba98: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (runtime->hasFunction(0x28E508u)) {
        auto targetFn = runtime->lookupFunction(0x28E508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA9Cu; }
        if (ctx->pc != 0x2ABA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E508_0x28e508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA9Cu; }
        if (ctx->pc != 0x2ABA9Cu) { return; }
    }
    ctx->pc = 0x2ABA9Cu;
label_2aba9c:
    // 0x2aba9c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2aba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2abaa0:
    // 0x2abaa0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2abaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2abaa4:
    // 0x2abaa4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2abaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2abaa8:
    // 0x2abaa8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2abaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2abaac:
    // 0x2abaac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2abaacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2abab0:
    // 0x2abab0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2abab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2abab4:
    // 0x2abab4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x2abab4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_2abab8:
    // 0x2abab8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2abab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_2ababc:
    // 0x2ababc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ababcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2abac0:
    // 0x2abac0: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x2abac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2abac4:
    // 0x2abac4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2abac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2abac8:
    // 0x2abac8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2abac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2abacc:
    // 0x2abacc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2abaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2abad0:
    // 0x2abad0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2abad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2abad4:
    // 0x2abad4: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2abad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2abad8:
    // 0x2abad8: 0xc0a739e  jal         func_29CE78
label_2abadc:
    if (ctx->pc == 0x2ABADCu) {
        ctx->pc = 0x2ABADCu;
            // 0x2abadc: 0x8c470004  lw          $a3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2ABAE0u;
        goto label_2abae0;
    }
    ctx->pc = 0x2ABAD8u;
    SET_GPR_U32(ctx, 31, 0x2ABAE0u);
    ctx->pc = 0x2ABADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABAD8u;
            // 0x2abadc: 0x8c470004  lw          $a3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CE78u;
    if (runtime->hasFunction(0x29CE78u)) {
        auto targetFn = runtime->lookupFunction(0x29CE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABAE0u; }
        if (ctx->pc != 0x2ABAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CE78_0x29ce78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABAE0u; }
        if (ctx->pc != 0x2ABAE0u) { return; }
    }
    ctx->pc = 0x2ABAE0u;
label_2abae0:
    // 0x2abae0: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_2abae4:
    if (ctx->pc == 0x2ABAE4u) {
        ctx->pc = 0x2ABAE4u;
            // 0x2abae4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2ABAE8u;
        goto label_2abae8;
    }
    ctx->pc = 0x2ABAE0u;
    {
        const bool branch_taken_0x2abae0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2ABAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABAE0u;
            // 0x2abae4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abae0) {
            ctx->pc = 0x2ABB40u;
            goto label_2abb40;
        }
    }
    ctx->pc = 0x2ABAE8u;
label_2abae8:
    // 0x2abae8: 0x24051053  addiu       $a1, $zero, 0x1053
    ctx->pc = 0x2abae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4179));
label_2abaec:
    // 0x2abaec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2abaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2abaf0:
    // 0x2abaf0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2abaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2abaf4:
    // 0x2abaf4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2abaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2abaf8:
    // 0x2abaf8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2abaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2abafc:
    // 0x2abafc: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x2abafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_2abb00:
    // 0x2abb00: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2abb00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_2abb04:
    // 0x2abb04: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x2abb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2abb08:
    // 0x2abb08: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2abb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2abb0c:
    // 0x2abb0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2abb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2abb10:
    // 0x2abb10: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2abb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2abb14:
    // 0x2abb14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2abb18:
    // 0x2abb18: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2abb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2abb1c:
    // 0x2abb1c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2abb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2abb20:
    // 0x2abb20: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x2abb20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2abb24:
    // 0x2abb24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2abb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2abb28:
    // 0x2abb28: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x2abb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
label_2abb2c:
    // 0x2abb2c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2abb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2abb30:
    // 0x2abb30: 0xc0acbb2  jal         func_2B2EC8
label_2abb34:
    if (ctx->pc == 0x2ABB34u) {
        ctx->pc = 0x2ABB34u;
            // 0x2abb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB38u;
        goto label_2abb38;
    }
    ctx->pc = 0x2ABB30u;
    SET_GPR_U32(ctx, 31, 0x2ABB38u);
    ctx->pc = 0x2ABB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB30u;
            // 0x2abb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2EC8u;
    if (runtime->hasFunction(0x2B2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB38u; }
        if (ctx->pc != 0x2ABB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2EC8_0x2b2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB38u; }
        if (ctx->pc != 0x2ABB38u) { return; }
    }
    ctx->pc = 0x2ABB38u;
label_2abb38:
    // 0x2abb38: 0x10000003  b           . + 4 + (0x3 << 2)
label_2abb3c:
    if (ctx->pc == 0x2ABB3Cu) {
        ctx->pc = 0x2ABB3Cu;
            // 0x2abb3c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2ABB40u;
        goto label_2abb40;
    }
    ctx->pc = 0x2ABB38u;
    {
        const bool branch_taken_0x2abb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB38u;
            // 0x2abb3c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb38) {
            ctx->pc = 0x2ABB48u;
            goto label_2abb48;
        }
    }
    ctx->pc = 0x2ABB40u;
label_2abb40:
    // 0x2abb40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2abb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2abb44:
    // 0x2abb44: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2abb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2abb48:
    // 0x2abb48: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2abb48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2abb4c:
    // 0x2abb4c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2abb4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2abb50:
    // 0x2abb50: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2abb50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2abb54:
    // 0x2abb54: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2abb54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2abb58:
    // 0x2abb58: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2abb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2abb5c:
    // 0x2abb5c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2abb5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2abb60:
    // 0x2abb60: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2abb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2abb64:
    // 0x2abb64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2abb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2abb68:
    // 0x2abb68: 0x3e00008  jr          $ra
label_2abb6c:
    if (ctx->pc == 0x2ABB6Cu) {
        ctx->pc = 0x2ABB6Cu;
            // 0x2abb6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2ABB70u;
        goto label_fallthrough_0x2abb68;
    }
    ctx->pc = 0x2ABB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB68u;
            // 0x2abb6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2abb68:
    ctx->pc = 0x2ABB70u;
    ctx->pc = 0x2abb70u;
}
