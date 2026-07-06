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

// Function: sub_0032A7C0
// Address: 0x32a7c0 - 0x32a810
void sub_0032A7C0_0x32a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A7C0_0x32a7c0");
#endif

    ctx->pc = 0x32a7c0u;

    // 0x32a7c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32a7c4: 0xa0830274  sb          $v1, 0x274($a0)
    ctx->pc = 0x32a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a7c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x32a7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32a7cc: 0xa4830088  sh          $v1, 0x88($a0)
    ctx->pc = 0x32a7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a7d0: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x32a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    // 0x32a7d4: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x32a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x32a7d8: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x32a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x32a7dc: 0xa4800250  sh          $zero, 0x250($a0)
    ctx->pc = 0x32a7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 592), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7e0: 0xa4800252  sh          $zero, 0x252($a0)
    ctx->pc = 0x32a7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7e4: 0xa4800254  sh          $zero, 0x254($a0)
    ctx->pc = 0x32a7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 596), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7e8: 0xa4800256  sh          $zero, 0x256($a0)
    ctx->pc = 0x32a7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 598), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7ec: 0xa480026a  sh          $zero, 0x26A($a0)
    ctx->pc = 0x32a7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 618), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7f0: 0xa480026c  sh          $zero, 0x26C($a0)
    ctx->pc = 0x32a7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 620), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7f4: 0xa480026e  sh          $zero, 0x26E($a0)
    ctx->pc = 0x32a7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 622), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7f8: 0xa4800270  sh          $zero, 0x270($a0)
    ctx->pc = 0x32a7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 624), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7fc: 0xa4800272  sh          $zero, 0x272($a0)
    ctx->pc = 0x32a7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 626), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a800: 0x3e00008  jr          $ra
    ctx->pc = 0x32A800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A800u;
        // 0x32a804: 0xa08002bc  sb          $zero, 0x2BC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 700), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A808u;
    // 0x32a808: 0x0  nop
    ctx->pc = 0x32a808u;
    // NOP
    // 0x32a80c: 0x0  nop
    ctx->pc = 0x32a80cu;
    // NOP
    if (ctx->pc == 0x32a80cu) { ctx->pc = 0x32a810u; }
}
