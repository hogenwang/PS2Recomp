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

// Function: sub_0013E170
// Address: 0x13e170 - 0x13e1a0
void sub_0013E170_0x13e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E170_0x13e170");
#endif

    ctx->pc = 0x13e170u;

    // 0x13e170: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13e174: 0x90445c58  lbu         $a0, 0x5C58($v0)
    ctx->pc = 0x13e174u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23640)));
    // 0x13e178: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13e178u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e17c: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E17Cu;
    {
        const bool branch_taken_0x13e17c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e17c) {
            ctx->pc = 0x13E180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E17Cu;
            // 0x13e180: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E198u;
            goto label_13e198;
        }
    }
    ctx->pc = 0x13E184u;
    // 0x13e184: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x13e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13e188: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13e188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13e18c: 0x64040007  daddiu      $a0, $zero, 0x7
    ctx->pc = 0x13e18cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
    // 0x13e190: 0xa0435c58  sb          $v1, 0x5C58($v0)
    ctx->pc = 0x13e190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23640), (uint8_t)GPR_U32(ctx, 3));
    // 0x13e194: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_13e198:
    // 0x13e198: 0x3e00008  jr          $ra
    ctx->pc = 0x13E198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E1A0u;
}
