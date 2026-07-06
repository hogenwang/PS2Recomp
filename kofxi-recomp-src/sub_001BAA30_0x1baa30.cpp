#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAA30
// Address: 0x1baa30 - 0x1baa70
void sub_001BAA30_0x1baa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAA30_0x1baa30");
#endif

    switch (ctx->pc) {
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa4cu: goto label_1baa4c;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa5cu: goto label_1baa5c;
        default: break;
    }

    ctx->pc = 0x1baa30u;

    // 0x1baa30: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA30u;
            // 0x1baa34: 0xa085006d  sb          $a1, 0x6D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 109), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAA38u;
label_1baa38:
    // 0x1baa38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baa3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1baa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1baa40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1baa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1baa44: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAA44u;
    SET_GPR_U32(ctx, 31, 0x1BAA4Cu);
    ctx->pc = 0x1BAA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA44u;
            // 0x1baa48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA4Cu; }
        if (ctx->pc != 0x1BAA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA4Cu; }
        if (ctx->pc != 0x1BAA4Cu) { return; }
    }
    ctx->pc = 0x1BAA4Cu;
label_1baa4c:
    // 0x1baa4c: 0xc06ea9c  jal         func_1BAA70
    ctx->pc = 0x1BAA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA54u);
    ctx->pc = 0x1BAA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA4Cu;
            // 0x1baa50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA70u;
    if (runtime->hasFunction(0x1BAA70u)) {
        auto targetFn = runtime->lookupFunction(0x1BAA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA54u; }
        if (ctx->pc != 0x1BAA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAA70_0x1baa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA54u; }
        if (ctx->pc != 0x1BAA54u) { return; }
    }
    ctx->pc = 0x1BAA54u;
label_1baa54:
    // 0x1baa54: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BAA54u;
    SET_GPR_U32(ctx, 31, 0x1BAA5Cu);
    ctx->pc = 0x1BAA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA54u;
            // 0x1baa58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA5Cu; }
        if (ctx->pc != 0x1BAA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA5Cu; }
        if (ctx->pc != 0x1BAA5Cu) { return; }
    }
    ctx->pc = 0x1BAA5Cu;
label_1baa5c:
    // 0x1baa5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1baa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1baa60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1baa60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA68u;
            // 0x1baa6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAA70u;
    ctx->pc = 0x1baa70u;
}
