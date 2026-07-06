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

// Function: sub_00357F00
// Address: 0x357f00 - 0x357f30
void sub_00357F00_0x357f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F00_0x357f00");
#endif

    ctx->pc = 0x357f00u;

    // 0x357f00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357f04: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x357f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x357f08: 0x9465ec80  lhu         $a1, -0x1380($v1)
    ctx->pc = 0x357f08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962304)));
    // 0x357f0c: 0x64063fff  daddiu      $a2, $zero, 0x3FFF
    ctx->pc = 0x357f0cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16383);
    // 0x357f10: 0x94849718  lhu         $a0, -0x68E8($a0)
    ctx->pc = 0x357f10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294940440)));
    // 0x357f14: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x357f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x357f18: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x357f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x357f1c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x357f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x357f20: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x357f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x357f24: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x357f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x357f28: 0x3e00008  jr          $ra
    ctx->pc = 0x357F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F28u;
        // 0x357f2c: 0xa4649718  sh          $a0, -0x68E8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294940440), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F30u;
}
