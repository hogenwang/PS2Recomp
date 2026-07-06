#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8508
// Address: 0x2a8508 - 0x2a8818
void sub_002A8508_0x2a8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8508_0x2a8508");
#endif

    switch (ctx->pc) {
        case 0x2a8548u: goto label_2a8548;
        case 0x2a8560u: goto label_2a8560;
        case 0x2a8580u: goto label_2a8580;
        case 0x2a85ccu: goto label_2a85cc;
        case 0x2a85f4u: goto label_2a85f4;
        case 0x2a8600u: goto label_2a8600;
        case 0x2a8620u: goto label_2a8620;
        case 0x2a8628u: goto label_2a8628;
        case 0x2a8638u: goto label_2a8638;
        case 0x2a8648u: goto label_2a8648;
        case 0x2a8658u: goto label_2a8658;
        case 0x2a8674u: goto label_2a8674;
        case 0x2a8688u: goto label_2a8688;
        case 0x2a86b8u: goto label_2a86b8;
        case 0x2a86c8u: goto label_2a86c8;
        case 0x2a86d8u: goto label_2a86d8;
        case 0x2a86e8u: goto label_2a86e8;
        case 0x2a86f8u: goto label_2a86f8;
        case 0x2a8708u: goto label_2a8708;
        case 0x2a8750u: goto label_2a8750;
        case 0x2a87e0u: goto label_2a87e0;
        default: break;
    }

    ctx->pc = 0x2a8508u;

    // 0x2a8508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a850c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a8510: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a8514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a8518: 0x24506a50  addiu       $s0, $v0, 0x6A50
    ctx->pc = 0x2a8518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
    // 0x2a851c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a8520: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2a8520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a8524: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a8524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a8528: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A8528u;
    {
        const bool branch_taken_0x2a8528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8528u;
            // 0x2a852c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8528) {
            ctx->pc = 0x2A8568u;
            goto label_2a8568;
        }
    }
    ctx->pc = 0x2A8530u;
    // 0x2a8530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a8530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8534: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2a8534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2a8538: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a8538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a853c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2a853cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2a8540: 0xc0a63b2  jal         func_298EC8
    ctx->pc = 0x2A8540u;
    SET_GPR_U32(ctx, 31, 0x2A8548u);
    ctx->pc = 0x2A8544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8540u;
            // 0x2a8544: 0xae100018  sw          $s0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298EC8u;
    if (runtime->hasFunction(0x298EC8u)) {
        auto targetFn = runtime->lookupFunction(0x298EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8548u; }
        if (ctx->pc != 0x2A8548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298EC8_0x298ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8548u; }
        if (ctx->pc != 0x2A8548u) { return; }
    }
    ctx->pc = 0x2A8548u;
label_2a8548:
    // 0x2a8548: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2a8548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2a854c: 0x26246a88  addiu       $a0, $s1, 0x6A88
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27272));
    // 0x2a8550: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2a8550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2a8554: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a8554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8558: 0xc0aa272  jal         func_2A89C8
    ctx->pc = 0x2A8558u;
    SET_GPR_U32(ctx, 31, 0x2A8560u);
    ctx->pc = 0x2A855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8558u;
            // 0x2a855c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A89C8u;
    if (runtime->hasFunction(0x2A89C8u)) {
        auto targetFn = runtime->lookupFunction(0x2A89C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8560u; }
        if (ctx->pc != 0x2A8560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A89C8_0x2a89c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8560u; }
        if (ctx->pc != 0x2A8560u) { return; }
    }
    ctx->pc = 0x2A8560u;
label_2a8560:
    // 0x2a8560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8560u;
    {
        const bool branch_taken_0x2a8560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8560u;
            // 0x2a8564: 0x26226a88  addiu       $v0, $s1, 0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8560) {
            ctx->pc = 0x2A856Cu;
            goto label_2a856c;
        }
    }
    ctx->pc = 0x2A8568u;
