#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7ED0
// Address: 0x1b7ed0 - 0x1b7f20
void sub_001B7ED0_0x1b7ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7ED0_0x1b7ed0");
#endif

    switch (ctx->pc) {
        case 0x1b7ee0u: goto label_1b7ee0;
        case 0x1b7efcu: goto label_1b7efc;
        case 0x1b7f08u: goto label_1b7f08;
        default: break;
    }

    ctx->pc = 0x1b7ed0u;

    // 0x1b7ed0: 0x512c0  sll         $v0, $a1, 11
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1b7ed4: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1b7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1b7ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7ED8u;
            // 0x1b7edc: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7EE0u;
label_1b7ee0:
    // 0x1b7ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7ef4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7EF4u;
    SET_GPR_U32(ctx, 31, 0x1B7EFCu);
    ctx->pc = 0x1B7EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EF4u;
            // 0x1b7ef8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EFCu; }
        if (ctx->pc != 0x1B7EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EFCu; }
        if (ctx->pc != 0x1B7EFCu) { return; }
    }
    ctx->pc = 0x1B7EFCu;
label_1b7efc:
    // 0x1b7efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f00: 0xc06dfc8  jal         func_1B7F20
    ctx->pc = 0x1B7F00u;
    SET_GPR_U32(ctx, 31, 0x1B7F08u);
    ctx->pc = 0x1B7F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F00u;
            // 0x1b7f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F20u;
    if (runtime->hasFunction(0x1B7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1B7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F08u; }
        if (ctx->pc != 0x1B7F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7F20_0x1b7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F08u; }
        if (ctx->pc != 0x1B7F08u) { return; }
    }
    ctx->pc = 0x1B7F08u;
label_1b7f08:
    // 0x1b7f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f14: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B7F14u;
    ctx->pc = 0x1B7F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F14u;
            // 0x1b7f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7F1Cu;
    // 0x1b7f1c: 0x0  nop
    ctx->pc = 0x1b7f1cu;
    // NOP
    ctx->pc = 0x1b7f20u;
}
