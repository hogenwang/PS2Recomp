#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1428
// Address: 0x1f1428 - 0x1f14e0
void sub_001F1428_0x1f1428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1428_0x1f1428");
#endif

    switch (ctx->pc) {
        case 0x1f145cu: goto label_1f145c;
        default: break;
    }

    ctx->pc = 0x1f1428u;

    // 0x1f1428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f142c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f143c: 0x26320e1c  addiu       $s2, $s1, 0xE1C
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3612));
    // 0x1f1440: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f1440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f1444: 0x26302010  addiu       $s0, $s1, 0x2010
    ctx->pc = 0x1f1444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8208));
    // 0x1f1448: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f1448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f144c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F144Cu;
    {
        const bool branch_taken_0x1f144c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F144Cu;
            // 0x1f1450: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f144c) {
            ctx->pc = 0x1F1464u;
            goto label_1f1464;
        }
    }
    ctx->pc = 0x1F1454u;
    // 0x1f1454: 0xc07ab70  jal         func_1EADC0
    ctx->pc = 0x1F1454u;
    SET_GPR_U32(ctx, 31, 0x1F145Cu);
    ctx->pc = 0x1EADC0u;
    if (runtime->hasFunction(0x1EADC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F145Cu; }
        if (ctx->pc != 0x1F145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EADC0_0x1eadc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F145Cu; }
        if (ctx->pc != 0x1F145Cu) { return; }
    }
    ctx->pc = 0x1F145Cu;
label_1f145c:
    // 0x1f145c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f1460: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1f1460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1f1464:
    // 0x1f1464: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f1468: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1468u;
    {
        const bool branch_taken_0x1f1468 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1468u;
            // 0x1f146c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1468) {
            ctx->pc = 0x1F14C8u;
            goto label_1f14c8;
        }
    }
    ctx->pc = 0x1F1470u;
    // 0x1f1470: 0x6a220df7  ldl         $v0, 0xDF7($s1)
    ctx->pc = 0x1f1470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f1474: 0x6e220df0  ldr         $v0, 0xDF0($s1)
    ctx->pc = 0x1f1474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f1478: 0x6a230dff  ldl         $v1, 0xDFF($s1)
    ctx->pc = 0x1f1478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f147c: 0x6e230df8  ldr         $v1, 0xDF8($s1)
    ctx->pc = 0x1f147cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f1480: 0x6a240e07  ldl         $a0, 0xE07($s1)
    ctx->pc = 0x1f1480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f1484: 0x6e240e00  ldr         $a0, 0xE00($s1)
    ctx->pc = 0x1f1484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f1488: 0x6a250e0f  ldl         $a1, 0xE0F($s1)
    ctx->pc = 0x1f1488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f148c: 0x6e250e08  ldr         $a1, 0xE08($s1)
    ctx->pc = 0x1f148cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f1490: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x1f1490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1494: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x1f1494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1498: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x1f1498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f149c: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x1f149cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14a0: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x1f14a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14a4: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x1f14a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14a8: 0xb245001f  sdl         $a1, 0x1F($s2)
    ctx->pc = 0x1f14a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14ac: 0xb6450018  sdr         $a1, 0x18($s2)
    ctx->pc = 0x1f14acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14b0: 0x6a220e17  ldl         $v0, 0xE17($s1)
    ctx->pc = 0x1f14b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f14b4: 0x6e220e10  ldr         $v0, 0xE10($s1)
    ctx->pc = 0x1f14b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f14b8: 0x8e230e18  lw          $v1, 0xE18($s1)
    ctx->pc = 0x1f14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3608)));
    // 0x1f14bc: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x1f14bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14c0: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x1f14c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f14c4: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1f14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_1f14c8:
    // 0x1f14c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f14c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f14cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f14ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f14d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f14d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f14d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F14D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F14D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14D4u;
            // 0x1f14d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F14DCu;
    // 0x1f14dc: 0x0  nop
    ctx->pc = 0x1f14dcu;
    // NOP
    ctx->pc = 0x1f14e0u;
}
