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

// Function: sub_002892E8
// Address: 0x2892e8 - 0x289370
void sub_002892E8_0x2892e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002892E8_0x2892e8");
#endif

    switch (ctx->pc) {
        case 0x289310u: goto label_289310;
        default: break;
    }

    ctx->pc = 0x2892e8u;

    // 0x2892e8: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2892e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2892ec: 0x8d2736f0  lw          $a3, 0x36F0($t1)
    ctx->pc = 0x2892ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14064)));
    // 0x2892f0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2892f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2892f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2892F4u;
    {
        const bool branch_taken_0x2892f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892F4u;
        // 0x2892f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892f4) {
            ctx->pc = 0x289368u;
            goto label_289368;
        }
    }
    ctx->pc = 0x2892FCu;
    // 0x2892fc: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x289300: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x289300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x289304: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x289304u;
    {
        const bool branch_taken_0x289304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289304u;
        // 0x289308: 0x3c0801c9  lui         $t0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289304) {
            ctx->pc = 0x289354u;
            goto label_289354;
        }
    }
    ctx->pc = 0x28930Cu;
    // 0x28930c: 0x250243b8  addiu       $v0, $t0, 0x43B8
    ctx->pc = 0x28930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 17336));
label_289310:
    // 0x289310: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x289314: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x289314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x289318: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x289318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28931c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x289320: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289324: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x289324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x289328: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x289328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28932c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x28932cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x289330: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x289330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x289334: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x289334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x289338: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x289338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28933c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x28933cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289340: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x289340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289344: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x289344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289348: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x289348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28934c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28934Cu;
    {
        const bool branch_taken_0x28934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28934Cu;
        // 0x289350: 0x250243b8  addiu       $v0, $t0, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 17336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28934c) {
            ctx->pc = 0x289310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289310;
        }
    }
    ctx->pc = 0x289354u;
label_289354:
    // 0x289354: 0x8d2336f0  lw          $v1, 0x36F0($t1)
    ctx->pc = 0x289354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14064)));
    // 0x289358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28935c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x289360: 0x3e00008  jr          $ra
    ctx->pc = 0x289360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289360u;
        // 0x289364: 0xad2336f0  sw          $v1, 0x36F0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 14064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289368u;
label_289368:
    // 0x289368: 0x3e00008  jr          $ra
    ctx->pc = 0x289368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289368u;
        // 0x28936c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289370u;
}
