#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261858
// Address: 0x261858 - 0x261890
void sub_00261858_0x261858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261858_0x261858");
#endif

    switch (ctx->pc) {
        case 0x261860u: goto label_261860;
        case 0x261884u: goto label_261884;
        default: break;
    }

    ctx->pc = 0x261858u;

    // 0x261858: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x261858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x26185c: 0x8c43d768  lw          $v1, -0x2898($v0)
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956904)));
label_261860:
    // 0x261860: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x261860u;
    {
        const bool branch_taken_0x261860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261860) {
            ctx->pc = 0x26187Cu;
            goto label_26187c;
        }
    }
    ctx->pc = 0x261868u;
    // 0x261868: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x261868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26186c: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x26186Cu;
    {
        const bool branch_taken_0x26186c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26186c) {
            ctx->pc = 0x261870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26186Cu;
            // 0x261870: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x261860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261860;
        }
    }
    ctx->pc = 0x261874u;
    // 0x261874: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x261874u;
    {
        const bool branch_taken_0x261874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261874) {
            ctx->pc = 0x261878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261874u;
            // 0x261878: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x261884u;
            goto label_261884;
        }
    }
    ctx->pc = 0x26187Cu;
label_26187c:
    // 0x26187c: 0x3e00008  jr          $ra
    ctx->pc = 0x26187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26187Cu;
            // 0x261880: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261884u;
label_261884:
    // 0x261884: 0x3e00008  jr          $ra
    ctx->pc = 0x261884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261884u;
            // 0x261888: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26188Cu;
    // 0x26188c: 0x0  nop
    ctx->pc = 0x26188cu;
    // NOP
    ctx->pc = 0x261890u;
}
