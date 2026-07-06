#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275288
// Address: 0x275288 - 0x2753f0
void sub_00275288_0x275288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275288_0x275288");
#endif

    switch (ctx->pc) {
        case 0x2752d0u: goto label_2752d0;
        case 0x2752f4u: goto label_2752f4;
        case 0x275334u: goto label_275334;
        case 0x275398u: goto label_275398;
        case 0x2753d4u: goto label_2753d4;
        default: break;
    }

    ctx->pc = 0x275288u;

    // 0x275288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27528c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x275290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275294: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x275294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x275298: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x275298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27529c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2752a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2752a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2752a4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x2752a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x2752a8: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x2752a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
    // 0x2752ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2752acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2752b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2752B0u;
    {
        const bool branch_taken_0x2752b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2752b0) {
            ctx->pc = 0x2752D0u;
            goto label_2752d0;
        }
    }
    ctx->pc = 0x2752B8u;
    // 0x2752b8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2752b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2752bc: 0x24845304  addiu       $a0, $a0, 0x5304
    ctx->pc = 0x2752bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21252));
    // 0x2752c0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2752c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2752c4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2752c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2752c8: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2752C8u;
    SET_GPR_U32(ctx, 31, 0x2752D0u);
    ctx->pc = 0x2752CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2752C8u;
            // 0x2752cc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752D0u; }
        if (ctx->pc != 0x2752D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752D0u; }
        if (ctx->pc != 0x2752D0u) { return; }
    }
    ctx->pc = 0x2752D0u;
label_2752d0:
    // 0x2752d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2752D0u;
    {
        const bool branch_taken_0x2752d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2752d0) {
            ctx->pc = 0x275304u;
            goto label_275304;
        }
    }
    ctx->pc = 0x2752D8u;
    // 0x2752d8: 0x8693c143  lh          $s3, -0x3EBD($s4)
    ctx->pc = 0x2752d8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294951235)));
    // 0x2752dc: 0x25177bb0  addiu       $s7, $t0, 0x7BB0
    ctx->pc = 0x2752dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 31664));
    // 0x2752e0: 0xdceed5cf  ld          $t6, -0x2A31($a3)
    ctx->pc = 0x2752e0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 7), 4294956495)));
    // 0x2752e4: 0xa29c9809  sb          $gp, -0x67F7($s4)
    ctx->pc = 0x2752e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294940681), (uint8_t)GPR_U32(ctx, 28));
    // 0x2752e8: 0xdf9547cf  ld          $s5, 0x47CF($gp)
    ctx->pc = 0x2752e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 28), 18383)));
    // 0x2752ec: 0xcb93400  jal         func_2E4D000
    ctx->pc = 0x2752ECu;
    SET_GPR_U32(ctx, 31, 0x2752F4u);
    ctx->pc = 0x2E4D000u;
    {
        auto targetFn = runtime->lookupFunction(0x2E4D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752F4u; }
        if (ctx->pc != 0x2752F4u) { return; }
    }
    ctx->pc = 0x2752F4u;
label_2752f4:
    // 0x2752f4: 0xf673445e  sdc1        $f19, 0x445E($s3)
    ctx->pc = 0x2752f4u;
    // Unhandled opcode: 0x3D
    // 0x2752f8: 0x971e2914  lhu         $fp, 0x2914($t8)
    ctx->pc = 0x2752f8u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10516)));
    // 0x2752fc: 0xf67344de  sdc1        $f19, 0x44DE($s3)
    ctx->pc = 0x2752fcu;
    // Unhandled opcode: 0x3D
    // 0x275300: 0x0  nop
    ctx->pc = 0x275300u;
    // NOP
