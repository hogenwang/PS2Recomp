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

// Function: sub_002A15C0
// Address: 0x2a15c0 - 0x2a18d8
void sub_002A15C0_0x2a15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A15C0_0x2a15c0");
#endif

    switch (ctx->pc) {
        case 0x2a15c0u: goto label_2a15c0;
        case 0x2a15c4u: goto label_2a15c4;
        case 0x2a15c8u: goto label_2a15c8;
        case 0x2a15ccu: goto label_2a15cc;
        case 0x2a15d0u: goto label_2a15d0;
        case 0x2a15d4u: goto label_2a15d4;
        case 0x2a15d8u: goto label_2a15d8;
        case 0x2a15dcu: goto label_2a15dc;
        case 0x2a15e0u: goto label_2a15e0;
        case 0x2a15e4u: goto label_2a15e4;
        case 0x2a15e8u: goto label_2a15e8;
        case 0x2a15ecu: goto label_2a15ec;
        case 0x2a15f0u: goto label_2a15f0;
        case 0x2a15f4u: goto label_2a15f4;
        case 0x2a15f8u: goto label_2a15f8;
        case 0x2a15fcu: goto label_2a15fc;
        case 0x2a1600u: goto label_2a1600;
        case 0x2a1604u: goto label_2a1604;
        case 0x2a1608u: goto label_2a1608;
        case 0x2a160cu: goto label_2a160c;
        case 0x2a1610u: goto label_2a1610;
        case 0x2a1614u: goto label_2a1614;
        case 0x2a1618u: goto label_2a1618;
        case 0x2a161cu: goto label_2a161c;
        case 0x2a1620u: goto label_2a1620;
        case 0x2a1624u: goto label_2a1624;
        case 0x2a1628u: goto label_2a1628;
        case 0x2a162cu: goto label_2a162c;
        case 0x2a1630u: goto label_2a1630;
        case 0x2a1634u: goto label_2a1634;
        case 0x2a1638u: goto label_2a1638;
        case 0x2a163cu: goto label_2a163c;
        case 0x2a1640u: goto label_2a1640;
        case 0x2a1644u: goto label_2a1644;
        case 0x2a1648u: goto label_2a1648;
        case 0x2a164cu: goto label_2a164c;
        case 0x2a1650u: goto label_2a1650;
        case 0x2a1654u: goto label_2a1654;
        case 0x2a1658u: goto label_2a1658;
        case 0x2a165cu: goto label_2a165c;
        case 0x2a1660u: goto label_2a1660;
        case 0x2a1664u: goto label_2a1664;
        case 0x2a1668u: goto label_2a1668;
        case 0x2a166cu: goto label_2a166c;
        case 0x2a1670u: goto label_2a1670;
        case 0x2a1674u: goto label_2a1674;
        case 0x2a1678u: goto label_2a1678;
        case 0x2a167cu: goto label_2a167c;
        case 0x2a1680u: goto label_2a1680;
        case 0x2a1684u: goto label_2a1684;
        case 0x2a1688u: goto label_2a1688;
        case 0x2a168cu: goto label_2a168c;
        case 0x2a1690u: goto label_2a1690;
        case 0x2a1694u: goto label_2a1694;
        case 0x2a1698u: goto label_2a1698;
        case 0x2a169cu: goto label_2a169c;
        case 0x2a16a0u: goto label_2a16a0;
        case 0x2a16a4u: goto label_2a16a4;
        case 0x2a16a8u: goto label_2a16a8;
        case 0x2a16acu: goto label_2a16ac;
        case 0x2a16b0u: goto label_2a16b0;
        case 0x2a16b4u: goto label_2a16b4;
        case 0x2a16b8u: goto label_2a16b8;
        case 0x2a16bcu: goto label_2a16bc;
        case 0x2a16c0u: goto label_2a16c0;
        case 0x2a16c4u: goto label_2a16c4;
        case 0x2a16c8u: goto label_2a16c8;
        case 0x2a16ccu: goto label_2a16cc;
        case 0x2a16d0u: goto label_2a16d0;
        case 0x2a16d4u: goto label_2a16d4;
        case 0x2a16d8u: goto label_2a16d8;
        case 0x2a16dcu: goto label_2a16dc;
        case 0x2a16e0u: goto label_2a16e0;
        case 0x2a16e4u: goto label_2a16e4;
        case 0x2a16e8u: goto label_2a16e8;
        case 0x2a16ecu: goto label_2a16ec;
        case 0x2a16f0u: goto label_2a16f0;
        case 0x2a16f4u: goto label_2a16f4;
        case 0x2a16f8u: goto label_2a16f8;
        case 0x2a16fcu: goto label_2a16fc;
        case 0x2a1700u: goto label_2a1700;
        case 0x2a1704u: goto label_2a1704;
        case 0x2a1708u: goto label_2a1708;
        case 0x2a170cu: goto label_2a170c;
        case 0x2a1710u: goto label_2a1710;
        case 0x2a1714u: goto label_2a1714;
        case 0x2a1718u: goto label_2a1718;
        case 0x2a171cu: goto label_2a171c;
        case 0x2a1720u: goto label_2a1720;
        case 0x2a1724u: goto label_2a1724;
        case 0x2a1728u: goto label_2a1728;
        case 0x2a172cu: goto label_2a172c;
        case 0x2a1730u: goto label_2a1730;
        case 0x2a1734u: goto label_2a1734;
        case 0x2a1738u: goto label_2a1738;
        case 0x2a173cu: goto label_2a173c;
        case 0x2a1740u: goto label_2a1740;
        case 0x2a1744u: goto label_2a1744;
        case 0x2a1748u: goto label_2a1748;
        case 0x2a174cu: goto label_2a174c;
        case 0x2a1750u: goto label_2a1750;
        case 0x2a1754u: goto label_2a1754;
        case 0x2a1758u: goto label_2a1758;
        case 0x2a175cu: goto label_2a175c;
        case 0x2a1760u: goto label_2a1760;
        case 0x2a1764u: goto label_2a1764;
        case 0x2a1768u: goto label_2a1768;
        case 0x2a176cu: goto label_2a176c;
        case 0x2a1770u: goto label_2a1770;
        case 0x2a1774u: goto label_2a1774;
        case 0x2a1778u: goto label_2a1778;
        case 0x2a177cu: goto label_2a177c;
        case 0x2a1780u: goto label_2a1780;
        case 0x2a1784u: goto label_2a1784;
        case 0x2a1788u: goto label_2a1788;
        case 0x2a178cu: goto label_2a178c;
        case 0x2a1790u: goto label_2a1790;
        case 0x2a1794u: goto label_2a1794;
        case 0x2a1798u: goto label_2a1798;
        case 0x2a179cu: goto label_2a179c;
        case 0x2a17a0u: goto label_2a17a0;
        case 0x2a17a4u: goto label_2a17a4;
        case 0x2a17a8u: goto label_2a17a8;
        case 0x2a17acu: goto label_2a17ac;
        case 0x2a17b0u: goto label_2a17b0;
        case 0x2a17b4u: goto label_2a17b4;
        case 0x2a17b8u: goto label_2a17b8;
        case 0x2a17bcu: goto label_2a17bc;
        case 0x2a17c0u: goto label_2a17c0;
        case 0x2a17c4u: goto label_2a17c4;
        case 0x2a17c8u: goto label_2a17c8;
        case 0x2a17ccu: goto label_2a17cc;
        case 0x2a17d0u: goto label_2a17d0;
        case 0x2a17d4u: goto label_2a17d4;
        case 0x2a17d8u: goto label_2a17d8;
        case 0x2a17dcu: goto label_2a17dc;
        case 0x2a17e0u: goto label_2a17e0;
        case 0x2a17e4u: goto label_2a17e4;
        case 0x2a17e8u: goto label_2a17e8;
        case 0x2a17ecu: goto label_2a17ec;
        case 0x2a17f0u: goto label_2a17f0;
        case 0x2a17f4u: goto label_2a17f4;
        case 0x2a17f8u: goto label_2a17f8;
        case 0x2a17fcu: goto label_2a17fc;
        case 0x2a1800u: goto label_2a1800;
        case 0x2a1804u: goto label_2a1804;
        case 0x2a1808u: goto label_2a1808;
        case 0x2a180cu: goto label_2a180c;
        case 0x2a1810u: goto label_2a1810;
        case 0x2a1814u: goto label_2a1814;
        case 0x2a1818u: goto label_2a1818;
        case 0x2a181cu: goto label_2a181c;
        case 0x2a1820u: goto label_2a1820;
        case 0x2a1824u: goto label_2a1824;
        case 0x2a1828u: goto label_2a1828;
        case 0x2a182cu: goto label_2a182c;
        case 0x2a1830u: goto label_2a1830;
        case 0x2a1834u: goto label_2a1834;
        case 0x2a1838u: goto label_2a1838;
        case 0x2a183cu: goto label_2a183c;
        case 0x2a1840u: goto label_2a1840;
        case 0x2a1844u: goto label_2a1844;
        case 0x2a1848u: goto label_2a1848;
        case 0x2a184cu: goto label_2a184c;
        case 0x2a1850u: goto label_2a1850;
        case 0x2a1854u: goto label_2a1854;
        case 0x2a1858u: goto label_2a1858;
        case 0x2a185cu: goto label_2a185c;
        case 0x2a1860u: goto label_2a1860;
        case 0x2a1864u: goto label_2a1864;
        case 0x2a1868u: goto label_2a1868;
        case 0x2a186cu: goto label_2a186c;
        case 0x2a1870u: goto label_2a1870;
        case 0x2a1874u: goto label_2a1874;
        case 0x2a1878u: goto label_2a1878;
        case 0x2a187cu: goto label_2a187c;
        case 0x2a1880u: goto label_2a1880;
        case 0x2a1884u: goto label_2a1884;
        case 0x2a1888u: goto label_2a1888;
        case 0x2a188cu: goto label_2a188c;
        case 0x2a1890u: goto label_2a1890;
        case 0x2a1894u: goto label_2a1894;
        case 0x2a1898u: goto label_2a1898;
        case 0x2a189cu: goto label_2a189c;
        case 0x2a18a0u: goto label_2a18a0;
        case 0x2a18a4u: goto label_2a18a4;
        case 0x2a18a8u: goto label_2a18a8;
        case 0x2a18acu: goto label_2a18ac;
        case 0x2a18b0u: goto label_2a18b0;
        case 0x2a18b4u: goto label_2a18b4;
        case 0x2a18b8u: goto label_2a18b8;
        case 0x2a18bcu: goto label_2a18bc;
        case 0x2a18c0u: goto label_2a18c0;
        case 0x2a18c4u: goto label_2a18c4;
        case 0x2a18c8u: goto label_2a18c8;
        case 0x2a18ccu: goto label_2a18cc;
        case 0x2a18d0u: goto label_2a18d0;
        case 0x2a18d4u: goto label_2a18d4;
        default: break;
    }

    ctx->pc = 0x2a15c0u;

