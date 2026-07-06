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

// Function: sub_001B1708
// Address: 0x1b1708 - 0x1b1758
void sub_001B1708_0x1b1708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1708_0x1b1708");
#endif

    switch (ctx->pc) {
        case 0x1b1734u: goto label_1b1734;
        case 0x1b173cu: goto label_1b173c;
        case 0x1b1744u: goto label_1b1744;
        default: break;
    }

    ctx->pc = 0x1b1708u;

    // 0x1b1708: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b1708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b170c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b170cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1710: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b1714: 0x8c42fc98  lw          $v0, -0x368($v0)
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966424)));
    // 0x1b1718: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1718u;
        // 0x1b171c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1720u;
    // 0x1b1720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b172c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B172Cu;
    SET_GPR_U32(ctx, 31, 0x1B1734u);
    ctx->pc = 0x1B1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B172Cu;
    // 0x1b1730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B172Cu, 0x1B1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1734u;
label_1b1734:
    // 0x1b1734: 0xc06c5d6  jal         func_1B1758
    ctx->pc = 0x1B1734u;
    SET_GPR_U32(ctx, 31, 0x1B173Cu);
    ctx->pc = 0x1B1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1734u;
    // 0x1b1738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1758u, 0x1B1734u, 0x1B173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B173Cu;
label_1b173c:
    // 0x1b173c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B173Cu;
    SET_GPR_U32(ctx, 31, 0x1B1744u);
    ctx->pc = 0x1B1740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B173Cu;
    // 0x1b1740: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B173Cu, 0x1B1744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1744u;
label_1b1744:
    // 0x1b1744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b174c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b174cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1750: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1750u;
        // 0x1b1754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1758u;
}
