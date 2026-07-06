#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265748
// Address: 0x265748 - 0x265768
void sub_00265748_0x265748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265748_0x265748");
#endif

    switch (ctx->pc) {
        case 0x265760u: goto label_265760;
        default: break;
    }

    ctx->pc = 0x265748u;

    // 0x265748: 0x2482ffbf  addiu       $v0, $a0, -0x41
    ctx->pc = 0x265748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967231));
    // 0x26574c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x26574cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x265750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265750u;
    {
        const bool branch_taken_0x265750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265750u;
            // 0x265754: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265750) {
            ctx->pc = 0x265760u;
            goto label_265760;
        }
    }
    ctx->pc = 0x265758u;
    // 0x265758: 0x3e00008  jr          $ra
    ctx->pc = 0x265758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265758u;
            // 0x26575c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265760u;
label_265760:
    // 0x265760: 0x3e00008  jr          $ra
    ctx->pc = 0x265760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265768u;
    ctx->pc = 0x265768u;
}
