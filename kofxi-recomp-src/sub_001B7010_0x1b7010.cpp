#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7010
// Address: 0x1b7010 - 0x1b7050
void sub_001B7010_0x1b7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7010_0x1b7010");
#endif

    switch (ctx->pc) {
        case 0x1b702cu: goto label_1b702c;
        case 0x1b7038u: goto label_1b7038;
        default: break;
    }

    ctx->pc = 0x1b7010u;

    // 0x1b7010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b701c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7024: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7024u;
    SET_GPR_U32(ctx, 31, 0x1B702Cu);
    ctx->pc = 0x1B7028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7024u;
            // 0x1b7028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B702Cu; }
        if (ctx->pc != 0x1B702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B702Cu; }
        if (ctx->pc != 0x1B702Cu) { return; }
    }
    ctx->pc = 0x1B702Cu;
label_1b702c:
    // 0x1b702c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7030: 0xc06dc14  jal         func_1B7050
    ctx->pc = 0x1B7030u;
    SET_GPR_U32(ctx, 31, 0x1B7038u);
    ctx->pc = 0x1B7034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7030u;
            // 0x1b7034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7050u;
    if (runtime->hasFunction(0x1B7050u)) {
        auto targetFn = runtime->lookupFunction(0x1B7050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7038u; }
        if (ctx->pc != 0x1B7038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7050_0x1b7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7038u; }
        if (ctx->pc != 0x1B7038u) { return; }
    }
    ctx->pc = 0x1B7038u;
label_1b7038:
    // 0x1b7038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b703c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b703cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7044: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B7044u;
    ctx->pc = 0x1B7048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7044u;
            // 0x1b7048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B704Cu;
    // 0x1b704c: 0x0  nop
    ctx->pc = 0x1b704cu;
    // NOP
    ctx->pc = 0x1b7050u;
}
