#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2310
// Address: 0x2e2310 - 0x2e2580
void sub_002E2310_0x2e2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2310_0x2e2310");
#endif

    switch (ctx->pc) {
        case 0x2e2368u: goto label_2e2368;
        case 0x2e23acu: goto label_2e23ac;
        case 0x2e23c0u: goto label_2e23c0;
        case 0x2e2440u: goto label_2e2440;
        case 0x2e2444u: goto label_2e2444;
        case 0x2e24b8u: goto label_2e24b8;
        case 0x2e2554u: goto label_2e2554;
        default: break;
    }

    ctx->pc = 0x2e2310u;

    // 0x2e2310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e2314: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e2314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e2318: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e2318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e231c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2e231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2e2320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e2320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2324: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e2328: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2e2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2e232c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e2330: 0xe7b60078  swc1        $f22, 0x78($sp)
    ctx->pc = 0x2e2330u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e2334: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x2e2334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e2338: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x2e2338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e233c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e233cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e2340: 0x24632388  addiu       $v1, $v1, 0x2388
    ctx->pc = 0x2e2340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9096));
    // 0x2e2344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e2344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2348: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2348u;
    {
        const bool branch_taken_0x2e2348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2348) {
            ctx->pc = 0x2E2368u;
            goto label_2e2368;
        }
    }
    ctx->pc = 0x2E2350u;
    // 0x2e2350: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2354: 0x2484239c  addiu       $a0, $a0, 0x239C
    ctx->pc = 0x2e2354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9116));
    // 0x2e2358: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e2358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e235c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e235cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e2360: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2360u;
    SET_GPR_U32(ctx, 31, 0x2E2368u);
    ctx->pc = 0x2E2364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2360u;
            // 0x2e2364: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2368u; }
        if (ctx->pc != 0x2E2368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2368u; }
        if (ctx->pc != 0x2E2368u) { return; }
    }
    ctx->pc = 0x2E2368u;
label_2e2368:
    // 0x2e2368: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2368u;
    {
        const bool branch_taken_0x2e2368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2368) {
            ctx->pc = 0x2E239Cu;
            goto label_2e239c;
        }
    }
    ctx->pc = 0x2E2370u;
    // 0x2e2370: 0x8673f383  lh          $s3, -0xC7D($s3)
    ctx->pc = 0x2e2370u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294964099)));
    // 0x2e2374: 0xa3a808d1  sb          $t0, 0x8D1($sp)
    ctx->pc = 0x2e2374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2257), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e2378: 0x32a1020  add         $v0, $t9, $t2
    ctx->pc = 0x2e2378u;
    {     int32_t rs_val = GPR_S32(ctx, 25);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e237c: 0xfd0da222  sd          $t5, -0x5DDE($t0)
    ctx->pc = 0x2e237cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294943266), GPR_U64(ctx, 13));
    // 0x2e2380: 0x24cdbb90  addiu       $t5, $a2, -0x4470
    ctx->pc = 0x2e2380u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949776));
    // 0x2e2384: 0xde7515ff  ld          $s5, 0x15FF($s3)
    ctx->pc = 0x2e2384u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 19), 5631)));
    // 0x2e2388: 0x0  nop
    ctx->pc = 0x2e2388u;
    // NOP
    // 0x2e238c: 0xac7e879f  sw          $fp, -0x7861($v1)
    ctx->pc = 0x2e238cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936479), GPR_U32(ctx, 30));
    // 0x2e2390: 0xca15f9f2  lwc2        $21, -0x60E($s0)
    ctx->pc = 0x2e2390u;
    // Unhandled opcode: 0x32
    // 0x2e2394: 0xac7e86f7  sw          $fp, -0x7909($v1)
    ctx->pc = 0x2e2394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936311), GPR_U32(ctx, 30));
    // 0x2e2398: 0x0  nop
    ctx->pc = 0x2e2398u;
    // NOP
label_2e239c:
    // 0x2e239c: 0xacd27566  sw          $s2, 0x7566($a2)
    ctx->pc = 0x2e239cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 30054), GPR_U32(ctx, 18));
    // 0x2e23a0: 0x4ae6d0c2  vaddz.yzw   $vf3, $vf26, $vf6z
    ctx->pc = 0x2e23a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e23a4: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E23A4u;
    SET_GPR_U32(ctx, 31, 0x2E23ACu);
    ctx->pc = 0x2E23A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23A4u;
            // 0x2e23a8: 0x68f6d0c2  ldl         $s6, -0x2F3E($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294955202); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (runtime->hasFunction(0x2E0E80u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23ACu; }
        if (ctx->pc != 0x2E23ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E80_0x2e0e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23ACu; }
        if (ctx->pc != 0x2E23ACu) { return; }
    }
    ctx->pc = 0x2E23ACu;
