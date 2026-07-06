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

// Function: sub_00285758
// Address: 0x285758 - 0x2857a8
void sub_00285758_0x285758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285758_0x285758");
#endif

    switch (ctx->pc) {
        case 0x285770u: goto label_285770;
        case 0x285784u: goto label_285784;
        default: break;
    }

    ctx->pc = 0x285758u;

    // 0x285758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28575c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285760: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x285760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x285764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x285764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28576c: 0x0  nop
    ctx->pc = 0x28576cu;
    // NOP
label_285770:
    // 0x285770: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285770u;
    {
        const bool branch_taken_0x285770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285770) {
            ctx->pc = 0x285790u;
            goto label_285790;
        }
    }
    ctx->pc = 0x285778u;
    // 0x285778: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x285778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28577c: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x28577Cu;
    SET_GPR_U32(ctx, 31, 0x285784u);
    ctx->pc = 0x285780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28577Cu;
    // 0x285780: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x28577Cu, 0x285784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285784u;
label_285784:
    // 0x285784: 0x2a100002  slti        $s0, $s0, 0x2
    ctx->pc = 0x285784u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x285788: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x285788u;
    {
        const bool branch_taken_0x285788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x285788) {
            ctx->pc = 0x285770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285770;
        }
    }
    ctx->pc = 0x285790u;
label_285790:
    // 0x285790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285794: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28579c: 0x3e00008  jr          $ra
    ctx->pc = 0x28579Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2857A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28579Cu;
        // 0x2857a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28579Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2857A4u;
    // 0x2857a4: 0x0  nop
    ctx->pc = 0x2857a4u;
    // NOP
    if (ctx->pc == 0x2857a4u) { ctx->pc = 0x2857a8u; }
}
