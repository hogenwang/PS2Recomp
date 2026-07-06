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

// Function: sub_0014BD10
// Address: 0x14bd10 - 0x14bd50
void sub_0014BD10_0x14bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BD10_0x14bd10");
#endif

    switch (ctx->pc) {
        case 0x14bd30u: goto label_14bd30;
        default: break;
    }

    ctx->pc = 0x14bd10u;

    // 0x14bd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14bd14: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14bd1c: 0x8c645d08  lw          $a0, 0x5D08($v1)
    ctx->pc = 0x14bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23816)));
    // 0x14bd20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14BD20u;
    {
        const bool branch_taken_0x14bd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd20) {
            ctx->pc = 0x14BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD20u;
            // 0x14bd24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD3Cu;
            goto label_14bd3c;
        }
    }
    ctx->pc = 0x14BD28u;
    // 0x14bd28: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14BD28u;
    SET_GPR_U32(ctx, 31, 0x14BD30u);
    ctx->pc = 0x1B04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04A0u, 0x14BD28u, 0x14BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD30u;
label_14bd30:
    // 0x14bd30: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bd34: 0xac605d08  sw          $zero, 0x5D08($v1)
    ctx->pc = 0x14bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23816), GPR_U32(ctx, 0));
    // 0x14bd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bd3c:
    // 0x14bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD3Cu;
        // 0x14bd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BD44u;
    // 0x14bd44: 0x0  nop
    ctx->pc = 0x14bd44u;
    // NOP
    // 0x14bd48: 0x0  nop
    ctx->pc = 0x14bd48u;
    // NOP
    // 0x14bd4c: 0x0  nop
    ctx->pc = 0x14bd4cu;
    // NOP
    if (ctx->pc == 0x14bd4cu) { ctx->pc = 0x14bd50u; }
}
