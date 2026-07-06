#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283C18
// Address: 0x283c18 - 0x283c40
void sub_00283C18_0x283c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C18_0x283c18");
#endif

    ctx->pc = 0x283c18u;

    // 0x283c18: 0x90830016  lbu         $v1, 0x16($a0)
    ctx->pc = 0x283c18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x283c1c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x283c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x283c20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283C20u;
    {
        const bool branch_taken_0x283c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C20u;
            // 0x283c24: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c20) {
            ctx->pc = 0x283C38u;
            goto label_283c38;
        }
    }
    ctx->pc = 0x283C28u;
    // 0x283c28: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x283c28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283c2c: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x283c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x283c30: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x283c30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x283c34: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x283c34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_283c38:
    // 0x283c38: 0x3e00008  jr          $ra
    ctx->pc = 0x283C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C38u;
            // 0x283c3c: 0xa0850017  sb          $a1, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283C40u;
    ctx->pc = 0x283c40u;
}
