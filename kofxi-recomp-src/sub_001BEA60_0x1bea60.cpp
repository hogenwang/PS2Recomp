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

// Function: sub_001BEA60
// Address: 0x1bea60 - 0x1beac8
void sub_001BEA60_0x1bea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEA60_0x1bea60");
#endif

    switch (ctx->pc) {
        case 0x1bea84u: goto label_1bea84;
        default: break;
    }

    ctx->pc = 0x1bea60u;

    // 0x1bea60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bea64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bea68: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1bea6c: 0x26105790  addiu       $s0, $s0, 0x5790
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22416));
    // 0x1bea70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bea74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bea74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bea7c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1BEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEA84u);
    ctx->pc = 0x1BEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA7Cu;
    // 0x1bea80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BEA7Cu, 0x1BEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA84u;
label_1bea84:
    // 0x1bea84: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1bea84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bea88: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bea8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEA90u;
    {
        const bool branch_taken_0x1bea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea90) {
            ctx->pc = 0x1BEAB0u;
            goto label_1beab0;
        }
    }
    ctx->pc = 0x1BEA98u;
    // 0x1bea98: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1bea98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bea9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bea9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beaa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1beaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1beaa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1beaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA8u;
        // 0x1beaac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAB0u;
label_1beab0:
    // 0x1beab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1beab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1beab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1beab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beabc: 0x8049c48  j           func_127120
    ctx->pc = 0x1BEABCu;
    ctx->pc = 0x1BEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEABCu;
    // 0x1beac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x1BEAC4u;
    // 0x1beac4: 0x0  nop
    ctx->pc = 0x1beac4u;
    // NOP
}
