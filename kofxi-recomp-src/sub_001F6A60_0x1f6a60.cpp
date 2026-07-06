#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6A60
// Address: 0x1f6a60 - 0x1f6ad0
void sub_001F6A60_0x1f6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6A60_0x1f6a60");
#endif

    switch (ctx->pc) {
        case 0x1f6a84u: goto label_1f6a84;
        case 0x1f6ab0u: goto label_1f6ab0;
        default: break;
    }

    ctx->pc = 0x1f6a60u;

    // 0x1f6a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6a68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6a70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f6a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6a78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f6a7c: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A84u);
    ctx->pc = 0x1F6A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A7Cu;
            // 0x1f6a80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (runtime->hasFunction(0x1F64A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F64A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A84u; }
        if (ctx->pc != 0x1F6A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F64A0_0x1f64a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A84u; }
        if (ctx->pc != 0x1F6A84u) { return; }
    }
    ctx->pc = 0x1F6A84u;
label_1f6a84:
    // 0x1f6a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6A88u;
    {
        const bool branch_taken_0x1f6a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A88u;
            // 0x1f6a8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a88) {
            ctx->pc = 0x1F6AB0u;
            goto label_1f6ab0;
        }
    }
    ctx->pc = 0x1F6A90u;
    // 0x1f6a90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f6a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6aa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f6aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AA4u;
            // 0x1f6aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6AACu;
    // 0x1f6aac: 0x0  nop
    ctx->pc = 0x1f6aacu;
    // NOP
label_1f6ab0:
    // 0x1f6ab0: 0x8e442018  lw          $a0, 0x2018($s2)
    ctx->pc = 0x1f6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8216)));
    // 0x1f6ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6abc: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x1f6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x1f6ac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6ac4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f6ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6ac8: 0x807d9fc  j           func_1F67F0
    ctx->pc = 0x1F6AC8u;
    ctx->pc = 0x1F6ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AC8u;
            // 0x1f6acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F67F0u;
    if (runtime->hasFunction(0x1F67F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F67F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001F67F0_0x1f67f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F6AD0u;
    ctx->pc = 0x1f6ad0u;
}
