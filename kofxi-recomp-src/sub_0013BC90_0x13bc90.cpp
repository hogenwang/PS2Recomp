#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013BC90
// Address: 0x13bc90 - 0x13bcf0
void sub_0013BC90_0x13bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BC90_0x13bc90");
#endif

    ctx->pc = 0x13bc90u;

    // 0x13bc90: 0x84860242  lh          $a2, 0x242($a0)
    ctx->pc = 0x13bc90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x13bc94: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x13bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x13bc98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13bc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13bca0: 0xa4860244  sh          $a2, 0x244($a0)
    ctx->pc = 0x13bca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 6));
    // 0x13bca4: 0xa4800242  sh          $zero, 0x242($a0)
    ctx->pc = 0x13bca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bca8: 0xa0800211  sb          $zero, 0x211($a0)
    ctx->pc = 0x13bca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 529), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bcac: 0xa4800226  sh          $zero, 0x226($a0)
    ctx->pc = 0x13bcacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcb0: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x13bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x13bcb4: 0xa4800234  sh          $zero, 0x234($a0)
    ctx->pc = 0x13bcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 564), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcb8: 0xac850214  sw          $a1, 0x214($a0)
    ctx->pc = 0x13bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 5));
    // 0x13bcbc: 0xa480022c  sh          $zero, 0x22C($a0)
    ctx->pc = 0x13bcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcc0: 0xa480024c  sh          $zero, 0x24C($a0)
    ctx->pc = 0x13bcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcc4: 0x8c85023c  lw          $a1, 0x23C($a0)
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x13bcc8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13bcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13bccc: 0xac83023c  sw          $v1, 0x23C($a0)
    ctx->pc = 0x13bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 3));
    // 0x13bcd0: 0xa4800228  sh          $zero, 0x228($a0)
    ctx->pc = 0x13bcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcd4: 0xa480022a  sh          $zero, 0x22A($a0)
    ctx->pc = 0x13bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcd8: 0xa4800248  sh          $zero, 0x248($a0)
    ctx->pc = 0x13bcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bcdc: 0xa480024a  sh          $zero, 0x24A($a0)
    ctx->pc = 0x13bcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 586), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bce0: 0xa080025f  sb          $zero, 0x25F($a0)
    ctx->pc = 0x13bce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 607), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bce4: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BCE4u;
            // 0x13bce8: 0xa0800260  sb          $zero, 0x260($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 608), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BCECu;
    // 0x13bcec: 0x0  nop
    ctx->pc = 0x13bcecu;
    // NOP
    ctx->pc = 0x13bcf0u;
}
