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

// Function: sub_00302BF0
// Address: 0x302bf0 - 0x302c30
void sub_00302BF0_0x302bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302BF0_0x302bf0");
#endif

    ctx->pc = 0x302bf0u;

    // 0x302bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x302bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x302bf4: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302bf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x302bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x302bfc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x302bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x302c00: 0x94890006  lhu         $t1, 0x6($a0)
    ctx->pc = 0x302c00u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302c04: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x302c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c08: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x302c08u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302c0c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x302c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x302c10: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x302c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c14: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x302c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x302c18: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302c1c: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302c1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302c20: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302c24: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x302c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x302c28: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x302c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c2c: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302c2cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    if (ctx->pc == 0x302c2cu) { ctx->pc = 0x302c30u; }
}
