#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296C30
// Address: 0x296c30 - 0x296c58
void sub_00296C30_0x296c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C30_0x296c30");
#endif

    switch (ctx->pc) {
        case 0x296c50u: goto label_296c50;
        default: break;
    }

    ctx->pc = 0x296c30u;

    // 0x296c30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x296c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x296c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296C34u;
    {
        const bool branch_taken_0x296c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c34) {
            ctx->pc = 0x296C44u;
            goto label_296c44;
        }
    }
    ctx->pc = 0x296C3Cu;
    // 0x296c3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x296c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296c40: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x296c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_296c44:
    // 0x296c44: 0x3e00008  jr          $ra
    ctx->pc = 0x296C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296C4Cu;
    // 0x296c4c: 0x0  nop
    ctx->pc = 0x296c4cu;
    // NOP
label_296c50:
    // 0x296c50: 0x3e00008  jr          $ra
    ctx->pc = 0x296C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C50u;
            // 0x296c54: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296C58u;
    ctx->pc = 0x296c58u;
}
