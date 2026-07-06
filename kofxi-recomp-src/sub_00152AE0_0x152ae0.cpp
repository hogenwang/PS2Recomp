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

// Function: sub_00152AE0
// Address: 0x152ae0 - 0x152b10
void sub_00152AE0_0x152ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152AE0_0x152ae0");
#endif

    ctx->pc = 0x152ae0u;

    // 0x152ae0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152ae4: 0x8c43ef88  lw          $v1, -0x1078($v0)
    ctx->pc = 0x152ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963080)));
    // 0x152ae8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x152AE8u;
    {
        const bool branch_taken_0x152ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ae8) {
            ctx->pc = 0x152AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152AE8u;
            // 0x152aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B04u;
            goto label_152b04;
        }
    }
    ctx->pc = 0x152AF0u;
    // 0x152af0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x152af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x152af4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x152af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x152af8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152afc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x152afcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152b00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_152b04:
    // 0x152b04: 0x3e00008  jr          $ra
    ctx->pc = 0x152B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152B0Cu;
    // 0x152b0c: 0x0  nop
    ctx->pc = 0x152b0cu;
    // NOP
}
