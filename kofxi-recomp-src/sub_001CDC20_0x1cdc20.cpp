#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDC20
// Address: 0x1cdc20 - 0x1cdc78
void sub_001CDC20_0x1cdc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDC20_0x1cdc20");
#endif

    switch (ctx->pc) {
        case 0x1cdc38u: goto label_1cdc38;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc68u: goto label_1cdc68;
        default: break;
    }

    ctx->pc = 0x1cdc20u;

    // 0x1cdc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdc2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc30: 0x80736ae  j           func_1CDAB8
    ctx->pc = 0x1CDC30u;
    ctx->pc = 0x1CDC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC30u;
            // 0x1cdc34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC38u;
label_1cdc38:
    // 0x1cdc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdc40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc48: 0x80736ae  j           func_1CDAB8
    ctx->pc = 0x1CDC48u;
    ctx->pc = 0x1CDC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC48u;
            // 0x1cdc4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC50u;
label_1cdc50:
    // 0x1cdc50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc54: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1cdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1cdc58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc60: 0x80736ae  j           func_1CDAB8
    ctx->pc = 0x1CDC60u;
    ctx->pc = 0x1CDC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC60u;
            // 0x1cdc64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cdc6c: 0x2463e564  addiu       $v1, $v1, -0x1A9C
    ctx->pc = 0x1cdc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960484));
    // 0x1cdc70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC70u;
            // 0x1cdc74: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDC78u;
    ctx->pc = 0x1cdc78u;
}
