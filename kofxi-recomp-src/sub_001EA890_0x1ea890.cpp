#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA890
// Address: 0x1ea890 - 0x1ea8a8
void sub_001EA890_0x1ea890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA890_0x1ea890");
#endif

    ctx->pc = 0x1ea890u;

    // 0x1ea890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea894: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea8a0: 0x807aa30  j           func_1EA8C0
    ctx->pc = 0x1EA8A0u;
    ctx->pc = 0x1EA8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA8A0u;
            // 0x1ea8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1EA8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1EA8A8u;
    ctx->pc = 0x1ea8a8u;
}
