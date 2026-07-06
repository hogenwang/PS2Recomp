#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176A80
// Address: 0x176a80 - 0x176ab0
void sub_00176A80_0x176a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176A80_0x176a80");
#endif

    ctx->pc = 0x176a80u;

    // 0x176a80: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x176a84: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x176a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x176a88: 0x2442d6e8  addiu       $v0, $v0, -0x2918
    ctx->pc = 0x176a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
    // 0x176a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176a90: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x176a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176a94: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x176a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x176a98: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x176a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x176a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x176A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A9Cu;
            // 0x176aa0: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176AA4u;
    // 0x176aa4: 0x0  nop
    ctx->pc = 0x176aa4u;
    // NOP
    // 0x176aa8: 0x0  nop
    ctx->pc = 0x176aa8u;
    // NOP
    // 0x176aac: 0x0  nop
    ctx->pc = 0x176aacu;
    // NOP
    ctx->pc = 0x176ab0u;
}
