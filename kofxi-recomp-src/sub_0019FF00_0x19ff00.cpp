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

// Function: sub_0019FF00
// Address: 0x19ff00 - 0x19ffc0
void sub_0019FF00_0x19ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FF00_0x19ff00");
#endif

    ctx->pc = 0x19ff00u;

    // 0x19ff00: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19ff04: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19ff08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ff0c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x19ff10: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x19ff10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ff14: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19ff18: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19ff1c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19ff20: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x19ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19ff24: 0xa083023c  sb          $v1, 0x23C($a0)
    ctx->pc = 0x19ff24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ff28: 0xa4800214  sh          $zero, 0x214($a0)
    ctx->pc = 0x19ff28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 532), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff2c: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x19ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x19ff30: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x19ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x19ff34: 0xac800204  sw          $zero, 0x204($a0)
    ctx->pc = 0x19ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 0));
    // 0x19ff38: 0xac800208  sw          $zero, 0x208($a0)
    ctx->pc = 0x19ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 0));
    // 0x19ff3c: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x19ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
    // 0x19ff40: 0xac8001f0  sw          $zero, 0x1F0($a0)
    ctx->pc = 0x19ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 0));
    // 0x19ff44: 0xac8001f4  sw          $zero, 0x1F4($a0)
    ctx->pc = 0x19ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 0));
    // 0x19ff48: 0xac8001f8  sw          $zero, 0x1F8($a0)
    ctx->pc = 0x19ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 0));
    // 0x19ff4c: 0xac8001f4  sw          $zero, 0x1F4($a0)
    ctx->pc = 0x19ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 0));
    // 0x19ff50: 0xac8001f8  sw          $zero, 0x1F8($a0)
    ctx->pc = 0x19ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 0));
    // 0x19ff54: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x19ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x19ff58: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x19ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x19ff5c: 0xac800204  sw          $zero, 0x204($a0)
    ctx->pc = 0x19ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 0));
    // 0x19ff60: 0xac800208  sw          $zero, 0x208($a0)
    ctx->pc = 0x19ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 0));
    // 0x19ff64: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x19ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
    // 0x19ff68: 0xa4800216  sh          $zero, 0x216($a0)
    ctx->pc = 0x19ff68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 534), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff6c: 0xa4800218  sh          $zero, 0x218($a0)
    ctx->pc = 0x19ff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 536), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff70: 0xa480021a  sh          $zero, 0x21A($a0)
    ctx->pc = 0x19ff70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 538), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff74: 0xa480021c  sh          $zero, 0x21C($a0)
    ctx->pc = 0x19ff74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 540), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff78: 0xa480021e  sh          $zero, 0x21E($a0)
    ctx->pc = 0x19ff78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 542), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff7c: 0xa4800220  sh          $zero, 0x220($a0)
    ctx->pc = 0x19ff7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff80: 0xa4800222  sh          $zero, 0x222($a0)
    ctx->pc = 0x19ff80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff84: 0xa4800224  sh          $zero, 0x224($a0)
    ctx->pc = 0x19ff84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff88: 0xa4800226  sh          $zero, 0x226($a0)
    ctx->pc = 0x19ff88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff8c: 0xa4800228  sh          $zero, 0x228($a0)
    ctx->pc = 0x19ff8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff90: 0xa480022a  sh          $zero, 0x22A($a0)
    ctx->pc = 0x19ff90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff94: 0xa480022c  sh          $zero, 0x22C($a0)
    ctx->pc = 0x19ff94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff98: 0xa480022e  sh          $zero, 0x22E($a0)
    ctx->pc = 0x19ff98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ff9c: 0xa4800230  sh          $zero, 0x230($a0)
    ctx->pc = 0x19ff9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 560), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ffa0: 0xa4800232  sh          $zero, 0x232($a0)
    ctx->pc = 0x19ffa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 562), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ffa4: 0xa4800234  sh          $zero, 0x234($a0)
    ctx->pc = 0x19ffa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 564), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ffa8: 0xa4800236  sh          $zero, 0x236($a0)
    ctx->pc = 0x19ffa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 566), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ffac: 0xa4800238  sh          $zero, 0x238($a0)
    ctx->pc = 0x19ffacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 568), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ffb0: 0xa480023a  sh          $zero, 0x23A($a0)
    ctx->pc = 0x19ffb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 570), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFB4u;
        // 0x19ffb8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FFBCu;
    // 0x19ffbc: 0x0  nop
    ctx->pc = 0x19ffbcu;
    // NOP
}
