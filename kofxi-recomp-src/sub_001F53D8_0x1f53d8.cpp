#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F53D8
// Address: 0x1f53d8 - 0x1f53f0
void sub_001F53D8_0x1f53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53D8_0x1f53d8");
#endif

    ctx->pc = 0x1f53d8u;

    // 0x1f53d8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F53D8u;
    {
        const bool branch_taken_0x1f53d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F53D8u;
            // 0x1f53dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53d8) {
            ctx->pc = 0x1F53E4u;
            goto label_1f53e4;
        }
    }
    ctx->pc = 0x1F53E0u;
    // 0x1f53e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f53e4:
    // 0x1f53e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F53E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F53ECu;
    // 0x1f53ec: 0x0  nop
    ctx->pc = 0x1f53ecu;
    // NOP
    ctx->pc = 0x1f53f0u;
}
