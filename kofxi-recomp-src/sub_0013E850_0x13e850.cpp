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

// Function: sub_0013E850
// Address: 0x13e850 - 0x13e8b0
void sub_0013E850_0x13e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E850_0x13e850");
#endif

    switch (ctx->pc) {
        case 0x13e868u: goto label_13e868;
        case 0x13e888u: goto label_13e888;
        default: break;
    }

    ctx->pc = 0x13e850u;

    // 0x13e850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e860: 0xc062a30  jal         func_18A8C0
    ctx->pc = 0x13E860u;
    SET_GPR_U32(ctx, 31, 0x13E868u);
    ctx->pc = 0x13E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E860u;
    // 0x13e864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A8C0u, 0x13E860u, 0x13E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E868u;
label_13e868:
    // 0x13e868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e86c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13e870: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E870u;
    {
        const bool branch_taken_0x13e870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e870) {
            ctx->pc = 0x13E874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E870u;
            // 0x13e874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E880u;
            goto label_13e880;
        }
    }
    ctx->pc = 0x13E878u;
    // 0x13e878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E878u;
    {
        const bool branch_taken_0x13e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E878u;
        // 0x13e87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e878) {
            ctx->pc = 0x13E894u;
            goto label_13e894;
        }
    }
    ctx->pc = 0x13E880u;
label_13e880:
    // 0x13e880: 0xc062a30  jal         func_18A8C0
    ctx->pc = 0x13E880u;
    SET_GPR_U32(ctx, 31, 0x13E888u);
    ctx->pc = 0x13E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E880u;
    // 0x13e884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A8C0u, 0x13E880u, 0x13E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E888u;
label_13e888:
    // 0x13e888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e88c: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x13e88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x13e890: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e894:
    // 0x13e894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e89c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E89Cu;
        // 0x13e8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E8A4u;
    // 0x13e8a4: 0x0  nop
    ctx->pc = 0x13e8a4u;
    // NOP
    // 0x13e8a8: 0x0  nop
    ctx->pc = 0x13e8a8u;
    // NOP
    // 0x13e8ac: 0x0  nop
    ctx->pc = 0x13e8acu;
    // NOP
}
