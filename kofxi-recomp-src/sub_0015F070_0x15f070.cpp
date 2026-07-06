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

// Function: sub_0015F070
// Address: 0x15f070 - 0x15f0a0
void sub_0015F070_0x15f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F070_0x15f070");
#endif

    ctx->pc = 0x15f070u;

    // 0x15f070: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F070u;
    {
        const bool branch_taken_0x15f070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f070) {
            ctx->pc = 0x15F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F070u;
            // 0x15f074: 0x9482000e  lhu         $v0, 0xE($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F088u;
            goto label_15f088;
        }
    }
    ctx->pc = 0x15F078u;
    // 0x15f078: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x15f078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x15f07c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x15f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x15f080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F080u;
    {
        const bool branch_taken_0x15f080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F080u;
        // 0x15f084: 0xa482000e  sh          $v0, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f080) {
            ctx->pc = 0x15F090u;
            goto label_15f090;
        }
    }
    ctx->pc = 0x15F088u;
label_15f088:
    // 0x15f088: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15f08c: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x15f08cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
label_15f090:
    // 0x15f090: 0x3e00008  jr          $ra
    ctx->pc = 0x15F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F090u;
        // 0x15f094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F098u;
    // 0x15f098: 0x0  nop
    ctx->pc = 0x15f098u;
    // NOP
    // 0x15f09c: 0x0  nop
    ctx->pc = 0x15f09cu;
    // NOP
    if (ctx->pc == 0x15f09cu) { ctx->pc = 0x15f0a0u; }
}
