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

// Function: sub_001C1418
// Address: 0x1c1418 - 0x1c1424
void sub_001C1418_0x1c1418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1418_0x1c1418");
#endif

    ctx->pc = 0x1c1418u;

    // 0x1c1418: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c141c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c141cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1420: 0x8c43c844  lw          $v1, -0x37BC($v0)
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953028)));
    if (ctx->pc == 0x1c1420u) { ctx->pc = 0x1c1424u; }
}
