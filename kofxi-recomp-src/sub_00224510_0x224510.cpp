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

// Function: sub_00224510
// Address: 0x224510 - 0x2245e8
void sub_00224510_0x224510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224510_0x224510");
#endif

    switch (ctx->pc) {
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245e0u: goto label_2245e0;
        default: break;
    }

    ctx->pc = 0x224510u;

    // 0x224510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224514: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x224514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22451c: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x22451cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224524: 0x2405018d  addiu       $a1, $zero, 0x18D
    ctx->pc = 0x224524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
    // 0x224528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22452c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22452Cu;
    {
        const bool branch_taken_0x22452c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22452Cu;
        // 0x224530: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22452c) {
            ctx->pc = 0x224558u;
            goto label_224558;
        }
    }
    ctx->pc = 0x224534u;
    // 0x224534: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22453c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224540: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224544: 0x248434b0  addiu       $a0, $a0, 0x34B0
    ctx->pc = 0x224544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13488));
    // 0x224548: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x224548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
    // 0x22454c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x22454cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224550: 0x8089794  j           func_225E50
    ctx->pc = 0x224550u;
    ctx->pc = 0x224554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224550u;
    // 0x224554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x224558u;
label_224558:
    // 0x224558: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x224558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22455c: 0x104a0010  beq         $v0, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x22455Cu;
    {
        const bool branch_taken_0x22455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x224560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22455Cu;
        // 0x224560: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22455c) {
            ctx->pc = 0x2245A0u;
            goto label_2245a0;
        }
    }
    ctx->pc = 0x224564u;
    // 0x224564: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x224564u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224568: 0x154f0011  bne         $t2, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x224568u;
    {
        const bool branch_taken_0x224568 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        ctx->pc = 0x22456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224568u;
        // 0x22456c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224568) {
            ctx->pc = 0x2245B0u;
            goto label_2245b0;
        }
    }
    ctx->pc = 0x224570u;
    // 0x224570: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x224570u;
    {
        const bool branch_taken_0x224570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224570) {
            ctx->pc = 0x224574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224570u;
            // 0x224574: 0xae0e1050  sw          $t6, 0x1050($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2245B4u;
            goto label_2245b4;
        }
    }
    ctx->pc = 0x224578u;
    // 0x224578: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22457c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x224580: 0x248434b0  addiu       $a0, $a0, 0x34B0
    ctx->pc = 0x224580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13488));
    // 0x224584: 0x24e734c8  addiu       $a3, $a3, 0x34C8
    ctx->pc = 0x224584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13512));
    // 0x224588: 0x24050192  addiu       $a1, $zero, 0x192
    ctx->pc = 0x224588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
    // 0x22458c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x224590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224594: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x224594u;
    SET_GPR_U32(ctx, 31, 0x22459Cu);
    ctx->pc = 0x224598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224594u;
    // 0x224598: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x224594u, 0x22459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22459Cu;
label_22459c:
    // 0x22459c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2245a0:
    // 0x2245a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2245a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2245a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2245a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2245a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2245A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2245ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245A8u;
        // 0x2245ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2245A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2245B0u;
label_2245b0:
    // 0x2245b0: 0xae0e1050  sw          $t6, 0x1050($s0)
    ctx->pc = 0x2245b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 14));
label_2245b4:
    // 0x2245b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2245b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2245b8: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x2245b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x2245bc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2245bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2245c0: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x2245c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x2245c4: 0xae0f1054  sw          $t7, 0x1054($s0)
    ctx->pc = 0x2245c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4180), GPR_U32(ctx, 15));
    // 0x2245c8: 0x248434b0  addiu       $a0, $a0, 0x34B0
    ctx->pc = 0x2245c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13488));
    // 0x2245cc: 0x24e734e8  addiu       $a3, $a3, 0x34E8
    ctx->pc = 0x2245ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13544));
    // 0x2245d0: 0x2405019b  addiu       $a1, $zero, 0x19B
    ctx->pc = 0x2245d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    // 0x2245d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2245d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2245d8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2245D8u;
    SET_GPR_U32(ctx, 31, 0x2245E0u);
    ctx->pc = 0x2245DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245D8u;
    // 0x2245dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2245D8u, 0x2245E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245E0u;
label_2245e0:
    // 0x2245e0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2245E0u;
    {
        const bool branch_taken_0x2245e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245E0u;
        // 0x2245e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245e0) {
            ctx->pc = 0x2245A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2245a0;
        }
    }
    ctx->pc = 0x2245E8u;
}
