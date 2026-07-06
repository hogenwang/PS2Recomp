#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294A80
// Address: 0x294a80 - 0x294aa8
void sub_00294A80_0x294a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A80_0x294a80");
#endif

    switch (ctx->pc) {
        case 0x294a94u: goto label_294a94;
        default: break;
    }

    ctx->pc = 0x294a80u;

    // 0x294a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294a8c: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x294A8Cu;
    SET_GPR_U32(ctx, 31, 0x294A94u);
    ctx->pc = 0x294A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A8Cu;
            // 0x294a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A94u; }
        if (ctx->pc != 0x294A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A94u; }
        if (ctx->pc != 0x294A94u) { return; }
    }
    ctx->pc = 0x294A94u;
label_294a94:
    // 0x294a94: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x294a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x294a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x294AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AA0u;
            // 0x294aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294AA8u;
    ctx->pc = 0x294aa8u;
}
