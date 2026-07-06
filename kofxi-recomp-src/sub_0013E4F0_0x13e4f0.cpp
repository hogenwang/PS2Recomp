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

// Function: sub_0013E4F0
// Address: 0x13e4f0 - 0x13e540
void sub_0013E4F0_0x13e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E4F0_0x13e4f0");
#endif

    switch (ctx->pc) {
        case 0x13e504u: goto label_13e504;
        default: break;
    }

    ctx->pc = 0x13e4f0u;

    // 0x13e4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e4f4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13e4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e4fc: 0xc063730  jal         func_18DCC0
    ctx->pc = 0x13E4FCu;
    SET_GPR_U32(ctx, 31, 0x13E504u);
    ctx->pc = 0x13E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4FCu;
    // 0x13e500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DCC0u, 0x13E4FCu, 0x13E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E504u;
label_13e504:
    // 0x13e504: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E504u;
    {
        const bool branch_taken_0x13e504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e504) {
            ctx->pc = 0x13E514u;
            goto label_13e514;
        }
    }
    ctx->pc = 0x13E50Cu;
    // 0x13e50c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E50Cu;
    {
        const bool branch_taken_0x13e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E50Cu;
        // 0x13e510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e50c) {
            ctx->pc = 0x13E530u;
            goto label_13e530;
        }
    }
    ctx->pc = 0x13E514u;
label_13e514:
    // 0x13e514: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13e514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13e518: 0x90645cc0  lbu         $a0, 0x5CC0($v1)
    ctx->pc = 0x13e518u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23744)));
    // 0x13e51c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x13e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13e520: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e524: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x13e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x13e528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e52c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13e52cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_13e530:
    // 0x13e530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e534: 0x3e00008  jr          $ra
    ctx->pc = 0x13E534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E534u;
        // 0x13e538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E53Cu;
    // 0x13e53c: 0x0  nop
    ctx->pc = 0x13e53cu;
    // NOP
    if (ctx->pc == 0x13e53cu) { ctx->pc = 0x13e540u; }
}
