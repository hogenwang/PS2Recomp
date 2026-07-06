#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5540
// Address: 0x1e5540 - 0x1e5590
void sub_001E5540_0x1e5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5540_0x1e5540");
#endif

    switch (ctx->pc) {
        case 0x1e5554u: goto label_1e5554;
        case 0x1e5580u: goto label_1e5580;
        default: break;
    }

    ctx->pc = 0x1e5540u;

    // 0x1e5540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e554c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E554Cu;
    SET_GPR_U32(ctx, 31, 0x1E5554u);
    ctx->pc = 0x1E5550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E554Cu;
            // 0x1e5550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5554u; }
        if (ctx->pc != 0x1E5554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5554u; }
        if (ctx->pc != 0x1E5554u) { return; }
    }
    ctx->pc = 0x1E5554u;
label_1e5554:
    // 0x1e5554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e555c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E555Cu;
    {
        const bool branch_taken_0x1e555c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E555Cu;
            // 0x1e5560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e555c) {
            ctx->pc = 0x1E5580u;
            goto label_1e5580;
        }
    }
    ctx->pc = 0x1E5564u;
    // 0x1e5564: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e556c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5570: 0x2484e230  addiu       $a0, $a0, -0x1DD0
    ctx->pc = 0x1e5570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959664));
    // 0x1e5574: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5574u;
    ctx->pc = 0x1E5578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5574u;
            // 0x1e5578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E557Cu;
    // 0x1e557c: 0x0  nop
    ctx->pc = 0x1e557cu;
    // NOP
label_1e5580:
    // 0x1e5580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5584: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e5584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5588: 0x80796a0  j           func_1E5A80
    ctx->pc = 0x1E5588u;
    ctx->pc = 0x1E558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5588u;
            // 0x1e558c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A80u;
    if (runtime->hasFunction(0x1E5A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E5A80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E5A80_0x1e5a80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E5590u;
    ctx->pc = 0x1e5590u;
}
