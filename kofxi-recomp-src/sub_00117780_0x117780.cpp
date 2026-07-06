#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117780
// Address: 0x117780 - 0x117790
void sub_00117780_0x117780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117780_0x117780");
#endif

    ctx->pc = 0x117780u;

    // 0x117780: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x117780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117784: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x117784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x117788: 0x8045dc4  j           func_117710
    ctx->pc = 0x117788u;
    ctx->pc = 0x11778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117788u;
            // 0x11778c: 0x34841000  ori         $a0, $a0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117710u;
    {
        auto targetFn = runtime->lookupFunction(0x117710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x117790u;
    ctx->pc = 0x117790u;
}
