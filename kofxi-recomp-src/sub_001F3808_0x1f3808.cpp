#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3808
// Address: 0x1f3808 - 0x1f3b10
void sub_001F3808_0x1f3808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3808_0x1f3808");
#endif

    switch (ctx->pc) {
        case 0x1f3858u: goto label_1f3858;
        case 0x1f3890u: goto label_1f3890;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f3964u: goto label_1f3964;
        default: break;
    }

    ctx->pc = 0x1f3808u;

    // 0x1f3808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f380c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f3810: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f3810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3814: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f3818: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f3818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f381c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f3820: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f3820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3824: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f3824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f3828: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f3828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f382c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f3830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f3838: 0x8e702018  lw          $s0, 0x2018($s3)
    ctx->pc = 0x1f3838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8216)));
    // 0x1f383c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1f383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1f3840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3840u;
    {
        const bool branch_taken_0x1f3840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3840u;
            // 0x1f3844: 0x26750950  addiu       $s5, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3840) {
            ctx->pc = 0x1F3850u;
            goto label_1f3850;
        }
    }
    ctx->pc = 0x1F3848u;
    // 0x1f3848: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3848u;
    {
        const bool branch_taken_0x1f3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3848u;
            // 0x1f384c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3848) {
            ctx->pc = 0x1F3870u;
            goto label_1f3870;
        }
    }
    ctx->pc = 0x1F3850u;
label_1f3850:
    // 0x1f3850: 0xc07d4d0  jal         func_1F5340
    ctx->pc = 0x1F3850u;
    SET_GPR_U32(ctx, 31, 0x1F3858u);
    ctx->pc = 0x1F5340u;
    if (runtime->hasFunction(0x1F5340u)) {
        auto targetFn = runtime->lookupFunction(0x1F5340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3858u; }
        if (ctx->pc != 0x1F3858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5340_0x1f5340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3858u; }
        if (ctx->pc != 0x1F3858u) { return; }
    }
    ctx->pc = 0x1F3858u;
label_1f3858:
    // 0x1f3858: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3858u;
    {
        const bool branch_taken_0x1f3858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3858u;
            // 0x1f385c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3858) {
            ctx->pc = 0x1F3870u;
            goto label_1f3870;
        }
    }
    ctx->pc = 0x1F3860u;
    // 0x1f3860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3868: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1F3868u;
    {
        const bool branch_taken_0x1f3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3868u;
            // 0x1f386c: 0xaea3002c  sw          $v1, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3868) {
            ctx->pc = 0x1F3AECu;
            goto label_1f3aec;
        }
    }
    ctx->pc = 0x1F3870u;
label_1f3870:
    // 0x1f3870: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1f3870u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f3874: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1f3874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3878: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x1f387c: 0x2441025  or          $v0, $s2, $a0
    ctx->pc = 0x1f387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1f3880: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f3884: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F3884u;
    {
        const bool branch_taken_0x1f3884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3884u;
            // 0x1f3888: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3884) {
            ctx->pc = 0x1F38F0u;
            goto label_1f38f0;
        }
    }
    ctx->pc = 0x1F388Cu;
    // 0x1f388c: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1f388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1f3890:
    // 0x1f3890: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1f3890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f3894: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1f3894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3898: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1f3898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f389c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1f389cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f38a0: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1f38a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f38a4: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1f38a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f38a8: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x1f38a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f38ac: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x1f38acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f38b0: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1f38b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38b4: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1f38b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38b8: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1f38b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38bc: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1f38bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38c0: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f38c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38c4: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f38c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38c8: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1f38c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38cc: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1f38ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f38d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f38d4: 0x0  nop
    ctx->pc = 0x1f38d4u;
    // NOP
    // 0x1f38d8: 0x0  nop
    ctx->pc = 0x1f38d8u;
    // NOP
    // 0x1f38dc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F38DCu;
    {
        const bool branch_taken_0x1f38dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F38E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38DCu;
            // 0x1f38e0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38dc) {
            ctx->pc = 0x1F3890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3890;
        }
    }
    ctx->pc = 0x1F38E4u;
    // 0x1f38e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F38E4u;
    {
        const bool branch_taken_0x1f38e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F38E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38E4u;
            // 0x1f38e8: 0xde021120  ld          $v0, 0x1120($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38e4) {
            ctx->pc = 0x1F392Cu;
            goto label_1f392c;
        }
    }
    ctx->pc = 0x1F38ECu;
    // 0x1f38ec: 0x0  nop
    ctx->pc = 0x1f38ecu;
    // NOP
