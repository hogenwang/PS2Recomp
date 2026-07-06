#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297188
// Address: 0x297188 - 0x2971b0
void sub_00297188_0x297188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297188_0x297188");
#endif

    switch (ctx->pc) {
        case 0x297198u: goto label_297198;
        case 0x2971a0u: goto label_2971a0;
        default: break;
    }

    ctx->pc = 0x297188u;

    // 0x297188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29718c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297190: 0xc0a69f0  jal         func_29A7C0
    ctx->pc = 0x297190u;
    SET_GPR_U32(ctx, 31, 0x297198u);
    ctx->pc = 0x29A7C0u;
    if (runtime->hasFunction(0x29A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x29A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297198u; }
        if (ctx->pc != 0x297198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A7C0_0x29a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297198u; }
        if (ctx->pc != 0x297198u) { return; }
    }
    ctx->pc = 0x297198u;
label_297198:
    // 0x297198: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x297198u;
    SET_GPR_U32(ctx, 31, 0x2971A0u);
    ctx->pc = 0x29719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297198u;
            // 0x29719c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (runtime->hasFunction(0x297070u)) {
        auto targetFn = runtime->lookupFunction(0x297070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971A0u; }
        if (ctx->pc != 0x2971A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297070_0x297070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971A0u; }
        if (ctx->pc != 0x2971A0u) { return; }
    }
    ctx->pc = 0x2971A0u;
label_2971a0:
    // 0x2971a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2971a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2971a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2971A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2971A4u;
            // 0x2971a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2971ACu;
    // 0x2971ac: 0x0  nop
    ctx->pc = 0x2971acu;
    // NOP
    ctx->pc = 0x2971b0u;
}
