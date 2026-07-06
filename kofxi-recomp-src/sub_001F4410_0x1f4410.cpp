#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4410
// Address: 0x1f4410 - 0x1f4608
void sub_001F4410_0x1f4410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4410_0x1f4410");
#endif

    switch (ctx->pc) {
        case 0x1f4424u: goto label_1f4424;
        case 0x1f4448u: goto label_1f4448;
        case 0x1f4590u: goto label_1f4590;
        case 0x1f45a0u: goto label_1f45a0;
        case 0x1f45c0u: goto label_1f45c0;
        case 0x1f45c8u: goto label_1f45c8;
        case 0x1f45d8u: goto label_1f45d8;
        default: break;
    }

    ctx->pc = 0x1f4410u;

    // 0x1f4410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f4418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f441c: 0xc07d182  jal         func_1F4608
    ctx->pc = 0x1F441Cu;
    SET_GPR_U32(ctx, 31, 0x1F4424u);
    ctx->pc = 0x1F4420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F441Cu;
            // 0x1f4420: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4608u;
    if (runtime->hasFunction(0x1F4608u)) {
        auto targetFn = runtime->lookupFunction(0x1F4608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4424u; }
        if (ctx->pc != 0x1F4424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4608_0x1f4608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4424u; }
        if (ctx->pc != 0x1F4424u) { return; }
    }
    ctx->pc = 0x1F4424u;
label_1f4424:
    // 0x1f4424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4424u;
    {
        const bool branch_taken_0x1f4424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4424u;
            // 0x1f4428: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4424) {
            ctx->pc = 0x1F4448u;
            goto label_1f4448;
        }
    }
    ctx->pc = 0x1F442Cu;
    // 0x1f442c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f442cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4438: 0x34a50f15  ori         $a1, $a1, 0xF15
    ctx->pc = 0x1f4438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3861);
    // 0x1f443c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F443Cu;
    ctx->pc = 0x1F4440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F443Cu;
            // 0x1f4440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F4444u;
    // 0x1f4444: 0x0  nop
    ctx->pc = 0x1f4444u;
    // NOP
label_1f4448:
    // 0x1f4448: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f4448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1f444c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1f444cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1f4450: 0x24479ab0  addiu       $a3, $v0, -0x6550
    ctx->pc = 0x1f4450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
    // 0x1f4454: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1f4454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f4458: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1f4458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f445c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1f445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f4460: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1f4460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f4464: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1f4464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f4468: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1f4468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f446c: 0xb203000b  sdl         $v1, 0xB($s0)
    ctx->pc = 0x1f446cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4470: 0xb6030004  sdr         $v1, 0x4($s0)
    ctx->pc = 0x1f4470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4474: 0xb2050013  sdl         $a1, 0x13($s0)
    ctx->pc = 0x1f4474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4478: 0xb605000c  sdr         $a1, 0xC($s0)
    ctx->pc = 0x1f4478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f447c: 0xb206001b  sdl         $a2, 0x1B($s0)
    ctx->pc = 0x1f447cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4480: 0xb6060014  sdr         $a2, 0x14($s0)
    ctx->pc = 0x1f4480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4484: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x1f4484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f4488: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x1f4488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f448c: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x1f448cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1f4490: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x1f4490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4494: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x1f4494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4498: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1f4498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1f449c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1f449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1f44a0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1f44a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f44a4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1f44a8: 0x248b9ad8  addiu       $t3, $a0, -0x6528
    ctx->pc = 0x1f44a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941400));
    // 0x1f44ac: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x1f44acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f44b0: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x1f44b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f44b4: 0xb208002f  sdl         $t0, 0x2F($s0)
    ctx->pc = 0x1f44b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44b8: 0xb6080028  sdr         $t0, 0x28($s0)
    ctx->pc = 0x1f44b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44bc: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1f44bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1f44c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f44c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f44c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44c8: 0x244b9ae0  addiu       $t3, $v0, -0x6520
    ctx->pc = 0x1f44c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941408));
    // 0x1f44cc: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x1f44ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f44d0: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x1f44d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f44d4: 0x6966000f  ldl         $a2, 0xF($t3)
    ctx->pc = 0x1f44d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f44d8: 0x6d660008  ldr         $a2, 0x8($t3)
    ctx->pc = 0x1f44d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f44dc: 0x696a0017  ldl         $t2, 0x17($t3)
    ctx->pc = 0x1f44dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1f44e0: 0x6d6a0010  ldr         $t2, 0x10($t3)
    ctx->pc = 0x1f44e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1f44e4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x1f44e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44e8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x1f44e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44ec: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x1f44ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44f0: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x1f44f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44f4: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x1f44f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44f8: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x1f44f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f44fc: 0x6964001f  ldl         $a0, 0x1F($t3)
    ctx->pc = 0x1f44fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f4500: 0x6d640018  ldr         $a0, 0x18($t3)
    ctx->pc = 0x1f4500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f4504: 0x69660027  ldl         $a2, 0x27($t3)
    ctx->pc = 0x1f4504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f4508: 0x6d660020  ldr         $a2, 0x20($t3)
    ctx->pc = 0x1f4508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f450c: 0x696a002f  ldl         $t2, 0x2F($t3)
    ctx->pc = 0x1f450cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1f4510: 0x6d6a0028  ldr         $t2, 0x28($t3)
    ctx->pc = 0x1f4510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1f4514: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x1f4514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4518: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x1f4518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f451c: 0xb0660027  sdl         $a2, 0x27($v1)
    ctx->pc = 0x1f451cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4520: 0xb4660020  sdr         $a2, 0x20($v1)
    ctx->pc = 0x1f4520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4524: 0xb06a002f  sdl         $t2, 0x2F($v1)
    ctx->pc = 0x1f4524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4528: 0xb46a0028  sdr         $t2, 0x28($v1)
    ctx->pc = 0x1f4528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f452c: 0x69640037  ldl         $a0, 0x37($t3)
    ctx->pc = 0x1f452cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f4530: 0x6d640030  ldr         $a0, 0x30($t3)
    ctx->pc = 0x1f4530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f4534: 0x6966003f  ldl         $a2, 0x3F($t3)
    ctx->pc = 0x1f4534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f4538: 0x6d660038  ldr         $a2, 0x38($t3)
    ctx->pc = 0x1f4538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f453c: 0xb0640037  sdl         $a0, 0x37($v1)
    ctx->pc = 0x1f453cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4540: 0xb4640030  sdr         $a0, 0x30($v1)
    ctx->pc = 0x1f4540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4544: 0xb066003f  sdl         $a2, 0x3F($v1)
    ctx->pc = 0x1f4544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f4548: 0xb4660038  sdr         $a2, 0x38($v1)
    ctx->pc = 0x1f4548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f454c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f454cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f4550: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x1f4550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x1f4554: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x1f4554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1f4558: 0xae080078  sw          $t0, 0x78($s0)
    ctx->pc = 0x1f4558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 8));
    // 0x1f455c: 0xae09013c  sw          $t1, 0x13C($s0)
    ctx->pc = 0x1f455cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 9));
    // 0x1f4560: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f4560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f4564: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1f4564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1f4568: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x1f4568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x1f456c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1f456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1f4570: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1f4570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1f4574: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1f4574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1f4578: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1f4578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1f457c: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1f457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x1f4580: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x1f4580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x1f4584: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1f4584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1f4588: 0xc07d1b4  jal         func_1F46D0
    ctx->pc = 0x1F4588u;
    SET_GPR_U32(ctx, 31, 0x1F4590u);
    ctx->pc = 0x1F458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4588u;
            // 0x1f458c: 0xae000174  sw          $zero, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F46D0u;
    if (runtime->hasFunction(0x1F46D0u)) {
        auto targetFn = runtime->lookupFunction(0x1F46D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4590u; }
        if (ctx->pc != 0x1F4590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F46D0_0x1f46d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4590u; }
        if (ctx->pc != 0x1F4590u) { return; }
    }
    ctx->pc = 0x1F4590u;
