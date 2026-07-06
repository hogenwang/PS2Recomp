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

// Function: sub_001C7AC0
// Address: 0x1c7ac0 - 0x1c7af0
void sub_001C7AC0_0x1c7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7AC0_0x1c7ac0");
#endif

    switch (ctx->pc) {
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7adcu: goto label_1c7adc;
        default: break;
    }

    ctx->pc = 0x1c7ac0u;

    // 0x1c7ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7acc: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7ACCu;
    SET_GPR_U32(ctx, 31, 0x1C7AD4u);
    ctx->pc = 0x1C7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ACCu;
    // 0x1c7ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C7ACCu, 0x1C7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AD4u;
label_1c7ad4:
    // 0x1c7ad4: 0xc071ebc  jal         func_1C7AF0
    ctx->pc = 0x1C7AD4u;
    SET_GPR_U32(ctx, 31, 0x1C7ADCu);
    ctx->pc = 0x1C7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AD4u;
    // 0x1c7ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7AF0u, 0x1C7AD4u, 0x1C7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ADCu;
label_1c7adc:
    // 0x1c7adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7ae4: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7AE4u;
    ctx->pc = 0x1C7AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AE4u;
    // 0x1c7ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7AECu;
    // 0x1c7aec: 0x0  nop
    ctx->pc = 0x1c7aecu;
    // NOP
    if (ctx->pc == 0x1c7aecu) { ctx->pc = 0x1c7af0u; }
}
