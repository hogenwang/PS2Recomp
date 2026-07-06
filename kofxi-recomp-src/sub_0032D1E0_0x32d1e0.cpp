#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032D1E0
// Address: 0x32d1e0 - 0x32d220
void sub_0032D1E0_0x32d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D1E0_0x32d1e0");
#endif

    ctx->pc = 0x32d1e0u;

    // 0x32d1e0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x32d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d1e4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d1e8: 0xa0659700  sb          $a1, -0x6900($v1)
    ctx->pc = 0x32d1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940416), (uint8_t)GPR_U32(ctx, 5));
    // 0x32d1ec: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x32d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x32d1f0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d1f4: 0xac809708  sw          $zero, -0x68F8($a0)
    ctx->pc = 0x32d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294940424), GPR_U32(ctx, 0));
    // 0x32d1f8: 0xa0659701  sb          $a1, -0x68FF($v1)
    ctx->pc = 0x32d1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940417), (uint8_t)GPR_U32(ctx, 5));
    // 0x32d1fc: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x32d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x32d200: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d204: 0xac80970c  sw          $zero, -0x68F4($a0)
    ctx->pc = 0x32d204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294940428), GPR_U32(ctx, 0));
    // 0x32d208: 0xa0659702  sb          $a1, -0x68FE($v1)
    ctx->pc = 0x32d208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940418), (uint8_t)GPR_U32(ctx, 5));
    // 0x32d20c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x32d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x32d210: 0x3e00008  jr          $ra
    ctx->pc = 0x32D210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D210u;
        // 0x32d214: 0xac609710  sw          $zero, -0x68F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D218u;
    // 0x32d218: 0x0  nop
    ctx->pc = 0x32d218u;
    // NOP
    // 0x32d21c: 0x0  nop
    ctx->pc = 0x32d21cu;
    // NOP
    if (ctx->pc == 0x32d21cu) { ctx->pc = 0x32d220u; }
}
