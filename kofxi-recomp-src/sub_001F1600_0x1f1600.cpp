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

// Function: sub_001F1600
// Address: 0x1f1600 - 0x1f1660
void sub_001F1600_0x1f1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1600_0x1f1600");
#endif

    switch (ctx->pc) {
        case 0x1f162cu: goto label_1f162c;
        case 0x1f1640u: goto label_1f1640;
        default: break;
    }

    ctx->pc = 0x1f1600u;

    // 0x1f1600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f1604: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f1604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1608: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f1608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f160c: 0x24700dc4  addiu       $s0, $v1, 0xDC4
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3524));
    // 0x1f1610: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f1610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f1614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1618: 0x8c650df0  lw          $a1, 0xDF0($v1)
    ctx->pc = 0x1f1618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3568)));
    // 0x1f161c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F161Cu;
    {
        const bool branch_taken_0x1f161c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F161Cu;
        // 0x1f1620: 0x24640df4  addiu       $a0, $v1, 0xDF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f161c) {
            ctx->pc = 0x1F164Cu;
            goto label_1f164c;
        }
    }
    ctx->pc = 0x1F1624u;
    // 0x1f1624: 0xc07c9b2  jal         func_1F26C8
    ctx->pc = 0x1F1624u;
    SET_GPR_U32(ctx, 31, 0x1F162Cu);
    ctx->pc = 0x1F1628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1624u;
    // 0x1f1628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26C8u, 0x1F1624u, 0x1F162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F162Cu;
label_1f162c:
    // 0x1f162c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1630: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f1634: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1f1634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1f1638: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F1638u;
    SET_GPR_U32(ctx, 31, 0x1F1640u);
    ctx->pc = 0x1F163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1638u;
    // 0x1f163c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC518u, 0x1F1638u, 0x1F1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1640u;
label_1f1640:
    // 0x1f1640: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1f1640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f1644: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1648: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f164c:
    // 0x1f164c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f164cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1650: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f1650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f1654: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1654u;
        // 0x1f1658: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F165Cu;
    // 0x1f165c: 0x0  nop
    ctx->pc = 0x1f165cu;
    // NOP
    if (ctx->pc == 0x1f165cu) { ctx->pc = 0x1f1660u; }
}
