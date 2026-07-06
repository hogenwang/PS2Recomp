#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00322B40
// Address: 0x322b40 - 0x322b60
void sub_00322B40_0x322b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322B40_0x322b40");
#endif

    ctx->pc = 0x322b40u;

    // 0x322b40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x322b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x322b44: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x322b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x322b48: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x322b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x322b4c: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x322b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x322b50: 0x3e00008  jr          $ra
    ctx->pc = 0x322B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322B50u;
            // 0x322b54: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x322B58u;
    // 0x322b58: 0x0  nop
    ctx->pc = 0x322b58u;
    // NOP
    // 0x322b5c: 0x0  nop
    ctx->pc = 0x322b5cu;
    // NOP
    ctx->pc = 0x322b60u;
}
