#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9668
// Address: 0x1e9668 - 0x1e96a0
void sub_001E9668_0x1e9668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9668_0x1e9668");
#endif

    switch (ctx->pc) {
        case 0x1e9678u: goto label_1e9678;
        case 0x1e9680u: goto label_1e9680;
        case 0x1e9690u: goto label_1e9690;
        default: break;
    }

    ctx->pc = 0x1e9668u;

    // 0x1e9668: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e9668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e966c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e966cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9670: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9670u;
            // 0x1e9674: 0xac641748  sw          $a0, 0x1748($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5960), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9678u;
label_1e9678:
    // 0x1e9678: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9678u;
            // 0x1e967c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9680u;
label_1e9680:
    // 0x1e9680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9688: 0xc07a5ee  jal         func_1E97B8
    ctx->pc = 0x1E9688u;
    SET_GPR_U32(ctx, 31, 0x1E9690u);
    ctx->pc = 0x1E968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9688u;
            // 0x1e968c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E97B8u;
    if (runtime->hasFunction(0x1E97B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E97B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E97B8_0x1e97b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9698: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9698u;
            // 0x1e969c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E96A0u;
    ctx->pc = 0x1e96a0u;
}
