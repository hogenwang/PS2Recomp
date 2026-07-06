#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF690
// Address: 0x2df690 - 0x2df780
void sub_002DF690_0x2df690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF690_0x2df690");
#endif

    switch (ctx->pc) {
        case 0x2df728u: goto label_2df728;
        case 0x2df738u: goto label_2df738;
        case 0x2df75cu: goto label_2df75c;
        default: break;
    }

    ctx->pc = 0x2df690u;

    // 0x2df690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2df690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2df694: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2df694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2df698: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2df698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2df69c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2df69cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2df6a0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df6a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2df6a8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2df6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2df6ac: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2df6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2df6b0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2df6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2df6b4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2df6b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df6b8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2df6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2df6bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2df6bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6c0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2df6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2df6c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2df6c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6c8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2df6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2df6cc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2df6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2df6d0: 0x244cf080  addiu       $t4, $v0, -0xF80
    ctx->pc = 0x2df6d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x2df6d4: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x2df6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2df6d8: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x2df6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2df6dc: 0x8d8a0008  lw          $t2, 0x8($t4)
    ctx->pc = 0x2df6dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2df6e0: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2df6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df6e4: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2df6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df6e8: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2df6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2df6ec: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2df6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6f0: 0x246bf090  addiu       $t3, $v1, -0xF70
    ctx->pc = 0x2df6f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
    // 0x2df6f4: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x2df6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2df6f8: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x2df6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2df6fc: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x2df6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df700: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x2df700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df704: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2df704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2df708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df70c: 0x24c8f098  addiu       $t0, $a2, -0xF68
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963352));
    // 0x2df710: 0x690c0007  ldl         $t4, 0x7($t0)
    ctx->pc = 0x2df710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2df714: 0x6d0c0000  ldr         $t4, 0x0($t0)
    ctx->pc = 0x2df714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2df718: 0xb24c0007  sdl         $t4, 0x7($s2)
    ctx->pc = 0x2df718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df71c: 0xb64c0000  sdr         $t4, 0x0($s2)
    ctx->pc = 0x2df71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df720: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF720u;
    SET_GPR_U32(ctx, 31, 0x2DF728u);
    ctx->pc = 0x2DF724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF720u;
            // 0x2df724: 0xafa70030  sw          $a3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (runtime->hasFunction(0x2DF500u)) {
        auto targetFn = runtime->lookupFunction(0x2DF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF728u; }
        if (ctx->pc != 0x2DF728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF500_0x2df500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF728u; }
        if (ctx->pc != 0x2DF728u) { return; }
    }
    ctx->pc = 0x2DF728u;
label_2df728:
    // 0x2df728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df72c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2df72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df730: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF730u;
    SET_GPR_U32(ctx, 31, 0x2DF738u);
    ctx->pc = 0x2DF734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF730u;
            // 0x2df734: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (runtime->hasFunction(0x2DF500u)) {
        auto targetFn = runtime->lookupFunction(0x2DF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF738u; }
        if (ctx->pc != 0x2DF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF500_0x2df500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF738u; }
        if (ctx->pc != 0x2DF738u) { return; }
    }
    ctx->pc = 0x2DF738u;
label_2df738:
    // 0x2df738: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2df738u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2df73c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2df73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2df740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df744: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2df744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df748: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2df748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df74c: 0x252968b8  addiu       $t1, $t1, 0x68B8
    ctx->pc = 0x2df74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26808));
    // 0x2df750: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2df750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df754: 0xc0b7d50  jal         func_2DF540
    ctx->pc = 0x2DF754u;
    SET_GPR_U32(ctx, 31, 0x2DF75Cu);
    ctx->pc = 0x2DF758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF754u;
            // 0x2df758: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF540u;
    if (runtime->hasFunction(0x2DF540u)) {
        auto targetFn = runtime->lookupFunction(0x2DF540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF75Cu; }
        if (ctx->pc != 0x2DF75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF540_0x2df540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF75Cu; }
        if (ctx->pc != 0x2DF75Cu) { return; }
    }
    ctx->pc = 0x2DF75Cu;
label_2df75c:
    // 0x2df75c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2df75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df760: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2df760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2df764: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2df764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df768: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2df768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2df76c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2df76cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df770: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2df770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2df774: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF774u;
            // 0x2df778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF77Cu;
    // 0x2df77c: 0x0  nop
    ctx->pc = 0x2df77cu;
    // NOP
    ctx->pc = 0x2df780u;
}
