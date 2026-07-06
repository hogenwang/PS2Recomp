#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EADC0
// Address: 0x1eadc0 - 0x1eade0
void sub_001EADC0_0x1eadc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EADC0_0x1eadc0");
#endif

    ctx->pc = 0x1eadc0u;

    // 0x1eadc0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eadc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eadc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eadcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eadd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eadd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eadd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EADD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADD8u;
            // 0x1eaddc: 0x8c82139c  lw          $v0, 0x139C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EADE0u;
    ctx->pc = 0x1eade0u;
}
