#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1778
// Address: 0x1c1778 - 0x1c1ae0
void sub_001C1778_0x1c1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1778_0x1c1778");
#endif

    switch (ctx->pc) {
        case 0x1c1778u: goto label_1c1778;
        case 0x1c177cu: goto label_1c177c;
        case 0x1c1780u: goto label_1c1780;
        case 0x1c1784u: goto label_1c1784;
        case 0x1c1788u: goto label_1c1788;
        case 0x1c178cu: goto label_1c178c;
        case 0x1c1790u: goto label_1c1790;
        case 0x1c1794u: goto label_1c1794;
        case 0x1c1798u: goto label_1c1798;
        case 0x1c179cu: goto label_1c179c;
        case 0x1c17a0u: goto label_1c17a0;
        case 0x1c17a4u: goto label_1c17a4;
        case 0x1c17a8u: goto label_1c17a8;
        case 0x1c17acu: goto label_1c17ac;
        case 0x1c17b0u: goto label_1c17b0;
        case 0x1c17b4u: goto label_1c17b4;
        case 0x1c17b8u: goto label_1c17b8;
        case 0x1c17bcu: goto label_1c17bc;
        case 0x1c17c0u: goto label_1c17c0;
        case 0x1c17c4u: goto label_1c17c4;
        case 0x1c17c8u: goto label_1c17c8;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17d0u: goto label_1c17d0;
        case 0x1c17d4u: goto label_1c17d4;
        case 0x1c17d8u: goto label_1c17d8;
        case 0x1c17dcu: goto label_1c17dc;
        case 0x1c17e0u: goto label_1c17e0;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17e8u: goto label_1c17e8;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17f0u: goto label_1c17f0;
        case 0x1c17f4u: goto label_1c17f4;
        case 0x1c17f8u: goto label_1c17f8;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1800u: goto label_1c1800;
        case 0x1c1804u: goto label_1c1804;
        case 0x1c1808u: goto label_1c1808;
        case 0x1c180cu: goto label_1c180c;
        case 0x1c1810u: goto label_1c1810;
        case 0x1c1814u: goto label_1c1814;
        case 0x1c1818u: goto label_1c1818;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1820u: goto label_1c1820;
        case 0x1c1824u: goto label_1c1824;
        case 0x1c1828u: goto label_1c1828;
        case 0x1c182cu: goto label_1c182c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1834u: goto label_1c1834;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c183cu: goto label_1c183c;
        case 0x1c1840u: goto label_1c1840;
        case 0x1c1844u: goto label_1c1844;
        case 0x1c1848u: goto label_1c1848;
        case 0x1c184cu: goto label_1c184c;
        case 0x1c1850u: goto label_1c1850;
        case 0x1c1854u: goto label_1c1854;
        case 0x1c1858u: goto label_1c1858;
        case 0x1c185cu: goto label_1c185c;
        case 0x1c1860u: goto label_1c1860;
        case 0x1c1864u: goto label_1c1864;
        case 0x1c1868u: goto label_1c1868;
        case 0x1c186cu: goto label_1c186c;
        case 0x1c1870u: goto label_1c1870;
        case 0x1c1874u: goto label_1c1874;
        case 0x1c1878u: goto label_1c1878;
        case 0x1c187cu: goto label_1c187c;
        case 0x1c1880u: goto label_1c1880;
        case 0x1c1884u: goto label_1c1884;
        case 0x1c1888u: goto label_1c1888;
        case 0x1c188cu: goto label_1c188c;
        case 0x1c1890u: goto label_1c1890;
        case 0x1c1894u: goto label_1c1894;
        case 0x1c1898u: goto label_1c1898;
        case 0x1c189cu: goto label_1c189c;
        case 0x1c18a0u: goto label_1c18a0;
        case 0x1c18a4u: goto label_1c18a4;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18acu: goto label_1c18ac;
        case 0x1c18b0u: goto label_1c18b0;
        case 0x1c18b4u: goto label_1c18b4;
        case 0x1c18b8u: goto label_1c18b8;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c0u: goto label_1c18c0;
        case 0x1c18c4u: goto label_1c18c4;
        case 0x1c18c8u: goto label_1c18c8;
        case 0x1c18ccu: goto label_1c18cc;
        case 0x1c18d0u: goto label_1c18d0;
        case 0x1c18d4u: goto label_1c18d4;
        case 0x1c18d8u: goto label_1c18d8;
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e0u: goto label_1c18e0;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c18e8u: goto label_1c18e8;
        case 0x1c18ecu: goto label_1c18ec;
        case 0x1c18f0u: goto label_1c18f0;
        case 0x1c18f4u: goto label_1c18f4;
        case 0x1c18f8u: goto label_1c18f8;
        case 0x1c18fcu: goto label_1c18fc;
        case 0x1c1900u: goto label_1c1900;
        case 0x1c1904u: goto label_1c1904;
        case 0x1c1908u: goto label_1c1908;
        case 0x1c190cu: goto label_1c190c;
        case 0x1c1910u: goto label_1c1910;
        case 0x1c1914u: goto label_1c1914;
        case 0x1c1918u: goto label_1c1918;
        case 0x1c191cu: goto label_1c191c;
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1924u: goto label_1c1924;
        case 0x1c1928u: goto label_1c1928;
        case 0x1c192cu: goto label_1c192c;
        case 0x1c1930u: goto label_1c1930;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1938u: goto label_1c1938;
        case 0x1c193cu: goto label_1c193c;
        case 0x1c1940u: goto label_1c1940;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1948u: goto label_1c1948;
        case 0x1c194cu: goto label_1c194c;
        case 0x1c1950u: goto label_1c1950;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1958u: goto label_1c1958;
        case 0x1c195cu: goto label_1c195c;
        case 0x1c1960u: goto label_1c1960;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1968u: goto label_1c1968;
        case 0x1c196cu: goto label_1c196c;
        case 0x1c1970u: goto label_1c1970;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1978u: goto label_1c1978;
        case 0x1c197cu: goto label_1c197c;
        case 0x1c1980u: goto label_1c1980;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c1988u: goto label_1c1988;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c1990u: goto label_1c1990;
        case 0x1c1994u: goto label_1c1994;
        case 0x1c1998u: goto label_1c1998;
        case 0x1c199cu: goto label_1c199c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19a4u: goto label_1c19a4;
        case 0x1c19a8u: goto label_1c19a8;
        case 0x1c19acu: goto label_1c19ac;
        case 0x1c19b0u: goto label_1c19b0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19b8u: goto label_1c19b8;
        case 0x1c19bcu: goto label_1c19bc;
        case 0x1c19c0u: goto label_1c19c0;
        case 0x1c19c4u: goto label_1c19c4;
        case 0x1c19c8u: goto label_1c19c8;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19d0u: goto label_1c19d0;
        case 0x1c19d4u: goto label_1c19d4;
        case 0x1c19d8u: goto label_1c19d8;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e0u: goto label_1c19e0;
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c19f4u: goto label_1c19f4;
        case 0x1c19f8u: goto label_1c19f8;
        case 0x1c19fcu: goto label_1c19fc;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a04u: goto label_1c1a04;
        case 0x1c1a08u: goto label_1c1a08;
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a10u: goto label_1c1a10;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a18u: goto label_1c1a18;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a20u: goto label_1c1a20;
        case 0x1c1a24u: goto label_1c1a24;
        case 0x1c1a28u: goto label_1c1a28;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a30u: goto label_1c1a30;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a38u: goto label_1c1a38;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a44u: goto label_1c1a44;
        case 0x1c1a48u: goto label_1c1a48;
        case 0x1c1a4cu: goto label_1c1a4c;
        case 0x1c1a50u: goto label_1c1a50;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a58u: goto label_1c1a58;
        case 0x1c1a5cu: goto label_1c1a5c;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a68u: goto label_1c1a68;
        case 0x1c1a6cu: goto label_1c1a6c;
        case 0x1c1a70u: goto label_1c1a70;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a78u: goto label_1c1a78;
        case 0x1c1a7cu: goto label_1c1a7c;
        case 0x1c1a80u: goto label_1c1a80;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a88u: goto label_1c1a88;
        case 0x1c1a8cu: goto label_1c1a8c;
        case 0x1c1a90u: goto label_1c1a90;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1a98u: goto label_1c1a98;
        case 0x1c1a9cu: goto label_1c1a9c;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1aacu: goto label_1c1aac;
        case 0x1c1ab0u: goto label_1c1ab0;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ab8u: goto label_1c1ab8;
        case 0x1c1abcu: goto label_1c1abc;
        case 0x1c1ac0u: goto label_1c1ac0;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1ad0u: goto label_1c1ad0;
        case 0x1c1ad4u: goto label_1c1ad4;
        case 0x1c1ad8u: goto label_1c1ad8;
        case 0x1c1adcu: goto label_1c1adc;
        default: break;
    }

    ctx->pc = 0x1c1778u;

