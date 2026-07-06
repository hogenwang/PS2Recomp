#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276F98
// Address: 0x276f98 - 0x276fb8
void sub_00276F98_0x276f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276F98_0x276f98");
#endif

    switch (ctx->pc) {
        case 0x276fa8u: goto label_276fa8;
        default: break;
    }

    ctx->pc = 0x276f98u;

    // 0x276f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276fa0: 0xc09d57c  jal         func_2755F0
    ctx->pc = 0x276FA0u;
    SET_GPR_U32(ctx, 31, 0x276FA8u);
    ctx->pc = 0x2755F0u;
    if (runtime->hasFunction(0x2755F0u)) {
        auto targetFn = runtime->lookupFunction(0x2755F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276FA8u; }
        if (ctx->pc != 0x276FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002755F0_0x2755f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276FA8u; }
        if (ctx->pc != 0x276FA8u) { return; }
    }
    ctx->pc = 0x276FA8u;
label_276fa8:
    // 0x276fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276fac: 0x3e00008  jr          $ra
    ctx->pc = 0x276FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FACu;
            // 0x276fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276FB4u;
    // 0x276fb4: 0x0  nop
    ctx->pc = 0x276fb4u;
    // NOP
    ctx->pc = 0x276fb8u;
}
