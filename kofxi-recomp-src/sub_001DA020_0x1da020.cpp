#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA020
// Address: 0x1da020 - 0x1da048
void sub_001DA020_0x1da020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA020_0x1da020");
#endif

    ctx->pc = 0x1da020u;

    // 0x1da020: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA020u;
    {
        const bool branch_taken_0x1da020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA020u;
            // 0x1da024: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da020) {
            ctx->pc = 0x1DA030u;
            goto label_1da030;
        }
    }
    ctx->pc = 0x1DA028u;
    // 0x1da028: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da02c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1da02cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1da030:
    // 0x1da030: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA030u;
    {
        const bool branch_taken_0x1da030 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da030) {
            ctx->pc = 0x1DA040u;
            goto label_1da040;
        }
    }
    ctx->pc = 0x1DA038u;
    // 0x1da038: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1da03c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1da03cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1da040:
    // 0x1da040: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA048u;
    ctx->pc = 0x1da048u;
}
