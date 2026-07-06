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

// Function: sub_001AD250
// Address: 0x1ad250 - 0x1ad268
void sub_001AD250_0x1ad250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD250_0x1ad250");
#endif

    ctx->pc = 0x1ad250u;

    // 0x1ad250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad25c: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1AD25Cu;
    ctx->pc = 0x1AD260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD25Cu;
    // 0x1ad260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1AD264u;
    // 0x1ad264: 0x0  nop
    ctx->pc = 0x1ad264u;
    // NOP
    if (ctx->pc == 0x1ad264u) { ctx->pc = 0x1ad268u; }
}
