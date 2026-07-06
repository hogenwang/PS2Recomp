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

// Function: sub_00200738
// Address: 0x200738 - 0x200780
void sub_00200738_0x200738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200738_0x200738");
#endif

    switch (ctx->pc) {
        case 0x200740u: goto label_200740;
        case 0x200760u: goto label_200760;
        default: break;
    }

    ctx->pc = 0x200738u;

    // 0x200738: 0x3e00008  jr          $ra
    ctx->pc = 0x200738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200738u;
        // 0x20073c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200740u;
label_200740:
    // 0x200740: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x200740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x200744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200748: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x20074c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x20074cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x200750: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x200750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x200754: 0x3e00008  jr          $ra
    ctx->pc = 0x200754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200754u;
        // 0x200758: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20075Cu;
    // 0x20075c: 0x0  nop
    ctx->pc = 0x20075cu;
    // NOP
label_200760:
    // 0x200760: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x200764: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200768: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x200768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x20076c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200770: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x200770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x200774: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200778: 0x3e00008  jr          $ra
    ctx->pc = 0x200778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200778u;
        // 0x20077c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200780u;
}
