#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6DC8
// Address: 0x1b6dc8 - 0x1b6e08
void sub_001B6DC8_0x1b6dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6DC8_0x1b6dc8");
#endif

    switch (ctx->pc) {
        case 0x1b6ddcu: goto label_1b6ddc;
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6df4u: goto label_1b6df4;
        default: break;
    }

    ctx->pc = 0x1b6dc8u;

    // 0x1b6dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6dd4: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B6DD4u;
    SET_GPR_U32(ctx, 31, 0x1B6DDCu);
    ctx->pc = 0x1B6DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DD4u;
            // 0x1b6dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (runtime->hasFunction(0x1B8108u)) {
        auto targetFn = runtime->lookupFunction(0x1B8108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DDCu; }
        if (ctx->pc != 0x1B6DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8108_0x1b8108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DDCu; }
        if (ctx->pc != 0x1B6DDCu) { return; }
    }
    ctx->pc = 0x1B6DDCu;
label_1b6ddc:
    // 0x1b6ddc: 0xc06db56  jal         func_1B6D58
    ctx->pc = 0x1B6DDCu;
    SET_GPR_U32(ctx, 31, 0x1B6DE4u);
    ctx->pc = 0x1B6DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DDCu;
            // 0x1b6de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D58u;
    if (runtime->hasFunction(0x1B6D58u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DE4u; }
        if (ctx->pc != 0x1B6DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D58_0x1b6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DE4u; }
        if (ctx->pc != 0x1B6DE4u) { return; }
    }
    ctx->pc = 0x1B6DE4u;
label_1b6de4:
    // 0x1b6de4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1b6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1b6de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b6dec: 0xc06e048  jal         func_1B8120
    ctx->pc = 0x1B6DECu;
    SET_GPR_U32(ctx, 31, 0x1B6DF4u);
    ctx->pc = 0x1B6DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DECu;
            // 0x1b6df0: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (runtime->hasFunction(0x1B8120u)) {
        auto targetFn = runtime->lookupFunction(0x1B8120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DF4u; }
        if (ctx->pc != 0x1B6DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8120_0x1b8120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DF4u; }
        if (ctx->pc != 0x1B6DF4u) { return; }
    }
    ctx->pc = 0x1B6DF4u;
label_1b6df4:
    // 0x1b6df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6dfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E00u;
            // 0x1b6e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6E08u;
    ctx->pc = 0x1b6e08u;
}
