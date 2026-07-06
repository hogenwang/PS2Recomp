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

// Function: sub_001E1130
// Address: 0x1e1130 - 0x1e1170
void sub_001E1130_0x1e1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1130_0x1e1130");
#endif

    switch (ctx->pc) {
        case 0x1e1140u: goto label_1e1140;
        case 0x1e1150u: goto label_1e1150;
        case 0x1e115cu: goto label_1e115c;
        default: break;
    }

    ctx->pc = 0x1e1130u;

    // 0x1e1130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1138: 0xc07dcac  jal         func_1F72B0
    ctx->pc = 0x1E1138u;
    SET_GPR_U32(ctx, 31, 0x1E1140u);
    ctx->pc = 0x1E113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1138u;
    // 0x1e113c: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F72B0u, 0x1E1138u, 0x1E1140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1140u;
label_1e1140:
    // 0x1e1140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1140u;
    {
        const bool branch_taken_0x1e1140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1140u;
        // 0x1e1144: 0x2404fec9  addiu       $a0, $zero, -0x137 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1140) {
            ctx->pc = 0x1E1160u;
            goto label_1e1160;
        }
    }
    ctx->pc = 0x1E1148u;
    // 0x1e1148: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E1148u;
    SET_GPR_U32(ctx, 31, 0x1E1150u);
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1E1148u, 0x1E1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1150u;
label_1e1150:
    // 0x1e1150: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1154: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1154u;
    SET_GPR_U32(ctx, 31, 0x1E115Cu);
    ctx->pc = 0x1E1158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1154u;
    // 0x1e1158: 0x2484d0d8  addiu       $a0, $a0, -0x2F28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E1154u, 0x1E115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E115Cu;
label_1e115c:
    // 0x1e115c: 0x2402fec9  addiu       $v0, $zero, -0x137
    ctx->pc = 0x1e115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
label_1e1160:
    // 0x1e1160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1164: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1164u;
        // 0x1e1168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E116Cu;
    // 0x1e116c: 0x0  nop
    ctx->pc = 0x1e116cu;
    // NOP
}