label_1f38f0:
    // 0x1f38f0: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1f38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1f38f4:
    // 0x1f38f4: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1f38f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f38f8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1f38f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f38fc: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1f38fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f3900: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1f3900u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f3904: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1f3904u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1f3908: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1f3908u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1f390c: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1f390cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1f3910: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1f3910u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1f3914: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f3918: 0x0  nop
    ctx->pc = 0x1f3918u;
    // NOP
    // 0x1f391c: 0x0  nop
    ctx->pc = 0x1f391cu;
    // NOP
    // 0x1f3920: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F3920u;
    {
        const bool branch_taken_0x1f3920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3920u;
            // 0x1f3924: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3920) {
            ctx->pc = 0x1F38F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f38f4;
        }
    }
    ctx->pc = 0x1F3928u;
    // 0x1f3928: 0xde021120  ld          $v0, 0x1120($s0)
    ctx->pc = 0x1f3928u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
label_1f392c:
    // 0x1f392c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3930: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1f3934: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F3934u;
    {
        const bool branch_taken_0x1f3934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3934u;
            // 0x1f3938: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3934) {
            ctx->pc = 0x1F3A40u;
            goto label_1f3a40;
        }
    }
    ctx->pc = 0x1F393Cu;
    // 0x1f393c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1f393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1f3940: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3944: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f3944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f3948: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3948u;
    {
        const bool branch_taken_0x1f3948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3948) {
            ctx->pc = 0x1F394Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3948u;
            // 0x1f394c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F397Cu;
            goto label_1f397c;
        }
    }
    ctx->pc = 0x1F3950u;
    // 0x1f3950: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1f3950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1f3954: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3954u;
    {
        const bool branch_taken_0x1f3954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3954) {
            ctx->pc = 0x1F3958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3954u;
            // 0x1f3958: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F397Cu;
            goto label_1f397c;
        }
    }
    ctx->pc = 0x1F395Cu;
    // 0x1f395c: 0xc07d50e  jal         func_1F5438
    ctx->pc = 0x1F395Cu;
    SET_GPR_U32(ctx, 31, 0x1F3964u);
    ctx->pc = 0x1F3960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F395Cu;
            // 0x1f3960: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5438u;
    if (runtime->hasFunction(0x1F5438u)) {
        auto targetFn = runtime->lookupFunction(0x1F5438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3964u; }
        if (ctx->pc != 0x1F3964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5438_0x1f5438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3964u; }
        if (ctx->pc != 0x1F3964u) { return; }
    }
    ctx->pc = 0x1F3964u;
