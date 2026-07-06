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

// Function: sub_001F22F8
// Address: 0x1f22f8 - 0x1f26c8
void sub_001F22F8_0x1f22f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F22F8_0x1f22f8");
#endif

    switch (ctx->pc) {
        case 0x1f2364u: goto label_1f2364;
        case 0x1f2374u: goto label_1f2374;
        case 0x1f2380u: goto label_1f2380;
        case 0x1f23b8u: goto label_1f23b8;
        case 0x1f2450u: goto label_1f2450;
        case 0x1f250cu: goto label_1f250c;
        default: break;
    }

    ctx->pc = 0x1f22f8u;

    // 0x1f22f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f22f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f22fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f22fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2300: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f2300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f2304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2308: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f2308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f230c: 0x8e030df0  lw          $v1, 0xDF0($s0)
    ctx->pc = 0x1f230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3568)));
    // 0x1f2310: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F2310u;
    {
        const bool branch_taken_0x1f2310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2310u;
        // 0x1f2314: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2310) {
            ctx->pc = 0x1F23A8u;
            goto label_1f23a8;
        }
    }
    ctx->pc = 0x1F2318u;
    // 0x1f2318: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f2318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f231c: 0x6a020dab  ldl         $v0, 0xDAB($s0)
    ctx->pc = 0x1f231cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f2320: 0x6e020da4  ldr         $v0, 0xDA4($s0)
    ctx->pc = 0x1f2320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f2324: 0x6a030db3  ldl         $v1, 0xDB3($s0)
    ctx->pc = 0x1f2324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f2328: 0x6e030dac  ldr         $v1, 0xDAC($s0)
    ctx->pc = 0x1f2328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f232c: 0x6a070dbb  ldl         $a3, 0xDBB($s0)
    ctx->pc = 0x1f232cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f2330: 0x6e070db4  ldr         $a3, 0xDB4($s0)
    ctx->pc = 0x1f2330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3508); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f2334: 0x6a080dc3  ldl         $t0, 0xDC3($s0)
    ctx->pc = 0x1f2334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3523); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f2338: 0x6e080dbc  ldr         $t0, 0xDBC($s0)
    ctx->pc = 0x1f2338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f233c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1f233cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2340: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1f2340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2344: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1f2344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2348: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1f2348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f234c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1f234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2350: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1f2350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2354: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x1f2354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2358: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x1f2358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f235c: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F235Cu;
    SET_GPR_U32(ctx, 31, 0x1F2364u);
    ctx->pc = 0x1F2360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F235Cu;
    // 0x1f2360: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC518u, 0x1F235Cu, 0x1F2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2364u;
label_1f2364:
    // 0x1f2364: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1f2368: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1f2368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1f236c: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F236Cu;
    SET_GPR_U32(ctx, 31, 0x1F2374u);
    ctx->pc = 0x1F2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F236Cu;
    // 0x1f2370: 0x26040df4  addiu       $a0, $s0, 0xDF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC518u, 0x1F236Cu, 0x1F2374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2374u;
label_1f2374:
    // 0x1f2374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2378: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F2378u;
    SET_GPR_U32(ctx, 31, 0x1F2380u);
    ctx->pc = 0x1F237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2378u;
    // 0x1f237c: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F2378u, 0x1F2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2380u;
label_1f2380:
    // 0x1f2380: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1f2380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2384: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1f2384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2388: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1f2388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f238c: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x1f238cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f2390: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1f2390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f2394: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2394u;
    {
        const bool branch_taken_0x1f2394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2394u;
        // 0x1f2398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2394) {
            ctx->pc = 0x1F23A8u;
            goto label_1f23a8;
        }
    }
    ctx->pc = 0x1F239Cu;
    // 0x1f239c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f23a0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1f23a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f23a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f23a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f23a8:
    // 0x1f23a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f23a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f23ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f23acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f23b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F23B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23B0u;
        // 0x1f23b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F23B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F23B8u;
