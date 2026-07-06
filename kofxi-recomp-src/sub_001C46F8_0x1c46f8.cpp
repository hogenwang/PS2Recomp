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

// Function: sub_001C46F8
// Address: 0x1c46f8 - 0x1c4780
void sub_001C46F8_0x1c46f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C46F8_0x1c46f8");
#endif

    switch (ctx->pc) {
        case 0x1c4714u: goto label_1c4714;
        case 0x1c4724u: goto label_1c4724;
        case 0x1c4730u: goto label_1c4730;
        case 0x1c4744u: goto label_1c4744;
        case 0x1c4754u: goto label_1c4754;
        case 0x1c4760u: goto label_1c4760;
        default: break;
    }

    ctx->pc = 0x1c46f8u;

    // 0x1c46f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c46f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c46fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c470c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C470Cu;
    SET_GPR_U32(ctx, 31, 0x1C4714u);
    ctx->pc = 0x1C4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C470Cu;
    // 0x1c4710: 0x24044700  addiu       $a0, $zero, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C470Cu, 0x1C4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4714u;
label_1c4714:
    // 0x1c4714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c471c: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C471Cu;
    SET_GPR_U32(ctx, 31, 0x1C4724u);
    ctx->pc = 0x1C4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C471Cu;
    // 0x1c4720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1510u, 0x1C471Cu, 0x1C4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4724u;
label_1c4724:
    // 0x1c4724: 0x24044701  addiu       $a0, $zero, 0x4701
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18177));
    // 0x1c4728: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4728u;
    SET_GPR_U32(ctx, 31, 0x1C4730u);
    ctx->pc = 0x1C472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4728u;
    // 0x1c472c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C4728u, 0x1C4730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4730u;
label_1c4730:
    // 0x1c4730: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x1c4730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x1c4734: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4734u;
    {
        const bool branch_taken_0x1c4734 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4734u;
        // 0x1c4738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4734) {
            ctx->pc = 0x1C476Cu;
            goto label_1c476c;
        }
    }
    ctx->pc = 0x1C473Cu;
    // 0x1c473c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C473Cu;
    SET_GPR_U32(ctx, 31, 0x1C4744u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C473Cu, 0x1C4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4744u;
label_1c4744:
    // 0x1c4744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c474c: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C474Cu;
    SET_GPR_U32(ctx, 31, 0x1C4754u);
    ctx->pc = 0x1C4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C474Cu;
    // 0x1c4750: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1510u, 0x1C474Cu, 0x1C4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4754u;
label_1c4754:
    // 0x1c4754: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x1c4754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x1c4758: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4758u;
    SET_GPR_U32(ctx, 31, 0x1C4760u);
    ctx->pc = 0x1C475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4758u;
    // 0x1c475c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C4758u, 0x1C4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4760u;
label_1c4760:
    // 0x1c4760: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1c4760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c4764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4768: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x1c4768u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_1c476c:
    // 0x1c476c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c476cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4778: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4778u;
        // 0x1c477c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4780u;
}
