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

// Function: sub_001C43E8
// Address: 0x1c43e8 - 0x1c4540
void sub_001C43E8_0x1c43e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C43E8_0x1c43e8");
#endif

    switch (ctx->pc) {
        case 0x1c440cu: goto label_1c440c;
        case 0x1c4420u: goto label_1c4420;
        case 0x1c4434u: goto label_1c4434;
        case 0x1c449cu: goto label_1c449c;
        case 0x1c44bcu: goto label_1c44bc;
        case 0x1c44c4u: goto label_1c44c4;
        case 0x1c44d0u: goto label_1c44d0;
        case 0x1c44dcu: goto label_1c44dc;
        case 0x1c44f0u: goto label_1c44f0;
        case 0x1c44f8u: goto label_1c44f8;
        case 0x1c4500u: goto label_1c4500;
        case 0x1c4528u: goto label_1c4528;
        default: break;
    }

    ctx->pc = 0x1c43e8u;

    // 0x1c43e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c43e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c43ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c43ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c43f0: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1c43f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c43f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c43f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c43f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c43fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c43fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c4400: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4404: 0xc0739f8  jal         func_1CE7E0
    ctx->pc = 0x1C4404u;
    SET_GPR_U32(ctx, 31, 0x1C440Cu);
    ctx->pc = 0x1C4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4404u;
    // 0x1c4408: 0x2664eb44  addiu       $a0, $s3, -0x14BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE7E0u, 0x1C4404u, 0x1C440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C440Cu;
label_1c440c:
    // 0x1c440c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C440Cu;
    {
        const bool branch_taken_0x1c440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C440Cu;
        // 0x1c4410: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c440c) {
            ctx->pc = 0x1C4444u;
            goto label_1c4444;
        }
    }
    ctx->pc = 0x1C4414u;
    // 0x1c4414: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c4414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4418: 0x2450ebb0  addiu       $s0, $v0, -0x1450
    ctx->pc = 0x1c4418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x1c441c: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c4420:
    // 0x1c4420: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4424: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4424u;
    {
        const bool branch_taken_0x1c4424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c4424) {
            ctx->pc = 0x1C4428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4424u;
            // 0x1c4428: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4438u;
            goto label_1c4438;
        }
    }
    ctx->pc = 0x1C442Cu;
    // 0x1c442c: 0xc0710c8  jal         func_1C4320
    ctx->pc = 0x1C442Cu;
    SET_GPR_U32(ctx, 31, 0x1C4434u);
    ctx->pc = 0x1C4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C442Cu;
    // 0x1c4430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4320u, 0x1C442Cu, 0x1C4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4434u;
label_1c4434:
    // 0x1c4434: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c4434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c4438:
    // 0x1c4438: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C4438u;
    {
        const bool branch_taken_0x1c4438 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4438u;
        // 0x1c443c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4438) {
            ctx->pc = 0x1C4420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4420;
        }
    }
    ctx->pc = 0x1C4440u;
    // 0x1c4440: 0xae60eb44  sw          $zero, -0x14BC($s3)
    ctx->pc = 0x1c4440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294961988), GPR_U32(ctx, 0));
label_1c4444:
    // 0x1c4444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c444c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c444cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4458: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4458u;
        // 0x1c445c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4460u;
    // 0x1c4460: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4464: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c4464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c4468: 0xac44eb3c  sw          $a0, -0x14C4($v0)
    ctx->pc = 0x1c4468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961980), GPR_U32(ctx, 4));
    // 0x1c446c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C446Cu;
        // 0x1c4470: 0xac65eb40  sw          $a1, -0x14C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961984), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4474u;
    // 0x1c4474: 0x0  nop
    ctx->pc = 0x1c4474u;
    // NOP
    // 0x1c4478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c447c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c447cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4480: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c4484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4488: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c4488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c448c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C448Cu;
    {
        const bool branch_taken_0x1c448c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C448Cu;
        // 0x1c4490: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c448c) {
            ctx->pc = 0x1C4504u;
            goto label_1c4504;
        }
    }
    ctx->pc = 0x1C4494u;
    // 0x1c4494: 0xc071664  jal         func_1C5990
    ctx->pc = 0x1C4494u;
    SET_GPR_U32(ctx, 31, 0x1C449Cu);
    ctx->pc = 0x1C4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4494u;
    // 0x1c4498: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5990u, 0x1C4494u, 0x1C449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C449Cu;
