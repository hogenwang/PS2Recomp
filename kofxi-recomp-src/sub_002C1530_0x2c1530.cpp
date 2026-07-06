#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1530
// Address: 0x2c1530 - 0x2c19f8
void sub_002C1530_0x2c1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1530_0x2c1530");
#endif

    switch (ctx->pc) {
        case 0x2c1530u: goto label_2c1530;
        case 0x2c1534u: goto label_2c1534;
        case 0x2c1538u: goto label_2c1538;
        case 0x2c153cu: goto label_2c153c;
        case 0x2c1540u: goto label_2c1540;
        case 0x2c1544u: goto label_2c1544;
        case 0x2c1548u: goto label_2c1548;
        case 0x2c154cu: goto label_2c154c;
        case 0x2c1550u: goto label_2c1550;
        case 0x2c1554u: goto label_2c1554;
        case 0x2c1558u: goto label_2c1558;
        case 0x2c155cu: goto label_2c155c;
        case 0x2c1560u: goto label_2c1560;
        case 0x2c1564u: goto label_2c1564;
        case 0x2c1568u: goto label_2c1568;
        case 0x2c156cu: goto label_2c156c;
        case 0x2c1570u: goto label_2c1570;
        case 0x2c1574u: goto label_2c1574;
        case 0x2c1578u: goto label_2c1578;
        case 0x2c157cu: goto label_2c157c;
        case 0x2c1580u: goto label_2c1580;
        case 0x2c1584u: goto label_2c1584;
        case 0x2c1588u: goto label_2c1588;
        case 0x2c158cu: goto label_2c158c;
        case 0x2c1590u: goto label_2c1590;
        case 0x2c1594u: goto label_2c1594;
        case 0x2c1598u: goto label_2c1598;
        case 0x2c159cu: goto label_2c159c;
        case 0x2c15a0u: goto label_2c15a0;
        case 0x2c15a4u: goto label_2c15a4;
        case 0x2c15a8u: goto label_2c15a8;
        case 0x2c15acu: goto label_2c15ac;
        case 0x2c15b0u: goto label_2c15b0;
        case 0x2c15b4u: goto label_2c15b4;
        case 0x2c15b8u: goto label_2c15b8;
        case 0x2c15bcu: goto label_2c15bc;
        case 0x2c15c0u: goto label_2c15c0;
        case 0x2c15c4u: goto label_2c15c4;
        case 0x2c15c8u: goto label_2c15c8;
        case 0x2c15ccu: goto label_2c15cc;
        case 0x2c15d0u: goto label_2c15d0;
        case 0x2c15d4u: goto label_2c15d4;
        case 0x2c15d8u: goto label_2c15d8;
        case 0x2c15dcu: goto label_2c15dc;
        case 0x2c15e0u: goto label_2c15e0;
        case 0x2c15e4u: goto label_2c15e4;
        case 0x2c15e8u: goto label_2c15e8;
        case 0x2c15ecu: goto label_2c15ec;
        case 0x2c15f0u: goto label_2c15f0;
        case 0x2c15f4u: goto label_2c15f4;
        case 0x2c15f8u: goto label_2c15f8;
        case 0x2c15fcu: goto label_2c15fc;
        case 0x2c1600u: goto label_2c1600;
        case 0x2c1604u: goto label_2c1604;
        case 0x2c1608u: goto label_2c1608;
        case 0x2c160cu: goto label_2c160c;
        case 0x2c1610u: goto label_2c1610;
        case 0x2c1614u: goto label_2c1614;
        case 0x2c1618u: goto label_2c1618;
        case 0x2c161cu: goto label_2c161c;
        case 0x2c1620u: goto label_2c1620;
        case 0x2c1624u: goto label_2c1624;
        case 0x2c1628u: goto label_2c1628;
        case 0x2c162cu: goto label_2c162c;
        case 0x2c1630u: goto label_2c1630;
        case 0x2c1634u: goto label_2c1634;
        case 0x2c1638u: goto label_2c1638;
        case 0x2c163cu: goto label_2c163c;
        case 0x2c1640u: goto label_2c1640;
        case 0x2c1644u: goto label_2c1644;
        case 0x2c1648u: goto label_2c1648;
        case 0x2c164cu: goto label_2c164c;
        case 0x2c1650u: goto label_2c1650;
        case 0x2c1654u: goto label_2c1654;
        case 0x2c1658u: goto label_2c1658;
        case 0x2c165cu: goto label_2c165c;
        case 0x2c1660u: goto label_2c1660;
        case 0x2c1664u: goto label_2c1664;
        case 0x2c1668u: goto label_2c1668;
        case 0x2c166cu: goto label_2c166c;
        case 0x2c1670u: goto label_2c1670;
        case 0x2c1674u: goto label_2c1674;
        case 0x2c1678u: goto label_2c1678;
        case 0x2c167cu: goto label_2c167c;
        case 0x2c1680u: goto label_2c1680;
        case 0x2c1684u: goto label_2c1684;
        case 0x2c1688u: goto label_2c1688;
        case 0x2c168cu: goto label_2c168c;
        case 0x2c1690u: goto label_2c1690;
        case 0x2c1694u: goto label_2c1694;
        case 0x2c1698u: goto label_2c1698;
        case 0x2c169cu: goto label_2c169c;
        case 0x2c16a0u: goto label_2c16a0;
        case 0x2c16a4u: goto label_2c16a4;
        case 0x2c16a8u: goto label_2c16a8;
        case 0x2c16acu: goto label_2c16ac;
        case 0x2c16b0u: goto label_2c16b0;
        case 0x2c16b4u: goto label_2c16b4;
        case 0x2c16b8u: goto label_2c16b8;
        case 0x2c16bcu: goto label_2c16bc;
        case 0x2c16c0u: goto label_2c16c0;
        case 0x2c16c4u: goto label_2c16c4;
        case 0x2c16c8u: goto label_2c16c8;
        case 0x2c16ccu: goto label_2c16cc;
        case 0x2c16d0u: goto label_2c16d0;
        case 0x2c16d4u: goto label_2c16d4;
        case 0x2c16d8u: goto label_2c16d8;
        case 0x2c16dcu: goto label_2c16dc;
        case 0x2c16e0u: goto label_2c16e0;
        case 0x2c16e4u: goto label_2c16e4;
        case 0x2c16e8u: goto label_2c16e8;
        case 0x2c16ecu: goto label_2c16ec;
        case 0x2c16f0u: goto label_2c16f0;
        case 0x2c16f4u: goto label_2c16f4;
        case 0x2c16f8u: goto label_2c16f8;
        case 0x2c16fcu: goto label_2c16fc;
        case 0x2c1700u: goto label_2c1700;
        case 0x2c1704u: goto label_2c1704;
        case 0x2c1708u: goto label_2c1708;
        case 0x2c170cu: goto label_2c170c;
        case 0x2c1710u: goto label_2c1710;
        case 0x2c1714u: goto label_2c1714;
        case 0x2c1718u: goto label_2c1718;
        case 0x2c171cu: goto label_2c171c;
        case 0x2c1720u: goto label_2c1720;
        case 0x2c1724u: goto label_2c1724;
        case 0x2c1728u: goto label_2c1728;
        case 0x2c172cu: goto label_2c172c;
        case 0x2c1730u: goto label_2c1730;
        case 0x2c1734u: goto label_2c1734;
        case 0x2c1738u: goto label_2c1738;
        case 0x2c173cu: goto label_2c173c;
        case 0x2c1740u: goto label_2c1740;
        case 0x2c1744u: goto label_2c1744;
        case 0x2c1748u: goto label_2c1748;
        case 0x2c174cu: goto label_2c174c;
        case 0x2c1750u: goto label_2c1750;
        case 0x2c1754u: goto label_2c1754;
        case 0x2c1758u: goto label_2c1758;
        case 0x2c175cu: goto label_2c175c;
        case 0x2c1760u: goto label_2c1760;
        case 0x2c1764u: goto label_2c1764;
        case 0x2c1768u: goto label_2c1768;
        case 0x2c176cu: goto label_2c176c;
        case 0x2c1770u: goto label_2c1770;
        case 0x2c1774u: goto label_2c1774;
        case 0x2c1778u: goto label_2c1778;
        case 0x2c177cu: goto label_2c177c;
        case 0x2c1780u: goto label_2c1780;
        case 0x2c1784u: goto label_2c1784;
        case 0x2c1788u: goto label_2c1788;
        case 0x2c178cu: goto label_2c178c;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c1794u: goto label_2c1794;
        case 0x2c1798u: goto label_2c1798;
        case 0x2c179cu: goto label_2c179c;
        case 0x2c17a0u: goto label_2c17a0;
        case 0x2c17a4u: goto label_2c17a4;
        case 0x2c17a8u: goto label_2c17a8;
        case 0x2c17acu: goto label_2c17ac;
        case 0x2c17b0u: goto label_2c17b0;
        case 0x2c17b4u: goto label_2c17b4;
        case 0x2c17b8u: goto label_2c17b8;
        case 0x2c17bcu: goto label_2c17bc;
        case 0x2c17c0u: goto label_2c17c0;
        case 0x2c17c4u: goto label_2c17c4;
        case 0x2c17c8u: goto label_2c17c8;
        case 0x2c17ccu: goto label_2c17cc;
        case 0x2c17d0u: goto label_2c17d0;
        case 0x2c17d4u: goto label_2c17d4;
        case 0x2c17d8u: goto label_2c17d8;
        case 0x2c17dcu: goto label_2c17dc;
        case 0x2c17e0u: goto label_2c17e0;
        case 0x2c17e4u: goto label_2c17e4;
        case 0x2c17e8u: goto label_2c17e8;
        case 0x2c17ecu: goto label_2c17ec;
        case 0x2c17f0u: goto label_2c17f0;
        case 0x2c17f4u: goto label_2c17f4;
        case 0x2c17f8u: goto label_2c17f8;
        case 0x2c17fcu: goto label_2c17fc;
        case 0x2c1800u: goto label_2c1800;
        case 0x2c1804u: goto label_2c1804;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c180cu: goto label_2c180c;
        case 0x2c1810u: goto label_2c1810;
        case 0x2c1814u: goto label_2c1814;
        case 0x2c1818u: goto label_2c1818;
        case 0x2c181cu: goto label_2c181c;
        case 0x2c1820u: goto label_2c1820;
        case 0x2c1824u: goto label_2c1824;
        case 0x2c1828u: goto label_2c1828;
        case 0x2c182cu: goto label_2c182c;
        case 0x2c1830u: goto label_2c1830;
        case 0x2c1834u: goto label_2c1834;
        case 0x2c1838u: goto label_2c1838;
        case 0x2c183cu: goto label_2c183c;
        case 0x2c1840u: goto label_2c1840;
        case 0x2c1844u: goto label_2c1844;
        case 0x2c1848u: goto label_2c1848;
        case 0x2c184cu: goto label_2c184c;
        case 0x2c1850u: goto label_2c1850;
        case 0x2c1854u: goto label_2c1854;
        case 0x2c1858u: goto label_2c1858;
        case 0x2c185cu: goto label_2c185c;
        case 0x2c1860u: goto label_2c1860;
        case 0x2c1864u: goto label_2c1864;
        case 0x2c1868u: goto label_2c1868;
        case 0x2c186cu: goto label_2c186c;
        case 0x2c1870u: goto label_2c1870;
        case 0x2c1874u: goto label_2c1874;
        case 0x2c1878u: goto label_2c1878;
        case 0x2c187cu: goto label_2c187c;
        case 0x2c1880u: goto label_2c1880;
        case 0x2c1884u: goto label_2c1884;
        case 0x2c1888u: goto label_2c1888;
        case 0x2c188cu: goto label_2c188c;
        case 0x2c1890u: goto label_2c1890;
        case 0x2c1894u: goto label_2c1894;
        case 0x2c1898u: goto label_2c1898;
        case 0x2c189cu: goto label_2c189c;
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c18a4u: goto label_2c18a4;
        case 0x2c18a8u: goto label_2c18a8;
        case 0x2c18acu: goto label_2c18ac;
        case 0x2c18b0u: goto label_2c18b0;
        case 0x2c18b4u: goto label_2c18b4;
        case 0x2c18b8u: goto label_2c18b8;
        case 0x2c18bcu: goto label_2c18bc;
        case 0x2c18c0u: goto label_2c18c0;
        case 0x2c18c4u: goto label_2c18c4;
        case 0x2c18c8u: goto label_2c18c8;
        case 0x2c18ccu: goto label_2c18cc;
        case 0x2c18d0u: goto label_2c18d0;
        case 0x2c18d4u: goto label_2c18d4;
        case 0x2c18d8u: goto label_2c18d8;
        case 0x2c18dcu: goto label_2c18dc;
        case 0x2c18e0u: goto label_2c18e0;
        case 0x2c18e4u: goto label_2c18e4;
        case 0x2c18e8u: goto label_2c18e8;
        case 0x2c18ecu: goto label_2c18ec;
        case 0x2c18f0u: goto label_2c18f0;
        case 0x2c18f4u: goto label_2c18f4;
        case 0x2c18f8u: goto label_2c18f8;
        case 0x2c18fcu: goto label_2c18fc;
        case 0x2c1900u: goto label_2c1900;
        case 0x2c1904u: goto label_2c1904;
        case 0x2c1908u: goto label_2c1908;
        case 0x2c190cu: goto label_2c190c;
        case 0x2c1910u: goto label_2c1910;
        case 0x2c1914u: goto label_2c1914;
        case 0x2c1918u: goto label_2c1918;
        case 0x2c191cu: goto label_2c191c;
        case 0x2c1920u: goto label_2c1920;
        case 0x2c1924u: goto label_2c1924;
        case 0x2c1928u: goto label_2c1928;
        case 0x2c192cu: goto label_2c192c;
        case 0x2c1930u: goto label_2c1930;
        case 0x2c1934u: goto label_2c1934;
        case 0x2c1938u: goto label_2c1938;
        case 0x2c193cu: goto label_2c193c;
        case 0x2c1940u: goto label_2c1940;
        case 0x2c1944u: goto label_2c1944;
        case 0x2c1948u: goto label_2c1948;
        case 0x2c194cu: goto label_2c194c;
        case 0x2c1950u: goto label_2c1950;
        case 0x2c1954u: goto label_2c1954;
        case 0x2c1958u: goto label_2c1958;
        case 0x2c195cu: goto label_2c195c;
        case 0x2c1960u: goto label_2c1960;
        case 0x2c1964u: goto label_2c1964;
        case 0x2c1968u: goto label_2c1968;
        case 0x2c196cu: goto label_2c196c;
        case 0x2c1970u: goto label_2c1970;
        case 0x2c1974u: goto label_2c1974;
        case 0x2c1978u: goto label_2c1978;
        case 0x2c197cu: goto label_2c197c;
        case 0x2c1980u: goto label_2c1980;
        case 0x2c1984u: goto label_2c1984;
        case 0x2c1988u: goto label_2c1988;
        case 0x2c198cu: goto label_2c198c;
        case 0x2c1990u: goto label_2c1990;
        case 0x2c1994u: goto label_2c1994;
        case 0x2c1998u: goto label_2c1998;
        case 0x2c199cu: goto label_2c199c;
        case 0x2c19a0u: goto label_2c19a0;
        case 0x2c19a4u: goto label_2c19a4;
        case 0x2c19a8u: goto label_2c19a8;
        case 0x2c19acu: goto label_2c19ac;
        case 0x2c19b0u: goto label_2c19b0;
        case 0x2c19b4u: goto label_2c19b4;
        case 0x2c19b8u: goto label_2c19b8;
        case 0x2c19bcu: goto label_2c19bc;
        case 0x2c19c0u: goto label_2c19c0;
        case 0x2c19c4u: goto label_2c19c4;
        case 0x2c19c8u: goto label_2c19c8;
        case 0x2c19ccu: goto label_2c19cc;
        case 0x2c19d0u: goto label_2c19d0;
        case 0x2c19d4u: goto label_2c19d4;
        case 0x2c19d8u: goto label_2c19d8;
        case 0x2c19dcu: goto label_2c19dc;
        case 0x2c19e0u: goto label_2c19e0;
        case 0x2c19e4u: goto label_2c19e4;
        case 0x2c19e8u: goto label_2c19e8;
        case 0x2c19ecu: goto label_2c19ec;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c19f4u: goto label_2c19f4;
        default: break;
    }

    ctx->pc = 0x2c1530u;

