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

// Function: sub_00160750
// Address: 0x160750 - 0x160790
void sub_00160750_0x160750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160750_0x160750");
#endif

    ctx->pc = 0x160750u;

    // 0x160750: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x160750u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x160754: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x160754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x160758: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x160758u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x16075c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x16075cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x160760: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x160760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x160764: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x160764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x160768: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x160768u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x16076c: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x16076cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x160770: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x160770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x160774: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x160774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x160778: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x160778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x16077c: 0x3e00008  jr          $ra
    ctx->pc = 0x16077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16077Cu;
        // 0x160780: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160784u;
    // 0x160784: 0x0  nop
    ctx->pc = 0x160784u;
    // NOP
    // 0x160788: 0x0  nop
    ctx->pc = 0x160788u;
    // NOP
    // 0x16078c: 0x0  nop
    ctx->pc = 0x16078cu;
    // NOP
}
