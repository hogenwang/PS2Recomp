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

// Function: sub_00156000
// Address: 0x156000 - 0x156040
void sub_00156000_0x156000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156000_0x156000");
#endif

    ctx->pc = 0x156000u;

    // 0x156000: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156004: 0x944207d0  lhu         $v0, 0x7D0($v0)
    ctx->pc = 0x156004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x156008: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x156008u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15600c: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15600Cu;
    {
        const bool branch_taken_0x15600c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15600c) {
            ctx->pc = 0x156010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15600Cu;
            // 0x156010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156034u;
            goto label_156034;
        }
    }
    ctx->pc = 0x156014u;
    // 0x156014: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x156014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156018: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x156018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15601c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156020: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x156024: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x156024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x156028: 0xa44507d0  sh          $a1, 0x7D0($v0)
    ctx->pc = 0x156028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2000), (uint16_t)GPR_U32(ctx, 5));
    // 0x15602c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x15602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x156030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156034:
    // 0x156034: 0x3e00008  jr          $ra
    ctx->pc = 0x156034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15603Cu;
    // 0x15603c: 0x0  nop
    ctx->pc = 0x15603cu;
    // NOP
}
