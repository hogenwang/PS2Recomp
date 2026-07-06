#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003532A0
// Address: 0x3532a0 - 0x353470
void sub_003532A0_0x3532a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003532A0_0x3532a0");
#endif

    switch (ctx->pc) {
        case 0x3532a0u: goto label_3532a0;
        case 0x3532a4u: goto label_3532a4;
        case 0x3532a8u: goto label_3532a8;
        case 0x3532acu: goto label_3532ac;
        case 0x3532b0u: goto label_3532b0;
        case 0x3532b4u: goto label_3532b4;
        case 0x3532b8u: goto label_3532b8;
        case 0x3532bcu: goto label_3532bc;
        case 0x3532c0u: goto label_3532c0;
        case 0x3532c4u: goto label_3532c4;
        case 0x3532c8u: goto label_3532c8;
        case 0x3532ccu: goto label_3532cc;
        case 0x3532d0u: goto label_3532d0;
        case 0x3532d4u: goto label_3532d4;
        case 0x3532d8u: goto label_3532d8;
        case 0x3532dcu: goto label_3532dc;
        case 0x3532e0u: goto label_3532e0;
        case 0x3532e4u: goto label_3532e4;
        case 0x3532e8u: goto label_3532e8;
        case 0x3532ecu: goto label_3532ec;
        case 0x3532f0u: goto label_3532f0;
        case 0x3532f4u: goto label_3532f4;
        case 0x3532f8u: goto label_3532f8;
        case 0x3532fcu: goto label_3532fc;
        case 0x353300u: goto label_353300;
        case 0x353304u: goto label_353304;
        case 0x353308u: goto label_353308;
        case 0x35330cu: goto label_35330c;
        case 0x353310u: goto label_353310;
        case 0x353314u: goto label_353314;
        case 0x353318u: goto label_353318;
        case 0x35331cu: goto label_35331c;
        case 0x353320u: goto label_353320;
        case 0x353324u: goto label_353324;
        case 0x353328u: goto label_353328;
        case 0x35332cu: goto label_35332c;
        case 0x353330u: goto label_353330;
        case 0x353334u: goto label_353334;
        case 0x353338u: goto label_353338;
        case 0x35333cu: goto label_35333c;
        case 0x353340u: goto label_353340;
        case 0x353344u: goto label_353344;
        case 0x353348u: goto label_353348;
        case 0x35334cu: goto label_35334c;
        case 0x353350u: goto label_353350;
        case 0x353354u: goto label_353354;
        case 0x353358u: goto label_353358;
        case 0x35335cu: goto label_35335c;
        case 0x353360u: goto label_353360;
        case 0x353364u: goto label_353364;
        case 0x353368u: goto label_353368;
        case 0x35336cu: goto label_35336c;
        case 0x353370u: goto label_353370;
        case 0x353374u: goto label_353374;
        case 0x353378u: goto label_353378;
        case 0x35337cu: goto label_35337c;
        case 0x353380u: goto label_353380;
        case 0x353384u: goto label_353384;
        case 0x353388u: goto label_353388;
        case 0x35338cu: goto label_35338c;
        case 0x353390u: goto label_353390;
        case 0x353394u: goto label_353394;
        case 0x353398u: goto label_353398;
        case 0x35339cu: goto label_35339c;
        case 0x3533a0u: goto label_3533a0;
        case 0x3533a4u: goto label_3533a4;
        case 0x3533a8u: goto label_3533a8;
        case 0x3533acu: goto label_3533ac;
        case 0x3533b0u: goto label_3533b0;
        case 0x3533b4u: goto label_3533b4;
        case 0x3533b8u: goto label_3533b8;
        case 0x3533bcu: goto label_3533bc;
        case 0x3533c0u: goto label_3533c0;
        case 0x3533c4u: goto label_3533c4;
        case 0x3533c8u: goto label_3533c8;
        case 0x3533ccu: goto label_3533cc;
        case 0x3533d0u: goto label_3533d0;
        case 0x3533d4u: goto label_3533d4;
        case 0x3533d8u: goto label_3533d8;
        case 0x3533dcu: goto label_3533dc;
        case 0x3533e0u: goto label_3533e0;
        case 0x3533e4u: goto label_3533e4;
        case 0x3533e8u: goto label_3533e8;
        case 0x3533ecu: goto label_3533ec;
        case 0x3533f0u: goto label_3533f0;
        case 0x3533f4u: goto label_3533f4;
        case 0x3533f8u: goto label_3533f8;
        case 0x3533fcu: goto label_3533fc;
        case 0x353400u: goto label_353400;
        case 0x353404u: goto label_353404;
        case 0x353408u: goto label_353408;
        case 0x35340cu: goto label_35340c;
        case 0x353410u: goto label_353410;
        case 0x353414u: goto label_353414;
        case 0x353418u: goto label_353418;
        case 0x35341cu: goto label_35341c;
        case 0x353420u: goto label_353420;
        case 0x353424u: goto label_353424;
        case 0x353428u: goto label_353428;
        case 0x35342cu: goto label_35342c;
        case 0x353430u: goto label_353430;
        case 0x353434u: goto label_353434;
        case 0x353438u: goto label_353438;
        case 0x35343cu: goto label_35343c;
        case 0x353440u: goto label_353440;
        case 0x353444u: goto label_353444;
        case 0x353448u: goto label_353448;
        case 0x35344cu: goto label_35344c;
        case 0x353450u: goto label_353450;
        case 0x353454u: goto label_353454;
        case 0x353458u: goto label_353458;
        case 0x35345cu: goto label_35345c;
        case 0x353460u: goto label_353460;
        case 0x353464u: goto label_353464;
        case 0x353468u: goto label_353468;
        case 0x35346cu: goto label_35346c;
        default: break;
    }

    ctx->pc = 0x3532a0u;

