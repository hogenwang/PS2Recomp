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

// Function: sub_00309E80
// Address: 0x309e80 - 0x309ec0
void sub_00309E80_0x309e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309E80_0x309e80");
#endif

    switch (ctx->pc) {
        case 0x309e98u: goto label_309e98;
        default: break;
    }

    ctx->pc = 0x309e80u;

    // 0x309e80: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x309e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x309e84: 0x24630720  addiu       $v1, $v1, 0x720
    ctx->pc = 0x309e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1824));
    // 0x309e88: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x309e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x309e8c: 0x4e2000a  bltzl       $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x309E8Cu;
    {
        const bool branch_taken_0x309e8c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x309e8c) {
            ctx->pc = 0x309EB8u;
            goto label_309eb8;
        }
    }
    ctx->pc = 0x309E94u;
    // 0x309e94: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x309e94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_309e98:
    // 0x309e98: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x309e98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 6));
    // 0x309e9c: 0x7c860050  sq          $a2, 0x50($a0)
    ctx->pc = 0x309e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 6));
    // 0x309ea0: 0x7c860080  sq          $a2, 0x80($a0)
    ctx->pc = 0x309ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 6));
    // 0x309ea4: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x309ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x309ea8: 0x20a5ffff  addi        $a1, $a1, -0x1
    ctx->pc = 0x309ea8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x309eac: 0x1405fffa  bne         $zero, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x309EACu;
    {
        const bool branch_taken_0x309eac = (GPR_U64(ctx, 0) != GPR_U64(ctx, 5));
        if (branch_taken_0x309eac) {
            ctx->pc = 0x309E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309e98;
        }
    }
    ctx->pc = 0x309EB4u;
    // 0x309eb4: 0x0  nop
    ctx->pc = 0x309eb4u;
    // NOP
label_309eb8:
    // 0x309eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x309EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309EC0u;
}
