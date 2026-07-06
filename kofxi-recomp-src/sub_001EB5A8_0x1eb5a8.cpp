#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB5A8
// Address: 0x1eb5a8 - 0x1eb5d8
void sub_001EB5A8_0x1eb5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB5A8_0x1eb5a8");
#endif

    ctx->pc = 0x1eb5a8u;

    // 0x1eb5a8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb5ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb5b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb5b4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB5B4u;
    {
        const bool branch_taken_0x1eb5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EB5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5B4u;
            // 0x1eb5b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5b4) {
            ctx->pc = 0x1EB5CCu;
            goto label_1eb5cc;
        }
    }
    ctx->pc = 0x1EB5BCu;
    // 0x1eb5bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb5c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb5c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eb5c8: 0xac461374  sw          $a2, 0x1374($v0)
    ctx->pc = 0x1eb5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4980), GPR_U32(ctx, 6));
label_1eb5cc:
    // 0x1eb5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB5D4u;
    // 0x1eb5d4: 0x0  nop
    ctx->pc = 0x1eb5d4u;
    // NOP
    ctx->pc = 0x1eb5d8u;
}