label_3532a0:
    // 0x3532a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3532a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3532a4:
    // 0x3532a4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
label_3532a8:
    // 0x3532a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3532a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3532ac:
    // 0x3532ac: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x3532acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
label_3532b0:
    // 0x3532b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3532b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3532b4:
    // 0x3532b4: 0x5483006b  bnel        $a0, $v1, . + 4 + (0x6B << 2)
label_3532b8:
    if (ctx->pc == 0x3532B8u) {
        ctx->pc = 0x3532B8u;
            // 0x3532b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3532BCu;
        goto label_3532bc;
    }
    ctx->pc = 0x3532B4u;
    {
        const bool branch_taken_0x3532b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3532b4) {
            ctx->pc = 0x3532B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3532B4u;
            // 0x3532b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353464u;
            goto label_353464;
        }
    }
    ctx->pc = 0x3532BCu;
label_3532bc:
    // 0x3532bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_3532c0:
    // 0x3532c0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3532c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3532c4:
    // 0x3532c4: 0x9063d9d0  lbu         $v1, -0x2630($v1)
    ctx->pc = 0x3532c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957520)));
label_3532c8:
    // 0x3532c8: 0x10640065  beq         $v1, $a0, . + 4 + (0x65 << 2)
label_3532cc:
    if (ctx->pc == 0x3532CCu) {
        ctx->pc = 0x3532D0u;
        goto label_3532d0;
    }
    ctx->pc = 0x3532C8u;
    {
        const bool branch_taken_0x3532c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3532c8) {
            ctx->pc = 0x353460u;
            goto label_353460;
        }
    }
    ctx->pc = 0x3532D0u;
label_3532d0:
    // 0x3532d0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
label_3532d4:
    // 0x3532d4: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x3532d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
label_3532d8:
    // 0x3532d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3532d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3532dc:
    // 0x3532dc: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_3532e0:
    if (ctx->pc == 0x3532E0u) {
        ctx->pc = 0x3532E4u;
        goto label_3532e4;
    }
    ctx->pc = 0x3532DCu;
    {
        const bool branch_taken_0x3532dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532dc) {
            ctx->pc = 0x353460u;
            goto label_353460;
        }
    }
    ctx->pc = 0x3532E4u;
label_3532e4:
    // 0x3532e4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3532e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_3532e8:
    // 0x3532e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3532e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3532ec:
    // 0x3532ec: 0x9063bed1  lbu         $v1, -0x412F($v1)
    ctx->pc = 0x3532ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950609)));
label_3532f0:
    // 0x3532f0: 0x10640059  beq         $v1, $a0, . + 4 + (0x59 << 2)