label_2a8568:
    // 0x2a8568: 0x26226a88  addiu       $v0, $s1, 0x6A88
    ctx->pc = 0x2a8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27272));
label_2a856c:
    // 0x2a856c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8570: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a8570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8574: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a8574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8578: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8578u;
            // 0x2a857c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8580u;
label_2a8580:
    // 0x2a8580: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a8584: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2a8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2a8588: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2a8588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2a858c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a858cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8590: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a8590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a8594: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2a8594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2a8598: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a859c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2a859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2a85a0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2a85a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2a85a4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a85a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a85a8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2a85a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2a85ac: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2a85acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2a85b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a85b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a85b4: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2a85b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2a85b8: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x2a85b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a85bc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A85BCu;
    {
        const bool branch_taken_0x2a85bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85BCu;
            // 0x2a85c0: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85bc) {
            ctx->pc = 0x2A85E0u;
            goto label_2a85e0;
        }
    }
    ctx->pc = 0x2A85C4u;
    // 0x2a85c4: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2A85C4u;
    SET_GPR_U32(ctx, 31, 0x2A85CCu);
    ctx->pc = 0x296DF8u;
    if (runtime->hasFunction(0x296DF8u)) {
        auto targetFn = runtime->lookupFunction(0x296DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85CCu; }
        if (ctx->pc != 0x2A85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DF8_0x296df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85CCu; }
        if (ctx->pc != 0x2A85CCu) { return; }
    }
    ctx->pc = 0x2A85CCu;
label_2a85cc:
    // 0x2a85cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a85ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85d0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A85D0u;
    {
        const bool branch_taken_0x2a85d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A85D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85D0u;
            // 0x2a85d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85d0) {
            ctx->pc = 0x2A85E4u;
            goto label_2a85e4;
        }
    }
    ctx->pc = 0x2A85D8u;
    // 0x2a85d8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2A85D8u;
    {
        const bool branch_taken_0x2a85d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A85DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85D8u;
            // 0x2a85dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85d8) {
            ctx->pc = 0x2A87E4u;
            goto label_2a87e4;
        }
    }
    ctx->pc = 0x2A85E0u;
label_2a85e0:
    // 0x2a85e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a85e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a85e4:
    // 0x2a85e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a85e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a85e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85ec: 0xc0aa206  jal         func_2A8818
    ctx->pc = 0x2A85ECu;
    SET_GPR_U32(ctx, 31, 0x2A85F4u);
    ctx->pc = 0x2A85F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85ECu;
            // 0x2a85f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8818u;
    if (runtime->hasFunction(0x2A8818u)) {
        auto targetFn = runtime->lookupFunction(0x2A8818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85F4u; }
        if (ctx->pc != 0x2A85F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8818_0x2a8818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A85F4u; }
        if (ctx->pc != 0x2A85F4u) { return; }
    }
    ctx->pc = 0x2A85F4u;
label_2a85f4:
    // 0x2a85f4: 0x297902a  slt         $s2, $s4, $s7
    ctx->pc = 0x2a85f4u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2a85f8: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2A85F8u;
    SET_GPR_U32(ctx, 31, 0x2A8600u);
    ctx->pc = 0x2A85FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A85F8u;
            // 0x2a85fc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (runtime->hasFunction(0x296BD8u)) {
        auto targetFn = runtime->lookupFunction(0x296BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8600u; }
        if (ctx->pc != 0x2A8600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296BD8_0x296bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8600u; }
        if (ctx->pc != 0x2A8600u) { return; }
    }
    ctx->pc = 0x2A8600u;
label_2a8600:
    // 0x2a8600: 0x12400072  beqz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x2A8600u;
    {
        const bool branch_taken_0x2a8600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8600u;
            // 0x2a8604: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8600) {
            ctx->pc = 0x2A87CCu;
            goto label_2a87cc;
        }
    }
    ctx->pc = 0x2A8608u;
    // 0x2a8608: 0x1317c3  sra         $v0, $s3, 31
    ctx->pc = 0x2a8608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 31));
    // 0x2a860c: 0x2616001c  addiu       $s6, $s0, 0x1C
    ctx->pc = 0x2a860cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2a8610: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2a8610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2a8614: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2a8614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a8618: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a8618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a861c: 0x0  nop
    ctx->pc = 0x2a861cu;
    // NOP
