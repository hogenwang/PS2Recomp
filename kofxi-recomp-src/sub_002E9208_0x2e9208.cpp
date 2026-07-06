#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9208
// Address: 0x2e9208 - 0x2e9378
void sub_002E9208_0x2e9208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9208_0x2e9208");
#endif

    switch (ctx->pc) {
        case 0x2e922cu: goto label_2e922c;
        case 0x2e9240u: goto label_2e9240;
        case 0x2e9250u: goto label_2e9250;
        case 0x2e925cu: goto label_2e925c;
        case 0x2e9264u: goto label_2e9264;
        case 0x2e926cu: goto label_2e926c;
        case 0x2e9294u: goto label_2e9294;
        case 0x2e92a8u: goto label_2e92a8;
        case 0x2e92b8u: goto label_2e92b8;
        case 0x2e92ccu: goto label_2e92cc;
        case 0x2e92e8u: goto label_2e92e8;
        case 0x2e9308u: goto label_2e9308;
        case 0x2e9310u: goto label_2e9310;
        case 0x2e9318u: goto label_2e9318;
        case 0x2e9328u: goto label_2e9328;
        case 0x2e9330u: goto label_2e9330;
        case 0x2e9340u: goto label_2e9340;
        case 0x2e9358u: goto label_2e9358;
        case 0x2e9360u: goto label_2e9360;
        default: break;
    }

    ctx->pc = 0x2e9208u;

    // 0x2e9208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e9208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e920c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e9210: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e9210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e9214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9218: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e9218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e921c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9220: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e9220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e9224: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x2E9224u;
    SET_GPR_U32(ctx, 31, 0x2E922Cu);
    ctx->pc = 0x2E9228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9224u;
            // 0x2e9228: 0x8e337cc0  lw          $s3, 0x7CC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31936)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (runtime->hasFunction(0x239E70u)) {
        auto targetFn = runtime->lookupFunction(0x239E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E922Cu; }
        if (ctx->pc != 0x2E922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239E70_0x239e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E922Cu; }
        if (ctx->pc != 0x2E922Cu) { return; }
    }
    ctx->pc = 0x2E922Cu;
label_2e922c:
    // 0x2e922c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E922Cu;
    {
        const bool branch_taken_0x2e922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E922Cu;
            // 0x2e9230: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e922c) {
            ctx->pc = 0x2E92D0u;
            goto label_2e92d0;
        }
    }
    ctx->pc = 0x2E9234u;
    // 0x2e9234: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2e9234u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2e9238: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E9238u;
    {
        const bool branch_taken_0x2e9238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9238u;
            // 0x2e923c: 0x3652fff0  ori         $s2, $s2, 0xFFF0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65520);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9238) {
            ctx->pc = 0x2E92A0u;
            goto label_2e92a0;
        }
    }
    ctx->pc = 0x2E9240u;
label_2e9240:
    // 0x2e9240: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9240u;
    {
        const bool branch_taken_0x2e9240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9240) {
            ctx->pc = 0x2E9244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9240u;
            // 0x2e9244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9254u;
            goto label_2e9254;
        }
    }
    ctx->pc = 0x2E9248u;
    // 0x2e9248: 0xc08cd78  jal         func_2335E0
    ctx->pc = 0x2E9248u;
    SET_GPR_U32(ctx, 31, 0x2E9250u);
    ctx->pc = 0x2E924Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9248u;
            // 0x2e924c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (runtime->hasFunction(0x2335E0u)) {
        auto targetFn = runtime->lookupFunction(0x2335E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9250u; }
        if (ctx->pc != 0x2E9250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002335E0_0x2335e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9250u; }
        if (ctx->pc != 0x2E9250u) { return; }
    }
    ctx->pc = 0x2E9250u;
label_2e9250:
    // 0x2e9250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9254:
    // 0x2e9254: 0xc0ba708  jal         func_2E9C20
    ctx->pc = 0x2E9254u;
    SET_GPR_U32(ctx, 31, 0x2E925Cu);
    ctx->pc = 0x2E9258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9254u;
            // 0x2e9258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C20u;
    if (runtime->hasFunction(0x2E9C20u)) {
        auto targetFn = runtime->lookupFunction(0x2E9C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E925Cu; }
        if (ctx->pc != 0x2E925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9C20_0x2e9c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E925Cu; }
        if (ctx->pc != 0x2E925Cu) { return; }
    }
    ctx->pc = 0x2E925Cu;
