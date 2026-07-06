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

// Function: sub_001B90E8
// Address: 0x1b90e8 - 0x1b9128
void sub_001B90E8_0x1b90e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B90E8_0x1b90e8");
#endif

    switch (ctx->pc) {
        case 0x1b9104u: goto label_1b9104;
        case 0x1b9110u: goto label_1b9110;
        default: break;
    }

    ctx->pc = 0x1b90e8u;

    // 0x1b90e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b90e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b90ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b90ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b90f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b90f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b90f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b90f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b90fc: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B90FCu;
    SET_GPR_U32(ctx, 31, 0x1B9104u);
    ctx->pc = 0x1B9100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90FCu;
    // 0x1b9100: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B90FCu, 0x1B9104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9104u;
label_1b9104:
    // 0x1b9104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9108: 0xc06e44a  jal         func_1B9128
    ctx->pc = 0x1B9108u;
    SET_GPR_U32(ctx, 31, 0x1B9110u);
    ctx->pc = 0x1B910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9108u;
    // 0x1b910c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9128u, 0x1B9108u, 0x1B9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9110u;
label_1b9110:
    // 0x1b9110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b911c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B911Cu;
    ctx->pc = 0x1B9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B911Cu;
    // 0x1b9120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9124u;
    // 0x1b9124: 0x0  nop
    ctx->pc = 0x1b9124u;
    // NOP
}
