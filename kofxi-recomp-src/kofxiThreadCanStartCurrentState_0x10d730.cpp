#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiThreadCanStartCurrentState
// Address: 0x10d730 - 0x10d740
void kofxiThreadCanStartCurrentState_0x10d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadCanStartCurrentState_0x10d730");
#endif

    ctx->pc = 0x10d730u;

    // 0x10d730: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10d734: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10d738: 0x3e00008  jr          $ra
    ctx->pc = 0x10D738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D738u;
            // 0x10d73c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D740u;
    ctx->pc = 0x10d740u;
}
