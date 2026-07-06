#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00321C20
// Address: 0x321c20 - 0x321c80
void sub_00321C20_0x321c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321C20_0x321c20");
#endif

    ctx->pc = 0x321c20u;

    // 0x321c20: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x321c20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x321c24: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x321c24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x321c28: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x321c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x321c2c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x321c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x321c30: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x321c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x321c34: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x321c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x321c38: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x321c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x321c3c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x321c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x321c40: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x321c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x321c44: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x321c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x321c48: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x321c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x321c4c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x321c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x321c50: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x321c50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c54: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x321c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c58: 0xa4800040  sh          $zero, 0x40($a0)
    ctx->pc = 0x321c58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x321c5c: 0xa4800042  sh          $zero, 0x42($a0)
    ctx->pc = 0x321c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x321c60: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x321c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x321c64: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x321c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x321c68: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x321c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x321c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x321C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321C6Cu;
            // 0x321c70: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x321C74u;
    // 0x321c74: 0x0  nop
    ctx->pc = 0x321c74u;
    // NOP
    // 0x321c78: 0x0  nop
    ctx->pc = 0x321c78u;
    // NOP
    // 0x321c7c: 0x0  nop
    ctx->pc = 0x321c7cu;
    // NOP
    ctx->pc = 0x321c80u;
}
