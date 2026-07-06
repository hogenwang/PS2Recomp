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

// Function: sub_002D7858
// Address: 0x2d7858 - 0x2d7908
void sub_002D7858_0x2d7858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7858_0x2d7858");
#endif

    ctx->pc = 0x2d7858u;

    // 0x2d7858: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7858u;
    {
        const bool branch_taken_0x2d7858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7858u;
        // 0x2d785c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7858) {
            ctx->pc = 0x2D7868u;
            goto label_2d7868;
        }
    }
    ctx->pc = 0x2D7860u;
    // 0x2d7860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7860u;
    {
        const bool branch_taken_0x2d7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7860u;
        // 0x2d7864: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7860) {
            ctx->pc = 0x2D7870u;
            goto label_2d7870;
        }
    }
    ctx->pc = 0x2D7868u;
label_2d7868:
    // 0x2d7868: 0x244209b8  addiu       $v0, $v0, 0x9B8
    ctx->pc = 0x2d7868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2488));
    // 0x2d786c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d786cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d7870:
    // 0x2d7870: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7870u;
    {
        const bool branch_taken_0x2d7870 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7870u;
        // 0x2d7874: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7870) {
            ctx->pc = 0x2D7880u;
            goto label_2d7880;
        }
    }
    ctx->pc = 0x2D7878u;
    // 0x2d7878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7878u;
    {
        const bool branch_taken_0x2d7878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7878u;
        // 0x2d787c: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7878) {
            ctx->pc = 0x2D7888u;
            goto label_2d7888;
        }
    }
    ctx->pc = 0x2D7880u;
label_2d7880:
    // 0x2d7880: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x2d7880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x2d7884: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2d7884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2d7888:
    // 0x2d7888: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7888u;
    {
        const bool branch_taken_0x2d7888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7888u;
        // 0x2d788c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7888) {
            ctx->pc = 0x2D7898u;
            goto label_2d7898;
        }
    }
    ctx->pc = 0x2D7890u;
    // 0x2d7890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7890u;
    {
        const bool branch_taken_0x2d7890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7890u;
        // 0x2d7894: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7890) {
            ctx->pc = 0x2D78A0u;
            goto label_2d78a0;
        }
    }
    ctx->pc = 0x2D7898u;
label_2d7898:
    // 0x2d7898: 0x24421018  addiu       $v0, $v0, 0x1018
    ctx->pc = 0x2d7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4120));
    // 0x2d789c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2d789cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2d78a0:
    // 0x2d78a0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78A0u;
    {
        const bool branch_taken_0x2d78a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78A0u;
        // 0x2d78a4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78a0) {
            ctx->pc = 0x2D78B0u;
            goto label_2d78b0;
        }
    }
    ctx->pc = 0x2D78A8u;
    // 0x2d78a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78A8u;
    {
        const bool branch_taken_0x2d78a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78A8u;
        // 0x2d78ac: 0xac88000c  sw          $t0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78a8) {
            ctx->pc = 0x2D78B8u;
            goto label_2d78b8;
        }
    }
    ctx->pc = 0x2D78B0u;
label_2d78b0:
    // 0x2d78b0: 0x24421dc0  addiu       $v0, $v0, 0x1DC0
    ctx->pc = 0x2d78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7616));
    // 0x2d78b4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2d78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2d78b8:
    // 0x2d78b8: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78B8u;
    {
        const bool branch_taken_0x2d78b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78B8u;
        // 0x2d78bc: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78b8) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D78C0u;
    // 0x2d78c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78C0u;
    {
        const bool branch_taken_0x2d78c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78C0u;
        // 0x2d78c4: 0xac890010  sw          $t1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78c0) {
            ctx->pc = 0x2D78D0u;
            goto label_2d78d0;
        }
    }
    ctx->pc = 0x2D78C8u;
label_2d78c8:
    // 0x2d78c8: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x2d78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
    // 0x2d78cc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2d78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2d78d0:
    // 0x2d78d0: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78D0u;
    {
        const bool branch_taken_0x2d78d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78D0u;
        // 0x2d78d4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78d0) {
            ctx->pc = 0x2D78E0u;
            goto label_2d78e0;
        }
    }
    ctx->pc = 0x2D78D8u;
    // 0x2d78d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78D8u;
    {
        const bool branch_taken_0x2d78d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78D8u;
        // 0x2d78dc: 0xac8a0014  sw          $t2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78d8) {
            ctx->pc = 0x2D78E8u;
            goto label_2d78e8;
        }
    }
    ctx->pc = 0x2D78E0u;
label_2d78e0:
    // 0x2d78e0: 0x24423558  addiu       $v0, $v0, 0x3558
    ctx->pc = 0x2d78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13656));
    // 0x2d78e4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2d78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2d78e8:
    // 0x2d78e8: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78E8u;
    {
        const bool branch_taken_0x2d78e8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78E8u;
        // 0x2d78ec: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78e8) {
            ctx->pc = 0x2D78F8u;
            goto label_2d78f8;
        }
    }
    ctx->pc = 0x2D78F0u;
    // 0x2d78f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D78F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78F0u;
        // 0x2d78f4: 0xac8b0018  sw          $t3, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D78F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D78F8u;
label_2d78f8:
    // 0x2d78f8: 0x24421d38  addiu       $v0, $v0, 0x1D38
    ctx->pc = 0x2d78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7480));
    // 0x2d78fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D78FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78FCu;
        // 0x2d7900: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D78FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7904u;
    // 0x2d7904: 0x0  nop
    ctx->pc = 0x2d7904u;
    // NOP
}
