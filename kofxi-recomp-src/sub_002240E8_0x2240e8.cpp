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

// Function: sub_002240E8
// Address: 0x2240e8 - 0x224158
void sub_002240E8_0x2240e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002240E8_0x2240e8");
#endif

    switch (ctx->pc) {
        case 0x2240f8u: goto label_2240f8;
        case 0x224100u: goto label_224100;
        default: break;
    }

    ctx->pc = 0x2240e8u;

    // 0x2240e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2240e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240ec: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2240ECu;
    {
        const bool branch_taken_0x2240ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2240F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240ECu;
        // 0x2240f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240ec) {
            ctx->pc = 0x224150u;
            goto label_224150;
        }
    }
    ctx->pc = 0x2240F4u;
    // 0x2240f4: 0x8a7821  addu        $t7, $a0, $t2
    ctx->pc = 0x2240f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_2240f8:
    // 0x2240f8: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x2240f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2240fc: 0x81ed0000  lb          $t5, 0x0($t7)
    ctx->pc = 0x2240fcu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_224100:
    // 0x224100: 0x304c8000  andi        $t4, $v0, 0x8000
    ctx->pc = 0x224100u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x224104: 0x27840  sll         $t7, $v0, 1
    ctx->pc = 0x224104u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x224108: 0xf1400  sll         $v0, $t7, 16
    ctx->pc = 0x224108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x22410c: 0x398e0000  xori        $t6, $t4, 0x0
    ctx->pc = 0x22410cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)0);
    // 0x224110: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x224110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x224114: 0x31ac0080  andi        $t4, $t5, 0x80
    ctx->pc = 0x224114u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)128);
    // 0x224118: 0x384f1021  xori        $t7, $v0, 0x1021
    ctx->pc = 0x224118u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4129);
    // 0x22411c: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x22411cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x224120: 0x1ee100b  movn        $v0, $t7, $t6
    ctx->pc = 0x224120u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x224124: 0xd6e00  sll         $t5, $t5, 24
    ctx->pc = 0x224124u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x224128: 0x398e0000  xori        $t6, $t4, 0x0
    ctx->pc = 0x224128u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)0);
    // 0x22412c: 0x384f0001  xori        $t7, $v0, 0x1
    ctx->pc = 0x22412cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x224130: 0x1ee100b  movn        $v0, $t7, $t6
    ctx->pc = 0x224130u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x224134: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x224134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x224138: 0x561fff1  bgez        $t3, . + 4 + (-0xF << 2)
    ctx->pc = 0x224138u;
    {
        const bool branch_taken_0x224138 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x22413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224138u;
        // 0x22413c: 0xd6e03  sra         $t5, $t5, 24 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224138) {
            ctx->pc = 0x224100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224100;
        }
    }
    ctx->pc = 0x224140u;
    // 0x224140: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x224140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x224144: 0x145782a  slt         $t7, $t2, $a1
    ctx->pc = 0x224144u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x224148: 0x15e0ffeb  bnez        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x224148u;
    {
        const bool branch_taken_0x224148 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x22414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224148u;
        // 0x22414c: 0x8a7821  addu        $t7, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224148) {
            ctx->pc = 0x2240F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2240f8;
        }
    }
    ctx->pc = 0x224150u;
label_224150:
    // 0x224150: 0x3e00008  jr          $ra
    ctx->pc = 0x224150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224158u;
}
