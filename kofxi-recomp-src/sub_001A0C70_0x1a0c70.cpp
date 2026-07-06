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

// Function: sub_001A0C70
// Address: 0x1a0c70 - 0x1a0cc0
void sub_001A0C70_0x1a0c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0C70_0x1a0c70");
#endif

    ctx->pc = 0x1a0c70u;

    // 0x1a0c70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c74: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1a0c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a0c78: 0x9066dae0  lbu         $a2, -0x2520($v1)
    ctx->pc = 0x1a0c78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x1a0c7c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c84: 0x30c600fc  andi        $a2, $a2, 0xFC
    ctx->pc = 0x1a0c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)252);
    // 0x1a0c88: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x1a0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a0c8c: 0xa086dae0  sb          $a2, -0x2520($a0)
    ctx->pc = 0x1a0c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957792), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a0c90: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c94: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a0c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a0c98: 0x9063dad8  lbu         $v1, -0x2528($v1)
    ctx->pc = 0x1a0c98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957784)));
    // 0x1a0c9c: 0xa02827  not         $a1, $a1
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x1a0ca0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a0ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a0ca4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1a0ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0ca8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CACu;
        // 0x1a0cb0: 0xa064dad8  sb          $a0, -0x2528($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957784), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0CB4u;
    // 0x1a0cb4: 0x0  nop
    ctx->pc = 0x1a0cb4u;
    // NOP
    // 0x1a0cb8: 0x0  nop
    ctx->pc = 0x1a0cb8u;
    // NOP
    // 0x1a0cbc: 0x0  nop
    ctx->pc = 0x1a0cbcu;
    // NOP
    if (ctx->pc == 0x1a0cbcu) { ctx->pc = 0x1a0cc0u; }
}
