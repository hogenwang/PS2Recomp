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

// Function: sub_003089D0
// Address: 0x3089d0 - 0x308a20
void sub_003089D0_0x3089d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003089D0_0x3089d0");
#endif

    switch (ctx->pc) {
        case 0x3089f0u: goto label_3089f0;
        case 0x3089fcu: goto label_3089fc;
        default: break;
    }

    ctx->pc = 0x3089d0u;

    // 0x3089d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3089d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3089d4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3089d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3089d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3089d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3089dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3089dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3089e0: 0x8c7047b0  lw          $s0, 0x47B0($v1)
    ctx->pc = 0x3089e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18352)));
    // 0x3089e4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3089E4u;
    {
        const bool branch_taken_0x3089e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3089e4) {
            ctx->pc = 0x308A10u;
            goto label_308a10;
        }
    }
    ctx->pc = 0x3089ECu;
    // 0x3089ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3089ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3089f0:
    // 0x3089f0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3089f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3089f4: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x3089F4u;
    SET_GPR_U32(ctx, 31, 0x3089FCu);
    ctx->pc = 0x3089F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089F4u;
    // 0x3089f8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3087C0u, 0x3089F4u, 0x3089FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089FCu;
label_3089fc:
    // 0x3089fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3089fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308a00: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x308a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x308a04: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308a08: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x308A08u;
    {
        const bool branch_taken_0x308a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x308a08) {
            ctx->pc = 0x308A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A08u;
            // 0x308a0c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3089F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3089f0;
        }
    }
    ctx->pc = 0x308A10u;
label_308a10:
    // 0x308a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308a18: 0x3e00008  jr          $ra
    ctx->pc = 0x308A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A18u;
        // 0x308a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A20u;
}
