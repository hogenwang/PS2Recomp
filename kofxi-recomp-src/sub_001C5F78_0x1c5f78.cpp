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

// Function: sub_001C5F78
// Address: 0x1c5f78 - 0x1c5fa0
void sub_001C5F78_0x1c5f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5F78_0x1c5f78");
#endif

    ctx->pc = 0x1c5f78u;

    // 0x1c5f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5f7c: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x1c5f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x1c5f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f8c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1c5f8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1c5f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5f94: 0x8071806  j           func_1C6018
    ctx->pc = 0x1C5F94u;
    ctx->pc = 0x1C5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F94u;
    // 0x1c5f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6018u;
    sub_001C6018_0x1c6018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5F9Cu;
    // 0x1c5f9c: 0x0  nop
    ctx->pc = 0x1c5f9cu;
    // NOP
    if (ctx->pc == 0x1c5f9cu) { ctx->pc = 0x1c5fa0u; }
}
