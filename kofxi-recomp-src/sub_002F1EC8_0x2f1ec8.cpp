#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1EC8
// Address: 0x2f1ec8 - 0x2f1f08
void sub_002F1EC8_0x2f1ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1EC8_0x2f1ec8");
#endif

    switch (ctx->pc) {
        case 0x2f1ed8u: goto label_2f1ed8;
        default: break;
    }

    ctx->pc = 0x2f1ec8u;

    // 0x2f1ec8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f1ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ecc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2f1eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f1ed0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f1ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f1ed4: 0x0  nop
    ctx->pc = 0x2f1ed4u;
    // NOP
label_2f1ed8:
    // 0x2f1ed8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f1ed8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f1edc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F1EDCu;
    {
        const bool branch_taken_0x2f1edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1edc) {
            ctx->pc = 0x2F1F00u;
            goto label_2f1f00;
        }
    }
    ctx->pc = 0x2F1EE4u;
    // 0x2f1ee4: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1EE4u;
    {
        const bool branch_taken_0x2f1ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2F1EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1EE4u;
            // 0x2f1ee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ee4) {
            ctx->pc = 0x2F1EF4u;
            goto label_2f1ef4;
        }
    }
    ctx->pc = 0x2F1EECu;
    // 0x2f1eec: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1EECu;
    {
        const bool branch_taken_0x2f1eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f1eec) {
            ctx->pc = 0x2F1EF8u;
            goto label_2f1ef8;
        }
    }
    ctx->pc = 0x2F1EF4u;
label_2f1ef4:
    // 0x2f1ef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1ef8:
    // 0x2f1ef8: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F1EF8u;
    {
        const bool branch_taken_0x2f1ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ef8) {
            ctx->pc = 0x2F1EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1EF8u;
            // 0x2f1efc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1ed8;
        }
    }
    ctx->pc = 0x2F1F00u;
label_2f1f00:
    // 0x2f1f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1F08u;
    ctx->pc = 0x2f1f08u;
}
