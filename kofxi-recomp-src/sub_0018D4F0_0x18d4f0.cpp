#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D4F0
// Address: 0x18d4f0 - 0x18d5a0
void sub_0018D4F0_0x18d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D4F0_0x18d4f0");
#endif

    ctx->pc = 0x18d4f0u;

    // 0x18d4f0: 0xa480006c  sh          $zero, 0x6C($a0)
    ctx->pc = 0x18d4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x18d4f4: 0xa0800094  sb          $zero, 0x94($a0)
    ctx->pc = 0x18d4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d4f8: 0xa480006e  sh          $zero, 0x6E($a0)
    ctx->pc = 0x18d4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x18d4fc: 0xa4800074  sh          $zero, 0x74($a0)
    ctx->pc = 0x18d4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x18d500: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x18d500u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x18d504: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x18d504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x18d508: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x18d508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x18d50c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x18d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x18d510: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x18d510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x18d514: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x18d514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x18d518: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x18d518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x18d51c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x18d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x18d520: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x18d520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x18d524: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x18d524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x18d528: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x18d528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x18d52c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x18d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x18d530: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x18d530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x18d534: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x18d534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x18d538: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x18d538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x18d53c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x18d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x18d540: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x18d540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x18d544: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x18d544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x18d548: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x18d548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x18d54c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x18d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x18d550: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x18d550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x18d554: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x18d554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x18d558: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x18d558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x18d55c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x18d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x18d560: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x18d560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x18d564: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x18d564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x18d568: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x18d568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x18d56c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x18d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x18d570: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x18d570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x18d574: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x18d574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x18d578: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x18d578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x18d57c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18d580: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18d580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18d584: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18d584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18d588: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18d588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D58Cu;
            // 0x18d590: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D594u;
    // 0x18d594: 0x0  nop
    ctx->pc = 0x18d594u;
    // NOP
    // 0x18d598: 0x0  nop
    ctx->pc = 0x18d598u;
    // NOP
    // 0x18d59c: 0x0  nop
    ctx->pc = 0x18d59cu;
    // NOP
    ctx->pc = 0x18d5a0u;
}
