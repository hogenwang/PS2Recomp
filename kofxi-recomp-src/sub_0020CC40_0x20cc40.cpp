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

// Function: sub_0020CC40
// Address: 0x20cc40 - 0x20cd00
void sub_0020CC40_0x20cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CC40_0x20cc40");
#endif

    switch (ctx->pc) {
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc98u: goto label_20cc98;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce8u: goto label_20cce8;
        default: break;
    }

    ctx->pc = 0x20cc40u;

    // 0x20cc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cc44: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20cc48: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x20cc48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20cc4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cc50: 0x2484a390  addiu       $a0, $a0, -0x5C70
    ctx->pc = 0x20cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943632));
    // 0x20cc54: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x20cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x20cc58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cc5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cc5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cc60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20cc64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc68: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20CC68u;
    SET_GPR_U32(ctx, 31, 0x20CC70u);
    ctx->pc = 0x20CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC68u;
    // 0x20cc6c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x20CC68u, 0x20CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC70u;
label_20cc70:
    // 0x20cc70: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20CC70u;
    SET_GPR_U32(ctx, 31, 0x20CC78u);
    ctx->pc = 0x20CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC70u;
    // 0x20cc74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20CC70u, 0x20CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC78u;
label_20cc78:
    // 0x20cc78: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20cc7c: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x20cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x20cc80: 0x2484a390  addiu       $a0, $a0, -0x5C70
    ctx->pc = 0x20cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943632));
    // 0x20cc84: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20CC84u;
    SET_GPR_U32(ctx, 31, 0x20CC8Cu);
    ctx->pc = 0x20CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC84u;
    // 0x20cc88: 0x24a5f500  addiu       $a1, $a1, -0xB00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x20CC84u, 0x20CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC8Cu;
label_20cc8c:
    // 0x20cc8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc90: 0xc040454  jal         func_101150
    ctx->pc = 0x20CC90u;
    SET_GPR_U32(ctx, 31, 0x20CC98u);
    ctx->pc = 0x20CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC90u;
    // 0x20cc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x20CC90u, 0x20CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC98u;
label_20cc98:
    // 0x20cc98: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20cc9c: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x20cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x20cca0: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x20cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x20cca4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20cca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20cca8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20cca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20ccac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ccacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ccb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccb4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x20ccb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ccb8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20CCB8u;
    SET_GPR_U32(ctx, 31, 0x20CCC0u);
    ctx->pc = 0x20CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCB8u;
    // 0x20ccbc: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x20CCB8u, 0x20CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCC0u;
label_20ccc0:
    // 0x20ccc0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20CCC0u;
    SET_GPR_U32(ctx, 31, 0x20CCC8u);
    ctx->pc = 0x20CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCC0u;
    // 0x20ccc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20CCC0u, 0x20CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCC8u;
label_20ccc8:
    // 0x20ccc8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20cccc: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x20ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x20ccd0: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x20ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x20ccd4: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20CCD4u;
    SET_GPR_U32(ctx, 31, 0x20CCDCu);
    ctx->pc = 0x20CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCD4u;
    // 0x20ccd8: 0x24a5f900  addiu       $a1, $a1, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x20CCD4u, 0x20CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCDCu;
label_20ccdc:
    // 0x20ccdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cce0: 0xc040454  jal         func_101150
    ctx->pc = 0x20CCE0u;
    SET_GPR_U32(ctx, 31, 0x20CCE8u);
    ctx->pc = 0x20CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCE0u;
    // 0x20cce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x20CCE0u, 0x20CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCE8u;
label_20cce8:
    // 0x20cce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ccec: 0x3e00008  jr          $ra
    ctx->pc = 0x20CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCECu;
        // 0x20ccf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CCF4u;
    // 0x20ccf4: 0x0  nop
    ctx->pc = 0x20ccf4u;
    // NOP
    // 0x20ccf8: 0x0  nop
    ctx->pc = 0x20ccf8u;
    // NOP
    // 0x20ccfc: 0x0  nop
    ctx->pc = 0x20ccfcu;
    // NOP
}