label_2c1530:
    // 0x2c1530: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c1530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c1534:
    // 0x2c1534: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2c1534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_2c1538:
    // 0x2c1538: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2c1538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_2c153c:
    // 0x2c153c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c153cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1540:
    // 0x2c1540: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2c1540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_2c1544:
    // 0x2c1544: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c1544u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1548:
    // 0x2c1548: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2c1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2c154c:
    // 0x2c154c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2c154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2c1550:
    // 0x2c1550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1554:
    // 0x2c1554: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2c1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2c1558:
    // 0x2c1558: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2c1558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2c155c:
    // 0x2c155c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2c155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2c1560:
    // 0x2c1560: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2c1560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2c1564:
    // 0x2c1564: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2c1564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2c1568:
    // 0x2c1568: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c156c:
    // 0x2c156c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2c1570:
    if (ctx->pc == 0x2C1570u) {
        ctx->pc = 0x2C1570u;
            // 0x2c1570: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1574u;
        goto label_2c1574;
    }
    ctx->pc = 0x2C156Cu;
    {
        const bool branch_taken_0x2c156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C156Cu;
            // 0x2c1570: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c156c) {
            ctx->pc = 0x2C1594u;
            goto label_2c1594;
        }
    }
    ctx->pc = 0x2C1574u;
label_2c1574:
    // 0x2c1574: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c1574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c1578:
    // 0x2c1578: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2c1578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2c157c:
    // 0x2c157c: 0x2406009f  addiu       $a2, $zero, 0x9F
    ctx->pc = 0x2c157cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_2c1580:
    // 0x2c1580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1584:
    // 0x2c1584: 0xc0a5648  jal         func_295920
label_2c1588:
    if (ctx->pc == 0x2C1588u) {
        ctx->pc = 0x2C1588u;
            // 0x2c1588: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C158Cu;
        goto label_2c158c;
    }
    ctx->pc = 0x2C1584u;
    SET_GPR_U32(ctx, 31, 0x2C158Cu);
    ctx->pc = 0x2C1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1584u;
            // 0x2c1588: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C158Cu; }
        if (ctx->pc != 0x2C158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C158Cu; }
        if (ctx->pc != 0x2C158Cu) { return; }
    }
    ctx->pc = 0x2C158Cu;
label_2c158c:
    // 0x2c158c: 0x1000010d  b           . + 4 + (0x10D << 2)
label_2c1590:
    if (ctx->pc == 0x2C1590u) {
        ctx->pc = 0x2C1590u;
            // 0x2c1590: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C1594u;
        goto label_2c1594;
    }
    ctx->pc = 0x2C158Cu;
    {
        const bool branch_taken_0x2c158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C158Cu;
            // 0x2c1590: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c158c) {
            ctx->pc = 0x2C19C4u;
            goto label_2c19c4;
        }
    }
    ctx->pc = 0x2C1594u;
