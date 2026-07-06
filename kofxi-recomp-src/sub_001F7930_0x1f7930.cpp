#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7930
// Address: 0x1f7930 - 0x1f7960
void sub_001F7930_0x1f7930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7930_0x1f7930");
#endif

    switch (ctx->pc) {
        case 0x1f7944u: goto label_1f7944;
        case 0x1f794cu: goto label_1f794c;
        default: break;
    }

    ctx->pc = 0x1f7930u;

    // 0x1f7930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f793c: 0xc07de58  jal         func_1F7960
    ctx->pc = 0x1F793Cu;
    SET_GPR_U32(ctx, 31, 0x1F7944u);
    ctx->pc = 0x1F7940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F793Cu;
            // 0x1f7940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7960u;
    if (runtime->hasFunction(0x1F7960u)) {
        auto targetFn = runtime->lookupFunction(0x1F7960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7944u; }
        if (ctx->pc != 0x1F7944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7960_0x1f7960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7944u; }
        if (ctx->pc != 0x1F7944u) { return; }
    }
    ctx->pc = 0x1F7944u;
label_1f7944:
    // 0x1f7944: 0xc07de7e  jal         func_1F79F8
    ctx->pc = 0x1F7944u;
    SET_GPR_U32(ctx, 31, 0x1F794Cu);
    ctx->pc = 0x1F7948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7944u;
            // 0x1f7948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F79F8u;
    if (runtime->hasFunction(0x1F79F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F79F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F794Cu; }
        if (ctx->pc != 0x1F794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F79F8_0x1f79f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F794Cu; }
        if (ctx->pc != 0x1F794Cu) { return; }
    }
    ctx->pc = 0x1F794Cu;
label_1f794c:
    // 0x1f794c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f7950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7958: 0x807de9e  j           func_1F7A78
    ctx->pc = 0x1F7958u;
    ctx->pc = 0x1F795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7958u;
            // 0x1f795c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7A78u;
    {
        auto targetFn = runtime->lookupFunction(0x1F7A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F7960u;
    ctx->pc = 0x1f7960u;
}
