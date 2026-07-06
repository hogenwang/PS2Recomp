#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C63B0
// Address: 0x1c63b0 - 0x1c6418
void sub_001C63B0_0x1c63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C63B0_0x1c63b0");
#endif

    switch (ctx->pc) {
        case 0x1c63d0u: goto label_1c63d0;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c6400u: goto label_1c6400;
        case 0x1c6408u: goto label_1c6408;
        default: break;
    }

    ctx->pc = 0x1c63b0u;

    // 0x1c63b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c63b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C63B4u;
    {
        const bool branch_taken_0x1c63b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C63B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63B4u;
            // 0x1c63b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63b4) {
            ctx->pc = 0x1C63D0u;
            goto label_1c63d0;
        }
    }
    ctx->pc = 0x1C63BCu;
    // 0x1c63bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c63c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c63c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c63c4: 0x2484a728  addiu       $a0, $a0, -0x58D8
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944552));
    // 0x1c63c8: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C63C8u;
    ctx->pc = 0x1C63CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63C8u;
            // 0x1c63cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C63D0u;
label_1c63d0:
    // 0x1c63d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c63d4: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C63D4u;
    {
        const bool branch_taken_0x1c63d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c63d4) {
            ctx->pc = 0x1C63D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63D4u;
            // 0x1c63d8: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C63E0u;
            goto label_1c63e0;
        }
    }
    ctx->pc = 0x1C63DCu;
    // 0x1c63dc: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x1c63dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_1c63e0:
    // 0x1c63e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c63e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c63e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C63E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C63E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63E4u;
            // 0x1c63e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C63ECu;
    // 0x1c63ec: 0x0  nop
    ctx->pc = 0x1c63ecu;
    // NOP
label_1c63f0:
    // 0x1c63f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c63f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c63f8: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C63F8u;
    SET_GPR_U32(ctx, 31, 0x1C6400u);
    ctx->pc = 0x1C6AB8u;
    if (runtime->hasFunction(0x1C6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6400u; }
        if (ctx->pc != 0x1C6400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AB8_0x1c6ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6400u; }
        if (ctx->pc != 0x1C6400u) { return; }
    }
    ctx->pc = 0x1C6400u;
label_1c6400:
    // 0x1c6400: 0xc071906  jal         func_1C6418
    ctx->pc = 0x1C6400u;
    SET_GPR_U32(ctx, 31, 0x1C6408u);
    ctx->pc = 0x1C6418u;
    if (runtime->hasFunction(0x1C6418u)) {
        auto targetFn = runtime->lookupFunction(0x1C6418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6408u; }
        if (ctx->pc != 0x1C6408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6418_0x1c6418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6408u; }
        if (ctx->pc != 0x1C6408u) { return; }
    }
    ctx->pc = 0x1C6408u;
label_1c6408:
    // 0x1c6408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c640c: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C640Cu;
    ctx->pc = 0x1C6410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C640Cu;
            // 0x1c6410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (runtime->hasFunction(0x1C6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C6414u;
    // 0x1c6414: 0x0  nop
    ctx->pc = 0x1c6414u;
    // NOP
    ctx->pc = 0x1c6418u;
}
