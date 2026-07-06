#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF370
// Address: 0x1ff370 - 0x1ff408
void sub_001FF370_0x1ff370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF370_0x1ff370");
#endif

    switch (ctx->pc) {
        case 0x1ff394u: goto label_1ff394;
        case 0x1ff3acu: goto label_1ff3ac;
        default: break;
    }

    ctx->pc = 0x1ff370u;

    // 0x1ff370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff378: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff37c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff384: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1ff384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff388: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff38c: 0xc07fbfc  jal         func_1FEFF0
    ctx->pc = 0x1FF38Cu;
    SET_GPR_U32(ctx, 31, 0x1FF394u);
    ctx->pc = 0x1FF390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF38Cu;
            // 0x1ff390: 0x24510060  addiu       $s1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFF0u;
    if (runtime->hasFunction(0x1FEFF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF394u; }
        if (ctx->pc != 0x1FF394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFF0_0x1feff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF394u; }
        if (ctx->pc != 0x1FF394u) { return; }
    }
    ctx->pc = 0x1FF394u;
label_1ff394:
    // 0x1ff394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff39c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF39Cu;
    {
        const bool branch_taken_0x1ff39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF39Cu;
            // 0x1ff3a0: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff39c) {
            ctx->pc = 0x1FF3F0u;
            goto label_1ff3f0;
        }
    }
    ctx->pc = 0x1FF3A4u;
    // 0x1ff3a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FF3A4u;
    SET_GPR_U32(ctx, 31, 0x1FF3ACu);
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3ACu; }
        if (ctx->pc != 0x1FF3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3ACu; }
        if (ctx->pc != 0x1FF3ACu) { return; }
    }
    ctx->pc = 0x1FF3ACu;
label_1ff3ac:
    // 0x1ff3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff3b0: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x1ff3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ff3b4: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x1ff3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ff3b8: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x1ff3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ff3bc: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x1ff3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ff3c0: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x1ff3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ff3c4: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x1ff3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ff3c8: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x1ff3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ff3cc: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x1ff3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ff3d0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1ff3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3d4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1ff3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3d8: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x1ff3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3dc: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x1ff3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3e0: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x1ff3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3e4: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x1ff3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3e8: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x1ff3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff3ec: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x1ff3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ff3f0:
    // 0x1ff3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff3f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3FCu;
            // 0x1ff400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF404u;
    // 0x1ff404: 0x0  nop
    ctx->pc = 0x1ff404u;
    // NOP
    ctx->pc = 0x1ff408u;
}
