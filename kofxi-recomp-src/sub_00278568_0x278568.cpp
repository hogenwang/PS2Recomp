#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278568
// Address: 0x278568 - 0x2786c8
void sub_00278568_0x278568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278568_0x278568");
#endif

    switch (ctx->pc) {
        case 0x2785b8u: goto label_2785b8;
        case 0x27864cu: goto label_27864c;
        case 0x278670u: goto label_278670;
        case 0x2786a4u: goto label_2786a4;
        default: break;
    }

    ctx->pc = 0x278568u;

    // 0x278568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27856c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x278570: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x278570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278574: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x278574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x278578: 0x24d20002  addiu       $s2, $a2, 0x2
    ctx->pc = 0x278578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x27857c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x27857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x278580: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x278580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278584: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x278584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x278588: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x278588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27858c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278590: 0x246385d8  addiu       $v1, $v1, -0x7A28
    ctx->pc = 0x278590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936024));
    // 0x278594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278598: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278598u;
    {
        const bool branch_taken_0x278598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278598) {
            ctx->pc = 0x2785B8u;
            goto label_2785b8;
        }
    }
    ctx->pc = 0x2785A0u;
    // 0x2785a0: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x2785a4: 0x248485ec  addiu       $a0, $a0, -0x7A14
    ctx->pc = 0x2785a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936044));
    // 0x2785a8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2785a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2785ac: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2785acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2785b0: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2785B0u;
    SET_GPR_U32(ctx, 31, 0x2785B8u);
    ctx->pc = 0x2785B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785B0u;
            // 0x2785b4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B8u; }
        if (ctx->pc != 0x2785B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B8u; }
        if (ctx->pc != 0x2785B8u) { return; }
    }
    ctx->pc = 0x2785B8u;
label_2785b8:
    // 0x2785b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2785B8u;
    {
        const bool branch_taken_0x2785b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2785b8) {
            ctx->pc = 0x2785ECu;
            goto label_2785ec;
        }
    }
    ctx->pc = 0x2785C0u;
    // 0x2785c0: 0x8c98c635  lw          $t8, -0x39CB($a0)
    ctx->pc = 0x2785c0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952501)));
    // 0x2785c4: 0xa0ec3ed9  sb          $t4, 0x3ED9($a3)
    ctx->pc = 0x2785c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16089), (uint8_t)GPR_U32(ctx, 12));
    // 0x2785c8: 0x8571f14b  lh          $s1, -0xEB5($t3)
    ctx->pc = 0x2785c8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294963531)));
    // 0x2785cc: 0x87ce408b  lh          $t6, 0x408B($fp)
    ctx->pc = 0x2785ccu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 16523)));
    // 0x2785d0: 0x84f6c4f3  lh          $s6, -0x3B0D($a3)
    ctx->pc = 0x2785d0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294952179)));
    // 0x2785d4: 0x277c9818  addiu       $gp, $k1, -0x67E8
    ctx->pc = 0x2785d4u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 27), 4294940696));
    // 0x2785d8: 0x0  nop
    ctx->pc = 0x2785d8u;
    // NOP
    // 0x2785dc: 0x4619f72f  .word       0x4619F72F                   # INVALID     $s0, $t9, -0x8D1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2785dcu;
    // Unhandled FPU.S instruction: function 0x2F
    // 0x2785e0: 0x98081870  lwr         $t0, 0x1870($zero)
    ctx->pc = 0x2785e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2785e4: 0x4619f747  .word       0x4619F747                   # neg.s       $f29, $f30 # 00190000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2785e4u;
    ctx->f[29] = FPU_NEG_S(ctx->f[30]);
    // 0x2785e8: 0x0  nop
    ctx->pc = 0x2785e8u;
    // NOP
