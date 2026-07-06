#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3CB0
// Address: 0x1f3cb0 - 0x1f3e70
void sub_001F3CB0_0x1f3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3CB0_0x1f3cb0");
#endif

    switch (ctx->pc) {
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3e28u: goto label_1f3e28;
        default: break;
    }

    ctx->pc = 0x1f3cb0u;

    // 0x1f3cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f3cc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f3cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3cc8: 0x6a020e4f  ldl         $v0, 0xE4F($s0)
    ctx->pc = 0x1f3cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3ccc: 0x6e020e48  ldr         $v0, 0xE48($s0)
    ctx->pc = 0x1f3cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3cd0: 0x6a030e57  ldl         $v1, 0xE57($s0)
    ctx->pc = 0x1f3cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3671); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f3cd4: 0x6e030e50  ldr         $v1, 0xE50($s0)
    ctx->pc = 0x1f3cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3664); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f3cd8: 0x6a050e5f  ldl         $a1, 0xE5F($s0)
    ctx->pc = 0x1f3cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f3cdc: 0x6e050e58  ldr         $a1, 0xE58($s0)
    ctx->pc = 0x1f3cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f3ce0: 0x6a060e67  ldl         $a2, 0xE67($s0)
    ctx->pc = 0x1f3ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3687); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f3ce4: 0x6e060e60  ldr         $a2, 0xE60($s0)
    ctx->pc = 0x1f3ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f3ce8: 0xb2220013  sdl         $v0, 0x13($s1)
    ctx->pc = 0x1f3ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3cec: 0xb622000c  sdr         $v0, 0xC($s1)
    ctx->pc = 0x1f3cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3cf0: 0xb223001b  sdl         $v1, 0x1B($s1)
    ctx->pc = 0x1f3cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3cf4: 0xb6230014  sdr         $v1, 0x14($s1)
    ctx->pc = 0x1f3cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3cf8: 0xb2250023  sdl         $a1, 0x23($s1)
    ctx->pc = 0x1f3cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3cfc: 0xb625001c  sdr         $a1, 0x1C($s1)
    ctx->pc = 0x1f3cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3d00: 0xb226002b  sdl         $a2, 0x2B($s1)
    ctx->pc = 0x1f3d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3d04: 0xb6260024  sdr         $a2, 0x24($s1)
    ctx->pc = 0x1f3d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3d08: 0x6a020e6f  ldl         $v0, 0xE6F($s0)
    ctx->pc = 0x1f3d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3d0c: 0x6e020e68  ldr         $v0, 0xE68($s0)
    ctx->pc = 0x1f3d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3d10: 0x8e030e70  lw          $v1, 0xE70($s0)
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3696)));
    // 0x1f3d14: 0xb2220033  sdl         $v0, 0x33($s1)
    ctx->pc = 0x1f3d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3d18: 0xb622002c  sdr         $v0, 0x2C($s1)
    ctx->pc = 0x1f3d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3d1c: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F3D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D24u);
    ctx->pc = 0x1F3D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D1Cu;
            // 0x1f3d20: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (runtime->hasFunction(0x1F64A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F64A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D24u; }
        if (ctx->pc != 0x1F3D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F64A0_0x1f64a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D24u; }
        if (ctx->pc != 0x1F3D24u) { return; }
    }
    ctx->pc = 0x1F3D24u;
label_1f3d24:
    // 0x1f3d24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3D24u;
    {
        const bool branch_taken_0x1f3d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D24u;
            // 0x1f3d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d24) {
            ctx->pc = 0x1F3D38u;
            goto label_1f3d38;
        }
    }
    ctx->pc = 0x1F3D2Cu;
    // 0x1f3d2c: 0xc07db80  jal         func_1F6E00
    ctx->pc = 0x1F3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D34u);
    ctx->pc = 0x1F6E00u;
    if (runtime->hasFunction(0x1F6E00u)) {
        auto targetFn = runtime->lookupFunction(0x1F6E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D34u; }
        if (ctx->pc != 0x1F3D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6E00_0x1f6e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D34u; }
        if (ctx->pc != 0x1F3D34u) { return; }
    }
    ctx->pc = 0x1F3D34u;
label_1f3d34:
    // 0x1f3d34: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x1f3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_1f3d38:
    // 0x1f3d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f3d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3d48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3d4c: 0x807cf56  j           func_1F3D58
    ctx->pc = 0x1F3D4Cu;
    ctx->pc = 0x1F3D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D4Cu;
            // 0x1f3d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D58u;
    goto label_1f3d58;
    ctx->pc = 0x1F3D54u;
    // 0x1f3d54: 0x0  nop
    ctx->pc = 0x1f3d54u;
    // NOP
