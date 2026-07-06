#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2350
// Address: 0x1b2350 - 0x1b2380
void sub_001B2350_0x1b2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2350_0x1b2350");
#endif

    switch (ctx->pc) {
        case 0x1b2370u: goto label_1b2370;
        default: break;
    }

    ctx->pc = 0x1b2350u;

    // 0x1b2350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2354: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2354u;
    {
        const bool branch_taken_0x1b2354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2354u;
            // 0x1b2358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2354) {
            ctx->pc = 0x1B2370u;
            goto label_1b2370;
        }
    }
    ctx->pc = 0x1B235Cu;
    // 0x1b235c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b235cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b2360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2364: 0x24847cc8  addiu       $a0, $a0, 0x7CC8
    ctx->pc = 0x1b2364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31944));
    // 0x1b2368: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B2368u;
    ctx->pc = 0x1B236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2368u;
            // 0x1b236c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2370u;
label_1b2370:
    // 0x1b2370: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x1b2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1b2374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2378: 0x8071a92  j           func_1C6A48
    ctx->pc = 0x1B2378u;
    ctx->pc = 0x1B237Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2378u;
            // 0x1b237c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2380u;
    ctx->pc = 0x1b2380u;
}
