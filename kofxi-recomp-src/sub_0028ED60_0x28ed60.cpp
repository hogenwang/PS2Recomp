#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028ED60
// Address: 0x28ed60 - 0x28eda8
void sub_0028ED60_0x28ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ED60_0x28ed60");
#endif

    switch (ctx->pc) {
        case 0x28ed60u: goto label_28ed60;
        case 0x28ed64u: goto label_28ed64;
        case 0x28ed68u: goto label_28ed68;
        case 0x28ed6cu: goto label_28ed6c;
        case 0x28ed70u: goto label_28ed70;
        case 0x28ed74u: goto label_28ed74;
        case 0x28ed78u: goto label_28ed78;
        case 0x28ed7cu: goto label_28ed7c;
        case 0x28ed80u: goto label_28ed80;
        case 0x28ed84u: goto label_28ed84;
        case 0x28ed88u: goto label_28ed88;
        case 0x28ed8cu: goto label_28ed8c;
        case 0x28ed90u: goto label_28ed90;
        case 0x28ed94u: goto label_28ed94;
        case 0x28ed98u: goto label_28ed98;
        case 0x28ed9cu: goto label_28ed9c;
        case 0x28eda0u: goto label_28eda0;
        case 0x28eda4u: goto label_28eda4;
        default: break;
    }

    ctx->pc = 0x28ed60u;

label_28ed60:
    // 0x28ed60: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ed64:
    // 0x28ed64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ed64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ed68:
    // 0x28ed68: 0x8c42462c  lw          $v0, 0x462C($v0)
    ctx->pc = 0x28ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17964)));
label_28ed6c:
    // 0x28ed6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ed70:
    if (ctx->pc == 0x28ED70u) {
        ctx->pc = 0x28ED70u;
            // 0x28ed70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28ED74u;
        goto label_28ed74;
    }
    ctx->pc = 0x28ED6Cu;
    {
        const bool branch_taken_0x28ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED6Cu;
            // 0x28ed70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed6c) {
            ctx->pc = 0x28ED94u;
            goto label_28ed94;
        }
    }
    ctx->pc = 0x28ED74u;
label_28ed74:
    // 0x28ed74: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ed78:
    // 0x28ed78: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x28ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_28ed7c:
    // 0x28ed7c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ed7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ed80:
    // 0x28ed80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ed80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed84:
    // 0x28ed84: 0xc0a5648  jal         func_295920
label_28ed88:
    if (ctx->pc == 0x28ED88u) {
        ctx->pc = 0x28ED88u;
            // 0x28ed88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ED8Cu;
        goto label_28ed8c;
    }
    ctx->pc = 0x28ED84u;
    SET_GPR_U32(ctx, 31, 0x28ED8Cu);
    ctx->pc = 0x28ED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED84u;
            // 0x28ed88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED8Cu; }
        if (ctx->pc != 0x28ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED8Cu; }
        if (ctx->pc != 0x28ED8Cu) { return; }
    }
    ctx->pc = 0x28ED8Cu;
label_28ed8c:
    // 0x28ed8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ed90:
    if (ctx->pc == 0x28ED90u) {
        ctx->pc = 0x28ED90u;
            // 0x28ed90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ED94u;
        goto label_28ed94;
    }
    ctx->pc = 0x28ED8Cu;
    {
        const bool branch_taken_0x28ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED8Cu;
            // 0x28ed90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed8c) {
            ctx->pc = 0x28ED9Cu;
            goto label_28ed9c;
        }
    }
    ctx->pc = 0x28ED94u;
label_28ed94:
    // 0x28ed94: 0x40f809  jalr        $v0
label_28ed98:
    if (ctx->pc == 0x28ED98u) {
        ctx->pc = 0x28ED9Cu;
        goto label_28ed9c;
    }
    ctx->pc = 0x28ED94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28ED9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ED9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ED9Cu; }
            if (ctx->pc != 0x28ED9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28ED9Cu;
label_28ed9c:
    // 0x28ed9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eda0:
    // 0x28eda0: 0x3e00008  jr          $ra
label_28eda4:
    if (ctx->pc == 0x28EDA4u) {
        ctx->pc = 0x28EDA4u;
            // 0x28eda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EDA8u;
        goto label_fallthrough_0x28eda0;
    }
    ctx->pc = 0x28EDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDA0u;
            // 0x28eda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28eda0:
    ctx->pc = 0x28EDA8u;
    ctx->pc = 0x28eda8u;
}
