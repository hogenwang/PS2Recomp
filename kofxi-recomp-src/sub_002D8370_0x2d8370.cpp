#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8370
// Address: 0x2d8370 - 0x2d8398
void sub_002D8370_0x2d8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8370_0x2d8370");
#endif

    switch (ctx->pc) {
        case 0x2d8388u: goto label_2d8388;
        default: break;
    }

    ctx->pc = 0x2d8370u;

    // 0x2d8370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8374: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8374u;
    {
        const bool branch_taken_0x2d8374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8374u;
            // 0x2d8378: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8374) {
            ctx->pc = 0x2D8388u;
            goto label_2d8388;
        }
    }
    ctx->pc = 0x2D837Cu;
    // 0x2d837c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8380: 0x809edd6  j           func_27B758
    ctx->pc = 0x2D8380u;
    ctx->pc = 0x2D8384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8380u;
            // 0x2d8384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B758u;
    if (runtime->hasFunction(0x27B758u)) {
        auto targetFn = runtime->lookupFunction(0x27B758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0027B758_0x27b758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D8388u;
label_2d8388:
    // 0x2d8388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d838c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D838Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D838Cu;
            // 0x2d8390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8394u;
    // 0x2d8394: 0x0  nop
    ctx->pc = 0x2d8394u;
    // NOP
    ctx->pc = 0x2d8398u;
}
