#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226480
// Address: 0x226480 - 0x226638
void sub_00226480_0x226480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226480_0x226480");
#endif

    switch (ctx->pc) {
        case 0x2264a0u: goto label_2264a0;
        case 0x2264dcu: goto label_2264dc;
        case 0x2264e8u: goto label_2264e8;
        case 0x2264fcu: goto label_2264fc;
        case 0x226528u: goto label_226528;
        case 0x22652cu: goto label_22652c;
        case 0x226548u: goto label_226548;
        case 0x226550u: goto label_226550;
        case 0x22656cu: goto label_22656c;
        case 0x226578u: goto label_226578;
        case 0x226588u: goto label_226588;
        case 0x2265b0u: goto label_2265b0;
        case 0x2265e8u: goto label_2265e8;
        case 0x2265f4u: goto label_2265f4;
        default: break;
    }

    ctx->pc = 0x226480u;

    // 0x226480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226488: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22648c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x226490: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x226494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226498: 0xc0bd2ee  jal         func_2F4BB8
    ctx->pc = 0x226498u;
    SET_GPR_U32(ctx, 31, 0x2264A0u);
    ctx->pc = 0x22649Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226498u;
            // 0x22649c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB8u;
    if (runtime->hasFunction(0x2F4BB8u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264A0u; }
        if (ctx->pc != 0x2264A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4BB8_0x2f4bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264A0u; }
        if (ctx->pc != 0x2264A0u) { return; }
    }
    ctx->pc = 0x2264A0u;
label_2264a0:
    // 0x2264a0: 0x244d03f1  addiu       $t5, $v0, 0x3F1
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1009));
    // 0x2264a4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2264a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x2264a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2264a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264ac: 0x2dae0008  sltiu       $t6, $t5, 0x8
    ctx->pc = 0x2264acu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2264b0: 0x11c00052  beqz        $t6, . + 4 + (0x52 << 2)
    ctx->pc = 0x2264B0u;
    {
        const bool branch_taken_0x2264b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2264B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2264B0u;
            // 0x2264b4: 0x25f23810  addiu       $s2, $t7, 0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 14352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264b0) {
            ctx->pc = 0x2265FCu;
            goto label_2265fc;
        }
    }
    ctx->pc = 0x2264B8u;
    // 0x2264b8: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x2264b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x2264bc: 0xd7880  sll         $t7, $t5, 2
    ctx->pc = 0x2264bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2264c0: 0x25ce3904  addiu       $t6, $t6, 0x3904
    ctx->pc = 0x2264c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 14596));
    // 0x2264c4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x2264c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x2264c8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x2264c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2264cc: 0x1a00008  jr          $t5
    ctx->pc = 0x2264CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2264D4u: goto label_2264d4;
            case 0x226548u: goto label_226548;
            case 0x226580u: goto label_226580;
            case 0x2265A8u: goto label_2265a8;
            case 0x2265D0u: goto label_2265d0;
            case 0x2265FCu: goto label_2265fc;
            case 0x226618u: goto label_226618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2264D4u;
label_2264d4:
    // 0x2264d4: 0xc0bdfee  jal         func_2F7FB8
    ctx->pc = 0x2264D4u;
    SET_GPR_U32(ctx, 31, 0x2264DCu);
    ctx->pc = 0x2264D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2264D4u;
            // 0x2264d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FB8u;
    if (runtime->hasFunction(0x2F7FB8u)) {
        auto targetFn = runtime->lookupFunction(0x2F7FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264DCu; }
        if (ctx->pc != 0x2264DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7FB8_0x2f7fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264DCu; }
        if (ctx->pc != 0x2264DCu) { return; }
    }
    ctx->pc = 0x2264DCu;
