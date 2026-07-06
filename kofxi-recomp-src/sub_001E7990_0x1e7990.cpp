#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7990
// Address: 0x1e7990 - 0x1e79e0
void sub_001E7990_0x1e7990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7990_0x1e7990");
#endif

    switch (ctx->pc) {
        case 0x1e79a4u: goto label_1e79a4;
        case 0x1e79b0u: goto label_1e79b0;
        case 0x1e79b8u: goto label_1e79b8;
        case 0x1e79c4u: goto label_1e79c4;
        case 0x1e79ccu: goto label_1e79cc;
        default: break;
    }

    ctx->pc = 0x1e7990u;

    // 0x1e7990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e799c: 0xc0788b4  jal         func_1E22D0
    ctx->pc = 0x1E799Cu;
    SET_GPR_U32(ctx, 31, 0x1E79A4u);
    ctx->pc = 0x1E79A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E799Cu;
            // 0x1e79a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E22D0u;
    if (runtime->hasFunction(0x1E22D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79A4u; }
        if (ctx->pc != 0x1E79A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E22D0_0x1e22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79A4u; }
        if (ctx->pc != 0x1E79A4u) { return; }
    }
    ctx->pc = 0x1E79A4u;
label_1e79a4:
    // 0x1e79a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e79a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79a8: 0xc079e40  jal         func_1E7900
    ctx->pc = 0x1E79A8u;
    SET_GPR_U32(ctx, 31, 0x1E79B0u);
    ctx->pc = 0x1E79ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79A8u;
            // 0x1e79ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7900u;
    if (runtime->hasFunction(0x1E7900u)) {
        auto targetFn = runtime->lookupFunction(0x1E7900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B0u; }
        if (ctx->pc != 0x1E79B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7900_0x1e7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B0u; }
        if (ctx->pc != 0x1E79B0u) { return; }
    }
    ctx->pc = 0x1E79B0u;
label_1e79b0:
    // 0x1e79b0: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E79B0u;
    SET_GPR_U32(ctx, 31, 0x1E79B8u);
    ctx->pc = 0x1E6C80u;
    if (runtime->hasFunction(0x1E6C80u)) {
        auto targetFn = runtime->lookupFunction(0x1E6C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B8u; }
        if (ctx->pc != 0x1E79B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6C80_0x1e6c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B8u; }
        if (ctx->pc != 0x1E79B8u) { return; }
    }
    ctx->pc = 0x1E79B8u;
label_1e79b8:
    // 0x1e79b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e79b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79bc: 0xc079e40  jal         func_1E7900
    ctx->pc = 0x1E79BCu;
    SET_GPR_U32(ctx, 31, 0x1E79C4u);
    ctx->pc = 0x1E79C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79BCu;
            // 0x1e79c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7900u;
    if (runtime->hasFunction(0x1E7900u)) {
        auto targetFn = runtime->lookupFunction(0x1E7900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79C4u; }
        if (ctx->pc != 0x1E79C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7900_0x1e7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79C4u; }
        if (ctx->pc != 0x1E79C4u) { return; }
    }
    ctx->pc = 0x1E79C4u;
label_1e79c4:
    // 0x1e79c4: 0xc0788ba  jal         func_1E22E8
    ctx->pc = 0x1E79C4u;
    SET_GPR_U32(ctx, 31, 0x1E79CCu);
    ctx->pc = 0x1E22E8u;
    if (runtime->hasFunction(0x1E22E8u)) {
        auto targetFn = runtime->lookupFunction(0x1E22E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79CCu; }
        if (ctx->pc != 0x1E79CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E22E8_0x1e22e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79CCu; }
        if (ctx->pc != 0x1E79CCu) { return; }
    }
    ctx->pc = 0x1E79CCu;
label_1e79cc:
    // 0x1e79cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e79ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e79d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e79d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e79d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e79d8: 0x8079b3c  j           func_1E6CF0
    ctx->pc = 0x1E79D8u;
    ctx->pc = 0x1E79DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79D8u;
            // 0x1e79dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6CF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1E6CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E79E0u;
    ctx->pc = 0x1e79e0u;
}
