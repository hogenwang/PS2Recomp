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

// Function: sub_001C6828
// Address: 0x1c6828 - 0x1c68c0
void sub_001C6828_0x1c6828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6828_0x1c6828");
#endif

    switch (ctx->pc) {
        case 0x1c6840u: goto label_1c6840;
        case 0x1c6860u: goto label_1c6860;
        case 0x1c689cu: goto label_1c689c;
        default: break;
    }

    ctx->pc = 0x1c6828u;

    // 0x1c6828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c682c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C682Cu;
    {
        const bool branch_taken_0x1c682c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C682Cu;
        // 0x1c6830: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c682c) {
            ctx->pc = 0x1C6848u;
            goto label_1c6848;
        }
    }
    ctx->pc = 0x1C6834u;
    // 0x1c6834: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6838: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6838u;
    SET_GPR_U32(ctx, 31, 0x1C6840u);
    ctx->pc = 0x1C683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6838u;
    // 0x1c683c: 0x2484a8d0  addiu       $a0, $a0, -0x5730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C6838u, 0x1C6840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6840u;
label_1c6840:
    // 0x1c6840: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6840u;
    {
        const bool branch_taken_0x1c6840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6840u;
        // 0x1c6844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6840) {
            ctx->pc = 0x1C68B0u;
            goto label_1c68b0;
        }
    }
    ctx->pc = 0x1C6848u;
label_1c6848:
    // 0x1c6848: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1c684c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6850: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6850u;
    {
        const bool branch_taken_0x1c6850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6850u;
        // 0x1c6854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6850) {
            ctx->pc = 0x1C6884u;
            goto label_1c6884;
        }
    }
    ctx->pc = 0x1C6858u;
    // 0x1c6858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c6858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c685c: 0x0  nop
    ctx->pc = 0x1c685cu;
    // NOP
label_1c6860:
    // 0x1c6860: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1c6860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c6864: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6864u;
    {
        const bool branch_taken_0x1c6864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6864u;
        // 0x1c6868: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6864) {
            ctx->pc = 0x1C6884u;
            goto label_1c6884;
        }
    }
    ctx->pc = 0x1C686Cu;
    // 0x1c686c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6870: 0x0  nop
    ctx->pc = 0x1c6870u;
    // NOP
    // 0x1c6874: 0x0  nop
    ctx->pc = 0x1c6874u;
    // NOP
    // 0x1c6878: 0x0  nop
    ctx->pc = 0x1c6878u;
    // NOP
    // 0x1c687c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C687Cu;
    {
        const bool branch_taken_0x1c687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c687c) {
            ctx->pc = 0x1C6880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C687Cu;
            // 0x1c6880: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6860;
        }
    }
    ctx->pc = 0x1C6884u;
label_1c6884:
    // 0x1c6884: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c6884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6888: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6888u;
    {
        const bool branch_taken_0x1c6888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6888) {
            ctx->pc = 0x1C688Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6888u;
            // 0x1c688c: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C68A8u;
            goto label_1c68a8;
        }
    }
    ctx->pc = 0x1C6890u;
    // 0x1c6890: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6894: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6894u;
    SET_GPR_U32(ctx, 31, 0x1C689Cu);
    ctx->pc = 0x1C6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6894u;
    // 0x1c6898: 0x2484a900  addiu       $a0, $a0, -0x5700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C6894u, 0x1C689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C689Cu;
label_1c689c:
    // 0x1c689c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C689Cu;
    {
        const bool branch_taken_0x1c689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C689Cu;
        // 0x1c68a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c689c) {
            ctx->pc = 0x1C68B0u;
            goto label_1c68b0;
        }
    }
    ctx->pc = 0x1C68A4u;
    // 0x1c68a4: 0x0  nop
    ctx->pc = 0x1c68a4u;
    // NOP
label_1c68a8:
    // 0x1c68a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c68ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c68b0:
    // 0x1c68b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c68b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c68b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C68B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68B4u;
        // 0x1c68b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C68B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C68BCu;
    // 0x1c68bc: 0x0  nop
    ctx->pc = 0x1c68bcu;
    // NOP
}