label_2a8620:
    // 0x2a8620: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2A8620u;
    SET_GPR_U32(ctx, 31, 0x2A8628u);
    ctx->pc = 0x2A8624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8620u;
            // 0x2a8624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8628u; }
        if (ctx->pc != 0x2A8628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8628u; }
        if (ctx->pc != 0x2A8628u) { return; }
    }
    ctx->pc = 0x2A8628u;
label_2a8628:
    // 0x2a8628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a862c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8630: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A8630u;
    SET_GPR_U32(ctx, 31, 0x2A8638u);
    ctx->pc = 0x2A8634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8630u;
            // 0x2a8634: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8638u; }
        if (ctx->pc != 0x2A8638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8638u; }
        if (ctx->pc != 0x2A8638u) { return; }
    }
    ctx->pc = 0x2A8638u;
label_2a8638:
    // 0x2a8638: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2a8638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a863c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8640: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A8640u;
    SET_GPR_U32(ctx, 31, 0x2A8648u);
    ctx->pc = 0x2A8644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8640u;
            // 0x2a8644: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8648u; }
        if (ctx->pc != 0x2A8648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8648u; }
        if (ctx->pc != 0x2A8648u) { return; }
    }
    ctx->pc = 0x2A8648u;
label_2a8648:
    // 0x2a8648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a864c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a864cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8650: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A8650u;
    SET_GPR_U32(ctx, 31, 0x2A8658u);
    ctx->pc = 0x2A8654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8650u;
            // 0x2a8654: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8658u; }
        if (ctx->pc != 0x2A8658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8658u; }
        if (ctx->pc != 0x2A8658u) { return; }
    }
    ctx->pc = 0x2A8658u;
label_2a8658:
    // 0x2a8658: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a865c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8660: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a8660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8664: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a8664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a866c: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2A866Cu;
    SET_GPR_U32(ctx, 31, 0x2A8674u);
    ctx->pc = 0x2A8670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A866Cu;
            // 0x2a8670: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8674u; }
        if (ctx->pc != 0x2A8674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8674u; }
        if (ctx->pc != 0x2A8674u) { return; }
    }
    ctx->pc = 0x2A8674u;
label_2a8674:
    // 0x2a8674: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2A8674u;
    {
        const bool branch_taken_0x2a8674 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8674u;
            // 0x2a8678: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8674) {
            ctx->pc = 0x2A86ACu;
            goto label_2a86ac;
        }
    }
    ctx->pc = 0x2A867Cu;
    // 0x2a867c: 0x5100000c  beql        $t0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2A867Cu;
    {
        const bool branch_taken_0x2a867c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a867c) {
            ctx->pc = 0x2A8680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A867Cu;
            // 0x2a8680: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A86B0u;
            goto label_2a86b0;
        }
    }
    ctx->pc = 0x2A8684u;
    // 0x2a8684: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2a8684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2a8688:
    // 0x2a8688: 0x3d41021  addu        $v0, $fp, $s4
    ctx->pc = 0x2a8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x2a868c: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x2a868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x2a8690: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a8690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a8694: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a8694u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8698: 0x297902a  slt         $s2, $s4, $s7
    ctx->pc = 0x2a8698u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2a869c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A869Cu;
    {
        const bool branch_taken_0x2a869c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A869Cu;
            // 0x2a86a0: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a869c) {
            ctx->pc = 0x2A86ACu;
            goto label_2a86ac;
        }
    }
    ctx->pc = 0x2A86A4u;
    // 0x2a86a4: 0x1500fff8  bnez        $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A86A4u;
    {
        const bool branch_taken_0x2a86a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A86A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86A4u;
            // 0x2a86a8: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86a4) {
            ctx->pc = 0x2A8688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8688;
        }
    }
    ctx->pc = 0x2A86ACu;
