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

// Function: sub_001C7B78
// Address: 0x1c7b78 - 0x1c7bc0
void sub_001C7B78_0x1c7b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7B78_0x1c7b78");
#endif

    switch (ctx->pc) {
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7ba8u: goto label_1c7ba8;
        default: break;
    }

    ctx->pc = 0x1c7b78u;

    // 0x1c7b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7b8c: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B94u);
    ctx->pc = 0x1C7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B8Cu;
    // 0x1c7b90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C7B8Cu, 0x1C7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B94u;
label_1c7b94:
    // 0x1c7b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b98: 0xc071ef0  jal         func_1C7BC0
    ctx->pc = 0x1C7B98u;
    SET_GPR_U32(ctx, 31, 0x1C7BA0u);
    ctx->pc = 0x1C7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B98u;
    // 0x1c7b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7BC0u, 0x1C7B98u, 0x1C7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BA0u;
label_1c7ba0:
    // 0x1c7ba0: 0xc071e88  jal         func_1C7A20
    ctx->pc = 0x1C7BA0u;
    SET_GPR_U32(ctx, 31, 0x1C7BA8u);
    ctx->pc = 0x1C7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BA0u;
    // 0x1c7ba4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A20u, 0x1C7BA0u, 0x1C7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BA8u;
label_1c7ba8:
    // 0x1c7ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7bac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c7bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BB8u;
        // 0x1c7bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7BC0u;
}
