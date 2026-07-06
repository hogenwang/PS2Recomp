#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343000
// Address: 0x343000 - 0x343020
void sub_00343000_0x343000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343000_0x343000");
#endif

    ctx->pc = 0x343000u;

    // 0x343000: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x343000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x343004: 0x9464ea22  lhu         $a0, -0x15DE($v1)
    ctx->pc = 0x343004u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x343008: 0x30842000  andi        $a0, $a0, 0x2000
    ctx->pc = 0x343008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x34300c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34300cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x343010: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x343010u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x343014: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x343014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x343018: 0x3e00008  jr          $ra
    ctx->pc = 0x343018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34301Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343018u;
            // 0x34301c: 0xa0649480  sb          $a0, -0x6B80($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294939776), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343020u;
    ctx->pc = 0x343020u;
}
