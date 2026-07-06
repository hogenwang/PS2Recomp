#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231A98
// Address: 0x231a98 - 0x231ac0
void sub_00231A98_0x231a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A98_0x231a98");
#endif

    ctx->pc = 0x231a98u;

    // 0x231a98: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x231a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x231a9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231A9Cu;
    {
        const bool branch_taken_0x231a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A9Cu;
            // 0x231aa0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a9c) {
            ctx->pc = 0x231AB4u;
            goto label_231ab4;
        }
    }
    ctx->pc = 0x231AA4u;
    // 0x231aa4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231AA4u;
    {
        const bool branch_taken_0x231aa4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x231AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AA4u;
            // 0x231aa8: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231aa4) {
            ctx->pc = 0x231AB4u;
            goto label_231ab4;
        }
    }
    ctx->pc = 0x231AACu;
    // 0x231aac: 0x8c43acc0  lw          $v1, -0x5340($v0)
    ctx->pc = 0x231aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945984)));
    // 0x231ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231ab4:
    // 0x231ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x231AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AB4u;
            // 0x231ab8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231ABCu;
    // 0x231abc: 0x0  nop
    ctx->pc = 0x231abcu;
    // NOP
    ctx->pc = 0x231ac0u;
}
