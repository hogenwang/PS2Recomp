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

// Function: sub_001C5EE8
// Address: 0x1c5ee8 - 0x1c5f28
void sub_001C5EE8_0x1c5ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5EE8_0x1c5ee8");
#endif

    switch (ctx->pc) {
        case 0x1c5f04u: goto label_1c5f04;
        case 0x1c5f10u: goto label_1c5f10;
        default: break;
    }

    ctx->pc = 0x1c5ee8u;

    // 0x1c5ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5efc: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C5EFCu;
    SET_GPR_U32(ctx, 31, 0x1C5F04u);
    ctx->pc = 0x1C5F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EFCu;
    // 0x1c5f00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C5EFCu, 0x1C5F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F04u;
label_1c5f04:
    // 0x1c5f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f08: 0xc0717ca  jal         func_1C5F28
    ctx->pc = 0x1C5F08u;
    SET_GPR_U32(ctx, 31, 0x1C5F10u);
    ctx->pc = 0x1C5F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F08u;
    // 0x1c5f0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F28u, 0x1C5F08u, 0x1C5F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F10u;
label_1c5f10:
    // 0x1c5f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5f1c: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C5F1Cu;
    ctx->pc = 0x1C5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F1Cu;
    // 0x1c5f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5F24u;
    // 0x1c5f24: 0x0  nop
    ctx->pc = 0x1c5f24u;
    // NOP
    if (ctx->pc == 0x1c5f24u) { ctx->pc = 0x1c5f28u; }
}