label_1f23b8:
    // 0x1f23b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f23b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f23bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f23bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f23c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f23c4: 0x25100d88  addiu       $s0, $t0, 0xD88
    ctx->pc = 0x1f23c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 3464));
    // 0x1f23c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f23cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f23ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f23d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f23d4: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1f23d8: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1f23d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1f23dc: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1F23DCu;
    {
        const bool branch_taken_0x1f23dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23DCu;
        // 0x1f23e0: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23dc) {
            ctx->pc = 0x1F2408u;
            goto label_1f2408;
        }
    }
    ctx->pc = 0x1F23E4u;
    // 0x1f23e4: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F23E4u;
    {
        const bool branch_taken_0x1f23e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1F23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23E4u;
        // 0x1f23e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23e4) {
            ctx->pc = 0x1F2408u;
            goto label_1f2408;
        }
    }
    ctx->pc = 0x1F23ECu;
    // 0x1f23ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f23ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f23f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f23f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f23f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f23f8: 0x25080da4  addiu       $t0, $t0, 0xDA4
    ctx->pc = 0x1f23f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3492));
    // 0x1f23fc: 0x807c92c  j           func_1F24B0
    ctx->pc = 0x1F23FCu;
    ctx->pc = 0x1F2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23FCu;
    // 0x1f2400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F24B0u;
    goto label_1f24b0;
    ctx->pc = 0x1F2404u;
    // 0x1f2404: 0x0  nop
    ctx->pc = 0x1f2404u;
    // NOP
label_1f2408:
    // 0x1f2408: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1f2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f240c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F240Cu;
    {
        const bool branch_taken_0x1f240c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f240c) {
            ctx->pc = 0x1F2440u;
            goto label_1f2440;
        }
    }
    ctx->pc = 0x1F2414u;
    // 0x1f2414: 0x8d023708  lw          $v0, 0x3708($t0)
    ctx->pc = 0x1f2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14088)));
    // 0x1f2418: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F2418u;
    {
        const bool branch_taken_0x1f2418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2418) {
            ctx->pc = 0x1F241Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2418u;
            // 0x1f241c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F249Cu;
            goto label_1f249c;
        }
    }
    ctx->pc = 0x1F2420u;
    // 0x1f2420: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1f2420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1f2424: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1f2424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1f2428: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1f2428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1f242c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1f242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1f2430: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f2430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1f2434: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F2434u;
    {
        const bool branch_taken_0x1f2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2434u;
        // 0x1f2438: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2434) {
            ctx->pc = 0x1F2498u;
            goto label_1f2498;
        }
    }
    ctx->pc = 0x1F243Cu;
    // 0x1f243c: 0x0  nop
    ctx->pc = 0x1f243cu;
    // NOP
label_1f2440:
    // 0x1f2440: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2440u;
    {
        const bool branch_taken_0x1f2440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2440u;
        // 0x1f2444: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2440) {
            ctx->pc = 0x1F2468u;
            goto label_1f2468;
        }
    }
    ctx->pc = 0x1F2448u;
    // 0x1f2448: 0xc07c9b2  jal         func_1F26C8
    ctx->pc = 0x1F2448u;
    SET_GPR_U32(ctx, 31, 0x1F2450u);
    ctx->pc = 0x1F244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2448u;
    // 0x1f244c: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26C8u, 0x1F2448u, 0x1F2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2450u;
label_1f2450:
    // 0x1f2450: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1f2450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f2454: 0x9603003a  lhu         $v1, 0x3A($s0)
    ctx->pc = 0x1f2454u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1f2458: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f2458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f245c: 0xa60304b2  sh          $v1, 0x4B2($s0)
    ctx->pc = 0x1f245cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1202), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F2460u;
    {
        const bool branch_taken_0x1f2460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2460u;
        // 0x1f2464: 0xa44304b2  sh          $v1, 0x4B2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1202), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2460) {
            ctx->pc = 0x1F2498u;
            goto label_1f2498;
        }
    }
    ctx->pc = 0x1F2468u;
label_1f2468:
    // 0x1f2468: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f246c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1f246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1f2470: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f2474: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x1f2474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1f2478: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x1f2478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1f247c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1f247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1f2480: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1f2480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1f2484: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f2484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1f2488: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1f2488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1f248c: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1f248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1f2490: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1f2490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1f2494: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x1f2494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_1f2498:
    // 0x1f2498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f249c:
    // 0x1f249c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f249cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f24a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f24a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f24a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F24A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24A4u;
        // 0x1f24a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F24A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F24ACu;
    // 0x1f24ac: 0x0  nop
    ctx->pc = 0x1f24acu;
    // NOP
label_1f24b0:
    // 0x1f24b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f24b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f24b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f24b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f24c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f24c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f24c4: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x1f24c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x1f24c8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f24cc: 0x8e94eb40  lw          $s4, -0x14C0($s4)
    ctx->pc = 0x1f24ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961984)));
    // 0x1f24d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f24d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f24d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f24d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24d8: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x1f24d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1f24dc: 0x3c06055d  lui         $a2, 0x55D
    ctx->pc = 0x1f24dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1373 << 16));
    // 0x1f24e0: 0x34c64a80  ori         $a2, $a2, 0x4A80
    ctx->pc = 0x1f24e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19072);
    // 0x1f24e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f24e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f24e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f24e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f24ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f24ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f24f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f24f8: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x1f24fc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1f24fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f2500: 0x8e73e8e8  lw          $s3, -0x1718($s3)
    ctx->pc = 0x1f2500u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961384)));
    // 0x1f2504: 0xc07720e  jal         func_1DC838
    ctx->pc = 0x1F2504u;
    SET_GPR_U32(ctx, 31, 0x1F250Cu);
    ctx->pc = 0x1F2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2504u;
    // 0x1f2508: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC838u, 0x1F2504u, 0x1F250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F250Cu;
