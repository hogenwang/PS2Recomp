#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF220
// Address: 0x2cf220 - 0x2cf248
void sub_002CF220_0x2cf220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF220_0x2cf220");
#endif

    ctx->pc = 0x2cf220u;

    // 0x2cf220: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2cf220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2cf224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF224u;
    {
        const bool branch_taken_0x2cf224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF224u;
            // 0x2cf228: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf224) {
            ctx->pc = 0x2CF23Cu;
            goto label_2cf23c;
        }
    }
    ctx->pc = 0x2CF22Cu;
    // 0x2cf22c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf230: 0x24020205  addiu       $v0, $zero, 0x205
    ctx->pc = 0x2cf230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x2cf234: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2cf234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2cf238: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2cf238u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2cf23c:
    // 0x2cf23c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF244u;
    // 0x2cf244: 0x0  nop
    ctx->pc = 0x2cf244u;
    // NOP
    ctx->pc = 0x2cf248u;
}