label_2a15c0:
    // 0x2a15c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2a15c4:
    // 0x2a15c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a15c8:
    // 0x2a15c8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a15c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2a15cc:
    // 0x2a15cc: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2a15ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_2a15d0:
    // 0x2a15d0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2a15d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a15d4:
    // 0x2a15d4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2a15d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2a15d8:
    // 0x2a15d8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2a15d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a15dc:
    // 0x2a15dc: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2a15dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2a15e0:
    // 0x2a15e0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2a15e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a15e4:
    // 0x2a15e4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2a15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2a15e8:
    // 0x2a15e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2a15e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a15ec:
    // 0x2a15ec: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2a15ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2a15f0:
    // 0x2a15f0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2a15f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a15f4:
    // 0x2a15f4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a15f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2a15f8:
    // 0x2a15f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a15f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a15fc:
    // 0x2a15fc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2a15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2a1600:
    // 0x2a1600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a1600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a1604:
    // 0x2a1604: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2a1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2a1608:
    // 0x2a1608: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a1608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a160c:
    // 0x2a160c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2a1610:
    // 0x2a1610: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2a1610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2a1614:
    // 0x2a1614: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_2a1618:
    if (ctx->pc == 0x2A1618u) {
        ctx->pc = 0x2A1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1614u;
        // 0x2a1618: 0xafab0040  sw          $t3, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A161Cu;
        goto label_2a161c;
    }
    ctx->pc = 0x2A1614u;
    {
        const bool branch_taken_0x2a1614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1614u;
        // 0x2a1618: 0xafab0040  sw          $t3, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1614) {
            ctx->pc = 0x2A1628u;
            goto label_2a1628;
        }
    }
    ctx->pc = 0x2A161Cu;