label_1f250c:
    // 0x1f250c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1f250cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2510: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1f2510u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1f2514: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1f2514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x1f2518: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1f2518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f251c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1f251cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1f2520: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1f2524: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x1f2524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x1f2528: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x1f2528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f252c: 0xa6a3001e  sh          $v1, 0x1E($s5)
    ctx->pc = 0x1f252cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2530: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x1F2530u;
    {
        const bool branch_taken_0x1f2530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2530) {
            ctx->pc = 0x1F2648u;
            goto label_1f2648;
        }
    }
    ctx->pc = 0x1F2538u;
    // 0x1f2538: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x1f2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x1f253c: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F253Cu;
    {
        const bool branch_taken_0x1f253c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F253Cu;
        // 0x1f2540: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f253c) {
            ctx->pc = 0x1F2558u;
            goto label_1f2558;
        }
    }
    ctx->pc = 0x1F2544u;
    // 0x1f2544: 0x56820041  bnel        $s4, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F2544u;
    {
        const bool branch_taken_0x1f2544 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2544) {
            ctx->pc = 0x1F2548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2544u;
            // 0x1f2548: 0xb3001a  div         $zero, $a1, $s3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F264Cu;
            goto label_1f264c;
        }
    }
    ctx->pc = 0x1F254Cu;
    // 0x1f254c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F254Cu;
    {
        const bool branch_taken_0x1f254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F254Cu;
        // 0x1f2550: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f254c) {
            ctx->pc = 0x1F2568u;
            goto label_1f2568;
        }
    }
    ctx->pc = 0x1F2554u;
    // 0x1f2554: 0x0  nop
    ctx->pc = 0x1f2554u;
    // NOP
label_1f2558:
    // 0x1f2558: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f2558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f255c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F255Cu;
    {
        const bool branch_taken_0x1f255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F255Cu;
        // 0x1f2560: 0x2448e910  addiu       $t0, $v0, -0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f255c) {
            ctx->pc = 0x1F256Cu;
            goto label_1f256c;
        }
    }
    ctx->pc = 0x1F2564u;
    // 0x1f2564: 0x0  nop
    ctx->pc = 0x1f2564u;
    // NOP
label_1f2568:
    // 0x1f2568: 0x2448e930  addiu       $t0, $v0, -0x16D0
    ctx->pc = 0x1f2568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961456));
label_1f256c:
    // 0x1f256c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f2570: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1f2570u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2574: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2574u;
    {
        const bool branch_taken_0x1f2574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2574) {
            ctx->pc = 0x1F2578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2574u;
            // 0x1f2578: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F257Cu;
            goto label_1f257c;
        }
    }
    ctx->pc = 0x1F257Cu;
label_1f257c:
    // 0x1f257c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f2580: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1f2580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f2584: 0x2010  mfhi        $a0
    ctx->pc = 0x1f2584u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f2588: 0x2812  mflo        $a1
    ctx->pc = 0x1f2588u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1f258c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1f258cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2590: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1f2590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2594: 0x1010  mfhi        $v0
    ctx->pc = 0x1f2594u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f2598: 0x2012  mflo        $a0
    ctx->pc = 0x1f2598u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1f259c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f259cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25a0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1f25a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f25a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F25A4u;
    {
        const bool branch_taken_0x1f25a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25A4u;
        // 0x1f25a8: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25a4) {
            ctx->pc = 0x1F25D0u;
            goto label_1f25d0;
        }
    }
    ctx->pc = 0x1F25ACu;
    // 0x1f25ac: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1f25acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1f25b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f25b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25b4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1f25b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f25b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F25B8u;
    {
        const bool branch_taken_0x1f25b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25b8) {
            ctx->pc = 0x1F25BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F25B8u;
            // 0x1f25bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25C0u;
            goto label_1f25c0;
        }
    }
    ctx->pc = 0x1F25C0u;
label_1f25c0:
    // 0x1f25c0: 0x2010  mfhi        $a0
    ctx->pc = 0x1f25c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f25c4: 0x1812  mflo        $v1
    ctx->pc = 0x1f25c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f25c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F25C8u;
    {
        const bool branch_taken_0x1f25c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25C8u;
        // 0x1f25cc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25c8) {
            ctx->pc = 0x1F2634u;
            goto label_1f2634;
        }
    }
    ctx->pc = 0x1F25D0u;