label_2e23ac:
    // 0x2e23ac: 0xecf657e6  .word       0xECF657E6                   # INVALID     $a3, $s6, 0x57E6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e23acu;
    // Unhandled opcode: 0x3B
    // 0x2e23b0: 0xcce4f166  pref        0x04, -0xE9A($a3)
    ctx->pc = 0x2e23b0u;
    // PREF instruction (ignored)
    // 0x2e23b4: 0xacf268e6  sw          $s2, 0x68E6($a3)
    ctx->pc = 0x2e23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 26854), GPR_U32(ctx, 18));
    // 0x2e23b8: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E23B8u;
    SET_GPR_U32(ctx, 31, 0x2E23C0u);
    ctx->pc = 0x2E23BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23B8u;
            // 0x2e23bc: 0x6af6d0c2  ldl         $s6, -0x2F3E($s7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294955202); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (runtime->hasFunction(0x2E0E80u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23C0u; }
        if (ctx->pc != 0x2E23C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E80_0x2e0e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E23C0u; }
        if (ctx->pc != 0x2E23C0u) { return; }
    }
    ctx->pc = 0x2E23C0u;
label_2e23c0:
    // 0x2e23c0: 0x29f2d0c2  slti        $s2, $t7, -0x2F3E
    ctx->pc = 0x2e23c0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)4294955202) ? 1 : 0);
    // 0x2e23c4: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E
    ctx->pc = 0x2e23c4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
    // 0x2e23c8: 0x6ef67142  ldr         $s6, 0x7142($s7)
    ctx->pc = 0x2e23c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 28994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x2e23cc: 0x68f27142  ldl         $s2, 0x7142($a3)
    ctx->pc = 0x2e23ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 28994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x2e23d0: 0x2cfab570  sltiu       $k0, $a3, -0x4A90
    ctx->pc = 0x2e23d0u;
    SET_GPR_U64(ctx, 26, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294948208) ? 1 : 0);
    // 0x2e23d4: 0xace67546  sw          $a2, 0x7546($a3)
    ctx->pc = 0x2e23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 30022), GPR_U32(ctx, 6));
    // 0x2e23d8: 0x2ce697e7  sltiu       $a2, $a3, -0x6819
    ctx->pc = 0x2e23d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940647) ? 1 : 0);
    // 0x2e23dc: 0xb31aca20  sdl         $k0, -0x35E0($t8)
    ctx->pc = 0x2e23dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294953504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e23e0: 0x2ce2b576  sltiu       $v0, $a3, -0x4A8A
    ctx->pc = 0x2e23e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294948214) ? 1 : 0);
    // 0x2e23e4: 0xecf277e6  .word       0xECF277E6                   # INVALID     $a3, $s2, 0x77E6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e23e4u;
    // Unhandled opcode: 0x3B
    // 0x2e23e8: 0x4be6d0c2  vaddz.xyzw  $vf3, $vf26, $vf6z
    ctx->pc = 0x2e23e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e23ec: 0x2af2d0c2  slti        $s2, $s7, -0x2F3E
    ctx->pc = 0x2e23ecu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4294955202) ? 1 : 0);
    // 0x2e23f0: 0x2eee1142  sltiu       $t6, $s7, 0x1142
    ctx->pc = 0x2e23f0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)4418) ? 1 : 0);
    // 0x2e23f4: 0x28e61142  slti        $a2, $a3, 0x1142
    ctx->pc = 0x2e23f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4418) ? 1 : 0);
    // 0x2e23f8: 0x2cfab570  sltiu       $k0, $a3, -0x4A90
    ctx->pc = 0x2e23f8u;
    SET_GPR_U64(ctx, 26, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294948208) ? 1 : 0);
    // 0x2e23fc: 0xacea1546  sw          $t2, 0x1546($a3)
    ctx->pc = 0x2e23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5446), GPR_U32(ctx, 10));
    // 0x2e2400: 0x2cea94e7  sltiu       $t2, $a3, -0x6B19
    ctx->pc = 0x2e2400u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294939879) ? 1 : 0);
    // 0x2e2404: 0xb31aca20  sdl         $k0, -0x35E0($t8)
    ctx->pc = 0x2e2404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294953504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2408: 0x2ce2b576  sltiu       $v0, $a3, -0x4A8A
    ctx->pc = 0x2e2408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294948214) ? 1 : 0);
    // 0x2e240c: 0xa532ea85  sh          $s2, -0x157B($t1)
    ctx->pc = 0x2e240cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294961797), (uint16_t)GPR_U32(ctx, 18));
    // 0x2e2410: 0xb316ea84  sdl         $s6, -0x157C($t8)
    ctx->pc = 0x2e2410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294961796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2414: 0xbae2f56a  swr         $v0, -0xA96($s7)
    ctx->pc = 0x2e2414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294964586); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2418: 0x5fe6d0c2  .word       0x5FE6D0C2                   # bgtzl       $ra, . + 4 + (-0x2F3E << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2418u;
    {
        const bool branch_taken_0x2e2418 = (GPR_S32(ctx, 31) > 0);
        if (branch_taken_0x2e2418) {
            ctx->pc = 0x2E241Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2418u;
            // 0x2e241c: 0xa492e565  sh          $s2, -0x1A9B($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294960485), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6724u;
            return;
        }
    }
    ctx->pc = 0x2E2420u;
    // 0x2e2420: 0xb9e2f56a  swr         $v0, -0xA96($t7)
    ctx->pc = 0x2e2420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294964586); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2424: 0x3cf2d0c2  .word       0x3CF2D0C2                   # lui         $s2, 0xD0C2 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2424u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53442 << 16));
    // 0x2e2428: 0xa512f565  sh          $s2, -0xA9B($t0)
    ctx->pc = 0x2e2428u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294964581), (uint16_t)GPR_U32(ctx, 18));
    // 0x2e242c: 0xb8e2f56a  swr         $v0, -0xA96($a3)
    ctx->pc = 0x2e242cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294964586); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2430: 0xbcf09565  cache       0x10, -0x6A9B($a3)
    ctx->pc = 0x2e2430u;
    // CACHE instruction (ignored)
    // 0x2e2434: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E
    ctx->pc = 0x2e2434u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
    // 0x2e2438: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E2438u;
    SET_GPR_U32(ctx, 31, 0x2E2440u);
    ctx->pc = 0x2E243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2438u;
            // 0x2e243c: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2440u; }
        if (ctx->pc != 0x2E2440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2440u; }
        if (ctx->pc != 0x2E2440u) { return; }
    }
    ctx->pc = 0x2E2440u;
