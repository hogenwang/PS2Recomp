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

// Function: sub_001BB370
// Address: 0x1bb370 - 0x1bb3a0
void sub_001BB370_0x1bb370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB370_0x1bb370");
#endif

    switch (ctx->pc) {
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb38cu: goto label_1bb38c;
        default: break;
    }

    ctx->pc = 0x1bb370u;

    // 0x1bb370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb37c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB37Cu;
    SET_GPR_U32(ctx, 31, 0x1BB384u);
    ctx->pc = 0x1BB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB37Cu;
    // 0x1bb380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB37Cu, 0x1BB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB384u;
label_1bb384:
    // 0x1bb384: 0xc06ece8  jal         func_1BB3A0
    ctx->pc = 0x1BB384u;
    SET_GPR_U32(ctx, 31, 0x1BB38Cu);
    ctx->pc = 0x1BB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB384u;
    // 0x1bb388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB3A0u, 0x1BB384u, 0x1BB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB38Cu;
label_1bb38c:
    // 0x1bb38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb390: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb394: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB394u;
    ctx->pc = 0x1BB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB394u;
    // 0x1bb398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB39Cu;
    // 0x1bb39c: 0x0  nop
    ctx->pc = 0x1bb39cu;
    // NOP
    if (ctx->pc == 0x1bb39cu) { ctx->pc = 0x1bb3a0u; }
}
