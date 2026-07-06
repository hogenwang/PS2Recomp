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

// Function: sub_001C6748
// Address: 0x1c6748 - 0x1c6828
void sub_001C6748_0x1c6748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6748_0x1c6748");
#endif

    switch (ctx->pc) {
        case 0x1c6760u: goto label_1c6760;
        case 0x1c6780u: goto label_1c6780;
        case 0x1c67bcu: goto label_1c67bc;
        case 0x1c67e0u: goto label_1c67e0;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6808u: goto label_1c6808;
        case 0x1c6810u: goto label_1c6810;
        default: break;
    }

    ctx->pc = 0x1c6748u;

    // 0x1c6748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c674c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C674Cu;
    {
        const bool branch_taken_0x1c674c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C674Cu;
        // 0x1c6750: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c674c) {
            ctx->pc = 0x1C6768u;
            goto label_1c6768;
        }
    }
    ctx->pc = 0x1C6754u;
    // 0x1c6754: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6758: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6758u;
    SET_GPR_U32(ctx, 31, 0x1C6760u);
    ctx->pc = 0x1C675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6758u;
    // 0x1c675c: 0x2484a870  addiu       $a0, $a0, -0x5790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C6758u, 0x1C6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6760u;
label_1c6760:
    // 0x1c6760: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6760u;
    {
        const bool branch_taken_0x1c6760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6760u;
        // 0x1c6764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6760) {
            ctx->pc = 0x1C67D0u;
            goto label_1c67d0;
        }
    }
    ctx->pc = 0x1C6768u;
label_1c6768:
    // 0x1c6768: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x1c6768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1c676c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6770: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6770u;
    {
        const bool branch_taken_0x1c6770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6770u;
        // 0x1c6774: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6770) {
            ctx->pc = 0x1C67A4u;
            goto label_1c67a4;
        }
    }
    ctx->pc = 0x1C6778u;
    // 0x1c6778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c6778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c677c: 0x0  nop
    ctx->pc = 0x1c677cu;
    // NOP
label_1c6780:
    // 0x1c6780: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1c6780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c6784: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6784u;
        // 0x1c6788: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C67A4u;
            goto label_1c67a4;
        }
    }
    ctx->pc = 0x1C678Cu;
    // 0x1c678c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6790: 0x0  nop
    ctx->pc = 0x1c6790u;
    // NOP
    // 0x1c6794: 0x0  nop
    ctx->pc = 0x1c6794u;
    // NOP
    // 0x1c6798: 0x0  nop
    ctx->pc = 0x1c6798u;
    // NOP
    // 0x1c679c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C679Cu;
    {
        const bool branch_taken_0x1c679c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c679c) {
            ctx->pc = 0x1C67A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C679Cu;
            // 0x1c67a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6780;
        }
    }
    ctx->pc = 0x1C67A4u;
label_1c67a4:
    // 0x1c67a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c67a8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C67A8u;
    {
        const bool branch_taken_0x1c67a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c67a8) {
            ctx->pc = 0x1C67ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C67A8u;
            // 0x1c67ac: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C67C8u;
            goto label_1c67c8;
        }
    }
    ctx->pc = 0x1C67B0u;
    // 0x1c67b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c67b4: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C67B4u;
    SET_GPR_U32(ctx, 31, 0x1C67BCu);
    ctx->pc = 0x1C67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67B4u;
    // 0x1c67b8: 0x2484a8a0  addiu       $a0, $a0, -0x5760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C67B4u, 0x1C67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67BCu;
label_1c67bc:
    // 0x1c67bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C67BCu;
    {
        const bool branch_taken_0x1c67bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67BCu;
        // 0x1c67c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67bc) {
            ctx->pc = 0x1C67D0u;
            goto label_1c67d0;
        }
    }
    ctx->pc = 0x1C67C4u;
    // 0x1c67c4: 0x0  nop
    ctx->pc = 0x1c67c4u;
    // NOP
label_1c67c8:
    // 0x1c67c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c67cc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1c67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_1c67d0:
    // 0x1c67d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c67d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c67d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D4u;
        // 0x1c67d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C67D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C67DCu;
    // 0x1c67dc: 0x0  nop
    ctx->pc = 0x1c67dcu;
    // NOP
label_1c67e0:
    // 0x1c67e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c67e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c67e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c67e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c67e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c67f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c67f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c67f4: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C67F4u;
    SET_GPR_U32(ctx, 31, 0x1C67FCu);
    ctx->pc = 0x1C67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67F4u;
    // 0x1c67f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C67F4u, 0x1C67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67FCu;
label_1c67fc:
    // 0x1c67fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6800: 0xc071a0a  jal         func_1C6828
    ctx->pc = 0x1C6800u;
    SET_GPR_U32(ctx, 31, 0x1C6808u);
    ctx->pc = 0x1C6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6800u;
    // 0x1c6804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6828u, 0x1C6800u, 0x1C6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6808u;
label_1c6808:
    // 0x1c6808: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C6808u;
    SET_GPR_U32(ctx, 31, 0x1C6810u);
    ctx->pc = 0x1C680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6808u;
    // 0x1c680c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C6808u, 0x1C6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6810u;
label_1c6810:
    // 0x1c6810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c681c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c681cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6820: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6820u;
        // 0x1c6824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6828u;
}
