#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A57F0
// Address: 0x1a57f0 - 0x1a5870
void sub_001A57F0_0x1a57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A57F0_0x1a57f0");
#endif

    switch (ctx->pc) {
        case 0x1a5810u: goto label_1a5810;
        default: break;
    }

    ctx->pc = 0x1a57f0u;

    // 0x1a57f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a57f4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a57f8: 0x2463b8a4  addiu       $v1, $v1, -0x475C
    ctx->pc = 0x1a57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949028));
    // 0x1a57fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5800: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a5800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5804: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a5804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5808: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5808u;
    {
        const bool branch_taken_0x1a5808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5808) {
            ctx->pc = 0x1A5830u;
            goto label_1a5830;
        }
    }
    ctx->pc = 0x1A5810u;
label_1a5810:
    // 0x1a5810: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a5810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a5814: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a5814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a5818: 0x0  nop
    ctx->pc = 0x1a5818u;
    // NOP
    // 0x1a581c: 0x0  nop
    ctx->pc = 0x1a581cu;
    // NOP
    // 0x1a5820: 0x0  nop
    ctx->pc = 0x1a5820u;
    // NOP
    // 0x1a5824: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5824u;
    {
        const bool branch_taken_0x1a5824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5824) {
            ctx->pc = 0x1A5810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5810;
        }
    }
    ctx->pc = 0x1A582Cu;
    // 0x1a582c: 0x0  nop
    ctx->pc = 0x1a582cu;
    // NOP
label_1a5830:
    // 0x1a5830: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1a5830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5834: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x1a5834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x1a5838: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a583c: 0x24a5b8a4  addiu       $a1, $a1, -0x475C
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949028));
    // 0x1a5840: 0x2463b8a0  addiu       $v1, $v1, -0x4760
    ctx->pc = 0x1a5840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949024));
    // 0x1a5844: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a5848: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a5848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a584c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1a584cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a5850: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5854: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a585c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A585Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A585Cu;
            // 0x1a5860: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5864u;
    // 0x1a5864: 0x0  nop
    ctx->pc = 0x1a5864u;
    // NOP
    // 0x1a5868: 0x0  nop
    ctx->pc = 0x1a5868u;
    // NOP
    // 0x1a586c: 0x0  nop
    ctx->pc = 0x1a586cu;
    // NOP
    ctx->pc = 0x1a5870u;
}
