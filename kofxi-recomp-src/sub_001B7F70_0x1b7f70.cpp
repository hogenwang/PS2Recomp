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

// Function: sub_001B7F70
// Address: 0x1b7f70 - 0x1b7fb8
void sub_001B7F70_0x1b7f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7F70_0x1b7f70");
#endif

    switch (ctx->pc) {
        case 0x1b7f94u: goto label_1b7f94;
        case 0x1b7f9cu: goto label_1b7f9c;
        case 0x1b7fa4u: goto label_1b7fa4;
        default: break;
    }

    ctx->pc = 0x1b7f70u;

    // 0x1b7f70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b7f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F74u;
        // 0x1b7f78: 0xac44b420  sw          $a0, -0x4BE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F7Cu;
    // 0x1b7f7c: 0x0  nop
    ctx->pc = 0x1b7f7cu;
    // NOP
    // 0x1b7f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7f88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7f8c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B7F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7F94u);
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B7F8Cu, 0x1B7F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F94u;
label_1b7f94:
    // 0x1b7f94: 0xc06dfee  jal         func_1B7FB8
    ctx->pc = 0x1B7F94u;
    SET_GPR_U32(ctx, 31, 0x1B7F9Cu);
    ctx->pc = 0x1B7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FB8u, 0x1B7F94u, 0x1B7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F9Cu;
label_1b7f9c:
    // 0x1b7f9c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7FA4u);
    ctx->pc = 0x1B7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F9Cu;
    // 0x1b7fa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1B7F9Cu, 0x1B7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FA4u;
label_1b7fa4:
    // 0x1b7fa4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FB0u;
        // 0x1b7fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7FB8u;
}
