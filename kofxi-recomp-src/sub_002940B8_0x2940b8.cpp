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

// Function: sub_002940B8
// Address: 0x2940b8 - 0x2940f0
void sub_002940B8_0x2940b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002940B8_0x2940b8");
#endif

    switch (ctx->pc) {
        case 0x2940e0u: goto label_2940e0;
        default: break;
    }

    ctx->pc = 0x2940b8u;

    // 0x2940b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2940b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2940bc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2940bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2940c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2940c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2940c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940c8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2940c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940cc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2940ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2940d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2940d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2940d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2940d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2940d8: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2940D8u;
    SET_GPR_U32(ctx, 31, 0x2940E0u);
    ctx->pc = 0x2940DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2940D8u;
    // 0x2940dc: 0x240a0012  addiu       $t2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x2940D8u, 0x2940E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940E0u;
label_2940e0:
    // 0x2940e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2940e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2940e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2940E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2940E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940E4u;
        // 0x2940e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2940E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2940ECu;
    // 0x2940ec: 0x0  nop
    ctx->pc = 0x2940ecu;
    // NOP
    if (ctx->pc == 0x2940ecu) { ctx->pc = 0x2940f0u; }
}