label_2c1594:
    // 0x2c1594: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1598:
    // 0x2c1598: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2c1598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2c159c:
    // 0x2c159c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c15a0:
    if (ctx->pc == 0x2C15A0u) {
        ctx->pc = 0x2C15A0u;
            // 0x2c15a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2C15A4u;
        goto label_2c15a4;
    }
    ctx->pc = 0x2C159Cu;
    {
        const bool branch_taken_0x2c159c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C15A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C159Cu;
            // 0x2c15a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c159c) {
            ctx->pc = 0x2C15B0u;
            goto label_2c15b0;
        }
    }
    ctx->pc = 0x2C15A4u;
label_2c15a4:
    // 0x2c15a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c15a8:
    // 0x2c15a8: 0x24421528  addiu       $v0, $v0, 0x1528
    ctx->pc = 0x2c15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5416));
label_2c15ac:
    // 0x2c15ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2c15acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2c15b0:
    // 0x2c15b0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2c15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c15b4:
    // 0x2c15b4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_2c15b8:
    if (ctx->pc == 0x2C15B8u) {
        ctx->pc = 0x2C15B8u;
            // 0x2c15b8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x2C15BCu;
        goto label_2c15bc;
    }
    ctx->pc = 0x2C15B4u;
    {
        const bool branch_taken_0x2c15b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c15b4) {
            ctx->pc = 0x2C15B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15B4u;
            // 0x2c15b8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1608u;
            goto label_2c1608;
        }
    }
    ctx->pc = 0x2C15BCu;
label_2c15bc:
    // 0x2c15bc: 0xc0af004  jal         func_2BC010
label_2c15c0:
    if (ctx->pc == 0x2C15C0u) {
        ctx->pc = 0x2C15C0u;
            // 0x2c15c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C15C4u;
        goto label_2c15c4;
    }
    ctx->pc = 0x2C15BCu;
    SET_GPR_U32(ctx, 31, 0x2C15C4u);
    ctx->pc = 0x2C15C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15BCu;
            // 0x2c15c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15C4u; }
        if (ctx->pc != 0x2C15C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15C4u; }
        if (ctx->pc != 0x2C15C4u) { return; }
    }
    ctx->pc = 0x2C15C4u;
label_2c15c4:
    // 0x2c15c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2c15c8:
    if (ctx->pc == 0x2C15C8u) {
        ctx->pc = 0x2C15C8u;
            // 0x2c15c8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2C15CCu;
        goto label_2c15cc;
    }
    ctx->pc = 0x2C15C4u;
    {
        const bool branch_taken_0x2c15c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C15C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15C4u;
            // 0x2c15c8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15c4) {
            ctx->pc = 0x2C1624u;
            goto label_2c1624;
        }
    }
    ctx->pc = 0x2C15CCu;
label_2c15cc:
    // 0x2c15cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c15d0:
    // 0x2c15d0: 0xc0af10e  jal         func_2BC438
label_2c15d4:
    if (ctx->pc == 0x2C15D4u) {
        ctx->pc = 0x2C15D4u;
            // 0x2c15d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C15D8u;
        goto label_2c15d8;
    }
    ctx->pc = 0x2C15D0u;
    SET_GPR_U32(ctx, 31, 0x2C15D8u);
    ctx->pc = 0x2C15D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15D0u;
            // 0x2c15d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15D8u; }
        if (ctx->pc != 0x2C15D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15D8u; }
        if (ctx->pc != 0x2C15D8u) { return; }
    }
    ctx->pc = 0x2C15D8u;
label_2c15d8:
    // 0x2c15d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2c15dc:
    if (ctx->pc == 0x2C15DCu) {
        ctx->pc = 0x2C15DCu;
            // 0x2c15dc: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2C15E0u;
        goto label_2c15e0;
    }
    ctx->pc = 0x2C15D8u;
    {
        const bool branch_taken_0x2c15d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C15DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15D8u;
            // 0x2c15dc: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15d8) {
            ctx->pc = 0x2C1624u;
            goto label_2c1624;
        }
    }
    ctx->pc = 0x2C15E0u;
label_2c15e0:
    // 0x2c15e0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c15e4:
    // 0x2c15e4: 0x24e7ed58  addiu       $a3, $a3, -0x12A8
    ctx->pc = 0x2c15e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962520));
label_2c15e8:
    // 0x2c15e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c15ec:
    // 0x2c15ec: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2c15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2c15f0:
    // 0x2c15f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c15f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c15f4:
    // 0x2c15f4: 0xc0a8b46  jal         func_2A2D18
label_2c15f8:
    if (ctx->pc == 0x2C15F8u) {
        ctx->pc = 0x2C15F8u;
            // 0x2c15f8: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x2C15FCu;
        goto label_2c15fc;
    }
    ctx->pc = 0x2C15F4u;
    SET_GPR_U32(ctx, 31, 0x2C15FCu);
    ctx->pc = 0x2C15F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C15F4u;
            // 0x2c15f8: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (runtime->hasFunction(0x2A2D18u)) {
        auto targetFn = runtime->lookupFunction(0x2A2D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15FCu; }
        if (ctx->pc != 0x2C15FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2D18_0x2a2d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15FCu; }
        if (ctx->pc != 0x2C15FCu) { return; }
    }
    ctx->pc = 0x2C15FCu;
label_2c15fc:
    // 0x2c15fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1600:
    // 0x2c1600: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2c1600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2c1604:
    // 0x2c1604: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c1604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c1608:
    // 0x2c1608: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_2c160c:
    if (ctx->pc == 0x2C160Cu) {
        ctx->pc = 0x2C160Cu;
            // 0x2c160c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C1610u;
        goto label_2c1610;
    }
    ctx->pc = 0x2C1608u;
    {
        const bool branch_taken_0x2c1608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1608) {
            ctx->pc = 0x2C160Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1608u;
            // 0x2c160c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1644u;
            goto label_2c1644;
        }
    }
    ctx->pc = 0x2C1610u;
label_2c1610:
    // 0x2c1610: 0xc0aefde  jal         func_2BBF78
label_2c1614:
    if (ctx->pc == 0x2C1614u) {
        ctx->pc = 0x2C1618u;
        goto label_2c1618;
    }
    ctx->pc = 0x2C1610u;
    SET_GPR_U32(ctx, 31, 0x2C1618u);
    ctx->pc = 0x2BBF78u;
    if (runtime->hasFunction(0x2BBF78u)) {
        auto targetFn = runtime->lookupFunction(0x2BBF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1618u; }
        if (ctx->pc != 0x2C1618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBF78_0x2bbf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1618u; }
        if (ctx->pc != 0x2C1618u) { return; }
    }
    ctx->pc = 0x2C1618u;
label_2c1618:
    // 0x2c1618: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c1618u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c161c:
    // 0x2c161c: 0x56e00009  bnel        $s7, $zero, . + 4 + (0x9 << 2)
label_2c1620:
    if (ctx->pc == 0x2C1620u) {
        ctx->pc = 0x2C1620u;
            // 0x2c1620: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C1624u;
        goto label_2c1624;
    }
    ctx->pc = 0x2C161Cu;
    {
        const bool branch_taken_0x2c161c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c161c) {
            ctx->pc = 0x2C1620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C161Cu;
            // 0x2c1620: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1644u;
            goto label_2c1644;
        }
    }
    ctx->pc = 0x2C1624u;
label_2c1624:
    // 0x2c1624: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c1624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c1628:
    // 0x2c1628: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2c1628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2c162c:
    // 0x2c162c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2c1630:
    // 0x2c1630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1634:
    // 0x2c1634: 0xc0a5648  jal         func_295920
label_2c1638:
    if (ctx->pc == 0x2C1638u) {
        ctx->pc = 0x2C1638u;
            // 0x2c1638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C163Cu;
        goto label_2c163c;
    }
    ctx->pc = 0x2C1634u;
    SET_GPR_U32(ctx, 31, 0x2C163Cu);
    ctx->pc = 0x2C1638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1634u;
            // 0x2c1638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C163Cu; }
        if (ctx->pc != 0x2C163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C163Cu; }
        if (ctx->pc != 0x2C163Cu) { return; }
    }
    ctx->pc = 0x2C163Cu;
label_2c163c:
    // 0x2c163c: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_2c1640:
    if (ctx->pc == 0x2C1640u) {
        ctx->pc = 0x2C1640u;
            // 0x2c1640: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C1644u;
        goto label_2c1644;
    }
    ctx->pc = 0x2C163Cu;
    {
        const bool branch_taken_0x2c163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C163Cu;
            // 0x2c1640: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c163c) {
            ctx->pc = 0x2C1998u;
            goto label_2c1998;
        }
    }
    ctx->pc = 0x2C1644u;
label_2c1644:
    // 0x2c1644: 0x8e360010  lw          $s6, 0x10($s1)
    ctx->pc = 0x2c1644u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c1648:
    // 0x2c1648: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2c1648u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c164c:
    // 0x2c164c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c1650:
    // 0x2c1650: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2c1650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2c1654:
    // 0x2c1654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c1658:
    // 0x2c1658: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2c165c:
    if (ctx->pc == 0x2C165Cu) {
        ctx->pc = 0x2C165Cu;
            // 0x2c165c: 0x8c52fffc  lw          $s2, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->pc = 0x2C1660u;
        goto label_2c1660;
    }
    ctx->pc = 0x2C1658u;
    {
        const bool branch_taken_0x2c1658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1658u;
            // 0x2c165c: 0x8c52fffc  lw          $s2, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1658) {
            ctx->pc = 0x2C16C8u;
            goto label_2c16c8;
        }
    }
    ctx->pc = 0x2C1660u;
