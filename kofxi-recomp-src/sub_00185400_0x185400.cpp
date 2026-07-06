#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185400
// Address: 0x185400 - 0x185420
void sub_00185400_0x185400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185400_0x185400");
#endif

    ctx->pc = 0x185400u;

    // 0x185400: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x185404: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x185404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x185408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x185408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18540c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x18540Cu;
    {
        const bool branch_taken_0x18540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18540c) {
            ctx->pc = 0x185410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18540Cu;
            // 0x185410: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185418u;
            goto label_185418;
        }
    }
    ctx->pc = 0x185414u;
    // 0x185414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185418:
    // 0x185418: 0x3e00008  jr          $ra
    ctx->pc = 0x185418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185420u;
    ctx->pc = 0x185420u;
}
