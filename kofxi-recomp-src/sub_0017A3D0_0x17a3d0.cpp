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

// Function: sub_0017A3D0
// Address: 0x17a3d0 - 0x17a400
void sub_0017A3D0_0x17a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A3D0_0x17a3d0");
#endif

    ctx->pc = 0x17a3d0u;

    // 0x17a3d0: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x17a3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x17a3d4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A3D4u;
    {
        const bool branch_taken_0x17a3d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a3d4) {
            ctx->pc = 0x17A3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A3D4u;
            // 0x17a3d8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A3E4u;
            goto label_17a3e4;
        }
    }
    ctx->pc = 0x17A3DCu;
    // 0x17a3dc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x17a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17a3e0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x17a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_17a3e4:
    // 0x17a3e4: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x17a3e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17a3ec: 0x805e8d8  j           func_17A360
    ctx->pc = 0x17A3ECu;
    ctx->pc = 0x17A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3ECu;
    // 0x17a3f0: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A360u, 0x17A3ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x17A3F4u;
    // 0x17a3f4: 0x0  nop
    ctx->pc = 0x17a3f4u;
    // NOP
    // 0x17a3f8: 0x0  nop
    ctx->pc = 0x17a3f8u;
    // NOP
    // 0x17a3fc: 0x0  nop
    ctx->pc = 0x17a3fcu;
    // NOP
}