label_1c449c:
    // 0x1c449c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c44a0: 0x2451ee20  addiu       $s1, $v0, -0x11E0
    ctx->pc = 0x1c44a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962720));
    // 0x1c44a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c44a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C44ACu;
    {
        const bool branch_taken_0x1c44ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44ACu;
        // 0x1c44b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44ac) {
            ctx->pc = 0x1C4500u;
            goto label_1c4500;
        }
    }
    ctx->pc = 0x1C44B4u;
    // 0x1c44b4: 0xc071426  jal         func_1C5098
    ctx->pc = 0x1C44B4u;
    SET_GPR_U32(ctx, 31, 0x1C44BCu);
    ctx->pc = 0x1C5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5098u, 0x1C44B4u, 0x1C44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44BCu;
label_1c44bc:
    // 0x1c44bc: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C44BCu;
    SET_GPR_U32(ctx, 31, 0x1C44C4u);
    ctx->pc = 0x1C44C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44BCu;
    // 0x1c44c0: 0x24044200  addiu       $a0, $zero, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C44BCu, 0x1C44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44C4u;
label_1c44c4:
    // 0x1c44c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c44c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c8: 0xc070590  jal         func_1C1640
    ctx->pc = 0x1C44C8u;
    SET_GPR_U32(ctx, 31, 0x1C44D0u);
    ctx->pc = 0x1C44CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44C8u;
    // 0x1c44cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1640u, 0x1C44C8u, 0x1C44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44D0u;
label_1c44d0:
    // 0x1c44d0: 0x24044201  addiu       $a0, $zero, 0x4201
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16897));
    // 0x1c44d4: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C44D4u;
    SET_GPR_U32(ctx, 31, 0x1C44DCu);
    ctx->pc = 0x1C44D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44D4u;
    // 0x1c44d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C44D4u, 0x1C44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44DCu;
label_1c44dc:
    // 0x1c44dc: 0x24044300  addiu       $a0, $zero, 0x4300
    ctx->pc = 0x1c44dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17152));
    // 0x1c44e0: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44E0u;
    {
        const bool branch_taken_0x1c44e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E0u;
        // 0x1c44e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e0) {
            ctx->pc = 0x1C4504u;
            goto label_1c4504;
        }
    }
    ctx->pc = 0x1C44E8u;
    // 0x1c44e8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C44E8u;
    SET_GPR_U32(ctx, 31, 0x1C44F0u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C44E8u, 0x1C44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44F0u;
label_1c44f0:
    // 0x1c44f0: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C44F0u;
    SET_GPR_U32(ctx, 31, 0x1C44F8u);
    ctx->pc = 0x1C44F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44F0u;
    // 0x1c44f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1C44F0u, 0x1C44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44F8u;
label_1c44f8:
    // 0x1c44f8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C44F8u;
    SET_GPR_U32(ctx, 31, 0x1C4500u);
    ctx->pc = 0x1C44FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44F8u;
    // 0x1c44fc: 0x24044301  addiu       $a0, $zero, 0x4301 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C44F8u, 0x1C4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4500u;
label_1c4500:
    // 0x1c4500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4504:
    // 0x1c4504: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c4504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4508: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c4508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c450c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c450cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4510: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4510u;
        // 0x1c4514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4518u;
    // 0x1c4518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c451c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4520: 0xc071150  jal         func_1C4540
    ctx->pc = 0x1C4520u;
    SET_GPR_U32(ctx, 31, 0x1C4528u);
    ctx->pc = 0x1C4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4540u, 0x1C4520u, 0x1C4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4528u;
label_1c4528:
    // 0x1c4528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c452c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c452cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c4530: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c4530u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c4534: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4534u;
        // 0x1c4538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C453Cu;
    // 0x1c453c: 0x0  nop
    ctx->pc = 0x1c453cu;
    // NOP
    if (ctx->pc == 0x1c453cu) { ctx->pc = 0x1c4540u; }
}
