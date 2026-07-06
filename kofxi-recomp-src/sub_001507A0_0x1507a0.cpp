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

// Function: sub_001507A0
// Address: 0x1507a0 - 0x1507e0
void sub_001507A0_0x1507a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001507A0_0x1507a0");
#endif

    ctx->pc = 0x1507a0u;

    // 0x1507a0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1507a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1507a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1507a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1507a8: 0xa460ef30  sh          $zero, -0x10D0($v1)
    ctx->pc = 0x1507a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962992), (uint16_t)GPR_U32(ctx, 0));
    // 0x1507ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1507acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1507b0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1507b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1507b4: 0xa465ef32  sh          $a1, -0x10CE($v1)
    ctx->pc = 0x1507b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962994), (uint16_t)GPR_U32(ctx, 5));
    // 0x1507b8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1507b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1507bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1507c0: 0xa464ef34  sh          $a0, -0x10CC($v1)
    ctx->pc = 0x1507c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962996), (uint16_t)GPR_U32(ctx, 4));
    // 0x1507c4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1507c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1507c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1507c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1507cc: 0xa465ef36  sh          $a1, -0x10CA($v1)
    ctx->pc = 0x1507ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294962998), (uint16_t)GPR_U32(ctx, 5));
    // 0x1507d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1507d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1507d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1507D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1507D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507D4u;
        // 0x1507d8: 0xa464ef38  sh          $a0, -0x10C8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963000), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1507D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1507DCu;
    // 0x1507dc: 0x0  nop
    ctx->pc = 0x1507dcu;
    // NOP
    if (ctx->pc == 0x1507dcu) { ctx->pc = 0x1507e0u; }
}
