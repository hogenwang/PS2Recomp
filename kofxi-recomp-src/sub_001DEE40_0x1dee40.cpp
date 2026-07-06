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

// Function: sub_001DEE40
// Address: 0x1dee40 - 0x1dee78
void sub_001DEE40_0x1dee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEE40_0x1dee40");
#endif

    switch (ctx->pc) {
        case 0x1dee40u: goto label_1dee40;
        case 0x1dee44u: goto label_1dee44;
        case 0x1dee48u: goto label_1dee48;
        case 0x1dee4cu: goto label_1dee4c;
        case 0x1dee50u: goto label_1dee50;
        case 0x1dee54u: goto label_1dee54;
        case 0x1dee58u: goto label_1dee58;
        case 0x1dee5cu: goto label_1dee5c;
        case 0x1dee60u: goto label_1dee60;
        case 0x1dee64u: goto label_1dee64;
        case 0x1dee68u: goto label_1dee68;
        case 0x1dee6cu: goto label_1dee6c;
        case 0x1dee70u: goto label_1dee70;
        case 0x1dee74u: goto label_1dee74;
        default: break;
    }

    ctx->pc = 0x1dee40u;

label_1dee40:
    // 0x1dee40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1dee44:
    // 0x1dee44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dee48:
    // 0x1dee48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1dee4c:
    // 0x1dee4c: 0xc0781e0  jal         func_1E0780
label_1dee50:
    if (ctx->pc == 0x1DEE50u) {
        ctx->pc = 0x1DEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE4Cu;
        // 0x1dee50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE54u;
        goto label_1dee54;
    }
    ctx->pc = 0x1DEE4Cu;
    SET_GPR_U32(ctx, 31, 0x1DEE54u);
    ctx->pc = 0x1DEE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEE4Cu;
    // 0x1dee50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1DEE4Cu, 0x1DEE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEE54u;
label_1dee54:
    // 0x1dee54: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1dee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dee58:
    // 0x1dee58: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1dee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1dee5c:
    // 0x1dee5c: 0x60f809  jalr        $v1
label_1dee60:
    if (ctx->pc == 0x1DEE60u) {
        ctx->pc = 0x1DEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE5Cu;
        // 0x1dee60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE64u;
        goto label_1dee64;
    }
    ctx->pc = 0x1DEE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DEE64u);
        ctx->pc = 0x1DEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE5Cu;
        // 0x1dee60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEE5Cu, 0x1DEE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEE64u;
label_1dee64:
    // 0x1dee64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dee64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dee68:
    // 0x1dee68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dee6c:
    // 0x1dee6c: 0x3e00008  jr          $ra
label_1dee70:
    if (ctx->pc == 0x1DEE70u) {
        ctx->pc = 0x1DEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE6Cu;
        // 0x1dee70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE74u;
        goto label_1dee74;
    }
    ctx->pc = 0x1DEE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE6Cu;
        // 0x1dee70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEE74u;
label_1dee74:
    // 0x1dee74: 0x0  nop
    ctx->pc = 0x1dee74u;
    // NOP
}
