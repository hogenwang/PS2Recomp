#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117790
// Address: 0x117790 - 0x1177a0
void sub_00117790_0x117790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117790_0x117790");
#endif

    ctx->pc = 0x117790u;

    // 0x117790: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x117790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117794: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x117794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x117798: 0x8045dc4  j           func_117710
    ctx->pc = 0x117798u;
    ctx->pc = 0x11779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117798u;
            // 0x11779c: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117710u;
    {
        auto targetFn = runtime->lookupFunction(0x117710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1177A0u;
    ctx->pc = 0x1177a0u;
}
