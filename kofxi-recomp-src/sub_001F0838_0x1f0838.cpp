#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0838
// Address: 0x1f0838 - 0x1f08a8
void sub_001F0838_0x1f0838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0838_0x1f0838");
#endif

    switch (ctx->pc) {
        case 0x1f0854u: goto label_1f0854;
        default: break;
    }

    ctx->pc = 0x1f0838u;

    // 0x1f0838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f083c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f084c: 0xc07d4a0  jal         func_1F5280
    ctx->pc = 0x1F084Cu;
    SET_GPR_U32(ctx, 31, 0x1F0854u);
    ctx->pc = 0x1F0850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F084Cu;
            // 0x1f0850: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5280u;
    if (runtime->hasFunction(0x1F5280u)) {
        auto targetFn = runtime->lookupFunction(0x1F5280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0854u; }
        if (ctx->pc != 0x1F0854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5280_0x1f5280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0854u; }
        if (ctx->pc != 0x1F0854u) { return; }
    }
    ctx->pc = 0x1F0854u;
label_1f0854:
    // 0x1f0854: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F0854u;
    {
        const bool branch_taken_0x1f0854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0854u;
            // 0x1f0858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0854) {
            ctx->pc = 0x1F0890u;
            goto label_1f0890;
        }
    }
    ctx->pc = 0x1F085Cu;
    // 0x1f085c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F085Cu;
    {
        const bool branch_taken_0x1f085c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F085Cu;
            // 0x1f0860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f085c) {
            ctx->pc = 0x1F0890u;
            goto label_1f0890;
        }
    }
    ctx->pc = 0x1F0864u;
    // 0x1f0864: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1f0864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1f0868: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0868u;
    {
        const bool branch_taken_0x1f0868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0868) {
            ctx->pc = 0x1F086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0868u;
            // 0x1f086c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0890u;
            goto label_1f0890;
        }
    }
    ctx->pc = 0x1F0870u;
    // 0x1f0870: 0x56230007  bnel        $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0870u;
    {
        const bool branch_taken_0x1f0870 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f0870) {
            ctx->pc = 0x1F0874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0870u;
            // 0x1f0874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0890u;
            goto label_1f0890;
        }
    }
    ctx->pc = 0x1F0878u;
    // 0x1f0878: 0x8e03096c  lw          $v1, 0x96C($s0)
    ctx->pc = 0x1f0878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x1f087c: 0x8e040968  lw          $a0, 0x968($s0)
    ctx->pc = 0x1f087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1f0880: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f0880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f0884: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0884u;
    {
        const bool branch_taken_0x1f0884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0884u;
            // 0x1f0888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0884) {
            ctx->pc = 0x1F0894u;
            goto label_1f0894;
        }
    }
    ctx->pc = 0x1F088Cu;
    // 0x1f088c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f088cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0890:
    // 0x1f0890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0894:
    // 0x1f0894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f089c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F08A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F089Cu;
            // 0x1f08a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F08A4u;
    // 0x1f08a4: 0x0  nop
    ctx->pc = 0x1f08a4u;
    // NOP
    ctx->pc = 0x1f08a8u;
}
