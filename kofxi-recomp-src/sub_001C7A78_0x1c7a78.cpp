#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7A78
// Address: 0x1c7a78 - 0x1c7a90
void sub_001C7A78_0x1c7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7A78_0x1c7a78");
#endif

    ctx->pc = 0x1c7a78u;

    // 0x1c7a78: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c7a7c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c7a80: 0xac44436c  sw          $a0, 0x436C($v0)
    ctx->pc = 0x1c7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17260), GPR_U32(ctx, 4));
    // 0x1c7a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A84u;
            // 0x1c7a88: 0xac654370  sw          $a1, 0x4370($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17264), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7A8Cu;
    // 0x1c7a8c: 0x0  nop
    ctx->pc = 0x1c7a8cu;
    // NOP
    ctx->pc = 0x1c7a90u;
}
