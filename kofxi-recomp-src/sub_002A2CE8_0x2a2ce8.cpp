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

// Function: sub_002A2CE8
// Address: 0x2a2ce8 - 0x2a2d18
void sub_002A2CE8_0x2a2ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2CE8_0x2a2ce8");
#endif

    switch (ctx->pc) {
        case 0x2a2ce8u: goto label_2a2ce8;
        case 0x2a2cecu: goto label_2a2cec;
        case 0x2a2cf0u: goto label_2a2cf0;
        case 0x2a2cf4u: goto label_2a2cf4;
        case 0x2a2cf8u: goto label_2a2cf8;
        case 0x2a2cfcu: goto label_2a2cfc;
        case 0x2a2d00u: goto label_2a2d00;
        case 0x2a2d04u: goto label_2a2d04;
        case 0x2a2d08u: goto label_2a2d08;
        case 0x2a2d0cu: goto label_2a2d0c;
        case 0x2a2d10u: goto label_2a2d10;
        case 0x2a2d14u: goto label_2a2d14;
        default: break;
    }

    ctx->pc = 0x2a2ce8u;

label_2a2ce8:
    // 0x2a2ce8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a2cec:
    // 0x2a2cec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a2cf0:
    // 0x2a2cf0: 0x8c436988  lw          $v1, 0x6988($v0)
    ctx->pc = 0x2a2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27016)));
label_2a2cf4:
    // 0x2a2cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a2cf8:
    // 0x2a2cf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a2cfc:
    if (ctx->pc == 0x2A2CFCu) {
        ctx->pc = 0x2A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CF8u;
        // 0x2a2cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D00u;
        goto label_2a2d00;
    }
    ctx->pc = 0x2A2CF8u;
    {
        const bool branch_taken_0x2a2cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CF8u;
        // 0x2a2cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cf8) {
            ctx->pc = 0x2A2D08u;
            goto label_2a2d08;
        }
    }
    ctx->pc = 0x2A2D00u;
label_2a2d00:
    // 0x2a2d00: 0x60f809  jalr        $v1
label_2a2d04:
    if (ctx->pc == 0x2A2D04u) {
        ctx->pc = 0x2A2D08u;
        goto label_2a2d08;
    }
    ctx->pc = 0x2A2D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A2D08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D00u, 0x2A2D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2D08u;
label_2a2d08:
    // 0x2a2d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2d0c:
    // 0x2a2d0c: 0x3e00008  jr          $ra
label_2a2d10:
    if (ctx->pc == 0x2A2D10u) {
        ctx->pc = 0x2A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D0Cu;
        // 0x2a2d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D14u;
        goto label_2a2d14;
    }
    ctx->pc = 0x2A2D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D0Cu;
        // 0x2a2d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2D14u;
label_2a2d14:
    // 0x2a2d14: 0x0  nop
    ctx->pc = 0x2a2d14u;
    // NOP
}
