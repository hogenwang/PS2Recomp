#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00341080
// Address: 0x341080 - 0x3410b0
void sub_00341080_0x341080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341080_0x341080");
#endif

    ctx->pc = 0x341080u;

    // 0x341080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341084: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341088: 0xac65ea60  sw          $a1, -0x15A0($v1)
    ctx->pc = 0x341088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961760), GPR_U32(ctx, 5));
    // 0x34108c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34108cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341090: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341094: 0xac80ea64  sw          $zero, -0x159C($a0)
    ctx->pc = 0x341094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961764), GPR_U32(ctx, 0));
    // 0x341098: 0xac60ea68  sw          $zero, -0x1598($v1)
    ctx->pc = 0x341098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 0));
    // 0x34109c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34109cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3410a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3410a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3410a4: 0xac80ea7c  sw          $zero, -0x1584($a0)
    ctx->pc = 0x3410a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961788), GPR_U32(ctx, 0));
    // 0x3410a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3410A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3410ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3410A8u;
            // 0x3410ac: 0xac65ea74  sw          $a1, -0x158C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961780), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3410B0u;
    ctx->pc = 0x3410b0u;
}