label_2c1660:
    // 0x2c1660: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2c1664:
    if (ctx->pc == 0x2C1664u) {
        ctx->pc = 0x2C1664u;
            // 0x2c1664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1668u;
        goto label_2c1668;
    }
    ctx->pc = 0x2C1660u;
    {
        const bool branch_taken_0x2c1660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1660u;
            // 0x2c1664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1660) {
            ctx->pc = 0x2C16FCu;
            goto label_2c16fc;
        }
    }
    ctx->pc = 0x2C1668u;
label_2c1668:
    // 0x2c1668: 0xc0afcd4  jal         func_2BF350
label_2c166c:
    if (ctx->pc == 0x2C166Cu) {
        ctx->pc = 0x2C166Cu;
            // 0x2c166c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1670u;
        goto label_2c1670;
    }
    ctx->pc = 0x2C1668u;
    SET_GPR_U32(ctx, 31, 0x2C1670u);
    ctx->pc = 0x2C166Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1668u;
            // 0x2c166c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF350u;
    if (runtime->hasFunction(0x2BF350u)) {
        auto targetFn = runtime->lookupFunction(0x2BF350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1670u; }
        if (ctx->pc != 0x2C1670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF350_0x2bf350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1670u; }
        if (ctx->pc != 0x2C1670u) { return; }
    }
    ctx->pc = 0x2C1670u;
label_2c1670:
    // 0x2c1670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1674:
    // 0x2c1674: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_2c1678:
    if (ctx->pc == 0x2C1678u) {
        ctx->pc = 0x2C1678u;
            // 0x2c1678: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C167Cu;
        goto label_2c167c;
    }
    ctx->pc = 0x2C1674u;
    {
        const bool branch_taken_0x2c1674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1674) {
            ctx->pc = 0x2C1678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1674u;
            // 0x2c1678: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1700u;
            goto label_2c1700;
        }
    }
    ctx->pc = 0x2C167Cu;
label_2c167c:
    // 0x2c167c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1680:
    // 0x2c1680: 0xc0af10e  jal         func_2BC438
label_2c1684:
    if (ctx->pc == 0x2C1684u) {
        ctx->pc = 0x2C1684u;
            // 0x2c1684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1688u;
        goto label_2c1688;
    }
    ctx->pc = 0x2C1680u;
    SET_GPR_U32(ctx, 31, 0x2C1688u);
    ctx->pc = 0x2C1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1680u;
            // 0x2c1684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1688u; }
        if (ctx->pc != 0x2C1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1688u; }
        if (ctx->pc != 0x2C1688u) { return; }
    }
    ctx->pc = 0x2C1688u;
label_2c1688:
    // 0x2c1688: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_2c168c:
    if (ctx->pc == 0x2C168Cu) {
        ctx->pc = 0x2C168Cu;
            // 0x2c168c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2C1690u;
        goto label_2c1690;
    }
    ctx->pc = 0x2C1688u;
    {
        const bool branch_taken_0x2c1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1688u;
            // 0x2c168c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1688) {
            ctx->pc = 0x2C197Cu;
            goto label_2c197c;
        }
    }
    ctx->pc = 0x2C1690u;
label_2c1690:
    // 0x2c1690: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2c1690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2c1694:
    // 0x2c1694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c1694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1698:
    // 0x2c1698: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c169c:
    // 0x2c169c: 0x2447ed58  addiu       $a3, $v0, -0x12A8
    ctx->pc = 0x2c169cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962520));
label_2c16a0:
    // 0x2c16a0: 0xc0a8b46  jal         func_2A2D18
label_2c16a4:
    if (ctx->pc == 0x2C16A4u) {
        ctx->pc = 0x2C16A4u;
            // 0x2c16a4: 0x24080081  addiu       $t0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->pc = 0x2C16A8u;
        goto label_2c16a8;
    }
    ctx->pc = 0x2C16A0u;
    SET_GPR_U32(ctx, 31, 0x2C16A8u);
    ctx->pc = 0x2C16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16A0u;
            // 0x2c16a4: 0x24080081  addiu       $t0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (runtime->hasFunction(0x2A2D18u)) {
        auto targetFn = runtime->lookupFunction(0x2A2D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16A8u; }
        if (ctx->pc != 0x2C16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2D18_0x2a2d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16A8u; }
        if (ctx->pc != 0x2C16A8u) { return; }
    }
    ctx->pc = 0x2C16A8u;
label_2c16a8:
    // 0x2c16a8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2c16a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c16ac:
    // 0x2c16ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c16acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c16b0:
    // 0x2c16b0: 0xc0af06c  jal         func_2BC1B0
label_2c16b4:
    if (ctx->pc == 0x2C16B4u) {
        ctx->pc = 0x2C16B4u;
            // 0x2c16b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C16B8u;
        goto label_2c16b8;
    }
    ctx->pc = 0x2C16B0u;
    SET_GPR_U32(ctx, 31, 0x2C16B8u);
    ctx->pc = 0x2C16B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16B0u;
            // 0x2c16b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC1B0u;
    if (runtime->hasFunction(0x2BC1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16B8u; }
        if (ctx->pc != 0x2C16B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC1B0_0x2bc1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16B8u; }
        if (ctx->pc != 0x2C16B8u) { return; }
    }
    ctx->pc = 0x2C16B8u;
label_2c16b8:
    // 0x2c16b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c16b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c16bc:
    // 0x2c16bc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2c16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c16c0:
    // 0x2c16c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2c16c4:
    // 0x2c16c4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2c16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2c16c8:
    // 0x2c16c8: 0x276a02a  slt         $s4, $s3, $s6
    ctx->pc = 0x2c16c8u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2c16cc:
    // 0x2c16cc: 0x5280000c  beql        $s4, $zero, . + 4 + (0xC << 2)
label_2c16d0:
    if (ctx->pc == 0x2C16D0u) {
        ctx->pc = 0x2C16D0u;
            // 0x2c16d0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C16D4u;
        goto label_2c16d4;
    }
    ctx->pc = 0x2C16CCu;
    {
        const bool branch_taken_0x2c16cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c16cc) {
            ctx->pc = 0x2C16D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16CCu;
            // 0x2c16d0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1700u;
            goto label_2c1700;
        }
    }
    ctx->pc = 0x2C16D4u;
label_2c16d4:
    // 0x2c16d4: 0xc0afc48  jal         func_2BF120
label_2c16d8:
    if (ctx->pc == 0x2C16D8u) {
        ctx->pc = 0x2C16D8u;
            // 0x2c16d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C16DCu;
        goto label_2c16dc;
    }
    ctx->pc = 0x2C16D4u;
    SET_GPR_U32(ctx, 31, 0x2C16DCu);
    ctx->pc = 0x2C16D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16D4u;
            // 0x2c16d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (runtime->hasFunction(0x2BF120u)) {
        auto targetFn = runtime->lookupFunction(0x2BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16DCu; }
        if (ctx->pc != 0x2C16DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF120_0x2bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16DCu; }
        if (ctx->pc != 0x2C16DCu) { return; }
    }
    ctx->pc = 0x2C16DCu;
label_2c16dc:
    // 0x2c16dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c16dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c16e0:
    // 0x2c16e0: 0xc0afc4c  jal         func_2BF130
label_2c16e4:
    if (ctx->pc == 0x2C16E4u) {
        ctx->pc = 0x2C16E4u;
            // 0x2c16e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C16E8u;
        goto label_2c16e8;
    }
    ctx->pc = 0x2C16E0u;
    SET_GPR_U32(ctx, 31, 0x2C16E8u);
    ctx->pc = 0x2C16E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16E0u;
            // 0x2c16e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16E8u; }
        if (ctx->pc != 0x2C16E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16E8u; }
        if (ctx->pc != 0x2C16E8u) { return; }
    }
    ctx->pc = 0x2C16E8u;
label_2c16e8:
    // 0x2c16e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c16e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c16ec:
    // 0x2c16ec: 0xc0afc54  jal         func_2BF150
label_2c16f0:
    if (ctx->pc == 0x2C16F0u) {
        ctx->pc = 0x2C16F0u;
            // 0x2c16f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C16F4u;
        goto label_2c16f4;
    }
    ctx->pc = 0x2C16ECu;
    SET_GPR_U32(ctx, 31, 0x2C16F4u);
    ctx->pc = 0x2C16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16ECu;
            // 0x2c16f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (runtime->hasFunction(0x2BF150u)) {
        auto targetFn = runtime->lookupFunction(0x2BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16F4u; }
        if (ctx->pc != 0x2C16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF150_0x2bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C16F4u; }
        if (ctx->pc != 0x2C16F4u) { return; }
    }
    ctx->pc = 0x2C16F4u;
label_2c16f4:
    // 0x2c16f4: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_2c16f8:
    if (ctx->pc == 0x2C16F8u) {
        ctx->pc = 0x2C16F8u;
            // 0x2c16f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x2C16FCu;
        goto label_2c16fc;
    }
    ctx->pc = 0x2C16F4u;
    {
        const bool branch_taken_0x2c16f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c16f4) {
            ctx->pc = 0x2C16F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C16F4u;
            // 0x2c16f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1660;
        }
    }
    ctx->pc = 0x2C16FCu;
label_2c16fc:
    // 0x2c16fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2c16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1700:
    // 0x2c1700: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x2c1700u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c1704:
    // 0x2c1704: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c1704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c1708:
    // 0x2c1708: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2c1708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_2c170c:
    // 0x2c170c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c1710:
    // 0x2c1710: 0x8c52fffc  lw          $s2, -0x4($v0)
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2c1714:
    // 0x2c1714: 0xc0afc4c  jal         func_2BF130