label_2a86ac:
    // 0x2a86ac: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a86acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a86b0:
    // 0x2a86b0: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2A86B0u;
    SET_GPR_U32(ctx, 31, 0x2A86B8u);
    ctx->pc = 0x2A86B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86B0u;
            // 0x2a86b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86B8u; }
        if (ctx->pc != 0x2A86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86B8u; }
        if (ctx->pc != 0x2A86B8u) { return; }
    }
    ctx->pc = 0x2A86B8u;
label_2a86b8:
    // 0x2a86b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a86b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a86bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86c0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A86C0u;
    SET_GPR_U32(ctx, 31, 0x2A86C8u);
    ctx->pc = 0x2A86C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86C0u;
            // 0x2a86c4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86C8u; }
        if (ctx->pc != 0x2A86C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86C8u; }
        if (ctx->pc != 0x2A86C8u) { return; }
    }
    ctx->pc = 0x2A86C8u;
label_2a86c8:
    // 0x2a86c8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2a86c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a86cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a86ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86d0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A86D0u;
    SET_GPR_U32(ctx, 31, 0x2A86D8u);
    ctx->pc = 0x2A86D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86D0u;
            // 0x2a86d4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86D8u; }
        if (ctx->pc != 0x2A86D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86D8u; }
        if (ctx->pc != 0x2A86D8u) { return; }
    }
    ctx->pc = 0x2A86D8u;
label_2a86d8:
    // 0x2a86d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a86d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a86dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86e0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A86E0u;
    SET_GPR_U32(ctx, 31, 0x2A86E8u);
    ctx->pc = 0x2A86E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86E0u;
            // 0x2a86e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86E8u; }
        if (ctx->pc != 0x2A86E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86E8u; }
        if (ctx->pc != 0x2A86E8u) { return; }
    }
    ctx->pc = 0x2A86E8u;
label_2a86e8:
    // 0x2a86e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a86e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a86ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86f0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A86F0u;
    SET_GPR_U32(ctx, 31, 0x2A86F8u);
    ctx->pc = 0x2A86F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A86F0u;
            // 0x2a86f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86F8u; }
        if (ctx->pc != 0x2A86F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A86F8u; }
        if (ctx->pc != 0x2A86F8u) { return; }
    }
    ctx->pc = 0x2A86F8u;
label_2a86f8:
    // 0x2a86f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a86f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a86fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8700: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2A8700u;
    SET_GPR_U32(ctx, 31, 0x2A8708u);
    ctx->pc = 0x2A8704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8700u;
            // 0x2a8704: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8708u; }
        if (ctx->pc != 0x2A8708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8708u; }
        if (ctx->pc != 0x2A8708u) { return; }
    }
    ctx->pc = 0x2A8708u;
label_2a8708:
    // 0x2a8708: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x2a8708u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a870c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2a870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a8710: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2a8710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a8714: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2a8714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a8718: 0x26d2823  subu        $a1, $s3, $t5
    ctx->pc = 0x2a8718u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x2a871c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A871Cu;
    {
        const bool branch_taken_0x2a871c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a871c) {
            ctx->pc = 0x2A8720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A871Cu;
            // 0x2a8720: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8724u;
            goto label_2a8724;
        }
    }
    ctx->pc = 0x2A8724u;
