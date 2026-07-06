#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9EA0
// Address: 0x1f9ea0 - 0x1f9ee0
void sub_001F9EA0_0x1f9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9EA0_0x1f9ea0");
#endif

    ctx->pc = 0x1f9ea0u;

    // 0x1f9ea0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1f9ea4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f9ea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9eac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f9eb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9eb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f9eb8: 0x248413a0  addiu       $a0, $a0, 0x13A0
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5024));
    // 0x1f9ebc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9ec0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9EC0u;
    {
        const bool branch_taken_0x1f9ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9EC0u;
            // 0x1f9ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec0) {
            ctx->pc = 0x1F9ED8u;
            goto label_1f9ed8;
        }
    }
    ctx->pc = 0x1F9EC8u;
    // 0x1f9ec8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f9ecc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9ed0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f9ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9ed4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f9ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f9ed8:
    // 0x1f9ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9EE0u;
    ctx->pc = 0x1f9ee0u;
}