label_2c1718:
    if (ctx->pc == 0x2C1718u) {
        ctx->pc = 0x2C1718u;
            // 0x2c1718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C171Cu;
        goto label_2c171c;
    }
    ctx->pc = 0x2C1714u;
    SET_GPR_U32(ctx, 31, 0x2C171Cu);
    ctx->pc = 0x2C1718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1714u;
            // 0x2c1718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C171Cu; }
        if (ctx->pc != 0x2C171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C171Cu; }
        if (ctx->pc != 0x2C171Cu) { return; }
    }
    ctx->pc = 0x2C171Cu;
label_2c171c:
    // 0x2c171c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c171cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1720:
    // 0x2c1720: 0xc0afc48  jal         func_2BF120
label_2c1724:
    if (ctx->pc == 0x2C1724u) {
        ctx->pc = 0x2C1724u;
            // 0x2c1724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1728u;
        goto label_2c1728;
    }
    ctx->pc = 0x2C1720u;
    SET_GPR_U32(ctx, 31, 0x2C1728u);
    ctx->pc = 0x2C1724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1720u;
            // 0x2c1724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (runtime->hasFunction(0x2BF120u)) {
        auto targetFn = runtime->lookupFunction(0x2BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1728u; }
        if (ctx->pc != 0x2C1728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF120_0x2bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1728u; }
        if (ctx->pc != 0x2C1728u) { return; }
    }
    ctx->pc = 0x2C1728u;
label_2c1728:
    // 0x2c1728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c172c:
    // 0x2c172c: 0xc0afc54  jal         func_2BF150
label_2c1730:
    if (ctx->pc == 0x2C1730u) {
        ctx->pc = 0x2C1730u;
            // 0x2c1730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1734u;
        goto label_2c1734;
    }
    ctx->pc = 0x2C172Cu;
    SET_GPR_U32(ctx, 31, 0x2C1734u);
    ctx->pc = 0x2C1730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C172Cu;
            // 0x2c1730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (runtime->hasFunction(0x2BF150u)) {
        auto targetFn = runtime->lookupFunction(0x2BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1734u; }
        if (ctx->pc != 0x2C1734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF150_0x2bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1734u; }
        if (ctx->pc != 0x2C1734u) { return; }
    }
    ctx->pc = 0x2C1734u;
label_2c1734:
    // 0x2c1734: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_2c1738:
    if (ctx->pc == 0x2C1738u) {
        ctx->pc = 0x2C1738u;
            // 0x2c1738: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C173Cu;
        goto label_2c173c;
    }
    ctx->pc = 0x2C1734u;
    {
        const bool branch_taken_0x2c1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1734u;
            // 0x2c1738: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1734) {
            ctx->pc = 0x2C1814u;
            goto label_2c1814;
        }
    }
    ctx->pc = 0x2C173Cu;
label_2c173c:
    // 0x2c173c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1740:
    // 0x2c1740: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c1740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c1744:
    // 0x2c1744: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_2c1748:
    if (ctx->pc == 0x2C1748u) {
        ctx->pc = 0x2C1748u;
            // 0x2c1748: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2C174Cu;
        goto label_2c174c;
    }
    ctx->pc = 0x2C1744u;
    {
        const bool branch_taken_0x2c1744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1744u;
            // 0x2c1748: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1744) {
            ctx->pc = 0x2C1780u;
            goto label_2c1780;
        }
    }
    ctx->pc = 0x2C174Cu;
label_2c174c:
    // 0x2c174c: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2c174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2c1750:
    // 0x2c1750: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2c1750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_2c1754:
    // 0x2c1754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1758:
    // 0x2c1758: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c175c:
    // 0x2c175c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2c175cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_2c1760:
    // 0x2c1760: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c1760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1764:
    // 0x2c1764: 0x60f809  jalr        $v1
label_2c1768:
    if (ctx->pc == 0x2C1768u) {
        ctx->pc = 0x2C1768u;
            // 0x2c1768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C176Cu;
        goto label_2c176c;
    }
    ctx->pc = 0x2C1764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C176Cu);
        ctx->pc = 0x2C1768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1764u;
            // 0x2c1768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C176Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C176Cu; }
            if (ctx->pc != 0x2C176Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C176Cu;
label_2c176c:
    // 0x2c176c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c176cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1770:
    // 0x2c1770: 0x52a00089  beql        $s5, $zero, . + 4 + (0x89 << 2)
label_2c1774:
    if (ctx->pc == 0x2C1774u) {
        ctx->pc = 0x2C1774u;
            // 0x2c1774: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C1778u;
        goto label_2c1778;
    }
    ctx->pc = 0x2C1770u;
    {
        const bool branch_taken_0x2c1770 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1770) {
            ctx->pc = 0x2C1774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1770u;
            // 0x2c1774: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1998u;
            goto label_2c1998;
        }
    }
    ctx->pc = 0x2C1778u;
label_2c1778:
    // 0x2c1778: 0x10000026  b           . + 4 + (0x26 << 2)
label_2c177c:
    if (ctx->pc == 0x2C177Cu) {
        ctx->pc = 0x2C1780u;
        goto label_2c1780;
    }
    ctx->pc = 0x2C1778u;
    {
        const bool branch_taken_0x2c1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1778) {
            ctx->pc = 0x2C1814u;
            goto label_2c1814;
        }
    }
    ctx->pc = 0x2C1780u;
label_2c1780:
    // 0x2c1780: 0xc0af12a  jal         func_2BC4A8
label_2c1784:
    if (ctx->pc == 0x2C1784u) {
        ctx->pc = 0x2C1784u;
            // 0x2c1784: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x2C1788u;
        goto label_2c1788;
    }
    ctx->pc = 0x2C1780u;
    SET_GPR_U32(ctx, 31, 0x2C1788u);
    ctx->pc = 0x2C1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1780u;
            // 0x2c1784: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4A8u;
    if (runtime->hasFunction(0x2BC4A8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1788u; }
        if (ctx->pc != 0x2C1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC4A8_0x2bc4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1788u; }
        if (ctx->pc != 0x2C1788u) { return; }
    }
    ctx->pc = 0x2C1788u;
label_2c1788:
    // 0x2c1788: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2c1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c178c:
    // 0x2c178c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c178cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1790:
    // 0x2c1790: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1794:
    // 0x2c1794: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2c1794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2c1798:
    // 0x2c1798: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c1798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c179c:
    // 0x2c179c: 0x276a02a  slt         $s4, $s3, $s6
    ctx->pc = 0x2c179cu;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2c17a0:
    // 0x2c17a0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2c17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2c17a4:
    // 0x2c17a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2c17a8:
    // 0x2c17a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c17ac:
    // 0x2c17ac: 0x10000019  b           . + 4 + (0x19 << 2)
label_2c17b0:
    if (ctx->pc == 0x2C17B0u) {
        ctx->pc = 0x2C17B0u;
            // 0x2c17b0: 0x8c92fffc  lw          $s2, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->pc = 0x2C17B4u;
        goto label_2c17b4;
    }
    ctx->pc = 0x2C17ACu;
    {
        const bool branch_taken_0x2c17ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17ACu;
            // 0x2c17b0: 0x8c92fffc  lw          $s2, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17ac) {
            ctx->pc = 0x2C1814u;
            goto label_2c1814;
        }
    }
    ctx->pc = 0x2C17B4u;
label_2c17b4:
    // 0x2c17b4: 0x0  nop
    ctx->pc = 0x2c17b4u;
    // NOP
label_2c17b8:
    // 0x2c17b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c17bc:
    // 0x2c17bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c17c0:
    // 0x2c17c0: 0xc0aff00  jal         func_2BFC00
label_2c17c4:
    if (ctx->pc == 0x2C17C4u) {
        ctx->pc = 0x2C17C4u;
            // 0x2c17c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C17C8u;
        goto label_2c17c8;
    }
    ctx->pc = 0x2C17C0u;
    SET_GPR_U32(ctx, 31, 0x2C17C8u);
    ctx->pc = 0x2C17C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17C0u;
            // 0x2c17c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC00u;
    if (runtime->hasFunction(0x2BFC00u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17C8u; }
        if (ctx->pc != 0x2C17C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFC00_0x2bfc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17C8u; }
        if (ctx->pc != 0x2C17C8u) { return; }
    }
    ctx->pc = 0x2C17C8u;
label_2c17c8:
    // 0x2c17c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c17c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c17cc:
    // 0x2c17cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c17d0:
    // 0x2c17d0: 0x12a20009  beq         $s5, $v0, . + 4 + (0x9 << 2)
label_2c17d4:
    if (ctx->pc == 0x2C17D4u) {
        ctx->pc = 0x2C17D4u;
            // 0x2c17d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C17D8u;
        goto label_2c17d8;
    }
    ctx->pc = 0x2C17D0u;
    {
        const bool branch_taken_0x2c17d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C17D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17D0u;
            // 0x2c17d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17d0) {
            ctx->pc = 0x2C17F8u;
            goto label_2c17f8;
        }
    }
    ctx->pc = 0x2C17D8u;
label_2c17d8:
    // 0x2c17d8: 0x12a30054  beq         $s5, $v1, . + 4 + (0x54 << 2)
label_2c17dc:
    if (ctx->pc == 0x2C17DCu) {
        ctx->pc = 0x2C17E0u;
        goto label_2c17e0;
    }
    ctx->pc = 0x2C17D8u;
    {
        const bool branch_taken_0x2c17d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c17d8) {
            ctx->pc = 0x2C192Cu;
            goto label_2c192c;
        }
    }
    ctx->pc = 0x2C17E0u;
label_2c17e0:
    // 0x2c17e0: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
label_2c17e4:
    if (ctx->pc == 0x2C17E4u) {
        ctx->pc = 0x2C17E8u;
        goto label_2c17e8;
    }
    ctx->pc = 0x2C17E0u;
    {
        const bool branch_taken_0x2c17e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17e0) {
            ctx->pc = 0x2C1844u;
            goto label_2c1844;
        }
    }
    ctx->pc = 0x2C17E8u;
