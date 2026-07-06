#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EA6C8
// Address: 0x2ea6c8 - 0x2ea838
void sub_002EA6C8_0x2ea6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA6C8_0x2ea6c8");
#endif

    switch (ctx->pc) {
        case 0x2ea708u: goto label_2ea708;
        case 0x2ea710u: goto label_2ea710;
        case 0x2ea740u: goto label_2ea740;
        case 0x2ea764u: goto label_2ea764;
        case 0x2ea780u: goto label_2ea780;
        case 0x2ea790u: goto label_2ea790;
        case 0x2ea798u: goto label_2ea798;
        case 0x2ea7a0u: goto label_2ea7a0;
        case 0x2ea7c0u: goto label_2ea7c0;
        case 0x2ea7c4u: goto label_2ea7c4;
        case 0x2ea7fcu: goto label_2ea7fc;
        case 0x2ea818u: goto label_2ea818;
        case 0x2ea820u: goto label_2ea820;
        default: break;
    }

    ctx->pc = 0x2ea6c8u;

    // 0x2ea6c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ea6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ea6cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ea6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ea6d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ea6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ea6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ea6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ea6dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ea6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ea6e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ea6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ea6e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ea6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ea6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea6ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ea6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ea6f0: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea6f4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2ea6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2ea6f8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2EA6F8u;
    {
        const bool branch_taken_0x2ea6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6F8u;
        // 0x2ea6fc: 0x8e750138  lw          $s5, 0x138($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6f8) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA700u;
    // 0x2ea700: 0x2416fff0  addiu       $s6, $zero, -0x10
    ctx->pc = 0x2ea700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2ea704: 0x0  nop
    ctx->pc = 0x2ea704u;
    // NOP
label_2ea708:
    // 0x2ea708: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x2EA708u;
    SET_GPR_U32(ctx, 31, 0x2EA710u);
    ctx->pc = 0x2EA70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA708u;
    // 0x2ea70c: 0x8e642644  lw          $a0, 0x2644($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9796)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2EA708u, 0x2EA710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA710u;
label_2ea710:
    // 0x2ea710: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2EA710u;
    {
        const bool branch_taken_0x2ea710 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA710u;
        // 0x2ea714: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea710) {
            ctx->pc = 0x2EA7DCu;
            goto label_2ea7dc;
        }
    }
    ctx->pc = 0x2EA718u;
    // 0x2ea718: 0x8e3000dc  lw          $s0, 0xDC($s1)
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2ea71c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EA71Cu;
    {
        const bool branch_taken_0x2ea71c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea71c) {
            ctx->pc = 0x2EA778u;
            goto label_2ea778;
        }
    }
    ctx->pc = 0x2EA724u;
    // 0x2ea724: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ea728: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA728u;
    {
        const bool branch_taken_0x2ea728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA728u;
        // 0x2ea72c: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea728) {
            ctx->pc = 0x2EA734u;
            goto label_2ea734;
        }
    }
    ctx->pc = 0x2EA730u;
    // 0x2ea730: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x2ea730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_2ea734:
    // 0x2ea734: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ea738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea740:
    // 0x2ea740: 0x266707c4  addiu       $a3, $s3, 0x7C4
    ctx->pc = 0x2ea740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1988));
    // 0x2ea744: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x2ea744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x2ea748: 0x267407c0  addiu       $s4, $s3, 0x7C0
    ctx->pc = 0x2ea748u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1984));
    // 0x2ea74c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ea74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ea750: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x2ea750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x2ea754: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x2ea754u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ea758: 0xae7207c0  sw          $s2, 0x7C0($s3)
    ctx->pc = 0x2ea758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 18));
    // 0x2ea75c: 0xc08ac18  jal         func_22B060
    ctx->pc = 0x2EA75Cu;
    SET_GPR_U32(ctx, 31, 0x2EA764u);
    ctx->pc = 0x2EA760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA75Cu;
    // 0x2ea760: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B060u, 0x2EA75Cu, 0x2EA764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA764u;
label_2ea764:
    // 0x2ea764: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2ea764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2ea768: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA768u;
    {
        const bool branch_taken_0x2ea768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea768) {
            ctx->pc = 0x2EA790u;
            goto label_2ea790;
        }
    }
    ctx->pc = 0x2EA770u;
    // 0x2ea770: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA770u;
    {
        const bool branch_taken_0x2ea770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea770) {
            ctx->pc = 0x2EA788u;
            goto label_2ea788;
        }
    }
    ctx->pc = 0x2EA778u;
