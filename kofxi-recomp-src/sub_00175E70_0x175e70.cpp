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

// Function: sub_00175E70
// Address: 0x175e70 - 0x175eb0
void sub_00175E70_0x175e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E70_0x175e70");
#endif

    switch (ctx->pc) {
        case 0x175e98u: goto label_175e98;
        default: break;
    }

    ctx->pc = 0x175e70u;

    // 0x175e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175e74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175e7c: 0x9464dab0  lhu         $a0, -0x2550($v1)
    ctx->pc = 0x175e7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x175e80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x175e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175e84: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175E84u;
    {
        const bool branch_taken_0x175e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x175e84) {
            ctx->pc = 0x175E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175E84u;
            // 0x175e88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175E9Cu;
            goto label_175e9c;
        }
    }
    ctx->pc = 0x175E8Cu;
    // 0x175e8c: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x175e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x175e90: 0xc0558e0  jal         func_156380
    ctx->pc = 0x175E90u;
    SET_GPR_U32(ctx, 31, 0x175E98u);
    ctx->pc = 0x175E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E90u;
    // 0x175e94: 0x24840700  addiu       $a0, $a0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x175E90u, 0x175E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E98u;
label_175e98:
    // 0x175e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175e9c:
    // 0x175e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x175E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E9Cu;
        // 0x175ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175EA4u;
    // 0x175ea4: 0x0  nop
    ctx->pc = 0x175ea4u;
    // NOP
    // 0x175ea8: 0x0  nop
    ctx->pc = 0x175ea8u;
    // NOP
    // 0x175eac: 0x0  nop
    ctx->pc = 0x175eacu;
    // NOP
}
