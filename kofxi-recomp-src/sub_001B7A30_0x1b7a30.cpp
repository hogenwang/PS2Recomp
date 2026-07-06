#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7A30
// Address: 0x1b7a30 - 0x1b7a68
void sub_001B7A30_0x1b7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A30_0x1b7a30");
#endif

    switch (ctx->pc) {
        case 0x1b7a44u: goto label_1b7a44;
        case 0x1b7a4cu: goto label_1b7a4c;
        case 0x1b7a54u: goto label_1b7a54;
        default: break;
    }

    ctx->pc = 0x1b7a30u;

    // 0x1b7a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7a38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7a3c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A44u);
    ctx->pc = 0x1B7A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A3Cu;
            // 0x1b7a40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A44u; }
        if (ctx->pc != 0x1B7A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A44u; }
        if (ctx->pc != 0x1B7A44u) { return; }
    }
    ctx->pc = 0x1B7A44u;
label_1b7a44:
    // 0x1b7a44: 0xc06de9a  jal         func_1B7A68
    ctx->pc = 0x1B7A44u;
    SET_GPR_U32(ctx, 31, 0x1B7A4Cu);
    ctx->pc = 0x1B7A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A44u;
            // 0x1b7a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A68u;
    if (runtime->hasFunction(0x1B7A68u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A4Cu; }
        if (ctx->pc != 0x1B7A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7A68_0x1b7a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A4Cu; }
        if (ctx->pc != 0x1B7A4Cu) { return; }
    }
    ctx->pc = 0x1B7A4Cu;
label_1b7a4c:
    // 0x1b7a4c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A54u);
    ctx->pc = 0x1B7A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A4Cu;
            // 0x1b7a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A54u; }
        if (ctx->pc != 0x1B7A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A54u; }
        if (ctx->pc != 0x1B7A54u) { return; }
    }
    ctx->pc = 0x1B7A54u;
label_1b7a54:
    // 0x1b7a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7a58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A60u;
            // 0x1b7a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7A68u;
    ctx->pc = 0x1b7a68u;
}
