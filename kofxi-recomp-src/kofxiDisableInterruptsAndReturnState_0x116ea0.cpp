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

// Function: kofxiDisableInterruptsAndReturnState
// Address: 0x116ea0 - 0x116ef0
void kofxiDisableInterruptsAndReturnState_0x116ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiDisableInterruptsAndReturnState_0x116ea0");
#endif

    switch (ctx->pc) {
        case 0x116eb8u: goto label_116eb8;
        default: break;
    }

    ctx->pc = 0x116ea0u;

    // 0x116ea0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x116ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x116ea4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x116ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x116ea8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x116ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x116eac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x116EACu;
    {
        const bool branch_taken_0x116eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EACu;
        // 0x116eb0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116eac) {
            ctx->pc = 0x116EE4u;
            goto label_116ee4;
        }
    }
    ctx->pc = 0x116EB4u;
    // 0x116eb4: 0x0  nop
    ctx->pc = 0x116eb4u;
    // NOP
label_116eb8:
    // 0x116eb8: 0x42000039  di
    ctx->pc = 0x116eb8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x116ebc: 0x40f  sync.p
    ctx->pc = 0x116ebcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x116ec0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x116ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x116ec4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x116ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x116ec8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116ecc: 0x0  nop
    ctx->pc = 0x116eccu;
    // NOP
    // 0x116ed0: 0x0  nop
    ctx->pc = 0x116ed0u;
    // NOP
    // 0x116ed4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x116ED4u;
    {
        const bool branch_taken_0x116ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ed4) {
            ctx->pc = 0x116EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116eb8;
        }
    }
    ctx->pc = 0x116EDCu;
    // 0x116edc: 0x3e00008  jr          $ra
    ctx->pc = 0x116EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EDCu;
        // 0x116ee0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EE4u;
label_116ee4:
    // 0x116ee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x116EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE8u;
        // 0x116eec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EF0u;
}
