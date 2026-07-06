#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9FE0
// Address: 0x1d9fe0 - 0x1da008
void sub_001D9FE0_0x1d9fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9FE0_0x1d9fe0");
#endif

    ctx->pc = 0x1d9fe0u;

    // 0x1d9fe0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d9fe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d9fe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9fec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d9ff0: 0x248403d8  addiu       $a0, $a0, 0x3D8
    ctx->pc = 0x1d9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    // 0x1d9ff4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1d9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1d9ff8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1d9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1d9ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FFCu;
            // 0x1da000: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA004u;
    // 0x1da004: 0x0  nop
    ctx->pc = 0x1da004u;
    // NOP
    ctx->pc = 0x1da008u;
}
