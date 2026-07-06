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

// Function: sub_0013B890
// Address: 0x13b890 - 0x13b910
void sub_0013B890_0x13b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B890_0x13b890");
#endif

    ctx->pc = 0x13b890u;

    // 0x13b890: 0xac800208  sw          $zero, 0x208($a0)
    ctx->pc = 0x13b890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 0));
    // 0x13b894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b898: 0xa480020c  sh          $zero, 0x20C($a0)
    ctx->pc = 0x13b898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 524), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b89c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x13b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13b8a0: 0xa480020e  sh          $zero, 0x20E($a0)
    ctx->pc = 0x13b8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 526), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8a4: 0xa0800210  sb          $zero, 0x210($a0)
    ctx->pc = 0x13b8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b8a8: 0xa0800211  sb          $zero, 0x211($a0)
    ctx->pc = 0x13b8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 529), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b8ac: 0xac850214  sw          $a1, 0x214($a0)
    ctx->pc = 0x13b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 5));
    // 0x13b8b0: 0xac850218  sw          $a1, 0x218($a0)
    ctx->pc = 0x13b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 5));
    // 0x13b8b4: 0xa083021c  sb          $v1, 0x21C($a0)
    ctx->pc = 0x13b8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 540), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b8b8: 0xac800220  sw          $zero, 0x220($a0)
    ctx->pc = 0x13b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 0));
    // 0x13b8bc: 0xa4800224  sh          $zero, 0x224($a0)
    ctx->pc = 0x13b8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8c0: 0xa4800226  sh          $zero, 0x226($a0)
    ctx->pc = 0x13b8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8c4: 0xac800230  sw          $zero, 0x230($a0)
    ctx->pc = 0x13b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
    // 0x13b8c8: 0xa4800234  sh          $zero, 0x234($a0)
    ctx->pc = 0x13b8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 564), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8cc: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x13b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x13b8d0: 0xac80023c  sw          $zero, 0x23C($a0)
    ctx->pc = 0x13b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 0));
    // 0x13b8d4: 0xa4800240  sh          $zero, 0x240($a0)
    ctx->pc = 0x13b8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 576), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8d8: 0xa4800242  sh          $zero, 0x242($a0)
    ctx->pc = 0x13b8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8dc: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x13b8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8e0: 0xa4800228  sh          $zero, 0x228($a0)
    ctx->pc = 0x13b8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8e4: 0xa480022a  sh          $zero, 0x22A($a0)
    ctx->pc = 0x13b8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8e8: 0xa4800248  sh          $zero, 0x248($a0)
    ctx->pc = 0x13b8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8ec: 0xa480024a  sh          $zero, 0x24A($a0)
    ctx->pc = 0x13b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 586), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8f0: 0xa480022c  sh          $zero, 0x22C($a0)
    ctx->pc = 0x13b8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8f4: 0xa0800254  sb          $zero, 0x254($a0)
    ctx->pc = 0x13b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 596), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b8f8: 0xa480024c  sh          $zero, 0x24C($a0)
    ctx->pc = 0x13b8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b8fc: 0xa080025e  sb          $zero, 0x25E($a0)
    ctx->pc = 0x13b8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 606), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b900: 0xa080025f  sb          $zero, 0x25F($a0)
    ctx->pc = 0x13b900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 607), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b904: 0x3e00008  jr          $ra
    ctx->pc = 0x13B904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B904u;
        // 0x13b908: 0xa0800260  sb          $zero, 0x260($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 608), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B90Cu;
    // 0x13b90c: 0x0  nop
    ctx->pc = 0x13b90cu;
    // NOP
    if (ctx->pc == 0x13b90cu) { ctx->pc = 0x13b910u; }
}
