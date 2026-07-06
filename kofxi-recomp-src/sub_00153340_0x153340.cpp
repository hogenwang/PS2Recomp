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

// Function: sub_00153340
// Address: 0x153340 - 0x153370
void sub_00153340_0x153340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153340_0x153340");
#endif

    ctx->pc = 0x153340u;

    // 0x153340: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153344: 0x8c43ef80  lw          $v1, -0x1080($v0)
    ctx->pc = 0x153344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963072)));
    // 0x153348: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x153348u;
    {
        const bool branch_taken_0x153348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153348) {
            ctx->pc = 0x15334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153348u;
            // 0x15334c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153364u;
            goto label_153364;
        }
    }
    ctx->pc = 0x153350u;
    // 0x153350: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x153350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x153354: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x153358: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15335c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x15335cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153360: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153364:
    // 0x153364: 0x3e00008  jr          $ra
    ctx->pc = 0x153364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15336Cu;
    // 0x15336c: 0x0  nop
    ctx->pc = 0x15336cu;
    // NOP
    if (ctx->pc == 0x15336cu) { ctx->pc = 0x153370u; }
}
