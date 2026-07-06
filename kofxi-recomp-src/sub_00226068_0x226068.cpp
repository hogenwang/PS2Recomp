#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226068
// Address: 0x226068 - 0x2260a8
void sub_00226068_0x226068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226068_0x226068");
#endif

    ctx->pc = 0x226068u;

    // 0x226068: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x226068u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22606c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226070: 0xaf7023  subu        $t6, $a1, $t7
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x226074: 0xaf782b  sltu        $t7, $a1, $t7
    ctx->pc = 0x226074u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x226078: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x226078u;
    {
        const bool branch_taken_0x226078 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x22607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226078u;
            // 0x22607c: 0xe7083  sra         $t6, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226078) {
            ctx->pc = 0x22609Cu;
            goto label_22609c;
        }
    }
    ctx->pc = 0x226080u;
    // 0x226080: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x226080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x226084: 0x1cf782a  slt         $t7, $t6, $t7
    ctx->pc = 0x226084u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x226088: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x226088u;
    {
        const bool branch_taken_0x226088 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x226088) {
            ctx->pc = 0x22609Cu;
            goto label_22609c;
        }
    }
    ctx->pc = 0x226090u;
    // 0x226090: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226094: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x226094u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x226098: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x226098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_22609c:
    // 0x22609c: 0x3e00008  jr          $ra
    ctx->pc = 0x22609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2260A4u;
    // 0x2260a4: 0x0  nop
    ctx->pc = 0x2260a4u;
    // NOP
    ctx->pc = 0x2260a8u;
}
