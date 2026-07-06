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

// Function: sub_001B7F40
// Address: 0x1b7f40 - 0x1b7f70
void sub_001B7F40_0x1b7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7F40_0x1b7f40");
#endif

    switch (ctx->pc) {
        case 0x1b7f54u: goto label_1b7f54;
        case 0x1b7f5cu: goto label_1b7f5c;
        default: break;
    }

    ctx->pc = 0x1b7f40u;

    // 0x1b7f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7f48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7f4c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B7F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B7F54u);
    ctx->pc = 0x1B7F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F4Cu;
    // 0x1b7f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B7F4Cu, 0x1B7F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F54u;
label_1b7f54:
    // 0x1b7f54: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1B7F54u;
    SET_GPR_U32(ctx, 31, 0x1B7F5Cu);
    ctx->pc = 0x1B7F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F54u;
    // 0x1b7f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1B7F54u, 0x1B7F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F5Cu;
label_1b7f5c:
    // 0x1b7f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7f64: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B7F64u;
    ctx->pc = 0x1B7F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F64u;
    // 0x1b7f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7F6Cu;
    // 0x1b7f6c: 0x0  nop
    ctx->pc = 0x1b7f6cu;
    // NOP
    if (ctx->pc == 0x1b7f6cu) { ctx->pc = 0x1b7f70u; }
}