label_1c1778:
    // 0x1c1778: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c1778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c177c:
    // 0x1c177c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1780:
    // 0x1c1780: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c1780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1c1784:
    // 0x1c1784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1788:
    // 0x1c1788: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1c178c:
    // 0x1c178c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1c1790:
    // 0x1c1790: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1c1794:
    // 0x1c1794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c1798:
    // 0x1c1798: 0x82440001  lb          $a0, 0x1($s2)
    ctx->pc = 0x1c1798u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1c179c:
    // 0x1c179c: 0x148200c9  bne         $a0, $v0, . + 4 + (0xC9 << 2)
label_1c17a0:
    if (ctx->pc == 0x1C17A0u) {
        ctx->pc = 0x1C17A0u;
            // 0x1c17a0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1C17A4u;
        goto label_1c17a4;
    }
    ctx->pc = 0x1C179Cu;
    {
        const bool branch_taken_0x1c179c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C17A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C179Cu;
            // 0x1c17a0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c179c) {
            ctx->pc = 0x1C1AC4u;
            goto label_1c1ac4;
        }
    }
    ctx->pc = 0x1C17A4u;
label_1c17a4:
    // 0x1c17a4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1c17a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1c17a8:
    // 0x1c17a8: 0x14440026  bne         $v0, $a0, . + 4 + (0x26 << 2)
