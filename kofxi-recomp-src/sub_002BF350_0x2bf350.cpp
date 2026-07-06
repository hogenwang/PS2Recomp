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

// Function: sub_002BF350
// Address: 0x2bf350 - 0x2bf3e0
void sub_002BF350_0x2bf350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF350_0x2bf350");
#endif

    switch (ctx->pc) {
        case 0x2bf380u: goto label_2bf380;
        case 0x2bf394u: goto label_2bf394;
        case 0x2bf3a0u: goto label_2bf3a0;
        default: break;
    }

    ctx->pc = 0x2bf350u;

    // 0x2bf350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf354: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bf354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bf358: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bf358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bf35c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bf35cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bf364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf368: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bf36c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf370: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2bf370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bf374: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF374u;
    {
        const bool branch_taken_0x2bf374 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF374u;
        // 0x2bf378: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf374) {
            ctx->pc = 0x2BF3C0u;
            goto label_2bf3c0;
        }
    }
    ctx->pc = 0x2BF37Cu;
    // 0x2bf37c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2bf37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2bf380:
    // 0x2bf380: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2bf380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2bf384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf388: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2bf388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf38c: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2BF38Cu;
    SET_GPR_U32(ctx, 31, 0x2BF394u);
    ctx->pc = 0x2BF390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF38Cu;
    // 0x2bf390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2BF38Cu, 0x2BF394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF394u;
label_2bf394:
    // 0x2bf394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf398: 0xc0afc54  jal         func_2BF150
    ctx->pc = 0x2BF398u;
    SET_GPR_U32(ctx, 31, 0x2BF3A0u);
    ctx->pc = 0x2BF39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF398u;
    // 0x2bf39c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF150u, 0x2BF398u, 0x2BF3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3A0u;
label_2bf3a0:
    // 0x2bf3a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF3A0u;
    {
        const bool branch_taken_0x2bf3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3a0) {
            ctx->pc = 0x2BF3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF3A0u;
            // 0x2bf3a4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF3B0u;
            goto label_2bf3b0;
        }
    }
    ctx->pc = 0x2BF3A8u;
    // 0x2bf3a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF3A8u;
    {
        const bool branch_taken_0x2bf3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3A8u;
        // 0x2bf3ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3a8) {
            ctx->pc = 0x2BF3C4u;
            goto label_2bf3c4;
        }
    }
    ctx->pc = 0x2BF3B0u;
label_2bf3b0:
    // 0x2bf3b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2bf3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bf3b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2bf3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bf3b8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BF3B8u;
    {
        const bool branch_taken_0x2bf3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3b8) {
            ctx->pc = 0x2BF3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF3B8u;
            // 0x2bf3bc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bf380;
        }
    }
    ctx->pc = 0x2BF3C0u;
label_2bf3c0:
    // 0x2bf3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf3c4:
    // 0x2bf3c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf3c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bf3c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf3cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf3ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf3d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3D8u;
        // 0x2bf3dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3E0u;
}
