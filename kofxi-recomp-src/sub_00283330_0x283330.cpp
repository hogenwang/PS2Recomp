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

// Function: sub_00283330
// Address: 0x283330 - 0x2833c8
void sub_00283330_0x283330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283330_0x283330");
#endif

    switch (ctx->pc) {
        case 0x283388u: goto label_283388;
        case 0x28339cu: goto label_28339c;
        case 0x2833a4u: goto label_2833a4;
        case 0x2833b4u: goto label_2833b4;
        default: break;
    }

    ctx->pc = 0x283330u;

    // 0x283330: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x283330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x283334: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x283334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x283338: 0x8c6236b8  lw          $v0, 0x36B8($v1)
    ctx->pc = 0x283338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14008)));
    // 0x28333c: 0xffa50478  sd          $a1, 0x478($sp)
    ctx->pc = 0x28333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 5));
    // 0x283340: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x283340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x283344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28334c: 0xffa60480  sd          $a2, 0x480($sp)
    ctx->pc = 0x28334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 6));
    // 0x283350: 0xffa70488  sd          $a3, 0x488($sp)
    ctx->pc = 0x283350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 7));
    // 0x283354: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x283354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x283358: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x283358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x28335c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28335cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283360: 0xffa80490  sd          $t0, 0x490($sp)
    ctx->pc = 0x283360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 8));
    // 0x283364: 0x24a5a698  addiu       $a1, $a1, -0x5968
    ctx->pc = 0x283364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944408));
    // 0x283368: 0xffa90498  sd          $t1, 0x498($sp)
    ctx->pc = 0x283368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 9));
    // 0x28336c: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x28336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x283370: 0xffaa04a0  sd          $t2, 0x4A0($sp)
    ctx->pc = 0x283370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 10));
    // 0x283374: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x283374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x283378: 0xffab04a8  sd          $t3, 0x4A8($sp)
    ctx->pc = 0x283378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1192), GPR_U64(ctx, 11));
    // 0x28337c: 0xac6236b8  sw          $v0, 0x36B8($v1)
    ctx->pc = 0x28337cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14008), GPR_U32(ctx, 2));
    // 0x283380: 0xc0a8db2  jal         func_2A36C8
    ctx->pc = 0x283380u;
    SET_GPR_U32(ctx, 31, 0x283388u);
    ctx->pc = 0x283384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283380u;
    // 0x283384: 0xa3a00400  sb          $zero, 0x400($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1024), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A36C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A36C8u, 0x283380u, 0x283388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283388u;
label_283388:
    // 0x283388: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x283388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28338c: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x28338cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x283390: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x283390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283394: 0xc04b984  jal         func_12E610
    ctx->pc = 0x283394u;
    SET_GPR_U32(ctx, 31, 0x28339Cu);
    ctx->pc = 0x283398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283394u;
    // 0x283398: 0x8cc5fff8  lw          $a1, -0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E610u, 0x283394u, 0x28339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28339Cu;
label_28339c:
    // 0x28339c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28339Cu;
    SET_GPR_U32(ctx, 31, 0x2833A4u);
    ctx->pc = 0x2833A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28339Cu;
    // 0x2833a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x28339Cu, 0x2833A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833A4u;
label_2833a4:
    // 0x2833a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2833a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2833a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833ac: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2833ACu;
    SET_GPR_U32(ctx, 31, 0x2833B4u);
    ctx->pc = 0x2833B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2833ACu;
    // 0x2833b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2833ACu, 0x2833B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833B4u;
label_2833b4:
    // 0x2833b4: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x2833b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2833b8: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x2833b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2833bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2833BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2833C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833BCu;
        // 0x2833c0: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2833BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2833C4u;
    // 0x2833c4: 0x0  nop
    ctx->pc = 0x2833c4u;
    // NOP
    if (ctx->pc == 0x2833c4u) { ctx->pc = 0x2833c8u; }
}
