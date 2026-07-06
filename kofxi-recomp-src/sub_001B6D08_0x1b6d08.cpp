#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6D08
// Address: 0x1b6d08 - 0x1b6d40
void sub_001B6D08_0x1b6d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D08_0x1b6d08");
#endif

    switch (ctx->pc) {
        case 0x1b6d1cu: goto label_1b6d1c;
        case 0x1b6d24u: goto label_1b6d24;
        case 0x1b6d2cu: goto label_1b6d2c;
        default: break;
    }

    ctx->pc = 0x1b6d08u;

    // 0x1b6d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6d10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6d14: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6D14u;
    SET_GPR_U32(ctx, 31, 0x1B6D1Cu);
    ctx->pc = 0x1B6D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D14u;
            // 0x1b6d18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D1Cu; }
        if (ctx->pc != 0x1B6D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D1Cu; }
        if (ctx->pc != 0x1B6D1Cu) { return; }
    }
    ctx->pc = 0x1B6D1Cu;
label_1b6d1c:
    // 0x1b6d1c: 0xc06db50  jal         func_1B6D40
    ctx->pc = 0x1B6D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D24u);
    ctx->pc = 0x1B6D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D1Cu;
            // 0x1b6d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D40u;
    if (runtime->hasFunction(0x1B6D40u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D24u; }
        if (ctx->pc != 0x1B6D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D40_0x1b6d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D24u; }
        if (ctx->pc != 0x1B6D24u) { return; }
    }
    ctx->pc = 0x1B6D24u;
label_1b6d24:
    // 0x1b6d24: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B6D24u;
    SET_GPR_U32(ctx, 31, 0x1B6D2Cu);
    ctx->pc = 0x1B6D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D24u;
            // 0x1b6d28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D2Cu; }
        if (ctx->pc != 0x1B6D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D2Cu; }
        if (ctx->pc != 0x1B6D2Cu) { return; }
    }
    ctx->pc = 0x1B6D2Cu;
label_1b6d2c:
    // 0x1b6d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6d30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D38u;
            // 0x1b6d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6D40u;
    ctx->pc = 0x1b6d40u;
}
