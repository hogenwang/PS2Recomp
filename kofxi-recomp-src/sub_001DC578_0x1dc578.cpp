#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC578
// Address: 0x1dc578 - 0x1dc6b8
void sub_001DC578_0x1dc578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC578_0x1dc578");
#endif

    switch (ctx->pc) {
        case 0x1dc594u: goto label_1dc594;
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc63cu: goto label_1dc63c;
        default: break;
    }

    ctx->pc = 0x1dc578u;

    // 0x1dc578: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1dc578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1dc57c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1dc57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1dc580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc584: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1dc584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1dc588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc58c: 0xc0740ac  jal         func_1D02B0
    ctx->pc = 0x1DC58Cu;
    SET_GPR_U32(ctx, 31, 0x1DC594u);
    ctx->pc = 0x1DC590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC58Cu;
            // 0x1dc590: 0x8e0403d0  lw          $a0, 0x3D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 976)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D02B0u;
    if (runtime->hasFunction(0x1D02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC594u; }
        if (ctx->pc != 0x1DC594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D02B0_0x1d02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC594u; }
        if (ctx->pc != 0x1DC594u) { return; }
    }
    ctx->pc = 0x1DC594u;
label_1dc594:
    // 0x1dc594: 0x8e0403d0  lw          $a0, 0x3D0($s0)
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 976)));
    // 0x1dc598: 0xc0740b6  jal         func_1D02D8
    ctx->pc = 0x1DC598u;
    SET_GPR_U32(ctx, 31, 0x1DC5A0u);
    ctx->pc = 0x1DC59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC598u;
            // 0x1dc59c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D02D8u;
    if (runtime->hasFunction(0x1D02D8u)) {
        auto targetFn = runtime->lookupFunction(0x1D02D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5A0u; }
        if (ctx->pc != 0x1DC5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D02D8_0x1d02d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5A0u; }
        if (ctx->pc != 0x1DC5A0u) { return; }
    }
    ctx->pc = 0x1DC5A0u;
label_1dc5a0:
    // 0x1dc5a0: 0x8e0403d0  lw          $a0, 0x3D0($s0)
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 976)));
    // 0x1dc5a4: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1dc5a8: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1dc5ac: 0xc0740c0  jal         func_1D0300
    ctx->pc = 0x1DC5ACu;
    SET_GPR_U32(ctx, 31, 0x1DC5B4u);
    ctx->pc = 0x1DC5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5ACu;
            // 0x1dc5b0: 0x27a7008c  addiu       $a3, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0300u;
    if (runtime->hasFunction(0x1D0300u)) {
        auto targetFn = runtime->lookupFunction(0x1D0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5B4u; }
        if (ctx->pc != 0x1DC5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0300_0x1d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5B4u; }
        if (ctx->pc != 0x1DC5B4u) { return; }
    }
    ctx->pc = 0x1DC5B4u;
label_1dc5b4:
    // 0x1dc5b4: 0x8e0403d0  lw          $a0, 0x3D0($s0)
    ctx->pc = 0x1dc5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 976)));
    // 0x1dc5b8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dc5bc: 0xc0740ca  jal         func_1D0328
    ctx->pc = 0x1DC5BCu;
    SET_GPR_U32(ctx, 31, 0x1DC5C4u);
    ctx->pc = 0x1DC5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5BCu;
            // 0x1dc5c0: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0328u;
    if (runtime->hasFunction(0x1D0328u)) {
        auto targetFn = runtime->lookupFunction(0x1D0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5C4u; }
        if (ctx->pc != 0x1DC5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0328_0x1d0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5C4u; }
        if (ctx->pc != 0x1DC5C4u) { return; }
    }
    ctx->pc = 0x1DC5C4u;
label_1dc5c4:
    // 0x1dc5c4: 0x260301dc  addiu       $v1, $s0, 0x1DC
    ctx->pc = 0x1dc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x1dc5c8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1dc5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1dc5cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DC5CCu;
    {
        const bool branch_taken_0x1dc5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5CCu;
            // 0x1dc5d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5cc) {
            ctx->pc = 0x1DC638u;
            goto label_1dc638;
        }
    }
    ctx->pc = 0x1DC5D4u;
    // 0x1dc5d4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dc5d8:
    // 0x1dc5d8: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x1dc5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1dc5dc: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x1dc5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1dc5e0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x1dc5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dc5e4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x1dc5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dc5e8: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x1dc5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dc5ec: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x1dc5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dc5f0: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x1dc5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dc5f4: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x1dc5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dc5f8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1dc5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc5fc: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1dc5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc600: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x1dc600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc604: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x1dc604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc608: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x1dc608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc60c: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x1dc60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc610: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x1dc610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc614: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x1dc614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc618: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc61c: 0x0  nop
    ctx->pc = 0x1dc61cu;
    // NOP
    // 0x1dc620: 0x0  nop
    ctx->pc = 0x1dc620u;
    // NOP
    // 0x1dc624: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DC624u;
    {
        const bool branch_taken_0x1dc624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC624u;
            // 0x1dc628: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc624) {
            ctx->pc = 0x1DC5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc5d8;
        }
    }
    ctx->pc = 0x1DC62Cu;
    // 0x1dc62c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DC62Cu;
    {
        const bool branch_taken_0x1dc62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC62Cu;
            // 0x1dc630: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc62c) {
            ctx->pc = 0x1DC674u;
            goto label_1dc674;
        }
    }
    ctx->pc = 0x1DC634u;
    // 0x1dc634: 0x0  nop
    ctx->pc = 0x1dc634u;
    // NOP
label_1dc638:
    // 0x1dc638: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1dc638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dc63c:
    // 0x1dc63c: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1dc63cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc640: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1dc640u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dc644: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1dc644u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc648: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1dc648u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc64c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1dc64cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1dc650: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1dc650u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1dc654: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1dc654u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1dc658: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1dc658u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1dc65c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc660: 0x0  nop
    ctx->pc = 0x1dc660u;
    // NOP
    // 0x1dc664: 0x0  nop
    ctx->pc = 0x1dc664u;
    // NOP
    // 0x1dc668: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DC668u;
    {
        const bool branch_taken_0x1dc668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC668u;
            // 0x1dc66c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc668) {
            ctx->pc = 0x1DC63Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc63c;
        }
    }
    ctx->pc = 0x1DC670u;
    // 0x1dc670: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1dc674:
    // 0x1dc674: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1dc674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc678: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1dc678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1dc67c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1dc67cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dc680: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dc684: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1dc684u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1dc688: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc68c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1dc68cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1dc690: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1dc690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1dc694: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1dc694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dc698: 0xae0602c4  sw          $a2, 0x2C4($s0)
    ctx->pc = 0x1dc698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 6));
    // 0x1dc69c: 0xae0302d4  sw          $v1, 0x2D4($s0)
    ctx->pc = 0x1dc69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
    // 0x1dc6a0: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1dc6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
    // 0x1dc6a4: 0xae0502d8  sw          $a1, 0x2D8($s0)
    ctx->pc = 0x1dc6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 5));
    // 0x1dc6a8: 0xae0402d0  sw          $a0, 0x2D0($s0)
    ctx->pc = 0x1dc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 4));
    // 0x1dc6ac: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1dc6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dc6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6B0u;
            // 0x1dc6b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC6B8u;
    ctx->pc = 0x1dc6b8u;
}
