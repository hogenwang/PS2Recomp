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

// Function: sub_001DEE78
// Address: 0x1dee78 - 0x1deed8
void sub_001DEE78_0x1dee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEE78_0x1dee78");
#endif

    switch (ctx->pc) {
        case 0x1dee98u: goto label_1dee98;
        case 0x1deeacu: goto label_1deeac;
        default: break;
    }

    ctx->pc = 0x1dee78u;

    // 0x1dee78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dee7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dee80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dee80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dee88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dee8c: 0x26300484  addiu       $s0, $s1, 0x484
    ctx->pc = 0x1dee8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1156));
    // 0x1dee90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dee94: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1dee94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dee98:
    // 0x1dee98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1dee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dee9c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEE9Cu;
    {
        const bool branch_taken_0x1dee9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee9c) {
            ctx->pc = 0x1DEEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEE9Cu;
            // 0x1deea0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEEB4u;
            goto label_1deeb4;
        }
    }
    ctx->pc = 0x1DEEA4u;
    // 0x1deea4: 0xc077b7a  jal         func_1DEDE8
    ctx->pc = 0x1DEEA4u;
    SET_GPR_U32(ctx, 31, 0x1DEEACu);
    ctx->pc = 0x1DEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEEA4u;
    // 0x1deea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEDE8u, 0x1DEEA4u, 0x1DEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEEACu;
label_1deeac:
    // 0x1deeac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1deeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1deeb0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1deeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1deeb4:
    // 0x1deeb4: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DEEB4u;
    {
        const bool branch_taken_0x1deeb4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1DEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEB4u;
        // 0x1deeb8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeb4) {
            ctx->pc = 0x1DEE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dee98;
        }
    }
    ctx->pc = 0x1DEEBCu;
    // 0x1deebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1deec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1deec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1deec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deec8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1deec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1deecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEECCu;
        // 0x1deed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEED4u;
    // 0x1deed4: 0x0  nop
    ctx->pc = 0x1deed4u;
    // NOP
    if (ctx->pc == 0x1deed4u) { ctx->pc = 0x1deed8u; }
}