label_1f4590:
    // 0x1f4590: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1f4590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1f4594: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1f4594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1f4598: 0xc07d1e0  jal         func_1F4780
    ctx->pc = 0x1F4598u;
    SET_GPR_U32(ctx, 31, 0x1F45A0u);
    ctx->pc = 0x1F459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4598u;
            // 0x1f459c: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4780u;
    if (runtime->hasFunction(0x1F4780u)) {
        auto targetFn = runtime->lookupFunction(0x1F4780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45A0u; }
        if (ctx->pc != 0x1F45A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4780_0x1f4780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45A0u; }
        if (ctx->pc != 0x1F45A0u) { return; }
    }
    ctx->pc = 0x1F45A0u;
label_1f45a0:
    // 0x1f45a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f45a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f45a8: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1f45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x1f45ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f45acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f45b0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1f45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1f45b4: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f45b8: 0xc07c736  jal         func_1F1CD8
    ctx->pc = 0x1F45B8u;
    SET_GPR_U32(ctx, 31, 0x1F45C0u);
    ctx->pc = 0x1F45BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45B8u;
            // 0x1f45bc: 0x26040118  addiu       $a0, $s0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1CD8u;
    if (runtime->hasFunction(0x1F1CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1F1CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45C0u; }
        if (ctx->pc != 0x1F45C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1CD8_0x1f1cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45C0u; }
        if (ctx->pc != 0x1F45C0u) { return; }
    }
    ctx->pc = 0x1F45C0u;
label_1f45c0:
    // 0x1f45c0: 0xc07d1e8  jal         func_1F47A0
    ctx->pc = 0x1F45C0u;
    SET_GPR_U32(ctx, 31, 0x1F45C8u);
    ctx->pc = 0x1F45C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45C0u;
            // 0x1f45c4: 0x26041080  addiu       $a0, $s0, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A0u;
    if (runtime->hasFunction(0x1F47A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45C8u; }
        if (ctx->pc != 0x1F45C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F47A0_0x1f47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45C8u; }
        if (ctx->pc != 0x1F45C8u) { return; }
    }
    ctx->pc = 0x1F45C8u;
label_1f45c8:
    // 0x1f45c8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1f45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f45cc: 0x26021114  addiu       $v0, $s0, 0x1114
    ctx->pc = 0x1f45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4372));
    // 0x1f45d0: 0x26030fe4  addiu       $v1, $s0, 0xFE4
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4068));
    // 0x1f45d4: 0x0  nop
    ctx->pc = 0x1f45d4u;
    // NOP
label_1f45d8:
    // 0x1f45d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f45dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f45e0: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x1f45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x1f45e4: 0x0  nop
    ctx->pc = 0x1f45e4u;
    // NOP
    // 0x1f45e8: 0x0  nop
    ctx->pc = 0x1f45e8u;
    // NOP
    // 0x1f45ec: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F45ECu;
    {
        const bool branch_taken_0x1f45ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1F45F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45ECu;
            // 0x1f45f0: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45ec) {
            ctx->pc = 0x1F45D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f45d8;
        }
    }
    ctx->pc = 0x1F45F4u;
    // 0x1f45f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f45f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f45f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f45f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f45fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4600: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4600u;
            // 0x1f4604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4608u;
    ctx->pc = 0x1f4608u;
}
