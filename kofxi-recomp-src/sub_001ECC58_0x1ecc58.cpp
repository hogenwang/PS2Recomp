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

// Function: sub_001ECC58
// Address: 0x1ecc58 - 0x1ecc98
void sub_001ECC58_0x1ecc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECC58_0x1ecc58");
#endif

    switch (ctx->pc) {
        case 0x1ecc6cu: goto label_1ecc6c;
        default: break;
    }

    ctx->pc = 0x1ecc58u;

    // 0x1ecc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ecc5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ecc60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ecc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ecc64: 0xc07b374  jal         func_1ECDD0
    ctx->pc = 0x1ECC64u;
    SET_GPR_U32(ctx, 31, 0x1ECC6Cu);
    ctx->pc = 0x1ECC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC64u;
    // 0x1ecc68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECDD0u, 0x1ECC64u, 0x1ECC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC6Cu;
label_1ecc6c:
    // 0x1ecc6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ecc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC70u;
    {
        const bool branch_taken_0x1ecc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC70u;
        // 0x1ecc74: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc70) {
            ctx->pc = 0x1ECC88u;
            goto label_1ecc88;
        }
    }
    ctx->pc = 0x1ECC78u;
    // 0x1ecc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecc7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ecc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ecc80: 0x807b326  j           func_1ECC98
    ctx->pc = 0x1ECC80u;
    ctx->pc = 0x1ECC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC80u;
    // 0x1ecc84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECC98u;
    sub_001ECC98_0x1ecc98(rdram, ctx, runtime); return;
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecc8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ecc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ecc90: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC90u;
        // 0x1ecc94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECC98u;
}
