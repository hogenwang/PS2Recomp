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

// Function: sub_00287080
// Address: 0x287080 - 0x287148
void sub_00287080_0x287080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287080_0x287080");
#endif

    switch (ctx->pc) {
        case 0x2870e4u: goto label_2870e4;
        case 0x2870f4u: goto label_2870f4;
        case 0x287110u: goto label_287110;
        default: break;
    }

    ctx->pc = 0x287080u;

    // 0x287080: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287080u;
    {
        const bool branch_taken_0x287080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x287080) {
            ctx->pc = 0x287090u;
            goto label_287090;
        }
    }
    ctx->pc = 0x287088u;
    // 0x287088: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x287088u;
    {
        const bool branch_taken_0x287088 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x287088) {
            ctx->pc = 0x28708Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287088u;
            // 0x28708c: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2870A0u;
            goto label_2870a0;
        }
    }
    ctx->pc = 0x287090u;
label_287090:
    // 0x287090: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x287090u;
    {
        const bool branch_taken_0x287090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x287094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287090u;
        // 0x287094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287090) {
            ctx->pc = 0x287140u;
            goto label_287140;
        }
    }
    ctx->pc = 0x287098u;
    // 0x287098: 0x3e00008  jr          $ra
    ctx->pc = 0x287098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287098u;
        // 0x28709c: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870A0u;
label_2870a0:
    // 0x2870a0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2870a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2870a4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2870A4u;
    {
        const bool branch_taken_0x2870a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2870A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870A4u;
        // 0x2870a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870a4) {
            ctx->pc = 0x2870B8u;
            goto label_2870b8;
        }
    }
    ctx->pc = 0x2870ACu;
    // 0x2870ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2870acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2870b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2870B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B0u;
        // 0x2870b4: 0x66100b  movn        $v0, $v1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870B8u;
label_2870b8:
    // 0x2870b8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2870B8u;
    {
        const bool branch_taken_0x2870b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B8u;
        // 0x2870bc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870b8) {
            ctx->pc = 0x2870CCu;
            goto label_2870cc;
        }
    }
    ctx->pc = 0x2870C0u;
    // 0x2870c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2870c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2870c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2870C4u;
    {
        const bool branch_taken_0x2870c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870C4u;
        // 0x2870c8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870c4) {
            ctx->pc = 0x2870D0u;
            goto label_2870d0;
        }
    }
    ctx->pc = 0x2870CCu;
label_2870cc:
    // 0x2870cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2870ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2870d0:
    // 0x2870d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2870d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2870d4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2870d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2870d8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2870d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2870dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2870DCu;
    {
        const bool branch_taken_0x2870dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870DCu;
        // 0x2870e0: 0x66102a  slt         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870dc) {
            ctx->pc = 0x2870ECu;
            goto label_2870ec;
        }
    }
    ctx->pc = 0x2870E4u;
label_2870e4:
    // 0x2870e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2870E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870E4u;
        // 0x2870e8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870ECu;
label_2870ec:
    // 0x2870ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2870ECu;
    {
        const bool branch_taken_0x2870ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870ECu;
        // 0x2870f0: 0x2467ffff  addiu       $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870ec) {
            ctx->pc = 0x2870FCu;
            goto label_2870fc;
        }
    }
    ctx->pc = 0x2870F4u;
label_2870f4:
    // 0x2870f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2870F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870F4u;
        // 0x2870f8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870FCu;
label_2870fc:
    // 0x2870fc: 0x4e00010  bltz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2870FCu;
    {
        const bool branch_taken_0x2870fc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x287100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870FCu;
        // 0x287100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870fc) {
            ctx->pc = 0x287140u;
            goto label_287140;
        }
    }
    ctx->pc = 0x287104u;
    // 0x287104: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x287104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287108: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x287108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28710c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x28710cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_287110:
    // 0x287110: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x287110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x287114: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x287118: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x287118u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28711c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28711cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287120: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287124: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x287124u;
    {
        const bool branch_taken_0x287124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287124u;
        // 0x287128: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287124) {
            ctx->pc = 0x2870E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2870e4;
        }
    }
    ctx->pc = 0x28712Cu;
    // 0x28712c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x28712Cu;
    {
        const bool branch_taken_0x28712c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28712Cu;
        // 0x287130: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28712c) {
            ctx->pc = 0x2870F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2870f4;
        }
    }
    ctx->pc = 0x287134u;
    // 0x287134: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x287134u;
    {
        const bool branch_taken_0x287134 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x287138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287134u;
        // 0x287138: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287134) {
            ctx->pc = 0x287110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287110;
        }
    }
    ctx->pc = 0x28713Cu;
    // 0x28713c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28713cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287140:
    // 0x287140: 0x3e00008  jr          $ra
    ctx->pc = 0x287140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287148u;
}
