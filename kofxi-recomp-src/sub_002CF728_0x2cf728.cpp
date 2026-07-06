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

// Function: sub_002CF728
// Address: 0x2cf728 - 0x2cf750
void sub_002CF728_0x2cf728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF728_0x2cf728");
#endif

    switch (ctx->pc) {
        case 0x2cf73cu: goto label_2cf73c;
        default: break;
    }

    ctx->pc = 0x2cf728u;

    // 0x2cf728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf72c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf734: 0xc0b3dd4  jal         func_2CF750
    ctx->pc = 0x2CF734u;
    SET_GPR_U32(ctx, 31, 0x2CF73Cu);
    ctx->pc = 0x2CF738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF734u;
    // 0x2cf738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF750u, 0x2CF734u, 0x2CF73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF73Cu;
label_2cf73c:
    // 0x2cf73c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf740: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2cf740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf748: 0x80b60dc  j           func_2D8370
    ctx->pc = 0x2CF748u;
    ctx->pc = 0x2CF74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF748u;
    // 0x2cf74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    sub_002D8370_0x2d8370(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF750u;
}
