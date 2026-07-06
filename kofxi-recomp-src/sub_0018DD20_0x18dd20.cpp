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

// Function: sub_0018DD20
// Address: 0x18dd20 - 0x18dd60
void sub_0018DD20_0x18dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DD20_0x18dd20");
#endif

    switch (ctx->pc) {
        case 0x18dd34u: goto label_18dd34;
        default: break;
    }

    ctx->pc = 0x18dd20u;

    // 0x18dd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18dd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18dd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dd2c: 0xc063718  jal         func_18DC60
    ctx->pc = 0x18DD2Cu;
    SET_GPR_U32(ctx, 31, 0x18DD34u);
    ctx->pc = 0x18DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD2Cu;
    // 0x18dd30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC60u, 0x18DD2Cu, 0x18DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD34u;
label_18dd34:
    // 0x18dd34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DD34u;
    {
        const bool branch_taken_0x18dd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd34) {
            ctx->pc = 0x18DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DD34u;
            // 0x18dd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD50u;
            goto label_18dd50;
        }
    }
    ctx->pc = 0x18DD3Cu;
    // 0x18dd3c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18dd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18dd40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dd44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dd48: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18dd48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18dd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dd50:
    // 0x18dd50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18dd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18dd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd58: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD58u;
        // 0x18dd5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DD60u;
}
