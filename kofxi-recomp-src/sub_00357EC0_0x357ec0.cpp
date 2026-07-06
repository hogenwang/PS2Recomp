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

// Function: sub_00357EC0
// Address: 0x357ec0 - 0x357f00
void sub_00357EC0_0x357ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357EC0_0x357ec0");
#endif

    ctx->pc = 0x357ec0u;

    // 0x357ec0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357ec4: 0x9465ec80  lhu         $a1, -0x1380($v1)
    ctx->pc = 0x357ec4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962304)));
    // 0x357ec8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x357ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x357ecc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x357eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x357ed0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x357ED0u;
    {
        const bool branch_taken_0x357ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357ed0) {
            ctx->pc = 0x357EECu;
            goto label_357eec;
        }
    }
    ctx->pc = 0x357ED8u;
    // 0x357ed8: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x357ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x357edc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x357edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x357ee0: 0x94a59718  lhu         $a1, -0x68E8($a1)
    ctx->pc = 0x357ee0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294940440)));
    // 0x357ee4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x357ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x357ee8: 0xa4649718  sh          $a0, -0x68E8($v1)
    ctx->pc = 0x357ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294940440), (uint16_t)GPR_U32(ctx, 4));
label_357eec:
    // 0x357eec: 0x3e00008  jr          $ra
    ctx->pc = 0x357EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357EF4u;
    // 0x357ef4: 0x0  nop
    ctx->pc = 0x357ef4u;
    // NOP
    // 0x357ef8: 0x0  nop
    ctx->pc = 0x357ef8u;
    // NOP
    // 0x357efc: 0x0  nop
    ctx->pc = 0x357efcu;
    // NOP
}
