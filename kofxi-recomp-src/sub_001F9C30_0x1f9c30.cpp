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

// Function: sub_001F9C30
// Address: 0x1f9c30 - 0x1f9cc8
void sub_001F9C30_0x1f9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9C30_0x1f9c30");
#endif

    ctx->pc = 0x1f9c30u;

    // 0x1f9c30: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f9c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c34: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1f9c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c38: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f9c3c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f9c40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9C40u;
    {
        const bool branch_taken_0x1f9c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C40u;
        // 0x1f9c44: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c40) {
            ctx->pc = 0x1F9C58u;
            goto label_1f9c58;
        }
    }
    ctx->pc = 0x1F9C48u;
    // 0x1f9c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9c4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C50u;
        // 0x1f9c54: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C58u;
label_1f9c58:
    // 0x1f9c58: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1f9c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1f9c5c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f9c60: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1f9c60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9c64: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f9c68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9c6c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f9c70: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1f9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1f9c74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f9c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c78: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x1f9c78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f9c7c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1f9c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1f9c80: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f9c84: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1f9c84u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9c88: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9C88u;
    {
        const bool branch_taken_0x1f9c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C88u;
        // 0x1f9c8c: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c88) {
            ctx->pc = 0x1F9C94u;
            goto label_1f9c94;
        }
    }
    ctx->pc = 0x1F9C90u;
    // 0x1f9c90: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1f9c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f9c94:
    // 0x1f9c94: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f9c98: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x1f9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x1f9c9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9ca0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1f9ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9ca4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9CA4u;
    {
        const bool branch_taken_0x1f9ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CA4u;
        // 0x1f9ca8: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ca4) {
            ctx->pc = 0x1F9CB8u;
            goto label_1f9cb8;
        }
    }
    ctx->pc = 0x1F9CACu;
    // 0x1f9cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9cb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9CB0u;
    {
        const bool branch_taken_0x1f9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CB0u;
        // 0x1f9cb4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cb0) {
            ctx->pc = 0x1F9CBCu;
            goto label_1f9cbc;
        }
    }
    ctx->pc = 0x1F9CB8u;
label_1f9cb8:
    // 0x1f9cb8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1f9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_1f9cbc:
    // 0x1f9cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CBCu;
        // 0x1f9cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9CC4u;
    // 0x1f9cc4: 0x0  nop
    ctx->pc = 0x1f9cc4u;
    // NOP
    if (ctx->pc == 0x1f9cc4u) { ctx->pc = 0x1f9cc8u; }
}