label_3532f4:
    if (ctx->pc == 0x3532F4u) {
        ctx->pc = 0x3532F8u;
        goto label_3532f8;
    }
    ctx->pc = 0x3532F0u;
    {
        const bool branch_taken_0x3532f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3532f0) {
            ctx->pc = 0x353458u;
            goto label_353458;
        }
    }
    ctx->pc = 0x3532F8u;
label_3532f8:
    // 0x3532f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3532f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3532fc:
    // 0x3532fc: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
label_353300:
    if (ctx->pc == 0x353300u) {
        ctx->pc = 0x353304u;
        goto label_353304;
    }
    ctx->pc = 0x3532FCu;
    {
        const bool branch_taken_0x3532fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3532fc) {
            ctx->pc = 0x353390u;
            goto label_353390;
        }
    }
    ctx->pc = 0x353304u;
label_353304:
    // 0x353304: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_353308:
    if (ctx->pc == 0x353308u) {
        ctx->pc = 0x353308u;
            // 0x353308: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x35330Cu;
        goto label_35330c;
    }
    ctx->pc = 0x353304u;
    {
        const bool branch_taken_0x353304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x353304) {
            ctx->pc = 0x353308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353304u;
            // 0x353308: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353314u;
            goto label_353314;
        }
    }
    ctx->pc = 0x35330Cu;
label_35330c:
    // 0x35330c: 0x10000054  b           . + 4 + (0x54 << 2)
label_353310:
    if (ctx->pc == 0x353310u) {
        ctx->pc = 0x353314u;
        goto label_353314;
    }
    ctx->pc = 0x35330Cu;
    {
        const bool branch_taken_0x35330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35330c) {
            ctx->pc = 0x353460u;
            goto label_353460;
        }
    }
    ctx->pc = 0x353314u;
label_353314:
    // 0x353314: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x353314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
label_353318:
    // 0x353318: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x353318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_35331c:
    // 0x35331c: 0xa064f35b  sb          $a0, -0xCA5($v1)
    ctx->pc = 0x35331cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 4));
label_353320:
    // 0x353320: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x353320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_353324:
    // 0x353324: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x353324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_353328:
    // 0x353328: 0xa060f35c  sb          $zero, -0xCA4($v1)
    ctx->pc = 0x353328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964060), (uint8_t)GPR_U32(ctx, 0));
label_35332c:
    // 0x35332c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35332cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353330:
    // 0x353330: 0x9068db78  lbu         $t0, -0x2488($v1)
    ctx->pc = 0x353330u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957944)));
label_353334:
    // 0x353334: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353338:
    // 0x353338: 0xa0a8bf04  sb          $t0, -0x40FC($a1)
    ctx->pc = 0x353338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294950660), (uint8_t)GPR_U32(ctx, 8));
label_35333c:
    // 0x35333c: 0x9067ddc0  lbu         $a3, -0x2240($v1)
    ctx->pc = 0x35333cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958528)));
label_353340:
    // 0x353340: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x353340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
label_353344:
    // 0x353344: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353348:
    // 0x353348: 0xa087bf07  sb          $a3, -0x40F9($a0)
    ctx->pc = 0x353348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294950663), (uint8_t)GPR_U32(ctx, 7));
label_35334c:
    // 0x35334c: 0x9068db79  lbu         $t0, -0x2487($v1)
    ctx->pc = 0x35334cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957945)));
label_353350:
    // 0x353350: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x353350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_353354:
    // 0x353354: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353358:
    // 0x353358: 0xa0a8bf05  sb          $t0, -0x40FB($a1)
    ctx->pc = 0x353358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294950661), (uint8_t)GPR_U32(ctx, 8));
label_35335c:
    // 0x35335c: 0x9067ddc1  lbu         $a3, -0x223F($v1)
    ctx->pc = 0x35335cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958529)));
label_353360:
    // 0x353360: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x353360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
label_353364:
    // 0x353364: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353368:
    // 0x353368: 0xa087bf08  sb          $a3, -0x40F8($a0)
    ctx->pc = 0x353368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294950664), (uint8_t)GPR_U32(ctx, 7));
label_35336c:
    // 0x35336c: 0x9068db7a  lbu         $t0, -0x2486($v1)
    ctx->pc = 0x35336cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957946)));
label_353370:
    // 0x353370: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x353370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_353374:
    // 0x353374: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353378:
    // 0x353378: 0xa0a8bf06  sb          $t0, -0x40FA($a1)
    ctx->pc = 0x353378u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294950662), (uint8_t)GPR_U32(ctx, 8));
