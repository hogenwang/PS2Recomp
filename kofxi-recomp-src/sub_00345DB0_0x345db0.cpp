#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00345DB0
// Address: 0x345db0 - 0x345df0
void sub_00345DB0_0x345db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345DB0_0x345db0");
#endif

    ctx->pc = 0x345db0u;

    // 0x345db0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345db4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x345db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x345db8: 0xac45be84  sw          $a1, -0x417C($v0)
    ctx->pc = 0x345db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 5));
    // 0x345dbc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x345dbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x345dc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345dc4: 0xac64be80  sw          $a0, -0x4180($v1)
    ctx->pc = 0x345dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 4));
    // 0x345dc8: 0xa446be90  sh          $a2, -0x4170($v0)
    ctx->pc = 0x345dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 6));
    // 0x345dcc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x345dd0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345dd4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x345dd4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x345dd8: 0xa447be92  sh          $a3, -0x416E($v0)
    ctx->pc = 0x345dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 7));
    // 0x345ddc: 0x24845cf0  addiu       $a0, $a0, 0x5CF0
    ctx->pc = 0x345ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23792));
    // 0x345de0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x345de4: 0x8082674  j           func_2099D0
    ctx->pc = 0x345DE4u;
    ctx->pc = 0x345DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345DE4u;
            // 0x345de8: 0xac48be88  sw          $t0, -0x4178($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x345DECu;
    // 0x345dec: 0x0  nop
    ctx->pc = 0x345decu;
    // NOP
    ctx->pc = 0x345df0u;
}
