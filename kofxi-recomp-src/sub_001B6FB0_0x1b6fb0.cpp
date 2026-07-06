#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6FB0
// Address: 0x1b6fb0 - 0x1b7000
void sub_001B6FB0_0x1b6fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6FB0_0x1b6fb0");
#endif

    switch (ctx->pc) {
        case 0x1b6fd4u: goto label_1b6fd4;
        case 0x1b6fe4u: goto label_1b6fe4;
        default: break;
    }

    ctx->pc = 0x1b6fb0u;

    // 0x1b6fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6fc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6fc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6fcc: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6FCCu;
    SET_GPR_U32(ctx, 31, 0x1B6FD4u);
    ctx->pc = 0x1B6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FCCu;
            // 0x1b6fd0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD4u; }
        if (ctx->pc != 0x1B6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD4u; }
        if (ctx->pc != 0x1B6FD4u) { return; }
    }
    ctx->pc = 0x1B6FD4u;
label_1b6fd4:
    // 0x1b6fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fdc: 0xc06dc00  jal         func_1B7000
    ctx->pc = 0x1B6FDCu;
    SET_GPR_U32(ctx, 31, 0x1B6FE4u);
    ctx->pc = 0x1B6FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FDCu;
            // 0x1b6fe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7000u;
    if (runtime->hasFunction(0x1B7000u)) {
        auto targetFn = runtime->lookupFunction(0x1B7000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FE4u; }
        if (ctx->pc != 0x1B6FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7000_0x1b7000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FE4u; }
        if (ctx->pc != 0x1B6FE4u) { return; }
    }
    ctx->pc = 0x1B6FE4u;
label_1b6fe4:
    // 0x1b6fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6fec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ff0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6ff4: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6FF4u;
    ctx->pc = 0x1B6FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FF4u;
            // 0x1b6ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6FFCu;
    // 0x1b6ffc: 0x0  nop
    ctx->pc = 0x1b6ffcu;
    // NOP
    ctx->pc = 0x1b7000u;
}
