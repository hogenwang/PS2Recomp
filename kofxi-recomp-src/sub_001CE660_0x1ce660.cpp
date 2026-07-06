#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE660
// Address: 0x1ce660 - 0x1ce6a0
void sub_001CE660_0x1ce660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE660_0x1ce660");
#endif

    switch (ctx->pc) {
        case 0x1ce678u: goto label_1ce678;
        default: break;
    }

    ctx->pc = 0x1ce660u;

    // 0x1ce660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce664: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1ce664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce670: 0x8073916  j           func_1CE458
    ctx->pc = 0x1CE670u;
    ctx->pc = 0x1CE674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE670u;
            // 0x1ce674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE458u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CE678u;
label_1ce678:
    // 0x1ce678: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ce67c: 0x2c840007  sltiu       $a0, $a0, 0x7
    ctx->pc = 0x1ce67cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ce680: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1ce684: 0x2421e568  addiu       $at, $at, -0x1A98
    ctx->pc = 0x1ce684u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294960488));
    // 0x1ce688: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1ce688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1ce68c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE68Cu;
    {
        const bool branch_taken_0x1ce68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE68Cu;
            // 0x1ce690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce68c) {
            ctx->pc = 0x1CE698u;
            goto label_1ce698;
        }
    }
    ctx->pc = 0x1CE694u;
    // 0x1ce694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ce694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce698:
    // 0x1ce698: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE6A0u;
    ctx->pc = 0x1ce6a0u;
}
