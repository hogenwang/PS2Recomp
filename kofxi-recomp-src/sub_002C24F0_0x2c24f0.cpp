#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C24F0
// Address: 0x2c24f0 - 0x2c25c0
void sub_002C24F0_0x2c24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C24F0_0x2c24f0");
#endif

    switch (ctx->pc) {
        case 0x2c2528u: goto label_2c2528;
        case 0x2c253cu: goto label_2c253c;
        case 0x2c2550u: goto label_2c2550;
        case 0x2c2578u: goto label_2c2578;
        case 0x2c2584u: goto label_2c2584;
        case 0x2c2598u: goto label_2c2598;
        default: break;
    }

    ctx->pc = 0x2c24f0u;

    // 0x2c24f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c24f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c24f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c24f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c24fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c24fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2500: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c2500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c2504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2508: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c250c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C250Cu;
    {
        const bool branch_taken_0x2c250c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C250Cu;
            // 0x2c2510: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c250c) {
            ctx->pc = 0x2C251Cu;
            goto label_2c251c;
        }
    }
    ctx->pc = 0x2C2514u;
    // 0x2c2514: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C2514u;
    {
        const bool branch_taken_0x2c2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2514u;
            // 0x2c2518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2514) {
            ctx->pc = 0x2C25A4u;
            goto label_2c25a4;
        }
    }
    ctx->pc = 0x2C251Cu;
label_2c251c:
    // 0x2c251c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c2520: 0xc0a016a  jal         func_2805A8
    ctx->pc = 0x2C2520u;
    SET_GPR_U32(ctx, 31, 0x2C2528u);
    ctx->pc = 0x2C2524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2520u;
            // 0x2c2524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2805A8u;
    if (runtime->hasFunction(0x2805A8u)) {
        auto targetFn = runtime->lookupFunction(0x2805A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2528u; }
        if (ctx->pc != 0x2C2528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002805A8_0x2805a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2528u; }
        if (ctx->pc != 0x2C2528u) { return; }
    }
    ctx->pc = 0x2C2528u;
label_2c2528:
    // 0x2c2528: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c2528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c252c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C252Cu;
    {
        const bool branch_taken_0x2c252c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C252Cu;
            // 0x2c2530: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c252c) {
            ctx->pc = 0x2C2540u;
            goto label_2c2540;
        }
    }
    ctx->pc = 0x2C2534u;
    // 0x2c2534: 0xc0a0aa0  jal         func_282A80
    ctx->pc = 0x2C2534u;
    SET_GPR_U32(ctx, 31, 0x2C253Cu);
    ctx->pc = 0x2C2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2534u;
            // 0x2c2538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282A80u;
    if (runtime->hasFunction(0x282A80u)) {
        auto targetFn = runtime->lookupFunction(0x282A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C253Cu; }
        if (ctx->pc != 0x2C253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282A80_0x282a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C253Cu; }
        if (ctx->pc != 0x2C253Cu) { return; }
    }
    ctx->pc = 0x2C253Cu;
label_2c253c:
    // 0x2c253c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c253cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c2540:
    // 0x2c2540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2548: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C2548u;
    SET_GPR_U32(ctx, 31, 0x2C2550u);
    ctx->pc = 0x2C254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2548u;
            // 0x2c254c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2550u; }
        if (ctx->pc != 0x2C2550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2550u; }
        if (ctx->pc != 0x2C2550u) { return; }
    }
    ctx->pc = 0x2C2550u;
label_2c2550:
    // 0x2c2550: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C2550u;
    {
        const bool branch_taken_0x2c2550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2550u;
            // 0x2c2554: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2550) {
            ctx->pc = 0x2C25A4u;
            goto label_2c25a4;
        }
    }
    ctx->pc = 0x2C2558u;
    // 0x2c2558: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c255c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2568: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c2568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c256c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c256cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c2570: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C2570u;
    SET_GPR_U32(ctx, 31, 0x2C2578u);
    ctx->pc = 0x2C2574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2570u;
            // 0x2c2574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2578u; }
        if (ctx->pc != 0x2C2578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2578u; }
        if (ctx->pc != 0x2C2578u) { return; }
    }
    ctx->pc = 0x2C2578u;
label_2c2578:
    // 0x2c2578: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c2578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c257c: 0xc0a016a  jal         func_2805A8
    ctx->pc = 0x2C257Cu;
    SET_GPR_U32(ctx, 31, 0x2C2584u);
    ctx->pc = 0x2C2580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C257Cu;
            // 0x2c2580: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2805A8u;
    if (runtime->hasFunction(0x2805A8u)) {
        auto targetFn = runtime->lookupFunction(0x2805A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2584u; }
        if (ctx->pc != 0x2C2584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002805A8_0x2805a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2584u; }
        if (ctx->pc != 0x2C2584u) { return; }
    }
    ctx->pc = 0x2C2584u;
label_2c2584:
    // 0x2c2584: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c2584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c2588: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2588u;
    {
        const bool branch_taken_0x2c2588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2588u;
            // 0x2c258c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2588) {
            ctx->pc = 0x2C259Cu;
            goto label_2c259c;
        }
    }
    ctx->pc = 0x2C2590u;
    // 0x2c2590: 0xc0a0aa0  jal         func_282A80
    ctx->pc = 0x2C2590u;
    SET_GPR_U32(ctx, 31, 0x2C2598u);
    ctx->pc = 0x2C2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2590u;
            // 0x2c2594: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282A80u;
    if (runtime->hasFunction(0x282A80u)) {
        auto targetFn = runtime->lookupFunction(0x282A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2598u; }
        if (ctx->pc != 0x2C2598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282A80_0x282a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2598u; }
        if (ctx->pc != 0x2C2598u) { return; }
    }
    ctx->pc = 0x2C2598u;
label_2c2598:
    // 0x2c2598: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c259c:
    // 0x2c259c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c259cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c25a4:
    // 0x2c25a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c25a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c25a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c25a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c25ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c25acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c25b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c25b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c25b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c25b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c25b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C25B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C25BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25B8u;
            // 0x2c25bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C25C0u;
    ctx->pc = 0x2c25c0u;
}
