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

// Function: sub_00308980
// Address: 0x308980 - 0x3089d0
void sub_00308980_0x308980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308980_0x308980");
#endif

    switch (ctx->pc) {
        case 0x3089a0u: goto label_3089a0;
        case 0x3089acu: goto label_3089ac;
        default: break;
    }

    ctx->pc = 0x308980u;

    // 0x308980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308984: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30898c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308990: 0x8c7047ac  lw          $s0, 0x47AC($v1)
    ctx->pc = 0x308990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18348)));
    // 0x308994: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x308994u;
    {
        const bool branch_taken_0x308994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x308994) {
            ctx->pc = 0x3089C0u;
            goto label_3089c0;
        }
    }
    ctx->pc = 0x30899Cu;
    // 0x30899c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30899cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3089a0:
    // 0x3089a0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3089a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3089a4: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x3089A4u;
    SET_GPR_U32(ctx, 31, 0x3089ACu);
    ctx->pc = 0x3089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089A4u;
    // 0x3089a8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3087C0u, 0x3089A4u, 0x3089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089ACu;
label_3089ac:
    // 0x3089ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3089acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3089b0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3089b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x3089b4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x3089b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3089b8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3089B8u;
    {
        const bool branch_taken_0x3089b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3089b8) {
            ctx->pc = 0x3089BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3089B8u;
            // 0x3089bc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3089A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3089a0;
        }
    }
    ctx->pc = 0x3089C0u;
label_3089c0:
    // 0x3089c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3089c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3089c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3089c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3089c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3089C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3089CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089C8u;
        // 0x3089cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3089C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3089D0u;
}
