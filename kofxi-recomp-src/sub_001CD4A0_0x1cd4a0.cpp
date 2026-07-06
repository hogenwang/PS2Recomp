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

// Function: sub_001CD4A0
// Address: 0x1cd4a0 - 0x1cd4f0
void sub_001CD4A0_0x1cd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD4A0_0x1cd4a0");
#endif

    switch (ctx->pc) {
        case 0x1cd4d4u: goto label_1cd4d4;
        default: break;
    }

    ctx->pc = 0x1cd4a0u;

    // 0x1cd4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd4a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd4ac: 0x2450d9e4  addiu       $s0, $v0, -0x261C
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957540));
    // 0x1cd4b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd4b4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cd4b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd4bc: 0x2463d9e0  addiu       $v1, $v1, -0x2620
    ctx->pc = 0x1cd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
    // 0x1cd4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd4c4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD4C4u;
    {
        const bool branch_taken_0x1cd4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4C4u;
        // 0x1cd4c8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4c4) {
            ctx->pc = 0x1CD4DCu;
            goto label_1cd4dc;
        }
    }
    ctx->pc = 0x1CD4CCu;
    // 0x1cd4cc: 0xc070914  jal         func_1C2450
    ctx->pc = 0x1CD4CCu;
    SET_GPR_U32(ctx, 31, 0x1CD4D4u);
    ctx->pc = 0x1C2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2450u, 0x1CD4CCu, 0x1CD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4D4u;
label_1cd4d4:
    // 0x1cd4d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cd4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd4d8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cd4dc:
    // 0x1cd4dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd4e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cd4e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4E8u;
        // 0x1cd4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4F0u;
}
