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

// Function: kofxiNormalizeSchedulerState
// Address: 0x1b2968 - 0x1b29a0
void kofxiNormalizeSchedulerState_0x1b2968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiNormalizeSchedulerState_0x1b2968");
#endif

    switch (ctx->pc) {
        case 0x1b2980u: goto label_1b2980;
        default: break;
    }

    ctx->pc = 0x1b2968u;

    // 0x1b2968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b296c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2970: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2970u;
    {
        const bool branch_taken_0x1b2970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2970u;
        // 0x1b2974: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2970) {
            ctx->pc = 0x1B2990u;
            goto label_1b2990;
        }
    }
    ctx->pc = 0x1B2978u;
    // 0x1b2978: 0xc06cd92  jal         func_1B3648
    ctx->pc = 0x1B2978u;
    SET_GPR_U32(ctx, 31, 0x1B2980u);
    ctx->pc = 0x1B3648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3648u, 0x1B2978u, 0x1B2980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2980u;
label_1b2980:
    // 0x1b2980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2984: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2988: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b298c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b298cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b2990:
    // 0x1b2990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b2994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2998: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2998u;
        // 0x1b299c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B29A0u;
}