label_2a161c:
    // 0x2a161c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a1620:
    // 0x2a1620: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
label_2a1624:
    if (ctx->pc == 0x2A1624u) {
        ctx->pc = 0x2A1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1620u;
        // 0x2a1624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1628u;
        goto label_2a1628;
    }
    ctx->pc = 0x2A1620u;
    {
        const bool branch_taken_0x2a1620 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1620u;
        // 0x2a1624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1620) {
            ctx->pc = 0x2A1730u;
            goto label_2a1730;
        }
    }
    ctx->pc = 0x2A1628u;
label_2a1628:
    // 0x2a1628: 0xc0a1a88  jal         func_286A20
label_2a162c:
    if (ctx->pc == 0x2A162Cu) {
        ctx->pc = 0x2A162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1628u;
        // 0x2a162c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1630u;
        goto label_2a1630;
    }
    ctx->pc = 0x2A1628u;
    SET_GPR_U32(ctx, 31, 0x2A1630u);
    ctx->pc = 0x2A162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1628u;
    // 0x2a162c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A1628u, 0x2A1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1630u;
label_2a1630:
    // 0x2a1630: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2a1630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a1634:
    // 0x2a1634: 0xc0a1a88  jal         func_286A20
label_2a1638:
    if (ctx->pc == 0x2A1638u) {
        ctx->pc = 0x2A1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1634u;
        // 0x2a1638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A163Cu;
        goto label_2a163c;
    }
    ctx->pc = 0x2A1634u;
    SET_GPR_U32(ctx, 31, 0x2A163Cu);
    ctx->pc = 0x2A1638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1634u;
    // 0x2a1638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A1634u, 0x2A163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A163Cu;
label_2a163c:
    // 0x2a163c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2a163cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a1640:
    // 0x2a1640: 0xc0a1a02  jal         func_286808
label_2a1644:
    if (ctx->pc == 0x2A1644u) {
        ctx->pc = 0x2A1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1640u;
        // 0x2a1644: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1648u;
        goto label_2a1648;
    }
    ctx->pc = 0x2A1640u;
    SET_GPR_U32(ctx, 31, 0x2A1648u);
    ctx->pc = 0x2A1644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1640u;
    // 0x2a1644: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2A1640u, 0x2A1648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1648u;
