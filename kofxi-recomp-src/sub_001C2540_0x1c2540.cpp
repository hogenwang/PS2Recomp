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

// Function: sub_001C2540
// Address: 0x1c2540 - 0x1c25b8
void sub_001C2540_0x1c2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2540_0x1c2540");
#endif

    switch (ctx->pc) {
        case 0x1c2580u: goto label_1c2580;
        case 0x1c2594u: goto label_1c2594;
        default: break;
    }

    ctx->pc = 0x1c2540u;

    // 0x1c2540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2544: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c2544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c2548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c254c: 0x2463d08c  addiu       $v1, $v1, -0x2F74
    ctx->pc = 0x1c254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955148));
    // 0x1c2550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c2558: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c2558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c255c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2564: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2564u;
    {
        const bool branch_taken_0x1c2564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2564u;
        // 0x1c2568: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2564) {
            ctx->pc = 0x1C25A0u;
            goto label_1c25a0;
        }
    }
    ctx->pc = 0x1C256Cu;
    // 0x1c256c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c2570: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c2570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2574: 0x2450d090  addiu       $s0, $v0, -0x2F70
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x1c2578: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1c2578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c257c: 0x0  nop
    ctx->pc = 0x1c257cu;
    // NOP
label_1c2580:
    // 0x1c2580: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c2580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2584: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2584u;
    {
        const bool branch_taken_0x1c2584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c2584) {
            ctx->pc = 0x1C2588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2584u;
            // 0x1c2588: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2598u;
            goto label_1c2598;
        }
    }
    ctx->pc = 0x1C258Cu;
    // 0x1c258c: 0xc070896  jal         func_1C2258
    ctx->pc = 0x1C258Cu;
    SET_GPR_U32(ctx, 31, 0x1C2594u);
    ctx->pc = 0x1C2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C258Cu;
    // 0x1c2590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2258u, 0x1C258Cu, 0x1C2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2594u;
label_1c2594:
    // 0x1c2594: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c2594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c2598:
    // 0x1c2598: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2598u;
    {
        const bool branch_taken_0x1c2598 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2598u;
        // 0x1c259c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2598) {
            ctx->pc = 0x1C2580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2580;
        }
    }
    ctx->pc = 0x1C25A0u;
label_1c25a0:
    // 0x1c25a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c25a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c25a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c25a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c25a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c25a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c25ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c25b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25B0u;
        // 0x1c25b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25B8u;
}
