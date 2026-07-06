#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DDE30
// Address: 0x1dde30 - 0x1dde48
void sub_001DDE30_0x1dde30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDE30_0x1dde30");
#endif

    ctx->pc = 0x1dde30u;

    // 0x1dde30: 0x24820364  addiu       $v0, $a0, 0x364
    ctx->pc = 0x1dde30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 868));
    // 0x1dde34: 0xac82037c  sw          $v0, 0x37C($a0)
    ctx->pc = 0x1dde34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 892), GPR_U32(ctx, 2));
    // 0x1dde38: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1dde38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1dde3c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1dde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1dde40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE40u;
            // 0x1dde44: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDE48u;
    ctx->pc = 0x1dde48u;
}
