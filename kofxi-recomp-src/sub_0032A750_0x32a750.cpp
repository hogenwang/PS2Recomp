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

// Function: sub_0032A750
// Address: 0x32a750 - 0x32a7c0
void sub_0032A750_0x32a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A750_0x32a750");
#endif

    ctx->pc = 0x32a750u;

    // 0x32a750: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x32a750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32a754: 0xa4830088  sh          $v1, 0x88($a0)
    ctx->pc = 0x32a754u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a758: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32a75c: 0xa0830274  sb          $v1, 0x274($a0)
    ctx->pc = 0x32a75cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a760: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x32a760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    // 0x32a764: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x32a764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x32a768: 0xa4800242  sh          $zero, 0x242($a0)
    ctx->pc = 0x32a768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a76c: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x32a76cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a770: 0xa4800246  sh          $zero, 0x246($a0)
    ctx->pc = 0x32a770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a774: 0xa4800248  sh          $zero, 0x248($a0)
    ctx->pc = 0x32a774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a778: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x32a778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x32a77c: 0xa4800250  sh          $zero, 0x250($a0)
    ctx->pc = 0x32a77cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 592), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a780: 0xa4800252  sh          $zero, 0x252($a0)
    ctx->pc = 0x32a780u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a784: 0xa4800254  sh          $zero, 0x254($a0)
    ctx->pc = 0x32a784u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 596), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a788: 0xa4800256  sh          $zero, 0x256($a0)
    ctx->pc = 0x32a788u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 598), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a78c: 0xa480026a  sh          $zero, 0x26A($a0)
    ctx->pc = 0x32a78cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 618), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a790: 0xa480026c  sh          $zero, 0x26C($a0)
    ctx->pc = 0x32a790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 620), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a794: 0xa480026e  sh          $zero, 0x26E($a0)
    ctx->pc = 0x32a794u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 622), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a798: 0xa4800270  sh          $zero, 0x270($a0)
    ctx->pc = 0x32a798u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 624), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a79c: 0xa4800272  sh          $zero, 0x272($a0)
    ctx->pc = 0x32a79cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 626), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7a0: 0xa480023c  sh          $zero, 0x23C($a0)
    ctx->pc = 0x32a7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 572), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7a4: 0xa480023e  sh          $zero, 0x23E($a0)
    ctx->pc = 0x32a7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 574), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a7a8: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x32a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
    // 0x32a7ac: 0xac800230  sw          $zero, 0x230($a0)
    ctx->pc = 0x32a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
    // 0x32a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32A7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7B0u;
        // 0x32a7b4: 0xa08002bc  sb          $zero, 0x2BC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 700), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A7B8u;
    // 0x32a7b8: 0x0  nop
    ctx->pc = 0x32a7b8u;
    // NOP
    // 0x32a7bc: 0x0  nop
    ctx->pc = 0x32a7bcu;
    // NOP
}
