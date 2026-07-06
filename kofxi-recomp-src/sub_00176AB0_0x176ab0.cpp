#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176AB0
// Address: 0x176ab0 - 0x176ae0
void sub_00176AB0_0x176ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176AB0_0x176ab0");
#endif

    switch (ctx->pc) {
        case 0x176ac4u: goto label_176ac4;
        case 0x176ad0u: goto label_176ad0;
        default: break;
    }

    ctx->pc = 0x176ab0u;

    // 0x176ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176abc: 0xc05dab8  jal         func_176AE0
    ctx->pc = 0x176ABCu;
    SET_GPR_U32(ctx, 31, 0x176AC4u);
    ctx->pc = 0x176AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176ABCu;
            // 0x176ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176AE0u;
    if (runtime->hasFunction(0x176AE0u)) {
        auto targetFn = runtime->lookupFunction(0x176AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AC4u; }
        if (ctx->pc != 0x176AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176AE0_0x176ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AC4u; }
        if (ctx->pc != 0x176AC4u) { return; }
    }
    ctx->pc = 0x176AC4u;
label_176ac4:
    // 0x176ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ac8: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x176AC8u;
    SET_GPR_U32(ctx, 31, 0x176AD0u);
    ctx->pc = 0x176ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AC8u;
            // 0x176acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176BF0u;
    if (runtime->hasFunction(0x176BF0u)) {
        auto targetFn = runtime->lookupFunction(0x176BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AD0u; }
        if (ctx->pc != 0x176AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176BF0_0x176bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AD0u; }
        if (ctx->pc != 0x176AD0u) { return; }
    }
    ctx->pc = 0x176AD0u;
label_176ad0:
    // 0x176ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x176AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176AD8u;
            // 0x176adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176AE0u;
    ctx->pc = 0x176ae0u;
}
