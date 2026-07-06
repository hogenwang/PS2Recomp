#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3240
// Address: 0x1c3240 - 0x1c3250
void sub_001C3240_0x1c3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3240_0x1c3240");
#endif

    ctx->pc = 0x1c3240u;

    // 0x1c3240: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c3244: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1c3244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1c3248: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3248u;
            // 0x1c324c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3250u;
    ctx->pc = 0x1c3250u;
}
