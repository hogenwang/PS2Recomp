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

// Function: sub_001E8EB8
// Address: 0x1e8eb8 - 0x1e8ed0
void sub_001E8EB8_0x1e8eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8EB8_0x1e8eb8");
#endif

    ctx->pc = 0x1e8eb8u;

    // 0x1e8eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8ec0: 0x8c852068  lw          $a1, 0x2068($a0)
    ctx->pc = 0x1e8ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8296)));
    // 0x1e8ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ec8: 0x807ad76  j           func_1EB5D8
    ctx->pc = 0x1E8EC8u;
    ctx->pc = 0x1E8ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EC8u;
    // 0x1e8ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    sub_001EB5D8_0x1eb5d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E8ED0u;
}
