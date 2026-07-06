#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DD98
// Address: 0x22dd98 - 0x22ddb8
void sub_0022DD98_0x22dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DD98_0x22dd98");
#endif

    ctx->pc = 0x22dd98u;

    // 0x22dd98: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22dd9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x22dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22dda0: 0xac83fa10  sw          $v1, -0x5F0($a0)
    ctx->pc = 0x22dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965776), GPR_U32(ctx, 3));
    // 0x22dda4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22dda8: 0x2443fa18  addiu       $v1, $v0, -0x5E8
    ctx->pc = 0x22dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965784));
    // 0x22ddac: 0xac40fa18  sw          $zero, -0x5E8($v0)
    ctx->pc = 0x22ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965784), GPR_U32(ctx, 0));
    // 0x22ddb0: 0x3e00008  jr          $ra
    ctx->pc = 0x22DDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDB0u;
            // 0x22ddb4: 0xac630004  sw          $v1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DDB8u;
    ctx->pc = 0x22ddb8u;
}
