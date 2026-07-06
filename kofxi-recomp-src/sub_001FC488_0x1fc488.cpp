#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC488
// Address: 0x1fc488 - 0x1fc508
void sub_001FC488_0x1fc488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC488_0x1fc488");
#endif

    switch (ctx->pc) {
        case 0x1fc4acu: goto label_1fc4ac;
        case 0x1fc4d8u: goto label_1fc4d8;
        default: break;
    }

    ctx->pc = 0x1fc488u;

    // 0x1fc488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc48c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fc48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fc490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc494: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc498: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1fc49c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fc49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fc4a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fc4a4: 0xc07efbc  jal         func_1FBEF0
    ctx->pc = 0x1FC4A4u;
    SET_GPR_U32(ctx, 31, 0x1FC4ACu);
    ctx->pc = 0x1FC4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4A4u;
            // 0x1fc4a8: 0x26300d88  addiu       $s0, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEF0u;
    if (runtime->hasFunction(0x1FBEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FBEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4ACu; }
        if (ctx->pc != 0x1FC4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBEF0_0x1fbef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4ACu; }
        if (ctx->pc != 0x1FC4ACu) { return; }
    }
    ctx->pc = 0x1FC4ACu;
label_1fc4ac:
    // 0x1fc4ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4b4: 0x8e03028c  lw          $v1, 0x28C($s0)
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1fc4b8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC4B8u;
    {
        const bool branch_taken_0x1fc4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4B8u;
            // 0x1fc4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4b8) {
            ctx->pc = 0x1FC4D0u;
            goto label_1fc4d0;
        }
    }
    ctx->pc = 0x1FC4C0u;
    // 0x1fc4c0: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x1fc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1fc4c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fc4c8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC4C8u;
    {
        const bool branch_taken_0x1fc4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4C8u;
            // 0x1fc4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4c8) {
            ctx->pc = 0x1FC4ECu;
            goto label_1fc4ec;
        }
    }
    ctx->pc = 0x1FC4D0u;
label_1fc4d0:
    // 0x1fc4d0: 0xc07ee8a  jal         func_1FBA28
    ctx->pc = 0x1FC4D0u;
    SET_GPR_U32(ctx, 31, 0x1FC4D8u);
    ctx->pc = 0x1FBA28u;
    if (runtime->hasFunction(0x1FBA28u)) {
        auto targetFn = runtime->lookupFunction(0x1FBA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4D8u; }
        if (ctx->pc != 0x1FC4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBA28_0x1fba28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4D8u; }
        if (ctx->pc != 0x1FC4D8u) { return; }
    }
    ctx->pc = 0x1FC4D8u;
label_1fc4d8:
    // 0x1fc4d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc4dc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fc4e0: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1fc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x1fc4e4: 0xae030290  sw          $v1, 0x290($s0)
    ctx->pc = 0x1fc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
    // 0x1fc4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc4ec:
    // 0x1fc4ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fc4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc4f0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1fc4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1fc4f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc4f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fc4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4FCu;
            // 0x1fc500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC504u;
    // 0x1fc504: 0x0  nop
    ctx->pc = 0x1fc504u;
    // NOP
    ctx->pc = 0x1fc508u;
}
