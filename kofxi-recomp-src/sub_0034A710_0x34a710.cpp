#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034A710
// Address: 0x34a710 - 0x34a7d0
void sub_0034A710_0x34a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A710_0x34a710");
#endif

    switch (ctx->pc) {
        case 0x34a74cu: goto label_34a74c;
        case 0x34a758u: goto label_34a758;
        case 0x34a788u: goto label_34a788;
        case 0x34a794u: goto label_34a794;
        default: break;
    }

    ctx->pc = 0x34a710u;

    // 0x34a710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a718: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34a71c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a728: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A728u;
    {
        const bool branch_taken_0x34a728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A728u;
            // 0x34a72c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a728) {
            ctx->pc = 0x34A77Cu;
            goto label_34a77c;
        }
    }
    ctx->pc = 0x34A730u;
    // 0x34a730: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A730u;
    {
        const bool branch_taken_0x34a730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a730) {
            ctx->pc = 0x34A740u;
            goto label_34a740;
        }
    }
    ctx->pc = 0x34A738u;
    // 0x34a738: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34A738u;
    {
        const bool branch_taken_0x34a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a738) {
            ctx->pc = 0x34A7B0u;
            goto label_34a7b0;
        }
    }
    ctx->pc = 0x34A740u;
label_34a740:
    // 0x34a740: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x34a740u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x34a744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a748: 0x2631ef90  addiu       $s1, $s1, -0x1070
    ctx->pc = 0x34a748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963088));
label_34a74c:
    // 0x34a74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a750: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A750u;
    SET_GPR_U32(ctx, 31, 0x34A758u);
    ctx->pc = 0x34A754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A750u;
            // 0x34a754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (runtime->hasFunction(0x3429B0u)) {
        auto targetFn = runtime->lookupFunction(0x3429B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A758u; }
        if (ctx->pc != 0x34A758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003429B0_0x3429b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A758u; }
        if (ctx->pc != 0x34A758u) { return; }
    }
    ctx->pc = 0x34A758u;
label_34a758:
    // 0x34a758: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A758u;
    {
        const bool branch_taken_0x34a758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a758) {
            ctx->pc = 0x34A75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A758u;
            // 0x34a75c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A768u;
            goto label_34a768;
        }
    }
    ctx->pc = 0x34A760u;
    // 0x34a760: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34A760u;
    {
        const bool branch_taken_0x34a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A760u;
            // 0x34a764: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a760) {
            ctx->pc = 0x34A7B4u;
            goto label_34a7b4;
        }
    }
    ctx->pc = 0x34A768u;
label_34a768:
    // 0x34a768: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x34a768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a76c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34A76Cu;
    {
        const bool branch_taken_0x34a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A76Cu;
            // 0x34a770: 0x26310022  addiu       $s1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a76c) {
            ctx->pc = 0x34A74Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a74c;
        }
    }
    ctx->pc = 0x34A774u;
    // 0x34a774: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34A774u;
    {
        const bool branch_taken_0x34a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a774) {
            ctx->pc = 0x34A7B0u;
            goto label_34a7b0;
        }
    }
    ctx->pc = 0x34A77Cu;
label_34a77c:
    // 0x34a77c: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x34a77cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x34a780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34a780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a784: 0x2652ece0  addiu       $s2, $s2, -0x1320
    ctx->pc = 0x34a784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962400));
label_34a788:
    // 0x34a788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a78c: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A78Cu;
    SET_GPR_U32(ctx, 31, 0x34A794u);
    ctx->pc = 0x34A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A78Cu;
            // 0x34a790: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (runtime->hasFunction(0x3429B0u)) {
        auto targetFn = runtime->lookupFunction(0x3429B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A794u; }
        if (ctx->pc != 0x34A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003429B0_0x3429b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A794u; }
        if (ctx->pc != 0x34A794u) { return; }
    }
    ctx->pc = 0x34A794u;
label_34a794:
    // 0x34a794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A794u;
    {
        const bool branch_taken_0x34a794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a794) {
            ctx->pc = 0x34A798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A794u;
            // 0x34a798: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A7A4u;
            goto label_34a7a4;
        }
    }
    ctx->pc = 0x34A79Cu;
    // 0x34a79c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34A79Cu;
    {
        const bool branch_taken_0x34a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A79Cu;
            // 0x34a7a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a79c) {
            ctx->pc = 0x34A7B4u;
            goto label_34a7b4;
        }
    }
    ctx->pc = 0x34A7A4u;
label_34a7a4:
    // 0x34a7a4: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x34a7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a7a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34A7A8u;
    {
        const bool branch_taken_0x34a7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A7A8u;
            // 0x34a7ac: 0x26520022  addiu       $s2, $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7a8) {
            ctx->pc = 0x34A788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a788;
        }
    }
    ctx->pc = 0x34A7B0u;
label_34a7b0:
    // 0x34a7b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34a7b4:
    // 0x34a7b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34a7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34A7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A7C4u;
            // 0x34a7c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34A7CCu;
    // 0x34a7cc: 0x0  nop
    ctx->pc = 0x34a7ccu;
    // NOP
    ctx->pc = 0x34a7d0u;
}