label_2e925c:
    // 0x2e925c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2E925Cu;
    SET_GPR_U32(ctx, 31, 0x2E9264u);
    ctx->pc = 0x2E9260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E925Cu;
            // 0x2e9260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9264u; }
        if (ctx->pc != 0x2E9264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9264u; }
        if (ctx->pc != 0x2E9264u) { return; }
    }
    ctx->pc = 0x2E9264u;
label_2e9264:
    // 0x2e9264: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x2E9264u;
    SET_GPR_U32(ctx, 31, 0x2E926Cu);
    ctx->pc = 0x2E9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9264u;
            // 0x2e9268: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E926Cu; }
        if (ctx->pc != 0x2E926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E926Cu; }
        if (ctx->pc != 0x2E926Cu) { return; }
    }
    ctx->pc = 0x2E926Cu;
label_2e926c:
    // 0x2e926c: 0x8e2a6480  lw          $t2, 0x6480($s1)
    ctx->pc = 0x2e926cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25728)));
    // 0x2e9270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9274: 0x8e65009c  lw          $a1, 0x9C($s3)
    ctx->pc = 0x2e9274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x2e9278: 0x26267c80  addiu       $a2, $s1, 0x7C80
    ctx->pc = 0x2e9278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 31872));
    // 0x2e927c: 0x254a0013  addiu       $t2, $t2, 0x13
    ctx->pc = 0x2e927cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19));
    // 0x2e9280: 0x8e6900b4  lw          $t1, 0xB4($s3)
    ctx->pc = 0x2e9280u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2e9284: 0x1525024  and         $t2, $t2, $s2
    ctx->pc = 0x2e9284u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 18));
    // 0x2e9288: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e928c: 0xc098ab4  jal         func_262AD0
    ctx->pc = 0x2E928Cu;
    SET_GPR_U32(ctx, 31, 0x2E9294u);
    ctx->pc = 0x2E9290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E928Cu;
            // 0x2e9290: 0x26286480  addiu       $t0, $s1, 0x6480 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 25728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262AD0u;
    if (runtime->hasFunction(0x262AD0u)) {
        auto targetFn = runtime->lookupFunction(0x262AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9294u; }
        if (ctx->pc != 0x2E9294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262AD0_0x262ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9294u; }
        if (ctx->pc != 0x2E9294u) { return; }
    }
    ctx->pc = 0x2E9294u;
label_2e9294:
    // 0x2e9294: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x2e9294u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2e9298: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2e9298u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2e929c: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x2e929cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
label_2e92a0:
    // 0x2e92a0: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x2E92A0u;
    SET_GPR_U32(ctx, 31, 0x2E92A8u);
    ctx->pc = 0x2E92A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92A0u;
            // 0x2e92a4: 0x8e247d58  lw          $a0, 0x7D58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92A8u; }
        if (ctx->pc != 0x2E92A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92A8u; }
        if (ctx->pc != 0x2E92A8u) { return; }
    }
    ctx->pc = 0x2E92A8u;
label_2e92a8:
    // 0x2e92a8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E92A8u;
    {
        const bool branch_taken_0x2e92a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E92ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92A8u;
            // 0x2e92ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92a8) {
            ctx->pc = 0x2E92D0u;
            goto label_2e92d0;
        }
    }
    ctx->pc = 0x2E92B0u;
    // 0x2e92b0: 0xc08e7b4  jal         func_239ED0
    ctx->pc = 0x2E92B0u;
    SET_GPR_U32(ctx, 31, 0x2E92B8u);
    ctx->pc = 0x2E92B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92B0u;
            // 0x2e92b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239ED0u;
    if (runtime->hasFunction(0x239ED0u)) {
        auto targetFn = runtime->lookupFunction(0x239ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92B8u; }
        if (ctx->pc != 0x2E92B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239ED0_0x239ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92B8u; }
        if (ctx->pc != 0x2E92B8u) { return; }
    }
    ctx->pc = 0x2E92B8u;
label_2e92b8:
    // 0x2e92b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e92b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92bc: 0x5600ffe0  bnel        $s0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2E92BCu;
    {
        const bool branch_taken_0x2e92bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e92bc) {
            ctx->pc = 0x2E92C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92BCu;
            // 0x2e92c0: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9240;
        }
    }
    ctx->pc = 0x2E92C4u;
    // 0x2e92c4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2E92C4u;
    SET_GPR_U32(ctx, 31, 0x2E92CCu);
    ctx->pc = 0x2E92C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92C4u;
            // 0x2e92c8: 0x8e247d58  lw          $a0, 0x7D58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92CCu; }
        if (ctx->pc != 0x2E92CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92CCu; }
        if (ctx->pc != 0x2E92CCu) { return; }
    }
    ctx->pc = 0x2E92CCu;
