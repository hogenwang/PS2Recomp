#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A578
// Address: 0x29a578 - 0x29a590
void sub_0029A578_0x29a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A578_0x29a578");
#endif

    ctx->pc = 0x29a578u;

    // 0x29a578: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29a57c: 0x8c6267e4  lw          $v0, 0x67E4($v1)
    ctx->pc = 0x29a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26596)));
    // 0x29a580: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x29a580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a584: 0x3e00008  jr          $ra
    ctx->pc = 0x29A584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A584u;
            // 0x29a588: 0xac6467e4  sw          $a0, 0x67E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A58Cu;
    // 0x29a58c: 0x0  nop
    ctx->pc = 0x29a58cu;
    // NOP
    ctx->pc = 0x29a590u;
}
