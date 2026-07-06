#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE828
// Address: 0x1ae828 - 0x1ae8a0
void sub_001AE828_0x1ae828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE828_0x1ae828");
#endif

    switch (ctx->pc) {
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae82cu: goto label_1ae82c;
        case 0x1ae830u: goto label_1ae830;
        case 0x1ae834u: goto label_1ae834;
        case 0x1ae838u: goto label_1ae838;
        case 0x1ae83cu: goto label_1ae83c;
        case 0x1ae840u: goto label_1ae840;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae848u: goto label_1ae848;
        case 0x1ae84cu: goto label_1ae84c;
        case 0x1ae850u: goto label_1ae850;
        case 0x1ae854u: goto label_1ae854;
        case 0x1ae858u: goto label_1ae858;
        case 0x1ae85cu: goto label_1ae85c;
        case 0x1ae860u: goto label_1ae860;
        case 0x1ae864u: goto label_1ae864;
        case 0x1ae868u: goto label_1ae868;
        case 0x1ae86cu: goto label_1ae86c;
        case 0x1ae870u: goto label_1ae870;
        case 0x1ae874u: goto label_1ae874;
        case 0x1ae878u: goto label_1ae878;
        case 0x1ae87cu: goto label_1ae87c;
        case 0x1ae880u: goto label_1ae880;
        case 0x1ae884u: goto label_1ae884;
        case 0x1ae888u: goto label_1ae888;
        case 0x1ae88cu: goto label_1ae88c;
        case 0x1ae890u: goto label_1ae890;
        case 0x1ae894u: goto label_1ae894;
        case 0x1ae898u: goto label_1ae898;
        case 0x1ae89cu: goto label_1ae89c;
        default: break;
    }

    ctx->pc = 0x1ae828u;

label_1ae828:
    // 0x1ae828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae82c:
    // 0x1ae82c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ae82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae830:
    // 0x1ae830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae834:
    // 0x1ae834: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1ae838:
    if (ctx->pc == 0x1AE838u) {
        ctx->pc = 0x1AE838u;
            // 0x1ae838: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1AE83Cu;
        goto label_1ae83c;
    }
    ctx->pc = 0x1AE834u;
    {
        const bool branch_taken_0x1ae834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE834u;
            // 0x1ae838: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae834) {
            ctx->pc = 0x1AE858u;
            goto label_1ae858;
        }
    }
    ctx->pc = 0x1AE83Cu;
label_1ae83c:
    // 0x1ae83c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1ae83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1ae840:
    // 0x1ae840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae844:
    // 0x1ae844: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ae844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ae848:
    // 0x1ae848: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
label_1ae84c:
    // 0x1ae84c: 0x807371e  j           func_1CDC78
label_1ae850:
    if (ctx->pc == 0x1AE850u) {
        ctx->pc = 0x1AE850u;
            // 0x1ae850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1AE854u;
        goto label_1ae854;
    }
    ctx->pc = 0x1AE84Cu;
    ctx->pc = 0x1AE850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE84Cu;
            // 0x1ae850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC78u;
    if (runtime->hasFunction(0x1CDC78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDC78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDC78_0x1cdc78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AE854u;
label_1ae854:
    // 0x1ae854: 0x0  nop
    ctx->pc = 0x1ae854u;
    // NOP
label_1ae858:
    // 0x1ae858: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae85c:
    // 0x1ae85c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1ae85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ae860:
    // 0x1ae860: 0x2450f710  addiu       $s0, $v0, -0x8F0
    ctx->pc = 0x1ae860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965008));
label_1ae864:
    // 0x1ae864: 0xc04a966  jal         func_12A598
label_1ae868:
    if (ctx->pc == 0x1AE868u) {
        ctx->pc = 0x1AE868u;
            // 0x1ae868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE86Cu;
        goto label_1ae86c;
    }
    ctx->pc = 0x1AE864u;
    SET_GPR_U32(ctx, 31, 0x1AE86Cu);
    ctx->pc = 0x1AE868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE864u;
            // 0x1ae868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE86Cu; }
        if (ctx->pc != 0x1AE86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE86Cu; }
        if (ctx->pc != 0x1AE86Cu) { return; }
    }
    ctx->pc = 0x1AE86Cu;
label_1ae86c:
    // 0x1ae86c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ae86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1ae870:
    // 0x1ae870: 0x8c63f708  lw          $v1, -0x8F8($v1)
    ctx->pc = 0x1ae870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965000)));
label_1ae874:
    // 0x1ae874: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae878:
    if (ctx->pc == 0x1AE878u) {
        ctx->pc = 0x1AE878u;
            // 0x1ae878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE87Cu;
        goto label_1ae87c;
    }
    ctx->pc = 0x1AE874u;
    {
        const bool branch_taken_0x1ae874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE874u;
            // 0x1ae878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae874) {
            ctx->pc = 0x1AE888u;
            goto label_1ae888;
        }
    }
    ctx->pc = 0x1AE87Cu;
label_1ae87c:
    // 0x1ae87c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae880:
    // 0x1ae880: 0x60f809  jalr        $v1
label_1ae884:
    if (ctx->pc == 0x1AE884u) {
        ctx->pc = 0x1AE884u;
            // 0x1ae884: 0x8c44f70c  lw          $a0, -0x8F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965004)));
        ctx->pc = 0x1AE888u;
        goto label_1ae888;
    }
    ctx->pc = 0x1AE880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AE888u);
        ctx->pc = 0x1AE884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE880u;
            // 0x1ae884: 0x8c44f70c  lw          $a0, -0x8F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965004)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE888u; }
            if (ctx->pc != 0x1AE888u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE888u;
label_1ae888:
    // 0x1ae888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae88c:
    // 0x1ae88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae890:
    // 0x1ae890: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ae890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ae894:
    // 0x1ae894: 0x807371e  j           func_1CDC78
label_1ae898:
    if (ctx->pc == 0x1AE898u) {
        ctx->pc = 0x1AE898u;
            // 0x1ae898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1AE89Cu;
        goto label_1ae89c;
    }
    ctx->pc = 0x1AE894u;
    ctx->pc = 0x1AE898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE894u;
            // 0x1ae898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC78u;
    if (runtime->hasFunction(0x1CDC78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDC78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDC78_0x1cdc78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AE89Cu;
label_1ae89c:
    // 0x1ae89c: 0x0  nop
    ctx->pc = 0x1ae89cu;
    // NOP
    ctx->pc = 0x1ae8a0u;
}
