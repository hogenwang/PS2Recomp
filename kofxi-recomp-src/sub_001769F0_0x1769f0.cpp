#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001769F0
// Address: 0x1769f0 - 0x176a20
void sub_001769F0_0x1769f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001769F0_0x1769f0");
#endif

    ctx->pc = 0x1769f0u;

    // 0x1769f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1769f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1769f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1769f8: 0x2442d6e8  addiu       $v0, $v0, -0x2918
    ctx->pc = 0x1769f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
    // 0x1769fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1769fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176a00: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x176a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x176a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x176a08: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x176a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x176a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x176A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A0Cu;
            // 0x176a10: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176A14u;
    // 0x176a14: 0x0  nop
    ctx->pc = 0x176a14u;
    // NOP
    // 0x176a18: 0x0  nop
    ctx->pc = 0x176a18u;
    // NOP
    // 0x176a1c: 0x0  nop
    ctx->pc = 0x176a1cu;
    // NOP
    ctx->pc = 0x176a20u;
}
