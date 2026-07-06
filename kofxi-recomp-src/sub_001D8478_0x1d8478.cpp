#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8478
// Address: 0x1d8478 - 0x1d8510
void sub_001D8478_0x1d8478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8478_0x1d8478");
#endif

    switch (ctx->pc) {
        case 0x1d8494u: goto label_1d8494;
        case 0x1d84b8u: goto label_1d84b8;
        default: break;
    }

    ctx->pc = 0x1d8478u;

    // 0x1d8478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d847c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d848c: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D848Cu;
    SET_GPR_U32(ctx, 31, 0x1D8494u);
    ctx->pc = 0x1D8490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D848Cu;
            // 0x1d8490: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (runtime->hasFunction(0x1D88E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D88E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8494u; }
        if (ctx->pc != 0x1D8494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D88E8_0x1d88e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8494u; }
        if (ctx->pc != 0x1D8494u) { return; }
    }
    ctx->pc = 0x1D8494u;
label_1d8494:
    // 0x1d8494: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d8494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d8498: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8498u;
    {
        const bool branch_taken_0x1d8498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8498u;
            // 0x1d849c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8498) {
            ctx->pc = 0x1D84B8u;
            goto label_1d84b8;
        }
    }
    ctx->pc = 0x1D84A0u;
    // 0x1d84a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d84a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d84a4: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x1d84a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x1d84a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d84a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d84ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d84acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d84b0: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D84B0u;
    ctx->pc = 0x1D84B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84B0u;
            // 0x1d84b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    {
        auto targetFn = runtime->lookupFunction(0x1D8718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D84B8u;
label_1d84b8:
    // 0x1d84b8: 0x6a03002f  ldl         $v1, 0x2F($s0)
    ctx->pc = 0x1d84b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d84bc: 0x6e030028  ldr         $v1, 0x28($s0)
    ctx->pc = 0x1d84bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d84c0: 0x6a040037  ldl         $a0, 0x37($s0)
    ctx->pc = 0x1d84c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d84c4: 0x6e040030  ldr         $a0, 0x30($s0)
    ctx->pc = 0x1d84c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d84c8: 0x6a05003f  ldl         $a1, 0x3F($s0)
    ctx->pc = 0x1d84c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d84cc: 0x6e050038  ldr         $a1, 0x38($s0)
    ctx->pc = 0x1d84ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d84d0: 0x6a060047  ldl         $a2, 0x47($s0)
    ctx->pc = 0x1d84d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d84d4: 0x6e060040  ldr         $a2, 0x40($s0)
    ctx->pc = 0x1d84d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d84d8: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1d84d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84dc: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1d84dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84e0: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1d84e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84e4: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1d84e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84e8: 0xb2250017  sdl         $a1, 0x17($s1)
    ctx->pc = 0x1d84e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84ec: 0xb6250010  sdr         $a1, 0x10($s1)
    ctx->pc = 0x1d84ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84f0: 0xb226001f  sdl         $a2, 0x1F($s1)
    ctx->pc = 0x1d84f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84f4: 0xb6260018  sdr         $a2, 0x18($s1)
    ctx->pc = 0x1d84f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d84f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d84f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d84fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d84fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8504u;
            // 0x1d8508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D850Cu;
    // 0x1d850c: 0x0  nop
    ctx->pc = 0x1d850cu;
    // NOP
    ctx->pc = 0x1d8510u;
}
