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

// Function: sub_002DF870
// Address: 0x2df870 - 0x2dfa00
void sub_002DF870_0x2df870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF870_0x2df870");
#endif

    switch (ctx->pc) {
        case 0x2df8f8u: goto label_2df8f8;
        case 0x2df920u: goto label_2df920;
        case 0x2df948u: goto label_2df948;
        case 0x2df980u: goto label_2df980;
        case 0x2df990u: goto label_2df990;
        case 0x2df9b4u: goto label_2df9b4;
        case 0x2df9c0u: goto label_2df9c0;
        default: break;
    }

    ctx->pc = 0x2df870u;

    // 0x2df870: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2df870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2df874: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2df874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2df878: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2df878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2df87c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2df87cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df880: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2df880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2df884: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2df884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df888: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2df888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2df88c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2df88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df890: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2df890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2df894: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2df894u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df898: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2df898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2df89c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2df89cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2df8a0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2df8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2df8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2df8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8a8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2df8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2df8ac: 0x244df0c0  addiu       $t5, $v0, -0xF40
    ctx->pc = 0x2df8acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x2df8b0: 0x69a90007  ldl         $t1, 0x7($t5)
    ctx->pc = 0x2df8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2df8b4: 0x6da90000  ldr         $t1, 0x0($t5)
    ctx->pc = 0x2df8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2df8b8: 0x8dab0008  lw          $t3, 0x8($t5)
    ctx->pc = 0x2df8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2df8bc: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2df8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df8c0: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2df8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df8c4: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x2df8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x2df8c8: 0x246cf0d0  addiu       $t4, $v1, -0xF30
    ctx->pc = 0x2df8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x2df8cc: 0x69820007  ldl         $v0, 0x7($t4)
    ctx->pc = 0x2df8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2df8d0: 0x6d820000  ldr         $v0, 0x0($t4)
    ctx->pc = 0x2df8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2df8d4: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x2df8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df8d8: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x2df8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df8dc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2df8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8e0: 0x2504f0d8  addiu       $a0, $t0, -0xF28
    ctx->pc = 0x2df8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963416));
    // 0x2df8e4: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x2df8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2df8e8: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x2df8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2df8ec: 0xb28d0007  sdl         $t5, 0x7($s4)
    ctx->pc = 0x2df8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df8f0: 0xb68d0000  sdr         $t5, 0x0($s4)
    ctx->pc = 0x2df8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df8f4: 0x0  nop
    ctx->pc = 0x2df8f4u;
    // NOP
label_2df8f8:
    // 0x2df8f8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2df8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2df8fc: 0x2472021  addu        $a0, $s2, $a3
    ctx->pc = 0x2df8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2df900: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2df900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df904: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2df904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2df908: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x2df908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2df90c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF90Cu;
    {
        const bool branch_taken_0x2df90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF90Cu;
        // 0x2df910: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df90c) {
            ctx->pc = 0x2DF8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df8f8;
        }
    }
    ctx->pc = 0x2DF914u;
    // 0x2df914: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x2df914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2df918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2df918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df91c: 0x0  nop
    ctx->pc = 0x2df91cu;
    // NOP
label_2df920:
    // 0x2df920: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2df924: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2df924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2df928: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2df928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df92c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2df92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2df930: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x2df930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2df934: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF934u;
    {
        const bool branch_taken_0x2df934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF934u;
        // 0x2df938: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df934) {
            ctx->pc = 0x2DF920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df920;
        }
    }
    ctx->pc = 0x2DF93Cu;
    // 0x2df93c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2df93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df944: 0x0  nop
    ctx->pc = 0x2df944u;
    // NOP
label_2df948:
    // 0x2df948: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2df948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2df94c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2df94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2df950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2df950u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2df954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2df958: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2df958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2df95c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF95Cu;
    {
        const bool branch_taken_0x2df95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF95Cu;
        // 0x2df960: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df95c) {
            ctx->pc = 0x2DF948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df948;
        }
    }
    ctx->pc = 0x2DF964u;
    // 0x2df964: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2df964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2df968: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2df968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df96c: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2df96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2df970: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2df970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2df974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df978: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF978u;
    SET_GPR_U32(ctx, 31, 0x2DF980u);
    ctx->pc = 0x2DF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF978u;
    // 0x2df97c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DF978u, 0x2DF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF980u;
label_2df980:
    // 0x2df980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df984: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2df984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df988: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF988u;
    SET_GPR_U32(ctx, 31, 0x2DF990u);
    ctx->pc = 0x2DF98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF988u;
    // 0x2df98c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DF988u, 0x2DF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF990u;
label_2df990:
    // 0x2df990: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2df990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2df994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2df998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df99c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2df99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9a0: 0x25296708  addiu       $t1, $t1, 0x6708
    ctx->pc = 0x2df9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26376));
    // 0x2df9a4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2df9a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2df9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9ac: 0xc0b7d50  jal         func_2DF540
    ctx->pc = 0x2DF9ACu;
    SET_GPR_U32(ctx, 31, 0x2DF9B4u);
    ctx->pc = 0x2DF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF9ACu;
    // 0x2df9b0: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF540u, 0x2DF9ACu, 0x2DF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF9B4u;
label_2df9b4:
    // 0x2df9b4: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2df9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2df9b8: 0x27a30027  addiu       $v1, $sp, 0x27
    ctx->pc = 0x2df9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 39));
    // 0x2df9bc: 0x0  nop
    ctx->pc = 0x2df9bcu;
    // NOP
label_2df9c0:
    // 0x2df9c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2df9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2df9c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2df9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9c8: 0x0  nop
    ctx->pc = 0x2df9c8u;
    // NOP
    // 0x2df9cc: 0x0  nop
    ctx->pc = 0x2df9ccu;
    // NOP
    // 0x2df9d0: 0x0  nop
    ctx->pc = 0x2df9d0u;
    // NOP
    // 0x2df9d4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF9D4u;
    {
        const bool branch_taken_0x2df9d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2DF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9D4u;
        // 0x2df9d8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9d4) {
            ctx->pc = 0x2DF9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df9c0;
        }
    }
    ctx->pc = 0x2DF9DCu;
    // 0x2df9dc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2df9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df9e0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2df9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2df9e4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2df9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2df9e8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2df9e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2df9ec: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2df9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2df9f0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2df9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2df9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9F4u;
        // 0x2df9f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF9FCu;
    // 0x2df9fc: 0x0  nop
    ctx->pc = 0x2df9fcu;
    // NOP
    if (ctx->pc == 0x2df9fcu) { ctx->pc = 0x2dfa00u; }
}
