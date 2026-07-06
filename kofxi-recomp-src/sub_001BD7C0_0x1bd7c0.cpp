#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD7C0
// Address: 0x1bd7c0 - 0x1bd858
void sub_001BD7C0_0x1bd7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD7C0_0x1bd7c0");
#endif

    switch (ctx->pc) {
        case 0x1bd7e4u: goto label_1bd7e4;
        case 0x1bd820u: goto label_1bd820;
        case 0x1bd834u: goto label_1bd834;
        case 0x1bd848u: goto label_1bd848;
        default: break;
    }

    ctx->pc = 0x1bd7c0u;

    // 0x1bd7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd7c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd7c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd7d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bd7d4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BD7D4u;
    {
        const bool branch_taken_0x1bd7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7d4) {
            ctx->pc = 0x1BD7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7D4u;
            // 0x1bd7d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD7DCu;
    // 0x1bd7dc: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1BD7DCu;
    SET_GPR_U32(ctx, 31, 0x1BD7E4u);
    ctx->pc = 0x1B9370u;
    if (runtime->hasFunction(0x1B9370u)) {
        auto targetFn = runtime->lookupFunction(0x1B9370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7E4u; }
        if (ctx->pc != 0x1BD7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9370_0x1b9370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7E4u; }
        if (ctx->pc != 0x1BD7E4u) { return; }
    }
    ctx->pc = 0x1BD7E4u;
label_1bd7e4:
    // 0x1bd7e4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD7E4u;
    {
        const bool branch_taken_0x1bd7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7e4) {
            ctx->pc = 0x1BD7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7E4u;
            // 0x1bd7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD7ECu;
    // 0x1bd7ec: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1bd7f0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1bd7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bd7f4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD7F4u;
    {
        const bool branch_taken_0x1bd7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7f4) {
            ctx->pc = 0x1BD7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7F4u;
            // 0x1bd7f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD7FCu;
    // 0x1bd7fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd800: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1bd800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1bd804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd808: 0x8c638970  lw          $v1, -0x7690($v1)
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936944)));
    // 0x1bd80c: 0x600008  jr          $v1
    ctx->pc = 0x1BD80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD840u: goto label_1bd840;
            case 0x1BD848u: goto label_1bd848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD814u;
    // 0x1bd814: 0x0  nop
    ctx->pc = 0x1bd814u;
    // NOP
label_1bd818:
    // 0x1bd818: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1BD818u;
    SET_GPR_U32(ctx, 31, 0x1BD820u);
    ctx->pc = 0x1BD81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD818u;
            // 0x1bd81c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD820u; }
        if (ctx->pc != 0x1BD820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD820u; }
        if (ctx->pc != 0x1BD820u) { return; }
    }
    ctx->pc = 0x1BD820u;
label_1bd820:
    // 0x1bd820: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd824: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD824u;
    {
        const bool branch_taken_0x1bd824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd824) {
            ctx->pc = 0x1BD828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD824u;
            // 0x1bd828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD82Cu;
    // 0x1bd82c: 0xc06d46c  jal         func_1B51B0
    ctx->pc = 0x1BD82Cu;
    SET_GPR_U32(ctx, 31, 0x1BD834u);
    ctx->pc = 0x1BD830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD82Cu;
            // 0x1bd830: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B51B0u;
    if (runtime->hasFunction(0x1B51B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B51B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD834u; }
        if (ctx->pc != 0x1BD834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B51B0_0x1b51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD834u; }
        if (ctx->pc != 0x1BD834u) { return; }
    }
    ctx->pc = 0x1BD834u;
label_1bd834:
    // 0x1bd834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD834u;
    {
        const bool branch_taken_0x1bd834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD834u;
            // 0x1bd838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd834) {
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD83Cu;
    // 0x1bd83c: 0x0  nop
    ctx->pc = 0x1bd83cu;
    // NOP
label_1bd840:
    // 0x1bd840: 0xc06d46c  jal         func_1B51B0
    ctx->pc = 0x1BD840u;
    SET_GPR_U32(ctx, 31, 0x1BD848u);
    ctx->pc = 0x1BD844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD840u;
            // 0x1bd844: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B51B0u;
    if (runtime->hasFunction(0x1B51B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B51B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD848u; }
        if (ctx->pc != 0x1BD848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B51B0_0x1b51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD848u; }
        if (ctx->pc != 0x1BD848u) { return; }
    }
    ctx->pc = 0x1BD848u;
label_1bd848:
    // 0x1bd848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd84c:
    // 0x1bd84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd850: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD850u;
            // 0x1bd854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD858u;
    ctx->pc = 0x1bd858u;
}
