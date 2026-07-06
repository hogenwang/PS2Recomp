#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9370
// Address: 0x1b9370 - 0x1b93a8
void sub_001B9370_0x1b9370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9370_0x1b9370");
#endif

    switch (ctx->pc) {
        case 0x1b9384u: goto label_1b9384;
        case 0x1b938cu: goto label_1b938c;
        case 0x1b9394u: goto label_1b9394;
        default: break;
    }

    ctx->pc = 0x1b9370u;

    // 0x1b9370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b937c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B937Cu;
    SET_GPR_U32(ctx, 31, 0x1B9384u);
    ctx->pc = 0x1B9380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B937Cu;
            // 0x1b9380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9384u; }
        if (ctx->pc != 0x1B9384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9384u; }
        if (ctx->pc != 0x1B9384u) { return; }
    }
    ctx->pc = 0x1B9384u;
label_1b9384:
    // 0x1b9384: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1B9384u;
    SET_GPR_U32(ctx, 31, 0x1B938Cu);
    ctx->pc = 0x1B9388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9384u;
            // 0x1b9388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (runtime->hasFunction(0x1B93A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B93A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B938Cu; }
        if (ctx->pc != 0x1B938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93A8_0x1b93a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B938Cu; }
        if (ctx->pc != 0x1B938Cu) { return; }
    }
    ctx->pc = 0x1B938Cu;
label_1b938c:
    // 0x1b938c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B938Cu;
    SET_GPR_U32(ctx, 31, 0x1B9394u);
    ctx->pc = 0x1B9390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B938Cu;
            // 0x1b9390: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9394u; }
        if (ctx->pc != 0x1B9394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9394u; }
        if (ctx->pc != 0x1B9394u) { return; }
    }
    ctx->pc = 0x1B9394u;
label_1b9394:
    // 0x1b9394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b939c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b939cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b93a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B93A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B93A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93A0u;
            // 0x1b93a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B93A8u;
    ctx->pc = 0x1b93a8u;
}
