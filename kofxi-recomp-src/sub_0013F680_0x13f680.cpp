#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F680
// Address: 0x13f680 - 0x13f6e0
void sub_0013F680_0x13f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F680_0x13f680");
#endif

    switch (ctx->pc) {
        case 0x13f694u: goto label_13f694;
        case 0x13f69cu: goto label_13f69c;
        case 0x13f6a8u: goto label_13f6a8;
        default: break;
    }

    ctx->pc = 0x13f680u;

    // 0x13f680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f68c: 0xc04f85c  jal         func_13E170
    ctx->pc = 0x13F68Cu;
    SET_GPR_U32(ctx, 31, 0x13F694u);
    ctx->pc = 0x13F690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F68Cu;
            // 0x13f690: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E170u;
    if (runtime->hasFunction(0x13E170u)) {
        auto targetFn = runtime->lookupFunction(0x13E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F694u; }
        if (ctx->pc != 0x13F694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E170_0x13e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F694u; }
        if (ctx->pc != 0x13F694u) { return; }
    }
    ctx->pc = 0x13F694u;
label_13f694:
    // 0x13f694: 0xc04f868  jal         func_13E1A0
    ctx->pc = 0x13F694u;
    SET_GPR_U32(ctx, 31, 0x13F69Cu);
    ctx->pc = 0x13F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F694u;
            // 0x13f698: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1A0u;
    if (runtime->hasFunction(0x13E1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F69Cu; }
        if (ctx->pc != 0x13F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E1A0_0x13e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F69Cu; }
        if (ctx->pc != 0x13F69Cu) { return; }
    }
    ctx->pc = 0x13F69Cu;
label_13f69c:
    // 0x13f69c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6a0: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13F6A0u;
    SET_GPR_U32(ctx, 31, 0x13F6A8u);
    ctx->pc = 0x13F6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6A0u;
            // 0x13f6a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6A8u; }
        if (ctx->pc != 0x13F6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6A8u; }
        if (ctx->pc != 0x13F6A8u) { return; }
    }
    ctx->pc = 0x13F6A8u;
label_13f6a8:
    // 0x13f6a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F6A8u;
    {
        const bool branch_taken_0x13f6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f6a8) {
            ctx->pc = 0x13F6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6A8u;
            // 0x13f6ac: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F6B8u;
            goto label_13f6b8;
        }
    }
    ctx->pc = 0x13F6B0u;
    // 0x13f6b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F6B0u;
    {
        const bool branch_taken_0x13f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6B0u;
            // 0x13f6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6b0) {
            ctx->pc = 0x13F6C4u;
            goto label_13f6c4;
        }
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13f6bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f6c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13f6c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_13f6c4:
    // 0x13f6c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6D0u;
            // 0x13f6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F6D8u;
    // 0x13f6d8: 0x0  nop
    ctx->pc = 0x13f6d8u;
    // NOP
    // 0x13f6dc: 0x0  nop
    ctx->pc = 0x13f6dcu;
    // NOP
    ctx->pc = 0x13f6e0u;
}
