#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6E08
// Address: 0x1b6e08 - 0x1b6e50
void sub_001B6E08_0x1b6e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E08_0x1b6e08");
#endif

    switch (ctx->pc) {
        case 0x1b6e24u: goto label_1b6e24;
        case 0x1b6e30u: goto label_1b6e30;
        case 0x1b6e38u: goto label_1b6e38;
        default: break;
    }

    ctx->pc = 0x1b6e08u;

    // 0x1b6e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6e1c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E24u);
    ctx->pc = 0x1B6E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E1Cu;
            // 0x1b6e20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E24u; }
        if (ctx->pc != 0x1B6E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E24u; }
        if (ctx->pc != 0x1B6E24u) { return; }
    }
    ctx->pc = 0x1B6E24u;
label_1b6e24:
    // 0x1b6e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e28: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x1B6E28u;
    SET_GPR_U32(ctx, 31, 0x1B6E30u);
    ctx->pc = 0x1B6E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E28u;
            // 0x1b6e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (runtime->hasFunction(0x1B6E50u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E30u; }
        if (ctx->pc != 0x1B6E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6E50_0x1b6e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E30u; }
        if (ctx->pc != 0x1B6E30u) { return; }
    }
    ctx->pc = 0x1B6E30u;
label_1b6e30:
    // 0x1b6e30: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B6E30u;
    SET_GPR_U32(ctx, 31, 0x1B6E38u);
    ctx->pc = 0x1B6E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E30u;
            // 0x1b6e34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E38u; }
        if (ctx->pc != 0x1B6E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E38u; }
        if (ctx->pc != 0x1B6E38u) { return; }
    }
    ctx->pc = 0x1B6E38u;
label_1b6e38:
    // 0x1b6e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6e3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E48u;
            // 0x1b6e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6E50u;
    ctx->pc = 0x1b6e50u;
}