label_2a1648:
    // 0x2a1648: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a1648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2a164c:
    // 0x2a164c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a1650:
    // 0x2a1650: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2a1654:
    // 0x2a1654: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a1654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a1658:
    // 0x2a1658: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a1658u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2a165c:
    // 0x2a165c: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x2a165cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_2a1660:
    // 0x2a1660: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x2a1660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a1664:
    // 0x2a1664: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a1668:
    if (ctx->pc == 0x2A1668u) {
        ctx->pc = 0x2A1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1664u;
        // 0x2a1668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A166Cu;
        goto label_2a166c;
    }
    ctx->pc = 0x2A1664u;
    {
        const bool branch_taken_0x2a1664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1664u;
        // 0x2a1668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1664) {
            ctx->pc = 0x2A1678u;
            goto label_2a1678;
        }
    }
    ctx->pc = 0x2A166Cu;
label_2a166c:
    // 0x2a166c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2a166cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2a1670:
    // 0x2a1670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a1674:
    if (ctx->pc == 0x2A1674u) {
        ctx->pc = 0x2A1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1670u;
        // 0x2a1674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1678u;
        goto label_2a1678;
    }
    ctx->pc = 0x2A1670u;
    {
        const bool branch_taken_0x2a1670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1670u;
        // 0x2a1674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1670) {
            ctx->pc = 0x2A1680u;
            goto label_2a1680;
        }
    }
    ctx->pc = 0x2A1678u;
label_2a1678:
    // 0x2a1678: 0x10000024  b           . + 4 + (0x24 << 2)
label_2a167c:
    if (ctx->pc == 0x2A167Cu) {
        ctx->pc = 0x2A167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1678u;
        // 0x2a167c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1680u;
        goto label_2a1680;
    }
    ctx->pc = 0x2A1678u;
    {
        const bool branch_taken_0x2a1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1678u;
        // 0x2a167c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1678) {
            ctx->pc = 0x2A170Cu;
            goto label_2a170c;
        }
    }
    ctx->pc = 0x2A1680u;
label_2a1680:
    // 0x2a1680: 0xc0a1a9e  jal         func_286A78
label_2a1684:
    if (ctx->pc == 0x2A1684u) {
        ctx->pc = 0x2A1688u;
        goto label_2a1688;
    }
    ctx->pc = 0x2A1680u;
    SET_GPR_U32(ctx, 31, 0x2A1688u);
    ctx->pc = 0x286A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A78u, 0x2A1680u, 0x2A1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1688u;
label_2a1688:
    // 0x2a1688: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a1688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a168c:
    // 0x2a168c: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_2a1690:
    if (ctx->pc == 0x2A1690u) {
        ctx->pc = 0x2A1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A168Cu;
        // 0x2a1690: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1694u;
        goto label_2a1694;
    }
    ctx->pc = 0x2A168Cu;
    {
        const bool branch_taken_0x2a168c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A168Cu;
        // 0x2a1690: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a168c) {
            ctx->pc = 0x2A171Cu;
            goto label_2a171c;
        }
    }
    ctx->pc = 0x2A1694u;
label_2a1694:
    // 0x2a1694: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2a1694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2a1698:
    // 0x2a1698: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a1698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a169c:
    // 0x2a169c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a169cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a16a0:
    // 0x2a16a0: 0xc0a1b8c  jal         func_286E30
label_2a16a4:
    if (ctx->pc == 0x2A16A4u) {
        ctx->pc = 0x2A16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16A0u;
        // 0x2a16a4: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16A8u;
        goto label_2a16a8;
    }
    ctx->pc = 0x2A16A0u;
    SET_GPR_U32(ctx, 31, 0x2A16A8u);
    ctx->pc = 0x2A16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16A0u;
    // 0x2a16a4: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2A16A0u, 0x2A16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16A8u;
label_2a16a8:
    // 0x2a16a8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2a16ac:
    if (ctx->pc == 0x2A16ACu) {
        ctx->pc = 0x2A16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16A8u;
        // 0x2a16ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16B0u;
        goto label_2a16b0;
    }
    ctx->pc = 0x2A16A8u;
    {
        const bool branch_taken_0x2a16a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16A8u;
        // 0x2a16ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16a8) {
            ctx->pc = 0x2A170Cu;
            goto label_2a170c;
        }
    }
    ctx->pc = 0x2A16B0u;
label_2a16b0:
    // 0x2a16b0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2a16b4:
    // 0x2a16b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a16b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a16b8:
    // 0x2a16b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a16b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a16bc:
    // 0x2a16bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a16bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a16c0:
    // 0x2a16c0: 0xc0a1d96  jal         func_287658
label_2a16c4:
    if (ctx->pc == 0x2A16C4u) {
        ctx->pc = 0x2A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16C0u;
        // 0x2a16c4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16C8u;
        goto label_2a16c8;
    }
    ctx->pc = 0x2A16C0u;
    SET_GPR_U32(ctx, 31, 0x2A16C8u);
    ctx->pc = 0x2A16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16C0u;
    // 0x2a16c4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287658u, 0x2A16C0u, 0x2A16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16C8u;
