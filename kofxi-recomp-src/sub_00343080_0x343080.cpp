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

// Function: sub_00343080
// Address: 0x343080 - 0x3430a0
void sub_00343080_0x343080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343080_0x343080");
#endif

    ctx->pc = 0x343080u;

    // 0x343080: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343088: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x343088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x34308c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x34308Cu;
    ctx->pc = 0x343090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34308Cu;
    // 0x343090: 0x34069a00  ori         $a2, $zero, 0x9A00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39424);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x343094u;
    // 0x343094: 0x0  nop
    ctx->pc = 0x343094u;
    // NOP
    // 0x343098: 0x0  nop
    ctx->pc = 0x343098u;
    // NOP
    // 0x34309c: 0x0  nop
    ctx->pc = 0x34309cu;
    // NOP
    if (ctx->pc == 0x34309cu) { ctx->pc = 0x3430a0u; }
}
