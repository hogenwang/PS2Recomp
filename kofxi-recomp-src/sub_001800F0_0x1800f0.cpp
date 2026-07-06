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

// Function: sub_001800F0
// Address: 0x1800f0 - 0x180120
void sub_001800F0_0x1800f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001800F0_0x1800f0");
#endif

    ctx->pc = 0x1800f0u;

    // 0x1800f0: 0x8c860494  lw          $a2, 0x494($a0)
    ctx->pc = 0x1800f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x1800f4: 0x3c05ff81  lui         $a1, 0xFF81
    ctx->pc = 0x1800f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65409 << 16));
    // 0x1800f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1800f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1800fc: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x1800fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x180100: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x180100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x180104: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x180104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x180108: 0xac850494  sw          $a1, 0x494($a0)
    ctx->pc = 0x180108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 5));
    // 0x18010c: 0x3e00008  jr          $ra
    ctx->pc = 0x18010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18010Cu;
        // 0x180110: 0xac830494  sw          $v1, 0x494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18010Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180114u;
    // 0x180114: 0x0  nop
    ctx->pc = 0x180114u;
    // NOP
    // 0x180118: 0x0  nop
    ctx->pc = 0x180118u;
    // NOP
    // 0x18011c: 0x0  nop
    ctx->pc = 0x18011cu;
    // NOP
}
