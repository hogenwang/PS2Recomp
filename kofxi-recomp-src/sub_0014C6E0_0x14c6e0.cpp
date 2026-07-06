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

// Function: sub_0014C6E0
// Address: 0x14c6e0 - 0x14c760
void sub_0014C6E0_0x14c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C6E0_0x14c6e0");
#endif

    switch (ctx->pc) {
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c704u: goto label_14c704;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c728u: goto label_14c728;
        case 0x14c74cu: goto label_14c74c;
        default: break;
    }

    ctx->pc = 0x14c6e0u;

    // 0x14c6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c6e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c6ec: 0xc052e28  jal         func_14B8A0
    ctx->pc = 0x14C6ECu;
    SET_GPR_U32(ctx, 31, 0x14C6F4u);
    ctx->pc = 0x14C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6ECu;
    // 0x14c6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B8A0u, 0x14C6ECu, 0x14C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6F4u;
label_14c6f4:
    // 0x14c6f4: 0xc052f94  jal         func_14BE50
    ctx->pc = 0x14C6F4u;
    SET_GPR_U32(ctx, 31, 0x14C6FCu);
    ctx->pc = 0x14BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE50u, 0x14C6F4u, 0x14C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6FCu;
label_14c6fc:
    // 0x14c6fc: 0xc05304c  jal         func_14C130
    ctx->pc = 0x14C6FCu;
    SET_GPR_U32(ctx, 31, 0x14C704u);
    ctx->pc = 0x14C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C130u, 0x14C6FCu, 0x14C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C704u;
label_14c704:
    // 0x14c704: 0xc0531d8  jal         func_14C760
    ctx->pc = 0x14C704u;
    SET_GPR_U32(ctx, 31, 0x14C70Cu);
    ctx->pc = 0x14C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C760u, 0x14C704u, 0x14C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C70Cu;
label_14c70c:
    // 0x14c70c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14c70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14c710: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14c710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14c714: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C714u;
    {
        const bool branch_taken_0x14c714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c714) {
            ctx->pc = 0x14C728u;
            goto label_14c728;
        }
    }
    ctx->pc = 0x14C71Cu;
    // 0x14c71c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14c720: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14C720u;
    SET_GPR_U32(ctx, 31, 0x14C728u);
    ctx->pc = 0x14C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C720u;
    // 0x14c724: 0x2484cf10  addiu       $a0, $a0, -0x30F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14C720u, 0x14C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C728u;
label_14c728:
    // 0x14c728: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c72c: 0x90425d10  lbu         $v0, 0x5D10($v0)
    ctx->pc = 0x14c72cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23824)));
    // 0x14c730: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C730u;
    {
        const bool branch_taken_0x14c730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c730) {
            ctx->pc = 0x14C744u;
            goto label_14c744;
        }
    }
    ctx->pc = 0x14C738u;
    // 0x14c738: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14c73c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c740: 0xa0435d10  sb          $v1, 0x5D10($v0)
    ctx->pc = 0x14c740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23824), (uint8_t)GPR_U32(ctx, 3));
label_14c744:
    // 0x14c744: 0xc06cfea  jal         func_1B3FA8
    ctx->pc = 0x14C744u;
    SET_GPR_U32(ctx, 31, 0x14C74Cu);
    ctx->pc = 0x1B3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FA8u, 0x14C744u, 0x14C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C74Cu;
label_14c74c:
    // 0x14c74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c750: 0x3e00008  jr          $ra
    ctx->pc = 0x14C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C750u;
        // 0x14c754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C758u;
    // 0x14c758: 0x0  nop
    ctx->pc = 0x14c758u;
    // NOP
    // 0x14c75c: 0x0  nop
    ctx->pc = 0x14c75cu;
    // NOP
    if (ctx->pc == 0x14c75cu) { ctx->pc = 0x14c760u; }
}
