#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5728
// Address: 0x2f5728 - 0x2f5780
void sub_002F5728_0x2f5728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5728_0x2f5728");
#endif

    switch (ctx->pc) {
        case 0x2f5740u: goto label_2f5740;
        case 0x2f5750u: goto label_2f5750;
        case 0x2f5778u: goto label_2f5778;
        default: break;
    }

    ctx->pc = 0x2f5728u;

    // 0x2f5728: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F5728u;
    {
        const bool branch_taken_0x2f5728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5728u;
            // 0x2f572c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5728) {
            ctx->pc = 0x2F5778u;
            goto label_2f5778;
        }
    }
    ctx->pc = 0x2F5730u;
    // 0x2f5730: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5730u;
    {
        const bool branch_taken_0x2f5730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5730u;
            // 0x2f5734: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5730) {
            ctx->pc = 0x2F5740u;
            goto label_2f5740;
        }
    }
    ctx->pc = 0x2F5738u;
    // 0x2f5738: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5738u;
            // 0x2f573c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5740u;
label_2f5740:
    // 0x2f5740: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f5740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f5744: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5744u;
    {
        const bool branch_taken_0x2f5744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5744u;
            // 0x2f5748: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5744) {
            ctx->pc = 0x2F5768u;
            goto label_2f5768;
        }
    }
    ctx->pc = 0x2F574Cu;
    // 0x2f574c: 0x0  nop
    ctx->pc = 0x2f574cu;
    // NOP
label_2f5750:
    // 0x2f5750: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5754: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5754u;
    {
        const bool branch_taken_0x2f5754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5754) {
            ctx->pc = 0x2F5758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5754u;
            // 0x2f5758: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F576Cu;
            goto label_2f576c;
        }
    }
    ctx->pc = 0x2F575Cu;
    // 0x2f575c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5760: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F5760u;
    {
        const bool branch_taken_0x2f5760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5760u;
            // 0x2f5764: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5760) {
            ctx->pc = 0x2F5750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5750;
        }
    }
    ctx->pc = 0x2F5768u;
label_2f5768:
    // 0x2f5768: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f5768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2f576c:
    // 0x2f576c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f576cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5770: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5770u;
            // 0x2f5774: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5778u;
label_2f5778:
    // 0x2f5778: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5780u;
    ctx->pc = 0x2f5780u;
}
