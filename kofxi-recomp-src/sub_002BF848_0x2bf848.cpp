#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF848
// Address: 0x2bf848 - 0x2bf888
void sub_002BF848_0x2bf848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF848_0x2bf848");
#endif

    switch (ctx->pc) {
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf84cu: goto label_2bf84c;
        case 0x2bf850u: goto label_2bf850;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf858u: goto label_2bf858;
        case 0x2bf85cu: goto label_2bf85c;
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf864u: goto label_2bf864;
        case 0x2bf868u: goto label_2bf868;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf870u: goto label_2bf870;
        case 0x2bf874u: goto label_2bf874;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf87cu: goto label_2bf87c;
        case 0x2bf880u: goto label_2bf880;
        case 0x2bf884u: goto label_2bf884;
        default: break;
    }

    ctx->pc = 0x2bf848u;

label_2bf848:
    // 0x2bf848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bf84c:
    // 0x2bf84c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf850:
    // 0x2bf850: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2bf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2bf854:
    // 0x2bf854: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2bf858:
    if (ctx->pc == 0x2BF858u) {
        ctx->pc = 0x2BF858u;
            // 0x2bf858: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x2BF85Cu;
        goto label_2bf85c;
    }
    ctx->pc = 0x2BF854u;
    {
        const bool branch_taken_0x2bf854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf854) {
            ctx->pc = 0x2BF858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF854u;
            // 0x2bf858: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF864u;
            goto label_2bf864;
        }
    }
    ctx->pc = 0x2BF85Cu;
label_2bf85c:
    // 0x2bf85c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bf860:
    if (ctx->pc == 0x2BF860u) {
        ctx->pc = 0x2BF860u;
            // 0x2bf860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BF864u;
        goto label_2bf864;
    }
    ctx->pc = 0x2BF85Cu;
    {
        const bool branch_taken_0x2bf85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF85Cu;
            // 0x2bf860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf85c) {
            ctx->pc = 0x2BF87Cu;
            goto label_2bf87c;
        }
    }
    ctx->pc = 0x2BF864u;
label_2bf864:
    // 0x2bf864: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2bf868:
    if (ctx->pc == 0x2BF868u) {
        ctx->pc = 0x2BF868u;
            // 0x2bf868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF86Cu;
        goto label_2bf86c;
    }
    ctx->pc = 0x2BF864u;
    {
        const bool branch_taken_0x2bf864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf864) {
            ctx->pc = 0x2BF868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF864u;
            // 0x2bf868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF87Cu;
            goto label_2bf87c;
        }
    }
    ctx->pc = 0x2BF86Cu;
label_2bf86c:
    // 0x2bf86c: 0x40f809  jalr        $v0
label_2bf870:
    if (ctx->pc == 0x2BF870u) {
        ctx->pc = 0x2BF874u;
        goto label_2bf874;
    }
    ctx->pc = 0x2BF86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF874u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF874u; }
            if (ctx->pc != 0x2BF874u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF874u;
label_2bf874:
    // 0x2bf874: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bf878:
    if (ctx->pc == 0x2BF878u) {
        ctx->pc = 0x2BF878u;
            // 0x2bf878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2BF87Cu;
        goto label_2bf87c;
    }
    ctx->pc = 0x2BF874u;
    {
        const bool branch_taken_0x2bf874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF874u;
            // 0x2bf878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf874) {
            ctx->pc = 0x2BF880u;
            goto label_2bf880;
        }
    }
    ctx->pc = 0x2BF87Cu;
label_2bf87c:
    // 0x2bf87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf880:
    // 0x2bf880: 0x3e00008  jr          $ra
label_2bf884:
    if (ctx->pc == 0x2BF884u) {
        ctx->pc = 0x2BF884u;
            // 0x2bf884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2BF888u;
        goto label_fallthrough_0x2bf880;
    }
    ctx->pc = 0x2BF880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF880u;
            // 0x2bf884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bf880:
    ctx->pc = 0x2BF888u;
    ctx->pc = 0x2bf888u;
}
