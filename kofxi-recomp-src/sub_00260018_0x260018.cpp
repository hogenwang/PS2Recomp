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

// Function: sub_00260018
// Address: 0x260018 - 0x260048
void sub_00260018_0x260018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260018_0x260018");
#endif

    switch (ctx->pc) {
        case 0x260030u: goto label_260030;
        default: break;
    }

    ctx->pc = 0x260018u;

    // 0x260018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26001c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260020: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x260020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x260024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x260028: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x260028u;
    SET_GPR_U32(ctx, 31, 0x260030u);
    ctx->pc = 0x26002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260028u;
    // 0x26002c: 0x8e04cec4  lw          $a0, -0x313C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x260028u, 0x260030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260030u;
label_260030:
    // 0x260030: 0x8e04cec4  lw          $a0, -0x313C($s0)
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954692)));
    // 0x260034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x260034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26003c: 0x804329c  j           func_10CA70
    ctx->pc = 0x26003Cu;
    ctx->pc = 0x260040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26003Cu;
    // 0x260040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime); return;
    ctx->pc = 0x260044u;
    // 0x260044: 0x0  nop
    ctx->pc = 0x260044u;
    // NOP
}