label_2e2440:
    // 0x2e2440: 0xace2956a  sw          $v0, -0x6A96($a3)
    ctx->pc = 0x2e2440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294940010), GPR_U32(ctx, 2));
label_2e2444:
    // 0x2e2444: 0xece2d16a  .word       0xECE2D16A                   # INVALID     $a3, $v0, -0x2E96 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2444u;
    // Unhandled opcode: 0x3B
    // 0x2e2448: 0x68fcd142  ldl         $gp, -0x2EBE($a3)
    ctx->pc = 0x2e2448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294955330); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem << shift)); }
    // 0x2e244c: 0xecf0d546  .word       0xECF0D546                   # INVALID     $a3, $s0, -0x2ABA # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e244cu;
    // Unhandled opcode: 0x3B
    // 0x2e2450: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E
    ctx->pc = 0x2e2450u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
    // 0x2e2454: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E
    ctx->pc = 0x2e2454u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
    // 0x2e2458: 0xecf0150a  .word       0xECF0150A                   # INVALID     $a3, $s0, 0x150A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2458u;
    // Unhandled opcode: 0x3B
    // 0x2e245c: 0xecf0752a  .word       0xECF0752A                   # INVALID     $a3, $s0, 0x752A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e245cu;
    // Unhandled opcode: 0x3B
    // 0x2e2460: 0xf8f2d3aa  sqc2        $vf18, -0x2C56($a3)
    ctx->pc = 0x2e2460u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294955946), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x2e2464: 0xecf2d9ea  .word       0xECF2D9EA                   # INVALID     $a3, $s2, -0x2616 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2464u;
    // Unhandled opcode: 0x3B
    // 0x2e2468: 0xadf2956a  sw          $s2, -0x6A96($t7)
    ctx->pc = 0x2e2468u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294940010), GPR_U32(ctx, 18));
    // 0x2e246c: 0x8cf2d5ca  lw          $s2, -0x2A36($a3)
    ctx->pc = 0x2e246cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956490)));
    // 0x2e2470: 0x6cf2b7e7  ldr         $s2, -0x4819($a3)
    ctx->pc = 0x2e2470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294948839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2e2474: 0xecf0554a  .word       0xECF0554A                   # INVALID     $a3, $s0, 0x554A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2474u;
    // Unhandled opcode: 0x3B
    // 0x2e2478: 0xecf2d9ea  .word       0xECF2D9EA                   # INVALID     $a3, $s2, -0x2616 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2478u;
    // Unhandled opcode: 0x3B
    // 0x2e247c: 0xadf2956a  sw          $s2, -0x6A96($t7)
    ctx->pc = 0x2e247cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294940010), GPR_U32(ctx, 18));
    // 0x2e2480: 0x2ef891c2  sltiu       $t8, $s7, -0x6E3E
    ctx->pc = 0x2e2480u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)4294939074) ? 1 : 0);
    // 0x2e2484: 0xb31ec8e0  sdl         $fp, -0x3720($t8)
    ctx->pc = 0x2e2484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294953184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2488: 0x2ce29576  sltiu       $v0, $a3, -0x6A8A
    ctx->pc = 0x2e2488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940022) ? 1 : 0);
    // 0x2e248c: 0xa532ea85  sh          $s2, -0x157B($t1)
    ctx->pc = 0x2e248cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294961797), (uint16_t)GPR_U32(ctx, 18));
    // 0x2e2490: 0xb316ea84  sdl         $s6, -0x157C($t8)
    ctx->pc = 0x2e2490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294961796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2494: 0xbae2f56a  swr         $v0, -0xA96($s7)
    ctx->pc = 0x2e2494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294964586); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2498: 0x3cf2d0c2  .word       0x3CF2D0C2                   # lui         $s2, 0xD0C2 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2498u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53442 << 16));
    // 0x2e249c: 0xa492e565  sh          $s2, -0x1A9B($a0)
    ctx->pc = 0x2e249cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960485), (uint16_t)GPR_U32(ctx, 18));
    // 0x2e24a0: 0xb9e2f56a  swr         $v0, -0xA96($t7)
    ctx->pc = 0x2e24a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294964586); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e24a4: 0xbcf09565  cache       0x10, -0x6A9B($a3)
    ctx->pc = 0x2e24a4u;
    // CACHE instruction (ignored)
    // 0x2e24a8: 0xa512f565  sh          $s2, -0xA9B($t0)
    ctx->pc = 0x2e24a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294964581), (uint16_t)GPR_U32(ctx, 18));
    // 0x2e24ac: 0xb8e2f56a  swr         $v0, -0xA96($a3)
    ctx->pc = 0x2e24acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294964586); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e24b0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E24B0u;
    SET_GPR_U32(ctx, 31, 0x2E24B8u);
    ctx->pc = 0x2E24B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24B0u;
            // 0x2e24b4: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E24B8u; }
        if (ctx->pc != 0x2E24B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E24B8u; }
        if (ctx->pc != 0x2E24B8u) { return; }
    }
    ctx->pc = 0x2E24B8u;
