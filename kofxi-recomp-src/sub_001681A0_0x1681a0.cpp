#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001681A0
// Address: 0x1681a0 - 0x1681e0
void sub_001681A0_0x1681a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001681A0_0x1681a0");
#endif

    ctx->pc = 0x1681a0u;

    // 0x1681a0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1681a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1681a4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1681a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1681a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1681a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1681ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1681acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1681b0: 0xa06003c0  sb          $zero, 0x3C0($v1)
    ctx->pc = 0x1681b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 960), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681b4: 0xa06003c1  sb          $zero, 0x3C1($v1)
    ctx->pc = 0x1681b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 961), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681b8: 0xa06003c2  sb          $zero, 0x3C2($v1)
    ctx->pc = 0x1681b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 962), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681bc: 0xa06003c3  sb          $zero, 0x3C3($v1)
    ctx->pc = 0x1681bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 963), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681c0: 0xa46003be  sh          $zero, 0x3BE($v1)
    ctx->pc = 0x1681c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 958), (uint16_t)GPR_U32(ctx, 0));
    // 0x1681c4: 0xa06003c4  sb          $zero, 0x3C4($v1)
    ctx->pc = 0x1681c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681c8: 0xac6003b0  sw          $zero, 0x3B0($v1)
    ctx->pc = 0x1681c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 944), GPR_U32(ctx, 0));
    // 0x1681cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1681CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681CCu;
            // 0x1681d0: 0xac6003b4  sw          $zero, 0x3B4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1681D4u;
    // 0x1681d4: 0x0  nop
    ctx->pc = 0x1681d4u;
    // NOP
    // 0x1681d8: 0x0  nop
    ctx->pc = 0x1681d8u;
    // NOP
    // 0x1681dc: 0x0  nop
    ctx->pc = 0x1681dcu;
    // NOP
    ctx->pc = 0x1681e0u;
}
