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

// Function: sub_00353500
// Address: 0x353500 - 0x3536a0
void sub_00353500_0x353500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353500_0x353500");
#endif

    switch (ctx->pc) {
        case 0x353500u: goto label_353500;
        case 0x353504u: goto label_353504;
        case 0x353508u: goto label_353508;
        case 0x35350cu: goto label_35350c;
        case 0x353510u: goto label_353510;
        case 0x353514u: goto label_353514;
        case 0x353518u: goto label_353518;
        case 0x35351cu: goto label_35351c;
        case 0x353520u: goto label_353520;
        case 0x353524u: goto label_353524;
        case 0x353528u: goto label_353528;
        case 0x35352cu: goto label_35352c;
        case 0x353530u: goto label_353530;
        case 0x353534u: goto label_353534;
        case 0x353538u: goto label_353538;
        case 0x35353cu: goto label_35353c;
        case 0x353540u: goto label_353540;
        case 0x353544u: goto label_353544;
        case 0x353548u: goto label_353548;
        case 0x35354cu: goto label_35354c;
        case 0x353550u: goto label_353550;
        case 0x353554u: goto label_353554;
        case 0x353558u: goto label_353558;
        case 0x35355cu: goto label_35355c;
        case 0x353560u: goto label_353560;
        case 0x353564u: goto label_353564;
        case 0x353568u: goto label_353568;
        case 0x35356cu: goto label_35356c;
        case 0x353570u: goto label_353570;
        case 0x353574u: goto label_353574;
        case 0x353578u: goto label_353578;
        case 0x35357cu: goto label_35357c;
        case 0x353580u: goto label_353580;
        case 0x353584u: goto label_353584;
        case 0x353588u: goto label_353588;
        case 0x35358cu: goto label_35358c;
        case 0x353590u: goto label_353590;
        case 0x353594u: goto label_353594;
        case 0x353598u: goto label_353598;
        case 0x35359cu: goto label_35359c;
        case 0x3535a0u: goto label_3535a0;
        case 0x3535a4u: goto label_3535a4;
        case 0x3535a8u: goto label_3535a8;
        case 0x3535acu: goto label_3535ac;
        case 0x3535b0u: goto label_3535b0;
        case 0x3535b4u: goto label_3535b4;
        case 0x3535b8u: goto label_3535b8;
        case 0x3535bcu: goto label_3535bc;
        case 0x3535c0u: goto label_3535c0;
        case 0x3535c4u: goto label_3535c4;
        case 0x3535c8u: goto label_3535c8;
        case 0x3535ccu: goto label_3535cc;
        case 0x3535d0u: goto label_3535d0;
        case 0x3535d4u: goto label_3535d4;
        case 0x3535d8u: goto label_3535d8;
        case 0x3535dcu: goto label_3535dc;
        case 0x3535e0u: goto label_3535e0;
        case 0x3535e4u: goto label_3535e4;
        case 0x3535e8u: goto label_3535e8;
        case 0x3535ecu: goto label_3535ec;
        case 0x3535f0u: goto label_3535f0;
        case 0x3535f4u: goto label_3535f4;
        case 0x3535f8u: goto label_3535f8;
        case 0x3535fcu: goto label_3535fc;
        case 0x353600u: goto label_353600;
        case 0x353604u: goto label_353604;
        case 0x353608u: goto label_353608;
        case 0x35360cu: goto label_35360c;
        case 0x353610u: goto label_353610;
        case 0x353614u: goto label_353614;
        case 0x353618u: goto label_353618;
        case 0x35361cu: goto label_35361c;
        case 0x353620u: goto label_353620;
        case 0x353624u: goto label_353624;
        case 0x353628u: goto label_353628;
        case 0x35362cu: goto label_35362c;
        case 0x353630u: goto label_353630;
        case 0x353634u: goto label_353634;
        case 0x353638u: goto label_353638;
        case 0x35363cu: goto label_35363c;
        case 0x353640u: goto label_353640;
        case 0x353644u: goto label_353644;
        case 0x353648u: goto label_353648;
        case 0x35364cu: goto label_35364c;
        case 0x353650u: goto label_353650;
        case 0x353654u: goto label_353654;
        case 0x353658u: goto label_353658;
        case 0x35365cu: goto label_35365c;
        case 0x353660u: goto label_353660;
        case 0x353664u: goto label_353664;
        case 0x353668u: goto label_353668;
        case 0x35366cu: goto label_35366c;
        case 0x353670u: goto label_353670;
        case 0x353674u: goto label_353674;
        case 0x353678u: goto label_353678;
        case 0x35367cu: goto label_35367c;
        case 0x353680u: goto label_353680;
        case 0x353684u: goto label_353684;
        case 0x353688u: goto label_353688;
        case 0x35368cu: goto label_35368c;
        case 0x353690u: goto label_353690;
        case 0x353694u: goto label_353694;
        case 0x353698u: goto label_353698;
        case 0x35369cu: goto label_35369c;
        default: break;
    }

    ctx->pc = 0x353500u;

