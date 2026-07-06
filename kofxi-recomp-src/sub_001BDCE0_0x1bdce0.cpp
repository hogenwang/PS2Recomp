#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDCE0
// Address: 0x1bdce0 - 0x1bdcf8
void sub_001BDCE0_0x1bdce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDCE0_0x1bdce0");
#endif

    ctx->pc = 0x1bdce0u;

    // 0x1bdce0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bdce4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bdce8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDCE8u;
    {
        const bool branch_taken_0x1bdce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdce8) {
            ctx->pc = 0x1BDCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCE8u;
            // 0x1bdcec: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDCF0u;
            goto label_1bdcf0;
        }
    }
    ctx->pc = 0x1BDCF0u;
label_1bdcf0:
    // 0x1bdcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDCF8u;
    ctx->pc = 0x1bdcf8u;
}
