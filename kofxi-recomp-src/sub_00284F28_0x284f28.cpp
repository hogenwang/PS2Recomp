#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284F28
// Address: 0x284f28 - 0x284f78
void sub_00284F28_0x284f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F28_0x284f28");
#endif

    switch (ctx->pc) {
        case 0x284f30u: goto label_284f30;
        case 0x284f38u: goto label_284f38;
        case 0x284f40u: goto label_284f40;
        case 0x284f48u: goto label_284f48;
        case 0x284f58u: goto label_284f58;
        case 0x284f68u: goto label_284f68;
        default: break;
    }

    ctx->pc = 0x284f28u;

    // 0x284f28: 0x3e00008  jr          $ra
    ctx->pc = 0x284F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F28u;
            // 0x284f2c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F30u;
label_284f30:
    // 0x284f30: 0x3e00008  jr          $ra
    ctx->pc = 0x284F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F30u;
            // 0x284f34: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F38u;
label_284f38:
    // 0x284f38: 0x3e00008  jr          $ra
    ctx->pc = 0x284F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F38u;
            // 0x284f3c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F40u;
label_284f40:
    // 0x284f40: 0x3e00008  jr          $ra
    ctx->pc = 0x284F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F40u;
            // 0x284f44: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F48u;
label_284f48:
    // 0x284f48: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x284f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x284f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x284F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F4Cu;
            // 0x284f50: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F54u;
    // 0x284f54: 0x0  nop
    ctx->pc = 0x284f54u;
    // NOP
label_284f58:
    // 0x284f58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x284f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x284F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F5Cu;
            // 0x284f60: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F64u;
    // 0x284f64: 0x0  nop
    ctx->pc = 0x284f64u;
    // NOP
label_284f68:
    // 0x284f68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x284f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x284F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F6Cu;
            // 0x284f70: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F74u;
    // 0x284f74: 0x0  nop
    ctx->pc = 0x284f74u;
    // NOP
    ctx->pc = 0x284f78u;
}
