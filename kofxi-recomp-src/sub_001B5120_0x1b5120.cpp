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

// Function: sub_001B5120
// Address: 0x1b5120 - 0x1b5170
void sub_001B5120_0x1b5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5120_0x1b5120");
#endif

    switch (ctx->pc) {
        case 0x1b5144u: goto label_1b5144;
        default: break;
    }

    ctx->pc = 0x1b5120u;

    // 0x1b5120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b512c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5130: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b5130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5138: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1b5138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1b513c: 0xc06a668  jal         func_1A99A0
    ctx->pc = 0x1B513Cu;
    SET_GPR_U32(ctx, 31, 0x1B5144u);
    ctx->pc = 0x1B5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B513Cu;
    // 0x1b5140: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A99A0u, 0x1B513Cu, 0x1B5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5144u;
label_1b5144:
    // 0x1b5144: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b5144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b5148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b514c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b514cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5158: 0x806a5ee  j           func_1A97B8
    ctx->pc = 0x1B5158u;
    ctx->pc = 0x1B515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5158u;
    // 0x1b515c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A97B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A97B8u, 0x1B5158u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B5160u;
    // 0x1b5160: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b5164: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b5168: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5168u;
        // 0x1b516c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5170u;
}