label_2264dc:
    // 0x2264dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2264dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264e0: 0xc0bdfee  jal         func_2F7FB8
    ctx->pc = 0x2264E0u;
    SET_GPR_U32(ctx, 31, 0x2264E8u);
    ctx->pc = 0x2264E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2264E0u;
            // 0x2264e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FB8u;
    if (runtime->hasFunction(0x2F7FB8u)) {
        auto targetFn = runtime->lookupFunction(0x2F7FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264E8u; }
        if (ctx->pc != 0x2264E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7FB8_0x2f7fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264E8u; }
        if (ctx->pc != 0x2264E8u) { return; }
    }
    ctx->pc = 0x2264E8u;
label_2264e8:
    // 0x2264e8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2264e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2264ec: 0x144f0004  bne         $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2264ECu;
    {
        const bool branch_taken_0x2264ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2264F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2264ECu;
            // 0x2264f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264ec) {
            ctx->pc = 0x226500u;
            goto label_226500;
        }
    }
    ctx->pc = 0x2264F4u;
    // 0x2264f4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2264F4u;
    SET_GPR_U32(ctx, 31, 0x2264FCu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264FCu; }
        if (ctx->pc != 0x2264FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264FCu; }
        if (ctx->pc != 0x2264FCu) { return; }
    }
    ctx->pc = 0x2264FCu;
label_2264fc:
    // 0x2264fc: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x2264fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226500:
    // 0x226500: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226504: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226508: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x226508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x22650c: 0x24e73840  addiu       $a3, $a3, 0x3840
    ctx->pc = 0x22650cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14400));
    // 0x226510: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x226510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226514: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x226514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226518: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x226518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x22651c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22651cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226520: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 31, 0x226528u);
    ctx->pc = 0x226524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226520u;
            // 0x226524: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226528u; }
        if (ctx->pc != 0x226528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226528u; }
        if (ctx->pc != 0x226528u) { return; }
    }
    ctx->pc = 0x226528u;
label_226528:
    // 0x226528: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22652c:
    // 0x22652c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22652cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226538: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22653c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226540: 0x3e00008  jr          $ra
    ctx->pc = 0x226540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226540u;
            // 0x226544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226548u;
label_226548:
    // 0x226548: 0xc0beab6  jal         func_2FAAD8
    ctx->pc = 0x226548u;
    SET_GPR_U32(ctx, 31, 0x226550u);
    ctx->pc = 0x22654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226548u;
            // 0x22654c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FAAD8u;
    if (runtime->hasFunction(0x2FAAD8u)) {
        auto targetFn = runtime->lookupFunction(0x2FAAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226550u; }
        if (ctx->pc != 0x226550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FAAD8_0x2faad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226550u; }
        if (ctx->pc != 0x226550u) { return; }
    }
    ctx->pc = 0x226550u;
label_226550:
    // 0x226550: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226554: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226558: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x226558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22655c: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x22655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x226560: 0x24e73860  addiu       $a3, $a3, 0x3860
    ctx->pc = 0x226560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14432));
    // 0x226564: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x226564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226568: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x226568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_22656c:
    // 0x22656c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22656cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226570: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226570u;
    SET_GPR_U32(ctx, 31, 0x226578u);
    ctx->pc = 0x226574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226570u;
            // 0x226574: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226578u; }
        if (ctx->pc != 0x226578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226578u; }
        if (ctx->pc != 0x226578u) { return; }
    }
    ctx->pc = 0x226578u;
label_226578:
    // 0x226578: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x226578u;
    {
        const bool branch_taken_0x226578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226578u;
            // 0x22657c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226578) {
            ctx->pc = 0x22652Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22652c;
        }
    }
    ctx->pc = 0x226580u;
label_226580:
    // 0x226580: 0xc0bdfe8  jal         func_2F7FA0
    ctx->pc = 0x226580u;
    SET_GPR_U32(ctx, 31, 0x226588u);
    ctx->pc = 0x226584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226580u;
            // 0x226584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FA0u;
    if (runtime->hasFunction(0x2F7FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226588u; }
        if (ctx->pc != 0x226588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7FA0_0x2f7fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226588u; }
        if (ctx->pc != 0x226588u) { return; }
    }
    ctx->pc = 0x226588u;
