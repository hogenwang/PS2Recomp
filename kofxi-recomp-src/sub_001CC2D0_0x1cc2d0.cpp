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

// Function: sub_001CC2D0
// Address: 0x1cc2d0 - 0x1cc390
void sub_001CC2D0_0x1cc2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC2D0_0x1cc2d0");
#endif

    switch (ctx->pc) {
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc37cu: goto label_1cc37c;
        default: break;
    }

    ctx->pc = 0x1cc2d0u;

    // 0x1cc2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc2d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2dc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC2DCu;
    {
        const bool branch_taken_0x1cc2dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2DCu;
        // 0x1cc2e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2dc) {
            ctx->pc = 0x1CC308u;
            goto label_1cc308;
        }
    }
    ctx->pc = 0x1CC2E4u;
    // 0x1cc2e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc2e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc2f0: 0x2484bb60  addiu       $a0, $a0, -0x44A0
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949728));
    // 0x1cc2f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc2f8: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    // 0x1cc2fc: 0x8073006  j           func_1CC018
    ctx->pc = 0x1CC2FCu;
    ctx->pc = 0x1CC300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2FCu;
    // 0x1cc300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC304u;
    // 0x1cc304: 0x0  nop
    ctx->pc = 0x1cc304u;
    // NOP
label_1cc308:
    // 0x1cc308: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1cc308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cc30c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC30Cu;
    {
        const bool branch_taken_0x1cc30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC30Cu;
        // 0x1cc310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc30c) {
            ctx->pc = 0x1CC338u;
            goto label_1cc338;
        }
    }
    ctx->pc = 0x1CC314u;
    // 0x1cc314: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc318: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc320: 0x2484bb90  addiu       $a0, $a0, -0x4470
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949776));
    // 0x1cc324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc328: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
    // 0x1cc32c: 0x8073006  j           func_1CC018
    ctx->pc = 0x1CC32Cu;
    ctx->pc = 0x1CC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32Cu;
    // 0x1cc330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC334u;
    // 0x1cc334: 0x0  nop
    ctx->pc = 0x1cc334u;
    // NOP
label_1cc338:
    // 0x1cc338: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CC338u;
    SET_GPR_U32(ctx, 31, 0x1CC340u);
    ctx->pc = 0x1CC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC338u;
    // 0x1cc33c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CC338u, 0x1CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC340u;
label_1cc340:
    // 0x1cc340: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1cc340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc344: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc34c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC34Cu;
        // 0x1cc350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC354u;
    // 0x1cc354: 0x0  nop
    ctx->pc = 0x1cc354u;
    // NOP
    // 0x1cc358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc364: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC364u;
    SET_GPR_U32(ctx, 31, 0x1CC36Cu);
    ctx->pc = 0x1CC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC364u;
    // 0x1cc368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CC364u, 0x1CC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC36Cu;
label_1cc36c:
    // 0x1cc36c: 0xc0730e4  jal         func_1CC390
    ctx->pc = 0x1CC36Cu;
    SET_GPR_U32(ctx, 31, 0x1CC374u);
    ctx->pc = 0x1CC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC36Cu;
    // 0x1cc370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC390u, 0x1CC36Cu, 0x1CC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC374u;
label_1cc374:
    // 0x1cc374: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CC374u;
    SET_GPR_U32(ctx, 31, 0x1CC37Cu);
    ctx->pc = 0x1CC378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC374u;
    // 0x1cc378: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CC374u, 0x1CC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC37Cu;
label_1cc37c:
    // 0x1cc37c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc388: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC388u;
        // 0x1cc38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC390u;
}
