#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1468
// Address: 0x2e1468 - 0x2e1618
void sub_002E1468_0x2e1468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1468_0x2e1468");
#endif

    switch (ctx->pc) {
        case 0x2e1470u: goto label_2e1470;
        case 0x2e14b4u: goto label_2e14b4;
        case 0x2e14c8u: goto label_2e14c8;
        case 0x2e14d4u: goto label_2e14d4;
        case 0x2e14f4u: goto label_2e14f4;
        case 0x2e1524u: goto label_2e1524;
        case 0x2e152cu: goto label_2e152c;
        case 0x2e1550u: goto label_2e1550;
        case 0x2e1594u: goto label_2e1594;
        case 0x2e15b0u: goto label_2e15b0;
        case 0x2e15c4u: goto label_2e15c4;
        case 0x2e15e0u: goto label_2e15e0;
        case 0x2e15e8u: goto label_2e15e8;
        case 0x2e1610u: goto label_2e1610;
        default: break;
    }

    ctx->pc = 0x2e1468u;

    // 0x2e1468: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e1468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e146c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e1470:
    // 0x2e1470: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e1470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2e1474: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2e1474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1478: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e1478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e147c: 0x3c12002d  lui         $s2, 0x2D
    ctx->pc = 0x2e147cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
    // 0x2e1480: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e1480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2e1484: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e1484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1488: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e1488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e148c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e148cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1490: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2e1490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2e1494: 0x3c15002d  lui         $s5, 0x2D
    ctx->pc = 0x2e1494u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)45 << 16));
    // 0x2e1498: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e149c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2e149cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e14a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e14a4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2e14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2e14a8: 0x2449f188  addiu       $t1, $v0, -0xE78
    ctx->pc = 0x2e14a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
    // 0x2e14ac: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x2e14acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e14b0: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x2e14b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2e14b4:
    // 0x2e14b4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2e14b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e14b8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2e14b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e14bc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2e14bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2e14c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E14C0u;
    {
        const bool branch_taken_0x2e14c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14C0u;
            // 0x2e14c4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14c0) {
            ctx->pc = 0x2E1570u;
            goto label_2e1570;
        }
    }
    ctx->pc = 0x2E14C8u;
label_2e14c8:
    // 0x2e14c8: 0x26a56ef8  addiu       $a1, $s5, 0x6EF8
    ctx->pc = 0x2e14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28408));
    // 0x2e14cc: 0xc0b597c  jal         func_2D65F0
    ctx->pc = 0x2E14CCu;
    SET_GPR_U32(ctx, 31, 0x2E14D4u);
    ctx->pc = 0x2E14D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14CCu;
            // 0x2e14d0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F0u;
    if (runtime->hasFunction(0x2D65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14D4u; }
        if (ctx->pc != 0x2E14D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D65F0_0x2d65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14D4u; }
        if (ctx->pc != 0x2E14D4u) { return; }
    }
    ctx->pc = 0x2E14D4u;
