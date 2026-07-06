#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB908
// Address: 0x1ab908 - 0x1ab930
void sub_001AB908_0x1ab908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB908_0x1ab908");
#endif

    switch (ctx->pc) {
        case 0x1ab918u: goto label_1ab918;
        case 0x1ab928u: goto label_1ab928;
        default: break;
    }

    ctx->pc = 0x1ab908u;

    // 0x1ab908: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x1ab908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x1ab90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB90Cu;
            // 0x1ab910: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB914u;
    // 0x1ab914: 0x0  nop
    ctx->pc = 0x1ab914u;
    // NOP
label_1ab918:
    // 0x1ab918: 0xac860084  sw          $a2, 0x84($a0)
    ctx->pc = 0x1ab918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 6));
    // 0x1ab91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB91Cu;
            // 0x1ab920: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB924u;
    // 0x1ab924: 0x0  nop
    ctx->pc = 0x1ab924u;
    // NOP
label_1ab928:
    // 0x1ab928: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB928u;
            // 0x1ab92c: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB930u;
    ctx->pc = 0x1ab930u;
}
