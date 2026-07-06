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

// Function: sub_001157B0
// Address: 0x1157b0 - 0x1159b8
void sub_001157B0_0x1157b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001157B0_0x1157b0");
#endif

    switch (ctx->pc) {
        case 0x1157e8u: goto label_1157e8;
        case 0x1157f8u: goto label_1157f8;
        case 0x115844u: goto label_115844;
        case 0x1158a8u: goto label_1158a8;
        case 0x115938u: goto label_115938;
        case 0x115974u: goto label_115974;
        default: break;
    }

    ctx->pc = 0x1157b0u;

    // 0x1157b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1157b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1157b4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1157b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1157b8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1157b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1157bc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1157bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1157c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1157c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1157c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1157c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1157cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1157ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157d0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1157d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1157d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1157d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1157d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1157dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1157dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1157e0: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x1157E0u;
    SET_GPR_U32(ctx, 31, 0x1157E8u);
    ctx->pc = 0x1157E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157E0u;
    // 0x1157e4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x1157E0u, 0x1157E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157E8u;
label_1157e8:
    // 0x1157e8: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1157E8u;
    {
        const bool branch_taken_0x1157e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e8) {
            ctx->pc = 0x115990u;
            goto label_115990;
        }
    }
    ctx->pc = 0x1157F0u;
    // 0x1157f0: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x1157F0u;
    SET_GPR_U32(ctx, 31, 0x1157F8u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x1157F0u, 0x1157F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157F8u;
label_1157f8:
    // 0x1157f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1157F8u;
    {
        const bool branch_taken_0x1157f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157F8u;
        // 0x1157fc: 0x3c140041  lui         $s4, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157f8) {
            ctx->pc = 0x11580Cu;
            goto label_11580c;
        }
    }
    ctx->pc = 0x115800u;
    // 0x115800: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115804: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x115804u;
    {
        const bool branch_taken_0x115804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115804u;
        // 0x115808: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115804) {
            ctx->pc = 0x115990u;
            goto label_115990;
        }
    }
    ctx->pc = 0x11580Cu;
label_11580c:
    // 0x11580c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x11580cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115810: 0x26929c40  addiu       $s2, $s4, -0x63C0
    ctx->pc = 0x115810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941760));
    // 0x115814: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x115814u;
    {
        const bool branch_taken_0x115814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115814u;
        // 0x115818: 0xae939c40  sw          $s3, -0x63C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294941760), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115814) {
            ctx->pc = 0x115940u;
            goto label_115940;
        }
    }
    ctx->pc = 0x11581Cu;
    // 0x11581c: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x11581cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x115820: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x115820u;
    {
        const bool branch_taken_0x115820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115820u;
        // 0x115824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115820) {
            ctx->pc = 0x11592Cu;
            goto label_11592c;
        }
    }
    ctx->pc = 0x115828u;
    // 0x115828: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x115828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x11582c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x11582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x115830: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x115830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x115834: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x115834u;
    {
        const bool branch_taken_0x115834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115834u;
        // 0x115838: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115834) {
            ctx->pc = 0x1158A0u;
            goto label_1158a0;
        }
    }
    ctx->pc = 0x11583Cu;
    // 0x11583c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x11583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x115840: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115844:
    // 0x115844: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x115844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x115848: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x115848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11584c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x11584cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115850: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x115850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115854: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x115854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x115858: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x115858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11585c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x11585cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x115860: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x115860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x115864: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x115864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115868: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x115868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11586c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x11586cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115870: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x115870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115874: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x115874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115878: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x115878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11587c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x11587cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115880: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x115880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115884: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x115884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x115888: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x115888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11588c: 0x0  nop
    ctx->pc = 0x11588cu;
    // NOP
    // 0x115890: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x115890) {
            ctx->pc = 0x115844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115844;
        }
    }
    ctx->pc = 0x115898u;
    // 0x115898: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115898u;
    {
        const bool branch_taken_0x115898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115898) {
            ctx->pc = 0x1158DCu;
            goto label_1158dc;
        }
    }
    ctx->pc = 0x1158A0u;
