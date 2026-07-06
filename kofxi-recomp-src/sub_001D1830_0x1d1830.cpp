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

// Function: sub_001D1830
// Address: 0x1d1830 - 0x1d1a48
void sub_001D1830_0x1d1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1830_0x1d1830");
#endif

    switch (ctx->pc) {
        case 0x1d1980u: goto label_1d1980;
        case 0x1d1a0cu: goto label_1d1a0c;
        default: break;
    }

    ctx->pc = 0x1d1830u;

    // 0x1d1830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1834: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1d1834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1838: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d183c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d183cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1844: 0x25490180  addiu       $t1, $t2, 0x180
    ctx->pc = 0x1d1844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 384));
    // 0x1d1848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d184c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1850: 0x8d220434  lw          $v0, 0x434($t1)
    ctx->pc = 0x1d1850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1076)));
    // 0x1d1854: 0x8d230308  lw          $v1, 0x308($t1)
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 776)));
    // 0x1d1858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d185c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D185Cu;
    {
        const bool branch_taken_0x1d185c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D185Cu;
        // 0x1d1860: 0xad220434  sw          $v0, 0x434($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d185c) {
            ctx->pc = 0x1D1870u;
            goto label_1d1870;
        }
    }
    ctx->pc = 0x1D1864u;
    // 0x1d1864: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d1868: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1868u;
    {
        const bool branch_taken_0x1d1868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1868) {
            ctx->pc = 0x1D186Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1868u;
            // 0x1d186c: 0x8d220494  lw          $v0, 0x494($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1880u;
            goto label_1d1880;
        }
    }
    ctx->pc = 0x1D1870u;
label_1d1870:
    // 0x1d1870: 0x8d22030c  lw          $v0, 0x30C($t1)
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 780)));
    // 0x1d1874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1874u;
    {
        const bool branch_taken_0x1d1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1874u;
        // 0x1d1878: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1874) {
            ctx->pc = 0x1D188Cu;
            goto label_1d188c;
        }
    }
    ctx->pc = 0x1D187Cu;
    // 0x1d187c: 0x8d220494  lw          $v0, 0x494($t1)
    ctx->pc = 0x1d187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
label_1d1880:
    // 0x1d1880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1884: 0xad220494  sw          $v0, 0x494($t1)
    ctx->pc = 0x1d1884u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1172), GPR_U32(ctx, 2));
    // 0x1d1888: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d188c:
    // 0x1d188c: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x1d188cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1d1890: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d1894: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1d1894u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d189c: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d18a0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1d18a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d18a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d18a8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1d18a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d18acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d18b0: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1d18b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d18b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d18b8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d18b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d18bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d18c0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d18c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d18c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d18c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d18cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d18ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d18d0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1d18d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1d18d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d18d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d18d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d18d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d18dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d18e0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d18e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d18e8: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1d18e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1d18ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d18ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18f0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d18f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d18f4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d18f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d18f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d18fc: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x1d18fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1d1900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1904: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d1908: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1908u;
    {
        const bool branch_taken_0x1d1908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1908u;
        // 0x1d190c: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1908) {
            ctx->pc = 0x1D1928u;
            goto label_1d1928;
        }
    }
    ctx->pc = 0x1D1910u;
    // 0x1d1910: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1d1910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d1914: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1918: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x1d1918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d191c: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d191cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1920u;
    {
        const bool branch_taken_0x1d1920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1920u;
        // 0x1d1924: 0xad220030  sw          $v0, 0x30($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1920) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D1928u;
label_1d1928:
    // 0x1d1928: 0xad280030  sw          $t0, 0x30($t1)
    ctx->pc = 0x1d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 8));
    // 0x1d192c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d192cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d1930:
    // 0x1d1930: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d1930u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1938: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1938u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d193c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1940: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1940u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1944: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d1944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1948: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d194c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d194cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1950: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1950u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1954: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d1954u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1958: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d1958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d195c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1d195cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1d1960: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d1960u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d1964: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1968: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d1968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d196c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d196cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1970: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1d1970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1d1974: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x1d1974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d1978: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D1978u;
    {
        const bool branch_taken_0x1d1978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1978u;
        // 0x1d197c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1978) {
            ctx->pc = 0x1D19CCu;
            goto label_1d19cc;
        }
    }
    ctx->pc = 0x1D1980u;
label_1d1980:
    // 0x1d1980: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1d1980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d1984: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1984u;
    {
        const bool branch_taken_0x1d1984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1984u;
        // 0x1d1988: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1984) {
            ctx->pc = 0x1D19CCu;
            goto label_1d19cc;
        }
    }
    ctx->pc = 0x1D198Cu;
    // 0x1d198c: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x1d198cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x1d1990: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d1994: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d199c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d199cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d19a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d19a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d19a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d19a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d19a8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1d19a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d19ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d19acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d19b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d19b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d19b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d19b8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d19b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d19bc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d19bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d19c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d19c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d19c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d19c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d19c8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d19c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d19cc:
    // 0x1d19cc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1d19ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d19d0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D19D0u;
    {
        const bool branch_taken_0x1d19d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d19d0) {
            ctx->pc = 0x1D19D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D19D0u;
            // 0x1d19d4: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A00u;
            goto label_1d1a00;
        }
    }
    ctx->pc = 0x1D19D8u;
    // 0x1d19d8: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1d19d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d19dc: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1d19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1d19e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D19E0u;
    {
        const bool branch_taken_0x1d19e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E0u;
        // 0x1d19e4: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19e0) {
            ctx->pc = 0x1D19F4u;
            goto label_1d19f4;
        }
    }
    ctx->pc = 0x1D19E8u;
    // 0x1d19e8: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x1d19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1d19ec: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d19f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d19f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d19f4:
    // 0x1d19f4: 0x5465ffe2  bnel        $v1, $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D19F4u;
    {
        const bool branch_taken_0x1d19f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d19f4) {
            ctx->pc = 0x1D19F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D19F4u;
            // 0x1d19f8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1980;
        }
    }
    ctx->pc = 0x1D19FCu;
    // 0x1d19fc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1d19fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1d1a00:
    // 0x1d1a00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d1a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a04: 0xc074692  jal         func_1D1A48
    ctx->pc = 0x1D1A04u;
    SET_GPR_U32(ctx, 31, 0x1D1A0Cu);
    ctx->pc = 0x1D1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A04u;
    // 0x1d1a08: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A48u, 0x1D1A04u, 0x1D1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A0Cu;
label_1d1a0c:
    // 0x1d1a0c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1d1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d1a10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d1a14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1a18: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d1a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a20: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1d1a24: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1d1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1d1a28: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1d1a28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d1a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a30: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1d1a30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d1a34: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d1a34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d1a38: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1a3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A40u;
        // 0x1d1a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A48u;
}
