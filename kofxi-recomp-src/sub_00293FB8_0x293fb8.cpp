#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00293FB8
// Address: 0x293fb8 - 0x293fc8
void sub_00293FB8_0x293fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293FB8_0x293fb8");
#endif

    ctx->pc = 0x293fb8u;

    // 0x293fb8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x293fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x293fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x293FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293FBCu;
            // 0x293fc0: 0xac444ac8  sw          $a0, 0x4AC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 19144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293FC4u;
    // 0x293fc4: 0x0  nop
    ctx->pc = 0x293fc4u;
    // NOP
    ctx->pc = 0x293fc8u;
}
