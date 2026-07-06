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

// Function: sub_00117330
// Address: 0x117330 - 0x117370
void sub_00117330_0x117330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117330_0x117330");
#endif

    switch (ctx->pc) {
        case 0x117348u: goto label_117348;
        default: break;
    }

    ctx->pc = 0x117330u;

    // 0x117330: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x117330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x117334: 0xc  syscall     0
    ctx->pc = 0x117334u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x117338: 0x3e00008  jr          $ra
    ctx->pc = 0x117338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117340u;
    // 0x117340: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x117340u;
    {
        const bool branch_taken_0x117340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117340u;
        // 0x117344: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117340) {
            ctx->pc = 0x117368u;
            goto label_117368;
        }
    }
    ctx->pc = 0x117348u;
label_117348:
    // 0x117348: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x117348u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11734c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11734cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x117350: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x117350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x117354: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x117354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x117358: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x117358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11735c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x117360: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x117360u;
    {
        const bool branch_taken_0x117360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117360) {
            ctx->pc = 0x117348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117348;
        }
    }
    ctx->pc = 0x117368u;
label_117368:
    // 0x117368: 0x3e00008  jr          $ra
    ctx->pc = 0x117368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117368u;
        // 0x11736c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117370u;
}
