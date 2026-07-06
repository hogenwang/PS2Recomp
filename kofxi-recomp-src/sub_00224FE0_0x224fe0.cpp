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

// Function: sub_00224FE0
// Address: 0x224fe0 - 0x225038
void sub_00224FE0_0x224fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224FE0_0x224fe0");
#endif

    switch (ctx->pc) {
        case 0x224fecu: goto label_224fec;
        default: break;
    }

    ctx->pc = 0x224fe0u;

    // 0x224fe0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x224fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fe4: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x224FE4u;
    {
        const bool branch_taken_0x224fe4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x224FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FE4u;
        // 0x224fe8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fe4) {
            ctx->pc = 0x225030u;
            goto label_225030;
        }
    }
    ctx->pc = 0x224FECu;
label_224fec:
    // 0x224fec: 0x808f0000  lb          $t7, 0x0($a0)
    ctx->pc = 0x224fecu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224ff0: 0x314d0007  andi        $t5, $t2, 0x7
    ctx->pc = 0x224ff0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
    // 0x224ff4: 0xcd6821  addu        $t5, $a2, $t5
    ctx->pc = 0x224ff4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x224ff8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x224ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x224ffc: 0xf7103  sra         $t6, $t7, 4
    ctx->pc = 0x224ffcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 4));
    // 0x225000: 0x91ac0000  lbu         $t4, 0x0($t5)
    ctx->pc = 0x225000u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x225004: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x225004u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x225008: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x225008u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x22500c: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x22500cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x225010: 0x142582a  slt         $t3, $t2, $v0
    ctx->pc = 0x225010u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225014: 0x1ec7826  xor         $t7, $t7, $t4
    ctx->pc = 0x225014u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 12));
    // 0x225018: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x225018u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x22501c: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x22501cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x225020: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x225020u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225024: 0xa08f0000  sb          $t7, 0x0($a0)
    ctx->pc = 0x225024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225028: 0x1560fff0  bnez        $t3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x225028u;
    {
        const bool branch_taken_0x225028 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x22502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225028u;
        // 0x22502c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225028) {
            ctx->pc = 0x224FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224fec;
        }
    }
    ctx->pc = 0x225030u;
label_225030:
    // 0x225030: 0x3e00008  jr          $ra
    ctx->pc = 0x225030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225038u;
}
