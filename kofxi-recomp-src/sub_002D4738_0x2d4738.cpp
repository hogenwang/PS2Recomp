#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D4738
// Address: 0x2d4738 - 0x2d47a0
void sub_002D4738_0x2d4738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4738_0x2d4738");
#endif

    switch (ctx->pc) {
        case 0x2d4768u: goto label_2d4768;
        default: break;
    }

    ctx->pc = 0x2d4738u;

    // 0x2d4738: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d4738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d473c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2d473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d4740: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d4744: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4748: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2d4748u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d474c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D474Cu;
    {
        const bool branch_taken_0x2d474c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D474Cu;
            // 0x2d4750: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d474c) {
            ctx->pc = 0x2D4790u;
            goto label_2d4790;
        }
    }
    ctx->pc = 0x2D4754u;
    // 0x2d4754: 0x58c0000f  blezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2D4754u;
    {
        const bool branch_taken_0x2d4754 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2d4754) {
            ctx->pc = 0x2D4758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4754u;
            // 0x2d4758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4794u;
            goto label_2d4794;
        }
    }
    ctx->pc = 0x2D475Cu;
    // 0x2d475c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d475cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4760: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2d4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2d4764: 0x0  nop
    ctx->pc = 0x2d4764u;
    // NOP
label_2d4768:
    // 0x2d4768: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4768u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d476c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D476Cu;
    {
        const bool branch_taken_0x2d476c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D476Cu;
            // 0x2d4770: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d476c) {
            ctx->pc = 0x2D478Cu;
            goto label_2d478c;
        }
    }
    ctx->pc = 0x2D4774u;
    // 0x2d4774: 0x0  nop
    ctx->pc = 0x2d4774u;
    // NOP
    // 0x2d4778: 0x0  nop
    ctx->pc = 0x2d4778u;
    // NOP
    // 0x2d477c: 0x0  nop
    ctx->pc = 0x2d477cu;
    // NOP
    // 0x2d4780: 0x0  nop
    ctx->pc = 0x2d4780u;
    // NOP
    // 0x2d4784: 0x5cc0fff8  bgtzl       $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D4784u;
    {
        const bool branch_taken_0x2d4784 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x2d4784) {
            ctx->pc = 0x2D4788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4784u;
            // 0x2d4788: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4768;
        }
    }
    ctx->pc = 0x2D478Cu;
label_2d478c:
    // 0x2d478c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2d478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2d4790:
    // 0x2d4790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4794:
    // 0x2d4794: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4794u;
            // 0x2d4798: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D479Cu;
    // 0x2d479c: 0x0  nop
    ctx->pc = 0x2d479cu;
    // NOP
    ctx->pc = 0x2d47a0u;
}
