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

// Function: sub_00262DB0
// Address: 0x262db0 - 0x262e28
void sub_00262DB0_0x262db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262DB0_0x262db0");
#endif

    switch (ctx->pc) {
        case 0x262dd0u: goto label_262dd0;
        case 0x262e04u: goto label_262e04;
        case 0x262e0cu: goto label_262e0c;
        default: break;
    }

    ctx->pc = 0x262db0u;

    // 0x262db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262db4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x262db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x262db8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x262dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262dc0: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x262dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x262dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262dc8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x262DC8u;
    SET_GPR_U32(ctx, 31, 0x262DD0u);
    ctx->pc = 0x262DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DC8u;
    // 0x262dcc: 0x8e041a18  lw          $a0, 0x1A18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x262DC8u, 0x262DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DD0u;
label_262dd0:
    // 0x262dd0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x262dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262dd4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x262dd8: 0x2447d7c0  addiu       $a3, $v0, -0x2840
    ctx->pc = 0x262dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x262ddc: 0xac51d7c0  sw          $s1, -0x2840($v0)
    ctx->pc = 0x262ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956992), GPR_U32(ctx, 17));
    // 0x262de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x262de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262de8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x262de8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x262dec: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x262decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x262df0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262df0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262df4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x262df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262df8: 0x2484d780  addiu       $a0, $a0, -0x2880
    ctx->pc = 0x262df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956928));
    // 0x262dfc: 0xc098b12  jal         func_262C48
    ctx->pc = 0x262DFCu;
    SET_GPR_U32(ctx, 31, 0x262E04u);
    ctx->pc = 0x262E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DFCu;
    // 0x262e00: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C48u, 0x262DFCu, 0x262E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E04u;
label_262e04:
    // 0x262e04: 0xc043320  jal         func_10CC80
    ctx->pc = 0x262E04u;
    SET_GPR_U32(ctx, 31, 0x262E0Cu);
    ctx->pc = 0x262E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E04u;
    // 0x262e08: 0x8e041a18  lw          $a0, 0x1A18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x262E04u, 0x262E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E0Cu;
label_262e0c:
    // 0x262e0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e14: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x262e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262e18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x262E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E1Cu;
        // 0x262e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E24u;
    // 0x262e24: 0x0  nop
    ctx->pc = 0x262e24u;
    // NOP
}
