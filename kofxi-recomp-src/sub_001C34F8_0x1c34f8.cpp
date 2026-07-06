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

// Function: sub_001C34F8
// Address: 0x1c34f8 - 0x1c3590
void sub_001C34F8_0x1c34f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C34F8_0x1c34f8");
#endif

    switch (ctx->pc) {
        case 0x1c351cu: goto label_1c351c;
        case 0x1c3528u: goto label_1c3528;
        case 0x1c3530u: goto label_1c3530;
        case 0x1c3548u: goto label_1c3548;
        case 0x1c355cu: goto label_1c355c;
        default: break;
    }

    ctx->pc = 0x1c34f8u;

    // 0x1c34f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c34fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c34fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3500: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3508: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c350c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3510: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3514: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C3514u;
    SET_GPR_U32(ctx, 31, 0x1C351Cu);
    ctx->pc = 0x1C3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3514u;
    // 0x1c3518: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C3514u, 0x1C351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C351Cu;
label_1c351c:
    // 0x1c351c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3520: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C3520u;
    SET_GPR_U32(ctx, 31, 0x1C3528u);
    ctx->pc = 0x1C3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3520u;
    // 0x1c3524: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C3520u, 0x1C3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3528u;
label_1c3528:
    // 0x1c3528: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3528u;
    {
        const bool branch_taken_0x1c3528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3528) {
            ctx->pc = 0x1C3538u;
            goto label_1c3538;
        }
    }
    ctx->pc = 0x1C3530u;
label_1c3530:
    // 0x1c3530: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C3530u;
    {
        const bool branch_taken_0x1c3530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3530u;
        // 0x1c3534: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3530) {
            ctx->pc = 0x1C3570u;
            goto label_1c3570;
        }
    }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3538u;
    {
        const bool branch_taken_0x1c3538 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3538u;
        // 0x1c353c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3538) {
            ctx->pc = 0x1C356Cu;
            goto label_1c356c;
        }
    }
    ctx->pc = 0x1C3540u;
    // 0x1c3540: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1c3540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c3544: 0x0  nop
    ctx->pc = 0x1c3544u;
    // NOP
label_1c3548:
    // 0x1c3548: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1c3548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c354c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x1c354cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c3554: 0xc070d28  jal         func_1C34A0
    ctx->pc = 0x1C3554u;
    SET_GPR_U32(ctx, 31, 0x1C355Cu);
    ctx->pc = 0x1C3558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3554u;
    // 0x1c3558: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34A0u, 0x1C3554u, 0x1C355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C355Cu;
label_1c355c:
    // 0x1c355c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C355Cu;
    {
        const bool branch_taken_0x1c355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C355Cu;
        // 0x1c3560: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c355c) {
            ctx->pc = 0x1C3530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3530;
        }
    }
    ctx->pc = 0x1C3564u;
    // 0x1c3564: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C3564u;
    {
        const bool branch_taken_0x1c3564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3564u;
        // 0x1c3568: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3564) {
            ctx->pc = 0x1C3548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3548;
        }
    }
    ctx->pc = 0x1C356Cu;
label_1c356c:
    // 0x1c356c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c356cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3570:
    // 0x1c3570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c357c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c357cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3584: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3584u;
        // 0x1c3588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C358Cu;
    // 0x1c358c: 0x0  nop
    ctx->pc = 0x1c358cu;
    // NOP
    if (ctx->pc == 0x1c358cu) { ctx->pc = 0x1c3590u; }
}