label_35337c:
    // 0x35337c: 0x9067ddc2  lbu         $a3, -0x223E($v1)
    ctx->pc = 0x35337cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958530)));
label_353380:
    // 0x353380: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_353384:
    // 0x353384: 0xa087bf09  sb          $a3, -0x40F7($a0)
    ctx->pc = 0x353384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294950665), (uint8_t)GPR_U32(ctx, 7));
label_353388:
    // 0x353388: 0x10000035  b           . + 4 + (0x35 << 2)
label_35338c:
    if (ctx->pc == 0x35338Cu) {
        ctx->pc = 0x35338Cu;
            // 0x35338c: 0xa066bed1  sb          $a2, -0x412F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950609), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x353390u;
        goto label_353390;
    }
    ctx->pc = 0x353388u;
    {
        const bool branch_taken_0x353388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353388u;
            // 0x35338c: 0xa066bed1  sb          $a2, -0x412F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950609), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353388) {
            ctx->pc = 0x353460u;
            goto label_353460;
        }
    }
    ctx->pc = 0x353390u;
label_353390:
    // 0x353390: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x353390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_353394:
    // 0x353394: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353398:
    // 0x353398: 0xa064f35b  sb          $a0, -0xCA5($v1)
    ctx->pc = 0x353398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 4));
label_35339c:
    // 0x35339c: 0x8044bed0  lb          $a0, -0x4130($v0)
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
label_3533a0:
    // 0x3533a0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3533a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_3533a4:
    // 0x3533a4: 0x24639870  addiu       $v1, $v1, -0x6790
    ctx->pc = 0x3533a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940784));
label_3533a8:
    // 0x3533a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3533a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3533ac:
    // 0x3533ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3533acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3533b0:
    // 0x3533b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3533b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3533b4:
    // 0x3533b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3533b8:
    // 0x3533b8: 0x60f809  jalr        $v1
label_3533bc:
    if (ctx->pc == 0x3533BCu) {
        ctx->pc = 0x3533BCu;
            // 0x3533bc: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->pc = 0x3533C0u;
        goto label_3533c0;
    }
    ctx->pc = 0x3533B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3533C0u);
        ctx->pc = 0x3533BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3533B8u;
            // 0x3533bc: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3533C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3533C0u; }
            if (ctx->pc != 0x3533C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3533C0u;
label_3533c0:
    // 0x3533c0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3533c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_3533c4:
    // 0x3533c4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3533c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3533c8:
    // 0x3533c8: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_3533cc:
    if (ctx->pc == 0x3533CCu) {
        ctx->pc = 0x3533CCu;
            // 0x3533cc: 0xa062bedb  sb          $v0, -0x4125($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950619), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3533D0u;
        goto label_3533d0;
    }
    ctx->pc = 0x3533C8u;
    {
        const bool branch_taken_0x3533c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3533C8u;
            // 0x3533cc: 0xa062bedb  sb          $v0, -0x4125($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950619), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533c8) {
            ctx->pc = 0x353460u;
            goto label_353460;
        }
    }
    ctx->pc = 0x3533D0u;
label_3533d0:
    // 0x3533d0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3533d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_3533d4:
    // 0x3533d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3533d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3533d8:
    // 0x3533d8: 0x24843890  addiu       $a0, $a0, 0x3890
    ctx->pc = 0x3533d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14480));
label_3533dc:
    // 0x3533dc: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x3533dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
label_3533e0:
    // 0x3533e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3533e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3533e4:
    // 0x3533e4: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x3533e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3533e8:
    // 0x3533e8: 0xc0556d4  jal         func_155B50
label_3533ec:
    if (ctx->pc == 0x3533ECu) {
        ctx->pc = 0x3533ECu;
            // 0x3533ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3533F0u;
        goto label_3533f0;
    }
    ctx->pc = 0x3533E8u;
    SET_GPR_U32(ctx, 31, 0x3533F0u);
    ctx->pc = 0x3533ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533E8u;
            // 0x3533ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533F0u; }
        if (ctx->pc != 0x3533F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533F0u; }
        if (ctx->pc != 0x3533F0u) { return; }
    }
    ctx->pc = 0x3533F0u;
