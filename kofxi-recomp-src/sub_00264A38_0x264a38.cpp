#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264A38
// Address: 0x264a38 - 0x264aa0
void sub_00264A38_0x264a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264A38_0x264a38");
#endif

    switch (ctx->pc) {
        case 0x264a48u: goto label_264a48;
        case 0x264a58u: goto label_264a58;
        case 0x264a74u: goto label_264a74;
        default: break;
    }

    ctx->pc = 0x264a38u;

    // 0x264a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264a40: 0xc09956e  jal         func_2655B8
    ctx->pc = 0x264A40u;
    SET_GPR_U32(ctx, 31, 0x264A48u);
    ctx->pc = 0x2655B8u;
    if (runtime->hasFunction(0x2655B8u)) {
        auto targetFn = runtime->lookupFunction(0x2655B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A48u; }
        if (ctx->pc != 0x264A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002655B8_0x2655b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A48u; }
        if (ctx->pc != 0x264A48u) { return; }
    }
    ctx->pc = 0x264A48u;
label_264a48:
    // 0x264a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x264A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A4Cu;
            // 0x264a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264A54u;
    // 0x264a54: 0x0  nop
    ctx->pc = 0x264a54u;
    // NOP
label_264a58:
    // 0x264a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264a5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x264a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x264a60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x264a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x264a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264a6c: 0xc09959c  jal         func_265670
    ctx->pc = 0x264A6Cu;
    SET_GPR_U32(ctx, 31, 0x264A74u);
    ctx->pc = 0x264A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A6Cu;
            // 0x264a70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265670u;
    if (runtime->hasFunction(0x265670u)) {
        auto targetFn = runtime->lookupFunction(0x265670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A74u; }
        if (ctx->pc != 0x264A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265670_0x265670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A74u; }
        if (ctx->pc != 0x264A74u) { return; }
    }
    ctx->pc = 0x264A74u;
label_264a74:
    // 0x264a74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264a78: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264A78u;
    {
        const bool branch_taken_0x264a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x264A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A78u;
            // 0x264a7c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a78) {
            ctx->pc = 0x264A88u;
            goto label_264a88;
        }
    }
    ctx->pc = 0x264A80u;
    // 0x264a80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x264A80u;
    {
        const bool branch_taken_0x264a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A80u;
            // 0x264a84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a80) {
            ctx->pc = 0x264A8Cu;
            goto label_264a8c;
        }
    }
    ctx->pc = 0x264A88u;
label_264a88:
    // 0x264a88: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x264a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_264a8c:
    // 0x264a8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264a90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x264a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264a94: 0x3e00008  jr          $ra
    ctx->pc = 0x264A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A94u;
            // 0x264a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264A9Cu;
    // 0x264a9c: 0x0  nop
    ctx->pc = 0x264a9cu;
    // NOP
    ctx->pc = 0x264aa0u;
}