label_1c17ac:
    if (ctx->pc == 0x1C17ACu) {
        ctx->pc = 0x1C17ACu;
            // 0x1c17ac: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x1C17B0u;
        goto label_1c17b0;
    }
    ctx->pc = 0x1C17A8u;
    {
        const bool branch_taken_0x1c17a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C17ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17A8u;
            // 0x1c17ac: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17a8) {
            ctx->pc = 0x1C1844u;
            goto label_1c1844;
        }
    }
    ctx->pc = 0x1C17B0u;
label_1c17b0:
    // 0x1c17b0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c17b4:
    // 0x1c17b4: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1c17b8:
    // 0x1c17b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c17b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c17bc:
    // 0x1c17bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c17bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c17c0:
    // 0x1c17c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c17c4:
    // 0x1c17c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1c17c8:
    // 0x1c17c8: 0x40f809  jalr        $v0
label_1c17cc:
    if (ctx->pc == 0x1C17CCu) {
        ctx->pc = 0x1C17CCu;
            // 0x1c17cc: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x1C17D0u;
        goto label_1c17d0;
    }
    ctx->pc = 0x1C17C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C17D0u);
        ctx->pc = 0x1C17CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17C8u;
            // 0x1c17cc: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C17D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C17D0u; }
            if (ctx->pc != 0x1C17D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C17D0u;
label_1c17d0:
    // 0x1c17d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c17d4:
    // 0x1c17d4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1c17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1c17d8:
    // 0x1c17d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c17dc:
    // 0x1c17dc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1c17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1c17e0:
    // 0x1c17e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c17e4:
    // 0x1c17e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1c17e8:
    // 0x1c17e8: 0x40f809  jalr        $v0
label_1c17ec:
    if (ctx->pc == 0x1C17ECu) {
        ctx->pc = 0x1C17ECu;
            // 0x1c17ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C17F0u;
        goto label_1c17f0;
    }
    ctx->pc = 0x1C17E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C17F0u);
        ctx->pc = 0x1C17ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17E8u;
            // 0x1c17ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C17F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C17F0u; }
            if (ctx->pc != 0x1C17F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C17F0u;
label_1c17f0:
    // 0x1c17f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c17f4:
    // 0x1c17f4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1c17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1c17f8:
    // 0x1c17f8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1c17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1c17fc:
    // 0x1c17fc: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1c17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1c1800:
    // 0x1c1800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1804:
    // 0x1c1804: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1c1804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c1808:
    // 0x1c1808: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1c180c:
    if (ctx->pc == 0x1C180Cu) {
        ctx->pc = 0x1C180Cu;
            // 0x1c180c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x1C1810u;
        goto label_1c1810;
    }
    ctx->pc = 0x1C1808u;
    {
        const bool branch_taken_0x1c1808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C180Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1808u;
            // 0x1c180c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1808) {
            ctx->pc = 0x1C1840u;
            goto label_1c1840;
        }
    }
    ctx->pc = 0x1C1810u;
label_1c1810:
    // 0x1c1810: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c1814:
    // 0x1c1814: 0xc06d212  jal         func_1B4848
label_1c1818:
    if (ctx->pc == 0x1C1818u) {
        ctx->pc = 0x1C1818u;
            // 0x1c1818: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
        ctx->pc = 0x1C181Cu;
        goto label_1c181c;
    }
    ctx->pc = 0x1C1814u;
    SET_GPR_U32(ctx, 31, 0x1C181Cu);
    ctx->pc = 0x1C1818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1814u;
            // 0x1c1818: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C181Cu; }
        if (ctx->pc != 0x1C181Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C181Cu; }
        if (ctx->pc != 0x1C181Cu) { return; }
    }
    ctx->pc = 0x1C181Cu;
label_1c181c:
    // 0x1c181c: 0x0  nop
    ctx->pc = 0x1c181cu;
    // NOP
label_1c1820:
    // 0x1c1820: 0x0  nop
    ctx->pc = 0x1c1820u;
    // NOP
label_1c1824:
    // 0x1c1824: 0x0  nop
    ctx->pc = 0x1c1824u;
    // NOP
label_1c1828:
    // 0x1c1828: 0x0  nop
    ctx->pc = 0x1c1828u;
    // NOP
label_1c182c:
    // 0x1c182c: 0x0  nop
    ctx->pc = 0x1c182cu;
    // NOP
label_1c1830:
    // 0x1c1830: 0x0  nop
    ctx->pc = 0x1c1830u;
    // NOP
label_1c1834:
    // 0x1c1834: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c1838:
    if (ctx->pc == 0x1C1838u) {
        ctx->pc = 0x1C183Cu;
        goto label_1c183c;
    }
    ctx->pc = 0x1C1834u;
    {
        const bool branch_taken_0x1c1834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1834) {
            ctx->pc = 0x1C1820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1820;
        }
    }
    ctx->pc = 0x1C183Cu;
