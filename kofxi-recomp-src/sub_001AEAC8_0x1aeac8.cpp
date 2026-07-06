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

// Function: sub_001AEAC8
// Address: 0x1aeac8 - 0x1aeae8
void sub_001AEAC8_0x1aeac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEAC8_0x1aeac8");
#endif

    ctx->pc = 0x1aeac8u;

    // 0x1aeac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aeacc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aead0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aead4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1aead8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aead8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeadc: 0x80435a6  j           func_10D698
    ctx->pc = 0x1AEADCu;
    ctx->pc = 0x1AEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEADCu;
    // 0x1aeae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    sub_0010D698_0x10d698(rdram, ctx, runtime); return;
    ctx->pc = 0x1AEAE4u;
    // 0x1aeae4: 0x0  nop
    ctx->pc = 0x1aeae4u;
    // NOP
    if (ctx->pc == 0x1aeae4u) { ctx->pc = 0x1aeae8u; }
}
