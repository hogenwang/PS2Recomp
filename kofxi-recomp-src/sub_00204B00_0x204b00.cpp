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

// Function: sub_00204B00
// Address: 0x204b00 - 0x204b10
void sub_00204B00_0x204b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204B00_0x204b00");
#endif

    ctx->pc = 0x204b00u;

    // 0x204b00: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x204b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x204b04: 0x8082e6c  j           func_20B9B0
    ctx->pc = 0x204B04u;
    ctx->pc = 0x204B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B04u;
    // 0x204b08: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9B0u;
    sub_0020B9B0_0x20b9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x204B0Cu;
    // 0x204b0c: 0x0  nop
    ctx->pc = 0x204b0cu;
    // NOP
}
