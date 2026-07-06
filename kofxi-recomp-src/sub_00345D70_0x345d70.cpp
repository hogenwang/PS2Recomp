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

// Function: sub_00345D70
// Address: 0x345d70 - 0x345db0
void sub_00345D70_0x345d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345D70_0x345d70");
#endif

    ctx->pc = 0x345d70u;

    // 0x345d70: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345d74: 0xac44be80  sw          $a0, -0x4180($v0)
    ctx->pc = 0x345d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 4));
    // 0x345d78: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345d7c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345d80: 0xac45be84  sw          $a1, -0x417C($v0)
    ctx->pc = 0x345d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 5));
    // 0x345d84: 0x24845cf0  addiu       $a0, $a0, 0x5CF0
    ctx->pc = 0x345d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23792));
    // 0x345d88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345d8c: 0xa446be90  sh          $a2, -0x4170($v0)
    ctx->pc = 0x345d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 6));
    // 0x345d90: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345d94: 0xa447be92  sh          $a3, -0x416E($v0)
    ctx->pc = 0x345d94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 7));
    // 0x345d98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x345d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x345d9c: 0x8c43f788  lw          $v1, -0x878($v0)
    ctx->pc = 0x345d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965128)));
    // 0x345da0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345da4: 0x8082674  j           func_2099D0
    ctx->pc = 0x345DA4u;
    ctx->pc = 0x345DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DA4u;
    // 0x345da8: 0xac43be88  sw          $v1, -0x4178($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x345DACu;
    // 0x345dac: 0x0  nop
    ctx->pc = 0x345dacu;
    // NOP
}
