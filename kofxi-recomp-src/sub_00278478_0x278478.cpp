#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278478
// Address: 0x278478 - 0x278568
void sub_00278478_0x278478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278478_0x278478");
#endif

    switch (ctx->pc) {
        case 0x2784b4u: goto label_2784b4;
        case 0x278500u: goto label_278500;
        case 0x278554u: goto label_278554;
        default: break;
    }

    ctx->pc = 0x278478u;

    // 0x278478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27847c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278484: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x278484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x278488: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27848c: 0x246384d4  addiu       $v1, $v1, -0x7B2C
    ctx->pc = 0x27848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935764));
    // 0x278490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278494: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278494u;
    {
        const bool branch_taken_0x278494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278494) {
            ctx->pc = 0x2784B4u;
            goto label_2784b4;
        }
    }
    ctx->pc = 0x27849Cu;
    // 0x27849c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27849cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x2784a0: 0x248484e8  addiu       $a0, $a0, -0x7B18
    ctx->pc = 0x2784a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935784));
    // 0x2784a4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2784a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2784a8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2784a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2784ac: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2784ACu;
    SET_GPR_U32(ctx, 31, 0x2784B4u);
    ctx->pc = 0x2784B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784ACu;
            // 0x2784b0: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784B4u; }
        if (ctx->pc != 0x2784B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784B4u; }
        if (ctx->pc != 0x2784B4u) { return; }
    }
    ctx->pc = 0x2784B4u;
label_2784b4:
    // 0x2784b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2784B4u;
    {
        const bool branch_taken_0x2784b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2784b4) {
            ctx->pc = 0x2784E8u;
            goto label_2784e8;
        }
    }
    ctx->pc = 0x2784BCu;
    // 0x2784bc: 0xa09d80b1  sb          $sp, -0x7F4F($a0)
    ctx->pc = 0x2784bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294934705), (uint8_t)GPR_U32(ctx, 29));
    // 0x2784c0: 0x873cca9b  lh          $gp, -0x3565($t9)
    ctx->pc = 0x2784c0u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294953627)));
    // 0x2784c4: 0x2483b578  addiu       $v1, $a0, -0x4A88
    ctx->pc = 0x2784c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948216));
    // 0x2784c8: 0x84b5dc4b  lh          $s5, -0x23B5($a1)
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294958155)));
    // 0x2784cc: 0x3447020  add         $t6, $k0, $a0
    ctx->pc = 0x2784ccu;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2784d0: 0x255ee508  addiu       $fp, $t2, -0x1AF8
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), 4294960392));
    // 0x2784d4: 0x0  nop
    ctx->pc = 0x2784d4u;
    // NOP
    // 0x2784d8: 0xe502e191  swc1        $f2, -0x1E6F($t0)
    ctx->pc = 0x2784d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294959505), bits); }
    // 0x2784dc: 0x98081820  lwr         $t0, 0x1820($zero)
    ctx->pc = 0x2784dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6176); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2784e0: 0xe502e18d  swc1        $f2, -0x1E73($t0)
    ctx->pc = 0x2784e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294959501), bits); }
    // 0x2784e4: 0x0  nop
    ctx->pc = 0x2784e4u;
    // NOP
label_2784e8:
    // 0x2784e8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2784e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2784ec: 0xb98b2694  swr         $t3, 0x2694($t4)
    ctx->pc = 0x2784ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 9876); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2784f0: 0xfd90dc56  sd          $s0, -0x23AA($t4)
    ctx->pc = 0x2784f0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 4294958166), GPR_U64(ctx, 16));
    // 0x2784f4: 0x24a53400  addiu       $a1, $a1, 0x3400
    ctx->pc = 0x2784f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13312));
    // 0x2784f8: 0xc09de72  jal         func_2779C8
    ctx->pc = 0x2784F8u;
    SET_GPR_U32(ctx, 31, 0x278500u);
    ctx->pc = 0x2784FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784F8u;
            // 0x2784fc: 0x5d4f2354  .word       0x5D4F2354                   # bgtzl       $t2, . + 4 + (0x2354 << 2) # 000F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2784FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2779C8u;
    if (runtime->hasFunction(0x2779C8u)) {
        auto targetFn = runtime->lookupFunction(0x2779C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278500u; }
        if (ctx->pc != 0x278500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002779C8_0x2779c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278500u; }
        if (ctx->pc != 0x278500u) { return; }
    }
    ctx->pc = 0x278500u;
label_278500:
    // 0x278500: 0x59df22d4  .word       0x59DF22D4                   # blezl       $t6, . + 4 + (0x22D4 << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278500u;
    {
        const bool branch_taken_0x278500 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x278500) {
            ctx->pc = 0x278504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278500u;
            // 0x278504: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x278504 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x281054u;
            return;
        }
    }
    ctx->pc = 0x278508u;
    // 0x278508: 0x0  nop
    ctx->pc = 0x278508u;
    // NOP
    // 0x27850c: 0x254d2618  addiu       $t5, $t2, 0x2618
    ctx->pc = 0x27850cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 9752));
    // 0x278510: 0x8e4c0cf5  lw          $t4, 0xCF5($s2)
    ctx->pc = 0x278510u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3317)));
    // 0x278514: 0x2631a638  addiu       $s1, $s1, -0x59C8
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944312));
    // 0x278518: 0x8eccd3a5  lw          $t4, -0x2C5B($s6)
    ctx->pc = 0x278518u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955941)));
    // 0x27851c: 0x1857020  add         $t6, $t4, $a1
    ctx->pc = 0x27851cu;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x278520: 0xdf4f5ab7  ld          $t7, 0x5AB7($k0)
    ctx->pc = 0x278520u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 26), 23223)));
    // 0x278524: 0xe5191e20  swc1        $f25, 0x1E20($t0)
    ctx->pc = 0x278524u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 7712), bits); }
    // 0x278528: 0x98081821  lwr         $t0, 0x1821($zero)
    ctx->pc = 0x278528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6177); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x27852c: 0xe5191e3c  swc1        $f25, 0x1E3C($t0)
    ctx->pc = 0x27852cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 7740), bits); }
    // 0x278530: 0x0  nop
    ctx->pc = 0x278530u;
    // NOP
label_278534:
    // 0x278534: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278538: 0x24428524  addiu       $v0, $v0, -0x7ADC
    ctx->pc = 0x278538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935844));
    // 0x27853c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27853cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278540: 0x24848504  addiu       $a0, $a0, -0x7AFC
    ctx->pc = 0x278540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935812));
    // 0x278544: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278548: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x278548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27854c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27854Cu;
    SET_GPR_U32(ctx, 31, 0x278554u);
    ctx->pc = 0x278550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27854Cu;
            // 0x278550: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278554u; }
        if (ctx->pc != 0x278554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278554u; }
        if (ctx->pc != 0x278554u) { return; }
    }
    ctx->pc = 0x278554u;
label_278554:
    // 0x278554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x278554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278558: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x278558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27855c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27855cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278560: 0x3e00008  jr          $ra
    ctx->pc = 0x278560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278560u;
            // 0x278564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278568u;
    ctx->pc = 0x278568u;
}
