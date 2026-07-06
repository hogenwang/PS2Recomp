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

// Function: sub_001FEF48
// Address: 0x1fef48 - 0x1fef98
void sub_001FEF48_0x1fef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEF48_0x1fef48");
#endif

    switch (ctx->pc) {
        case 0x1fef70u: goto label_1fef70;
        case 0x1fef7cu: goto label_1fef7c;
        default: break;
    }

    ctx->pc = 0x1fef48u;

    // 0x1fef48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fef4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fef4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fef54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fef5c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEF5Cu;
    {
        const bool branch_taken_0x1fef5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF5Cu;
        // 0x1fef60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef5c) {
            ctx->pc = 0x1FEF84u;
            goto label_1fef84;
        }
    }
    ctx->pc = 0x1FEF64u;
    // 0x1fef64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fef64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fef68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fef70:
    // 0x1fef70: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1fef70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fef74: 0xc07fbc6  jal         func_1FEF18
    ctx->pc = 0x1FEF74u;
    SET_GPR_U32(ctx, 31, 0x1FEF7Cu);
    ctx->pc = 0x1FEF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF74u;
    // 0x1fef78: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF18u, 0x1FEF74u, 0x1FEF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF7Cu;
label_1fef7c:
    // 0x1fef7c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1FEF7Cu;
    {
        const bool branch_taken_0x1fef7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF7Cu;
        // 0x1fef80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef7c) {
            ctx->pc = 0x1FEF70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEF84u;
label_1fef84:
    // 0x1fef84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fef84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fef88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fef88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fef8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fef90: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF90u;
        // 0x1fef94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEF98u;
}
