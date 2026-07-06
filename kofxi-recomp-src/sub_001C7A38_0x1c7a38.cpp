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

// Function: sub_001C7A38
// Address: 0x1c7a38 - 0x1c7a78
void sub_001C7A38_0x1c7a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7A38_0x1c7a38");
#endif

    switch (ctx->pc) {
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a60u: goto label_1c7a60;
        default: break;
    }

    ctx->pc = 0x1c7a38u;

    // 0x1c7a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7a4c: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A54u);
    ctx->pc = 0x1C7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A4Cu;
    // 0x1c7a50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C7A4Cu, 0x1C7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A54u;
label_1c7a54:
    // 0x1c7a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a58: 0xc071e9e  jal         func_1C7A78
    ctx->pc = 0x1C7A58u;
    SET_GPR_U32(ctx, 31, 0x1C7A60u);
    ctx->pc = 0x1C7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A58u;
    // 0x1c7a5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A78u, 0x1C7A58u, 0x1C7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A60u;
label_1c7a60:
    // 0x1c7a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7a6c: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7A6Cu;
    ctx->pc = 0x1C7A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A6Cu;
    // 0x1c7a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7A74u;
    // 0x1c7a74: 0x0  nop
    ctx->pc = 0x1c7a74u;
    // NOP
}
