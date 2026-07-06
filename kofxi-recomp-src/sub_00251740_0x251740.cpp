#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251740
// Address: 0x251740 - 0x251758
void sub_00251740_0x251740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251740_0x251740");
#endif

    ctx->pc = 0x251740u;

    // 0x251740: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x251740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x251744: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x251744u;
    {
        const bool branch_taken_0x251744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251744u;
            // 0x251748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251744) {
            ctx->pc = 0x251750u;
            goto label_251750;
        }
    }
    ctx->pc = 0x25174Cu;
    // 0x25174c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_251750:
    // 0x251750: 0x3e00008  jr          $ra
    ctx->pc = 0x251750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251758u;
    ctx->pc = 0x251758u;
}