label_2785ec:
    // 0x2785ec: 0xf9373e88  sqc2        $vf23, 0x3E88($t1)
    ctx->pc = 0x2785ecu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16008), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2785f0: 0xb10e5c0c  sdl         $t6, 0x5C0C($t0)
    ctx->pc = 0x2785f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23564); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2785f4: 0xde8563f8  ld          $a1, 0x63F8($s4)
    ctx->pc = 0x2785f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 25592)));
    // 0x2785f8: 0xb1657c48  sdl         $a1, 0x7C48($t3)
    ctx->pc = 0x2785f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2785fc: 0xb1843c7c  sdl         $a0, 0x3C7C($t4)
    ctx->pc = 0x2785fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15484); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278600: 0xf1663d0c  scd         $a2, 0x3D0C($t3)
    ctx->pc = 0x278600u;
    // Unhandled opcode: 0x3C
    // 0x278604: 0xf0870e0a  scd         $a3, 0xE0A($a0)
    ctx->pc = 0x278604u;
    // Unhandled opcode: 0x3C
    // 0x278608: 0x91267d0e  lbu         $a2, 0x7D0E($t1)
    ctx->pc = 0x278608u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 32014)));
    // 0x27860c: 0xdeb573f9  ld          $s5, 0x73F9($s5)
    ctx->pc = 0x27860cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 21), 29689)));
    // 0x278610: 0xa12d1c02  sb          $t5, 0x1C02($t1)
    ctx->pc = 0x278610u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7170), (uint8_t)GPR_U32(ctx, 13));
    // 0x278614: 0xd1540c8e  lld         $s4, 0xC8E($t2)
    ctx->pc = 0x278614u;
    // Unhandled opcode: 0x34
    // 0x278618: 0xa13d1c02  sb          $sp, 0x1C02($t1)
    ctx->pc = 0x278618u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7170), (uint8_t)GPR_U32(ctx, 29));
    // 0x27861c: 0xb2c72c28  sdl         $a3, 0x2C28($s6)
    ctx->pc = 0x27861cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 11304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278620: 0xb1140c0a  sdl         $s4, 0xC0A($t0)
    ctx->pc = 0x278620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3082); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278624: 0xf3371e8c  scd         $s7, 0x1E8C($t9)
    ctx->pc = 0x278624u;
    // Unhandled opcode: 0x3C
    // 0x278628: 0xa10e5c02  sb          $t6, 0x5C02($t0)
    ctx->pc = 0x278628u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 23554), (uint8_t)GPR_U32(ctx, 14));
    // 0x27862c: 0xb0872018  sdl         $a3, 0x2018($a0)
    ctx->pc = 0x27862cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278630: 0xe3b71e82  sc          $s7, 0x1E82($sp)
    ctx->pc = 0x278630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7810); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278634: 0x91457c08  lbu         $a1, 0x7C08($t2)
    ctx->pc = 0x278634u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 31752)));
    // 0x278638: 0xde143b8c  ld          $s4, 0x3B8C($s0)
    ctx->pc = 0x278638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 15244)));
    // 0x27863c: 0xf0572e0c  scd         $s7, 0x2E0C($v0)
    ctx->pc = 0x27863cu;
    // Unhandled opcode: 0x3C
    // 0x278640: 0xf0172e0c  scd         $s7, 0x2E0C($zero)
    ctx->pc = 0x278640u;
    // Unhandled opcode: 0x3C
    // 0x278644: 0xc09de72  jal         func_2779C8
    ctx->pc = 0x278644u;
    SET_GPR_U32(ctx, 31, 0x27864Cu);
    ctx->pc = 0x278648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278644u;
            // 0x278648: 0xa10d5c02  sb          $t5, 0x5C02($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 23554), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2779C8u;
    if (runtime->hasFunction(0x2779C8u)) {
        auto targetFn = runtime->lookupFunction(0x2779C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27864Cu; }
        if (ctx->pc != 0x27864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002779C8_0x2779c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27864Cu; }
        if (ctx->pc != 0x27864Cu) { return; }
    }
    ctx->pc = 0x27864Cu;
label_27864c:
    // 0x27864c: 0xb1156c08  sdl         $s5, 0x6C08($t0)
    ctx->pc = 0x27864cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 27656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278650: 0x99073c8e  lwr         $a3, 0x3C8E($t0)
    ctx->pc = 0x278650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15502); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x278654: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278654u;
    {
        const bool branch_taken_0x278654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278654) {
            ctx->pc = 0x278684u;
            goto label_278684;
        }
    }
    ctx->pc = 0x27865Cu;
    // 0x27865c: 0x250e2708  addiu       $t6, $t0, 0x2708
    ctx->pc = 0x27865cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 9992));
    // 0x278660: 0xff32c042  sd          $s2, -0x3FBE($t9)
    ctx->pc = 0x278660u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 4294950978), GPR_U64(ctx, 18));
    // 0x278664: 0x8fd478c5  lw          $s4, 0x78C5($fp)
    ctx->pc = 0x278664u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 30917)));
    // 0x278668: 0xc9eb632  jal         func_27AD8C8
    ctx->pc = 0x278668u;
    SET_GPR_U32(ctx, 31, 0x278670u);
    ctx->pc = 0x27866Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278668u;
            // 0x27866c: 0xdd3c98cf  ld          $gp, -0x6731($t1) (Delay Slot)
        SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 9), 4294940879)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27AD8C8u;
    {
        auto targetFn = runtime->lookupFunction(0x27AD8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278670u; }
        if (ctx->pc != 0x278670u) { return; }
    }
    ctx->pc = 0x278670u;
label_278670:
    // 0x278670: 0x26505b18  addiu       $s0, $s2, 0x5B18
    ctx->pc = 0x278670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 23320));
    // 0x278674: 0x4619f27f  .word       0x4619F27F                   # c.ngt.s     $f30, $f25 # 00000240 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278674u;
    ctx->fcr31 = (FPU_C_NGT_S(ctx->f[30], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278678: 0x98081871  lwr         $t0, 0x1871($zero)
    ctx->pc = 0x278678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x27867c: 0x4619f217  .word       0x4619F217                   # INVALID     $s0, $t9, -0xDE9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27867cu;
    // Unhandled FPU.S instruction: function 0x17
    // 0x278680: 0x0  nop
    ctx->pc = 0x278680u;
    // NOP
label_278684:
    // 0x278684: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278688: 0x24428674  addiu       $v0, $v0, -0x798C
    ctx->pc = 0x278688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936180));
    // 0x27868c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27868cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278690: 0x24848654  addiu       $a0, $a0, -0x79AC
    ctx->pc = 0x278690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936148));
    // 0x278694: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278698: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x278698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27869c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27869Cu;
    SET_GPR_U32(ctx, 31, 0x2786A4u);
    ctx->pc = 0x2786A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27869Cu;
            // 0x2786a0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786A4u; }
        if (ctx->pc != 0x2786A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786A4u; }
        if (ctx->pc != 0x2786A4u) { return; }
    }
    ctx->pc = 0x2786A4u;
label_2786a4:
    // 0x2786a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2786a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2786a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2786ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2786acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2786b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2786b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2786b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2786b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2786b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2786b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2786bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2786BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2786C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2786BCu;
            // 0x2786c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2786C4u;
    // 0x2786c4: 0x0  nop
    ctx->pc = 0x2786c4u;
    // NOP
    ctx->pc = 0x2786c8u;
}
