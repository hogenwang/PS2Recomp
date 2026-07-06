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

// Function: sub_002E84F0
// Address: 0x2e84f0 - 0x2e8568
void sub_002E84F0_0x2e84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E84F0_0x2e84f0");
#endif

    switch (ctx->pc) {
        case 0x2e8510u: goto label_2e8510;
        case 0x2e8538u: goto label_2e8538;
        case 0x2e8540u: goto label_2e8540;
        default: break;
    }

    ctx->pc = 0x2e84f0u;

    // 0x2e84f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e84f4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2e84f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2e84f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e84f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e84fc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2e8500: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e8500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e8504: 0x8e24ea10  lw          $a0, -0x15F0($s1)
    ctx->pc = 0x2e8504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
    // 0x2e8508: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x2E8508u;
    SET_GPR_U32(ctx, 31, 0x2E8510u);
    ctx->pc = 0x2E850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8508u;
    // 0x2e850c: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x2E8508u, 0x2E8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8510u;
label_2e8510:
    // 0x2e8510: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8510u;
    {
        const bool branch_taken_0x2e8510 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8510u;
        // 0x2e8514: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8510) {
            ctx->pc = 0x2E8520u;
            goto label_2e8520;
        }
    }
    ctx->pc = 0x2E8518u;
    // 0x2e8518: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E8518u;
    {
        const bool branch_taken_0x2e8518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8518u;
        // 0x2e851c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8518) {
            ctx->pc = 0x2E8554u;
            goto label_2e8554;
        }
    }
    ctx->pc = 0x2E8520u;
label_2e8520:
    // 0x2e8520: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8520u;
    {
        const bool branch_taken_0x2e8520 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e8520) {
            ctx->pc = 0x2E8524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8520u;
            // 0x2e8524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8554u;
            goto label_2e8554;
        }
    }
    ctx->pc = 0x2E8528u;
    // 0x2e8528: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8528u;
    {
        const bool branch_taken_0x2e8528 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8528u;
        // 0x2e852c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8528) {
            ctx->pc = 0x2E8550u;
            goto label_2e8550;
        }
    }
    ctx->pc = 0x2E8530u;
    // 0x2e8530: 0x8e24ea10  lw          $a0, -0x15F0($s1)
    ctx->pc = 0x2e8530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
    // 0x2e8534: 0x0  nop
    ctx->pc = 0x2e8534u;
    // NOP
label_2e8538:
    // 0x2e8538: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x2E8538u;
    SET_GPR_U32(ctx, 31, 0x2E8540u);
    ctx->pc = 0x2E853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8538u;
    // 0x2e853c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2E8538u, 0x2E8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8540u;
label_2e8540:
    // 0x2e8540: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e8540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8544: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2e8544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8548: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E8548u;
    {
        const bool branch_taken_0x2e8548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8548u;
        // 0x2e854c: 0x8e24ea10  lw          $a0, -0x15F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8548) {
            ctx->pc = 0x2E8538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8538;
        }
    }
    ctx->pc = 0x2E8550u;
label_2e8550:
    // 0x2e8550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8554:
    // 0x2e8554: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e8554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8558: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2e8558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e855c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e855cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8560: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8560u;
        // 0x2e8564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8568u;
}
