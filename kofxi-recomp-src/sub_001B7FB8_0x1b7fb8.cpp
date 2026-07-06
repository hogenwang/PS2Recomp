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

// Function: sub_001B7FB8
// Address: 0x1b7fb8 - 0x1b8000
void sub_001B7FB8_0x1b7fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7FB8_0x1b7fb8");
#endif

    switch (ctx->pc) {
        case 0x1b7fdcu: goto label_1b7fdc;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7fecu: goto label_1b7fec;
        default: break;
    }

    ctx->pc = 0x1b7fb8u;

    // 0x1b7fb8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b7fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FBCu;
        // 0x1b7fc0: 0x8c62b420  lw          $v0, -0x4BE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7FC4u;
    // 0x1b7fc4: 0x0  nop
    ctx->pc = 0x1b7fc4u;
    // NOP
    // 0x1b7fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7fd4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B7FD4u;
    SET_GPR_U32(ctx, 31, 0x1B7FDCu);
    ctx->pc = 0x1B7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FD4u;
    // 0x1b7fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B7FD4u, 0x1B7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FDCu;
label_1b7fdc:
    // 0x1b7fdc: 0xc06e000  jal         func_1B8000
    ctx->pc = 0x1B7FDCu;
    SET_GPR_U32(ctx, 31, 0x1B7FE4u);
    ctx->pc = 0x1B7FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FDCu;
    // 0x1b7fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8000u, 0x1B7FDCu, 0x1B7FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FE4u;
label_1b7fe4:
    // 0x1b7fe4: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B7FE4u;
    SET_GPR_U32(ctx, 31, 0x1B7FECu);
    ctx->pc = 0x1B7FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FE4u;
    // 0x1b7fe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1B7FE4u, 0x1B7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FECu;
label_1b7fec:
    // 0x1b7fec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FF8u;
        // 0x1b7ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8000u;
}