label_275304:
    // 0x275304: 0x3b6b41ec  xori        $t3, $k1, 0x41EC
    ctx->pc = 0x275304u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)16876);
    // 0x275308: 0xb9b7e928  swr         $s7, -0x16D8($t5)
    ctx->pc = 0x275308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294961448); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27530c: 0xbbdbe9a8  swr         $k1, -0x1658($fp)
    ctx->pc = 0x27530cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294961576); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275310: 0xbb33ddb8  swr         $s3, -0x2248($t9)
    ctx->pc = 0x275310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294958520); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 19); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275314: 0xb8fbddb8  swr         $k1, -0x2248($a3)
    ctx->pc = 0x275314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294958520); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275318: 0xfa7b47bc  sqc2        $vf27, 0x47BC($s3)
    ctx->pc = 0x275318u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 18364), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x27531c: 0x396b5d38  xori        $t3, $t3, 0x5D38
    ctx->pc = 0x27531cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)23864);
    // 0x275320: 0x196b412c  .word       0x196B412C                   # blez        $t3, . + 4 + (0x412C << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275320u;
    {
        const bool branch_taken_0x275320 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x275324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275320u;
            // 0x275324: 0xe688a9b7  swc1        $f8, -0x5649($s4) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294945207), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275320) {
            ctx->pc = 0x2857D4u;
            return;
        }
    }
    ctx->pc = 0x275328u;
    // 0x275328: 0x397b47bc  xori        $k1, $t3, 0x47BC
    ctx->pc = 0x275328u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)18364);
    // 0x27532c: 0xc09e562  jal         func_279588
    ctx->pc = 0x27532Cu;
    SET_GPR_U32(ctx, 31, 0x275334u);
    ctx->pc = 0x275330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27532Cu;
            // 0x275330: 0x99675b3c  lwr         $a3, 0x5B3C($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23356); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x279588u;
    if (runtime->hasFunction(0x279588u)) {
        auto targetFn = runtime->lookupFunction(0x279588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275334u; }
        if (ctx->pc != 0x275334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279588_0x279588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275334u; }
        if (ctx->pc != 0x275334u) { return; }
    }
    ctx->pc = 0x275334u;
label_275334:
    // 0x275334: 0xba1be9a8  swr         $k1, -0x1658($s0)
    ctx->pc = 0x275334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294961576); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275338: 0xfa7b6938  sqc2        $vf27, 0x6938($s3)
    ctx->pc = 0x275338u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 26936), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x27533c: 0x1967473c  .word       0x1967473C                   # blez        $t3, . + 4 + (0x473C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27533Cu;
    {
        const bool branch_taken_0x27533c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x275340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27533Cu;
            // 0x275340: 0x7b6b41be  lq          $t3, 0x41BE($k1) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 27), 16830)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27533c) {
            ctx->pc = 0x287030u;
            return;
        }
    }
    ctx->pc = 0x275344u;
    // 0x275344: 0xba3be5b0  swr         $k1, -0x1A50($s1)
    ctx->pc = 0x275344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294960560); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275348: 0xfa6b68a4  sqc2        $vf11, 0x68A4($s3)
    ctx->pc = 0x275348u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 26788), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x27534c: 0x278901e7  addiu       $t1, $gp, 0x1E7
    ctx->pc = 0x27534cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 487));
    // 0x275350: 0x9b631f3c  lwr         $v1, 0x1F3C($k1)
    ctx->pc = 0x275350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 7996); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x275354: 0xb997e928  swr         $s7, -0x16D8($t4)
    ctx->pc = 0x275354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294961448); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275358: 0xfb7b49a0  sqc2        $vf27, 0x49A0($k1)
    ctx->pc = 0x275358u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 18848), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x27535c: 0xbbbbe9a8  swr         $k1, -0x1658($sp)
    ctx->pc = 0x27535cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294961576); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275360: 0xfb7b69bc  sqc2        $vf27, 0x69BC($k1)
    ctx->pc = 0x275360u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 27068), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x275364: 0x278901e7  addiu       $t1, $gp, 0x1E7
    ctx->pc = 0x275364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 487));
    // 0x275368: 0xb9fbd138  swr         $k1, -0x2EC8($t7)
    ctx->pc = 0x275368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294955320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27536c: 0xfa7b47bc  sqc2        $vf27, 0x47BC($s3)
    ctx->pc = 0x27536cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 18364), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x275370: 0x386b51b8  xori        $t3, $v1, 0x51B8
    ctx->pc = 0x275370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)20920);
    // 0x275374: 0x397b47bc  xori        $k1, $t3, 0x47BC
    ctx->pc = 0x275374u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)18364);
    // 0x275378: 0x186b41ac  .word       0x186B41AC                   # blez        $v1, . + 4 + (0x41AC << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275378u;
    {
        const bool branch_taken_0x275378 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27537Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275378u;
            // 0x27537c: 0xe688a9b7  swc1        $f8, -0x5649($s4) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294945207), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275378) {
            ctx->pc = 0x285A2Cu;
            return;
        }
    }
    ctx->pc = 0x275380u;
    // 0x275380: 0xb83bd138  swr         $k1, -0x2EC8($at)
    ctx->pc = 0x275380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294955320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275384: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275384u;
    {
        const bool branch_taken_0x275384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275384) {
            ctx->pc = 0x2753B4u;
            goto label_2753b4;
        }
    }
    ctx->pc = 0x27538Cu;
    // 0x27538c: 0x8754a96b  lh          $s4, -0x5695($k0)
    ctx->pc = 0x27538cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 4294945131)));
    // 0x275390: 0xcddf73a  jal         func_377DCE8
    ctx->pc = 0x275390u;
    SET_GPR_U32(ctx, 31, 0x275398u);
    ctx->pc = 0x275394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275390u;
            // 0x275394: 0xff1490a2  sd          $s4, -0x6F5E($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 4294938786), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x377DCE8u;
    {
        auto targetFn = runtime->lookupFunction(0x377DCE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275398u; }
        if (ctx->pc != 0x275398u) { return; }
    }
    ctx->pc = 0x275398u;
