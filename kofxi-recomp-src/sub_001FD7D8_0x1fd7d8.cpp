#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD7D8
// Address: 0x1fd7d8 - 0x1fd7f8
void sub_001FD7D8_0x1fd7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD7D8_0x1fd7d8");
#endif

    ctx->pc = 0x1fd7d8u;

    // 0x1fd7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd7dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1fd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fd7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd7e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1fd7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fd7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd7ec: 0x807f62e  j           func_1FD8B8
    ctx->pc = 0x1FD7ECu;
    ctx->pc = 0x1FD7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD7ECu;
    // 0x1fd7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD7F4u;
    // 0x1fd7f4: 0x0  nop
    ctx->pc = 0x1fd7f4u;
    // NOP
    if (ctx->pc == 0x1fd7f4u) { ctx->pc = 0x1fd7f8u; }
}
