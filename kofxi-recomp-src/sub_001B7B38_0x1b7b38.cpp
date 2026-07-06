#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7B38
// Address: 0x1b7b38 - 0x1b7b88
void sub_001B7B38_0x1b7b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B38_0x1b7b38");
#endif

    switch (ctx->pc) {
        case 0x1b7b50u: goto label_1b7b50;
        case 0x1b7b64u: goto label_1b7b64;
        case 0x1b7b6cu: goto label_1b7b6c;
        case 0x1b7b74u: goto label_1b7b74;
        default: break;
    }

    ctx->pc = 0x1b7b38u;

    // 0x1b7b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7b44: 0x806fd08  j           func_1BF420
    ctx->pc = 0x1B7B44u;
    ctx->pc = 0x1B7B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B44u;
            // 0x1b7b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF420u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B7B4Cu;
    // 0x1b7b4c: 0x0  nop
    ctx->pc = 0x1b7b4cu;
    // NOP
label_1b7b50:
    // 0x1b7b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7b5c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B64u);
    ctx->pc = 0x1B7B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B5Cu;
            // 0x1b7b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B64u; }
        if (ctx->pc != 0x1B7B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B64u; }
        if (ctx->pc != 0x1B7B64u) { return; }
    }
    ctx->pc = 0x1B7B64u;
label_1b7b64:
    // 0x1b7b64: 0xc06dee2  jal         func_1B7B88
    ctx->pc = 0x1B7B64u;
    SET_GPR_U32(ctx, 31, 0x1B7B6Cu);
    ctx->pc = 0x1B7B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B64u;
            // 0x1b7b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B88u;
    if (runtime->hasFunction(0x1B7B88u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B6Cu; }
        if (ctx->pc != 0x1B7B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B88_0x1b7b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B6Cu; }
        if (ctx->pc != 0x1B7B6Cu) { return; }
    }
    ctx->pc = 0x1B7B6Cu;
label_1b7b6c:
    // 0x1b7b6c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B74u);
    ctx->pc = 0x1B7B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B6Cu;
            // 0x1b7b70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B74u; }
        if (ctx->pc != 0x1B7B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B74u; }
        if (ctx->pc != 0x1B7B74u) { return; }
    }
    ctx->pc = 0x1B7B74u;
label_1b7b74:
    // 0x1b7b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7b78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B80u;
            // 0x1b7b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7B88u;
    ctx->pc = 0x1b7b88u;
}
