#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCCC8
// Address: 0x2dccc8 - 0x2dcd00
void sub_002DCCC8_0x2dccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCCC8_0x2dccc8");
#endif

    switch (ctx->pc) {
        case 0x2dccd8u: goto label_2dccd8;
        default: break;
    }

    ctx->pc = 0x2dccc8u;

    // 0x2dccc8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2dccc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dcccc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DCCCCu;
    {
        const bool branch_taken_0x2dcccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCCCu;
            // 0x2dccd0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcccc) {
            ctx->pc = 0x2DCCF4u;
            goto label_2dccf4;
        }
    }
    ctx->pc = 0x2DCCD4u;
    // 0x2dccd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2dccd8:
    // 0x2dccd8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2dccd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dccdc: 0x0  nop
    ctx->pc = 0x2dccdcu;
    // NOP
    // 0x2dcce0: 0x0  nop
    ctx->pc = 0x2dcce0u;
    // NOP
    // 0x2dcce4: 0x0  nop
    ctx->pc = 0x2dcce4u;
    // NOP
    // 0x2dcce8: 0x0  nop
    ctx->pc = 0x2dcce8u;
    // NOP
    // 0x2dccec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DCCECu;
    {
        const bool branch_taken_0x2dccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dccec) {
            ctx->pc = 0x2DCCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCECu;
            // 0x2dccf0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dccd8;
        }
    }
    ctx->pc = 0x2DCCF4u;
label_2dccf4:
    // 0x2dccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCF4u;
            // 0x2dccf8: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCCFCu;
    // 0x2dccfc: 0x0  nop
    ctx->pc = 0x2dccfcu;
    // NOP
    ctx->pc = 0x2dcd00u;
}
