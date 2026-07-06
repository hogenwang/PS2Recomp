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

// Function: sub_001B9280
// Address: 0x1b9280 - 0x1b92b0
void sub_001B9280_0x1b9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9280_0x1b9280");
#endif

    switch (ctx->pc) {
        case 0x1b9294u: goto label_1b9294;
        case 0x1b929cu: goto label_1b929c;
        default: break;
    }

    ctx->pc = 0x1b9280u;

    // 0x1b9280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b928c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B928Cu;
    SET_GPR_U32(ctx, 31, 0x1B9294u);
    ctx->pc = 0x1B9290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B928Cu;
    // 0x1b9290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B928Cu, 0x1B9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9294u;
label_1b9294:
    // 0x1b9294: 0xc06e4ac  jal         func_1B92B0
    ctx->pc = 0x1B9294u;
    SET_GPR_U32(ctx, 31, 0x1B929Cu);
    ctx->pc = 0x1B9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9294u;
    // 0x1b9298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B92B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B92B0u, 0x1B9294u, 0x1B929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B929Cu;
label_1b929c:
    // 0x1b929c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b929cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b92a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b92a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b92a4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B92A4u;
    ctx->pc = 0x1B92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92A4u;
    // 0x1b92a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B92ACu;
    // 0x1b92ac: 0x0  nop
    ctx->pc = 0x1b92acu;
    // NOP
}
