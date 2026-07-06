#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283C40
// Address: 0x283c40 - 0x283c60
void sub_00283C40_0x283c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C40_0x283c40");
#endif

    ctx->pc = 0x283c40u;

    // 0x283c40: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x283c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x283c44: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x283c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x283c48: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x283c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x283c4c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x283c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x283c50: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x283c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x283c54: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x283c54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x283c58: 0x3e00008  jr          $ra
    ctx->pc = 0x283C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C58u;
            // 0x283c5c: 0xa0820016  sb          $v0, 0x16($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283C60u;
    ctx->pc = 0x283c60u;
}
