#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203940
// Address: 0x203940 - 0x203960
void sub_00203940_0x203940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203940_0x203940");
#endif

    ctx->pc = 0x203940u;

    // 0x203940: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203944: 0xac649be0  sw          $a0, -0x6420($v1)
    ctx->pc = 0x203944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941664), GPR_U32(ctx, 4));
    // 0x203948: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20394c: 0xac659be4  sw          $a1, -0x641C($v1)
    ctx->pc = 0x20394cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941668), GPR_U32(ctx, 5));
    // 0x203950: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203954: 0x3e00008  jr          $ra
    ctx->pc = 0x203954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203954u;
            // 0x203958: 0xac669be8  sw          $a2, -0x6418($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941672), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20395Cu;
    // 0x20395c: 0x0  nop
    ctx->pc = 0x20395cu;
    // NOP
    ctx->pc = 0x203960u;
}
