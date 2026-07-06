#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155DC0
// Address: 0x155dc0 - 0x155dd0
void sub_00155DC0_0x155dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155DC0_0x155dc0");
#endif

    ctx->pc = 0x155dc0u;

    // 0x155dc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x155dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x155dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x155DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DC4u;
            // 0x155dc8: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155DCCu;
    // 0x155dcc: 0x0  nop
    ctx->pc = 0x155dccu;
    // NOP
    ctx->pc = 0x155dd0u;
}
