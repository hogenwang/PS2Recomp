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

// Function: sub_002719E0
// Address: 0x2719e0 - 0x271a48
void sub_002719E0_0x2719e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002719E0_0x2719e0");
#endif

    switch (ctx->pc) {
        case 0x271a08u: goto label_271a08;
        default: break;
    }

    ctx->pc = 0x2719e0u;

    // 0x2719e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2719e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2719e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2719e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2719e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2719e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2719ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2719ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2719f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2719f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2719f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2719f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2719f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2719fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a00: 0xc09c48a  jal         func_271228
    ctx->pc = 0x271A00u;
    SET_GPR_U32(ctx, 31, 0x271A08u);
    ctx->pc = 0x271A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A00u;
    // 0x271a04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271228u, 0x271A00u, 0x271A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A08u;
label_271a08:
    // 0x271a08: 0x6a0c0007  ldl         $t4, 0x7($s0)
    ctx->pc = 0x271a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x271a0c: 0x6e0c0000  ldr         $t4, 0x0($s0)
    ctx->pc = 0x271a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x271a10: 0xb22c0107  sdl         $t4, 0x107($s1)
    ctx->pc = 0x271a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271a14: 0xb62c0100  sdr         $t4, 0x100($s1)
    ctx->pc = 0x271a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271a18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x271a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271a1c: 0x6a0c0007  ldl         $t4, 0x7($s0)
    ctx->pc = 0x271a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x271a20: 0x6e0c0000  ldr         $t4, 0x0($s0)
    ctx->pc = 0x271a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x271a24: 0xb22c010f  sdl         $t4, 0x10F($s1)
    ctx->pc = 0x271a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271a28: 0xb62c0108  sdr         $t4, 0x108($s1)
    ctx->pc = 0x271a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271a2c: 0xae320110  sw          $s2, 0x110($s1)
    ctx->pc = 0x271a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 18));
    // 0x271a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271a38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x271a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x271A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A3Cu;
        // 0x271a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271A44u;
    // 0x271a44: 0x0  nop
    ctx->pc = 0x271a44u;
    // NOP
}
