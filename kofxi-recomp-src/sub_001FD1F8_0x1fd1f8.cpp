#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD1F8
// Address: 0x1fd1f8 - 0x1fd218
void sub_001FD1F8_0x1fd1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD1F8_0x1fd1f8");
#endif

    ctx->pc = 0x1fd1f8u;

    // 0x1fd1f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd1fc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1fd1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1fd200: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fd200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fd204: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1fd204u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1fd208: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1fd208u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1fd20c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD20Cu;
            // 0x1fd210: 0xfc800010  sd          $zero, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD214u;
    // 0x1fd214: 0x0  nop
    ctx->pc = 0x1fd214u;
    // NOP
    ctx->pc = 0x1fd218u;
}
