#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF808
// Address: 0x2bf808 - 0x2bf848
void sub_002BF808_0x2bf808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF808_0x2bf808");
#endif

    switch (ctx->pc) {
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf830u: goto label_2bf830;
        case 0x2bf834u: goto label_2bf834;
        case 0x2bf838u: goto label_2bf838;
        case 0x2bf83cu: goto label_2bf83c;
        case 0x2bf840u: goto label_2bf840;
        case 0x2bf844u: goto label_2bf844;
        default: break;
    }

    ctx->pc = 0x2bf808u;

label_2bf808:
    // 0x2bf808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bf80c:
    // 0x2bf80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf810:
    // 0x2bf810: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2bf814:
    // 0x2bf814: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2bf818:
    if (ctx->pc == 0x2BF818u) {
        ctx->pc = 0x2BF818u;
            // 0x2bf818: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x2BF81Cu;
        goto label_2bf81c;
    }
    ctx->pc = 0x2BF814u;
    {
        const bool branch_taken_0x2bf814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf814) {
            ctx->pc = 0x2BF818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF814u;
            // 0x2bf818: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF824u;
            goto label_2bf824;
        }
    }
    ctx->pc = 0x2BF81Cu;
label_2bf81c:
    // 0x2bf81c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bf820:
    if (ctx->pc == 0x2BF820u) {
        ctx->pc = 0x2BF820u;
            // 0x2bf820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF824u;
        goto label_2bf824;
    }
    ctx->pc = 0x2BF81Cu;
    {
        const bool branch_taken_0x2bf81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF81Cu;
            // 0x2bf820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf81c) {
            ctx->pc = 0x2BF83Cu;
            goto label_2bf83c;
        }
    }
    ctx->pc = 0x2BF824u;
label_2bf824:
    // 0x2bf824: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2bf828:
    if (ctx->pc == 0x2BF828u) {
        ctx->pc = 0x2BF828u;
            // 0x2bf828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF82Cu;
        goto label_2bf82c;
    }
    ctx->pc = 0x2BF824u;
    {
        const bool branch_taken_0x2bf824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf824) {
            ctx->pc = 0x2BF828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF824u;
            // 0x2bf828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF83Cu;
            goto label_2bf83c;
        }
    }
    ctx->pc = 0x2BF82Cu;
label_2bf82c:
    // 0x2bf82c: 0x40f809  jalr        $v0
label_2bf830:
    if (ctx->pc == 0x2BF830u) {
        ctx->pc = 0x2BF834u;
        goto label_2bf834;
    }
    ctx->pc = 0x2BF82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF834u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF834u; }
            if (ctx->pc != 0x2BF834u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF834u;
label_2bf834:
    // 0x2bf834: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bf838:
    if (ctx->pc == 0x2BF838u) {
        ctx->pc = 0x2BF838u;
            // 0x2bf838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2BF83Cu;
        goto label_2bf83c;
    }
    ctx->pc = 0x2BF834u;
    {
        const bool branch_taken_0x2bf834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF834u;
            // 0x2bf838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf834) {
            ctx->pc = 0x2BF840u;
            goto label_2bf840;
        }
    }
    ctx->pc = 0x2BF83Cu;
label_2bf83c:
    // 0x2bf83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf840:
    // 0x2bf840: 0x3e00008  jr          $ra
label_2bf844:
    if (ctx->pc == 0x2BF844u) {
        ctx->pc = 0x2BF844u;
            // 0x2bf844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2BF848u;
        goto label_fallthrough_0x2bf840;
    }
    ctx->pc = 0x2BF840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF840u;
            // 0x2bf844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bf840:
    ctx->pc = 0x2BF848u;
    ctx->pc = 0x2bf848u;
}
