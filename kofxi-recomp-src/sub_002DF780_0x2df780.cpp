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

// Function: sub_002DF780
// Address: 0x2df780 - 0x2df870
void sub_002DF780_0x2df780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF780_0x2df780");
#endif

    switch (ctx->pc) {
        case 0x2df81cu: goto label_2df81c;
        case 0x2df82cu: goto label_2df82c;
        case 0x2df850u: goto label_2df850;
        default: break;
    }

    ctx->pc = 0x2df780u;

    // 0x2df780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2df780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2df784: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2df784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2df788: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2df788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df78c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2df78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2df790: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2df790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2df794: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2df794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2df798: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2df798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2df79c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2df79cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2df7a0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2df7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2df7a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2df7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7a8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2df7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2df7ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df7b0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2df7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2df7b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2df7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7b8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2df7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2df7bc: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2df7c0: 0x244cf0a0  addiu       $t4, $v0, -0xF60
    ctx->pc = 0x2df7c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963360));
    // 0x2df7c4: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x2df7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2df7c8: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x2df7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2df7cc: 0x8d8a0008  lw          $t2, 0x8($t4)
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2df7d0: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2df7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df7d4: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2df7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df7d8: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2df7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2df7dc: 0x246bf0b0  addiu       $t3, $v1, -0xF50
    ctx->pc = 0x2df7dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963376));
    // 0x2df7e0: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x2df7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2df7e4: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x2df7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2df7e8: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x2df7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df7ec: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x2df7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df7f0: 0x24e4f0b8  addiu       $a0, $a3, -0xF48
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963384));
    // 0x2df7f4: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x2df7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2df7f8: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x2df7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2df7fc: 0xb26c0007  sdl         $t4, 0x7($s3)
    ctx->pc = 0x2df7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df800: 0xb66c0000  sdr         $t4, 0x0($s3)
    ctx->pc = 0x2df800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df804: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2df804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2df808: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2df808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2df80c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2df80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df814: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF814u;
    SET_GPR_U32(ctx, 31, 0x2DF81Cu);
    ctx->pc = 0x2DF818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF814u;
    // 0x2df818: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DF814u, 0x2DF81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF81Cu;
label_2df81c:
    // 0x2df81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2df820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df824: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DF824u;
    SET_GPR_U32(ctx, 31, 0x2DF82Cu);
    ctx->pc = 0x2DF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF824u;
    // 0x2df828: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DF824u, 0x2DF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF82Cu;
label_2df82c:
    // 0x2df82c: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2df82cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2df830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2df830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2df834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df838: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2df838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df83c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2df83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df840: 0x252968b8  addiu       $t1, $t1, 0x68B8
    ctx->pc = 0x2df840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26808));
    // 0x2df844: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2df844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df848: 0xc0b7d50  jal         func_2DF540
    ctx->pc = 0x2DF848u;
    SET_GPR_U32(ctx, 31, 0x2DF850u);
    ctx->pc = 0x2DF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF848u;
    // 0x2df84c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF540u, 0x2DF848u, 0x2DF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF850u;
label_2df850:
    // 0x2df850: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2df850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df854: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2df854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2df858: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2df858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df85c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2df85cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2df860: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2df860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df864: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2df864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2df868: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF868u;
        // 0x2df86c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF870u;
}