label_1f3964:
    // 0x1f3964: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1f3968: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1f3968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1f396c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f396cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f3970: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x1f3970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 3));
    // 0x1f3974: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1f3974u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f3978: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f3978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f397c:
    // 0x1f397c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f3980: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1f3980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1f3984: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x1f3984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1f3988: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f3988u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f398c: 0x2505000f  addiu       $a1, $t0, 0xF
    ctx->pc = 0x1f398cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x1f3990: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f3990u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f3994: 0x28a90000  slti        $t1, $a1, 0x0
    ctx->pc = 0x1f3994u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f3998: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1f3998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1f399c: 0x2508001e  addiu       $t0, $t0, 0x1E
    ctx->pc = 0x1f399cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30));
    // 0x1f39a0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f39a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f39a8: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x1f39a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x1f39ac: 0x2484007e  addiu       $a0, $a0, 0x7E
    ctx->pc = 0x1f39acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x1f39b0: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1f39b4: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x1f39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x1f39b8: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x1f39b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f39bc: 0x109280b  movn        $a1, $t0, $t1
    ctx->pc = 0x1f39bcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x1f39c0: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x1f39c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1f39c4: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1f39c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f39c8: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1f39c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1f39cc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x1f39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1f39d0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1f39d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x1f39d4: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1f39d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1f39d8: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x1f39d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f39dc: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1f39dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1f39e0: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x1f39e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x1f39e4: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x1f39e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1f39e8: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1f39e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f39ec: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1f39f0: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x1f39f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f39f4: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x1f39f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f39f8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1f39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1f39fc: 0xa627001e  sh          $a3, 0x1E($s1)
    ctx->pc = 0x1f39fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x1f3a00: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x1f3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f3a04: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f3a08: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1f3a0c: 0xa626001c  sh          $a2, 0x1C($s1)
    ctx->pc = 0x1f3a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f3a10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1f3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f3a14: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1f3a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f3a18: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1f3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1f3a1c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1f3a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1f3a20: 0xa627000e  sh          $a3, 0xE($s1)
    ctx->pc = 0x1f3a20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1f3a24: 0xa626000c  sh          $a2, 0xC($s1)
    ctx->pc = 0x1f3a24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f3a28: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x1f3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x1f3a2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f3a30: 0xae290018  sw          $t1, 0x18($s1)
    ctx->pc = 0x1f3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 9));
    // 0x1f3a34: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F3A34u;
    {
        const bool branch_taken_0x1f3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A34u;
            // 0x1f3a38: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a34) {
            ctx->pc = 0x1F3ACCu;
            goto label_1f3acc;
        }
    }
    ctx->pc = 0x1F3A3Cu;
    // 0x1f3a3c: 0x0  nop
    ctx->pc = 0x1f3a3cu;
    // NOP
label_1f3a40:
    // 0x1f3a40: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1f3a44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3a48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f3a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f3a4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3A4Cu;
    {
        const bool branch_taken_0x1f3a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A4Cu;
            // 0x1f3a50: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a4c) {
            ctx->pc = 0x1F3A74u;
            goto label_1f3a74;
        }
    }
    ctx->pc = 0x1F3A54u;
    // 0x1f3a54: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x1f3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1f3a58: 0xae050164  sw          $a1, 0x164($s0)
    ctx->pc = 0x1f3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 5));
    // 0x1f3a5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f3a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f3a60: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1f3a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f3a64: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x1f3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x1f3a68: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x1f3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
    // 0x1f3a6c: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1f3a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f3a70: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_1f3a74:
    // 0x1f3a74: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1f3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1f3a78: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x1f3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1f3a7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f3a80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3a84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f3a88: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1f3a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f3a8c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1f3a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f3a90: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1f3a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f3a94: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1f3a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3a98: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x1f3a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3a9c: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x1f3a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3aa0: 0xb226000f  sdl         $a2, 0xF($s1)
    ctx->pc = 0x1f3aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3aa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3aa8: 0xb6260008  sdr         $a2, 0x8($s1)
    ctx->pc = 0x1f3aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3aac: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x1f3aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f3ab0: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x1f3ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f3ab4: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x1f3ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3ab8: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x1f3ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3abc: 0xb2290017  sdl         $t1, 0x17($s1)
    ctx->pc = 0x1f3abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3ac0: 0xb6290010  sdr         $t1, 0x10($s1)
    ctx->pc = 0x1f3ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3ac4: 0xb222001f  sdl         $v0, 0x1F($s1)
    ctx->pc = 0x1f3ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3ac8: 0xb6220018  sdr         $v0, 0x18($s1)
    ctx->pc = 0x1f3ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f3acc:
    // 0x1f3acc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1f3ad0: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x1f3ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x1f3ad4: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1f3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1f3ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3adc: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1f3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1f3ae0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1f3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1f3ae4: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x1f3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x1f3ae8: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x1f3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_1f3aec:
    // 0x1f3aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3af4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3af8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f3af8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3afc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f3afcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3b00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f3b00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3b04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B08u;
            // 0x1f3b0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3B10u;
    ctx->pc = 0x1f3b10u;
}
