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

// Function: sub_0022D930
// Address: 0x22d930 - 0x22d970
void sub_0022D930_0x22d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D930_0x22d930");
#endif

    switch (ctx->pc) {
        case 0x22d954u: goto label_22d954;
        default: break;
    }

    ctx->pc = 0x22d930u;

    // 0x22d930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d938: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x22d938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x22d93c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d940: 0x8e04fa00  lw          $a0, -0x600($s0)
    ctx->pc = 0x22d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
    // 0x22d944: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D944u;
    {
        const bool branch_taken_0x22d944 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x22D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D944u;
        // 0x22d948: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d944) {
            ctx->pc = 0x22D958u;
            goto label_22d958;
        }
    }
    ctx->pc = 0x22D94Cu;
    // 0x22d94c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x22D94Cu;
    SET_GPR_U32(ctx, 31, 0x22D954u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x22D94Cu, 0x22D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D954u;
label_22d954:
    // 0x22d954: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22d958:
    // 0x22d958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d95c: 0xae02fa00  sw          $v0, -0x600($s0)
    ctx->pc = 0x22d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965760), GPR_U32(ctx, 2));
    // 0x22d960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d964: 0x3e00008  jr          $ra
    ctx->pc = 0x22D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D964u;
        // 0x22d968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D96Cu;
    // 0x22d96c: 0x0  nop
    ctx->pc = 0x22d96cu;
    // NOP
}
