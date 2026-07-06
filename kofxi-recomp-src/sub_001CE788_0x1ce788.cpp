#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE788
// Address: 0x1ce788 - 0x1ce7e0
void sub_001CE788_0x1ce788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE788_0x1ce788");
#endif

    switch (ctx->pc) {
        case 0x1ce7b8u: goto label_1ce7b8;
        case 0x1ce7d8u: goto label_1ce7d8;
        default: break;
    }

    ctx->pc = 0x1ce788u;

    // 0x1ce788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce78c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce794: 0x2442e55c  addiu       $v0, $v0, -0x1AA4
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960476));
    // 0x1ce798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce79c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ce79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce7a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ce7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ce7a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce7a8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CE7A8u;
    {
        const bool branch_taken_0x1ce7a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7A8u;
            // 0x1ce7ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7a8) {
            ctx->pc = 0x1CE7D8u;
            goto label_1ce7d8;
        }
    }
    ctx->pc = 0x1CE7B0u;
    // 0x1ce7b0: 0xc0739a8  jal         func_1CE6A0
    ctx->pc = 0x1CE7B0u;
    SET_GPR_U32(ctx, 31, 0x1CE7B8u);
    ctx->pc = 0x1CE6A0u;
    if (runtime->hasFunction(0x1CE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7B8u; }
        if (ctx->pc != 0x1CE7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE6A0_0x1ce6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7B8u; }
        if (ctx->pc != 0x1CE7B8u) { return; }
    }
    ctx->pc = 0x1CE7B8u;
label_1ce7b8:
    // 0x1ce7b8: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1ce7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1ce7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce7c0: 0x24847ff0  addiu       $a0, $a0, 0x7FF0
    ctx->pc = 0x1ce7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32752));
    // 0x1ce7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce7cc: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1CE7CCu;
    ctx->pc = 0x1CE7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7CCu;
            // 0x1ce7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CE7D4u;
    // 0x1ce7d4: 0x0  nop
    ctx->pc = 0x1ce7d4u;
    // NOP
label_1ce7d8:
    // 0x1ce7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7D8u;
            // 0x1ce7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE7E0u;
    ctx->pc = 0x1ce7e0u;
}
