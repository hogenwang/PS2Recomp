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

// Function: sub_001C6A48
// Address: 0x1c6a48 - 0x1c6a88
void sub_001C6A48_0x1c6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A48_0x1c6a48");
#endif

    switch (ctx->pc) {
        case 0x1c6a64u: goto label_1c6a64;
        case 0x1c6a70u: goto label_1c6a70;
        default: break;
    }

    ctx->pc = 0x1c6a48u;

    // 0x1c6a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6a5c: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A64u);
    ctx->pc = 0x1C6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A5Cu;
    // 0x1c6a60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C6A5Cu, 0x1C6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A64u;
label_1c6a64:
    // 0x1c6a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a68: 0xc071aa2  jal         func_1C6A88
    ctx->pc = 0x1C6A68u;
    SET_GPR_U32(ctx, 31, 0x1C6A70u);
    ctx->pc = 0x1C6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A68u;
    // 0x1c6a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A88u, 0x1C6A68u, 0x1C6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A70u;
label_1c6a70:
    // 0x1c6a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6a7c: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C6A7Cu;
    ctx->pc = 0x1C6A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A7Cu;
    // 0x1c6a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6A84u;
    // 0x1c6a84: 0x0  nop
    ctx->pc = 0x1c6a84u;
    // NOP
    if (ctx->pc == 0x1c6a84u) { ctx->pc = 0x1c6a88u; }
}