label_2c17e8:
    // 0x2c17e8: 0xc0afef8  jal         func_2BFBE0
label_2c17ec:
    if (ctx->pc == 0x2C17ECu) {
        ctx->pc = 0x2C17ECu;
            // 0x2c17ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C17F0u;
        goto label_2c17f0;
    }
    ctx->pc = 0x2C17E8u;
    SET_GPR_U32(ctx, 31, 0x2C17F0u);
    ctx->pc = 0x2C17ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17E8u;
            // 0x2c17ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBE0u;
    if (runtime->hasFunction(0x2BFBE0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17F0u; }
        if (ctx->pc != 0x2C17F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFBE0_0x2bfbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C17F0u; }
        if (ctx->pc != 0x2C17F0u) { return; }
    }
    ctx->pc = 0x2C17F0u;
label_2c17f0:
    // 0x2c17f0: 0x10000074  b           . + 4 + (0x74 << 2)
label_2c17f4:
    if (ctx->pc == 0x2C17F4u) {
        ctx->pc = 0x2C17F4u;
            // 0x2c17f4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C17F8u;
        goto label_2c17f8;
    }
    ctx->pc = 0x2C17F0u;
    {
        const bool branch_taken_0x2c17f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C17F0u;
            // 0x2c17f4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17f0) {
            ctx->pc = 0x2C19C4u;
            goto label_2c19c4;
        }
    }
    ctx->pc = 0x2C17F8u;
label_2c17f8:
    // 0x2c17f8: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2c17f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c17fc:
    // 0x2c17fc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1800:
    // 0x2c1800: 0xc0af10e  jal         func_2BC438
label_2c1804:
    if (ctx->pc == 0x2C1804u) {
        ctx->pc = 0x2C1804u;
            // 0x2c1804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1808u;
        goto label_2c1808;
    }
    ctx->pc = 0x2C1800u;
    SET_GPR_U32(ctx, 31, 0x2C1808u);
    ctx->pc = 0x2C1804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1800u;
            // 0x2c1804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1808u; }
        if (ctx->pc != 0x2C1808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1808u; }
        if (ctx->pc != 0x2C1808u) { return; }
    }
    ctx->pc = 0x2C1808u;
label_2c1808:
    // 0x2c1808: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2c180c:
    if (ctx->pc == 0x2C180Cu) {
        ctx->pc = 0x2C180Cu;
            // 0x2c180c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2C1810u;
        goto label_2c1810;
    }
    ctx->pc = 0x2C1808u;
    {
        const bool branch_taken_0x2c1808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C180Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1808u;
            // 0x2c180c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1808) {
            ctx->pc = 0x2C1954u;
            goto label_2c1954;
        }
    }
    ctx->pc = 0x2C1810u;
label_2c1810:
    // 0x2c1810: 0x276a02a  slt         $s4, $s3, $s6
    ctx->pc = 0x2c1810u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2c1814:
    // 0x2c1814: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_2c1818:
    if (ctx->pc == 0x2C1818u) {
        ctx->pc = 0x2C181Cu;
        goto label_2c181c;
    }
    ctx->pc = 0x2C1814u;
    {
        const bool branch_taken_0x2c1814 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1814) {
            ctx->pc = 0x2C1844u;
            goto label_2c1844;
        }
    }
    ctx->pc = 0x2C181Cu;
label_2c181c:
    // 0x2c181c: 0xc0afc48  jal         func_2BF120
label_2c1820:
    if (ctx->pc == 0x2C1820u) {
        ctx->pc = 0x2C1820u;
            // 0x2c1820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1824u;
        goto label_2c1824;
    }
    ctx->pc = 0x2C181Cu;
    SET_GPR_U32(ctx, 31, 0x2C1824u);
    ctx->pc = 0x2C1820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C181Cu;
            // 0x2c1820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (runtime->hasFunction(0x2BF120u)) {
        auto targetFn = runtime->lookupFunction(0x2BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1824u; }
        if (ctx->pc != 0x2C1824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF120_0x2bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1824u; }
        if (ctx->pc != 0x2C1824u) { return; }
    }
    ctx->pc = 0x2C1824u;
label_2c1824:
    // 0x2c1824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1828:
    // 0x2c1828: 0xc0afc4c  jal         func_2BF130
label_2c182c:
    if (ctx->pc == 0x2C182Cu) {
        ctx->pc = 0x2C182Cu;
            // 0x2c182c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1830u;
        goto label_2c1830;
    }
    ctx->pc = 0x2C1828u;
    SET_GPR_U32(ctx, 31, 0x2C1830u);
    ctx->pc = 0x2C182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1828u;
            // 0x2c182c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1830u; }
        if (ctx->pc != 0x2C1830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1830u; }
        if (ctx->pc != 0x2C1830u) { return; }
    }
    ctx->pc = 0x2C1830u;
label_2c1830:
    // 0x2c1830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1834:
    // 0x2c1834: 0xc0afc54  jal         func_2BF150
label_2c1838:
    if (ctx->pc == 0x2C1838u) {
        ctx->pc = 0x2C1838u;
            // 0x2c1838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C183Cu;
        goto label_2c183c;
    }
    ctx->pc = 0x2C1834u;
    SET_GPR_U32(ctx, 31, 0x2C183Cu);
    ctx->pc = 0x2C1838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1834u;
            // 0x2c1838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (runtime->hasFunction(0x2BF150u)) {
        auto targetFn = runtime->lookupFunction(0x2BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C183Cu; }
        if (ctx->pc != 0x2C183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF150_0x2bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C183Cu; }
        if (ctx->pc != 0x2C183Cu) { return; }
    }
    ctx->pc = 0x2C183Cu;
label_2c183c:
    // 0x2c183c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_2c1840:
    if (ctx->pc == 0x2C1840u) {
        ctx->pc = 0x2C1840u;
            // 0x2c1840: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1844u;
        goto label_2c1844;
    }
    ctx->pc = 0x2C183Cu;
    {
        const bool branch_taken_0x2c183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C183Cu;
            // 0x2c1840: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c183c) {
            ctx->pc = 0x2C17B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c17b8;
        }
    }
    ctx->pc = 0x2C1844u;
label_2c1844:
    // 0x2c1844: 0xc0afc48  jal         func_2BF120
label_2c1848:
    if (ctx->pc == 0x2C1848u) {
        ctx->pc = 0x2C1848u;
            // 0x2c1848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C184Cu;
        goto label_2c184c;
    }
    ctx->pc = 0x2C1844u;
    SET_GPR_U32(ctx, 31, 0x2C184Cu);
    ctx->pc = 0x2C1848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1844u;
            // 0x2c1848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (runtime->hasFunction(0x2BF120u)) {
        auto targetFn = runtime->lookupFunction(0x2BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C184Cu; }
        if (ctx->pc != 0x2C184Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF120_0x2bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C184Cu; }
        if (ctx->pc != 0x2C184Cu) { return; }
    }
    ctx->pc = 0x2C184Cu;
label_2c184c:
    // 0x2c184c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c184cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1850:
    // 0x2c1850: 0xc0afc4c  jal         func_2BF130
label_2c1854:
    if (ctx->pc == 0x2C1854u) {
        ctx->pc = 0x2C1854u;
            // 0x2c1854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1858u;
        goto label_2c1858;
    }
    ctx->pc = 0x2C1850u;
    SET_GPR_U32(ctx, 31, 0x2C1858u);
    ctx->pc = 0x2C1854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1850u;
            // 0x2c1854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1858u; }
        if (ctx->pc != 0x2C1858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1858u; }
        if (ctx->pc != 0x2C1858u) { return; }
    }
    ctx->pc = 0x2C1858u;
label_2c1858:
    // 0x2c1858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c185c:
    // 0x2c185c: 0xc0afc54  jal         func_2BF150
label_2c1860:
    if (ctx->pc == 0x2C1860u) {
        ctx->pc = 0x2C1860u;
            // 0x2c1860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1864u;
        goto label_2c1864;
    }
    ctx->pc = 0x2C185Cu;
    SET_GPR_U32(ctx, 31, 0x2C1864u);
    ctx->pc = 0x2C1860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C185Cu;
            // 0x2c1860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (runtime->hasFunction(0x2BF150u)) {
        auto targetFn = runtime->lookupFunction(0x2BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1864u; }
        if (ctx->pc != 0x2C1864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF150_0x2bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1864u; }
        if (ctx->pc != 0x2C1864u) { return; }
    }
    ctx->pc = 0x2C1864u;
label_2c1864:
    // 0x2c1864: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_2c1868:
    if (ctx->pc == 0x2C1868u) {
        ctx->pc = 0x2C1868u;
            // 0x2c1868: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C186Cu;
        goto label_2c186c;
    }
    ctx->pc = 0x2C1864u;
    {
        const bool branch_taken_0x2c1864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1864) {
            ctx->pc = 0x2C1868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1864u;
            // 0x2c1868: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C18F4u;
            goto label_2c18f4;
        }
    }
    ctx->pc = 0x2C186Cu;
label_2c186c:
    // 0x2c186c: 0x53c00009  beql        $fp, $zero, . + 4 + (0x9 << 2)
label_2c1870:
    if (ctx->pc == 0x2C1870u) {
        ctx->pc = 0x2C1870u;
            // 0x2c1870: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2C1874u;
        goto label_2c1874;
    }
    ctx->pc = 0x2C186Cu;
    {
        const bool branch_taken_0x2c186c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c186c) {
            ctx->pc = 0x2C1870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C186Cu;
            // 0x2c1870: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1894u;
            goto label_2c1894;
        }
    }
    ctx->pc = 0x2C1874u;
