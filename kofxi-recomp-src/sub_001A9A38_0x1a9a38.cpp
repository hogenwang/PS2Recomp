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

// Function: sub_001A9A38
// Address: 0x1a9a38 - 0x1a9a60
void sub_001A9A38_0x1a9a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A38_0x1a9a38");
#endif

    switch (ctx->pc) {
        case 0x1a9a38u: goto label_1a9a38;
        case 0x1a9a3cu: goto label_1a9a3c;
        case 0x1a9a40u: goto label_1a9a40;
        case 0x1a9a44u: goto label_1a9a44;
        case 0x1a9a48u: goto label_1a9a48;
        case 0x1a9a4cu: goto label_1a9a4c;
        case 0x1a9a50u: goto label_1a9a50;
        case 0x1a9a54u: goto label_1a9a54;
        case 0x1a9a58u: goto label_1a9a58;
        case 0x1a9a5cu: goto label_1a9a5c;
        default: break;
    }

    ctx->pc = 0x1a9a38u;

label_1a9a38:
    // 0x1a9a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a9a3c:
    // 0x1a9a3c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a9a40:
    // 0x1a9a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9a44:
    // 0x1a9a44: 0x8c43e47c  lw          $v1, -0x1B84($v0)
    ctx->pc = 0x1a9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960252)));
label_1a9a48:
    // 0x1a9a48: 0x60f809  jalr        $v1
label_1a9a4c:
    if (ctx->pc == 0x1A9A4Cu) {
        ctx->pc = 0x1A9A50u;
        goto label_1a9a50;
    }
    ctx->pc = 0x1A9A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9A50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A48u, 0x1A9A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9A50u;
label_1a9a50:
    // 0x1a9a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9a54:
    // 0x1a9a54: 0x3e00008  jr          $ra
label_1a9a58:
    if (ctx->pc == 0x1A9A58u) {
        ctx->pc = 0x1A9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A54u;
        // 0x1a9a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A5Cu;
        goto label_1a9a5c;
    }
    ctx->pc = 0x1A9A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A54u;
        // 0x1a9a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9A5Cu;
label_1a9a5c:
    // 0x1a9a5c: 0x0  nop
    ctx->pc = 0x1a9a5cu;
    // NOP
    if (ctx->pc == 0x1a9a5cu) { ctx->pc = 0x1a9a60u; }
}
