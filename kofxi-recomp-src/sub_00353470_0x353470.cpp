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

// Function: sub_00353470
// Address: 0x353470 - 0x353500
void sub_00353470_0x353470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353470_0x353470");
#endif

    ctx->pc = 0x353470u;

    // 0x353470: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x353474: 0xa060bed1  sb          $zero, -0x412F($v1)
    ctx->pc = 0x353474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950609), (uint8_t)GPR_U32(ctx, 0));
    // 0x353478: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35347c: 0xa060bed2  sb          $zero, -0x412E($v1)
    ctx->pc = 0x35347cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 0));
    // 0x353480: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x353484: 0xa060bedb  sb          $zero, -0x4125($v1)
    ctx->pc = 0x353484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950619), (uint8_t)GPR_U32(ctx, 0));
    // 0x353488: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35348c: 0xa060bed8  sb          $zero, -0x4128($v1)
    ctx->pc = 0x35348cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950616), (uint8_t)GPR_U32(ctx, 0));
    // 0x353490: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x353494: 0xa060bed9  sb          $zero, -0x4127($v1)
    ctx->pc = 0x353494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950617), (uint8_t)GPR_U32(ctx, 0));
    // 0x353498: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x353498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35349c: 0xac60bed4  sw          $zero, -0x412C($v1)
    ctx->pc = 0x35349cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950612), GPR_U32(ctx, 0));
    // 0x3534a0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534a4: 0xa060beda  sb          $zero, -0x4126($v1)
    ctx->pc = 0x3534a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950618), (uint8_t)GPR_U32(ctx, 0));
    // 0x3534a8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534ac: 0xac60bedc  sw          $zero, -0x4124($v1)
    ctx->pc = 0x3534acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 0));
    // 0x3534b0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534b4: 0xac60bee0  sw          $zero, -0x4120($v1)
    ctx->pc = 0x3534b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950624), GPR_U32(ctx, 0));
    // 0x3534b8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534bc: 0xac60bee4  sw          $zero, -0x411C($v1)
    ctx->pc = 0x3534bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 0));
    // 0x3534c0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534c4: 0xac60bee8  sw          $zero, -0x4118($v1)
    ctx->pc = 0x3534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950632), GPR_U32(ctx, 0));
    // 0x3534c8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534cc: 0xac60beec  sw          $zero, -0x4114($v1)
    ctx->pc = 0x3534ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950636), GPR_U32(ctx, 0));
    // 0x3534d0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534d4: 0xac60bef0  sw          $zero, -0x4110($v1)
    ctx->pc = 0x3534d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950640), GPR_U32(ctx, 0));
    // 0x3534d8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534dc: 0xac60bef4  sw          $zero, -0x410C($v1)
    ctx->pc = 0x3534dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
    // 0x3534e0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534e4: 0xac60bef8  sw          $zero, -0x4108($v1)
    ctx->pc = 0x3534e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950648), GPR_U32(ctx, 0));
    // 0x3534e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534ec: 0xa460bf02  sh          $zero, -0x40FE($v1)
    ctx->pc = 0x3534ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950658), (uint16_t)GPR_U32(ctx, 0));
    // 0x3534f0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3534f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3534f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3534F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3534F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534F4u;
        // 0x3534f8: 0xa060bf14  sb          $zero, -0x40EC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950676), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3534F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3534FCu;
    // 0x3534fc: 0x0  nop
    ctx->pc = 0x3534fcu;
    // NOP
}