label_2c1874:
    // 0x2c1874: 0xc0afc4c  jal         func_2BF130
label_2c1878:
    if (ctx->pc == 0x2C1878u) {
        ctx->pc = 0x2C1878u;
            // 0x2c1878: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C187Cu;
        goto label_2c187c;
    }
    ctx->pc = 0x2C1874u;
    SET_GPR_U32(ctx, 31, 0x2C187Cu);
    ctx->pc = 0x2C1878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1874u;
            // 0x2c1878: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C187Cu; }
        if (ctx->pc != 0x2C187Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C187Cu; }
        if (ctx->pc != 0x2C187Cu) { return; }
    }
    ctx->pc = 0x2C187Cu;
label_2c187c:
    // 0x2c187c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1880:
    // 0x2c1880: 0xc0afc54  jal         func_2BF150
label_2c1884:
    if (ctx->pc == 0x2C1884u) {
        ctx->pc = 0x2C1884u;
            // 0x2c1884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1888u;
        goto label_2c1888;
    }
    ctx->pc = 0x2C1880u;
    SET_GPR_U32(ctx, 31, 0x2C1888u);
    ctx->pc = 0x2C1884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1880u;
            // 0x2c1884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (runtime->hasFunction(0x2BF150u)) {
        auto targetFn = runtime->lookupFunction(0x2BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1888u; }
        if (ctx->pc != 0x2C1888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF150_0x2bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1888u; }
        if (ctx->pc != 0x2C1888u) { return; }
    }
    ctx->pc = 0x2C1888u;
label_2c1888:
    // 0x2c1888: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c188c:
    if (ctx->pc == 0x2C188Cu) {
        ctx->pc = 0x2C188Cu;
            // 0x2c188c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C1890u;
        goto label_2c1890;
    }
    ctx->pc = 0x2C1888u;
    {
        const bool branch_taken_0x2c1888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1888) {
            ctx->pc = 0x2C188Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1888u;
            // 0x2c188c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C18B0u;
            goto label_2c18b0;
        }
    }
    ctx->pc = 0x2C1890u;
label_2c1890:
    // 0x2c1890: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2c1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c1894:
    // 0x2c1894: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2c1894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2c1898:
    // 0x2c1898: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2c189c:
    if (ctx->pc == 0x2C189Cu) {
        ctx->pc = 0x2C189Cu;
            // 0x2c189c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2C18A0u;
        goto label_2c18a0;
    }
    ctx->pc = 0x2C1898u;
    {
        const bool branch_taken_0x2c1898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1898u;
            // 0x2c189c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1898) {
            ctx->pc = 0x2C18A4u;
            goto label_2c18a4;
        }
    }
    ctx->pc = 0x2C18A0u;
label_2c18a0:
    // 0x2c18a0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2c18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c18a4:
    // 0x2c18a4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c18a8:
    // 0x2c18a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2c18ac:
    if (ctx->pc == 0x2C18ACu) {
        ctx->pc = 0x2C18ACu;
            // 0x2c18ac: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->pc = 0x2C18B0u;
        goto label_2c18b0;
    }
    ctx->pc = 0x2C18A8u;
    {
        const bool branch_taken_0x2c18a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C18ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18A8u;
            // 0x2c18ac: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18a8) {
            ctx->pc = 0x2C18D0u;
            goto label_2c18d0;
        }
    }
    ctx->pc = 0x2C18B0u;
label_2c18b0:
    // 0x2c18b0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c18b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c18b4:
    // 0x2c18b4: 0xc0af10e  jal         func_2BC438
label_2c18b8:
    if (ctx->pc == 0x2C18B8u) {
        ctx->pc = 0x2C18B8u;
            // 0x2c18b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2C18BCu;
        goto label_2c18bc;
    }
    ctx->pc = 0x2C18B4u;
    SET_GPR_U32(ctx, 31, 0x2C18BCu);
    ctx->pc = 0x2C18B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18B4u;
            // 0x2c18b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18BCu; }
        if (ctx->pc != 0x2C18BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18BCu; }
        if (ctx->pc != 0x2C18BCu) { return; }
    }
    ctx->pc = 0x2C18BCu;
label_2c18bc:
    // 0x2c18bc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2c18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2c18c0:
    // 0x2c18c0: 0xae3e0028  sw          $fp, 0x28($s1)
    ctx->pc = 0x2c18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 30));
label_2c18c4:
    // 0x2c18c4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2c18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_2c18c8:
    // 0x2c18c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c18c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c18cc:
    // 0x2c18cc: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x2c18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
label_2c18d0:
    // 0x2c18d0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2c18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2c18d4:
    // 0x2c18d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c18d8:
    // 0x2c18d8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2c18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2c18dc:
    // 0x2c18dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c18e0:
    // 0x2c18e0: 0x60f809  jalr        $v1
label_2c18e4:
    if (ctx->pc == 0x2C18E4u) {
        ctx->pc = 0x2C18E4u;
            // 0x2c18e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C18E8u;
        goto label_2c18e8;
    }
    ctx->pc = 0x2C18E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C18E8u);
        ctx->pc = 0x2C18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18E0u;
            // 0x2c18e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C18E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C18E8u; }
            if (ctx->pc != 0x2C18E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C18E8u;
label_2c18e8:
    // 0x2c18e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c18e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c18ec:
    // 0x2c18ec: 0x12a0002a  beqz        $s5, . + 4 + (0x2A << 2)
label_2c18f0:
    if (ctx->pc == 0x2C18F0u) {
        ctx->pc = 0x2C18F0u;
            // 0x2c18f0: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C18F4u;
        goto label_2c18f4;
    }
    ctx->pc = 0x2C18ECu;
    {
        const bool branch_taken_0x2c18ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C18F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18ECu;
            // 0x2c18f0: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18ec) {
            ctx->pc = 0x2C1998u;
            goto label_2c1998;
        }
    }
    ctx->pc = 0x2C18F4u;
label_2c18f4:
    // 0x2c18f4: 0xc0b0204  jal         func_2C0810
label_2c18f8:
    if (ctx->pc == 0x2C18F8u) {
        ctx->pc = 0x2C18F8u;
            // 0x2c18f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C18FCu;
        goto label_2c18fc;
    }
    ctx->pc = 0x2C18F4u;
    SET_GPR_U32(ctx, 31, 0x2C18FCu);
    ctx->pc = 0x2C18F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18F4u;
            // 0x2c18f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0810u;
    if (runtime->hasFunction(0x2C0810u)) {
        auto targetFn = runtime->lookupFunction(0x2C0810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18FCu; }
        if (ctx->pc != 0x2C18FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0810_0x2c0810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18FCu; }
        if (ctx->pc != 0x2C18FCu) { return; }
    }
    ctx->pc = 0x2C18FCu;
label_2c18fc:
    // 0x2c18fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1900:
    // 0x2c1900: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c1900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c1904:
    // 0x2c1904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c1908:
    if (ctx->pc == 0x2C1908u) {
        ctx->pc = 0x2C190Cu;
        goto label_2c190c;
    }
    ctx->pc = 0x2C1904u;
    {
        const bool branch_taken_0x2c1904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1904) {
            ctx->pc = 0x2C191Cu;
            goto label_2c191c;
        }
    }
    ctx->pc = 0x2C190Cu;
label_2c190c:
    // 0x2c190c: 0x40f809  jalr        $v0
label_2c1910:
    if (ctx->pc == 0x2C1910u) {
        ctx->pc = 0x2C1910u;
            // 0x2c1910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1914u;
        goto label_2c1914;
    }
    ctx->pc = 0x2C190Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C1914u);
        ctx->pc = 0x2C1910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C190Cu;
            // 0x2c1910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1914u; }
            if (ctx->pc != 0x2C1914u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1914u;
label_2c1914:
    // 0x2c1914: 0x10000022  b           . + 4 + (0x22 << 2)
label_2c1918:
    if (ctx->pc == 0x2C1918u) {
        ctx->pc = 0x2C1918u;
            // 0x2c1918: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C191Cu;
        goto label_2c191c;
    }
    ctx->pc = 0x2C1914u;
    {
        const bool branch_taken_0x2c1914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1914u;
            // 0x2c1918: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1914) {
            ctx->pc = 0x2C19A0u;
            goto label_2c19a0;
        }
    }
    ctx->pc = 0x2C191Cu;
label_2c191c:
    // 0x2c191c: 0xc0b067e  jal         func_2C19F8
label_2c1920:
    if (ctx->pc == 0x2C1920u) {
        ctx->pc = 0x2C1920u;
            // 0x2c1920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1924u;
        goto label_2c1924;
    }
    ctx->pc = 0x2C191Cu;
    SET_GPR_U32(ctx, 31, 0x2C1924u);
    ctx->pc = 0x2C1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C191Cu;
            // 0x2c1920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C19F8u;
    if (runtime->hasFunction(0x2C19F8u)) {
        auto targetFn = runtime->lookupFunction(0x2C19F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1924u; }
        if (ctx->pc != 0x2C1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C19F8_0x2c19f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1924u; }
        if (ctx->pc != 0x2C1924u) { return; }
    }
    ctx->pc = 0x2C1924u;
label_2c1924:
    // 0x2c1924: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2c1928:
    if (ctx->pc == 0x2C1928u) {
        ctx->pc = 0x2C1928u;
            // 0x2c1928: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C192Cu;
        goto label_2c192c;
    }
    ctx->pc = 0x2C1924u;
    {
        const bool branch_taken_0x2c1924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1924u;
            // 0x2c1928: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1924) {
            ctx->pc = 0x2C19A0u;
            goto label_2c19a0;
        }
    }
    ctx->pc = 0x2C192Cu;
label_2c192c:
    // 0x2c192c: 0xc0afef8  jal         func_2BFBE0
