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

// Function: sub_00271DE0
// Address: 0x271de0 - 0x271e48
void sub_00271DE0_0x271de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271DE0_0x271de0");
#endif

    switch (ctx->pc) {
        case 0x271e00u: goto label_271e00;
        case 0x271e10u: goto label_271e10;
        case 0x271e20u: goto label_271e20;
        default: break;
    }

    ctx->pc = 0x271de0u;

    // 0x271de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271de4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271dec: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x271decu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x271df0: 0x26102d78  addiu       $s0, $s0, 0x2D78
    ctx->pc = 0x271df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x271df4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x271df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x271df8: 0xc09c74c  jal         func_271D30
    ctx->pc = 0x271DF8u;
    SET_GPR_U32(ctx, 31, 0x271E00u);
    ctx->pc = 0x271DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DF8u;
    // 0x271dfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271D30u, 0x271DF8u, 0x271E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E00u;
label_271e00:
    // 0x271e00: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271e04: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x271e08: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x271E08u;
    SET_GPR_U32(ctx, 31, 0x271E10u);
    ctx->pc = 0x271E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E08u;
    // 0x271e0c: 0x8c8406c4  lw          $a0, 0x6C4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x271E08u, 0x271E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E10u;
label_271e10:
    // 0x271e10: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271e14: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x271e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x271e18: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x271E18u;
    SET_GPR_U32(ctx, 31, 0x271E20u);
    ctx->pc = 0x271E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E18u;
    // 0x271e1c: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x271E18u, 0x271E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E20u;
label_271e20:
    // 0x271e20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x271e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x271e24: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x271e24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x271e28: 0xac2006f4  sw          $zero, 0x6F4($at)
    ctx->pc = 0x271e28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1780), GPR_U32(ctx, 0));
    // 0x271e2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271e30: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x271e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x271e34: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x271e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x271e38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x271e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271e40: 0x8043320  j           func_10CC80
    ctx->pc = 0x271E40u;
    ctx->pc = 0x271E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E40u;
    // 0x271e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x271E48u;
}
