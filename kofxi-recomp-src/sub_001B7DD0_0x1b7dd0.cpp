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

// Function: sub_001B7DD0
// Address: 0x1b7dd0 - 0x1b7e10
void sub_001B7DD0_0x1b7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7DD0_0x1b7dd0");
#endif

    switch (ctx->pc) {
        case 0x1b7decu: goto label_1b7dec;
        case 0x1b7df8u: goto label_1b7df8;
        default: break;
    }

    ctx->pc = 0x1b7dd0u;

    // 0x1b7dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7de4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7DE4u;
    SET_GPR_U32(ctx, 31, 0x1B7DECu);
    ctx->pc = 0x1B7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DE4u;
    // 0x1b7de8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7DE4u, 0x1B7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DECu;
label_1b7dec:
    // 0x1b7dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7df0: 0xc06df84  jal         func_1B7E10
    ctx->pc = 0x1B7DF0u;
    SET_GPR_U32(ctx, 31, 0x1B7DF8u);
    ctx->pc = 0x1B7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DF0u;
    // 0x1b7df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E10u, 0x1B7DF0u, 0x1B7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DF8u;
label_1b7df8:
    // 0x1b7df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e04: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B7E04u;
    ctx->pc = 0x1B7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E04u;
    // 0x1b7e08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7E0Cu;
    // 0x1b7e0c: 0x0  nop
    ctx->pc = 0x1b7e0cu;
    // NOP
    if (ctx->pc == 0x1b7e0cu) { ctx->pc = 0x1b7e10u; }
}
