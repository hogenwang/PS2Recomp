#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC4F8
// Address: 0x2fc4f8 - 0x2fc518
void sub_002FC4F8_0x2fc4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC4F8_0x2fc4f8");
#endif

    switch (ctx->pc) {
        case 0x2fc508u: goto label_2fc508;
        default: break;
    }

    ctx->pc = 0x2fc4f8u;

    // 0x2fc4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc500: 0xc097d56  jal         func_25F558
    ctx->pc = 0x2FC500u;
    SET_GPR_U32(ctx, 31, 0x2FC508u);
    ctx->pc = 0x25F558u;
    if (runtime->hasFunction(0x25F558u)) {
        auto targetFn = runtime->lookupFunction(0x25F558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC508u; }
        if (ctx->pc != 0x2FC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F558_0x25f558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC508u; }
        if (ctx->pc != 0x2FC508u) { return; }
    }
    ctx->pc = 0x2FC508u;
label_2fc508:
    // 0x2fc508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc50c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC50Cu;
            // 0x2fc510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC514u;
    // 0x2fc514: 0x0  nop
    ctx->pc = 0x2fc514u;
    // NOP
    ctx->pc = 0x2fc518u;
}