label_1c183c:
    // 0x1c183c: 0x0  nop
    ctx->pc = 0x1c183cu;
    // NOP
label_1c1840:
    // 0x1c1840: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x1c1840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1c1844:
    // 0x1c1844: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_1c1848:
    if (ctx->pc == 0x1C1848u) {
        ctx->pc = 0x1C1848u;
            // 0x1c1848: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1C184Cu;
        goto label_1c184c;
    }
    ctx->pc = 0x1C1844u;
    {
        const bool branch_taken_0x1c1844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1844u;
            // 0x1c1848: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1844) {
            ctx->pc = 0x1C1AC4u;
            goto label_1c1ac4;
        }
    }
    ctx->pc = 0x1C184Cu;
label_1c184c:
    // 0x1c184c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c1850:
    // 0x1c1850: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1c1850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1c1854:
    // 0x1c1854: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c1854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c1858:
    // 0x1c1858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c185c:
    // 0x1c185c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c1860:
    // 0x1c1860: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1c1864:
    // 0x1c1864: 0x40f809  jalr        $v0
label_1c1868:
    if (ctx->pc == 0x1C1868u) {
        ctx->pc = 0x1C1868u;
            // 0x1c1868: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1C186Cu;
        goto label_1c186c;
    }
    ctx->pc = 0x1C1864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C186Cu);
        ctx->pc = 0x1C1868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1864u;
            // 0x1c1868: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C186Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C186Cu; }
            if (ctx->pc != 0x1C186Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C186Cu;
label_1c186c:
    // 0x1c186c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1c1870:
    // 0x1c1870: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c1874:
    // 0x1c1874: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1c1874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1c1878:
    // 0x1c1878: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c1878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c187c:
    // 0x1c187c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c187cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1880:
    // 0x1c1880: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1c1880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1c1884:
    // 0x1c1884: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1c1888:
    // 0x1c1888: 0x40f809  jalr        $v0
label_1c188c:
    if (ctx->pc == 0x1C188Cu) {
        ctx->pc = 0x1C188Cu;
            // 0x1c188c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1890u;
        goto label_1c1890;
    }
    ctx->pc = 0x1C1888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1890u);
        ctx->pc = 0x1C188Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1888u;
            // 0x1c188c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1890u; }
            if (ctx->pc != 0x1C1890u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1890u;
label_1c1890:
    // 0x1c1890: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1c1890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1c1894:
    // 0x1c1894: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x1c1894u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1c1898:
    // 0x1c1898: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c1898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c189c:
    // 0x1c189c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1c189cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c18a0:
    // 0x1c18a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c18a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c18a4:
    // 0x1c18a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c18a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c18a8:
    // 0x1c18a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c18a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c18ac:
    // 0x1c18ac: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x1c18acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1c18b0:
    // 0x1c18b0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1c18b4:
    if (ctx->pc == 0x1C18B4u) {
        ctx->pc = 0x1C18B4u;
            // 0x1c18b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1C18B8u;
        goto label_1c18b8;
    }
    ctx->pc = 0x1C18B0u;
    {
        const bool branch_taken_0x1c18b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c18b0) {
            ctx->pc = 0x1C18B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18B0u;
            // 0x1c18b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C18B8u;
            goto label_1c18b8;
        }
    }
    ctx->pc = 0x1C18B8u;
label_1c18b8:
    // 0x1c18b8: 0x103880b  movn        $s1, $t0, $v1
    ctx->pc = 0x1c18b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
label_1c18bc:
    // 0x1c18bc: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x1c18bcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c18c0:
    // 0x1c18c0: 0x1012  mflo        $v0
    ctx->pc = 0x1c18c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1c18c4:
    // 0x1c18c4: 0x458818  mult        $s1, $v0, $a1
    ctx->pc = 0x1c18c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_1c18c8:
    // 0x1c18c8: 0xc07337e  jal         func_1CCDF8
label_1c18cc:
    if (ctx->pc == 0x1C18CCu) {
        ctx->pc = 0x1C18CCu;
            // 0x1c18cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C18D0u;
        goto label_1c18d0;
    }
    ctx->pc = 0x1C18C8u;
    SET_GPR_U32(ctx, 31, 0x1C18D0u);
    ctx->pc = 0x1C18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18C8u;
            // 0x1c18cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18D0u; }
        if (ctx->pc != 0x1C18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18D0u; }
        if (ctx->pc != 0x1C18D0u) { return; }
    }
    ctx->pc = 0x1C18D0u;
label_1c18d0:
    // 0x1c18d0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c18d4:
    // 0x1c18d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c18d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c18d8:
    // 0x1c18d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c18dc:
    // 0x1c18dc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1c18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1c18e0:
    // 0x1c18e0: 0x40f809  jalr        $v0