label_2a16c8:
    // 0x2a16c8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a16cc:
    if (ctx->pc == 0x2A16CCu) {
        ctx->pc = 0x2A16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16C8u;
        // 0x2a16cc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16D0u;
        goto label_2a16d0;
    }
    ctx->pc = 0x2A16C8u;
    {
        const bool branch_taken_0x2a16c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16C8u;
        // 0x2a16cc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16c8) {
            ctx->pc = 0x2A170Cu;
            goto label_2a170c;
        }
    }
    ctx->pc = 0x2A16D0u;
label_2a16d0:
    // 0x2a16d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a16d4:
    // 0x2a16d4: 0xc0a1bdc  jal         func_286F70
label_2a16d8:
    if (ctx->pc == 0x2A16D8u) {
        ctx->pc = 0x2A16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16D4u;
        // 0x2a16d8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16DCu;
        goto label_2a16dc;
    }
    ctx->pc = 0x2A16D4u;
    SET_GPR_U32(ctx, 31, 0x2A16DCu);
    ctx->pc = 0x2A16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16D4u;
    // 0x2a16d8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F70u, 0x2A16D4u, 0x2A16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16DCu;
label_2a16dc:
    // 0x2a16dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a16dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a16e0:
    // 0x2a16e0: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x2a16e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2a16e4:
    // 0x2a16e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2a16e8:
    if (ctx->pc == 0x2A16E8u) {
        ctx->pc = 0x2A16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16E4u;
        // 0x2a16e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16ECu;
        goto label_2a16ec;
    }
    ctx->pc = 0x2A16E4u;
    {
        const bool branch_taken_0x2a16e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16E4u;
        // 0x2a16e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16e4) {
            ctx->pc = 0x2A170Cu;
            goto label_2a170c;
        }
    }
    ctx->pc = 0x2A16ECu;
label_2a16ec:
    // 0x2a16ec: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2a16ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2a16f0:
    // 0x2a16f0: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x2a16f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a16f4:
    // 0x2a16f4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a16f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a16f8:
    // 0x2a16f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2a16fc:
    // 0x2a16fc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2a16fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1700:
    // 0x2a1700: 0x40f809  jalr        $v0
label_2a1704:
    if (ctx->pc == 0x2A1704u) {
        ctx->pc = 0x2A1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1700u;
        // 0x2a1704: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1708u;
        goto label_2a1708;
    }
    ctx->pc = 0x2A1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1708u);
        ctx->pc = 0x2A1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1700u;
        // 0x2a1704: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1700u, 0x2A1708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1708u;
label_2a1708:
    // 0x2a1708: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2a1708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2a170c:
    // 0x2a170c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2a1710:
    if (ctx->pc == 0x2A1710u) {
        ctx->pc = 0x2A1714u;
        goto label_2a1714;
    }
    ctx->pc = 0x2A170Cu;
    {
        const bool branch_taken_0x2a170c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a170c) {
            ctx->pc = 0x2A171Cu;
            goto label_2a171c;
        }
    }
    ctx->pc = 0x2A1714u;
label_2a1714:
    // 0x2a1714: 0xc0a1abe  jal         func_286AF8
label_2a1718:
    if (ctx->pc == 0x2A1718u) {
        ctx->pc = 0x2A1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1714u;
        // 0x2a1718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A171Cu;
        goto label_2a171c;
    }
    ctx->pc = 0x2A1714u;
    SET_GPR_U32(ctx, 31, 0x2A171Cu);
    ctx->pc = 0x2A1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1714u;
    // 0x2a1718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AF8u, 0x2A1714u, 0x2A171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A171Cu;
label_2a171c:
    // 0x2a171c: 0xc0a1a36  jal         func_2868D8
label_2a1720:
    if (ctx->pc == 0x2A1720u) {
        ctx->pc = 0x2A1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A171Cu;
        // 0x2a1720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1724u;
        goto label_2a1724;
    }
    ctx->pc = 0x2A171Cu;
    SET_GPR_U32(ctx, 31, 0x2A1724u);
    ctx->pc = 0x2A1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A171Cu;
    // 0x2a1720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2A171Cu, 0x2A1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1724u;
label_2a1724:
    // 0x2a1724: 0xc0a1a36  jal         func_2868D8
label_2a1728:
    if (ctx->pc == 0x2A1728u) {
        ctx->pc = 0x2A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1724u;
        // 0x2a1728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A172Cu;
        goto label_2a172c;
    }
    ctx->pc = 0x2A1724u;
    SET_GPR_U32(ctx, 31, 0x2A172Cu);
    ctx->pc = 0x2A1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1724u;
    // 0x2a1728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2A1724u, 0x2A172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A172Cu;
