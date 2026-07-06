#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CEB0
// Address: 0x25ceb0 - 0x25cee8
void sub_0025CEB0_0x25ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CEB0_0x25ceb0");
#endif

    switch (ctx->pc) {
        case 0x25cec0u: goto label_25cec0;
        default: break;
    }

    ctx->pc = 0x25ceb0u;

    // 0x25ceb0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x25ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x25ceb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25CEB4u;
    {
        const bool branch_taken_0x25ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ceb4) {
            ctx->pc = 0x25CEE0u;
            goto label_25cee0;
        }
    }
    ctx->pc = 0x25CEBCu;
    // 0x25cebc: 0x0  nop
    ctx->pc = 0x25cebcu;
    // NOP
label_25cec0:
    // 0x25cec0: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x25cec4: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x25cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x25cec8: 0x0  nop
    ctx->pc = 0x25cec8u;
    // NOP
    // 0x25cecc: 0x0  nop
    ctx->pc = 0x25ceccu;
    // NOP
    // 0x25ced0: 0x0  nop
    ctx->pc = 0x25ced0u;
    // NOP
    // 0x25ced4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25CED4u;
    {
        const bool branch_taken_0x25ced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ced4) {
            ctx->pc = 0x25CEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25cec0;
        }
    }
    ctx->pc = 0x25CEDCu;
    // 0x25cedc: 0x0  nop
    ctx->pc = 0x25cedcu;
    // NOP
label_25cee0:
    // 0x25cee0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CEE8u;
    ctx->pc = 0x25cee8u;
}
