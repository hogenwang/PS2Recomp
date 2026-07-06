#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6D90
// Address: 0x1e6d90 - 0x1e6e10
void sub_001E6D90_0x1e6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6D90_0x1e6d90");
#endif

    switch (ctx->pc) {
        case 0x1e6dc0u: goto label_1e6dc0;
        case 0x1e6dd0u: goto label_1e6dd0;
        case 0x1e6dd8u: goto label_1e6dd8;
        default: break;
    }

    ctx->pc = 0x1e6d90u;

    // 0x1e6d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e6d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6da0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e6da4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e6da8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e6da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e6dac: 0x8e1103b0  lw          $s1, 0x3B0($s0)
    ctx->pc = 0x1e6dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1e6db0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6DB0u;
    {
        const bool branch_taken_0x1e6db0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DB0u;
            // 0x1e6db4: 0x8e12003c  lw          $s2, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db0) {
            ctx->pc = 0x1E6DC8u;
            goto label_1e6dc8;
        }
    }
    ctx->pc = 0x1E6DB8u;
    // 0x1e6db8: 0xc079c0a  jal         func_1E7028
    ctx->pc = 0x1E6DB8u;
    SET_GPR_U32(ctx, 31, 0x1E6DC0u);
    ctx->pc = 0x1E7028u;
    if (runtime->hasFunction(0x1E7028u)) {
        auto targetFn = runtime->lookupFunction(0x1E7028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DC0u; }
        if (ctx->pc != 0x1E6DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7028_0x1e7028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DC0u; }
        if (ctx->pc != 0x1E6DC0u) { return; }
    }
    ctx->pc = 0x1E6DC0u;
label_1e6dc0:
    // 0x1e6dc0: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E6DC0u;
    {
        const bool branch_taken_0x1e6dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1e6dc0) {
            ctx->pc = 0x1E6DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DC0u;
            // 0x1e6dc4: 0xae0003b0  sw          $zero, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6DC8u;
            goto label_1e6dc8;
        }
    }
    ctx->pc = 0x1E6DC8u;
label_1e6dc8:
    // 0x1e6dc8: 0xc079b84  jal         func_1E6E10
    ctx->pc = 0x1E6DC8u;
    SET_GPR_U32(ctx, 31, 0x1E6DD0u);
    ctx->pc = 0x1E6DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DC8u;
            // 0x1e6dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E10u;
    if (runtime->hasFunction(0x1E6E10u)) {
        auto targetFn = runtime->lookupFunction(0x1E6E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DD0u; }
        if (ctx->pc != 0x1E6DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6E10_0x1e6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DD0u; }
        if (ctx->pc != 0x1E6DD0u) { return; }
    }
    ctx->pc = 0x1E6DD0u;
label_1e6dd0:
    // 0x1e6dd0: 0xc07eb30  jal         func_1FACC0
    ctx->pc = 0x1E6DD0u;
    SET_GPR_U32(ctx, 31, 0x1E6DD8u);
    ctx->pc = 0x1E6DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DD0u;
            // 0x1e6dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FACC0u;
    if (runtime->hasFunction(0x1FACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DD8u; }
        if (ctx->pc != 0x1E6DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FACC0_0x1facc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DD8u; }
        if (ctx->pc != 0x1E6DD8u) { return; }
    }
    ctx->pc = 0x1E6DD8u;
label_1e6dd8:
    // 0x1e6dd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e6dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ddc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e6de0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6DE0u;
    {
        const bool branch_taken_0x1e6de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DE0u;
            // 0x1e6de4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6de0) {
            ctx->pc = 0x1E6DF0u;
            goto label_1e6df0;
        }
    }
    ctx->pc = 0x1E6DE8u;
    // 0x1e6de8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6DE8u;
    {
        const bool branch_taken_0x1e6de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e6de8) {
            ctx->pc = 0x1E6DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DE8u;
            // 0x1e6dec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6DFCu;
            goto label_1e6dfc;
        }
    }
    ctx->pc = 0x1E6DF0u;
label_1e6df0:
    // 0x1e6df0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6df4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e6df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6dfc:
    // 0x1e6dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e6e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6e04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e6e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E08u;
            // 0x1e6e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6E10u;
    ctx->pc = 0x1e6e10u;
}
