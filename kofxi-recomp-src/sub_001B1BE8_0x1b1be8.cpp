#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1BE8
// Address: 0x1b1be8 - 0x1b1c38
void sub_001B1BE8_0x1b1be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1BE8_0x1b1be8");
#endif

    switch (ctx->pc) {
        case 0x1b1c00u: goto label_1b1c00;
        case 0x1b1c14u: goto label_1b1c14;
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c24u: goto label_1b1c24;
        default: break;
    }

    ctx->pc = 0x1b1be8u;

    // 0x1b1be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1bf4: 0x806c6b8  j           func_1B1AE0
    ctx->pc = 0x1B1BF4u;
    ctx->pc = 0x1B1BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BF4u;
            // 0x1b1bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AE0u;
    if (runtime->hasFunction(0x1B1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B1AE0_0x1b1ae0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B1BFCu;
    // 0x1b1bfc: 0x0  nop
    ctx->pc = 0x1b1bfcu;
    // NOP
label_1b1c00:
    // 0x1b1c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1c0c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B1C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C14u);
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C14u; }
        if (ctx->pc != 0x1B1C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C14u; }
        if (ctx->pc != 0x1B1C14u) { return; }
    }
    ctx->pc = 0x1B1C14u;
label_1b1c14:
    // 0x1b1c14: 0xc06c70e  jal         func_1B1C38
    ctx->pc = 0x1B1C14u;
    SET_GPR_U32(ctx, 31, 0x1B1C1Cu);
    ctx->pc = 0x1B1C38u;
    if (runtime->hasFunction(0x1B1C38u)) {
        auto targetFn = runtime->lookupFunction(0x1B1C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C1Cu; }
        if (ctx->pc != 0x1B1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1C38_0x1b1c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C1Cu; }
        if (ctx->pc != 0x1B1C1Cu) { return; }
    }
    ctx->pc = 0x1B1C1Cu;
label_1b1c1c:
    // 0x1b1c1c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B1C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C24u);
    ctx->pc = 0x1B1C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C1Cu;
            // 0x1b1c20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C24u; }
        if (ctx->pc != 0x1B1C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C24u; }
        if (ctx->pc != 0x1B1C24u) { return; }
    }
    ctx->pc = 0x1B1C24u;
label_1b1c24:
    // 0x1b1c24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C30u;
            // 0x1b1c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1C38u;
    ctx->pc = 0x1b1c38u;
}
