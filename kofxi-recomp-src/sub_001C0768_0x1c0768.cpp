#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0768
// Address: 0x1c0768 - 0x1c07d0
void sub_001C0768_0x1c0768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0768_0x1c0768");
#endif

    switch (ctx->pc) {
        case 0x1c078cu: goto label_1c078c;
        case 0x1c0794u: goto label_1c0794;
        case 0x1c07a8u: goto label_1c07a8;
        case 0x1c07c0u: goto label_1c07c0;
        default: break;
    }

    ctx->pc = 0x1c0768u;

    // 0x1c0768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c076c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0774: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c0774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c0778: 0x2610c850  addiu       $s0, $s0, -0x37B0
    ctx->pc = 0x1c0778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953040));
    // 0x1c077c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c0780: 0x0  nop
    ctx->pc = 0x1c0780u;
    // NOP
    // 0x1c0784: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0784u;
    SET_GPR_U32(ctx, 31, 0x1C078Cu);
    ctx->pc = 0x1C0788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0784u;
            // 0x1c0788: 0x24042600  addiu       $a0, $zero, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C078Cu; }
        if (ctx->pc != 0x1C078Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C078Cu; }
        if (ctx->pc != 0x1C078Cu) { return; }
    }
    ctx->pc = 0x1C078Cu;
label_1c078c:
    // 0x1c078c: 0xc0471bc  jal         func_11C6F0
    ctx->pc = 0x1C078Cu;
    SET_GPR_U32(ctx, 31, 0x1C0794u);
    ctx->pc = 0x11C6F0u;
    if (runtime->hasFunction(0x11C6F0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0794u; }
        if (ctx->pc != 0x1C0794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C6F0_0x11c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0794u; }
        if (ctx->pc != 0x1C0794u) { return; }
    }
    ctx->pc = 0x1C0794u;
label_1c0794:
    // 0x1c0794: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0798: 0x24042601  addiu       $a0, $zero, 0x2601
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9729));
    // 0x1c079c: 0x2463c84c  addiu       $v1, $v1, -0x37B4
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953036));
    // 0x1c07a0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C07A0u;
    SET_GPR_U32(ctx, 31, 0x1C07A8u);
    ctx->pc = 0x1C07A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07A0u;
            // 0x1c07a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07A8u; }
        if (ctx->pc != 0x1C07A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07A8u; }
        if (ctx->pc != 0x1C07A8u) { return; }
    }
    ctx->pc = 0x1C07A8u;
label_1c07a8:
    // 0x1c07a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c07ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c07acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c07b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c07b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c07b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C07B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07B4u;
            // 0x1c07b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C07BCu;
    // 0x1c07bc: 0x0  nop
    ctx->pc = 0x1c07bcu;
    // NOP
label_1c07c0:
    // 0x1c07c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c07c4: 0x2463c854  addiu       $v1, $v1, -0x37AC
    ctx->pc = 0x1c07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953044));
    // 0x1c07c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C07C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07C8u;
            // 0x1c07cc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C07D0u;
    ctx->pc = 0x1c07d0u;
}
