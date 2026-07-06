#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB380
// Address: 0x2db380 - 0x2db468
void sub_002DB380_0x2db380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB380_0x2db380");
#endif

    switch (ctx->pc) {
        case 0x2db3b8u: goto label_2db3b8;
        case 0x2db3d8u: goto label_2db3d8;
        case 0x2db3dcu: goto label_2db3dc;
        case 0x2db424u: goto label_2db424;
        case 0x2db454u: goto label_2db454;
        default: break;
    }

    ctx->pc = 0x2db380u;

    // 0x2db380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db388: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2db388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2db38c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db390: 0x2463b3d8  addiu       $v1, $v1, -0x4C28
    ctx->pc = 0x2db390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947800));
    // 0x2db394: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db398: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB398u;
    {
        const bool branch_taken_0x2db398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db398) {
            ctx->pc = 0x2DB3B8u;
            goto label_2db3b8;
        }
    }
    ctx->pc = 0x2DB3A0u;
    // 0x2db3a0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db3a4: 0x2484b3ec  addiu       $a0, $a0, -0x4C14
    ctx->pc = 0x2db3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947820));
    // 0x2db3a8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db3ac: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db3b0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB3B0u;
    SET_GPR_U32(ctx, 31, 0x2DB3B8u);
    ctx->pc = 0x2DB3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3B0u;
            // 0x2db3b4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3B8u; }
        if (ctx->pc != 0x2DB3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3B8u; }
        if (ctx->pc != 0x2DB3B8u) { return; }
    }
    ctx->pc = 0x2DB3B8u;
label_2db3b8:
    // 0x2db3b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB3B8u;
    {
        const bool branch_taken_0x2db3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db3b8) {
            ctx->pc = 0x2DB3ECu;
            goto label_2db3ec;
        }
    }
    ctx->pc = 0x2DB3C0u;
    // 0x2db3c0: 0x87d22b03  lh          $s2, 0x2B03($fp)
    ctx->pc = 0x2db3c0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 11011)));
    // 0x2db3c4: 0xad7020  add         $t6, $a1, $t5
    ctx->pc = 0x2db3c4u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2db3c8: 0xfebccad2  sd          $gp, -0x352E($s5)
    ctx->pc = 0x2db3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294953682), GPR_U64(ctx, 28));
    // 0x2db3cc: 0xa2544621  sb          $s4, 0x4621($s2)
    ctx->pc = 0x2db3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17953), (uint8_t)GPR_U32(ctx, 20));
    // 0x2db3d0: 0xc7ec70e  jal         func_1FB1C38
    ctx->pc = 0x2DB3D0u;
    SET_GPR_U32(ctx, 31, 0x2DB3D8u);
    ctx->pc = 0x2DB3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3D0u;
            // 0x2db3d4: 0xc7cde5b  jal         func_1F3796C (Delay Slot)
        // JAL 0x1F3796C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB1C38u;
    {
        auto targetFn = runtime->lookupFunction(0x1FB1C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3D8u; }
        if (ctx->pc != 0x2DB3D8u) { return; }
    }
    ctx->pc = 0x2DB3D8u;
label_2db3d8:
    // 0x2db3d8: 0x0  nop
    ctx->pc = 0x2db3d8u;
    // NOP
label_2db3dc:
    // 0x2db3dc: 0xb9569937  swr         $s6, -0x66C9($t2)
    ctx->pc = 0x2db3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294940983); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2db3e0: 0xc712e314  lwc1        $f18, -0x1CEC($t8)
    ctx->pc = 0x2db3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db3e4: 0xb956992f  swr         $s6, -0x66D1($t2)
    ctx->pc = 0x2db3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294940975); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2db3e8: 0x0  nop
    ctx->pc = 0x2db3e8u;
    // NOP
label_2db3ec:
    // 0x2db3ec: 0x2e821cbf  sltiu       $v0, $s4, 0x1CBF
    ctx->pc = 0x2db3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7359) ? 1 : 0);
    // 0x2db3f0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2db3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2db3f4: 0xb1bdfcbd  sdl         $sp, -0x343($t5)
    ctx->pc = 0x2db3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294966461); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 29); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db3f8: 0x8c6298b0  lw          $v0, -0x6750($v1)
    ctx->pc = 0x2db3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940848)));
    // 0x2db3fc: 0xb55ff835  sdr         $ra, -0x7CB($t2)
    ctx->pc = 0x2db3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294965301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 31); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db400: 0x70cdf82d  .word       0x70CDF82D                   # INVALID     $a2, $t5, -0x7D3 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2db400u;
    // Unhandled MMI instruction: function 0x2D
    // 0x2db404: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB404u;
    {
        const bool branch_taken_0x2db404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db404) {
            ctx->pc = 0x2DB434u;
            goto label_2db434;
        }
    }
    ctx->pc = 0x2DB40Cu;
    // 0x2db40c: 0x8e11a6d5  lw          $s1, -0x592B($s0)
    ctx->pc = 0x2db40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944469)));
    // 0x2db410: 0x472820  add         $a1, $v0, $a3
    ctx->pc = 0x2db410u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x2db414: 0x84a9222b  lh          $t1, 0x222B($a1)
    ctx->pc = 0x2db414u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8747)));
    // 0x2db418: 0x86021a8b  lh          $v0, 0x1A8B($s0)
    ctx->pc = 0x2db418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6795)));
    // 0x2db41c: 0xc5de561  jal         func_1779584
    ctx->pc = 0x2DB41Cu;
    SET_GPR_U32(ctx, 31, 0x2DB424u);
    ctx->pc = 0x2DB420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB41Cu;
            // 0x2db420: 0xffd5f542  sd          $s5, -0xABE($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 4294964546), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1779584u;
    {
        auto targetFn = runtime->lookupFunction(0x1779584u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB424u; }
        if (ctx->pc != 0x2DB424u) { return; }
    }
    ctx->pc = 0x2DB424u;
label_2db424:
    // 0x2db424: 0xb9569739  swr         $s6, -0x68C7($t2)
    ctx->pc = 0x2db424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294940473); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2db428: 0xc712e315  lwc1        $f18, -0x1CEB($t8)
    ctx->pc = 0x2db428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959893)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db42c: 0xb9569721  swr         $s6, -0x68DF($t2)
    ctx->pc = 0x2db42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294940449); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2db430: 0x0  nop
    ctx->pc = 0x2db430u;
    // NOP
label_2db434:
    // 0x2db434: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db438: 0x2442b424  addiu       $v0, $v0, -0x4BDC
    ctx->pc = 0x2db438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947876));
    // 0x2db43c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db440: 0x2484b404  addiu       $a0, $a0, -0x4BFC
    ctx->pc = 0x2db440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947844));
    // 0x2db444: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db448: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db44c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB44Cu;
    SET_GPR_U32(ctx, 31, 0x2DB454u);
    ctx->pc = 0x2DB450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB44Cu;
            // 0x2db450: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB454u; }
        if (ctx->pc != 0x2DB454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB454u; }
        if (ctx->pc != 0x2DB454u) { return; }
    }
    ctx->pc = 0x2DB454u;
label_2db454:
    // 0x2db454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2db458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db460: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB460u;
            // 0x2db464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB468u;
    ctx->pc = 0x2db468u;
}
