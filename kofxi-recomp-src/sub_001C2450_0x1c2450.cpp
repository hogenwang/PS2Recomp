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

// Function: sub_001C2450
// Address: 0x1c2450 - 0x1c2540
void sub_001C2450_0x1c2450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2450_0x1c2450");
#endif

    switch (ctx->pc) {
        case 0x1c2490u: goto label_1c2490;
        case 0x1c249cu: goto label_1c249c;
        case 0x1c24acu: goto label_1c24ac;
        case 0x1c24b0u: goto label_1c24b0;
        case 0x1c24e8u: goto label_1c24e8;
        default: break;
    }

    ctx->pc = 0x1c2450u;

    // 0x1c2450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2454: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c2458: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c2458u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1c245c: 0x8e62d08c  lw          $v0, -0x2F74($s3)
    ctx->pc = 0x1c245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955148)));
    // 0x1c2460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2468: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c246c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c2470: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C2470u;
    {
        const bool branch_taken_0x1c2470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2470u;
        // 0x1c2474: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2470) {
            ctx->pc = 0x1C2510u;
            goto label_1c2510;
        }
    }
    ctx->pc = 0x1C2478u;
    // 0x1c2478: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c2478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c247c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1c247cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1c2480: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x1c2480u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x1c2484: 0x2611d910  addiu       $s1, $s0, -0x26F0
    ctx->pc = 0x1c2484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957328));
    // 0x1c2488: 0x8e45d074  lw          $a1, -0x2F8C($s2)
    ctx->pc = 0x1c2488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955124)));
    // 0x1c248c: 0x0  nop
    ctx->pc = 0x1c248cu;
    // NOP
label_1c2490:
    // 0x1c2490: 0x2604d910  addiu       $a0, $s0, -0x26F0
    ctx->pc = 0x1c2490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957328));
    // 0x1c2494: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x1C2494u;
    SET_GPR_U32(ctx, 31, 0x1C249Cu);
    ctx->pc = 0x1C2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2494u;
    // 0x1c2498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x1C2494u, 0x1C249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C249Cu;
label_1c249c:
    // 0x1c249c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C249Cu;
    {
        const bool branch_taken_0x1c249c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c249c) {
            ctx->pc = 0x1C24A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C249Cu;
            // 0x1c24a0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C24D0u;
            goto label_1c24d0;
        }
    }
    ctx->pc = 0x1C24A4u;
    // 0x1c24a4: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C24A4u;
    SET_GPR_U32(ctx, 31, 0x1C24ACu);
    ctx->pc = 0x1C24A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24A4u;
    // 0x1c24a8: 0x26849c88  addiu       $a0, $s4, -0x6378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C24A4u, 0x1C24ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24ACu;
label_1c24ac:
    // 0x1c24ac: 0x0  nop
    ctx->pc = 0x1c24acu;
    // NOP
label_1c24b0:
    // 0x1c24b0: 0x0  nop
    ctx->pc = 0x1c24b0u;
    // NOP
    // 0x1c24b4: 0x0  nop
    ctx->pc = 0x1c24b4u;
    // NOP
    // 0x1c24b8: 0x0  nop
    ctx->pc = 0x1c24b8u;
    // NOP
    // 0x1c24bc: 0x0  nop
    ctx->pc = 0x1c24bcu;
    // NOP
    // 0x1c24c0: 0x0  nop
    ctx->pc = 0x1c24c0u;
    // NOP
    // 0x1c24c4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C24C4u;
    {
        const bool branch_taken_0x1c24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24c4) {
            ctx->pc = 0x1C24B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c24b0;
        }
    }
    ctx->pc = 0x1C24CCu;
    // 0x1c24cc: 0x0  nop
    ctx->pc = 0x1c24ccu;
    // NOP
label_1c24d0:
    // 0x1c24d0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C24D0u;
    {
        const bool branch_taken_0x1c24d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24D0u;
        // 0x1c24d4: 0x2663d08c  addiu       $v1, $s3, -0x2F74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24d0) {
            ctx->pc = 0x1C2514u;
            goto label_1c2514;
        }
    }
    ctx->pc = 0x1C24D8u;
    // 0x1c24d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c24dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c24dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c24e0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1c24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1c24e4: 0x0  nop
    ctx->pc = 0x1c24e4u;
    // NOP
label_1c24e8:
    // 0x1c24e8: 0x0  nop
    ctx->pc = 0x1c24e8u;
    // NOP
    // 0x1c24ec: 0x0  nop
    ctx->pc = 0x1c24ecu;
    // NOP
    // 0x1c24f0: 0x0  nop
    ctx->pc = 0x1c24f0u;
    // NOP
    // 0x1c24f4: 0x0  nop
    ctx->pc = 0x1c24f4u;
    // NOP
    // 0x1c24f8: 0x0  nop
    ctx->pc = 0x1c24f8u;
    // NOP
    // 0x1c24fc: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C24FCu;
    {
        const bool branch_taken_0x1c24fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c24fc) {
            ctx->pc = 0x1C2500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C24FCu;
            // 0x1c2500: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C24E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c24e8;
        }
    }
    ctx->pc = 0x1C2504u;
    // 0x1c2504: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C2504u;
    {
        const bool branch_taken_0x1c2504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2504u;
        // 0x1c2508: 0x8e45d074  lw          $a1, -0x2F8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2504) {
            ctx->pc = 0x1C2490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2490;
        }
    }
    ctx->pc = 0x1C250Cu;
    // 0x1c250c: 0x0  nop
    ctx->pc = 0x1c250cu;
    // NOP
label_1c2510:
    // 0x1c2510: 0x2663d08c  addiu       $v1, $s3, -0x2F74
    ctx->pc = 0x1c2510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955148));
label_1c2514:
    // 0x1c2514: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c251c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c251cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c252c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c252cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2530: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c2530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2534: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c2534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c2538: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2538u;
        // 0x1c253c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2540u;
}