label_2a8724:
    // 0x2a8724: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2a8724u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2a8728: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2a8728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a872c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2a872cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2a8730: 0x5810  mfhi        $t3
    ctx->pc = 0x2a8730u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x2a8734: 0x1651021  addu        $v0, $t3, $a1
    ctx->pc = 0x2a8734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x2a8738: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2a8738u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a873c: 0x6010  mfhi        $t4
    ctx->pc = 0x2a873cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x2a8740: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A8740u;
    {
        const bool branch_taken_0x2a8740 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2A8744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8740u;
            // 0x2a8744: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8740) {
            ctx->pc = 0x2A87C4u;
            goto label_2a87c4;
        }
    }
    ctx->pc = 0x2A8748u;
    // 0x2a8748: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a874c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a874cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8750:
    // 0x2a8750: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x2a8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2a8754: 0x1881821  addu        $v1, $t4, $t0
    ctx->pc = 0x2a8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x2a8758: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x2a8758u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a875c: 0x7069001a  div1        $zero, $v1, $t1
    ctx->pc = 0x2a875cu;
    { int32_t divisor = GPR_S32(ctx, 9); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2a8760: 0x512a0001  beql        $t1, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8760u;
    {
        const bool branch_taken_0x2a8760 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2a8760) {
            ctx->pc = 0x2A8764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8760u;
            // 0x2a8764: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8768u;
            goto label_2a8768;
        }
    }
    ctx->pc = 0x2A8768u;
label_2a8768:
    // 0x2a8768: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x2a8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x2a876c: 0x26d2023  subu        $a0, $s3, $t5
    ctx->pc = 0x2a876cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x2a8770: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a8770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8774: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2a8774u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2a8778: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x2a8778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2a877c: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x2a877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a8780: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a8780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a8784: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x2a8784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a8788: 0x2810  mfhi        $a1
    ctx->pc = 0x2a8788u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2a878c: 0x70003810  mfhi1       $a3
    ctx->pc = 0x2a878cu;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x2a8790: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2a8790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a8794: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2a8794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a8798: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2a8798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2a879c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2a879cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a87a0: 0x512a0001  beql        $t1, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A87A0u;
    {
        const bool branch_taken_0x2a87a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2a87a0) {
            ctx->pc = 0x2A87A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87A0u;
            // 0x2a87a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A87A8u;
            goto label_2a87a8;
        }
    }
    ctx->pc = 0x2A87A8u;
label_2a87a8:
    // 0x2a87a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a87ac: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2a87acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a87b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a87b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a87b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a87b8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2a87b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2a87bc: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2A87BCu;
    {
        const bool branch_taken_0x2a87bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A87C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87BCu;
            // 0x2a87c0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87bc) {
            ctx->pc = 0x2A8750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8750;
        }
    }
    ctx->pc = 0x2A87C4u;
label_2a87c4:
    // 0x2a87c4: 0x5640ff96  bnel        $s2, $zero, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2A87C4u;
    {
        const bool branch_taken_0x2a87c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a87c4) {
            ctx->pc = 0x2A87C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87C4u;
            // 0x2a87c8: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8620;
        }
    }
    ctx->pc = 0x2A87CCu;
label_2a87cc:
    // 0x2a87cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2a87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a87d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A87D0u;
    {
        const bool branch_taken_0x2a87d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A87D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87D0u;
            // 0x2a87d4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87d0) {
            ctx->pc = 0x2A87E4u;
            goto label_2a87e4;
        }
    }
    ctx->pc = 0x2A87D8u;
    // 0x2a87d8: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2A87D8u;
    SET_GPR_U32(ctx, 31, 0x2A87E0u);
    ctx->pc = 0x2A87DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A87D8u;
            // 0x2a87dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A87E0u; }
        if (ctx->pc != 0x2A87E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A87E0u; }
        if (ctx->pc != 0x2A87E0u) { return; }
    }
    ctx->pc = 0x2A87E0u;
label_2a87e0:
    // 0x2a87e0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2a87e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a87e4:
    // 0x2a87e4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2a87e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a87e8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2a87e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a87ec: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2a87ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a87f0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2a87f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a87f4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2a87f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a87f8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a87f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a87fc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2a87fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8800: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a8800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8804: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2a8804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8808: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a8808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a880c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A880Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A880Cu;
            // 0x2a8810: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8814u;
    // 0x2a8814: 0x0  nop
    ctx->pc = 0x2a8814u;
    // NOP
    ctx->pc = 0x2a8818u;
}
