#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEFF0
// Address: 0x1feff0 - 0x1ff018
void sub_001FEFF0_0x1feff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEFF0_0x1feff0");
#endif

    ctx->pc = 0x1feff0u;

    // 0x1feff0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1feff4: 0x2843ffff  slti        $v1, $v0, -0x1
    ctx->pc = 0x1feff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1feff8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1feff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1feffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEFFCu;
    {
        const bool branch_taken_0x1feffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFFCu;
            // 0x1ff000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feffc) {
            ctx->pc = 0x1FF010u;
            goto label_1ff010;
        }
    }
    ctx->pc = 0x1FF004u;
    // 0x1ff004: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF004u;
    {
        const bool branch_taken_0x1ff004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF004u;
            // 0x1ff008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff004) {
            ctx->pc = 0x1FF010u;
            goto label_1ff010;
        }
    }
    ctx->pc = 0x1FF00Cu;
    // 0x1ff00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff010:
    // 0x1ff010: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF018u;
    ctx->pc = 0x1ff018u;
}
