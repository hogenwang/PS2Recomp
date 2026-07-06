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

// Function: sub_001D9898
// Address: 0x1d9898 - 0x1d98b8
void sub_001D9898_0x1d9898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9898_0x1d9898");
#endif

    ctx->pc = 0x1d9898u;

    // 0x1d9898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d989c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d989cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d98a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d98a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d98a4: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    // 0x1d98a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d98a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d98ac: 0x807662e  j           func_1D98B8
    ctx->pc = 0x1D98ACu;
    ctx->pc = 0x1D98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D98ACu;
    // 0x1d98b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98B8u;
    sub_001D98B8_0x1d98b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D98B4u;
    // 0x1d98b4: 0x0  nop
    ctx->pc = 0x1d98b4u;
    // NOP
}
