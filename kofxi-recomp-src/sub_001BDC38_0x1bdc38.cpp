#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDC38
// Address: 0x1bdc38 - 0x1bdc68
void sub_001BDC38_0x1bdc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC38_0x1bdc38");
#endif

    switch (ctx->pc) {
        case 0x1bdc60u: goto label_1bdc60;
        default: break;
    }

    ctx->pc = 0x1bdc38u;

    // 0x1bdc38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bdc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bdc3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDC3Cu;
    {
        const bool branch_taken_0x1bdc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC3Cu;
            // 0x1bdc40: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc3c) {
            ctx->pc = 0x1BDC60u;
            goto label_1bdc60;
        }
    }
    ctx->pc = 0x1BDC44u;
    // 0x1bdc44: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x1bdc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x1bdc48: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x1bdc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x1bdc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdc50: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1bdc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x1bdc54: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1bdc54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1bdc58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC58u;
            // 0x1bdc5c: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC60u;
label_1bdc60:
    // 0x1bdc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC60u;
            // 0x1bdc64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC68u;
    ctx->pc = 0x1bdc68u;
}
