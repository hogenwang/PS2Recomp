#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003417F0
// Address: 0x3417f0 - 0x341860
void sub_003417F0_0x3417f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003417F0_0x3417f0");
#endif

    switch (ctx->pc) {
        case 0x341804u: goto label_341804;
        case 0x341848u: goto label_341848;
        default: break;
    }

    ctx->pc = 0x3417f0u;

    // 0x3417f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3417f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3417f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3417f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3417f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3417f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3417fc: 0xc0d05c8  jal         func_341720
    ctx->pc = 0x3417FCu;
    SET_GPR_U32(ctx, 31, 0x341804u);
    ctx->pc = 0x341800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3417FCu;
            // 0x341800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341720u;
    if (runtime->hasFunction(0x341720u)) {
        auto targetFn = runtime->lookupFunction(0x341720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341804u; }
        if (ctx->pc != 0x341804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341720_0x341720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341804u; }
        if (ctx->pc != 0x341804u) { return; }
    }
    ctx->pc = 0x341804u;
label_341804:
    // 0x341804: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341808: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34180c: 0x8c67ea58  lw          $a3, -0x15A8($v1)
    ctx->pc = 0x34180cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961752)));
    // 0x341810: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341814: 0xac50ea90  sw          $s0, -0x1570($v0)
    ctx->pc = 0x341814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961808), GPR_U32(ctx, 16));
    // 0x341818: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34181c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341820: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x341820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x341824: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341828: 0xaca6eaa0  sw          $a2, -0x1560($a1)
    ctx->pc = 0x341828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961824), GPR_U32(ctx, 6));
    // 0x34182c: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x34182cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x341830: 0xac85eaa4  sw          $a1, -0x155C($a0)
    ctx->pc = 0x341830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961828), GPR_U32(ctx, 5));
    // 0x341834: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x341834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x341838: 0xac64eaa8  sw          $a0, -0x1558($v1)
    ctx->pc = 0x341838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961832), GPR_U32(ctx, 4));
    // 0x34183c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x34183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x341840: 0xc0d042c  jal         func_3410B0
    ctx->pc = 0x341840u;
    SET_GPR_U32(ctx, 31, 0x341848u);
    ctx->pc = 0x341844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341840u;
            // 0x341844: 0xac43eaac  sw          $v1, -0x1554($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3410B0u;
    if (runtime->hasFunction(0x3410B0u)) {
        auto targetFn = runtime->lookupFunction(0x3410B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341848u; }
        if (ctx->pc != 0x341848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003410B0_0x3410b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341848u; }
        if (ctx->pc != 0x341848u) { return; }
    }
    ctx->pc = 0x341848u;
label_341848:
    // 0x341848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34184c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341850: 0x3e00008  jr          $ra
    ctx->pc = 0x341850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341850u;
            // 0x341854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341858u;
    // 0x341858: 0x0  nop
    ctx->pc = 0x341858u;
    // NOP
    // 0x34185c: 0x0  nop
    ctx->pc = 0x34185cu;
    // NOP
    ctx->pc = 0x341860u;
}
