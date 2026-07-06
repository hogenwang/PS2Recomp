#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1DB8
// Address: 0x1e1db8 - 0x1e1df0
void sub_001E1DB8_0x1e1db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1DB8_0x1e1db8");
#endif

    switch (ctx->pc) {
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1ddcu: goto label_1e1ddc;
        default: break;
    }

    ctx->pc = 0x1e1db8u;

    // 0x1e1db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1dc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e1dc4: 0xc079e86  jal         func_1E7A18
    ctx->pc = 0x1E1DC4u;
    SET_GPR_U32(ctx, 31, 0x1E1DCCu);
    ctx->pc = 0x1E1DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DC4u;
            // 0x1e1dc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A18u;
    if (runtime->hasFunction(0x1E7A18u)) {
        auto targetFn = runtime->lookupFunction(0x1E7A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DCCu; }
        if (ctx->pc != 0x1E1DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7A18_0x1e7a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DCCu; }
        if (ctx->pc != 0x1E1DCCu) { return; }
    }
    ctx->pc = 0x1E1DCCu;
label_1e1dcc:
    // 0x1e1dcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1DCCu;
    {
        const bool branch_taken_0x1e1dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DCCu;
            // 0x1e1dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dcc) {
            ctx->pc = 0x1E1DE0u;
            goto label_1e1de0;
        }
    }
    ctx->pc = 0x1E1DD4u;
    // 0x1e1dd4: 0xc079e26  jal         func_1E7898
    ctx->pc = 0x1E1DD4u;
    SET_GPR_U32(ctx, 31, 0x1E1DDCu);
    ctx->pc = 0x1E7898u;
    if (runtime->hasFunction(0x1E7898u)) {
        auto targetFn = runtime->lookupFunction(0x1E7898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DDCu; }
        if (ctx->pc != 0x1E1DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7898_0x1e7898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DDCu; }
        if (ctx->pc != 0x1E1DDCu) { return; }
    }
    ctx->pc = 0x1E1DDCu;
label_1e1ddc:
    // 0x1e1ddc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1de0:
    // 0x1e1de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DE8u;
            // 0x1e1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DF0u;
    ctx->pc = 0x1e1df0u;
}
