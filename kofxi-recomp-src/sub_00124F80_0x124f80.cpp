#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124F80
// Address: 0x124f80 - 0x124fa8
void sub_00124F80_0x124f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F80_0x124f80");
#endif

    ctx->pc = 0x124f80u;

    // 0x124f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124f84: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x124f84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124f8c: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x124f90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x124f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f94: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x124f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124f9c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x124f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fa0: 0x80493a6  j           func_124E98
    ctx->pc = 0x124FA0u;
    ctx->pc = 0x124FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124FA0u;
            // 0x124fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124E98u;
    {
        auto targetFn = runtime->lookupFunction(0x124E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x124FA8u;
    ctx->pc = 0x124fa8u;
}