label_275398:
    // 0x275398: 0x856752c3  lh          $a3, 0x52C3($t3)
    ctx->pc = 0x275398u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 21187)));
    // 0x27539c: 0x8d569245  lw          $s6, -0x6DBB($t2)
    ctx->pc = 0x27539cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294939205)));
    // 0x2753a0: 0x85a34e43  lh          $v1, 0x4E43($t5)
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 20035)));
    // 0x2753a4: 0xfe544376  sd          $s4, 0x4376($s2)
    ctx->pc = 0x2753a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 17270), GPR_U64(ctx, 20));
    // 0x2753a8: 0x971e2915  lhu         $fp, 0x2915($t8)
    ctx->pc = 0x2753a8u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10517)));
    // 0x2753ac: 0xfe5443f6  sd          $s4, 0x43F6($s2)
    ctx->pc = 0x2753acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 17398), GPR_U64(ctx, 20));
    // 0x2753b0: 0x0  nop
    ctx->pc = 0x2753b0u;
    // NOP
label_2753b4:
    // 0x2753b4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2753b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2753b8: 0x244253a4  addiu       $v0, $v0, 0x53A4
    ctx->pc = 0x2753b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21412));
    // 0x2753bc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2753bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2753c0: 0x24845384  addiu       $a0, $a0, 0x5384
    ctx->pc = 0x2753c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21380));
    // 0x2753c4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2753c8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2753c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2753cc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2753CCu;
    SET_GPR_U32(ctx, 31, 0x2753D4u);
    ctx->pc = 0x2753D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2753CCu;
            // 0x2753d0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753D4u; }
        if (ctx->pc != 0x2753D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753D4u; }
        if (ctx->pc != 0x2753D4u) { return; }
    }
    ctx->pc = 0x2753D4u;
label_2753d4:
    // 0x2753d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2753d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2753d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2753dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2753dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2753e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2753e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2753e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2753e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2753e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2753E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2753ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2753E8u;
            // 0x2753ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2753F0u;
    ctx->pc = 0x2753f0u;
}
