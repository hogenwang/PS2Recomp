#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7BF0
// Address: 0x1b7bf0 - 0x1b7c30
void sub_001B7BF0_0x1b7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7BF0_0x1b7bf0");
#endif

    switch (ctx->pc) {
        case 0x1b7c0cu: goto label_1b7c0c;
        case 0x1b7c18u: goto label_1b7c18;
        default: break;
    }

    ctx->pc = 0x1b7bf0u;

    // 0x1b7bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7c04: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7C04u;
    SET_GPR_U32(ctx, 31, 0x1B7C0Cu);
    ctx->pc = 0x1B7C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C04u;
            // 0x1b7c08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C0Cu; }
        if (ctx->pc != 0x1B7C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C0Cu; }
        if (ctx->pc != 0x1B7C0Cu) { return; }
    }
    ctx->pc = 0x1B7C0Cu;
label_1b7c0c:
    // 0x1b7c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c10: 0xc06df0c  jal         func_1B7C30
    ctx->pc = 0x1B7C10u;
    SET_GPR_U32(ctx, 31, 0x1B7C18u);
    ctx->pc = 0x1B7C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C10u;
            // 0x1b7c14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C30u;
    if (runtime->hasFunction(0x1B7C30u)) {
        auto targetFn = runtime->lookupFunction(0x1B7C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C18u; }
        if (ctx->pc != 0x1B7C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7C30_0x1b7c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C18u; }
        if (ctx->pc != 0x1B7C18u) { return; }
    }
    ctx->pc = 0x1B7C18u;
label_1b7c18:
    // 0x1b7c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c24: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B7C24u;
    ctx->pc = 0x1B7C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C24u;
            // 0x1b7c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7C2Cu;
    // 0x1b7c2c: 0x0  nop
    ctx->pc = 0x1b7c2cu;
    // NOP
    ctx->pc = 0x1b7c30u;
}
