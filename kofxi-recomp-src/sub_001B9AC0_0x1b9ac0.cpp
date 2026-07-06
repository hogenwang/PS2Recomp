#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9AC0
// Address: 0x1b9ac0 - 0x1b9af8
void sub_001B9AC0_0x1b9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9AC0_0x1b9ac0");
#endif

    switch (ctx->pc) {
        case 0x1b9ad4u: goto label_1b9ad4;
        case 0x1b9adcu: goto label_1b9adc;
        case 0x1b9ae4u: goto label_1b9ae4;
        default: break;
    }

    ctx->pc = 0x1b9ac0u;

    // 0x1b9ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9acc: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9ACCu;
    SET_GPR_U32(ctx, 31, 0x1B9AD4u);
    ctx->pc = 0x1B9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9ACCu;
            // 0x1b9ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AD4u; }
        if (ctx->pc != 0x1B9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AD4u; }
        if (ctx->pc != 0x1B9AD4u) { return; }
    }
    ctx->pc = 0x1B9AD4u;
label_1b9ad4:
    // 0x1b9ad4: 0xc06e6be  jal         func_1B9AF8
    ctx->pc = 0x1B9AD4u;
    SET_GPR_U32(ctx, 31, 0x1B9ADCu);
    ctx->pc = 0x1B9AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AD4u;
            // 0x1b9ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AF8u;
    if (runtime->hasFunction(0x1B9AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B9AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ADCu; }
        if (ctx->pc != 0x1B9ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9AF8_0x1b9af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ADCu; }
        if (ctx->pc != 0x1B9ADCu) { return; }
    }
    ctx->pc = 0x1B9ADCu;
label_1b9adc:
    // 0x1b9adc: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B9ADCu;
    SET_GPR_U32(ctx, 31, 0x1B9AE4u);
    ctx->pc = 0x1B9AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9ADCu;
            // 0x1b9ae0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AE4u; }
        if (ctx->pc != 0x1B9AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AE4u; }
        if (ctx->pc != 0x1B9AE4u) { return; }
    }
    ctx->pc = 0x1B9AE4u;
label_1b9ae4:
    // 0x1b9ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AF0u;
            // 0x1b9af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9AF8u;
    ctx->pc = 0x1b9af8u;
}