label_353500:
    // 0x353500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_353504:
    // 0x353504: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353508:
    // 0x353508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35350c:
    // 0x35350c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35350cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_353510:
    // 0x353510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_353514:
    // 0x353514: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x353514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_353518:
    // 0x353518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35351c:
    // 0x35351c: 0xa040bed2  sb          $zero, -0x412E($v0)
    ctx->pc = 0x35351cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 0));
label_353520:
    // 0x353520: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353524:
    // 0x353524: 0xa040bed8  sb          $zero, -0x4128($v0)
    ctx->pc = 0x353524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950616), (uint8_t)GPR_U32(ctx, 0));
label_353528:
    // 0x353528: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35352c:
    // 0x35352c: 0xa040bed9  sb          $zero, -0x4127($v0)
    ctx->pc = 0x35352cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 0));
label_353530:
    // 0x353530: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353534:
    // 0x353534: 0xac40bed4  sw          $zero, -0x412C($v0)
    ctx->pc = 0x353534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950612), GPR_U32(ctx, 0));
label_353538:
    // 0x353538: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35353c:
    // 0x35353c: 0xa040beda  sb          $zero, -0x4126($v0)
    ctx->pc = 0x35353cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 0));
label_353540:
    // 0x353540: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353544:
    // 0x353544: 0xac40bedc  sw          $zero, -0x4124($v0)
    ctx->pc = 0x353544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 0));
label_353548:
    // 0x353548: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35354c:
    // 0x35354c: 0xac40bee0  sw          $zero, -0x4120($v0)
    ctx->pc = 0x35354cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950624), GPR_U32(ctx, 0));
label_353550:
    // 0x353550: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353554:
    // 0x353554: 0xac40bee4  sw          $zero, -0x411C($v0)
    ctx->pc = 0x353554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950628), GPR_U32(ctx, 0));
label_353558:
    // 0x353558: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35355c:
    // 0x35355c: 0xac40bee8  sw          $zero, -0x4118($v0)
    ctx->pc = 0x35355cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 0));
label_353560:
    // 0x353560: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353564:
    // 0x353564: 0xac40beec  sw          $zero, -0x4114($v0)
    ctx->pc = 0x353564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950636), GPR_U32(ctx, 0));
label_353568:
    // 0x353568: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35356c:
    // 0x35356c: 0xac40bef0  sw          $zero, -0x4110($v0)
    ctx->pc = 0x35356cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950640), GPR_U32(ctx, 0));
label_353570:
    // 0x353570: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353574:
    // 0x353574: 0xac40bef4  sw          $zero, -0x410C($v0)
    ctx->pc = 0x353574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 0));
label_353578:
    // 0x353578: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35357c:
    // 0x35357c: 0xac40bef8  sw          $zero, -0x4108($v0)
    ctx->pc = 0x35357cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950648), GPR_U32(ctx, 0));
label_353580:
    // 0x353580: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353584:
    // 0x353584: 0xa440bf02  sh          $zero, -0x40FE($v0)
    ctx->pc = 0x353584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 0));
label_353588:
    // 0x353588: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35358c:
    // 0x35358c: 0xa040bedb  sb          $zero, -0x4125($v0)
    ctx->pc = 0x35358cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950619), (uint8_t)GPR_U32(ctx, 0));
label_353590:
    // 0x353590: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353594:
    // 0x353594: 0xa040bf14  sb          $zero, -0x40EC($v0)
    ctx->pc = 0x353594u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 0));
label_353598:
    // 0x353598: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35359c:
    // 0x35359c: 0x9046bf04  lbu         $a2, -0x40FC($v0)
    ctx->pc = 0x35359cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950660)));
label_3535a0:
    // 0x3535a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3535a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3535a4:
    // 0x3535a4: 0xa066db78  sb          $a2, -0x2488($v1)
    ctx->pc = 0x3535a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957944), (uint8_t)GPR_U32(ctx, 6));
label_3535a8:
    // 0x3535a8: 0x9045bf07  lbu         $a1, -0x40F9($v0)
    ctx->pc = 0x3535a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950663)));
label_3535ac:
    // 0x3535ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3535acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_3535b0:
    // 0x3535b0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3535b4:
    // 0x3535b4: 0xa085ddc0  sb          $a1, -0x2240($a0)
    ctx->pc = 0x3535b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294958528), (uint8_t)GPR_U32(ctx, 5));
label_3535b8:
    // 0x3535b8: 0x9046bf05  lbu         $a2, -0x40FB($v0)
    ctx->pc = 0x3535b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950661)));
label_3535bc:
    // 0x3535bc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3535bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_3535c0:
    // 0x3535c0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3535c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
label_3535c4:
    // 0x3535c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3535c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3535c8:
    // 0x3535c8: 0xa066db79  sb          $a2, -0x2487($v1)
    ctx->pc = 0x3535c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957945), (uint8_t)GPR_U32(ctx, 6));
label_3535cc:
    // 0x3535cc: 0x9047bf08  lbu         $a3, -0x40F8($v0)
    ctx->pc = 0x3535ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950664)));
label_3535d0:
    // 0x3535d0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3535d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_3535d4:
    // 0x3535d4: 0x9063bf09  lbu         $v1, -0x40F7($v1)
    ctx->pc = 0x3535d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950665)));
