#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002251E8
// Address: 0x2251e8 - 0x225218
void sub_002251E8_0x2251e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002251E8_0x2251e8");
#endif

    switch (ctx->pc) {
        case 0x2251f0u: goto label_2251f0;
        default: break;
    }

    ctx->pc = 0x2251e8u;

    // 0x2251e8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2251E8u;
    {
        const bool branch_taken_0x2251e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2251e8) {
            ctx->pc = 0x22520Cu;
            goto label_22520c;
        }
    }
    ctx->pc = 0x2251F0u;
label_2251f0:
    // 0x2251f0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2251f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2251f4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2251f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2251f8: 0x0  nop
    ctx->pc = 0x2251f8u;
    // NOP
    // 0x2251fc: 0x0  nop
    ctx->pc = 0x2251fcu;
    // NOP
    // 0x225200: 0x0  nop
    ctx->pc = 0x225200u;
    // NOP
    // 0x225204: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x225204u;
    {
        const bool branch_taken_0x225204 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x225208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225204u;
            // 0x225208: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225204) {
            ctx->pc = 0x2251F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2251f0;
        }
    }
    ctx->pc = 0x22520Cu;
label_22520c:
    // 0x22520c: 0x3e00008  jr          $ra
    ctx->pc = 0x22520Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225214u;
    // 0x225214: 0x0  nop
    ctx->pc = 0x225214u;
    // NOP
    ctx->pc = 0x225218u;
}
