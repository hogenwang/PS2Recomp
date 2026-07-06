#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002250F0
// Address: 0x2250f0 - 0x225148
void sub_002250F0_0x2250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002250F0_0x2250f0");
#endif

    switch (ctx->pc) {
        case 0x2250fcu: goto label_2250fc;
        default: break;
    }

    ctx->pc = 0x2250f0u;

    // 0x2250f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2250f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250f4: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2250F4u;
    {
        const bool branch_taken_0x2250f4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2250F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250F4u;
            // 0x2250f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250f4) {
            ctx->pc = 0x225140u;
            goto label_225140;
        }
    }
    ctx->pc = 0x2250FCu;
label_2250fc:
    // 0x2250fc: 0x316e0007  andi        $t6, $t3, 0x7
    ctx->pc = 0x2250fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x225100: 0x808d0000  lb          $t5, 0x0($a0)
    ctx->pc = 0x225100u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225104: 0xce7021  addu        $t6, $a2, $t6
    ctx->pc = 0x225104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x225108: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x225108u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x22510c: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x22510cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x225110: 0x162602a  slt         $t4, $t3, $v0
    ctx->pc = 0x225110u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225114: 0x1af7826  xor         $t7, $t5, $t7
    ctx->pc = 0x225114u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 15));
    // 0x225118: 0xa1cd0000  sb          $t5, 0x0($t6)
    ctx->pc = 0x225118u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x22511c: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x22511cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x225120: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x225120u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x225124: 0xf7103  sra         $t6, $t7, 4
    ctx->pc = 0x225124u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 4));
    // 0x225128: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x225128u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x22512c: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x22512cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x225130: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x225130u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x225134: 0xa08f0000  sb          $t7, 0x0($a0)
    ctx->pc = 0x225134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225138: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x225138u;
    {
        const bool branch_taken_0x225138 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x22513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225138u;
            // 0x22513c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225138) {
            ctx->pc = 0x2250FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2250fc;
        }
    }
    ctx->pc = 0x225140u;
label_225140:
    // 0x225140: 0x3e00008  jr          $ra
    ctx->pc = 0x225140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225148u;
    ctx->pc = 0x225148u;
}
