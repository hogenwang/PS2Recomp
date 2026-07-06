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

// Function: sub_001BB9C8
// Address: 0x1bb9c8 - 0x1bb9e0
void sub_001BB9C8_0x1bb9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB9C8_0x1bb9c8");
#endif

    ctx->pc = 0x1bb9c8u;

    // 0x1bb9c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb9cc: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x1bb9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x1bb9d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bb9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bb9d4: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x1bb9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1bb9d8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bb9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1bb9dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1bb9dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
}
