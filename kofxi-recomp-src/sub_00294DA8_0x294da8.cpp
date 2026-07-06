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

// Function: sub_00294DA8
// Address: 0x294da8 - 0x294e18
void sub_00294DA8_0x294da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294DA8_0x294da8");
#endif

    ctx->pc = 0x294da8u;

    // 0x294da8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294dac: 0x3e00008  jr          $ra
    ctx->pc = 0x294DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DACu;
        // 0x294db0: 0x24424b30  addiu       $v0, $v0, 0x4B30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294DB4u;
    // 0x294db4: 0x0  nop
    ctx->pc = 0x294db4u;
    // NOP
    // 0x294db8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x294DB8u;
    {
        const bool branch_taken_0x294db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DB8u;
        // 0x294dbc: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294db8) {
            ctx->pc = 0x294DD0u;
            goto label_294dd0;
        }
    }
    ctx->pc = 0x294DC0u;
    // 0x294dc0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x294dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x294dc4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x294dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x294dc8: 0xb0830013  sdl         $v1, 0x13($a0)
    ctx->pc = 0x294dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294dcc: 0xb483000c  sdr         $v1, 0xC($a0)
    ctx->pc = 0x294dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_294dd0:
    // 0x294dd0: 0x68830013  ldl         $v1, 0x13($a0)
    ctx->pc = 0x294dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x294dd4: 0x6c83000c  ldr         $v1, 0xC($a0)
    ctx->pc = 0x294dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x294dd8: 0xb0830033  sdl         $v1, 0x33($a0)
    ctx->pc = 0x294dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294ddc: 0xb483002c  sdr         $v1, 0x2C($a0)
    ctx->pc = 0x294ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294de0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294DE0u;
    {
        const bool branch_taken_0x294de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DE0u;
        // 0x294de4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294de0) {
            ctx->pc = 0x294DF0u;
            goto label_294df0;
        }
    }
    ctx->pc = 0x294DE8u;
    // 0x294de8: 0x80add4c  j           func_2B7530
    ctx->pc = 0x294DE8u;
    ctx->pc = 0x294DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DE8u;
    // 0x294dec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7530u;
    sub_002B7530_0x2b7530(rdram, ctx, runtime); return;
    ctx->pc = 0x294DF0u;
label_294df0:
    // 0x294df0: 0x3e00008  jr          $ra
    ctx->pc = 0x294DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294DF8u;
    // 0x294df8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x294df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294dfc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x294dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x294e00: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x294e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e04: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x294e04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x294e08: 0x8d070078  lw          $a3, 0x78($t0)
    ctx->pc = 0x294e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x294e0c: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x294e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x294e10: 0x80a4bb6  j           func_292ED8
    ctx->pc = 0x294E10u;
    ctx->pc = 0x294E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E10u;
    // 0x294e14: 0x2508002c  addiu       $t0, $t0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292ED8u, 0x294E10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x294E18u;
}
