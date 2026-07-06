#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C72F0
// Address: 0x1c72f0 - 0x1c7310
void sub_001C72F0_0x1c72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C72F0_0x1c72f0");
#endif

    switch (ctx->pc) {
        case 0x1c7300u: goto label_1c7300;
        default: break;
    }

    ctx->pc = 0x1c72f0u;

    // 0x1c72f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c72f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c72f8: 0xc071c76  jal         func_1C71D8
    ctx->pc = 0x1C72F8u;
    SET_GPR_U32(ctx, 31, 0x1C7300u);
    ctx->pc = 0x1C72FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72F8u;
            // 0x1c72fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C71D8u;
    if (runtime->hasFunction(0x1C71D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C71D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7300u; }
        if (ctx->pc != 0x1C7300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C71D8_0x1c71d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7300u; }
        if (ctx->pc != 0x1C7300u) { return; }
    }
    ctx->pc = 0x1C7300u;
label_1c7300:
    // 0x1c7300: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7308u;
            // 0x1c730c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7310u;
    ctx->pc = 0x1c7310u;
}
