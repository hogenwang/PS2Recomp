#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF530
// Address: 0x2cf530 - 0x2cf568
void sub_002CF530_0x2cf530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF530_0x2cf530");
#endif

    switch (ctx->pc) {
        case 0x2cf530u: goto label_2cf530;
        case 0x2cf534u: goto label_2cf534;
        case 0x2cf538u: goto label_2cf538;
        case 0x2cf53cu: goto label_2cf53c;
        case 0x2cf540u: goto label_2cf540;
        case 0x2cf544u: goto label_2cf544;
        case 0x2cf548u: goto label_2cf548;
        case 0x2cf54cu: goto label_2cf54c;
        case 0x2cf550u: goto label_2cf550;
        case 0x2cf554u: goto label_2cf554;
        case 0x2cf558u: goto label_2cf558;
        case 0x2cf55cu: goto label_2cf55c;
        case 0x2cf560u: goto label_2cf560;
        case 0x2cf564u: goto label_2cf564;
        default: break;
    }

    ctx->pc = 0x2cf530u;

label_2cf530:
    // 0x2cf530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cf534:
    // 0x2cf534: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cf534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf538:
    // 0x2cf538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cf53c:
    // 0x2cf53c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cf540:
    if (ctx->pc == 0x2CF540u) {
        ctx->pc = 0x2CF540u;
            // 0x2cf540: 0x24020212  addiu       $v0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->pc = 0x2CF544u;
        goto label_2cf544;
    }
    ctx->pc = 0x2CF53Cu;
    {
        const bool branch_taken_0x2cf53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF53Cu;
            // 0x2cf540: 0x24020212  addiu       $v0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf53c) {
            ctx->pc = 0x2CF55Cu;
            goto label_2cf55c;
        }
    }
    ctx->pc = 0x2CF544u;
label_2cf544:
    // 0x2cf544: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2cf544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2cf548:
    // 0x2cf548: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2cf54c:
    if (ctx->pc == 0x2CF54Cu) {
        ctx->pc = 0x2CF54Cu;
            // 0x2cf54c: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->pc = 0x2CF550u;
        goto label_2cf550;
    }
    ctx->pc = 0x2CF548u;
    {
        const bool branch_taken_0x2cf548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF548u;
            // 0x2cf54c: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf548) {
            ctx->pc = 0x2CF55Cu;
            goto label_2cf55c;
        }
    }
    ctx->pc = 0x2CF550u;
label_2cf550:
    // 0x2cf550: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cf550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cf554:
    // 0x2cf554: 0x40f809  jalr        $v0
label_2cf558:
    if (ctx->pc == 0x2CF558u) {
        ctx->pc = 0x2CF558u;
            // 0x2cf558: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF55Cu;
        goto label_2cf55c;
    }
    ctx->pc = 0x2CF554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF55Cu);
        ctx->pc = 0x2CF558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF554u;
            // 0x2cf558: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF55Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF55Cu; }
            if (ctx->pc != 0x2CF55Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CF55Cu;
label_2cf55c:
    // 0x2cf55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf560:
    // 0x2cf560: 0x3e00008  jr          $ra
label_2cf564:
    if (ctx->pc == 0x2CF564u) {
        ctx->pc = 0x2CF564u;
            // 0x2cf564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CF568u;
        goto label_fallthrough_0x2cf560;
    }
    ctx->pc = 0x2CF560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF560u;
            // 0x2cf564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cf560:
    ctx->pc = 0x2CF568u;
    ctx->pc = 0x2cf568u;
}
