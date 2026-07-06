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

// Function: sub_00205210
// Address: 0x205210 - 0x205250
void sub_00205210_0x205210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205210_0x205210");
#endif

    switch (ctx->pc) {
        case 0x205220u: goto label_205220;
        case 0x205228u: goto label_205228;
        default: break;
    }

    ctx->pc = 0x205210u;

    // 0x205210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20521c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20521cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205220:
    // 0x205220: 0xc081460  jal         func_205180
    ctx->pc = 0x205220u;
    SET_GPR_U32(ctx, 31, 0x205228u);
    ctx->pc = 0x205224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205220u;
    // 0x205224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205180u, 0x205220u, 0x205228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205228u;
label_205228:
    // 0x205228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20522c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x20522cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x205230: 0x0  nop
    ctx->pc = 0x205230u;
    // NOP
    // 0x205234: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205234u;
    {
        const bool branch_taken_0x205234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205234) {
            ctx->pc = 0x205220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205220;
        }
    }
    ctx->pc = 0x20523Cu;
    // 0x20523c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20523cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205244: 0x3e00008  jr          $ra
    ctx->pc = 0x205244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205244u;
        // 0x205248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20524Cu;
    // 0x20524c: 0x0  nop
    ctx->pc = 0x20524cu;
    // NOP
    if (ctx->pc == 0x20524cu) { ctx->pc = 0x205250u; }
}
