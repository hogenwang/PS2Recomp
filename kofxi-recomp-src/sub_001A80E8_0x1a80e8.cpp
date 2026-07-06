#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A80E8
// Address: 0x1a80e8 - 0x1a8108
void sub_001A80E8_0x1a80e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A80E8_0x1a80e8");
#endif

    switch (ctx->pc) {
        case 0x1a80f8u: goto label_1a80f8;
        default: break;
    }

    ctx->pc = 0x1a80e8u;

    // 0x1a80e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a80ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a80ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a80f0: 0xc06a402  jal         func_1A9008
    ctx->pc = 0x1A80F0u;
    SET_GPR_U32(ctx, 31, 0x1A80F8u);
    ctx->pc = 0x1A80F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80F0u;
            // 0x1a80f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9008u;
    if (runtime->hasFunction(0x1A9008u)) {
        auto targetFn = runtime->lookupFunction(0x1A9008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80F8u; }
        if (ctx->pc != 0x1A80F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9008_0x1a9008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80F8u; }
        if (ctx->pc != 0x1A80F8u) { return; }
    }
    ctx->pc = 0x1A80F8u;
label_1a80f8:
    // 0x1a80f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a80f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a80fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A80FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80FCu;
            // 0x1a8100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8104u;
    // 0x1a8104: 0x0  nop
    ctx->pc = 0x1a8104u;
    // NOP
    ctx->pc = 0x1a8108u;
}
