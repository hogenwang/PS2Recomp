#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4E10
// Address: 0x1c4e10 - 0x1c4e40
void sub_001C4E10_0x1c4e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4E10_0x1c4e10");
#endif

    ctx->pc = 0x1c4e10u;

    // 0x1c4e10: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1c4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c4e14: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1c4e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4e18: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1c4e18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1c4e1c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1c4e1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4e20: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1c4e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1c4e24: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1c4e24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c4e28: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1c4e28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1c4e2c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1c4e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1c4e30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c4e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c4e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E34u;
            // 0x1c4e38: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4E3Cu;
    // 0x1c4e3c: 0x0  nop
    ctx->pc = 0x1c4e3cu;
    // NOP
    ctx->pc = 0x1c4e40u;
}