label_3533f0:
    // 0x3533f0: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x3533f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3533f4:
    // 0x3533f4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3533f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_3533f8:
    // 0x3533f8: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x3533f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_3533fc:
    // 0x3533fc: 0x3c0601e0  lui         $a2, 0x1E0
    ctx->pc = 0x3533fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)480 << 16));
label_353400:
    // 0x353400: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x353400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
label_353404:
    // 0x353404: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x353404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_353408:
    // 0x353408: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x353408u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
label_35340c:
    // 0x35340c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35340cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353410:
    // 0x353410: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x353410u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
label_353414:
    // 0x353414: 0x9063bedb  lbu         $v1, -0x4125($v1)
    ctx->pc = 0x353414u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950619)));
label_353418:
    // 0x353418: 0xacc8bf28  sw          $t0, -0x40D8($a2)
    ctx->pc = 0x353418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950696), GPR_U32(ctx, 8));
label_35341c:
    // 0x35341c: 0xaca0e7e0  sw          $zero, -0x1820($a1)
    ctx->pc = 0x35341cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961120), GPR_U32(ctx, 0));
label_353420:
    // 0x353420: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
label_353424:
    if (ctx->pc == 0x353424u) {
        ctx->pc = 0x353424u;
            // 0x353424: 0xac80e7e8  sw          $zero, -0x1818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961128), GPR_U32(ctx, 0));
        ctx->pc = 0x353428u;
        goto label_353428;
    }
    ctx->pc = 0x353420u;
    {
        const bool branch_taken_0x353420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x353424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353420u;
            // 0x353424: 0xac80e7e8  sw          $zero, -0x1818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353420) {
            ctx->pc = 0x353440u;
            goto label_353440;
        }
    }
    ctx->pc = 0x353428u;
label_353428:
    // 0x353428: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_35342c:
    // 0x35342c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x35342cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_353430:
    // 0x353430: 0x8063bed0  lb          $v1, -0x4130($v1)
    ctx->pc = 0x353430u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950608)));
label_353434:
    // 0x353434: 0x2484ec50  addiu       $a0, $a0, -0x13B0
    ctx->pc = 0x353434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
label_353438:
    // 0x353438: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_35343c:
    // 0x35343c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x35343cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
label_353440:
    // 0x353440: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x353440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_353444:
    // 0x353444: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_353448:
    // 0x353448: 0x9084bed1  lbu         $a0, -0x412F($a0)
    ctx->pc = 0x353448u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950609)));
label_35344c:
    // 0x35344c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_353450:
    // 0x353450: 0x10000003  b           . + 4 + (0x3 << 2)
label_353454:
    if (ctx->pc == 0x353454u) {
        ctx->pc = 0x353454u;
            // 0x353454: 0xa064bed1  sb          $a0, -0x412F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950609), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x353458u;
        goto label_353458;
    }
    ctx->pc = 0x353450u;
    {
        const bool branch_taken_0x353450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353450u;
            // 0x353454: 0xa064bed1  sb          $a0, -0x412F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950609), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353450) {
            ctx->pc = 0x353460u;
            goto label_353460;
        }
    }
    ctx->pc = 0x353458u;
label_353458:
    // 0x353458: 0xc0d4fb0  jal         func_353EC0
label_35345c:
    if (ctx->pc == 0x35345Cu) {
        ctx->pc = 0x353460u;
        goto label_353460;
    }
    ctx->pc = 0x353458u;
    SET_GPR_U32(ctx, 31, 0x353460u);
    ctx->pc = 0x353EC0u;
    if (runtime->hasFunction(0x353EC0u)) {
        auto targetFn = runtime->lookupFunction(0x353EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353460u; }
        if (ctx->pc != 0x353460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353EC0_0x353ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353460u; }
        if (ctx->pc != 0x353460u) { return; }
    }
    ctx->pc = 0x353460u;
label_353460:
    // 0x353460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353464:
    // 0x353464: 0x3e00008  jr          $ra
label_353468:
    if (ctx->pc == 0x353468u) {
        ctx->pc = 0x353468u;
            // 0x353468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x35346Cu;
        goto label_35346c;
    }
    ctx->pc = 0x353464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353464u;
            // 0x353468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35346Cu;
label_35346c:
    // 0x35346c: 0x0  nop
    ctx->pc = 0x35346cu;
    // NOP
    ctx->pc = 0x353470u;
}
