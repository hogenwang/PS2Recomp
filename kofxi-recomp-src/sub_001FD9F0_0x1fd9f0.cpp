#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD9F0
// Address: 0x1fd9f0 - 0x1fda20
void sub_001FD9F0_0x1fd9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD9F0_0x1fd9f0");
#endif

    switch (ctx->pc) {
        case 0x1fda08u: goto label_1fda08;
        default: break;
    }

    ctx->pc = 0x1fd9f0u;

    // 0x1fd9f0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fd9f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fd9f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd9fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fd9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fda00: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA00u;
            // 0x1fda04: 0x8c821f88  lw          $v0, 0x1F88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8072)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDA08u;
label_1fda08:
    // 0x1fda08: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fda08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fda0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fda10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fda10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fda14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fda18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA18u;
            // 0x1fda1c: 0xac861f8c  sw          $a2, 0x1F8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8076), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDA20u;
    ctx->pc = 0x1fda20u;
}
