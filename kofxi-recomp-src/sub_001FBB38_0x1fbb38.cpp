#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBB38
// Address: 0x1fbb38 - 0x1fbbb8
void sub_001FBB38_0x1fbb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBB38_0x1fbb38");
#endif

    switch (ctx->pc) {
        case 0x1fbb54u: goto label_1fbb54;
        case 0x1fbb68u: goto label_1fbb68;
        case 0x1fbb88u: goto label_1fbb88;
        default: break;
    }

    ctx->pc = 0x1fbb38u;

    // 0x1fbb38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbb3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fbb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fbb40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fbb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fbb44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fbb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fbb48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fbb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fbb4c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FBB4Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB54u);
    ctx->pc = 0x1FBB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB4Cu;
            // 0x1fbb50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB54u; }
        if (ctx->pc != 0x1FBB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB54u; }
        if (ctx->pc != 0x1FBB54u) { return; }
    }
    ctx->pc = 0x1FBB54u;
label_1fbb54:
    // 0x1fbb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FBB58u;
    {
        const bool branch_taken_0x1fbb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB58u;
            // 0x1fbb5c: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb58) {
            ctx->pc = 0x1FBBA4u;
            goto label_1fbba4;
        }
    }
    ctx->pc = 0x1FBB60u;
    // 0x1fbb60: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FBB60u;
    SET_GPR_U32(ctx, 31, 0x1FBB68u);
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB68u; }
        if (ctx->pc != 0x1FBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB68u; }
        if (ctx->pc != 0x1FBB68u) { return; }
    }
    ctx->pc = 0x1FBB68u;
label_1fbb68:
    // 0x1fbb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fbb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb70: 0x24850d88  addiu       $a1, $a0, 0xD88
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1fbb74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fbb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb78: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBB78u;
    {
        const bool branch_taken_0x1fbb78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB78u;
            // 0x1fbb7c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb78) {
            ctx->pc = 0x1FBBA4u;
            goto label_1fbba4;
        }
    }
    ctx->pc = 0x1FBB80u;
    // 0x1fbb80: 0xc07ee9c  jal         func_1FBA70
    ctx->pc = 0x1FBB80u;
    SET_GPR_U32(ctx, 31, 0x1FBB88u);
    ctx->pc = 0x1FBA70u;
    if (runtime->hasFunction(0x1FBA70u)) {
        auto targetFn = runtime->lookupFunction(0x1FBA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB88u; }
        if (ctx->pc != 0x1FBB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBA70_0x1fba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB88u; }
        if (ctx->pc != 0x1FBB88u) { return; }
    }
    ctx->pc = 0x1FBB88u;
label_1fbb88:
    // 0x1fbb88: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fbb8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbb90: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FBB90u;
    {
        const bool branch_taken_0x1fbb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb90) {
            ctx->pc = 0x1FBB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB90u;
            // 0x1fbb94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB98u;
            goto label_1fbb98;
        }
    }
    ctx->pc = 0x1FBB98u;
label_1fbb98:
    // 0x1fbb98: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1fbb98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fbb9c: 0x1012  mflo        $v0
    ctx->pc = 0x1fbb9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fbba0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1fbba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fbba4:
    // 0x1fbba4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fbba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbba8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fbba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fbbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBBB0u;
            // 0x1fbbb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBBB8u;
    ctx->pc = 0x1fbbb8u;
}
