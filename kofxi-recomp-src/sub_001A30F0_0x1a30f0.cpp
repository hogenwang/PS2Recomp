#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A30F0
// Address: 0x1a30f0 - 0x1a3130
void sub_001A30F0_0x1a30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A30F0_0x1a30f0");
#endif

    ctx->pc = 0x1a30f0u;

    // 0x1a30f0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1a30f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a30f4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a30f8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a30f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a30fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a3100: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1a3100u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a3104: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3108: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a310c: 0x2463e8e0  addiu       $v1, $v1, -0x1720
    ctx->pc = 0x1a310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961376));
    // 0x1a3110: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x1a3110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a3114: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a3118: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1a3118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1a311c: 0x2463e8e4  addiu       $v1, $v1, -0x171C
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961380));
    // 0x1a3120: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a3120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a3124: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3124u;
            // 0x1a3128: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A312Cu;
    // 0x1a312c: 0x0  nop
    ctx->pc = 0x1a312cu;
    // NOP
    ctx->pc = 0x1a3130u;
}
