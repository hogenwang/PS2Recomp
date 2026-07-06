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

// Function: sub_0018DC80
// Address: 0x18dc80 - 0x18dcc0
void sub_0018DC80_0x18dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DC80_0x18dc80");
#endif

    switch (ctx->pc) {
        case 0x18dc94u: goto label_18dc94;
        default: break;
    }

    ctx->pc = 0x18dc80u;

    // 0x18dc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dc8c: 0xc0636b4  jal         func_18DAD0
    ctx->pc = 0x18DC8Cu;
    SET_GPR_U32(ctx, 31, 0x18DC94u);
    ctx->pc = 0x18DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC8Cu;
    // 0x18dc90: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DAD0u, 0x18DC8Cu, 0x18DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC94u;
label_18dc94:
    // 0x18dc94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC94u;
    {
        const bool branch_taken_0x18dc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc94) {
            ctx->pc = 0x18DC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DC94u;
            // 0x18dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DCB0u;
            goto label_18dcb0;
        }
    }
    ctx->pc = 0x18DC9Cu;
    // 0x18dc9c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18dc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18dca0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dca4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dca8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18dca8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18dcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dcb0:
    // 0x18dcb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18dcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18dcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18DCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCB8u;
        // 0x18dcbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DCC0u;
}
