#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiEnableInterruptsAndReturnState
// Address: 0x116ef0 - 0x116f08
void kofxiEnableInterruptsAndReturnState_0x116ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiEnableInterruptsAndReturnState_0x116ef0");
#endif

    ctx->pc = 0x116ef0u;

    // 0x116ef0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x116ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x116ef4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x116ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x116ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116efc: 0x42000038  ei
    ctx->pc = 0x116efcu;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x116f00: 0x3e00008  jr          $ra
    ctx->pc = 0x116F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F00u;
            // 0x116f04: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116F08u;
    ctx->pc = 0x116f08u;
}
