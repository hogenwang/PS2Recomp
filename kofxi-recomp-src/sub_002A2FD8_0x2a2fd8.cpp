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

// Function: sub_002A2FD8
// Address: 0x2a2fd8 - 0x2a3000
void sub_002A2FD8_0x2a2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2FD8_0x2a2fd8");
#endif

    switch (ctx->pc) {
        case 0x2a2fd8u: goto label_2a2fd8;
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a2fe0u: goto label_2a2fe0;
        case 0x2a2fe4u: goto label_2a2fe4;
        case 0x2a2fe8u: goto label_2a2fe8;
        case 0x2a2fecu: goto label_2a2fec;
        case 0x2a2ff0u: goto label_2a2ff0;
        case 0x2a2ff4u: goto label_2a2ff4;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a2ffcu: goto label_2a2ffc;
        default: break;
    }

    ctx->pc = 0x2a2fd8u;

label_2a2fd8:
    // 0x2a2fd8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2fdc:
    // 0x2a2fdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a2fe0:
    // 0x2a2fe0: 0x8c626a14  lw          $v0, 0x6A14($v1)
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27156)));
label_2a2fe4:
    // 0x2a2fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a2fe8:
    // 0x2a2fe8: 0x40f809  jalr        $v0
label_2a2fec:
    if (ctx->pc == 0x2A2FECu) {
        ctx->pc = 0x2A2FF0u;
        goto label_2a2ff0;
    }
    ctx->pc = 0x2A2FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2FF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FE8u, 0x2A2FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2FF0u;
label_2a2ff0:
    // 0x2a2ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2ff4:
    // 0x2a2ff4: 0x3e00008  jr          $ra
label_2a2ff8:
    if (ctx->pc == 0x2A2FF8u) {
        ctx->pc = 0x2A2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FF4u;
        // 0x2a2ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FFCu;
        goto label_2a2ffc;
    }
    ctx->pc = 0x2A2FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FF4u;
        // 0x2a2ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2FFCu;
label_2a2ffc:
    // 0x2a2ffc: 0x0  nop
    ctx->pc = 0x2a2ffcu;
    // NOP
}
