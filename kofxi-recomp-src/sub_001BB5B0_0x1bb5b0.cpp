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

// Function: sub_001BB5B0
// Address: 0x1bb5b0 - 0x1bb600
void sub_001BB5B0_0x1bb5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB5B0_0x1bb5b0");
#endif

    switch (ctx->pc) {
        case 0x1bb5d4u: goto label_1bb5d4;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5e8u: goto label_1bb5e8;
        default: break;
    }

    ctx->pc = 0x1bb5b0u;

    // 0x1bb5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5B0u;
        // 0x1bb5b4: 0xac850088  sw          $a1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB5B8u;
    // 0x1bb5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb5cc: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB5CCu;
    SET_GPR_U32(ctx, 31, 0x1BB5D4u);
    ctx->pc = 0x1BB5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5CCu;
    // 0x1bb5d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB5CCu, 0x1BB5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5D4u;
label_1bb5d4:
    // 0x1bb5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5d8: 0xc06ed80  jal         func_1BB600
    ctx->pc = 0x1BB5D8u;
    SET_GPR_U32(ctx, 31, 0x1BB5E0u);
    ctx->pc = 0x1BB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5D8u;
    // 0x1bb5dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB600u, 0x1BB5D8u, 0x1BB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5E0u;
label_1bb5e0:
    // 0x1bb5e0: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB5E0u;
    SET_GPR_U32(ctx, 31, 0x1BB5E8u);
    ctx->pc = 0x1BB5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5E0u;
    // 0x1bb5e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BB5E0u, 0x1BB5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5E8u;
label_1bb5e8:
    // 0x1bb5e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb5ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5F8u;
        // 0x1bb5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB600u;
}