label_2c1930:
    if (ctx->pc == 0x2C1930u) {
        ctx->pc = 0x2C1930u;
            // 0x2c1930: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1934u;
        goto label_2c1934;
    }
    ctx->pc = 0x2C192Cu;
    SET_GPR_U32(ctx, 31, 0x2C1934u);
    ctx->pc = 0x2C1930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C192Cu;
            // 0x2c1930: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBE0u;
    if (runtime->hasFunction(0x2BFBE0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1934u; }
        if (ctx->pc != 0x2C1934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFBE0_0x2bfbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1934u; }
        if (ctx->pc != 0x2C1934u) { return; }
    }
    ctx->pc = 0x2C1934u;
label_2c1934:
    // 0x2c1934: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c1934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c1938:
    // 0x2c1938: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2c1938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2c193c:
    // 0x2c193c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2c193cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2c1940:
    // 0x2c1940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1944:
    // 0x2c1944: 0xc0a5648  jal         func_295920
label_2c1948:
    if (ctx->pc == 0x2C1948u) {
        ctx->pc = 0x2C1948u;
            // 0x2c1948: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C194Cu;
        goto label_2c194c;
    }
    ctx->pc = 0x2C1944u;
    SET_GPR_U32(ctx, 31, 0x2C194Cu);
    ctx->pc = 0x2C1948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1944u;
            // 0x2c1948: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C194Cu; }
        if (ctx->pc != 0x2C194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C194Cu; }
        if (ctx->pc != 0x2C194Cu) { return; }
    }
    ctx->pc = 0x2C194Cu;
label_2c194c:
    // 0x2c194c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2c1950:
    if (ctx->pc == 0x2C1950u) {
        ctx->pc = 0x2C1950u;
            // 0x2c1950: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C1954u;
        goto label_2c1954;
    }
    ctx->pc = 0x2C194Cu;
    {
        const bool branch_taken_0x2c194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C194Cu;
            // 0x2c1950: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c194c) {
            ctx->pc = 0x2C19C4u;
            goto label_2c19c4;
        }
    }
    ctx->pc = 0x2C1954u;
label_2c1954:
    // 0x2c1954: 0xc0afef8  jal         func_2BFBE0
label_2c1958:
    if (ctx->pc == 0x2C1958u) {
        ctx->pc = 0x2C1958u;
            // 0x2c1958: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C195Cu;
        goto label_2c195c;
    }
    ctx->pc = 0x2C1954u;
    SET_GPR_U32(ctx, 31, 0x2C195Cu);
    ctx->pc = 0x2C1958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1954u;
            // 0x2c1958: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBE0u;
    if (runtime->hasFunction(0x2BFBE0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C195Cu; }
        if (ctx->pc != 0x2C195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFBE0_0x2bfbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C195Cu; }
        if (ctx->pc != 0x2C195Cu) { return; }
    }
    ctx->pc = 0x2C195Cu;
label_2c195c:
    // 0x2c195c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c1960:
    // 0x2c1960: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2c1960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2c1964:
    // 0x2c1964: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c1964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2c1968:
    // 0x2c1968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c196c:
    // 0x2c196c: 0xc0a5648  jal         func_295920
label_2c1970:
    if (ctx->pc == 0x2C1970u) {
        ctx->pc = 0x2C1970u;
            // 0x2c1970: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1974u;
        goto label_2c1974;
    }
    ctx->pc = 0x2C196Cu;
    SET_GPR_U32(ctx, 31, 0x2C1974u);
    ctx->pc = 0x2C1970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C196Cu;
            // 0x2c1970: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1974u; }
        if (ctx->pc != 0x2C1974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1974u; }
        if (ctx->pc != 0x2C1974u) { return; }
    }
    ctx->pc = 0x2C1974u;
label_2c1974:
    // 0x2c1974: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c1978:
    if (ctx->pc == 0x2C1978u) {
        ctx->pc = 0x2C1978u;
            // 0x2c1978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C197Cu;
        goto label_2c197c;
    }
    ctx->pc = 0x2C1974u;
    {
        const bool branch_taken_0x2c1974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1974u;
            // 0x2c1978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1974) {
            ctx->pc = 0x2C19C4u;
            goto label_2c19c4;
        }
    }
    ctx->pc = 0x2C197Cu;
label_2c197c:
    // 0x2c197c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c1980:
    // 0x2c1980: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2c1980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2c1984:
    // 0x2c1984: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c1984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2c1988:
    // 0x2c1988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c198c:
    // 0x2c198c: 0xc0a5648  jal         func_295920
label_2c1990:
    if (ctx->pc == 0x2C1990u) {
        ctx->pc = 0x2C1990u;
            // 0x2c1990: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1994u;
        goto label_2c1994;
    }
    ctx->pc = 0x2C198Cu;
    SET_GPR_U32(ctx, 31, 0x2C1994u);
    ctx->pc = 0x2C1990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C198Cu;
            // 0x2c1990: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1994u; }
        if (ctx->pc != 0x2C1994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1994u; }
        if (ctx->pc != 0x2C1994u) { return; }
    }
    ctx->pc = 0x2C1994u;
label_2c1994:
    // 0x2c1994: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2c1994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1998:
    // 0x2c1998: 0xc0b0204  jal         func_2C0810
label_2c199c:
    if (ctx->pc == 0x2C199Cu) {
        ctx->pc = 0x2C199Cu;
            // 0x2c199c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C19A0u;
        goto label_2c19a0;
    }
    ctx->pc = 0x2C1998u;
    SET_GPR_U32(ctx, 31, 0x2C19A0u);
    ctx->pc = 0x2C199Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1998u;
            // 0x2c199c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0810u;
    if (runtime->hasFunction(0x2C0810u)) {
        auto targetFn = runtime->lookupFunction(0x2C0810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19A0u; }
        if (ctx->pc != 0x2C19A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0810_0x2c0810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19A0u; }
        if (ctx->pc != 0x2C19A0u) { return; }
    }
    ctx->pc = 0x2C19A0u;
label_2c19a0:
    // 0x2c19a0: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_2c19a4:
    if (ctx->pc == 0x2C19A4u) {
        ctx->pc = 0x2C19A8u;
        goto label_2c19a8;
    }
    ctx->pc = 0x2C19A0u;
    {
        const bool branch_taken_0x2c19a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c19a0) {
            ctx->pc = 0x2C19B0u;
            goto label_2c19b0;
        }
    }
    ctx->pc = 0x2C19A8u;
label_2c19a8:
    // 0x2c19a8: 0xc0af176  jal         func_2BC5D8
label_2c19ac:
    if (ctx->pc == 0x2C19ACu) {
        ctx->pc = 0x2C19ACu;
            // 0x2c19ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C19B0u;
        goto label_2c19b0;
    }
    ctx->pc = 0x2C19A8u;
    SET_GPR_U32(ctx, 31, 0x2C19B0u);
    ctx->pc = 0x2C19ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C19A8u;
            // 0x2c19ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19B0u; }
        if (ctx->pc != 0x2C19B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19B0u; }
        if (ctx->pc != 0x2C19B0u) { return; }
    }
    ctx->pc = 0x2C19B0u;
label_2c19b0:
    // 0x2c19b0: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_2c19b4:
    if (ctx->pc == 0x2C19B4u) {
        ctx->pc = 0x2C19B4u;
            // 0x2c19b4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C19B8u;
        goto label_2c19b8;
    }
    ctx->pc = 0x2C19B0u;
    {
        const bool branch_taken_0x2c19b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C19B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C19B0u;
            // 0x2c19b4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19b0) {
            ctx->pc = 0x2C19C4u;
            goto label_2c19c4;
        }
    }
    ctx->pc = 0x2C19B8u;
label_2c19b8:
    // 0x2c19b8: 0xc0b1608  jal         func_2C5820
label_2c19bc:
    if (ctx->pc == 0x2C19BCu) {
        ctx->pc = 0x2C19BCu;
            // 0x2c19bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C19C0u;
        goto label_2c19c0;
    }
    ctx->pc = 0x2C19B8u;
    SET_GPR_U32(ctx, 31, 0x2C19C0u);
    ctx->pc = 0x2C19BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C19B8u;
            // 0x2c19bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5820u;
    if (runtime->hasFunction(0x2C5820u)) {
        auto targetFn = runtime->lookupFunction(0x2C5820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19C0u; }
        if (ctx->pc != 0x2C19C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5820_0x2c5820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19C0u; }
        if (ctx->pc != 0x2C19C0u) { return; }
    }
    ctx->pc = 0x2C19C0u;
label_2c19c0:
    // 0x2c19c0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2c19c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c19c4:
    // 0x2c19c4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2c19c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2c19c8:
    // 0x2c19c8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2c19c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c19cc:
    // 0x2c19cc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2c19ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c19d0:
    // 0x2c19d0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2c19d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2c19d4:
    // 0x2c19d4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2c19d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c19d8:
    // 0x2c19d8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2c19d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c19dc:
    // 0x2c19dc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2c19dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c19e0:
    // 0x2c19e0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2c19e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c19e4:
    // 0x2c19e4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2c19e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c19e8:
    // 0x2c19e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2c19e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c19ec:
    // 0x2c19ec: 0x3e00008  jr          $ra
label_2c19f0:
    if (ctx->pc == 0x2C19F0u) {
        ctx->pc = 0x2C19F0u;
            // 0x2c19f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2C19F4u;
        goto label_2c19f4;
    }
    ctx->pc = 0x2C19ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C19F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C19ECu;
            // 0x2c19f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C19F4u;
label_2c19f4:
    // 0x2c19f4: 0x0  nop
    ctx->pc = 0x2c19f4u;
    // NOP
    ctx->pc = 0x2c19f8u;
}