label_2a172c:
    // 0x2a172c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2a172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2a1730:
    // 0x2a1730: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2a1730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a1734:
    // 0x2a1734: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a1734u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2a1738:
    // 0x2a1738: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2a1738u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a173c:
    // 0x2a173c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a173cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2a1740:
    // 0x2a1740: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2a1740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a1744:
    // 0x2a1744: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a1744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a1748:
    // 0x2a1748: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2a1748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a174c:
    // 0x2a174c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a174cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a1750:
    // 0x2a1750: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a1750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a1754:
    // 0x2a1754: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a1754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a1758:
    // 0x2a1758: 0x3e00008  jr          $ra
label_2a175c:
    if (ctx->pc == 0x2A175Cu) {
        ctx->pc = 0x2A175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1758u;
        // 0x2a175c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1760u;
        goto label_2a1760;
    }
    ctx->pc = 0x2A1758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1758u;
        // 0x2a175c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1760u;
label_2a1760:
    // 0x2a1760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a1764:
    // 0x2a1764: 0x2502000b  addiu       $v0, $t0, 0xB
    ctx->pc = 0x2a1764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11));
label_2a1768:
    // 0x2a1768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a176c:
    // 0x2a176c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a176cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a1770:
    // 0x2a1770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a1774:
    // 0x2a1774: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a1774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a1778:
    // 0x2a1778: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a177c:
    if (ctx->pc == 0x2A177Cu) {
        ctx->pc = 0x2A177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1778u;
        // 0x2a177c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1780u;
        goto label_2a1780;
    }
    ctx->pc = 0x2A1778u;
    {
        const bool branch_taken_0x2a1778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1778u;
        // 0x2a177c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1778) {
            ctx->pc = 0x2A1788u;
            goto label_2a1788;
        }
    }
    ctx->pc = 0x2A1780u;
label_2a1780:
    // 0x2a1780: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2a1784:
    if (ctx->pc == 0x2A1784u) {
        ctx->pc = 0x2A1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1780u;
        // 0x2a1784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1788u;
        goto label_2a1788;
    }
    ctx->pc = 0x2A1780u;
    {
        const bool branch_taken_0x2a1780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1780u;
        // 0x2a1784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1780) {
            ctx->pc = 0x2A1800u;
            goto label_2a1800;
        }
    }
    ctx->pc = 0x2A1788u;
label_2a1788:
    // 0x2a1788: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2a1788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2a178c:
    // 0x2a178c: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x2a178cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2a1790:
    // 0x2a1790: 0x520000c  bltz        $t1, . + 4 + (0xC << 2)
label_2a1794:
    if (ctx->pc == 0x2A1794u) {
        ctx->pc = 0x2A1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1790u;
        // 0x2a1794: 0x488823  subu        $s1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1798u;
        goto label_2a1798;
    }
    ctx->pc = 0x2A1790u;
    {
        const bool branch_taken_0x2a1790 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2A1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1790u;
        // 0x2a1794: 0x488823  subu        $s1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1790) {
            ctx->pc = 0x2A17C4u;
            goto label_2a17c4;
        }
    }
    ctx->pc = 0x2A1798u;
label_2a1798:
    // 0x2a1798: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x2a1798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2a179c:
    // 0x2a179c: 0x0  nop
    ctx->pc = 0x2a179cu;
    // NOP
label_2a17a0:
    // 0x2a17a0: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x2a17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_2a17a4:
    // 0x2a17a4: 0x2292021  addu        $a0, $s1, $t1
    ctx->pc = 0x2a17a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_2a17a8:
    // 0x2a17a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a17a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a17ac:
    // 0x2a17ac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2a17acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2a17b0:
    // 0x2a17b0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a17b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2a17b4:
    // 0x2a17b4: 0x521fffa  bgez        $t1, . + 4 + (-0x6 << 2)
label_2a17b8:
    if (ctx->pc == 0x2A17B8u) {
        ctx->pc = 0x2A17BCu;
        goto label_2a17bc;
    }
    ctx->pc = 0x2A17B4u;
    {
        const bool branch_taken_0x2a17b4 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x2a17b4) {
            ctx->pc = 0x2A17A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a17a0;
        }
    }
    ctx->pc = 0x2A17BCu;
label_2a17bc:
    // 0x2a17bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a17c0:
    if (ctx->pc == 0x2A17C0u) {
        ctx->pc = 0x2A17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17BCu;
        // 0x2a17c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A17C4u;
        goto label_2a17c4;
    }
    ctx->pc = 0x2A17BCu;
    {
        const bool branch_taken_0x2a17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17BCu;
        // 0x2a17c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17bc) {
            ctx->pc = 0x2A17CCu;
            goto label_2a17cc;
        }
    }
    ctx->pc = 0x2A17C4u;
label_2a17c4:
    // 0x2a17c4: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x2a17c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2a17c8:
    // 0x2a17c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a17c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a17cc:
    // 0x2a17cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a17d0:
    // 0x2a17d0: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2a17d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a17d4:
    // 0x2a17d4: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x2a17d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_2a17d8:
    // 0x2a17d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a17d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a17dc:
    // 0x2a17dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a17dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a17e0:
    // 0x2a17e0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2a17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a17e4:
    // 0x2a17e4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2a17e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a17e8:
    // 0x2a17e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a17e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a17ec:
    // 0x2a17ec: 0xc049cb6  jal         func_1272D8