label_1c18e4:
    if (ctx->pc == 0x1C18E4u) {
        ctx->pc = 0x1C18E4u;
            // 0x1c18e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C18E8u;
        goto label_1c18e8;
    }
    ctx->pc = 0x1C18E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C18E8u);
        ctx->pc = 0x1C18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18E0u;
            // 0x1c18e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C18E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C18E8u; }
            if (ctx->pc != 0x1C18E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C18E8u;
label_1c18e8:
    // 0x1c18e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c18ec:
    // 0x1c18ec: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c18ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c18f0:
    // 0x1c18f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c18f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c18f4:
    // 0x1c18f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c18f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c18f8:
    // 0x1c18f8: 0xc07337e  jal         func_1CCDF8
label_1c18fc:
    if (ctx->pc == 0x1C18FCu) {
        ctx->pc = 0x1C18FCu;
            // 0x1c18fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1900u;
        goto label_1c1900;
    }
    ctx->pc = 0x1C18F8u;
    SET_GPR_U32(ctx, 31, 0x1C1900u);
    ctx->pc = 0x1C18FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18F8u;
            // 0x1c18fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1900u; }
        if (ctx->pc != 0x1C1900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1900u; }
        if (ctx->pc != 0x1C1900u) { return; }
    }
    ctx->pc = 0x1C1900u;
label_1c1900:
    // 0x1c1900: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1c1904:
    // 0x1c1904: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1908:
    // 0x1c1908: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c1908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c190c:
    // 0x1c190c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1c1910:
    // 0x1c1910: 0x40f809  jalr        $v0
label_1c1914:
    if (ctx->pc == 0x1C1914u) {
        ctx->pc = 0x1C1914u;
            // 0x1c1914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1918u;
        goto label_1c1918;
    }
    ctx->pc = 0x1C1910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1918u);
        ctx->pc = 0x1C1914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1910u;
            // 0x1c1914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1918u; }
            if (ctx->pc != 0x1C1918u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1918u;
label_1c1918:
    // 0x1c1918: 0x5a20006a  blezl       $s1, . + 4 + (0x6A << 2)
label_1c191c:
    if (ctx->pc == 0x1C191Cu) {
        ctx->pc = 0x1C191Cu;
            // 0x1c191c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1C1920u;
        goto label_1c1920;
    }
    ctx->pc = 0x1C1918u;
    {
        const bool branch_taken_0x1c1918 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1c1918) {
            ctx->pc = 0x1C191Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1918u;
            // 0x1c191c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1AC4u;
            goto label_1c1ac4;
        }
    }
    ctx->pc = 0x1C1920u;
label_1c1920:
    // 0x1c1920: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c1924:
    // 0x1c1924: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x1c1924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1c1928:
    // 0x1c1928: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1c192c:
    if (ctx->pc == 0x1C192Cu) {
        ctx->pc = 0x1C192Cu;
            // 0x1c192c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x1C1930u;
        goto label_1c1930;
    }
    ctx->pc = 0x1C1928u;
    {
        const bool branch_taken_0x1c1928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1928u;
            // 0x1c192c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1928) {
            ctx->pc = 0x1C1970u;
            goto label_1c1970;
        }
    }
    ctx->pc = 0x1C1930u;
label_1c1930:
    // 0x1c1930: 0xc06d212  jal         func_1B4848
label_1c1934:
    if (ctx->pc == 0x1C1934u) {
        ctx->pc = 0x1C1934u;
            // 0x1c1934: 0x24849ac0  addiu       $a0, $a0, -0x6540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941376));
        ctx->pc = 0x1C1938u;
        goto label_1c1938;
    }
    ctx->pc = 0x1C1930u;
    SET_GPR_U32(ctx, 31, 0x1C1938u);
    ctx->pc = 0x1C1934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1930u;
            // 0x1c1934: 0x24849ac0  addiu       $a0, $a0, -0x6540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1938u; }
        if (ctx->pc != 0x1C1938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1938u; }
        if (ctx->pc != 0x1C1938u) { return; }
    }
    ctx->pc = 0x1C1938u;
label_1c1938:
    // 0x1c1938: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c193c:
    // 0x1c193c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1940:
    // 0x1c1940: 0x24849ae8  addiu       $a0, $a0, -0x6518
    ctx->pc = 0x1c1940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941416));
label_1c1944:
    // 0x1c1944: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1c1944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1948:
    // 0x1c1948: 0xc06d212  jal         func_1B4848
label_1c194c:
    if (ctx->pc == 0x1C194Cu) {
        ctx->pc = 0x1C194Cu;
            // 0x1c194c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1C1950u;
        goto label_1c1950;
    }
    ctx->pc = 0x1C1948u;
    SET_GPR_U32(ctx, 31, 0x1C1950u);
    ctx->pc = 0x1C194Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1948u;
            // 0x1c194c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1950u; }
        if (ctx->pc != 0x1C1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1950u; }
        if (ctx->pc != 0x1C1950u) { return; }
    }
    ctx->pc = 0x1C1950u;
label_1c1950:
    // 0x1c1950: 0x0  nop
    ctx->pc = 0x1c1950u;
    // NOP
label_1c1954:
    // 0x1c1954: 0x0  nop
    ctx->pc = 0x1c1954u;
    // NOP
label_1c1958:
    // 0x1c1958: 0x0  nop
    ctx->pc = 0x1c1958u;
    // NOP