label_1158a0:
    // 0x1158a0: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1158a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1158a4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1158a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_1158a8:
    // 0x1158a8: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1158a8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1158ac: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1158acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1158b0: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1158b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1158b4: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1158b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1158b8: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1158b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1158bc: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1158bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1158c0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1158c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1158c4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1158c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1158c8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1158c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1158cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1158ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1158d0: 0x0  nop
    ctx->pc = 0x1158d0u;
    // NOP
    // 0x1158d4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1158D4u;
    {
        const bool branch_taken_0x1158d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1158d4) {
            ctx->pc = 0x1158A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1158a8;
        }
    }
    ctx->pc = 0x1158DCu;
label_1158dc:
    // 0x1158dc: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1158dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1158e0: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1158e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1158e4: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1158e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1158e8: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1158e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1158ec: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1158ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1158f0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1158f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1158f4: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1158f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1158f8: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1158f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1158fc: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1158fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115900: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x115900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115904: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x115904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115908: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x115908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11590c: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x11590cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115910: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x115910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115914: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x115914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115918: 0x26a39c40  addiu       $v1, $s5, -0x63C0
    ctx->pc = 0x115918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941760));
    // 0x11591c: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x115920: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x115920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115924u;
    {
        const bool branch_taken_0x115924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115924u;
        // 0x115928: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115924) {
            ctx->pc = 0x115948u;
            goto label_115948;
        }
    }
    ctx->pc = 0x11592Cu;
label_11592c:
    // 0x11592c: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x11592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x115930: 0xc049c48  jal         func_127120
    ctx->pc = 0x115930u;
    SET_GPR_U32(ctx, 31, 0x115938u);
    ctx->pc = 0x115934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115930u;
    // 0x115934: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x115930u, 0x115938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115938u;
label_115938:
    // 0x115938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115938u;
    {
        const bool branch_taken_0x115938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115938u;
        // 0x11593c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115938) {
            ctx->pc = 0x115944u;
            goto label_115944;
        }
    }
    ctx->pc = 0x115940u;
label_115940:
    // 0x115940: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x115940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_115944:
    // 0x115944: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115948:
    // 0x115948: 0x26b09c40  addiu       $s0, $s5, -0x63C0
    ctx->pc = 0x115948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941760));
    // 0x11594c: 0x24a49e40  addiu       $a0, $a1, -0x61C0
    ctx->pc = 0x11594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942272));
    // 0x115950: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115954: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x115954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x115958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11595c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11595cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115960: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x115960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x115964: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x115964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115968: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x115968u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11596c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11596Cu;
    SET_GPR_U32(ctx, 31, 0x115974u);
    ctx->pc = 0x115970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11596Cu;
    // 0x115970: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11596Cu, 0x115974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115974u;
label_115974:
    // 0x115974: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115974u;
    {
        const bool branch_taken_0x115974 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115974) {
            ctx->pc = 0x115978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115974u;
            // 0x115978: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115988u;
            goto label_115988;
        }
    }
    ctx->pc = 0x11597Cu;
    // 0x11597c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x11597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115980u;
    {
        const bool branch_taken_0x115980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115980u;
        // 0x115984: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115980) {
            ctx->pc = 0x115990u;
            goto label_115990;
        }
    }
    ctx->pc = 0x115988u;
label_115988:
    // 0x115988: 0x8e829c40  lw          $v0, -0x63C0($s4)
    ctx->pc = 0x115988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941760)));
    // 0x11598c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x11598cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_115990:
    // 0x115990: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x115990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115994: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x115994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115998: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x115998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11599c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11599cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1159a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1159a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1159a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1159a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1159a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1159a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1159ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1159acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1159b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1159B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159B0u;
        // 0x1159b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1159B8u;
}
