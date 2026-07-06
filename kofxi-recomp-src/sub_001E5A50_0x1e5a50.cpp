#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5A50
// Address: 0x1e5a50 - 0x1e5a80
void sub_001E5A50_0x1e5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5A50_0x1e5a50");
#endif

    switch (ctx->pc) {
        case 0x1e5a70u: goto label_1e5a70;
        default: break;
    }

    ctx->pc = 0x1e5a50u;

    // 0x1e5a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5a58: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1e5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e5a5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5A5Cu;
    {
        const bool branch_taken_0x1e5a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A5Cu;
            // 0x1e5a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a5c) {
            ctx->pc = 0x1E5A70u;
            goto label_1e5a70;
        }
    }
    ctx->pc = 0x1E5A64u;
    // 0x1e5a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a68: 0x80718dc  j           func_1C6370
    ctx->pc = 0x1E5A68u;
    ctx->pc = 0x1E5A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A68u;
            // 0x1e5a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6370u;
    {
        auto targetFn = runtime->lookupFunction(0x1C6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5A70u;
label_1e5a70:
    // 0x1e5a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A74u;
            // 0x1e5a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5A7Cu;
    // 0x1e5a7c: 0x0  nop
    ctx->pc = 0x1e5a7cu;
    // NOP
    ctx->pc = 0x1e5a80u;
}
