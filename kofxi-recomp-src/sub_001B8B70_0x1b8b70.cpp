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

// Function: sub_001B8B70
// Address: 0x1b8b70 - 0x1b8bc8
void sub_001B8B70_0x1b8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8B70_0x1b8b70");
#endif

    switch (ctx->pc) {
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8bacu: goto label_1b8bac;
        default: break;
    }

    ctx->pc = 0x1b8b70u;

    // 0x1b8b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8b74: 0x24a6fc00  addiu       $a2, $a1, -0x400
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x1b8b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b80: 0x26050400  addiu       $a1, $s0, 0x400
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x1b8b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8b8c: 0xc06e204  jal         func_1B8810
    ctx->pc = 0x1B8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B94u);
    ctx->pc = 0x1B8B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B8Cu;
    // 0x1b8b90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8810u, 0x1B8B8Cu, 0x1B8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B94u;
label_1b8b94:
    // 0x1b8b94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b98: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8B98u;
    {
        const bool branch_taken_0x1b8b98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B98u;
        // 0x1b8b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b98) {
            ctx->pc = 0x1B8BB0u;
            goto label_1b8bb0;
        }
    }
    ctx->pc = 0x1B8BA0u;
    // 0x1b8ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ba4: 0xc0720c6  jal         func_1C8318
    ctx->pc = 0x1B8BA4u;
    SET_GPR_U32(ctx, 31, 0x1B8BACu);
    ctx->pc = 0x1B8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8BA4u;
    // 0x1b8ba8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8318u, 0x1B8BA4u, 0x1B8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BACu;
label_1b8bac:
    // 0x1b8bac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b8bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8bb0:
    // 0x1b8bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BBCu;
        // 0x1b8bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8BC4u;
    // 0x1b8bc4: 0x0  nop
    ctx->pc = 0x1b8bc4u;
    // NOP
    if (ctx->pc == 0x1b8bc4u) { ctx->pc = 0x1b8bc8u; }
}
