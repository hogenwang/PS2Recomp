#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5A58
// Address: 0x1f5a58 - 0x1f5ad0
void sub_001F5A58_0x1f5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5A58_0x1f5a58");
#endif

    switch (ctx->pc) {
        case 0x1f5aacu: goto label_1f5aac;
        case 0x1f5ab8u: goto label_1f5ab8;
        default: break;
    }

    ctx->pc = 0x1f5a58u;

    // 0x1f5a58: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1f5a5c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5a60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f5a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f5a64: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1f5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1f5a68: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f5a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f5a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5a70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f5a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f5a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a78: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f5a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f5a7c: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x1f5a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x1f5a80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f5a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f5a84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a88: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x1f5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x1f5a8c: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x1f5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x1f5a90: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1f5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1f5a94: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1f5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1f5a98: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x1f5a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x1f5a9c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1f5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x1f5aa0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f5aa4: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1F5AA4u;
    SET_GPR_U32(ctx, 31, 0x1F5AACu);
    ctx->pc = 0x1F5AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5AA4u;
            // 0x1f5aa8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AACu; }
        if (ctx->pc != 0x1F5AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AACu; }
        if (ctx->pc != 0x1F5AACu) { return; }
    }
    ctx->pc = 0x1F5AACu;
label_1f5aac:
    // 0x1f5aac: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1f5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1f5ab0: 0xc07d6b4  jal         func_1F5AD0
    ctx->pc = 0x1F5AB0u;
    SET_GPR_U32(ctx, 31, 0x1F5AB8u);
    ctx->pc = 0x1F5AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5AB0u;
            // 0x1f5ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5AD0u;
    if (runtime->hasFunction(0x1F5AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AB8u; }
        if (ctx->pc != 0x1F5AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5AD0_0x1f5ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AB8u; }
        if (ctx->pc != 0x1F5AB8u) { return; }
    }
    ctx->pc = 0x1F5AB8u;
label_1f5ab8:
    // 0x1f5ab8: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x1f5ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x1f5abc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f5abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5ac4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f5ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5AC8u;
            // 0x1f5acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5AD0u;
    ctx->pc = 0x1f5ad0u;
}
