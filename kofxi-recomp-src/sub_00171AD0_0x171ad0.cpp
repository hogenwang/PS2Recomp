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

// Function: sub_00171AD0
// Address: 0x171ad0 - 0x171b30
void sub_00171AD0_0x171ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171AD0_0x171ad0");
#endif

    ctx->pc = 0x171ad0u;

    // 0x171ad0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x171ad4: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x171ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171ad8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x171ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x171adc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x171ae0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x171ae4: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x171ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x171ae8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x171ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171af0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x171af0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x171af4: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x171af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x171af8: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x171af8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x171afc: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x171afcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b00: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x171b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b04: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x171b04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b08: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x171b08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b0c: 0xa4600010  sh          $zero, 0x10($v1)
    ctx->pc = 0x171b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b10: 0xa4600012  sh          $zero, 0x12($v1)
    ctx->pc = 0x171b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b14: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x171b14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b18: 0xa4600016  sh          $zero, 0x16($v1)
    ctx->pc = 0x171b18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x171b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x171B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B1Cu;
        // 0x171b20: 0xa4600018  sh          $zero, 0x18($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B24u;
    // 0x171b24: 0x0  nop
    ctx->pc = 0x171b24u;
    // NOP
    // 0x171b28: 0x0  nop
    ctx->pc = 0x171b28u;
    // NOP
    // 0x171b2c: 0x0  nop
    ctx->pc = 0x171b2cu;
    // NOP
    if (ctx->pc == 0x171b2cu) { ctx->pc = 0x171b30u; }
}
