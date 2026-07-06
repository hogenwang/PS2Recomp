#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025AA40
// Address: 0x25aa40 - 0x25aa70
void sub_0025AA40_0x25aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA40_0x25aa40");
#endif

    switch (ctx->pc) {
        case 0x25aa48u: goto label_25aa48;
        default: break;
    }

    ctx->pc = 0x25aa40u;

    // 0x25aa40: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x25aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x25aa44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25aa48:
    // 0x25aa48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25aa4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25aa50: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x25aa54: 0x0  nop
    ctx->pc = 0x25aa54u;
    // NOP
    // 0x25aa58: 0x0  nop
    ctx->pc = 0x25aa58u;
    // NOP
    // 0x25aa5c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25AA5Cu;
    {
        const bool branch_taken_0x25aa5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25aa5c) {
            ctx->pc = 0x25AA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25aa48;
        }
    }
    ctx->pc = 0x25AA64u;
    // 0x25aa64: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AA6Cu;
    // 0x25aa6c: 0x0  nop
    ctx->pc = 0x25aa6cu;
    // NOP
    ctx->pc = 0x25aa70u;
}
