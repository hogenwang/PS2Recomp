#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225EE8
// Address: 0x225ee8 - 0x225ef8
void sub_00225EE8_0x225ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225EE8_0x225ee8");
#endif

    ctx->pc = 0x225ee8u;

    // 0x225ee8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225eec: 0x3e00008  jr          $ra
    ctx->pc = 0x225EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225EECu;
            // 0x225ef0: 0x8de2f1c0  lw          $v0, -0xE40($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963648)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225EF4u;
    // 0x225ef4: 0x0  nop
    ctx->pc = 0x225ef4u;
    // NOP
    ctx->pc = 0x225ef8u;
}
