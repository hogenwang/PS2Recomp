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

// Function: sub_001DEDB0
// Address: 0x1dedb0 - 0x1dede8
void sub_001DEDB0_0x1dedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEDB0_0x1dedb0");
#endif

    switch (ctx->pc) {
        case 0x1dedb0u: goto label_1dedb0;
        case 0x1dedb4u: goto label_1dedb4;
        case 0x1dedb8u: goto label_1dedb8;
        case 0x1dedbcu: goto label_1dedbc;
        case 0x1dedc0u: goto label_1dedc0;
        case 0x1dedc4u: goto label_1dedc4;
        case 0x1dedc8u: goto label_1dedc8;
        case 0x1dedccu: goto label_1dedcc;
        case 0x1dedd0u: goto label_1dedd0;
        case 0x1dedd4u: goto label_1dedd4;
        case 0x1dedd8u: goto label_1dedd8;
        case 0x1deddcu: goto label_1deddc;
        case 0x1dede0u: goto label_1dede0;
        case 0x1dede4u: goto label_1dede4;
        default: break;
    }

    ctx->pc = 0x1dedb0u;

label_1dedb0:
    // 0x1dedb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1dedb4:
    // 0x1dedb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dedb8:
    // 0x1dedb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1dedbc:
    // 0x1dedbc: 0xc0781e0  jal         func_1E0780
label_1dedc0:
    if (ctx->pc == 0x1DEDC0u) {
        ctx->pc = 0x1DEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDBCu;
        // 0x1dedc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEDC4u;
        goto label_1dedc4;
    }
    ctx->pc = 0x1DEDBCu;
    SET_GPR_U32(ctx, 31, 0x1DEDC4u);
    ctx->pc = 0x1DEDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDBCu;
    // 0x1dedc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1DEDBCu, 0x1DEDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDC4u;
label_1dedc4:
    // 0x1dedc4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1dedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dedc8:
    // 0x1dedc8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1dedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1dedcc:
    // 0x1dedcc: 0x40f809  jalr        $v0
label_1dedd0:
    if (ctx->pc == 0x1DEDD0u) {
        ctx->pc = 0x1DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDCCu;
        // 0x1dedd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEDD4u;
        goto label_1dedd4;
    }
    ctx->pc = 0x1DEDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEDD4u);
        ctx->pc = 0x1DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDCCu;
        // 0x1dedd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDCCu, 0x1DEDD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEDD4u;
label_1dedd4:
    // 0x1dedd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dedd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dedd8:
    // 0x1dedd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dedd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1deddc:
    // 0x1deddc: 0x3e00008  jr          $ra
label_1dede0:
    if (ctx->pc == 0x1DEDE0u) {
        ctx->pc = 0x1DEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDDCu;
        // 0x1dede0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEDE4u;
        goto label_1dede4;
    }
    ctx->pc = 0x1DEDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDDCu;
        // 0x1dede0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDE4u;
label_1dede4:
    // 0x1dede4: 0x0  nop
    ctx->pc = 0x1dede4u;
    // NOP
    if (ctx->pc == 0x1dede4u) { ctx->pc = 0x1dede8u; }
}