label_1f25d0:
    // 0x1f25d0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1f25d4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f25d8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1f25d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f25dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F25DCu;
    {
        const bool branch_taken_0x1f25dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25dc) {
            ctx->pc = 0x1F25E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F25DCu;
            // 0x1f25e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25E4u;
            goto label_1f25e4;
        }
    }
    ctx->pc = 0x1F25E4u;
label_1f25e4:
    // 0x1f25e4: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x1f25e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f25e8: 0x1810  mfhi        $v1
    ctx->pc = 0x1f25e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f25ec: 0x2012  mflo        $a0
    ctx->pc = 0x1f25ecu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1f25f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f25f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25f4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1f25f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f25f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F25F8u;
    {
        const bool branch_taken_0x1f25f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25F8u;
        // 0x1f25fc: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25f8) {
            ctx->pc = 0x1F2610u;
            goto label_1f2610;
        }
    }
    ctx->pc = 0x1F2600u;
    // 0x1f2600: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1f2604: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f2604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2608: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F2608u;
    {
        const bool branch_taken_0x1f2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2608u;
        // 0x1f260c: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2608) {
            ctx->pc = 0x1F2634u;
            goto label_1f2634;
        }
    }
    ctx->pc = 0x1F2610u;
label_1f2610:
    // 0x1f2610: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1f2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1f2614: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f2614u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f2618: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1f2618u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f261c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F261Cu;
    {
        const bool branch_taken_0x1f261c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f261c) {
            ctx->pc = 0x1F2620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F261Cu;
            // 0x1f2620: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2624u;
            goto label_1f2624;
        }
    }
    ctx->pc = 0x1F2624u;
label_1f2624:
    // 0x1f2624: 0x1812  mflo        $v1
    ctx->pc = 0x1f2624u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f2628: 0x2010  mfhi        $a0
    ctx->pc = 0x1f2628u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f262c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2630: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f2630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2634:
    // 0x1f2634: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x1f2634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1f2638: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x1f2638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f263c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F263Cu;
    {
        const bool branch_taken_0x1f263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F263Cu;
        // 0x1f2640: 0x894821  addu        $t1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f263c) {
            ctx->pc = 0x1F2690u;
            goto label_1f2690;
        }
    }
    ctx->pc = 0x1F2644u;
    // 0x1f2644: 0x0  nop
    ctx->pc = 0x1f2644u;
    // NOP
label_1f2648:
    // 0x1f2648: 0xb3001a  div         $zero, $a1, $s3
    ctx->pc = 0x1f2648u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f264c:
    // 0x1f264c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1f264cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f2650: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1f2650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f2654: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1f2654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f2658: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2658u;
    {
        const bool branch_taken_0x1f2658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2658) {
            ctx->pc = 0x1F265Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2658u;
            // 0x1f265c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2660u;
            goto label_1f2660;
        }
    }
    ctx->pc = 0x1F2660u;
label_1f2660:
    // 0x1f2660: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1f2660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f2664: 0x1012  mflo        $v0
    ctx->pc = 0x1f2664u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f2668: 0x3810  mfhi        $a3
    ctx->pc = 0x1f2668u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1f266c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f266cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2670: 0x1012  mflo        $v0
    ctx->pc = 0x1f2670u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f2674: 0x2010  mfhi        $a0
    ctx->pc = 0x1f2674u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f2678: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f2678u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f267c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f267cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2680: 0x1012  mflo        $v0
    ctx->pc = 0x1f2680u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f2684: 0x2810  mfhi        $a1
    ctx->pc = 0x1f2684u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f2688: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f2688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f268c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1f268cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2690:
    // 0x1f2690: 0xaea70014  sw          $a3, 0x14($s5)
    ctx->pc = 0x1f2690u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 7));
    // 0x1f2694: 0xaeaa0008  sw          $t2, 0x8($s5)
    ctx->pc = 0x1f2694u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 10));
    // 0x1f2698: 0xaea9000c  sw          $t1, 0xC($s5)
    ctx->pc = 0x1f2698u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 9));
    // 0x1f269c: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x1f269cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x1f26a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f26a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f26a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f26a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f26a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f26a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f26ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f26acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f26b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f26b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f26b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f26b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f26b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f26bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F26BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26BCu;
        // 0x1f26c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F26C4u;
    // 0x1f26c4: 0x0  nop
    ctx->pc = 0x1f26c4u;
    // NOP
    if (ctx->pc == 0x1f26c4u) { ctx->pc = 0x1f26c8u; }
}
