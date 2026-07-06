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

// Function: sub_002C2824
// Address: 0x2c2824 - 0x2c2868
void sub_002C2824_0x2c2824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2824_0x2c2824");
#endif

    switch (ctx->pc) {
        case 0x2c283cu: goto label_2c283c;
        case 0x2c2844u: goto label_2c2844;
        default: break;
    }

    ctx->pc = 0x2c2824u;

    // 0x2c2824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c282c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C282Cu;
    {
        const bool branch_taken_0x2c282c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C282Cu;
        // 0x2c2830: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c282c) {
            ctx->pc = 0x2C2858u;
            goto label_2c2858;
        }
    }
    ctx->pc = 0x2C2834u;
    // 0x2c2834: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x2C2834u;
    SET_GPR_U32(ctx, 31, 0x2C283Cu);
    ctx->pc = 0x2C2838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2834u;
    // 0x2c2838: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280ED8u, 0x2C2834u, 0x2C283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C283Cu;
label_2c283c:
    // 0x2c283c: 0xc0a0c14  jal         func_283050
    ctx->pc = 0x2C283Cu;
    SET_GPR_U32(ctx, 31, 0x2C2844u);
    ctx->pc = 0x2C2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C283Cu;
    // 0x2c2840: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283050u, 0x2C283Cu, 0x2C2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2844u;
label_2c2844:
    // 0x2c2844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c284c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c284cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2850: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C2850u;
    ctx->pc = 0x2C2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2850u;
    // 0x2c2854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2C2858u;
label_2c2858:
    // 0x2c2858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c285c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c285cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2860: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2860u;
        // 0x2c2864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2868u;
}
