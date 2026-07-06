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

// Function: sub_0012EEF0
// Address: 0x12eef0 - 0x12ef50
void sub_0012EEF0_0x12eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EEF0_0x12eef0");
#endif

    switch (ctx->pc) {
        case 0x12ef0cu: goto label_12ef0c;
        case 0x12ef14u: goto label_12ef14;
        case 0x12ef20u: goto label_12ef20;
        default: break;
    }

    ctx->pc = 0x12eef0u;

    // 0x12eef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12eef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12eef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12eefc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ef00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12ef00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef04: 0xc04ba48  jal         func_12E920
    ctx->pc = 0x12EF04u;
    SET_GPR_U32(ctx, 31, 0x12EF0Cu);
    ctx->pc = 0x12EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF04u;
    // 0x12ef08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E920u, 0x12EF04u, 0x12EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF0Cu;
label_12ef0c:
    // 0x12ef0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef10: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12ef10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ef14:
    // 0x12ef14: 0x9605028c  lhu         $a1, 0x28C($s0)
    ctx->pc = 0x12ef14u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x12ef18: 0xc04bbd4  jal         func_12EF50
    ctx->pc = 0x12EF18u;
    SET_GPR_U32(ctx, 31, 0x12EF20u);
    ctx->pc = 0x12EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF18u;
    // 0x12ef1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF50u, 0x12EF18u, 0x12EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF20u;
label_12ef20:
    // 0x12ef20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12ef20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12ef24: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12ef24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12ef28: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EF28u;
    {
        const bool branch_taken_0x12ef28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF28u;
        // 0x12ef2c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef28) {
            ctx->pc = 0x12EF14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ef14;
        }
    }
    ctx->pc = 0x12EF30u;
    // 0x12ef30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ef34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ef34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ef38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ef38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ef3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ef3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ef40: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF40u;
        // 0x12ef44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF48u;
    // 0x12ef48: 0x0  nop
    ctx->pc = 0x12ef48u;
    // NOP
    // 0x12ef4c: 0x0  nop
    ctx->pc = 0x12ef4cu;
    // NOP
}
