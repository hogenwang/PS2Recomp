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

// Function: sub_001B6570
// Address: 0x1b6570 - 0x1b65c0
void sub_001B6570_0x1b6570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6570_0x1b6570");
#endif

    switch (ctx->pc) {
        case 0x1b65a8u: goto label_1b65a8;
        default: break;
    }

    ctx->pc = 0x1b6570u;

    // 0x1b6570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6574: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b6578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b657c: 0x2442b408  addiu       $v0, $v0, -0x4BF8
    ctx->pc = 0x1b657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947848));
    // 0x1b6580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b6584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b658c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B658Cu;
    {
        const bool branch_taken_0x1b658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B658Cu;
        // 0x1b6590: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b658c) {
            ctx->pc = 0x1B65A8u;
            goto label_1b65a8;
        }
    }
    ctx->pc = 0x1B6594u;
    // 0x1b6594: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b6598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b659c: 0x2484b428  addiu       $a0, $a0, -0x4BD8
    ctx->pc = 0x1b659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    // 0x1b65a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1B65A0u;
    SET_GPR_U32(ctx, 31, 0x1B65A8u);
    ctx->pc = 0x1B65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65A0u;
    // 0x1b65a4: 0x24060f00  addiu       $a2, $zero, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1B65A0u, 0x1B65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b65a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b65ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b65b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B65B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65B0u;
        // 0x1b65b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B65B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B65B8u;
    // 0x1b65b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B65B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B65B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B65C0u;
}
