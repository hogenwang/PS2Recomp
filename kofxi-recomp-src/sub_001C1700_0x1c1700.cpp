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

// Function: sub_001C1700
// Address: 0x1c1700 - 0x1c1778
void sub_001C1700_0x1c1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1700_0x1c1700");
#endif

    switch (ctx->pc) {
        case 0x1c1724u: goto label_1c1724;
        case 0x1c1734u: goto label_1c1734;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1758u: goto label_1c1758;
        default: break;
    }

    ctx->pc = 0x1c1700u;

    // 0x1c1700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c170c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c171c: 0xc070506  jal         func_1C1418
    ctx->pc = 0x1C171Cu;
    SET_GPR_U32(ctx, 31, 0x1C1724u);
    ctx->pc = 0x1C1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C171Cu;
    // 0x1c1720: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1418u, 0x1C171Cu, 0x1C1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1724u;
label_1c1724:
    // 0x1c1724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c172c: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x1C172Cu;
    SET_GPR_U32(ctx, 31, 0x1C1734u);
    ctx->pc = 0x1C1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C172Cu;
    // 0x1c1730: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x1C172Cu, 0x1C1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1734u;
label_1c1734:
    // 0x1c1734: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c173c: 0x24849a50  addiu       $a0, $a0, -0x65B0
    ctx->pc = 0x1c173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941264));
    // 0x1c1740: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1740u;
    {
        const bool branch_taken_0x1c1740 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1740u;
        // 0x1c1744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1740) {
            ctx->pc = 0x1C1750u;
            goto label_1c1750;
        }
    }
    ctx->pc = 0x1C1748u;
    // 0x1c1748: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C1748u;
    SET_GPR_U32(ctx, 31, 0x1C1750u);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C1748u, 0x1C1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1750u;
label_1c1750:
    // 0x1c1750: 0xc070514  jal         func_1C1450
    ctx->pc = 0x1C1750u;
    SET_GPR_U32(ctx, 31, 0x1C1758u);
    ctx->pc = 0x1C1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1450u, 0x1C1750u, 0x1C1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1758u;
label_1c1758:
    // 0x1c1758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c175cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1768: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c176c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C176Cu;
        // 0x1c1770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1774u;
    // 0x1c1774: 0x0  nop
    ctx->pc = 0x1c1774u;
    // NOP
}
