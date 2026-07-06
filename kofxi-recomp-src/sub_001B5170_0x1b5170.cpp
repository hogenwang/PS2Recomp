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

// Function: sub_001B5170
// Address: 0x1b5170 - 0x1b51b0
void sub_001B5170_0x1b5170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5170_0x1b5170");
#endif

    switch (ctx->pc) {
        case 0x1b5194u: goto label_1b5194;
        default: break;
    }

    ctx->pc = 0x1b5170u;

    // 0x1b5170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b517c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5180: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b5180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5188: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x1b5188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x1b518c: 0xc06a674  jal         func_1A99D0
    ctx->pc = 0x1B518Cu;
    SET_GPR_U32(ctx, 31, 0x1B5194u);
    ctx->pc = 0x1B5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B518Cu;
    // 0x1b5190: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A99D0u, 0x1B518Cu, 0x1B5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5194u;
label_1b5194:
    // 0x1b5194: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b5198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b519c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b519cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b51a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b51a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b51a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b51a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b51a8: 0x806a5fa  j           func_1A97E8
    ctx->pc = 0x1B51A8u;
    ctx->pc = 0x1B51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51A8u;
    // 0x1b51ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A97E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A97E8u, 0x1B51A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B51B0u;
}
