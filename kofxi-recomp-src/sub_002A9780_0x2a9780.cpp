#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9780
// Address: 0x2a9780 - 0x2a9790
void sub_002A9780_0x2a9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9780_0x2a9780");
#endif

    ctx->pc = 0x2a9780u;

    // 0x2a9780: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a9780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a9784: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9784u;
            // 0x2a9788: 0x24426ab8  addiu       $v0, $v0, 0x6AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A978Cu;
    // 0x2a978c: 0x0  nop
    ctx->pc = 0x2a978cu;
    // NOP
    ctx->pc = 0x2a9790u;
}
