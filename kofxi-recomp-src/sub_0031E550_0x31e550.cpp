#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031E550
// Address: 0x31e550 - 0x31e590
void sub_0031E550_0x31e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E550_0x31e550");
#endif

    ctx->pc = 0x31e550u;

    // 0x31e550: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e554: 0xac6047a0  sw          $zero, 0x47A0($v1)
    ctx->pc = 0x31e554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18336), GPR_U32(ctx, 0));
    // 0x31e558: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e55c: 0xac60479c  sw          $zero, 0x479C($v1)
    ctx->pc = 0x31e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18332), GPR_U32(ctx, 0));
    // 0x31e560: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e564: 0xac604798  sw          $zero, 0x4798($v1)
    ctx->pc = 0x31e564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18328), GPR_U32(ctx, 0));
    // 0x31e568: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e56c: 0xac604794  sw          $zero, 0x4794($v1)
    ctx->pc = 0x31e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18324), GPR_U32(ctx, 0));
    // 0x31e570: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e574: 0xac604790  sw          $zero, 0x4790($v1)
    ctx->pc = 0x31e574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18320), GPR_U32(ctx, 0));
    // 0x31e578: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e57c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E57Cu;
            // 0x31e580: 0xac604780  sw          $zero, 0x4780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31E584u;
    // 0x31e584: 0x0  nop
    ctx->pc = 0x31e584u;
    // NOP
    // 0x31e588: 0x0  nop
    ctx->pc = 0x31e588u;
    // NOP
    // 0x31e58c: 0x0  nop
    ctx->pc = 0x31e58cu;
    // NOP
    ctx->pc = 0x31e590u;
}
