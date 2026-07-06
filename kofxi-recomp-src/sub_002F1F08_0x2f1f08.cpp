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

// Function: sub_002F1F08
// Address: 0x2f1f08 - 0x2f1f58
void sub_002F1F08_0x2f1f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1F08_0x2f1f08");
#endif

    switch (ctx->pc) {
        case 0x2f1f20u: goto label_2f1f20;
        case 0x2f1f34u: goto label_2f1f34;
        default: break;
    }

    ctx->pc = 0x2f1f08u;

    // 0x2f1f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f1f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f1f0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1f14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f1f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f1f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f20:
    // 0x2f1f20: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1F20u;
    {
        const bool branch_taken_0x2f1f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F20u;
        // 0x2f1f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f20) {
            ctx->pc = 0x2F1F40u;
            goto label_2f1f40;
        }
    }
    ctx->pc = 0x2F1F28u;
    // 0x2f1f28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f1f2c: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F34u);
    ctx->pc = 0x2F1F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F2Cu;
    // 0x2f1f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F1F2Cu, 0x2F1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F34u;
label_2f1f34:
    // 0x2f1f34: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F1F34u;
    {
        const bool branch_taken_0x2f1f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f34) {
            ctx->pc = 0x2F1F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1F34u;
            // 0x2f1f38: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1f20;
        }
    }
    ctx->pc = 0x2F1F3Cu;
    // 0x2f1f3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f1f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f40:
    // 0x2f1f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f1f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1f44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F4Cu;
        // 0x2f1f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1F54u;
    // 0x2f1f54: 0x0  nop
    ctx->pc = 0x2f1f54u;
    // NOP
}