label_1f3d58:
    // 0x1f3d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3d5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f3d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3d64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f3d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f3d6c: 0x24710d88  addiu       $s1, $v1, 0xD88
    ctx->pc = 0x1f3d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3464));
    // 0x1f3d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3d74: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1f3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f3d78: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1f3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1f3d7c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1f3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1f3d80: 0x8c660ec4  lw          $a2, 0xEC4($v1)
    ctx->pc = 0x1f3d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3780)));
    // 0x1f3d84: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1f3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1f3d88: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1f3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1f3d8c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f3d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3d94: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1f3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1f3d98: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1f3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1f3d9c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1f3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1f3da0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f3da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3da4: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1f3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1f3da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3dac: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F3DACu;
    SET_GPR_U32(ctx, 31, 0x1F3DB4u);
    ctx->pc = 0x1F3DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DACu;
            // 0x1f3db0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (runtime->hasFunction(0x1F64A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F64A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DB4u; }
        if (ctx->pc != 0x1F3DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F64A0_0x1f64a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DB4u; }
        if (ctx->pc != 0x1F3DB4u) { return; }
    }
    ctx->pc = 0x1F3DB4u;
label_1f3db4:
    // 0x1f3db4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F3DB4u;
    {
        const bool branch_taken_0x1f3db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DB4u;
            // 0x1f3db8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3db4) {
            ctx->pc = 0x1F3E3Cu;
            goto label_1f3e3c;
        }
    }
    ctx->pc = 0x1F3DBCu;
    // 0x1f3dbc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1f3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f3dc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f3dc4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1f3dc8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1f3dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f3dcc: 0x8cc6eb40  lw          $a2, -0x14C0($a2)
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961984)));
    // 0x1f3dd0: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3DD0u;
    {
        const bool branch_taken_0x1f3dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F3DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DD0u;
            // 0x1f3dd4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dd0) {
            ctx->pc = 0x1F3DF0u;
            goto label_1f3df0;
        }
    }
    ctx->pc = 0x1F3DD8u;
    // 0x1f3dd8: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1f3ddc: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1f3ddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f3de0: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1f3de0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1f3de4: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x1f3de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1f3de8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3DE8u;
    {
        const bool branch_taken_0x1f3de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DE8u;
            // 0x1f3dec: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3de8) {
            ctx->pc = 0x1F3E0Cu;
            goto label_1f3e0c;
        }
    }
    ctx->pc = 0x1F3DF0u;
label_1f3df0:
    // 0x1f3df0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f3df4: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1f3df4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f3df8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F3DF8u;
    {
        const bool branch_taken_0x1f3df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3df8) {
            ctx->pc = 0x1F3DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DF8u;
            // 0x1f3dfc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3E00u;
            goto label_1f3e00;
        }
    }
    ctx->pc = 0x1F3E00u;
label_1f3e00:
    // 0x1f3e00: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x1f3e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f3e04: 0x1012  mflo        $v0
    ctx->pc = 0x1f3e04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f3e08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e0c:
    // 0x1f3e0c: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x1f3e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f3e10: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1f3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1f3e14: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1f3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f3e18: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x1f3e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f3e1c: 0x2812  mflo        $a1
    ctx->pc = 0x1f3e1cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1f3e20: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1F3E20u;
    SET_GPR_U32(ctx, 31, 0x1F3E28u);
    ctx->pc = 0x1F3E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E20u;
            // 0x1f3e24: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (runtime->hasFunction(0x1DC718u)) {
        auto targetFn = runtime->lookupFunction(0x1DC718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E28u; }
        if (ctx->pc != 0x1F3E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC718_0x1dc718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E28u; }
        if (ctx->pc != 0x1F3E28u) { return; }
    }
    ctx->pc = 0x1F3E28u;
label_1f3e28:
    // 0x1f3e28: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1f3e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1f3e2c: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1f3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1f3e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3e34: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1f3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1f3e38: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1f3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1f3e3c:
    // 0x1f3e3c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1f3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1f3e40: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x1f3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x1f3e44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f3e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f3e48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3E48u;
    {
        const bool branch_taken_0x1f3e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e48) {
            ctx->pc = 0x1F3E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E48u;
            // 0x1f3e4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3E60u;
            goto label_1f3e60;
        }
    }
    ctx->pc = 0x1F3E50u;
    // 0x1f3e50: 0xae230284  sw          $v1, 0x284($s1)
    ctx->pc = 0x1f3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
    // 0x1f3e54: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f3e58: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x1f3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x1f3e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3e60:
    // 0x1f3e60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3e68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E68u;
            // 0x1f3e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3E70u;
    ctx->pc = 0x1f3e70u;
}
