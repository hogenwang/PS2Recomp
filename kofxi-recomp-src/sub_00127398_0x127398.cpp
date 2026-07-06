#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127398
// Address: 0x127398 - 0x1273f0
void sub_00127398_0x127398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127398_0x127398");
#endif

    switch (ctx->pc) {
        case 0x1273acu: goto label_1273ac;
        case 0x1273ccu: goto label_1273cc;
        default: break;
    }

    ctx->pc = 0x127398u;

    // 0x127398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12739c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1273a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1273a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1273a4: 0xc0435cc  jal         func_10D730
    ctx->pc = 0x1273A4u;
    SET_GPR_U32(ctx, 31, 0x1273ACu);
    ctx->pc = 0x10D730u;
    if (runtime->hasFunction(0x10D730u)) {
        auto targetFn = runtime->lookupFunction(0x10D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273ACu; }
        if (ctx->pc != 0x1273ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCanStartCurrentState_0x10d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273ACu; }
        if (ctx->pc != 0x1273ACu) { return; }
    }
    ctx->pc = 0x1273ACu;
label_1273ac:
    // 0x1273ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1273acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273b0: 0x104f000b  beq         $v0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1273B0u;
    {
        const bool branch_taken_0x1273b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1273B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273B0u;
            // 0x1273b4: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273b0) {
            ctx->pc = 0x1273E0u;
            goto label_1273e0;
        }
    }
    ctx->pc = 0x1273B8u;
    // 0x1273b8: 0x8e0fc250  lw          $t7, -0x3DB0($s0)
    ctx->pc = 0x1273b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951504)));
    // 0x1273bc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1273BCu;
    {
        const bool branch_taken_0x1273bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1273C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273BCu;
            // 0x1273c0: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273bc) {
            ctx->pc = 0x1273DCu;
            goto label_1273dc;
        }
    }
    ctx->pc = 0x1273C4u;
    // 0x1273c4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1273C4u;
    SET_GPR_U32(ctx, 31, 0x1273CCu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273CCu; }
        if (ctx->pc != 0x1273CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273CCu; }
        if (ctx->pc != 0x1273CCu) { return; }
    }
    ctx->pc = 0x1273CCu;
label_1273cc:
    // 0x1273cc: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1273d0: 0xade2c254  sw          $v0, -0x3DAC($t7)
    ctx->pc = 0x1273d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294951508), GPR_U32(ctx, 2));
    // 0x1273d4: 0x8e0fc250  lw          $t7, -0x3DB0($s0)
    ctx->pc = 0x1273d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951504)));
    // 0x1273d8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1273d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1273dc:
    // 0x1273dc: 0xae0fc250  sw          $t7, -0x3DB0($s0)
    ctx->pc = 0x1273dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951504), GPR_U32(ctx, 15));
label_1273e0:
    // 0x1273e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1273e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1273e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1273e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1273e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1273E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1273ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273E8u;
            // 0x1273ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1273F0u;
    ctx->pc = 0x1273f0u;
}
