#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232DE0
// Address: 0x232de0 - 0x232e08
void sub_00232DE0_0x232de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232DE0_0x232de0");
#endif

    ctx->pc = 0x232de0u;

    // 0x232de0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x232de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x232de4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x232DE4u;
    {
        const bool branch_taken_0x232de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232de4) {
            ctx->pc = 0x232DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232DE4u;
            // 0x232de8: 0xfc800038  sd          $zero, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232DF8u;
            goto label_232df8;
        }
    }
    ctx->pc = 0x232DECu;
    // 0x232dec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x232decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x232df0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x232df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x232df4: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x232df4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
label_232df8:
    // 0x232df8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x232df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x232dfc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x232dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x232e00: 0x3e00008  jr          $ra
    ctx->pc = 0x232E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E00u;
            // 0x232e04: 0xfc800030  sd          $zero, 0x30($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232E08u;
    ctx->pc = 0x232e08u;
}
