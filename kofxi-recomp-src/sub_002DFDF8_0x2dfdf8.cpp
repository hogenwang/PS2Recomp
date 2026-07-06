#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DFDF8
// Address: 0x2dfdf8 - 0x2dfee8
void sub_002DFDF8_0x2dfdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFDF8_0x2dfdf8");
#endif

    switch (ctx->pc) {
        case 0x2dfe38u: goto label_2dfe38;
        case 0x2dfe90u: goto label_2dfe90;
        case 0x2dfea0u: goto label_2dfea0;
        case 0x2dfec4u: goto label_2dfec4;
        default: break;
    }

    ctx->pc = 0x2dfdf8u;

    // 0x2dfdf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dfdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dfdfc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2dfe00: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2dfe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2dfe04: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2dfe04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2dfe08: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2dfe08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dfe0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dfe10: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2dfe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2dfe14: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2dfe18: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2dfe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2dfe1c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2dfe1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dfe20: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2dfe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2dfe24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dfe24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe28: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2dfe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2dfe2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2dfe2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe30: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2dfe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2dfe34: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2dfe34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2dfe38:
    // 0x2dfe38: 0x244cf108  addiu       $t4, $v0, -0xEF8
    ctx->pc = 0x2dfe38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963464));
    // 0x2dfe3c: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x2dfe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2dfe40: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x2dfe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2dfe44: 0x8d8a0008  lw          $t2, 0x8($t4)
    ctx->pc = 0x2dfe44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2dfe48: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2dfe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfe4c: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2dfe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfe50: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2dfe50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2dfe54: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2dfe54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe58: 0x246bf118  addiu       $t3, $v1, -0xEE8
    ctx->pc = 0x2dfe58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963480));
    // 0x2dfe5c: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x2dfe5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dfe60: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x2dfe60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dfe64: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x2dfe64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfe68: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x2dfe68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfe6c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2dfe6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dfe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe74: 0x24c8f120  addiu       $t0, $a2, -0xEE0
    ctx->pc = 0x2dfe74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963488));
    // 0x2dfe78: 0x690c0007  ldl         $t4, 0x7($t0)
    ctx->pc = 0x2dfe78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2dfe7c: 0x6d0c0000  ldr         $t4, 0x0($t0)
    ctx->pc = 0x2dfe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2dfe80: 0xb24c0007  sdl         $t4, 0x7($s2)
    ctx->pc = 0x2dfe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfe84: 0xb64c0000  sdr         $t4, 0x0($s2)
    ctx->pc = 0x2dfe84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfe88: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFE88u;
    SET_GPR_U32(ctx, 31, 0x2DFE90u);
    ctx->pc = 0x2DFE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE88u;
            // 0x2dfe8c: 0xafa70030  sw          $a3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (runtime->hasFunction(0x2DF500u)) {
        auto targetFn = runtime->lookupFunction(0x2DF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFE90u; }
        if (ctx->pc != 0x2DFE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF500_0x2df500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFE90u; }
        if (ctx->pc != 0x2DFE90u) { return; }
    }
    ctx->pc = 0x2DFE90u;
label_2dfe90:
    // 0x2dfe90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dfe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe98: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFE98u;
    SET_GPR_U32(ctx, 31, 0x2DFEA0u);
    ctx->pc = 0x2DFE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE98u;
            // 0x2dfe9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (runtime->hasFunction(0x2DF500u)) {
        auto targetFn = runtime->lookupFunction(0x2DF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA0u; }
        if (ctx->pc != 0x2DFEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF500_0x2df500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA0u; }
        if (ctx->pc != 0x2DFEA0u) { return; }
    }
    ctx->pc = 0x2DFEA0u;
label_2dfea0:
    // 0x2dfea0: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2dfea0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2dfea4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2dfea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dfea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfeac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dfeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfeb0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2dfeb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfeb4: 0x252968b8  addiu       $t1, $t1, 0x68B8
    ctx->pc = 0x2dfeb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26808));
    // 0x2dfeb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dfeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfebc: 0xc0b7f2a  jal         func_2DFCA8
    ctx->pc = 0x2DFEBCu;
    SET_GPR_U32(ctx, 31, 0x2DFEC4u);
    ctx->pc = 0x2DFEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEBCu;
            // 0x2dfec0: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFCA8u;
    if (runtime->hasFunction(0x2DFCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2DFCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEC4u; }
        if (ctx->pc != 0x2DFEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFCA8_0x2dfca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEC4u; }
        if (ctx->pc != 0x2DFEC4u) { return; }
    }
    ctx->pc = 0x2DFEC4u;
label_2dfec4:
    // 0x2dfec4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2dfec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfec8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2dfec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfecc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2dfeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfed0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2dfed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dfed4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2dfed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfed8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2dfed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dfedc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEDCu;
            // 0x2dfee0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFEE4u;
    // 0x2dfee4: 0x0  nop
    ctx->pc = 0x2dfee4u;
    // NOP
    ctx->pc = 0x2dfee8u;
}
