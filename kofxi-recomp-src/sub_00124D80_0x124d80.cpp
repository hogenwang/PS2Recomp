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

// Function: sub_00124D80
// Address: 0x124d80 - 0x124e00
void sub_00124D80_0x124d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124D80_0x124d80");
#endif

    switch (ctx->pc) {
        case 0x124dccu: goto label_124dcc;
        case 0x124de0u: goto label_124de0;
        default: break;
    }

    ctx->pc = 0x124d80u;

    // 0x124d80: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x124d80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x124d84: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x124d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x124d88: 0x25ef4d40  addiu       $t7, $t7, 0x4D40
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 19776));
    // 0x124d8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124d90: 0xac8f003c  sw          $t7, 0x3C($a0)
    ctx->pc = 0x124d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 15));
    // 0x124d94: 0x248e01e4  addiu       $t6, $a0, 0x1E4
    ctx->pc = 0x124d94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 484));
    // 0x124d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124d9c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x124d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124da0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x124da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124da4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x124da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x124da8: 0xac8f0038  sw          $t7, 0x38($a0)
    ctx->pc = 0x124da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 15));
    // 0x124dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124db0: 0xac8e01e0  sw          $t6, 0x1E0($a0)
    ctx->pc = 0x124db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 14));
    // 0x124db4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124db8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x124db8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dc0: 0xac8f01dc  sw          $t7, 0x1DC($a0)
    ctx->pc = 0x124dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 15));
    // 0x124dc4: 0xc0492e6  jal         func_124B98
    ctx->pc = 0x124DC4u;
    SET_GPR_U32(ctx, 31, 0x124DCCu);
    ctx->pc = 0x124DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DC4u;
    // 0x124dc8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124B98u, 0x124DC4u, 0x124DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DCCu;
label_124dcc:
    // 0x124dcc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x124dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124dd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dd4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x124dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x124dd8: 0xc0492e6  jal         func_124B98
    ctx->pc = 0x124DD8u;
    SET_GPR_U32(ctx, 31, 0x124DE0u);
    ctx->pc = 0x124DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DD8u;
    // 0x124ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124B98u, 0x124DD8u, 0x124DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DE0u;
label_124de0:
    // 0x124de0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124de4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x124de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124de8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x124de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124dec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x124decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x124df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124df4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x124df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124df8: 0x80492e6  j           func_124B98
    ctx->pc = 0x124DF8u;
    ctx->pc = 0x124DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DF8u;
    // 0x124dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124B98u;
    sub_00124B98_0x124b98(rdram, ctx, runtime); return;
    ctx->pc = 0x124E00u;
}
