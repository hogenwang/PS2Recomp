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

// Function: sub_001E8D90
// Address: 0x1e8d90 - 0x1e8dd8
void sub_001E8D90_0x1e8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D90_0x1e8d90");
#endif

    switch (ctx->pc) {
        case 0x1e8db4u: goto label_1e8db4;
        default: break;
    }

    ctx->pc = 0x1e8d90u;

    // 0x1e8d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8d94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e8d98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e8d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d9c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e8d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e8da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e8da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e8da8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e8da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dac: 0xc07aa2a  jal         func_1EA8A8
    ctx->pc = 0x1E8DACu;
    SET_GPR_U32(ctx, 31, 0x1E8DB4u);
    ctx->pc = 0x1E8DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DACu;
    // 0x1e8db0: 0x8c852064  lw          $a1, 0x2064($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA8A8u, 0x1E8DACu, 0x1E8DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DB4u;
label_1e8db4:
    // 0x1e8db4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8db8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e8db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e8dbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e8dc0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1e8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1e8dc4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e8dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8dc8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e8dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8dcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e8dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DD0u;
        // 0x1e8dd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8DD8u;
}
