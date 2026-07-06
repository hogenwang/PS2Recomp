#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AFAB8
// Address: 0x2afab8 - 0x2afac8
void sub_002AFAB8_0x2afab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFAB8_0x2afab8");
#endif

    ctx->pc = 0x2afab8u;

    // 0x2afab8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2afab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2afabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFABCu;
            // 0x2afac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFAC4u;
    // 0x2afac4: 0x0  nop
    ctx->pc = 0x2afac4u;
    // NOP
    ctx->pc = 0x2afac8u;
}
