#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA998
// Address: 0x1ca998 - 0x1ca9e0
void sub_001CA998_0x1ca998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA998_0x1ca998");
#endif

    switch (ctx->pc) {
        case 0x1ca9b4u: goto label_1ca9b4;
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9c8u: goto label_1ca9c8;
        default: break;
    }

    ctx->pc = 0x1ca998u;

    // 0x1ca998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca9a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca9ac: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CA9ACu;
    SET_GPR_U32(ctx, 31, 0x1CA9B4u);
    ctx->pc = 0x1CA9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9ACu;
            // 0x1ca9b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9B4u; }
        if (ctx->pc != 0x1CA9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9B4u; }
        if (ctx->pc != 0x1CA9B4u) { return; }
    }
    ctx->pc = 0x1CA9B4u;
label_1ca9b4:
    // 0x1ca9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9b8: 0xc072a78  jal         func_1CA9E0
    ctx->pc = 0x1CA9B8u;
    SET_GPR_U32(ctx, 31, 0x1CA9C0u);
    ctx->pc = 0x1CA9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9B8u;
            // 0x1ca9bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA9E0u;
    if (runtime->hasFunction(0x1CA9E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9C0u; }
        if (ctx->pc != 0x1CA9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA9E0_0x1ca9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9C0u; }
        if (ctx->pc != 0x1CA9C0u) { return; }
    }
    ctx->pc = 0x1CA9C0u;
label_1ca9c0:
    // 0x1ca9c0: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CA9C0u;
    SET_GPR_U32(ctx, 31, 0x1CA9C8u);
    ctx->pc = 0x1CA9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9C0u;
            // 0x1ca9c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9C8u; }
        if (ctx->pc != 0x1CA9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9C8u; }
        if (ctx->pc != 0x1CA9C8u) { return; }
    }
    ctx->pc = 0x1CA9C8u;
label_1ca9c8:
    // 0x1ca9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca9cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ca9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca9d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9D8u;
            // 0x1ca9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA9E0u;
    ctx->pc = 0x1ca9e0u;
}
