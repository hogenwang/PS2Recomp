#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281000
// Address: 0x281000 - 0x281020
void sub_00281000_0x281000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281000_0x281000");
#endif

    switch (ctx->pc) {
        case 0x281010u: goto label_281010;
        default: break;
    }

    ctx->pc = 0x281000u;

    // 0x281000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281008: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x281008u;
    SET_GPR_U32(ctx, 31, 0x281010u);
    ctx->pc = 0x28100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281008u;
            // 0x28100c: 0x24071d16  addiu       $a3, $zero, 0x1D16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7446));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281010u; }
        if (ctx->pc != 0x281010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281010u; }
        if (ctx->pc != 0x281010u) { return; }
    }
    ctx->pc = 0x281010u;
label_281010:
    // 0x281010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281014: 0x3e00008  jr          $ra
    ctx->pc = 0x281014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281014u;
            // 0x281018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28101Cu;
    // 0x28101c: 0x0  nop
    ctx->pc = 0x28101cu;
    // NOP
    ctx->pc = 0x281020u;
}
