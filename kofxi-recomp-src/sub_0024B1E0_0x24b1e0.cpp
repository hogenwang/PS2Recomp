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

// Function: sub_0024B1E0
// Address: 0x24b1e0 - 0x24b210
void sub_0024B1E0_0x24b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B1E0_0x24b1e0");
#endif

    ctx->pc = 0x24b1e0u;

    // 0x24b1e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b1e4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x24b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x24b1e8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24b1ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24b1f0: 0xac44019c  sw          $a0, 0x19C($v0)
    ctx->pc = 0x24b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 412), GPR_U32(ctx, 4));
    // 0x24b1f4: 0xaca40198  sw          $a0, 0x198($a1)
    ctx->pc = 0x24b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 4));
    // 0x24b1f8: 0xfc6001b8  sd          $zero, 0x1B8($v1)
    ctx->pc = 0x24b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 440), GPR_U64(ctx, 0));
    // 0x24b1fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24b200: 0x244301a0  addiu       $v1, $v0, 0x1A0
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x24b204: 0xac4001a0  sw          $zero, 0x1A0($v0)
    ctx->pc = 0x24b204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 0));
    // 0x24b208: 0x3e00008  jr          $ra
    ctx->pc = 0x24B208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B208u;
        // 0x24b20c: 0xac630004  sw          $v1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B210u;
}
