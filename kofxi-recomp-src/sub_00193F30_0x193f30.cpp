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

// Function: sub_00193F30
// Address: 0x193f30 - 0x193f70
void sub_00193F30_0x193f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193F30_0x193f30");
#endif

    ctx->pc = 0x193f30u;

    // 0x193f30: 0x8485039a  lh          $a1, 0x39A($a0)
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 922)));
    // 0x193f34: 0x24860314  addiu       $a2, $a0, 0x314
    ctx->pc = 0x193f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 788));
    // 0x193f38: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x193F38u;
    {
        const bool branch_taken_0x193f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F38u;
        // 0x193f3c: 0x24830268  addiu       $v1, $a0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f38) {
            ctx->pc = 0x193F60u;
            goto label_193f60;
        }
    }
    ctx->pc = 0x193F40u;
    // 0x193f40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193f44: 0x3c03000d  lui         $v1, 0xD
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13 << 16));
    // 0x193f48: 0x3463b600  ori         $v1, $v1, 0xB600
    ctx->pc = 0x193f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46592);
    // 0x193f4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x193f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x193f50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193F50u;
    {
        const bool branch_taken_0x193f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f50) {
            ctx->pc = 0x193F60u;
            goto label_193f60;
        }
    }
    ctx->pc = 0x193F58u;
    // 0x193f58: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x193f5c: 0xa4c30086  sh          $v1, 0x86($a2)
    ctx->pc = 0x193f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 134), (uint16_t)GPR_U32(ctx, 3));
label_193f60:
    // 0x193f60: 0x3e00008  jr          $ra
    ctx->pc = 0x193F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193F68u;
    // 0x193f68: 0x0  nop
    ctx->pc = 0x193f68u;
    // NOP
    // 0x193f6c: 0x0  nop
    ctx->pc = 0x193f6cu;
    // NOP
    if (ctx->pc == 0x193f6cu) { ctx->pc = 0x193f70u; }
}