label_2ea778:
    // 0x2ea778: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2EA778u;
    SET_GPR_U32(ctx, 31, 0x2EA780u);
    ctx->pc = 0x2EA77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA778u;
    // 0x2ea77c: 0x8e642644  lw          $a0, 0x2644($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9796)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EA778u, 0x2EA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA780u;
label_2ea780:
    // 0x2ea780: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EA780u;
    {
        const bool branch_taken_0x2ea780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA780u;
        // 0x2ea784: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea780) {
            ctx->pc = 0x2EA7DCu;
            goto label_2ea7dc;
        }
    }
    ctx->pc = 0x2EA788u;
label_2ea788:
    // 0x2ea788: 0xc08cd78  jal         func_2335E0
    ctx->pc = 0x2EA788u;
    SET_GPR_U32(ctx, 31, 0x2EA790u);
    ctx->pc = 0x2EA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA788u;
    // 0x2ea78c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2335E0u, 0x2EA788u, 0x2EA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA790u;
label_2ea790:
    // 0x2ea790: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2EA790u;
    SET_GPR_U32(ctx, 31, 0x2EA798u);
    ctx->pc = 0x2EA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA790u;
    // 0x2ea794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2EA790u, 0x2EA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA798u;
label_2ea798:
    // 0x2ea798: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x2EA798u;
    SET_GPR_U32(ctx, 31, 0x2EA7A0u);
    ctx->pc = 0x2EA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA798u;
    // 0x2ea79c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x2EA798u, 0x2EA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7A0u;
label_2ea7a0:
    // 0x2ea7a0: 0x264a0013  addiu       $t2, $s2, 0x13
    ctx->pc = 0x2ea7a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x2ea7a4: 0x8ea5009c  lw          $a1, 0x9C($s5)
    ctx->pc = 0x2ea7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x2ea7a8: 0x8ea900b4  lw          $t1, 0xB4($s5)
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x2ea7ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ea7acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7b0: 0x1565024  and         $t2, $t2, $s6
    ctx->pc = 0x2ea7b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 22));
    // 0x2ea7b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7b8: 0x26660140  addiu       $a2, $s3, 0x140
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x2ea7bc: 0xc098ab4  jal         func_262AD0
label_2ea7c0:
    if (ctx->pc == 0x2EA7C0u) {
        ctx->pc = 0x2EA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7BCu;
        // 0x2ea7c0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7C4u;
        goto label_2ea7c4;
    }
    ctx->pc = 0x2EA7BCu;
    SET_GPR_U32(ctx, 31, 0x2EA7C4u);
    ctx->pc = 0x2EA7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7BCu;
    // 0x2ea7c0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AD0u, 0x2EA7BCu, 0x2EA7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7C4u;
label_2ea7c4:
    // 0x2ea7c4: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x2ea7c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2ea7c8: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2ea7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2ea7cc: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2ea7ccu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2ea7d0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2EA7D0u;
    {
        const bool branch_taken_0x2ea7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7D0u;
        // 0x2ea7d4: 0xfe230068  sd          $v1, 0x68($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7d0) {
            ctx->pc = 0x2EA708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea708;
        }
    }
    ctx->pc = 0x2EA7D8u;
label_2ea7d8:
    // 0x2ea7d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ea7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ea7dc:
    // 0x2ea7dc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ea7dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ea7e0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ea7e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ea7e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ea7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea7e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ea7e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea7ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ea7ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea7f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ea7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea7f8: 0x3e00008  jr          $ra
label_2ea7fc:
    if (ctx->pc == 0x2EA7FCu) {
        ctx->pc = 0x2EA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7F8u;
        // 0x2ea7fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA800u;
        goto label_fallthrough_0x2ea7f8;
    }
    ctx->pc = 0x2EA7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7F8u;
        // 0x2ea7fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ea7f8:
    ctx->pc = 0x2EA800u;
    // 0x2ea800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ea808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ea80c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ea80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea810: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2EA810u;
    SET_GPR_U32(ctx, 31, 0x2EA818u);
    ctx->pc = 0x2EA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA810u;
    // 0x2ea814: 0x8e04263c  lw          $a0, 0x263C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2EA810u, 0x2EA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA818u;
label_2ea818:
    // 0x2ea818: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2EA818u;
    SET_GPR_U32(ctx, 31, 0x2EA820u);
    ctx->pc = 0x2EA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA818u;
    // 0x2ea81c: 0x8e042638  lw          $a0, 0x2638($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2EA818u, 0x2EA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA820u;
label_2ea820:
    // 0x2ea820: 0xf  sync
    ctx->pc = 0x2ea820u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ea824: 0x42000038  ei
    ctx->pc = 0x2ea824u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2ea828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea830: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA830u;
        // 0x2ea834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA838u;
}
