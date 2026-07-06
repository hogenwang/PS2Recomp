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

// Function: sub_002EDD70
// Address: 0x2edd70 - 0x2ede18
void sub_002EDD70_0x2edd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDD70_0x2edd70");
#endif

    switch (ctx->pc) {
        case 0x2edd80u: goto label_2edd80;
        case 0x2eddacu: goto label_2eddac;
        case 0x2eddb0u: goto label_2eddb0;
        case 0x2eddc8u: goto label_2eddc8;
        case 0x2ede10u: goto label_2ede10;
        default: break;
    }

    ctx->pc = 0x2edd70u;

    // 0x2edd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edd78: 0xc0897ba  jal         func_225EE8
    ctx->pc = 0x2EDD78u;
    SET_GPR_U32(ctx, 31, 0x2EDD80u);
    ctx->pc = 0x225EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EE8u, 0x2EDD78u, 0x2EDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD80u;
label_2edd80:
    // 0x2edd80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edd84: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2edd84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2edd88: 0x24840d68  addiu       $a0, $a0, 0xD68
    ctx->pc = 0x2edd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3432));
    // 0x2edd8c: 0x25080d80  addiu       $t0, $t0, 0xD80
    ctx->pc = 0x2edd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3456));
    // 0x2edd90: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2edd90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd94: 0x240506de  addiu       $a1, $zero, 0x6DE
    ctx->pc = 0x2edd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1758));
    // 0x2edd98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2edd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edd9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDD9Cu;
    {
        const bool branch_taken_0x2edd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD9Cu;
        // 0x2edda0: 0x24078acd  addiu       $a3, $zero, -0x7533 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd9c) {
            ctx->pc = 0x2EDDBCu;
            goto label_2eddbc;
        }
    }
    ctx->pc = 0x2EDDA4u;
    // 0x2edda4: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EDDA4u;
    SET_GPR_U32(ctx, 31, 0x2EDDACu);
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EDDA4u, 0x2EDDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDACu;
label_2eddac:
    // 0x2eddac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eddb0:
    // 0x2eddb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eddb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDB4u;
        // 0x2eddb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDDBCu;
label_2eddbc:
    // 0x2eddbc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eddbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eddc0: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EDDC0u;
    SET_GPR_U32(ctx, 31, 0x2EDDC8u);
    ctx->pc = 0x2EDDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDDC0u;
    // 0x2eddc4: 0x8de4ecb8  lw          $a0, -0x1348($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EDDC0u, 0x2EDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDDC8u;
label_2eddc8:
    // 0x2eddc8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eddcc: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2eddccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2eddd0: 0x24840d68  addiu       $a0, $a0, 0xD68
    ctx->pc = 0x2eddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3432));
    // 0x2eddd4: 0x25080d98  addiu       $t0, $t0, 0xD98
    ctx->pc = 0x2eddd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3480));
    // 0x2eddd8: 0x240506e8  addiu       $a1, $zero, 0x6E8
    ctx->pc = 0x2eddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1768));
    // 0x2edddc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2edddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edde0: 0x24078acd  addiu       $a3, $zero, -0x7533
    ctx->pc = 0x2edde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937293));
    // 0x2edde4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2edde4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edde8: 0x104f0007  beq         $v0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDDE8u;
    {
        const bool branch_taken_0x2edde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDE8u;
        // 0x2eddec: 0x284effff  slti        $t6, $v0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edde8) {
            ctx->pc = 0x2EDE08u;
            goto label_2ede08;
        }
    }
    ctx->pc = 0x2EDDF0u;
    // 0x2eddf0: 0x55c0ffef  bnel        $t6, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2EDDF0u;
    {
        const bool branch_taken_0x2eddf0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eddf0) {
            ctx->pc = 0x2EDDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDDF0u;
            // 0x2eddf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eddb0;
        }
    }
    ctx->pc = 0x2EDDF8u;
    // 0x2eddf8: 0x244fffff  addiu       $t7, $v0, -0x1
    ctx->pc = 0x2eddf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eddfc: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2eddfcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ede00: 0x51e0ffeb  beql        $t7, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2EDE00u;
    {
        const bool branch_taken_0x2ede00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede00) {
            ctx->pc = 0x2EDE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE00u;
            // 0x2ede04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eddb0;
        }
    }
    ctx->pc = 0x2EDE08u;
label_2ede08:
    // 0x2ede08: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2EDE08u;
    SET_GPR_U32(ctx, 31, 0x2EDE10u);
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2EDE08u, 0x2EDE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE10u;
label_2ede10:
    // 0x2ede10: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2EDE10u;
    {
        const bool branch_taken_0x2ede10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE10u;
        // 0x2ede14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede10) {
            ctx->pc = 0x2EDDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eddb0;
        }
    }
    ctx->pc = 0x2EDE18u;
}
