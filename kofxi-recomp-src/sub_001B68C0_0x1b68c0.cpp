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

// Function: sub_001B68C0
// Address: 0x1b68c0 - 0x1b6908
void sub_001B68C0_0x1b68c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B68C0_0x1b68c0");
#endif

    switch (ctx->pc) {
        case 0x1b68dcu: goto label_1b68dc;
        case 0x1b68e8u: goto label_1b68e8;
        case 0x1b68f0u: goto label_1b68f0;
        default: break;
    }

    ctx->pc = 0x1b68c0u;

    // 0x1b68c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b68c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b68c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b68c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b68c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b68c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b68ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b68d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b68d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b68d4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B68D4u;
    SET_GPR_U32(ctx, 31, 0x1B68DCu);
    ctx->pc = 0x1B68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68D4u;
    // 0x1b68d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B68D4u, 0x1B68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68DCu;
label_1b68dc:
    // 0x1b68dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68e0: 0xc06da42  jal         func_1B6908
    ctx->pc = 0x1B68E0u;
    SET_GPR_U32(ctx, 31, 0x1B68E8u);
    ctx->pc = 0x1B68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68E0u;
    // 0x1b68e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6908u, 0x1B68E0u, 0x1B68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68E8u;
label_1b68e8:
    // 0x1b68e8: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B68E8u;
    SET_GPR_U32(ctx, 31, 0x1B68F0u);
    ctx->pc = 0x1B68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68E8u;
    // 0x1b68ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B68E8u, 0x1B68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68F0u;
label_1b68f0:
    // 0x1b68f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b68f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b68f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b68f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b68f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b68fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b68fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6900: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6900u;
        // 0x1b6904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6908u;
}
