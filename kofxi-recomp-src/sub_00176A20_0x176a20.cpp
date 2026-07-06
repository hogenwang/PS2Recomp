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

// Function: sub_00176A20
// Address: 0x176a20 - 0x176a50
void sub_00176A20_0x176a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176A20_0x176a20");
#endif

    ctx->pc = 0x176a20u;

    // 0x176a20: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x176a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x176a24: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x176a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x176a28: 0x2442d6e8  addiu       $v0, $v0, -0x2918
    ctx->pc = 0x176a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
    // 0x176a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176a30: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176a34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x176a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x176a38: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x176a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x176a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x176A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A3Cu;
        // 0x176a40: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176A44u;
    // 0x176a44: 0x0  nop
    ctx->pc = 0x176a44u;
    // NOP
    // 0x176a48: 0x0  nop
    ctx->pc = 0x176a48u;
    // NOP
    // 0x176a4c: 0x0  nop
    ctx->pc = 0x176a4cu;
    // NOP
    if (ctx->pc == 0x176a4cu) { ctx->pc = 0x176a50u; }
}
