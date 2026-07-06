#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002658D0
// Address: 0x2658d0 - 0x265908
void sub_002658D0_0x2658d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002658D0_0x2658d0");
#endif

    switch (ctx->pc) {
        case 0x2658e0u: goto label_2658e0;
        default: break;
    }

    ctx->pc = 0x2658d0u;

    // 0x2658d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2658d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2658d4: 0x809962e  j           func_2658B8
    ctx->pc = 0x2658D4u;
    ctx->pc = 0x2658D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2658D4u;
            // 0x2658d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2658B8u;
    {
        auto targetFn = runtime->lookupFunction(0x2658B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2658DCu;
    // 0x2658dc: 0x0  nop
    ctx->pc = 0x2658dcu;
    // NOP
label_2658e0:
    // 0x2658e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2658E0u;
    {
        const bool branch_taken_0x2658e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2658E0u;
            // 0x2658e4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658e0) {
            ctx->pc = 0x2658F0u;
            goto label_2658f0;
        }
    }
    ctx->pc = 0x2658E8u;
    // 0x2658e8: 0x8c431a30  lw          $v1, 0x1A30($v0)
    ctx->pc = 0x2658e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x2658ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2658ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2658f0:
    // 0x2658f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2658F0u;
    {
        const bool branch_taken_0x2658f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2658F0u;
            // 0x2658f4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658f0) {
            ctx->pc = 0x265900u;
            goto label_265900;
        }
    }
    ctx->pc = 0x2658F8u;
    // 0x2658f8: 0x8c431a34  lw          $v1, 0x1A34($v0)
    ctx->pc = 0x2658f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6708)));
    // 0x2658fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2658fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_265900:
    // 0x265900: 0x3e00008  jr          $ra
    ctx->pc = 0x265900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265908u;
    ctx->pc = 0x265908u;
}