label_2a17f0:
    if (ctx->pc == 0x2A17F0u) {
        ctx->pc = 0x2A17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17ECu;
        // 0x2a17f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A17F4u;
        goto label_2a17f4;
    }
    ctx->pc = 0x2A17ECu;
    SET_GPR_U32(ctx, 31, 0x2A17F4u);
    ctx->pc = 0x2A17F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17ECu;
    // 0x2a17f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A17ECu, 0x2A17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17F4u;
label_2a17f4:
    // 0x2a17f4: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2a17f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2a17f8:
    // 0x2a17f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a17f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a17fc:
    // 0x2a17fc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a17fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a1800:
    // 0x2a1800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a1800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a1804:
    // 0x2a1804: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1808:
    // 0x2a1808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a180c:
    // 0x2a180c: 0x3e00008  jr          $ra
label_2a1810:
    if (ctx->pc == 0x2A1810u) {
        ctx->pc = 0x2A1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A180Cu;
        // 0x2a1810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1814u;
        goto label_2a1814;
    }
    ctx->pc = 0x2A180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A180Cu;
        // 0x2a1810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1814u;
label_2a1814:
    // 0x2a1814: 0x0  nop
    ctx->pc = 0x2a1814u;
    // NOP
label_2a1818:
    // 0x2a1818: 0xe8402a  slt         $t0, $a3, $t0
    ctx->pc = 0x2a1818u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2a181c:
    // 0x2a181c: 0x1100002b  beqz        $t0, . + 4 + (0x2B << 2)
label_2a1820:
    if (ctx->pc == 0x2A1820u) {
        ctx->pc = 0x2A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A181Cu;
        // 0x2a1820: 0x28e2000a  slti        $v0, $a3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1824u;
        goto label_2a1824;
    }
    ctx->pc = 0x2A181Cu;
    {
        const bool branch_taken_0x2a181c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A181Cu;
        // 0x2a1820: 0x28e2000a  slti        $v0, $a3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a181c) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A1824u;
label_2a1824:
    // 0x2a1824: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_2a1828:
    if (ctx->pc == 0x2A1828u) {
        ctx->pc = 0x2A1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1824u;
        // 0x2a1828: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A182Cu;
        goto label_2a182c;
    }
    ctx->pc = 0x2A1824u;
    {
        const bool branch_taken_0x2a1824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1824u;
        // 0x2a1828: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1824) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A182Cu;
label_2a182c:
    // 0x2a182c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2a182cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a1830:
    // 0x2a1830: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_2a1834:
    if (ctx->pc == 0x2A1834u) {
        ctx->pc = 0x2A1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1830u;
        // 0x2a1834: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1838u;
        goto label_2a1838;
    }
    ctx->pc = 0x2A1830u;
    {
        const bool branch_taken_0x2a1830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1830u;
        // 0x2a1834: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1830) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A1838u;
label_2a1838:
    // 0x2a1838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a1838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a183c:
    // 0x2a183c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a183cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1840:
    // 0x2a1840: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a1840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a1844:
    // 0x2a1844: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2a1844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a1848:
    // 0x2a1848: 0x14480020  bne         $v0, $t0, . + 4 + (0x20 << 2)
label_2a184c:
    if (ctx->pc == 0x2A184Cu) {
        ctx->pc = 0x2A184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1848u;
        // 0x2a184c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1850u;
        goto label_2a1850;
    }
    ctx->pc = 0x2A1848u;
    {
        const bool branch_taken_0x2a1848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2A184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1848u;
        // 0x2a184c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1848) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A1850u;
label_2a1850:
    // 0x2a1850: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a1850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a1854:
    // 0x2a1854: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2a1854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_2a1858:
    // 0x2a1858: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_2a185c:
    if (ctx->pc == 0x2A185Cu) {
        ctx->pc = 0x2A185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1858u;
        // 0x2a185c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1860u;
        goto label_2a1860;
    }
    ctx->pc = 0x2A1858u;
    {
        const bool branch_taken_0x2a1858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1858) {
            ctx->pc = 0x2A185Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1858u;
            // 0x2a185c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1848;
        }
    }
    ctx->pc = 0x2A1860u;
label_2a1860:
    // 0x2a1860: 0x10c7001a  beq         $a2, $a3, . + 4 + (0x1A << 2)
label_2a1864:
    if (ctx->pc == 0x2A1864u) {
        ctx->pc = 0x2A1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1860u;
        // 0x2a1864: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1868u;
        goto label_2a1868;
    }
    ctx->pc = 0x2A1860u;
    {
        const bool branch_taken_0x2a1860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2A1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1860u;
        // 0x2a1864: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1860) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A1868u;
label_2a1868:
    // 0x2a1868: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2a1868u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a186c:
    // 0x2a186c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2a1870:
    if (ctx->pc == 0x2A1870u) {
        ctx->pc = 0x2A1874u;
        goto label_2a1874;
    }
    ctx->pc = 0x2A186Cu;
    {
        const bool branch_taken_0x2a186c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a186c) {
            ctx->pc = 0x2A188Cu;
            goto label_2a188c;
        }
    }
    ctx->pc = 0x2A1874u;
label_2a1874:
    // 0x2a1874: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a1874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a1878:
    // 0x2a1878: 0x10c70014  beq         $a2, $a3, . + 4 + (0x14 << 2)
label_2a187c:
    if (ctx->pc == 0x2A187Cu) {
        ctx->pc = 0x2A1880u;
        goto label_2a1880;
    }
    ctx->pc = 0x2A1878u;
    {
        const bool branch_taken_0x2a1878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x2a1878) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A1880u;
label_2a1880:
    // 0x2a1880: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2a1880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a1884:
    // 0x2a1884: 0x5062fffc  beql        $v1, $v0, . + 4 + (-0x4 << 2)
label_2a1888:
    if (ctx->pc == 0x2A1888u) {
        ctx->pc = 0x2A1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1884u;
        // 0x2a1888: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A188Cu;
        goto label_2a188c;
    }
    ctx->pc = 0x2A1884u;
    {
        const bool branch_taken_0x2a1884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1884) {
            ctx->pc = 0x2A1888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1884u;
            // 0x2a1888: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1878;
        }
    }
    ctx->pc = 0x2A188Cu;
label_2a188c:
    // 0x2a188c: 0x10c7000f  beq         $a2, $a3, . + 4 + (0xF << 2)
label_2a1890:
    if (ctx->pc == 0x2A1890u) {
        ctx->pc = 0x2A1894u;
        goto label_2a1894;
    }
    ctx->pc = 0x2A188Cu;
    {
        const bool branch_taken_0x2a188c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x2a188c) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A1894u;
label_2a1894:
    // 0x2a1894: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2a1898:
    if (ctx->pc == 0x2A1898u) {
        ctx->pc = 0x2A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1894u;
        // 0x2a1898: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A189Cu;
        goto label_2a189c;
    }
    ctx->pc = 0x2A1894u;
    {
        const bool branch_taken_0x2a1894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1894u;
        // 0x2a1898: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1894) {
            ctx->pc = 0x2A18CCu;
            goto label_2a18cc;
        }
    }
    ctx->pc = 0x2A189Cu;
label_2a189c:
    // 0x2a189c: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x2a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2a18a0:
    // 0x2a18a0: 0x10c70008  beq         $a2, $a3, . + 4 + (0x8 << 2)
label_2a18a4:
    if (ctx->pc == 0x2A18A4u) {
        ctx->pc = 0x2A18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18A0u;
        // 0x2a18a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18A8u;
        goto label_2a18a8;
    }
    ctx->pc = 0x2A18A0u;
    {
        const bool branch_taken_0x2a18a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2A18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18A0u;
        // 0x2a18a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18a0) {
            ctx->pc = 0x2A18C4u;
            goto label_2a18c4;
        }
    }
    ctx->pc = 0x2A18A8u;
