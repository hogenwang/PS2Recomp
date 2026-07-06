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

// Function: sub_0011A7F0
// Address: 0x11a7f0 - 0x11a828
void sub_0011A7F0_0x11a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A7F0_0x11a7f0");
#endif

    ctx->pc = 0x11a7f0u;

    // 0x11a7f0: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x11a7f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11a7f4: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11a7f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11a7f8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x11a7f8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x11a7fc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a7fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a800: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x11a800u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x11a804: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x11a804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11a808: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11a808u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11a80c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x11a80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x11a810: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11a810u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a814: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x11a814u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x11a818: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x11a818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x11a81c: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x11a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x11a820: 0x3e00008  jr          $ra
    ctx->pc = 0x11A820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A820u;
        // 0x11a824: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A828u;
}