label_1c195c:
    // 0x1c195c: 0x0  nop
    ctx->pc = 0x1c195cu;
    // NOP
label_1c1960:
    // 0x1c1960: 0x0  nop
    ctx->pc = 0x1c1960u;
    // NOP
label_1c1964:
    // 0x1c1964: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c1968:
    if (ctx->pc == 0x1C1968u) {
        ctx->pc = 0x1C196Cu;
        goto label_1c196c;
    }
    ctx->pc = 0x1C1964u;
    {
        const bool branch_taken_0x1c1964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1964) {
            ctx->pc = 0x1C1950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1950;
        }
    }
    ctx->pc = 0x1C196Cu;
label_1c196c:
    // 0x1c196c: 0x0  nop
    ctx->pc = 0x1c196cu;
    // NOP
label_1c1970:
    // 0x1c1970: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c1970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1974:
    // 0x1c1974: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x1c1974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1c1978:
    // 0x1c1978: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1c197c:
    if (ctx->pc == 0x1C197Cu) {
        ctx->pc = 0x1C197Cu;
            // 0x1c197c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1C1980u;
        goto label_1c1980;
    }
    ctx->pc = 0x1C1978u;
    {
        const bool branch_taken_0x1c1978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1978) {
            ctx->pc = 0x1C197Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1978u;
            // 0x1c197c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C19C8u;
            goto label_1c19c8;
        }
    }
    ctx->pc = 0x1C1980u;
label_1c1980:
    // 0x1c1980: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c1984:
    // 0x1c1984: 0xc06d212  jal         func_1B4848
label_1c1988:
    if (ctx->pc == 0x1C1988u) {
        ctx->pc = 0x1C1988u;
            // 0x1c1988: 0x24849b18  addiu       $a0, $a0, -0x64E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941464));
        ctx->pc = 0x1C198Cu;
        goto label_1c198c;
    }
    ctx->pc = 0x1C1984u;
    SET_GPR_U32(ctx, 31, 0x1C198Cu);
    ctx->pc = 0x1C1988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1984u;
            // 0x1c1988: 0x24849b18  addiu       $a0, $a0, -0x64E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C198Cu; }
        if (ctx->pc != 0x1C198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C198Cu; }
        if (ctx->pc != 0x1C198Cu) { return; }
    }
    ctx->pc = 0x1C198Cu;
label_1c198c:
    // 0x1c198c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c198cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c1990:
    // 0x1c1990: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c1990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1994:
    // 0x1c1994: 0x24849ae8  addiu       $a0, $a0, -0x6518
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941416));
label_1c1998:
    // 0x1c1998: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1c1998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c199c:
    // 0x1c199c: 0xc06d212  jal         func_1B4848
label_1c19a0:
    if (ctx->pc == 0x1C19A0u) {
        ctx->pc = 0x1C19A0u;
            // 0x1c19a0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1C19A4u;
        goto label_1c19a4;
    }
    ctx->pc = 0x1C199Cu;
    SET_GPR_U32(ctx, 31, 0x1C19A4u);
    ctx->pc = 0x1C19A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C199Cu;
            // 0x1c19a0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19A4u; }
        if (ctx->pc != 0x1C19A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19A4u; }
        if (ctx->pc != 0x1C19A4u) { return; }
    }
    ctx->pc = 0x1C19A4u;
label_1c19a4:
    // 0x1c19a4: 0x0  nop
    ctx->pc = 0x1c19a4u;
    // NOP
label_1c19a8:
    // 0x1c19a8: 0x0  nop
    ctx->pc = 0x1c19a8u;
    // NOP
label_1c19ac:
    // 0x1c19ac: 0x0  nop
    ctx->pc = 0x1c19acu;
    // NOP
label_1c19b0:
    // 0x1c19b0: 0x0  nop
    ctx->pc = 0x1c19b0u;
    // NOP
label_1c19b4:
    // 0x1c19b4: 0x0  nop
    ctx->pc = 0x1c19b4u;
    // NOP
label_1c19b8:
    // 0x1c19b8: 0x0  nop
    ctx->pc = 0x1c19b8u;
    // NOP
label_1c19bc:
    // 0x1c19bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c19c0:
    if (ctx->pc == 0x1C19C0u) {
        ctx->pc = 0x1C19C4u;
        goto label_1c19c4;
    }
    ctx->pc = 0x1C19BCu;
    {
        const bool branch_taken_0x1c19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19bc) {
            ctx->pc = 0x1C19A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c19a8;
        }
    }
    ctx->pc = 0x1C19C4u;
label_1c19c4:
    // 0x1c19c4: 0x0  nop
    ctx->pc = 0x1c19c4u;
    // NOP
label_1c19c8:
    // 0x1c19c8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1c19c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1c19cc:
    // 0x1c19cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1c19d0:
    if (ctx->pc == 0x1C19D0u) {
        ctx->pc = 0x1C19D0u;
            // 0x1c19d0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1C19D4u;
        goto label_1c19d4;
    }
    ctx->pc = 0x1C19CCu;
    {
        const bool branch_taken_0x1c19cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19CCu;
            // 0x1c19d0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19cc) {
            ctx->pc = 0x1C1A18u;
            goto label_1c1a18;
        }
    }
    ctx->pc = 0x1C19D4u;
