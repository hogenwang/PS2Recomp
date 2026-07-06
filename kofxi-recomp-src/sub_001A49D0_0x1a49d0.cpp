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

// Function: sub_001A49D0
// Address: 0x1a49d0 - 0x1a4a10
void sub_001A49D0_0x1a49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A49D0_0x1a49d0");
#endif

    switch (ctx->pc) {
        case 0x1a49dcu: goto label_1a49dc;
        default: break;
    }

    ctx->pc = 0x1a49d0u;

    // 0x1a49d0: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a49d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a49d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49d8: 0x2484b900  addiu       $a0, $a0, -0x4700
    ctx->pc = 0x1a49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
label_1a49dc:
    // 0x1a49dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a49e0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A49E0u;
    {
        const bool branch_taken_0x1a49e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a49e0) {
            ctx->pc = 0x1A49E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A49E0u;
            // 0x1a49e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A49F0u;
            goto label_1a49f0;
        }
    }
    ctx->pc = 0x1A49E8u;
    // 0x1a49e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A49E8u;
    {
        const bool branch_taken_0x1a49e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49E8u;
        // 0x1a49ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49e8) {
            ctx->pc = 0x1A4A08u;
            goto label_1a4a08;
        }
    }
    ctx->pc = 0x1A49F0u;
label_1a49f0:
    // 0x1a49f0: 0x28a30190  slti        $v1, $a1, 0x190
    ctx->pc = 0x1a49f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x1a49f4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A49F4u;
    {
        const bool branch_taken_0x1a49f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F4u;
        // 0x1a49f8: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49f4) {
            ctx->pc = 0x1A49DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a49dc;
        }
    }
    ctx->pc = 0x1A49FCu;
    // 0x1a49fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4a00: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x1a4a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a4a04: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x1a4a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a4a08:
    // 0x1a4a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A10u;
}