label_3535d8:
    // 0x3535d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3535d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3535dc:
    // 0x3535dc: 0xa0a7ddc1  sb          $a3, -0x223F($a1)
    ctx->pc = 0x3535dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294958529), (uint8_t)GPR_U32(ctx, 7));
label_3535e0:
    // 0x3535e0: 0x9046bf06  lbu         $a2, -0x40FA($v0)
    ctx->pc = 0x3535e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950662)));
label_3535e4:
    // 0x3535e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3535e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3535e8:
    // 0x3535e8: 0xa086db7a  sb          $a2, -0x2486($a0)
    ctx->pc = 0x3535e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957946), (uint8_t)GPR_U32(ctx, 6));
label_3535ec:
    // 0x3535ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3535ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3535f0:
    // 0x3535f0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3535f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_3535f4:
    // 0x3535f4: 0xa043ddc2  sb          $v1, -0x223E($v0)
    ctx->pc = 0x3535f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958530), (uint8_t)GPR_U32(ctx, 3));
label_3535f8:
    // 0x3535f8: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x3535f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
label_3535fc:
    // 0x3535fc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3535fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_353600:
    // 0x353600: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x353600u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
label_353604:
    // 0x353604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_353608:
    // 0x353608: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x353608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_35360c:
    // 0x35360c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x35360cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_353610:
    // 0x353610: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x353610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
label_353614:
    // 0x353614: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x353614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
label_353618:
    // 0x353618: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x353618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
label_35361c:
    // 0x35361c: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x35361cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
label_353620:
    // 0x353620: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x353620u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
label_353624:
    // 0x353624: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x353624u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
label_353628:
    // 0x353628: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x353628u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
label_35362c:
    // 0x35362c: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x35362cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
label_353630:
    // 0x353630: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x353630u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
label_353634:
    // 0x353634: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_353638:
    if (ctx->pc == 0x353638u) {
        ctx->pc = 0x353638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353634u;
        // 0x353638: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35363Cu;
        goto label_35363c;
    }
    ctx->pc = 0x353634u;
    {
        const bool branch_taken_0x353634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353634u;
        // 0x353638: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353634) {
            ctx->pc = 0x353600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_353600;
        }
    }
    ctx->pc = 0x35363Cu;
label_35363c:
    // 0x35363c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35363cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353640:
    // 0x353640: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_353644:
    // 0x353644: 0x8051bf15  lb          $s1, -0x40EB($v0)
    ctx->pc = 0x353644u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950677)));
label_353648:
    // 0x353648: 0x8070bf16  lb          $s0, -0x40EA($v1)
    ctx->pc = 0x353648u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950678)));
label_35364c:
    // 0x35364c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353650:
    // 0x353650: 0x8044bed0  lb          $a0, -0x4130($v0)
    ctx->pc = 0x353650u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
label_353654:
    // 0x353654: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x353654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_353658:
    // 0x353658: 0x24639870  addiu       $v1, $v1, -0x6790
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940784));
label_35365c:
    // 0x35365c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35365cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_353660:
    // 0x353660: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_353664:
    // 0x353664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353668:
    // 0x353668: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35366c:
    // 0x35366c: 0x60f809  jalr        $v1
label_353670:
    if (ctx->pc == 0x353670u) {
        ctx->pc = 0x353670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35366Cu;
        // 0x353670: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353674u;
        goto label_353674;
    }
    ctx->pc = 0x35366Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x353674u);
        ctx->pc = 0x353670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35366Cu;
        // 0x353670: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35366Cu, 0x353674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353674u;
label_353674:
    // 0x353674: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_353678:
    // 0x353678: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35367c:
    // 0x35367c: 0xa071bf15  sb          $s1, -0x40EB($v1)
    ctx->pc = 0x35367cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950677), (uint8_t)GPR_U32(ctx, 17));
label_353680:
    // 0x353680: 0xc0d4884  jal         func_352210
label_353684:
    if (ctx->pc == 0x353684u) {
        ctx->pc = 0x353684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353680u;
        // 0x353684: 0xa050bf16  sb          $s0, -0x40EA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353688u;
        goto label_353688;
    }
    ctx->pc = 0x353680u;
    SET_GPR_U32(ctx, 31, 0x353688u);
    ctx->pc = 0x353684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353680u;
    // 0x353684: 0xa050bf16  sb          $s0, -0x40EA($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352210u, 0x353680u, 0x353688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353688u;
label_353688:
    // 0x353688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35368c:
    // 0x35368c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35368cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353690:
    // 0x353690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353694:
    // 0x353694: 0x3e00008  jr          $ra
label_353698:
    if (ctx->pc == 0x353698u) {
        ctx->pc = 0x353698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353694u;
        // 0x353698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35369Cu;
        goto label_35369c;
    }
    ctx->pc = 0x353694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353694u;
        // 0x353698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35369Cu;
label_35369c:
    // 0x35369c: 0x0  nop
    ctx->pc = 0x35369cu;
    // NOP
    if (ctx->pc == 0x35369cu) { ctx->pc = 0x3536a0u; }
}
