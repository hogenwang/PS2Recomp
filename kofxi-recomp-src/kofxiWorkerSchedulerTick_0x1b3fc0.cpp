#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiWorkerSchedulerTick
// Address: 0x1b3fc0 - 0x1b4048
void kofxiWorkerSchedulerTick_0x1b3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWorkerSchedulerTick_0x1b3fc0");
#endif

    switch (ctx->pc) {
        case 0x1b3fdcu: goto label_1b3fdc;
        case 0x1b3ff0u: goto label_1b3ff0;
        case 0x1b3ff8u: goto label_1b3ff8;
        case 0x1b4014u: goto label_1b4014;
        case 0x1b4038u: goto label_1b4038;
        default: break;
    }

    ctx->pc = 0x1b3fc0u;

    // 0x1b3fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3fc4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3fcc: 0x2450309c  addiu       $s0, $v0, 0x309C
    ctx->pc = 0x1b3fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12444));
    // 0x1b3fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3fd4: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3FD4u;
    SET_GPR_U32(ctx, 31, 0x1B3FDCu);
    ctx->pc = 0x1B3FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FD4u;
            // 0x1b3fd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FDCu; }
        if (ctx->pc != 0x1B3FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FDCu; }
        if (ctx->pc != 0x1B3FDCu) { return; }
    }
    ctx->pc = 0x1B3FDCu;
label_1b3fdc:
    // 0x1b3fdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3fe0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B3FF0u;
            goto label_1b3ff0;
        }
    }
    ctx->pc = 0x1B3FE8u;
    // 0x1b3fe8: 0xc06cc4c  jal         func_1B3130
    ctx->pc = 0x1B3FE8u;
    SET_GPR_U32(ctx, 31, 0x1B3FF0u);
    ctx->pc = 0x1B3FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FE8u;
            // 0x1b3fec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3130u;
    if (runtime->hasFunction(0x1B3130u)) {
        auto targetFn = runtime->lookupFunction(0x1B3130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FF0u; }
        if (ctx->pc != 0x1B3FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadWakeIfSleeping_0x1b3130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FF0u; }
        if (ctx->pc != 0x1B3FF0u) { return; }
    }
    ctx->pc = 0x1B3FF0u;
label_1b3ff0:
    // 0x1b3ff0: 0xc06cd8e  jal         func_1B3638
    ctx->pc = 0x1B3FF0u;
    SET_GPR_U32(ctx, 31, 0x1B3FF8u);
    ctx->pc = 0x1B3638u;
    if (runtime->hasFunction(0x1B3638u)) {
        auto targetFn = runtime->lookupFunction(0x1B3638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FF8u; }
        if (ctx->pc != 0x1B3FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiGetSchedulerModeFlag_0x1b3638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FF8u; }
        if (ctx->pc != 0x1B3FF8u) { return; }
    }
    ctx->pc = 0x1B3FF8u;
label_1b3ff8:
    // 0x1b3ff8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3ffc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4000: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4000u;
    {
        const bool branch_taken_0x1b4000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B4004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4000u;
            // 0x1b4004: 0x247030a0  addiu       $s0, $v1, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4000) {
            ctx->pc = 0x1B4038u;
            goto label_1b4038;
        }
    }
    ctx->pc = 0x1B4008u;
    // 0x1b4008: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b400c: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B400Cu;
    SET_GPR_U32(ctx, 31, 0x1B4014u);
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4014u; }
        if (ctx->pc != 0x1B4014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4014u; }
        if (ctx->pc != 0x1B4014u) { return; }
    }
    ctx->pc = 0x1B4014u;
label_1b4014:
    // 0x1b4014: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4018: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4018u;
    {
        const bool branch_taken_0x1b4018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b4018) {
            ctx->pc = 0x1B401Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4018u;
            // 0x1b401c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B403Cu;
            goto label_1b403c;
        }
    }
    ctx->pc = 0x1B4020u;
    // 0x1b4020: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b402c: 0x806cc4c  j           func_1B3130
    ctx->pc = 0x1B402Cu;
    ctx->pc = 0x1B4030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B402Cu;
            // 0x1b4030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3130u;
    if (runtime->hasFunction(0x1B3130u)) {
        auto targetFn = runtime->lookupFunction(0x1B3130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiThreadWakeIfSleeping_0x1b3130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4034u;
    // 0x1b4034: 0x0  nop
    ctx->pc = 0x1b4034u;
    // NOP
label_1b4038:
    // 0x1b4038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b403c:
    // 0x1b403c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4040: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4040u;
            // 0x1b4044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4048u;
    ctx->pc = 0x1b4048u;
}
