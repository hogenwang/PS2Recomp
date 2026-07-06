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

// Function: sub_001BB400
// Address: 0x1bb400 - 0x1bb448
void sub_001BB400_0x1bb400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB400_0x1bb400");
#endif

    switch (ctx->pc) {
        case 0x1bb41cu: goto label_1bb41c;
        case 0x1bb428u: goto label_1bb428;
        case 0x1bb430u: goto label_1bb430;
        default: break;
    }

    ctx->pc = 0x1bb400u;

    // 0x1bb400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb40c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb414: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB414u;
    SET_GPR_U32(ctx, 31, 0x1BB41Cu);
    ctx->pc = 0x1BB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB414u;
    // 0x1bb418: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB414u, 0x1BB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB41Cu;
label_1bb41c:
    // 0x1bb41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb420: 0xc06ed12  jal         func_1BB448
    ctx->pc = 0x1BB420u;
    SET_GPR_U32(ctx, 31, 0x1BB428u);
    ctx->pc = 0x1BB424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB420u;
    // 0x1bb424: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB448u, 0x1BB420u, 0x1BB428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB428u;
label_1bb428:
    // 0x1bb428: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB428u;
    SET_GPR_U32(ctx, 31, 0x1BB430u);
    ctx->pc = 0x1BB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB428u;
    // 0x1bb42c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BB428u, 0x1BB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB430u;
label_1bb430:
    // 0x1bb430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb440: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB440u;
        // 0x1bb444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB448u;
}
