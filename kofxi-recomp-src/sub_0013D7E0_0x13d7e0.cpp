#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D7E0
// Address: 0x13d7e0 - 0x13d860
void sub_0013D7E0_0x13d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D7E0_0x13d7e0");
#endif

    switch (ctx->pc) {
        case 0x13d7fcu: goto label_13d7fc;
        case 0x13d818u: goto label_13d818;
        case 0x13d828u: goto label_13d828;
        default: break;
    }

    ctx->pc = 0x13d7e0u;

    // 0x13d7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7f4: 0xc062804  jal         func_18A010
    ctx->pc = 0x13D7F4u;
    SET_GPR_U32(ctx, 31, 0x13D7FCu);
    ctx->pc = 0x13D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D7F4u;
            // 0x13d7f8: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D7FCu; }
        if (ctx->pc != 0x13D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D7FCu; }
        if (ctx->pc != 0x13D7FCu) { return; }
    }
    ctx->pc = 0x13D7FCu;
label_13d7fc:
    // 0x13d7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d800: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D800u;
    {
        const bool branch_taken_0x13d800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d800) {
            ctx->pc = 0x13D804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D800u;
            // 0x13d804: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D810u;
            goto label_13d810;
        }
    }
    ctx->pc = 0x13D808u;
    // 0x13d808: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13D808u;
    {
        const bool branch_taken_0x13d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D808u;
            // 0x13d80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d808) {
            ctx->pc = 0x13D844u;
            goto label_13d844;
        }
    }
    ctx->pc = 0x13D810u;
label_13d810:
    // 0x13d810: 0xc062884  jal         func_18A210
    ctx->pc = 0x13D810u;
    SET_GPR_U32(ctx, 31, 0x13D818u);
    ctx->pc = 0x18A210u;
    if (runtime->hasFunction(0x18A210u)) {
        auto targetFn = runtime->lookupFunction(0x18A210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D818u; }
        if (ctx->pc != 0x13D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A210_0x18a210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D818u; }
        if (ctx->pc != 0x13D818u) { return; }
    }
    ctx->pc = 0x13D818u;
label_13d818:
    // 0x13d818: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13d818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13d81c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x13d81cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d820: 0xc062884  jal         func_18A210
    ctx->pc = 0x13D820u;
    SET_GPR_U32(ctx, 31, 0x13D828u);
    ctx->pc = 0x13D824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D820u;
            // 0x13d824: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A210u;
    if (runtime->hasFunction(0x18A210u)) {
        auto targetFn = runtime->lookupFunction(0x18A210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D828u; }
        if (ctx->pc != 0x13D828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A210_0x18a210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D828u; }
        if (ctx->pc != 0x13D828u) { return; }
    }
    ctx->pc = 0x13D828u;
label_13d828:
    // 0x13d828: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d82c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d82cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d830: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x13d830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13d834: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D834u;
    {
        const bool branch_taken_0x13d834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d834) {
            ctx->pc = 0x13D838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D834u;
            // 0x13d838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D844u;
            goto label_13d844;
        }
    }
    ctx->pc = 0x13D83Cu;
    // 0x13d83c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13D83Cu;
    {
        const bool branch_taken_0x13d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D83Cu;
            // 0x13d840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d83c) {
            ctx->pc = 0x13D844u;
            goto label_13d844;
        }
    }
    ctx->pc = 0x13D844u;
label_13d844:
    // 0x13d844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d84c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d850: 0x3e00008  jr          $ra
    ctx->pc = 0x13D850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D850u;
            // 0x13d854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D858u;
    // 0x13d858: 0x0  nop
    ctx->pc = 0x13d858u;
    // NOP
    // 0x13d85c: 0x0  nop
    ctx->pc = 0x13d85cu;
    // NOP
    ctx->pc = 0x13d860u;
}
