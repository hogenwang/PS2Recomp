#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002744F8
// Address: 0x2744f8 - 0x2745f8
void sub_002744F8_0x2744f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002744F8_0x2744f8");
#endif

    switch (ctx->pc) {
        case 0x274534u: goto label_274534;
        case 0x274584u: goto label_274584;
        case 0x2745b8u: goto label_2745b8;
        case 0x2745e4u: goto label_2745e4;
        default: break;
    }

    ctx->pc = 0x2744f8u;

    // 0x2744f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2744fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2744fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274504: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274508: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27450c: 0x24634554  addiu       $v1, $v1, 0x4554
    ctx->pc = 0x27450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17748));
    // 0x274510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274514: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274514u;
    {
        const bool branch_taken_0x274514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274514) {
            ctx->pc = 0x274534u;
            goto label_274534;
        }
    }
    ctx->pc = 0x27451Cu;
    // 0x27451c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27451cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274520: 0x24844568  addiu       $a0, $a0, 0x4568
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17768));
    // 0x274524: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274528: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27452c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27452Cu;
    SET_GPR_U32(ctx, 31, 0x274534u);
    ctx->pc = 0x274530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27452Cu;
            // 0x274530: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274534u; }
        if (ctx->pc != 0x274534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274534u; }
        if (ctx->pc != 0x274534u) { return; }
    }
    ctx->pc = 0x274534u;
label_274534:
    // 0x274534: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274534u;
    {
        const bool branch_taken_0x274534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274534) {
            ctx->pc = 0x274568u;
            goto label_274568;
        }
    }
    ctx->pc = 0x27453Cu;
    // 0x27453c: 0xa3759119  sb          $s5, -0x6EE7($k1)
    ctx->pc = 0x27453cu;
    WRITE8(ADD32(GPR_U32(ctx, 27), 4294938905), (uint8_t)GPR_U32(ctx, 21));
    // 0x274540: 0x857fcdab  lh          $ra, -0x3255($t3)
    ctx->pc = 0x274540u;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294954411)));
    // 0x274544: 0xa3c219f1  sb          $v0, 0x19F1($fp)
    ctx->pc = 0x274544u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 6641), (uint8_t)GPR_U32(ctx, 2));
    // 0x274548: 0xdd8a558f  ld          $t2, 0x558F($t4)
    ctx->pc = 0x274548u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 21903)));
    // 0x27454c: 0x8eb9ae5d  lw          $t9, -0x51A3($s5)
    ctx->pc = 0x27454cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946397)));
    // 0x274550: 0xa1c28391  sb          $v0, -0x7C6F($t6)
    ctx->pc = 0x274550u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294935441), (uint8_t)GPR_U32(ctx, 2));
    // 0x274554: 0x0  nop
    ctx->pc = 0x274554u;
    // NOP
    // 0x274558: 0xb9bc305f  swr         $gp, 0x305F($t5)
    ctx->pc = 0x274558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 12383); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27455c: 0x971e2518  lhu         $fp, 0x2518($t8)
    ctx->pc = 0x27455cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9496)));
    // 0x274560: 0xb9bc3073  swr         $gp, 0x3073($t5)
    ctx->pc = 0x274560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 12403); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x274564: 0x0  nop
    ctx->pc = 0x274564u;
    // NOP
label_274568:
    // 0x274568: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x27456c: 0x244631a4  addiu       $a2, $v0, 0x31A4
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12708));
    // 0x274570: 0x3c730815  .word       0x3C730815                   # lui         $s3, 0x815 # 00600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x274570u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2069 << 16));
    // 0x274574: 0x8873a815  lwl         $s3, -0x57EB($v1)
    ctx->pc = 0x274574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294944789); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x274578: 0xcc732b01  pref        0x13, 0x2B01($v1)
    ctx->pc = 0x274578u;
    // PREF instruction (ignored)
    // 0x27457c: 0xc732001  jal         func_1CC8004
    ctx->pc = 0x27457Cu;
    SET_GPR_U32(ctx, 31, 0x274584u);
    ctx->pc = 0x274580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27457Cu;
            // 0x274580: 0x8a33a919  lwl         $s3, -0x56E7($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294945049); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8004u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC8004u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274584u; }
        if (ctx->pc != 0x274584u) { return; }
    }
    ctx->pc = 0x274584u;
label_274584:
    // 0x274584: 0x8cf3ba81  lw          $s3, -0x457F($a3)
    ctx->pc = 0x274584u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294949505)));
    // 0x274588: 0x88d39a9d  lwl         $s3, -0x6563($a2)
    ctx->pc = 0x274588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294941341); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x27458c: 0x602c5916  daddi       $t4, $at, 0x5916
    ctx->pc = 0x27458cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 1); int64_t imm = (int64_t)(int32_t)22806; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
    // 0x274590: 0x8af3aa19  lwl         $s3, -0x55E7($s7)
    ctx->pc = 0x274590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294945305); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x274594: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274594u;
    {
        const bool branch_taken_0x274594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274594) {
            ctx->pc = 0x2745C4u;
            goto label_2745c4;
        }
    }
    ctx->pc = 0x27459Cu;
    // 0x27459c: 0xfecdd46a  sd          $t5, -0x2B96($s6)
    ctx->pc = 0x27459cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294956138), GPR_U64(ctx, 13));
    // 0x2745a0: 0x8fd18ded  lw          $s1, -0x7213($fp)
    ctx->pc = 0x2745a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294938093)));
    // 0x2745a4: 0xdfc606df  ld          $a2, 0x6DF($fp)
    ctx->pc = 0x2745a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 30), 1759)));
    // 0x2745a8: 0x864f8b5b  lh          $t7, -0x74A5($s2)
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937435)));
    // 0x2745ac: 0x87c24ccb  lh          $v0, 0x4CCB($fp)
    ctx->pc = 0x2745acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 19659)));
    // 0x2745b0: 0x1af8820  add         $s1, $t5, $t7
    ctx->pc = 0x2745b0u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x2745b4: 0xb9bc3f50  swr         $gp, 0x3F50($t5)
    ctx->pc = 0x2745b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16208); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2745b8:
    // 0x2745b8: 0x971e2519  lhu         $fp, 0x2519($t8)
    ctx->pc = 0x2745b8u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9497)));
    // 0x2745bc: 0xb9bc3f7c  swr         $gp, 0x3F7C($t5)
    ctx->pc = 0x2745bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16252); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2745c0: 0x0  nop
    ctx->pc = 0x2745c0u;
    // NOP
label_2745c4:
    // 0x2745c4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2745c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2745c8: 0x244245b4  addiu       $v0, $v0, 0x45B4
    ctx->pc = 0x2745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17844));
    // 0x2745cc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2745ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2745d0: 0x24844594  addiu       $a0, $a0, 0x4594
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17812));
    // 0x2745d4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2745d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2745d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2745d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2745dc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2745DCu;
    SET_GPR_U32(ctx, 31, 0x2745E4u);
    ctx->pc = 0x2745E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2745DCu;
            // 0x2745e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2745E4u; }
        if (ctx->pc != 0x2745E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2745E4u; }
        if (ctx->pc != 0x2745E4u) { return; }
    }
    ctx->pc = 0x2745E4u;
label_2745e4:
    // 0x2745e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2745e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2745e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2745e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2745ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2745ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2745f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2745F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2745F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745F0u;
            // 0x2745f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2745F8u;
    ctx->pc = 0x2745f8u;
}
