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

// Function: sub_0012A758
// Address: 0x12a758 - 0x12a7c0
void sub_0012A758_0x12a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A758_0x12a758");
#endif

    switch (ctx->pc) {
        case 0x12a778u: goto label_12a778;
        case 0x12a784u: goto label_12a784;
        case 0x12a78cu: goto label_12a78c;
        case 0x12a7b4u: goto label_12a7b4;
        default: break;
    }

    ctx->pc = 0x12a758u;

    // 0x12a758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a75c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a76c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12a76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a770: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x12A770u;
    {
        const bool branch_taken_0x12a770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A770u;
        // 0x12a774: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a770) {
            ctx->pc = 0x12A7ACu;
            goto label_12a7ac;
        }
    }
    ctx->pc = 0x12A778u;
label_12a778:
    // 0x12a778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a77c: 0xc04a726  jal         func_129C98
    ctx->pc = 0x12A77Cu;
    SET_GPR_U32(ctx, 31, 0x12A784u);
    ctx->pc = 0x12A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A77Cu;
    // 0x12a780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x12A77Cu, 0x12A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A784u;
label_12a784:
    // 0x12a784: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A784u;
    {
        const bool branch_taken_0x12a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a784) {
            ctx->pc = 0x12A788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A784u;
            // 0x12a788: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A7A4u;
            goto label_12a7a4;
        }
    }
    ctx->pc = 0x12A78Cu;
label_12a78c:
    // 0x12a78c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12a78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a79c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A79Cu;
        // 0x12a7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A7A4u;
label_12a7a4:
    // 0x12a7a4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x12A7A4u;
    {
        const bool branch_taken_0x12a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7A4u;
        // 0x12a7a8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7a4) {
            ctx->pc = 0x12A778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a778;
        }
    }
    ctx->pc = 0x12A7ACu;
label_12a7ac:
    // 0x12a7ac: 0xc04a726  jal         func_129C98
    ctx->pc = 0x12A7ACu;
    SET_GPR_U32(ctx, 31, 0x12A7B4u);
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x12A7ACu, 0x12A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7B4u;
label_12a7b4:
    // 0x12a7b4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12A7B4u;
    {
        const bool branch_taken_0x12a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7B4u;
        // 0x12a7b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7b4) {
            ctx->pc = 0x12A78Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a78c;
        }
    }
    ctx->pc = 0x12A7BCu;
    // 0x12a7bc: 0x0  nop
    ctx->pc = 0x12a7bcu;
    // NOP
}
