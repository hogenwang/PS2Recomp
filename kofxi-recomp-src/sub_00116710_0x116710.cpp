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

// Function: sub_00116710
// Address: 0x116710 - 0x116758
void sub_00116710_0x116710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116710_0x116710");
#endif

    switch (ctx->pc) {
        case 0x116730u: goto label_116730;
        default: break;
    }

    ctx->pc = 0x116710u;

    // 0x116710: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x116710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x116714: 0xc  syscall     0
    ctx->pc = 0x116714u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116718: 0x3e00008  jr          $ra
    ctx->pc = 0x116718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116720u;
    // 0x116720: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x116720u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x116724: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x116724u;
    {
        const bool branch_taken_0x116724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116724u;
        // 0x116728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116724) {
            ctx->pc = 0x116750u;
            goto label_116750;
        }
    }
    ctx->pc = 0x11672Cu;
    // 0x11672c: 0x0  nop
    ctx->pc = 0x11672cu;
    // NOP
label_116730:
    // 0x116730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x116730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116734: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116738: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x116738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11673c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x11673cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x116740: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x116740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x116744: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x116748: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116748u;
    {
        const bool branch_taken_0x116748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116748) {
            ctx->pc = 0x116730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116730;
        }
    }
    ctx->pc = 0x116750u;
label_116750:
    // 0x116750: 0x3e00008  jr          $ra
    ctx->pc = 0x116750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116750u;
        // 0x116754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116758u;
}
