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

// Function: sub_001BAC20
// Address: 0x1bac20 - 0x1bac58
void sub_001BAC20_0x1bac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAC20_0x1bac20");
#endif

    switch (ctx->pc) {
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac3cu: goto label_1bac3c;
        case 0x1bac44u: goto label_1bac44;
        default: break;
    }

    ctx->pc = 0x1bac20u;

    // 0x1bac20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bac28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bac2c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC34u);
    ctx->pc = 0x1BAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC2Cu;
    // 0x1bac30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BAC2Cu, 0x1BAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC34u;
label_1bac34:
    // 0x1bac34: 0xc06eb16  jal         func_1BAC58
    ctx->pc = 0x1BAC34u;
    SET_GPR_U32(ctx, 31, 0x1BAC3Cu);
    ctx->pc = 0x1BAC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC34u;
    // 0x1bac38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC58u, 0x1BAC34u, 0x1BAC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC3Cu;
label_1bac3c:
    // 0x1bac3c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC44u);
    ctx->pc = 0x1BAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC3Cu;
    // 0x1bac40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BAC3Cu, 0x1BAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC44u;
label_1bac44:
    // 0x1bac44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bac48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bac48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bac4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bac50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC50u;
        // 0x1bac54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAC58u;
}