label_2e14d4:
    // 0x2e14d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e14d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14d8: 0x1600003e  bnez        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E14D8u;
    {
        const bool branch_taken_0x2e14d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E14DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14D8u;
            // 0x2e14dc: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14d8) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E14E0u;
    // 0x2e14e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e14e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e14e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14e8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2e14e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e14ec: 0xc0b55d6  jal         func_2D5758
    ctx->pc = 0x2E14ECu;
    SET_GPR_U32(ctx, 31, 0x2E14F4u);
    ctx->pc = 0x2E14F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14ECu;
            // 0x2e14f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5758u;
    if (runtime->hasFunction(0x2D5758u)) {
        auto targetFn = runtime->lookupFunction(0x2D5758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14F4u; }
        if (ctx->pc != 0x2E14F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5758_0x2d5758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14F4u; }
        if (ctx->pc != 0x2E14F4u) { return; }
    }
    ctx->pc = 0x2E14F4u;
label_2e14f4:
    // 0x2e14f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e14f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14f8: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E14F8u;
    {
        const bool branch_taken_0x2e14f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E14FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14F8u;
            // 0x2e14fc: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14f8) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E1500u;
    // 0x2e1500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e1500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1504: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e1504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1508: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e1508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e150c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e1510: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e1510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1514: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2e1514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e1518: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e1518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e151c: 0xc0b55fa  jal         func_2D57E8
    ctx->pc = 0x2E151Cu;
    SET_GPR_U32(ctx, 31, 0x2E1524u);
    ctx->pc = 0x2E1520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E151Cu;
            // 0x2e1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D57E8u;
    if (runtime->hasFunction(0x2D57E8u)) {
        auto targetFn = runtime->lookupFunction(0x2D57E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1524u; }
        if (ctx->pc != 0x2E1524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D57E8_0x2d57e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1524u; }
        if (ctx->pc != 0x2E1524u) { return; }
    }
    ctx->pc = 0x2E1524u;
label_2e1524:
    // 0x2e1524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1528: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_2e152c:
    if (ctx->pc == 0x2E152Cu) {
        ctx->pc = 0x2E152Cu;
            // 0x2e152c: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x2E1530u;
        goto label_fallthrough_0x2e1528;
    }
    ctx->pc = 0x2E1528u;
    {
        const bool branch_taken_0x2e1528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1528u;
            // 0x2e152c: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1528) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
label_fallthrough_0x2e1528:
    ctx->pc = 0x2E1530u;
    // 0x2e1530: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e1530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1534: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2e1534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2e1538: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e1538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e153c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e153cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1540: 0x2253823  subu        $a3, $s1, $a1
    ctx->pc = 0x2e1540u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2e1544: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2e1544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2e1548: 0xc0b5632  jal         func_2D58C8
    ctx->pc = 0x2E1548u;
    SET_GPR_U32(ctx, 31, 0x2E1550u);
    ctx->pc = 0x2E154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1548u;
            // 0x2e154c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D58C8u;
    if (runtime->hasFunction(0x2D58C8u)) {
        auto targetFn = runtime->lookupFunction(0x2D58C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1550u; }
        if (ctx->pc != 0x2E1550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D58C8_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1550u; }
        if (ctx->pc != 0x2E1550u) { return; }
    }
    ctx->pc = 0x2E1550u;
label_2e1550:
    // 0x2e1550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1554: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E1554u;
    {
        const bool branch_taken_0x2e1554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1554u;
            // 0x2e1558: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1554) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E155Cu;
    // 0x2e155c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1560: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e1564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1568: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E1568u;
    {
        const bool branch_taken_0x2e1568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1568u;
            // 0x2e156c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1568) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E1570u;
label_2e1570:
    // 0x2e1570: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e1570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e1574: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E1574u;
    {
        const bool branch_taken_0x2e1574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E1578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1574u;
            // 0x2e1578: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1574) {
            ctx->pc = 0x2E15D0u;
            goto label_2e15d0;
        }
    }
    ctx->pc = 0x2E157Cu;
    // 0x2e157c: 0x2e220080  sltiu       $v0, $s1, 0x80
    ctx->pc = 0x2e157cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e1580: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E1580u;
    {
        const bool branch_taken_0x2e1580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1580u;
            // 0x2e1584: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1580) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E1588u;
    // 0x2e1588: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2e1588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x2e158c: 0xc0b226a  jal         func_2C89A8
    ctx->pc = 0x2E158Cu;
    SET_GPR_U32(ctx, 31, 0x2E1594u);
    ctx->pc = 0x2E1590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E158Cu;
            // 0x2e1590: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C89A8u;
    if (runtime->hasFunction(0x2C89A8u)) {
        auto targetFn = runtime->lookupFunction(0x2C89A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1594u; }
        if (ctx->pc != 0x2E1594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C89A8_0x2c89a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1594u; }
        if (ctx->pc != 0x2E1594u) { return; }
    }
    ctx->pc = 0x2E1594u;
label_2e1594:
    // 0x2e1594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1598: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1598u;
    {
        const bool branch_taken_0x2e1598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1598u;
            // 0x2e159c: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1598) {
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E15A0u;
    // 0x2e15a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e15a4: 0x26458540  addiu       $a1, $s2, -0x7AC0
    ctx->pc = 0x2e15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935872));
    // 0x2e15a8: 0xc0b22b6  jal         func_2C8AD8
    ctx->pc = 0x2E15A8u;
    SET_GPR_U32(ctx, 31, 0x2E15B0u);
    ctx->pc = 0x2E15ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15A8u;
            // 0x2e15ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AD8u;
    if (runtime->hasFunction(0x2C8AD8u)) {
        auto targetFn = runtime->lookupFunction(0x2C8AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15B0u; }
        if (ctx->pc != 0x2E15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8AD8_0x2c8ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15B0u; }
        if (ctx->pc != 0x2E15B0u) { return; }
    }
    ctx->pc = 0x2E15B0u;
label_2e15b0:
    // 0x2e15b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e15b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15b4: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E15B4u;
    {
        const bool branch_taken_0x2e15b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e15b4) {
            ctx->pc = 0x2E15B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15B4u;
            // 0x2e15b8: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E15D4u;
            goto label_2e15d4;
        }
    }
    ctx->pc = 0x2E15BCu;
    // 0x2e15bc: 0xc0b5940  jal         func_2D6500
    ctx->pc = 0x2E15BCu;
    SET_GPR_U32(ctx, 31, 0x2E15C4u);
    ctx->pc = 0x2E15C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15BCu;
            // 0x2e15c0: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6500u;
    if (runtime->hasFunction(0x2D6500u)) {
        auto targetFn = runtime->lookupFunction(0x2D6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15C4u; }
        if (ctx->pc != 0x2E15C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6500_0x2d6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15C4u; }
        if (ctx->pc != 0x2E15C4u) { return; }
    }
    ctx->pc = 0x2E15C4u;
label_2e15c4:
    // 0x2e15c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e15c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15c8: 0x1200ffbf  beqz        $s0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2E15C8u;
    {
        const bool branch_taken_0x2e15c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E15CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15C8u;
            // 0x2e15cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15c8) {
            ctx->pc = 0x2E14C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e14c8;
        }
    }
    ctx->pc = 0x2E15D0u;
label_2e15d0:
    // 0x2e15d0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2e15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2e15d4:
    // 0x2e15d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e15d8: 0xc0b22a2  jal         func_2C8A88
    ctx->pc = 0x2E15D8u;
    SET_GPR_U32(ctx, 31, 0x2E15E0u);
    ctx->pc = 0x2E15DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15D8u;
            // 0x2e15dc: 0x50800b  movn        $s0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A88u;
    if (runtime->hasFunction(0x2C8A88u)) {
        auto targetFn = runtime->lookupFunction(0x2C8A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15E0u; }
        if (ctx->pc != 0x2E15E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8A88_0x2c8a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15E0u; }
        if (ctx->pc != 0x2E15E0u) { return; }
    }
    ctx->pc = 0x2E15E0u;
label_2e15e0:
    // 0x2e15e0: 0xc0b5962  jal         func_2D6588
    ctx->pc = 0x2E15E0u;
    SET_GPR_U32(ctx, 31, 0x2E15E8u);
    ctx->pc = 0x2E15E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15E0u;
            // 0x2e15e4: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6588u;
    if (runtime->hasFunction(0x2D6588u)) {
        auto targetFn = runtime->lookupFunction(0x2D6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15E8u; }
        if (ctx->pc != 0x2E15E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6588_0x2d6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15E8u; }
        if (ctx->pc != 0x2E15E8u) { return; }
    }
    ctx->pc = 0x2E15E8u;
label_2e15e8:
    // 0x2e15e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e15e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15ec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e15ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e15f0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e15f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e15f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e15f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e15f8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e15f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e15fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e15fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1600: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2e1600u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e1604: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e1604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1608: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2e1608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e160c: 0x3e00008  jr          $ra
label_2e1610:
    if (ctx->pc == 0x2E1610u) {
        ctx->pc = 0x2E1610u;
            // 0x2e1610: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2E1614u;
        goto label_fallthrough_0x2e160c;
    }
    ctx->pc = 0x2E160Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E160Cu;
            // 0x2e1610: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e160c:
    ctx->pc = 0x2E1614u;
    // 0x2e1614: 0x0  nop
    ctx->pc = 0x2e1614u;
    // NOP
    ctx->pc = 0x2e1618u;
}