label_2e24b8:
    // 0x2e24b8: 0xace2956a  sw          $v0, -0x6A96($a3)
    ctx->pc = 0x2e24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294940010), GPR_U32(ctx, 2));
    // 0x2e24bc: 0xece2d16a  .word       0xECE2D16A                   # INVALID     $a3, $v0, -0x2E96 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24bcu;
    // Unhandled opcode: 0x3B
    // 0x2e24c0: 0x68f4d142  ldl         $s4, -0x2EBE($a3)
    ctx->pc = 0x2e24c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294955330); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x2e24c4: 0xecf0d546  .word       0xECF0D546                   # INVALID     $a3, $s0, -0x2ABA # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24c4u;
    // Unhandled opcode: 0x3B
    // 0x2e24c8: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E
    ctx->pc = 0x2e24c8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
    // 0x2e24cc: 0x2cf2d562  sltiu       $s2, $a3, -0x2A9E
    ctx->pc = 0x2e24ccu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294956386) ? 1 : 0);
    // 0x2e24d0: 0xecf0150a  .word       0xECF0150A                   # INVALID     $a3, $s0, 0x150A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24d0u;
    // Unhandled opcode: 0x3B
    // 0x2e24d4: 0xecf0752a  .word       0xECF0752A                   # INVALID     $a3, $s0, 0x752A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24d4u;
    // Unhandled opcode: 0x3B
    // 0x2e24d8: 0xf8f2d3aa  sqc2        $vf18, -0x2C56($a3)
    ctx->pc = 0x2e24d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294955946), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x2e24dc: 0xecf2d9ea  .word       0xECF2D9EA                   # INVALID     $a3, $s2, -0x2616 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24dcu;
    // Unhandled opcode: 0x3B
    // 0x2e24e0: 0xadf2956a  sw          $s2, -0x6A96($t7)
    ctx->pc = 0x2e24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294940010), GPR_U32(ctx, 18));
    // 0x2e24e4: 0x8cf2d5ca  lw          $s2, -0x2A36($a3)
    ctx->pc = 0x2e24e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956490)));
    // 0x2e24e8: 0x6cf2b7e7  ldr         $s2, -0x4819($a3)
    ctx->pc = 0x2e24e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294948839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2e24ec: 0xecf0554a  .word       0xECF0554A                   # INVALID     $a3, $s0, 0x554A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24ecu;
    // Unhandled opcode: 0x3B
    // 0x2e24f0: 0xecf2d9ea  .word       0xECF2D9EA                   # INVALID     $a3, $s2, -0x2616 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e24f0u;
    // Unhandled opcode: 0x3B
    // 0x2e24f4: 0xadf2956a  sw          $s2, -0x6A96($t7)
    ctx->pc = 0x2e24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294940010), GPR_U32(ctx, 18));
    // 0x2e24f8: 0x2ef891c2  sltiu       $t8, $s7, -0x6E3E
    ctx->pc = 0x2e24f8u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)4294939074) ? 1 : 0);
    // 0x2e24fc: 0xb31ec8e0  sdl         $fp, -0x3720($t8)
    ctx->pc = 0x2e24fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294953184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2500: 0x2ce29576  sltiu       $v0, $a3, -0x6A8A
    ctx->pc = 0x2e2500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940022) ? 1 : 0);
    // 0x2e2504: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2504u;
    {
        const bool branch_taken_0x2e2504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2504) {
            ctx->pc = 0x2E2534u;
            goto label_2e2534;
        }
    }
    ctx->pc = 0x2E250Cu;
    // 0x2e250c: 0xffdafa42  sd          $k0, -0x5BE($fp)
    ctx->pc = 0x2e250cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294965826), GPR_U64(ctx, 26));
    // 0x2e2510: 0xde967a77  ld          $s6, 0x7A77($s4)
    ctx->pc = 0x2e2510u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 20), 31351)));
    // 0x2e2514: 0xa29afa79  sb          $k0, -0x587($s4)
    ctx->pc = 0x2e2514u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294965881), (uint8_t)GPR_U32(ctx, 26));
    // 0x2e2518: 0xfc424b8a  sd          $v0, 0x4B8A($v0)
    ctx->pc = 0x2e2518u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 19338), GPR_U64(ctx, 2));
    // 0x2e251c: 0xff4d582a  sd          $t5, 0x582A($k0)
    ctx->pc = 0x2e251cu;
    WRITE64(ADD32(GPR_U32(ctx, 26), 22570), GPR_U64(ctx, 13));
    // 0x2e2520: 0x3437020  add         $t6, $k0, $v1
    ctx->pc = 0x2e2520u;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2e2524: 0xac7e87f9  sw          $fp, -0x7807($v1)
    ctx->pc = 0x2e2524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936569), GPR_U32(ctx, 30));
    // 0x2e2528: 0xca15f9f3  lwc2        $21, -0x60D($s0)
    ctx->pc = 0x2e2528u;
    // Unhandled opcode: 0x32
    // 0x2e252c: 0xac7e8691  sw          $fp, -0x796F($v1)
    ctx->pc = 0x2e252cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936209), GPR_U32(ctx, 30));
    // 0x2e2530: 0x0  nop
    ctx->pc = 0x2e2530u;
    // NOP
label_2e2534:
    // 0x2e2534: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e2538: 0x24422524  addiu       $v0, $v0, 0x2524
    ctx->pc = 0x2e2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9508));
    // 0x2e253c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e253cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2540: 0x24842504  addiu       $a0, $a0, 0x2504
    ctx->pc = 0x2e2540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9476));
    // 0x2e2544: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e2544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2548: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e254c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E254Cu;
    SET_GPR_U32(ctx, 31, 0x2E2554u);
    ctx->pc = 0x2E2550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E254Cu;
            // 0x2e2550: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2554u; }
        if (ctx->pc != 0x2E2554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2554u; }
        if (ctx->pc != 0x2E2554u) { return; }
    }
    ctx->pc = 0x2E2554u;
label_2e2554:
    // 0x2e2554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2558: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e2558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e255c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2e255cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2560: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e2560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e2564: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2e2564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e2568: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e2568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e256c: 0xc7b60078  lwc1        $f22, 0x78($sp)
    ctx->pc = 0x2e256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e2570: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x2e2570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2574: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x2e2574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2578: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2578u;
            // 0x2e257c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2580u;
    ctx->pc = 0x2e2580u;
}
