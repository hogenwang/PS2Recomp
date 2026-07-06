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

// Function: sub_002A3368
// Address: 0x2a3368 - 0x2a33d0
void sub_002A3368_0x2a3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3368_0x2a3368");
#endif

    switch (ctx->pc) {
        case 0x2a3380u: goto label_2a3380;
        case 0x2a338cu: goto label_2a338c;
        default: break;
    }

    ctx->pc = 0x2a3368u;

    // 0x2a3368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a336c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a3370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3378: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x2A3378u;
    SET_GPR_U32(ctx, 31, 0x2A3380u);
    ctx->pc = 0x2A337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3378u;
    // 0x2a337c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2A3378u, 0x2A3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3380u;
label_2a3380:
    // 0x2a3380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3384: 0xc0a8d48  jal         func_2A3520
    ctx->pc = 0x2A3384u;
    SET_GPR_U32(ctx, 31, 0x2A338Cu);
    ctx->pc = 0x2A3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3384u;
    // 0x2a3388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3520u, 0x2A3384u, 0x2A338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A338Cu;
label_2a338c:
    // 0x2a338c: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x2a338cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a3390: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x2a3390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a3394: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x2a3394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a3398: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x2a3398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a339c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2a339cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a33a0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2a33a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a33a4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2a33a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a33a8: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x2a33a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a33ac: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x2a33acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a33b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a33b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33b4: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2a33b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2a33b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a33b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a33bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a33bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a33c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a33c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a33c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A33C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A33C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33C4u;
        // 0x2a33c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A33C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A33CCu;
    // 0x2a33cc: 0x0  nop
    ctx->pc = 0x2a33ccu;
    // NOP
    if (ctx->pc == 0x2a33ccu) { ctx->pc = 0x2a33d0u; }
}
