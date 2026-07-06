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

// Function: sub_002267B0
// Address: 0x2267b0 - 0x226870
void sub_002267B0_0x2267b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267B0_0x2267b0");
#endif

    switch (ctx->pc) {
        case 0x2267ecu: goto label_2267ec;
        case 0x2267f0u: goto label_2267f0;
        case 0x22680cu: goto label_22680c;
        case 0x226834u: goto label_226834;
        case 0x226864u: goto label_226864;
        default: break;
    }

    ctx->pc = 0x2267b0u;

    // 0x2267b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2267b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2267b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2267b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2267b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2267bc: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2267bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2267c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2267c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2267c4: 0x8e2ff1dc  lw          $t7, -0xE24($s1)
    ctx->pc = 0x2267c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963676)));
    // 0x2267c8: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x2267C8u;
    {
        const bool branch_taken_0x2267c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267C8u;
        // 0x2267cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267c8) {
            ctx->pc = 0x226804u;
            goto label_226804;
        }
    }
    ctx->pc = 0x2267D0u;
    // 0x2267d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2267d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2267d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2267d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2267d8: 0x24843928  addiu       $a0, $a0, 0x3928
    ctx->pc = 0x2267d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14632));
    // 0x2267dc: 0x24e73940  addiu       $a3, $a3, 0x3940
    ctx->pc = 0x2267dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14656));
    // 0x2267e0: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x2267e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2267e4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2267E4u;
    SET_GPR_U32(ctx, 31, 0x2267ECu);
    ctx->pc = 0x2267E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267E4u;
    // 0x2267e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2267E4u, 0x2267ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267ECu;
label_2267ec:
    // 0x2267ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2267ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2267f0:
    // 0x2267f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2267f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2267f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2267f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2267f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2267fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2267FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267FCu;
        // 0x226800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226804u;
label_226804:
    // 0x226804: 0xc0be74a  jal         func_2F9D28
    ctx->pc = 0x226804u;
    SET_GPR_U32(ctx, 31, 0x22680Cu);
    ctx->pc = 0x2F9D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9D28u, 0x226804u, 0x22680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22680Cu;
label_22680c:
    // 0x22680c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22680cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226810: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226814: 0x24843928  addiu       $a0, $a0, 0x3928
    ctx->pc = 0x226814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14632));
    // 0x226818: 0x24e73958  addiu       $a3, $a3, 0x3958
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14680));
    // 0x22681c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x22681cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226820: 0x240500d9  addiu       $a1, $zero, 0xD9
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x226824: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226824u;
    {
        const bool branch_taken_0x226824 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226824u;
        // 0x226828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226824) {
            ctx->pc = 0x22683Cu;
            goto label_22683c;
        }
    }
    ctx->pc = 0x22682Cu;
    // 0x22682c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22682Cu;
    SET_GPR_U32(ctx, 31, 0x226834u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22682Cu, 0x226834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226834u;
label_226834:
    // 0x226834: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x226834u;
    {
        const bool branch_taken_0x226834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226834u;
        // 0x226838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226834) {
            ctx->pc = 0x2267F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2267f0;
        }
    }
    ctx->pc = 0x22683Cu;
label_22683c:
    // 0x22683c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x22683cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226840: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226844: 0xae2ff1dc  sw          $t7, -0xE24($s1)
    ctx->pc = 0x226844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963676), GPR_U32(ctx, 15));
    // 0x226848: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22684c: 0x24843928  addiu       $a0, $a0, 0x3928
    ctx->pc = 0x22684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14632));
    // 0x226850: 0x24e73980  addiu       $a3, $a3, 0x3980
    ctx->pc = 0x226850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14720));
    // 0x226854: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226858: 0x240500de  addiu       $a1, $zero, 0xDE
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x22685c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22685Cu;
    SET_GPR_U32(ctx, 31, 0x226864u);
    ctx->pc = 0x226860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22685Cu;
    // 0x226860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22685Cu, 0x226864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226864u;
label_226864:
    // 0x226864: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x226864u;
    {
        const bool branch_taken_0x226864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226864u;
        // 0x226868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226864) {
            ctx->pc = 0x2267F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2267f0;
        }
    }
    ctx->pc = 0x22686Cu;
    // 0x22686c: 0x0  nop
    ctx->pc = 0x22686cu;
    // NOP
    if (ctx->pc == 0x22686cu) { ctx->pc = 0x226870u; }
}