label_1c19d4:
    // 0x1c19d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c19d8:
    // 0x1c19d8: 0xc06d212  jal         func_1B4848
label_1c19dc:
    if (ctx->pc == 0x1C19DCu) {
        ctx->pc = 0x1C19DCu;
            // 0x1c19dc: 0x24849b40  addiu       $a0, $a0, -0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941504));
        ctx->pc = 0x1C19E0u;
        goto label_1c19e0;
    }
    ctx->pc = 0x1C19D8u;
    SET_GPR_U32(ctx, 31, 0x1C19E0u);
    ctx->pc = 0x1C19DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19D8u;
            // 0x1c19dc: 0x24849b40  addiu       $a0, $a0, -0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19E0u; }
        if (ctx->pc != 0x1C19E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19E0u; }
        if (ctx->pc != 0x1C19E0u) { return; }
    }
    ctx->pc = 0x1C19E0u;
label_1c19e0:
    // 0x1c19e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c19e4:
    // 0x1c19e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c19e8:
    // 0x1c19e8: 0x24849ae8  addiu       $a0, $a0, -0x6518
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941416));
label_1c19ec:
    // 0x1c19ec: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c19f0:
    // 0x1c19f0: 0xc06d212  jal         func_1B4848
label_1c19f4:
    if (ctx->pc == 0x1C19F4u) {
        ctx->pc = 0x1C19F4u;
            // 0x1c19f4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1C19F8u;
        goto label_1c19f8;
    }
    ctx->pc = 0x1C19F0u;
    SET_GPR_U32(ctx, 31, 0x1C19F8u);
    ctx->pc = 0x1C19F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19F0u;
            // 0x1c19f4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19F8u; }
        if (ctx->pc != 0x1C19F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19F8u; }
        if (ctx->pc != 0x1C19F8u) { return; }
    }
    ctx->pc = 0x1C19F8u;
label_1c19f8:
    // 0x1c19f8: 0x0  nop
    ctx->pc = 0x1c19f8u;
    // NOP
label_1c19fc:
    // 0x1c19fc: 0x0  nop
    ctx->pc = 0x1c19fcu;
    // NOP
label_1c1a00:
    // 0x1c1a00: 0x0  nop
    ctx->pc = 0x1c1a00u;
    // NOP
label_1c1a04:
    // 0x1c1a04: 0x0  nop
    ctx->pc = 0x1c1a04u;
    // NOP
label_1c1a08:
    // 0x1c1a08: 0x0  nop
    ctx->pc = 0x1c1a08u;
    // NOP
label_1c1a0c:
    // 0x1c1a0c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c1a10:
    if (ctx->pc == 0x1C1A10u) {
        ctx->pc = 0x1C1A14u;
        goto label_1c1a14;
    }
    ctx->pc = 0x1C1A0Cu;
    {
        const bool branch_taken_0x1c1a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a0c) {
            ctx->pc = 0x1C19F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c19f8;
        }
    }
    ctx->pc = 0x1C1A14u;
label_1c1a14:
    // 0x1c1a14: 0x0  nop
    ctx->pc = 0x1c1a14u;
    // NOP
label_1c1a18:
    // 0x1c1a18: 0xc043556  jal         func_10D558
label_1c1a1c:
    if (ctx->pc == 0x1C1A1Cu) {
        ctx->pc = 0x1C1A1Cu;
            // 0x1c1a1c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x1C1A20u;
        goto label_1c1a20;
    }
    ctx->pc = 0x1C1A18u;
    SET_GPR_U32(ctx, 31, 0x1C1A20u);
    ctx->pc = 0x1C1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A18u;
            // 0x1c1a1c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D558u;
    if (runtime->hasFunction(0x10D558u)) {
        auto targetFn = runtime->lookupFunction(0x10D558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A20u; }
        if (ctx->pc != 0x1C1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D558_0x10d558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A20u; }
        if (ctx->pc != 0x1C1A20u) { return; }
    }
    ctx->pc = 0x1C1A20u;
label_1c1a20:
    // 0x1c1a20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1c1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1c1a24:
    // 0x1c1a24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1a28:
    // 0x1c1a28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c1a2c:
    // 0x1c1a2c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1c1a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c1a30:
    // 0x1c1a30: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1c1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1c1a34:
    // 0x1c1a34: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1a38:
    // 0x1c1a38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c1a3c:
    // 0x1c1a3c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1c1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_1c1a40:
    // 0x1c1a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1a44:
    // 0x1c1a44: 0xae470020  sw          $a3, 0x20($s2)
    ctx->pc = 0x1c1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_1c1a48:
    // 0x1c1a48: 0xae460024  sw          $a2, 0x24($s2)
    ctx->pc = 0x1c1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 6));
label_1c1a4c:
    // 0x1c1a4c: 0xc043ee2  jal         func_10FB88
