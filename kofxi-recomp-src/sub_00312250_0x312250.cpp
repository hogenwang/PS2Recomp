#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00312250
// Address: 0x312250 - 0x3122a0
void sub_00312250_0x312250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312250_0x312250");
#endif

    ctx->pc = 0x312250u;

    // 0x312250: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x312250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x312254: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x312254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x312258: 0x54c30009  bnel        $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x312258u;
    {
        const bool branch_taken_0x312258 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x312258) {
            ctx->pc = 0x31225Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312258u;
            // 0x31225c: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x312280u;
            goto label_312280;
        }
    }
    ctx->pc = 0x312260u;
    // 0x312260: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312264: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x312264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x312268: 0x8c63d940  lw          $v1, -0x26C0($v1)
    ctx->pc = 0x312268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957376)));
    // 0x31226c: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31226Cu;
    {
        const bool branch_taken_0x31226c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x31226c) {
            ctx->pc = 0x312270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31226Cu;
            // 0x312270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31227Cu;
            goto label_31227c;
        }
    }
    ctx->pc = 0x312274u;
    // 0x312274: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312278: 0x9065d938  lbu         $a1, -0x26C8($v1)
    ctx->pc = 0x312278u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957368)));
label_31227c:
    // 0x31227c: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x31227cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_312280:
    // 0x312280: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x312280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x312284: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x312284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x312288: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x31228c: 0xac86d940  sw          $a2, -0x26C0($a0)
    ctx->pc = 0x31228cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957376), GPR_U32(ctx, 6));
    // 0x312290: 0x3e00008  jr          $ra
    ctx->pc = 0x312290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312290u;
            // 0x312294: 0xac65d938  sw          $a1, -0x26C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312298u;
    // 0x312298: 0x0  nop
    ctx->pc = 0x312298u;
    // NOP
    // 0x31229c: 0x0  nop
    ctx->pc = 0x31229cu;
    // NOP
    ctx->pc = 0x3122a0u;
}