label_2e92cc:
    // 0x2e92cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e92ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e92d0:
    // 0x2e92d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e92d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e92d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e92d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e92d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e92d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e92dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e92dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e92e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E92E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E92E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92E0u;
            // 0x2e92e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E92E8u;
label_2e92e8:
    // 0x2e92e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e92e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e92ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e92ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e92f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e92f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e92f4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2e92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e92f8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E92F8u;
    {
        const bool branch_taken_0x2e92f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E92FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92F8u;
            // 0x2e92fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92f8) {
            ctx->pc = 0x2E9320u;
            goto label_2e9320;
        }
    }
    ctx->pc = 0x2E9300u;
    // 0x2e9300: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2E9300u;
    SET_GPR_U32(ctx, 31, 0x2E9308u);
    ctx->pc = 0x2E9304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9300u;
            // 0x2e9304: 0x8e047d58  lw          $a0, 0x7D58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9308u; }
        if (ctx->pc != 0x2E9308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9308u; }
        if (ctx->pc != 0x2E9308u) { return; }
    }
    ctx->pc = 0x2E9308u;
label_2e9308:
    // 0x2e9308: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2E9308u;
    SET_GPR_U32(ctx, 31, 0x2E9310u);
    ctx->pc = 0x2E930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9308u;
            // 0x2e930c: 0x8e047d50  lw          $a0, 0x7D50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9310u; }
        if (ctx->pc != 0x2E9310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9310u; }
        if (ctx->pc != 0x2E9310u) { return; }
    }
    ctx->pc = 0x2E9310u;
label_2e9310:
    // 0x2e9310: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2E9310u;
    SET_GPR_U32(ctx, 31, 0x2E9318u);
    ctx->pc = 0x2E9314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9310u;
            // 0x2e9314: 0x8e047d48  lw          $a0, 0x7D48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9318u; }
        if (ctx->pc != 0x2E9318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9318u; }
        if (ctx->pc != 0x2E9318u) { return; }
    }
    ctx->pc = 0x2E9318u;
label_2e9318:
    // 0x2e9318: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9318u;
    {
        const bool branch_taken_0x2e9318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9318) {
            ctx->pc = 0x2E9328u;
            goto label_2e9328;
        }
    }
    ctx->pc = 0x2E9320u;
label_2e9320:
    // 0x2e9320: 0xc043330  jal         func_10CCC0
    ctx->pc = 0x2E9320u;
    SET_GPR_U32(ctx, 31, 0x2E9328u);
    ctx->pc = 0x2E9324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9320u;
            // 0x2e9324: 0x8e047d58  lw          $a0, 0x7D58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCC0u;
    if (runtime->hasFunction(0x10CCC0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9328u; }
        if (ctx->pc != 0x2E9328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCC0_0x10ccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9328u; }
        if (ctx->pc != 0x2E9328u) { return; }
    }
    ctx->pc = 0x2E9328u;
label_2e9328:
    // 0x2e9328: 0xf  sync
    ctx->pc = 0x2e9328u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2e932c: 0x42000038  ei
    ctx->pc = 0x2e932cu;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
label_2e9330:
    // 0x2e9330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9338: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9338u;
            // 0x2e933c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9340u;
label_2e9340:
    // 0x2e9340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e934c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e934cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9350: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2E9350u;
    SET_GPR_U32(ctx, 31, 0x2E9358u);
    ctx->pc = 0x2E9354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9350u;
            // 0x2e9354: 0x8e047d4c  lw          $a0, 0x7D4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9358u; }
        if (ctx->pc != 0x2E9358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9358u; }
        if (ctx->pc != 0x2E9358u) { return; }
    }
    ctx->pc = 0x2E9358u;
label_2e9358:
    // 0x2e9358: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2E9358u;
    SET_GPR_U32(ctx, 31, 0x2E9360u);
    ctx->pc = 0x2E935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9358u;
            // 0x2e935c: 0x8e047d48  lw          $a0, 0x7D48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9360u; }
        if (ctx->pc != 0x2E9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9360u; }
        if (ctx->pc != 0x2E9360u) { return; }
    }
    ctx->pc = 0x2E9360u;
label_2e9360:
    // 0x2e9360: 0xf  sync
    ctx->pc = 0x2e9360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2e9364: 0x42000038  ei
    ctx->pc = 0x2e9364u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x2e9368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e936c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e936cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9370: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9370u;
            // 0x2e9374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9378u;
    ctx->pc = 0x2e9378u;
}
