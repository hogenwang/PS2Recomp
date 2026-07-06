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

// Function: sub_002A3520
// Address: 0x2a3520 - 0x2a3598
void sub_002A3520_0x2a3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3520_0x2a3520");
#endif

    switch (ctx->pc) {
        case 0x2a3520u: goto label_2a3520;
        case 0x2a3524u: goto label_2a3524;
        case 0x2a3528u: goto label_2a3528;
        case 0x2a352cu: goto label_2a352c;
        case 0x2a3530u: goto label_2a3530;
        case 0x2a3534u: goto label_2a3534;
        case 0x2a3538u: goto label_2a3538;
        case 0x2a353cu: goto label_2a353c;
        case 0x2a3540u: goto label_2a3540;
        case 0x2a3544u: goto label_2a3544;
        case 0x2a3548u: goto label_2a3548;
        case 0x2a354cu: goto label_2a354c;
        case 0x2a3550u: goto label_2a3550;
        case 0x2a3554u: goto label_2a3554;
        case 0x2a3558u: goto label_2a3558;
        case 0x2a355cu: goto label_2a355c;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3564u: goto label_2a3564;
        case 0x2a3568u: goto label_2a3568;
        case 0x2a356cu: goto label_2a356c;
        case 0x2a3570u: goto label_2a3570;
        case 0x2a3574u: goto label_2a3574;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a357cu: goto label_2a357c;
        case 0x2a3580u: goto label_2a3580;
        case 0x2a3584u: goto label_2a3584;
        case 0x2a3588u: goto label_2a3588;
        case 0x2a358cu: goto label_2a358c;
        case 0x2a3590u: goto label_2a3590;
        case 0x2a3594u: goto label_2a3594;
        default: break;
    }

    ctx->pc = 0x2a3520u;

label_2a3520:
    // 0x2a3520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a3524:
    // 0x2a3524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a3528:
    // 0x2a3528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a352c:
    // 0x2a352c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2a3530:
    if (ctx->pc == 0x2A3530u) {
        ctx->pc = 0x2A3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A352Cu;
        // 0x2a3530: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3534u;
        goto label_2a3534;
    }
    ctx->pc = 0x2A352Cu;
    {
        const bool branch_taken_0x2a352c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A352Cu;
        // 0x2a3530: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a352c) {
            ctx->pc = 0x2A3560u;
            goto label_2a3560;
        }
    }
    ctx->pc = 0x2A3534u;
label_2a3534:
    // 0x2a3534: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a3538:
    // 0x2a3538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a353c:
    if (ctx->pc == 0x2A353Cu) {
        ctx->pc = 0x2A353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3538u;
        // 0x2a353c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3540u;
        goto label_2a3540;
    }
    ctx->pc = 0x2A3538u;
    {
        const bool branch_taken_0x2a3538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3538u;
        // 0x2a353c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3538) {
            ctx->pc = 0x2A3548u;
            goto label_2a3548;
        }
    }
    ctx->pc = 0x2A3540u;
label_2a3540:
    // 0x2a3540: 0x40f809  jalr        $v0
label_2a3544:
    if (ctx->pc == 0x2A3544u) {
        ctx->pc = 0x2A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3540u;
        // 0x2a3544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3548u;
        goto label_2a3548;
    }
    ctx->pc = 0x2A3540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3548u);
        ctx->pc = 0x2A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3540u;
        // 0x2a3544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3540u, 0x2A3548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3548u;
label_2a3548:
    // 0x2a3548: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a354c:
    // 0x2a354c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a3550:
    // 0x2a3550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a3554:
    if (ctx->pc == 0x2A3554u) {
        ctx->pc = 0x2A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3550u;
        // 0x2a3554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3558u;
        goto label_2a3558;
    }
    ctx->pc = 0x2A3550u;
    {
        const bool branch_taken_0x2a3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3550u;
        // 0x2a3554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3550) {
            ctx->pc = 0x2A3564u;
            goto label_2a3564;
        }
    }
    ctx->pc = 0x2A3558u;
label_2a3558:
    // 0x2a3558: 0xc0a8c0a  jal         func_2A3028
label_2a355c:
    if (ctx->pc == 0x2A355Cu) {
        ctx->pc = 0x2A355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3558u;
        // 0x2a355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3560u;
        goto label_2a3560;
    }
    ctx->pc = 0x2A3558u;
    SET_GPR_U32(ctx, 31, 0x2A3560u);
    ctx->pc = 0x2A355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3558u;
    // 0x2a355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A3558u, 0x2A3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3560u;
label_2a3560:
    // 0x2a3560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3564:
    // 0x2a3564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3568:
    // 0x2a3568: 0x3e00008  jr          $ra
label_2a356c:
    if (ctx->pc == 0x2A356Cu) {
        ctx->pc = 0x2A356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3568u;
        // 0x2a356c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3570u;
        goto label_2a3570;
    }
    ctx->pc = 0x2A3568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3568u;
        // 0x2a356c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3570u;
label_2a3570:
    // 0x2a3570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3574:
    // 0x2a3574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a3578:
    // 0x2a3578: 0xc0a8d8a  jal         func_2A3628
label_2a357c:
    if (ctx->pc == 0x2A357Cu) {
        ctx->pc = 0x2A3580u;
        goto label_2a3580;
    }
    ctx->pc = 0x2A3578u;
    SET_GPR_U32(ctx, 31, 0x2A3580u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2A3578u, 0x2A3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3580u;
label_2a3580:
    // 0x2a3580: 0xc0a8d48  jal         func_2A3520
label_2a3584:
    if (ctx->pc == 0x2A3584u) {
        ctx->pc = 0x2A3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3580u;
        // 0x2a3584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3588u;
        goto label_2a3588;
    }
    ctx->pc = 0x2A3580u;
    SET_GPR_U32(ctx, 31, 0x2A3588u);
    ctx->pc = 0x2A3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3580u;
    // 0x2a3584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3520u;
    goto label_2a3520;
    ctx->pc = 0x2A3588u;
label_2a3588:
    // 0x2a3588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a358c:
    // 0x2a358c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a358cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3590:
    // 0x2a3590: 0x3e00008  jr          $ra
label_2a3594:
    if (ctx->pc == 0x2A3594u) {
        ctx->pc = 0x2A3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3590u;
        // 0x2a3594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3598u;
        goto label_fallthrough_0x2a3590;
    }
    ctx->pc = 0x2A3590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3590u;
        // 0x2a3594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3590:
    ctx->pc = 0x2A3598u;
}