label_226588:
    // 0x226588: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22658c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22658cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226590: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x226590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226594: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x226594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x226598: 0x24e73878  addiu       $a3, $a3, 0x3878
    ctx->pc = 0x226598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14456));
    // 0x22659c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22659cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265a0: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2265A0u;
    {
        const bool branch_taken_0x2265a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265A0u;
            // 0x2265a4: 0x24050083  addiu       $a1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265a0) {
            ctx->pc = 0x22656Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22656c;
        }
    }
    ctx->pc = 0x2265A8u;
label_2265a8:
    // 0x2265a8: 0xc0bdfe8  jal         func_2F7FA0
    ctx->pc = 0x2265A8u;
    SET_GPR_U32(ctx, 31, 0x2265B0u);
    ctx->pc = 0x2265ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2265A8u;
            // 0x2265ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FA0u;
    if (runtime->hasFunction(0x2F7FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265B0u; }
        if (ctx->pc != 0x2265B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7FA0_0x2f7fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265B0u; }
        if (ctx->pc != 0x2265B0u) { return; }
    }
    ctx->pc = 0x2265B0u;
label_2265b0:
    // 0x2265b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2265b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2265b4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2265b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2265b8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2265b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265bc: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x2265bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x2265c0: 0x24e73898  addiu       $a3, $a3, 0x3898
    ctx->pc = 0x2265c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14488));
    // 0x2265c4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2265c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265c8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2265C8u;
    {
        const bool branch_taken_0x2265c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265C8u;
            // 0x2265cc: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265c8) {
            ctx->pc = 0x22656Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22656c;
        }
    }
    ctx->pc = 0x2265D0u;
label_2265d0:
    // 0x2265d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2265d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2265d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2265d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2265d8: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x2265d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x2265dc: 0x24e738b8  addiu       $a3, $a3, 0x38B8
    ctx->pc = 0x2265dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14520));
    // 0x2265e0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2265e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265e4: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2265e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2265e8:
    // 0x2265e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2265e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2265ECu;
    SET_GPR_U32(ctx, 31, 0x2265F4u);
    ctx->pc = 0x2265F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2265ECu;
            // 0x2265f0: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265F4u; }
        if (ctx->pc != 0x2265F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265F4u; }
        if (ctx->pc != 0x2265F4u) { return; }
    }
    ctx->pc = 0x2265F4u;
label_2265f4:
    // 0x2265f4: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x2265F4u;
    {
        const bool branch_taken_0x2265f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265F4u;
            // 0x2265f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265f4) {
            ctx->pc = 0x22652Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22652c;
        }
    }
    ctx->pc = 0x2265FCu;
label_2265fc:
    // 0x2265fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2265fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226600: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226604: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x226604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x226608: 0x24e738d0  addiu       $a3, $a3, 0x38D0
    ctx->pc = 0x226608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14544));
    // 0x22660c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22660cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226610: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x226610u;
    {
        const bool branch_taken_0x226610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226610u;
            // 0x226614: 0x24050094  addiu       $a1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226610) {
            ctx->pc = 0x2265E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2265e8;
        }
    }
    ctx->pc = 0x226618u;
label_226618:
    // 0x226618: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22661c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22661cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226620: 0x24843828  addiu       $a0, $a0, 0x3828
    ctx->pc = 0x226620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    // 0x226624: 0x24e738e8  addiu       $a3, $a3, 0x38E8
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14568));
    // 0x226628: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x226628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22662c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x22662Cu;
    {
        const bool branch_taken_0x22662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22662Cu;
            // 0x226630: 0x2405008c  addiu       $a1, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22662c) {
            ctx->pc = 0x2265E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2265e8;
        }
    }
    ctx->pc = 0x226634u;
    // 0x226634: 0x0  nop
    ctx->pc = 0x226634u;
    // NOP
    ctx->pc = 0x226638u;
}
