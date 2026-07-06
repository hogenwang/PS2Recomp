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

// Function: sub_001DCE38
// Address: 0x1dce38 - 0x1dce98
void sub_001DCE38_0x1dce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCE38_0x1dce38");
#endif

    switch (ctx->pc) {
        case 0x1dce54u: goto label_1dce54;
        case 0x1dce60u: goto label_1dce60;
        default: break;
    }

    ctx->pc = 0x1dce38u;

    // 0x1dce38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dce3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dce40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dce40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dce48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dce4c: 0xc077358  jal         func_1DCD60
    ctx->pc = 0x1DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE54u);
    ctx->pc = 0x1DCE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE4Cu;
    // 0x1dce50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD60u, 0x1DCE4Cu, 0x1DCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE54u;
label_1dce54:
    // 0x1dce54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dce54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce58: 0xc0773a6  jal         func_1DCE98
    ctx->pc = 0x1DCE58u;
    SET_GPR_U32(ctx, 31, 0x1DCE60u);
    ctx->pc = 0x1DCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE58u;
    // 0x1dce5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE98u, 0x1DCE58u, 0x1DCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE60u;
label_1dce60:
    // 0x1dce60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCE64u;
    {
        const bool branch_taken_0x1dce64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE64u;
        // 0x1dce68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce64) {
            ctx->pc = 0x1DCE80u;
            goto label_1dce80;
        }
    }
    ctx->pc = 0x1DCE6Cu;
    // 0x1dce6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dce6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dce70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dce74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dce74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dce78: 0x807736c  j           func_1DCDB0
    ctx->pc = 0x1DCE78u;
    ctx->pc = 0x1DCE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE78u;
    // 0x1dce7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCDB0u;
    sub_001DCDB0_0x1dcdb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCE80u;
label_1dce80:
    // 0x1dce80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dce80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dce84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dce88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dce8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE8Cu;
        // 0x1dce90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCE94u;
    // 0x1dce94: 0x0  nop
    ctx->pc = 0x1dce94u;
    // NOP
    if (ctx->pc == 0x1dce94u) { ctx->pc = 0x1dce98u; }
}
