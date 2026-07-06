#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1E00
// Address: 0x2f1e00 - 0x2f1e10
void sub_002F1E00_0x2f1e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1E00_0x2f1e00");
#endif

    ctx->pc = 0x2f1e00u;

    // 0x2f1e00: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2f1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2f1e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1E04u;
            // 0x2f1e08: 0x3042000c  andi        $v0, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1E0Cu;
    // 0x2f1e0c: 0x0  nop
    ctx->pc = 0x2f1e0cu;
    // NOP
    ctx->pc = 0x2f1e10u;
}
