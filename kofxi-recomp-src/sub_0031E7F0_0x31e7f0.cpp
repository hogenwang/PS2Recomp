#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031E7F0
// Address: 0x31e7f0 - 0x31e820
void sub_0031E7F0_0x31e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E7F0_0x31e7f0");
#endif

    ctx->pc = 0x31e7f0u;

    // 0x31e7f0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e7f4: 0xac642a00  sw          $a0, 0x2A00($v1)
    ctx->pc = 0x31e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10752), GPR_U32(ctx, 4));
    // 0x31e7f8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e7fc: 0xac652a04  sw          $a1, 0x2A04($v1)
    ctx->pc = 0x31e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10756), GPR_U32(ctx, 5));
    // 0x31e800: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e804: 0xac662a08  sw          $a2, 0x2A08($v1)
    ctx->pc = 0x31e804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10760), GPR_U32(ctx, 6));
    // 0x31e808: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E80Cu;
            // 0x31e810: 0xac662a0c  sw          $a2, 0x2A0C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10764), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31E814u;
    // 0x31e814: 0x0  nop
    ctx->pc = 0x31e814u;
    // NOP
    // 0x31e818: 0x0  nop
    ctx->pc = 0x31e818u;
    // NOP
    // 0x31e81c: 0x0  nop
    ctx->pc = 0x31e81cu;
    // NOP
    ctx->pc = 0x31e820u;
}
