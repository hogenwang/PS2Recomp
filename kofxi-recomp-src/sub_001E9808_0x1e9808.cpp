#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9808
// Address: 0x1e9808 - 0x1e9890
void sub_001E9808_0x1e9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9808_0x1e9808");
#endif

    switch (ctx->pc) {
        case 0x1e9850u: goto label_1e9850;
        case 0x1e9870u: goto label_1e9870;
        default: break;
    }

    ctx->pc = 0x1e9808u;

    // 0x1e9808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e980c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9814: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e9814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9818: 0x8c83205c  lw          $v1, 0x205C($a0)
    ctx->pc = 0x1e9818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e981c: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x1e981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x1e9820: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e9820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9824: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9824u;
    {
        const bool branch_taken_0x1e9824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9824u;
            // 0x1e9828: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9824) {
            ctx->pc = 0x1E983Cu;
            goto label_1e983c;
        }
    }
    ctx->pc = 0x1E982Cu;
    // 0x1e982c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x1e982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1e9830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9834: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9834u;
    {
        const bool branch_taken_0x1e9834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9834u;
            // 0x1e9838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9834) {
            ctx->pc = 0x1E9848u;
            goto label_1e9848;
        }
    }
    ctx->pc = 0x1E983Cu;
label_1e983c:
    // 0x1e983c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9840: 0x807a614  j           func_1E9850
    ctx->pc = 0x1E9840u;
    ctx->pc = 0x1E9844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9840u;
            // 0x1e9844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9850u;
    goto label_1e9850;
    ctx->pc = 0x1E9848u;
label_1e9848:
    // 0x1e9848: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9848u;
            // 0x1e984c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9850u;
label_1e9850:
    // 0x1e9850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9858: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e9858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e985c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9860: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e9860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9868: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x1E9868u;
    SET_GPR_U32(ctx, 31, 0x1E9870u);
    ctx->pc = 0x1E986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9868u;
            // 0x1e986c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9870u; }
        if (ctx->pc != 0x1E9870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9870u; }
        if (ctx->pc != 0x1E9870u) { return; }
    }
    ctx->pc = 0x1E9870u;
label_1e9870:
    // 0x1e9870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e987c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e987cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9884: 0x807f6fc  j           func_1FDBF0
    ctx->pc = 0x1E9884u;
    ctx->pc = 0x1E9888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9884u;
            // 0x1e9888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1FDBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E988Cu;
    // 0x1e988c: 0x0  nop
    ctx->pc = 0x1e988cu;
    // NOP
    ctx->pc = 0x1e9890u;
}
