#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00341170
// Address: 0x341170 - 0x341190
void sub_00341170_0x341170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341170_0x341170");
#endif

    ctx->pc = 0x341170u;

    // 0x341170: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341174: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341178: 0x8c65ea48  lw          $a1, -0x15B8($v1)
    ctx->pc = 0x341178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961736)));
    // 0x34117c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34117cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341180: 0xac60e900  sw          $zero, -0x1700($v1)
    ctx->pc = 0x341180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961408), GPR_U32(ctx, 0));
    // 0x341184: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x341184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x341188: 0x3e00008  jr          $ra
    ctx->pc = 0x341188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341188u;
            // 0x34118c: 0xac83ea38  sw          $v1, -0x15C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341190u;
    ctx->pc = 0x341190u;
}
