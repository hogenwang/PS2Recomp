#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A24B8
// Address: 0x2a24b8 - 0x2a2598
void sub_002A24B8_0x2a24b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A24B8_0x2a24b8");
#endif

    switch (ctx->pc) {
        case 0x2a24f4u: goto label_2a24f4;
        case 0x2a2514u: goto label_2a2514;
        case 0x2a2530u: goto label_2a2530;
        case 0x2a2550u: goto label_2a2550;
        default: break;
    }

    ctx->pc = 0x2a24b8u;

    // 0x2a24b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a24b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a24bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a24bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a24c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a24c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a24c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a24c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a24cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a24ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a24d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a24d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a24d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24d8: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x2a24d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x2a24dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A24DCu;
    {
        const bool branch_taken_0x2a24dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A24E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A24DCu;
            // 0x2a24e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24dc) {
            ctx->pc = 0x2A24F4u;
            goto label_2a24f4;
        }
    }
    ctx->pc = 0x2A24E4u;
    // 0x2a24e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a24e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a24e8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2a24e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a24ec: 0xc0a8966  jal         func_2A2598
    ctx->pc = 0x2A24ECu;
    SET_GPR_U32(ctx, 31, 0x2A24F4u);
    ctx->pc = 0x2A24F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A24ECu;
            // 0x2a24f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2598u;
    if (runtime->hasFunction(0x2A2598u)) {
        auto targetFn = runtime->lookupFunction(0x2A2598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A24F4u; }
        if (ctx->pc != 0x2A24F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2598_0x2a2598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A24F4u; }
        if (ctx->pc != 0x2A24F4u) { return; }
    }
    ctx->pc = 0x2A24F4u;
label_2a24f4:
    // 0x2a24f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2a24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a24f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2a24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a24fc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2a24fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2500: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2500u;
    {
        const bool branch_taken_0x2a2500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2500u;
            // 0x2a2504: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2500) {
            ctx->pc = 0x2A2520u;
            goto label_2a2520;
        }
    }
    ctx->pc = 0x2A2508u;
    // 0x2a2508: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a2508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a250c: 0xc0a890c  jal         func_2A2430
    ctx->pc = 0x2A250Cu;
    SET_GPR_U32(ctx, 31, 0x2A2514u);
    ctx->pc = 0x2A2510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A250Cu;
            // 0x2a2510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2430u;
    if (runtime->hasFunction(0x2A2430u)) {
        auto targetFn = runtime->lookupFunction(0x2A2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2514u; }
        if (ctx->pc != 0x2A2514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2430_0x2a2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2514u; }
        if (ctx->pc != 0x2A2514u) { return; }
    }
    ctx->pc = 0x2A2514u;
label_2a2514:
    // 0x2a2514: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A2514u;
    {
        const bool branch_taken_0x2a2514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2514u;
            // 0x2a2518: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2514) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A251Cu;
    // 0x2a251c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2a251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2a2520:
    // 0x2a2520: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A2520u;
    {
        const bool branch_taken_0x2a2520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2520) {
            ctx->pc = 0x2A2524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2520u;
            // 0x2a2524: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2560u;
            goto label_2a2560;
        }
    }
    ctx->pc = 0x2A2528u;
    // 0x2a2528: 0xc0a87fe  jal         func_2A1FF8
    ctx->pc = 0x2A2528u;
    SET_GPR_U32(ctx, 31, 0x2A2530u);
    ctx->pc = 0x2A1FF8u;
    if (runtime->hasFunction(0x2A1FF8u)) {
        auto targetFn = runtime->lookupFunction(0x2A1FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2530u; }
        if (ctx->pc != 0x2A2530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1FF8_0x2a1ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2530u; }
        if (ctx->pc != 0x2A2530u) { return; }
    }
    ctx->pc = 0x2A2530u;
label_2a2530:
    // 0x2a2530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2534: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2534u;
    {
        const bool branch_taken_0x2a2534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2534u;
            // 0x2a2538: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2534) {
            ctx->pc = 0x2A2544u;
            goto label_2a2544;
        }
    }
    ctx->pc = 0x2A253Cu;
    // 0x2a253c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A253Cu;
    {
        const bool branch_taken_0x2a253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A253Cu;
            // 0x2a2540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a253c) {
            ctx->pc = 0x2A257Cu;
            goto label_2a257c;
        }
    }
    ctx->pc = 0x2A2544u;
label_2a2544:
    // 0x2a2544: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a2544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2548: 0xc0a885a  jal         func_2A2168
    ctx->pc = 0x2A2548u;
    SET_GPR_U32(ctx, 31, 0x2A2550u);
    ctx->pc = 0x2A254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2548u;
            // 0x2a254c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2168u;
    if (runtime->hasFunction(0x2A2168u)) {
        auto targetFn = runtime->lookupFunction(0x2A2168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2550u; }
        if (ctx->pc != 0x2A2550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2168_0x2a2168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2550u; }
        if (ctx->pc != 0x2A2550u) { return; }
    }
    ctx->pc = 0x2A2550u;
label_2a2550:
    // 0x2a2550: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2550u;
    {
        const bool branch_taken_0x2a2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2550u;
            // 0x2a2554: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2550) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2558u;
    // 0x2a2558: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a2558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a255c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a2560:
    // 0x2a2560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2564: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2a2564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a2568: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2a2568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a256c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a2570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a2570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a2574: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2a2574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x2a2578: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2a2578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2a257c:
    // 0x2a257c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a2580:
    // 0x2a2580: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a258c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a258cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2590: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2590u;
            // 0x2a2594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2598u;
    ctx->pc = 0x2a2598u;
}
