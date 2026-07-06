#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286718
// Address: 0x286718 - 0x286728
void sub_00286718_0x286718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286718_0x286718");
#endif

    ctx->pc = 0x286718u;

    // 0x286718: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28671c: 0x3e00008  jr          $ra
    ctx->pc = 0x28671Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28671Cu;
            // 0x286720: 0x2442a710  addiu       $v0, $v0, -0x58F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286724u;
    // 0x286724: 0x0  nop
    ctx->pc = 0x286724u;
    // NOP
    ctx->pc = 0x286728u;
}
