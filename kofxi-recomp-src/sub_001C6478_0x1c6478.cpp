#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6478
// Address: 0x1c6478 - 0x1c64b0
void sub_001C6478_0x1c6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6478_0x1c6478");
#endif

    switch (ctx->pc) {
        case 0x1c648cu: goto label_1c648c;
        case 0x1c6494u: goto label_1c6494;
        case 0x1c649cu: goto label_1c649c;
        default: break;
    }

    ctx->pc = 0x1c6478u;

    // 0x1c6478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c647c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6484: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C6484u;
    SET_GPR_U32(ctx, 31, 0x1C648Cu);
    ctx->pc = 0x1C6488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6484u;
            // 0x1c6488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (runtime->hasFunction(0x1C6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C648Cu; }
        if (ctx->pc != 0x1C648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AB8_0x1c6ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C648Cu; }
        if (ctx->pc != 0x1C648Cu) { return; }
    }
    ctx->pc = 0x1C648Cu;
label_1c648c:
    // 0x1c648c: 0xc07192c  jal         func_1C64B0
    ctx->pc = 0x1C648Cu;
    SET_GPR_U32(ctx, 31, 0x1C6494u);
    ctx->pc = 0x1C6490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C648Cu;
            // 0x1c6490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C64B0u;
    if (runtime->hasFunction(0x1C64B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C64B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6494u; }
        if (ctx->pc != 0x1C6494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C64B0_0x1c64b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6494u; }
        if (ctx->pc != 0x1C6494u) { return; }
    }
    ctx->pc = 0x1C6494u;
label_1c6494:
    // 0x1c6494: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C6494u;
    SET_GPR_U32(ctx, 31, 0x1C649Cu);
    ctx->pc = 0x1C6498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6494u;
            // 0x1c6498: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (runtime->hasFunction(0x1C6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C649Cu; }
        if (ctx->pc != 0x1C649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C649Cu; }
        if (ctx->pc != 0x1C649Cu) { return; }
    }
    ctx->pc = 0x1C649Cu;
label_1c649c:
    // 0x1c649c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c64a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c64a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c64a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c64a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C64A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C64ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64A8u;
            // 0x1c64ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C64B0u;
    ctx->pc = 0x1c64b0u;
}