label_2a18a8:
    // 0x2a18a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2a18a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a18ac:
    // 0x2a18ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a18acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a18b0:
    // 0x2a18b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a18b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a18b4:
    // 0x2a18b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a18b8:
    // 0x2a18b8: 0x0  nop
    ctx->pc = 0x2a18b8u;
    // NOP
label_2a18bc:
    // 0x2a18bc: 0x14c7fffa  bne         $a2, $a3, . + 4 + (-0x6 << 2)
label_2a18c0:
    if (ctx->pc == 0x2A18C0u) {
        ctx->pc = 0x2A18C4u;
        goto label_2a18c4;
    }
    ctx->pc = 0x2A18BCu;
    {
        const bool branch_taken_0x2a18bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a18bc) {
            ctx->pc = 0x2A18A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a18a8;
        }
    }
    ctx->pc = 0x2A18C4u;
label_2a18c4:
    // 0x2a18c4: 0x3e00008  jr          $ra
label_2a18c8:
    if (ctx->pc == 0x2A18C8u) {
        ctx->pc = 0x2A18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18C4u;
        // 0x2a18c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18CCu;
        goto label_2a18cc;
    }
    ctx->pc = 0x2A18C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18C4u;
        // 0x2a18c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A18C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A18CCu;
label_2a18cc:
    // 0x2a18cc: 0x3e00008  jr          $ra
label_2a18d0:
    if (ctx->pc == 0x2A18D0u) {
        ctx->pc = 0x2A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18CCu;
        // 0x2a18d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18D4u;
        goto label_2a18d4;
    }
    ctx->pc = 0x2A18CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18CCu;
        // 0x2a18d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A18CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A18D4u;
label_2a18d4:
    // 0x2a18d4: 0x0  nop
    ctx->pc = 0x2a18d4u;
    // NOP
}
