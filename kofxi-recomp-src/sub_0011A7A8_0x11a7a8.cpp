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

// Function: sub_0011A7A8
// Address: 0x11a7a8 - 0x11a7f0
void sub_0011A7A8_0x11a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A7A8_0x11a7a8");
#endif

    ctx->pc = 0x11a7a8u;

    // 0x11a7a8: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11a7a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11a7ac: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11a7acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11a7b0: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x11a7b0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x11a7b4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11a7b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11a7b8: 0xe6023  negu        $t4, $t6
    ctx->pc = 0x11a7b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x11a7bc: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x11a7bcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11a7c0: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x11a7c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x11a7c4: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11a7c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11a7c8: 0xe77c2  srl         $t6, $t6, 31
    ctx->pc = 0x11a7c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x11a7cc: 0x3c0d7ff0  lui         $t5, 0x7FF0
    ctx->pc = 0x11a7ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32752 << 16));
    // 0x11a7d0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11a7d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11a7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a7d8: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x11a7d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11a7dc: 0xf7023  negu        $t6, $t7
    ctx->pc = 0x11a7dcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x11a7e0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11a7e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11a7e4: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11a7e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7E8u;
        // 0x11a7ec: 0x4f1023  subu        $v0, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A7F0u;
}
