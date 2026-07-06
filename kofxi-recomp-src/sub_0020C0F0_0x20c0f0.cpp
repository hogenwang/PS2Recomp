#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C0F0
// Address: 0x20c0f0 - 0x20c110
void sub_0020C0F0_0x20c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C0F0_0x20c0f0");
#endif

    ctx->pc = 0x20c0f0u;

    // 0x20c0f0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c0f4: 0x8c64a490  lw          $a0, -0x5B70($v1)
    ctx->pc = 0x20c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943888)));
    // 0x20c0f8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c0fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20c100: 0x3e00008  jr          $ra
    ctx->pc = 0x20C100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C100u;
            // 0x20c104: 0xac64a458  sw          $a0, -0x5BA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943832), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C108u;
    // 0x20c108: 0x0  nop
    ctx->pc = 0x20c108u;
    // NOP
    // 0x20c10c: 0x0  nop
    ctx->pc = 0x20c10cu;
    // NOP
    ctx->pc = 0x20c110u;
}
