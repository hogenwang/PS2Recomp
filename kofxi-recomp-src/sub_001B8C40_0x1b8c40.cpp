#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8C40
// Address: 0x1b8c40 - 0x1b8c70
void sub_001B8C40_0x1b8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8C40_0x1b8c40");
#endif

    switch (ctx->pc) {
        case 0x1b8c54u: goto label_1b8c54;
        case 0x1b8c5cu: goto label_1b8c5c;
        default: break;
    }

    ctx->pc = 0x1b8c40u;

    // 0x1b8c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8c48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b8c4c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B8C54u);
    ctx->pc = 0x1B8C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C4Cu;
            // 0x1b8c50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C54u; }
        if (ctx->pc != 0x1B8C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C54u; }
        if (ctx->pc != 0x1B8C54u) { return; }
    }
    ctx->pc = 0x1B8C54u;
label_1b8c54:
    // 0x1b8c54: 0xc06e31c  jal         func_1B8C70
    ctx->pc = 0x1B8C54u;
    SET_GPR_U32(ctx, 31, 0x1B8C5Cu);
    ctx->pc = 0x1B8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C54u;
            // 0x1b8c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C70u;
    if (runtime->hasFunction(0x1B8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C5Cu; }
        if (ctx->pc != 0x1B8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C70_0x1b8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C5Cu; }
        if (ctx->pc != 0x1B8C5Cu) { return; }
    }
    ctx->pc = 0x1B8C5Cu;
label_1b8c5c:
    // 0x1b8c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8c60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8c64: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B8C64u;
    ctx->pc = 0x1B8C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C64u;
            // 0x1b8c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8C6Cu;
    // 0x1b8c6c: 0x0  nop
    ctx->pc = 0x1b8c6cu;
    // NOP
    ctx->pc = 0x1b8c70u;
}
