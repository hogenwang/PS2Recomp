#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001274F0
// Address: 0x1274f0 - 0x127520
void sub_001274F0_0x1274f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001274F0_0x1274f0");
#endif

    ctx->pc = 0x1274f0u;

    // 0x1274f0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1274F0u;
    {
        const bool branch_taken_0x1274f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274f0) {
            ctx->pc = 0x127514u;
            goto label_127514;
        }
    }
    ctx->pc = 0x1274F8u;
    // 0x1274f8: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x1274f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1274fc: 0x8c8d004c  lw          $t5, 0x4C($a0)
    ctx->pc = 0x1274fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x127500: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x127500u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x127504: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x127504u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x127508: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x127508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12750c: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x12750cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x127510: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x127510u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
label_127514:
    // 0x127514: 0x3e00008  jr          $ra
    ctx->pc = 0x127514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12751Cu;
    // 0x12751c: 0x0  nop
    ctx->pc = 0x12751cu;
    // NOP
    ctx->pc = 0x127520u;
}