label_1c1a50:
    if (ctx->pc == 0x1C1A50u) {
        ctx->pc = 0x1C1A50u;
            // 0x1c1a50: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x1C1A54u;
        goto label_1c1a54;
    }
    ctx->pc = 0x1C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A54u);
    ctx->pc = 0x1C1A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A4Cu;
            // 0x1c1a50: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FB88u;
    if (runtime->hasFunction(0x10FB88u)) {
        auto targetFn = runtime->lookupFunction(0x10FB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A54u; }
        if (ctx->pc != 0x1C1A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB88_0x10fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A54u; }
        if (ctx->pc != 0x1C1A54u) { return; }
    }
    ctx->pc = 0x1C1A54u;
label_1c1a54:
    // 0x1c1a54: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1c1a58:
    if (ctx->pc == 0x1C1A58u) {
        ctx->pc = 0x1C1A58u;
            // 0x1c1a58: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C1A5Cu;
        goto label_1c1a5c;
    }
    ctx->pc = 0x1C1A54u;
    {
        const bool branch_taken_0x1c1a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A54u;
            // 0x1c1a58: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a54) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A5Cu;
label_1c1a5c:
    // 0x1c1a5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c1a60:
    // 0x1c1a60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1a64:
    // 0x1c1a64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c1a68:
    // 0x1c1a68: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1c1a6c:
    // 0x1c1a6c: 0x40f809  jalr        $v0
label_1c1a70:
    if (ctx->pc == 0x1C1A70u) {
        ctx->pc = 0x1C1A70u;
            // 0x1c1a70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A74u;
        goto label_1c1a74;
    }
    ctx->pc = 0x1C1A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1A74u);
        ctx->pc = 0x1C1A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A6Cu;
            // 0x1c1a70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A74u; }
            if (ctx->pc != 0x1C1A74u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1A74u;
label_1c1a74:
    // 0x1c1a74: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1c1a78:
    // 0x1c1a78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a7c:
    // 0x1c1a7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c1a80:
    // 0x1c1a80: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1c1a84:
    // 0x1c1a84: 0x40f809  jalr        $v0
label_1c1a88:
    if (ctx->pc == 0x1C1A88u) {
        ctx->pc = 0x1C1A88u;
            // 0x1c1a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A8Cu;
        goto label_1c1a8c;
    }
    ctx->pc = 0x1C1A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1A8Cu);
        ctx->pc = 0x1C1A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A84u;
            // 0x1c1a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A8Cu; }
            if (ctx->pc != 0x1C1A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1A8Cu;
label_1c1a8c:
    // 0x1c1a8c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c1a90:
    if (ctx->pc == 0x1C1A90u) {
        ctx->pc = 0x1C1A90u;
            // 0x1c1a90: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1C1A94u;
        goto label_1c1a94;
    }
    ctx->pc = 0x1C1A8Cu;
    {
        const bool branch_taken_0x1c1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A8Cu;
            // 0x1c1a90: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a8c) {
            ctx->pc = 0x1C1AC4u;
            goto label_1c1ac4;
        }
    }
    ctx->pc = 0x1C1A94u;
label_1c1a94:
    // 0x1c1a94: 0x0  nop
    ctx->pc = 0x1c1a94u;
    // NOP
label_1c1a98:
    // 0x1c1a98: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1c1a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c1a9c:
    // 0x1c1a9c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1c1a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c1aa0:
    // 0x1c1aa0: 0xb2440013  sdl         $a0, 0x13($s2)
    ctx->pc = 0x1c1aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c1aa4:
    // 0x1c1aa4: 0xb644000c  sdr         $a0, 0xC($s2)
    ctx->pc = 0x1c1aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c1aa8:
    // 0x1c1aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1aac:
    // 0x1c1aac: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x1c1aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c1ab0:
    // 0x1c1ab0: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x1c1ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c1ab4:
    // 0x1c1ab4: 0xb244001b  sdl         $a0, 0x1B($s2)
    ctx->pc = 0x1c1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c1ab8:
    // 0x1c1ab8: 0xb6440014  sdr         $a0, 0x14($s2)
    ctx->pc = 0x1c1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c1abc:
    // 0x1c1abc: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x1c1abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c1ac0:
    // 0x1c1ac0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c1ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1ac4:
    // 0x1c1ac4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c1ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1c1ac8:
    // 0x1c1ac8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c1ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1acc:
    // 0x1c1acc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c1accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1c1ad0:
    // 0x1c1ad0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c1ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c1ad4:
    // 0x1c1ad4: 0x3e00008  jr          $ra
label_1c1ad8:
    if (ctx->pc == 0x1C1AD8u) {
        ctx->pc = 0x1C1AD8u;
            // 0x1c1ad8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1C1ADCu;
        goto label_1c1adc;
    }
    ctx->pc = 0x1C1AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AD4u;
            // 0x1c1ad8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1ADCu;
label_1c1adc:
    // 0x1c1adc: 0x0  nop
    ctx->pc = 0x1c1adcu;
    // NOP
    ctx->pc = 0x1c1ae0u;
}
