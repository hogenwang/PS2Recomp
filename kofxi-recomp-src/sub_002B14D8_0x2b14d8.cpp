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

// Function: sub_002B14D8
// Address: 0x2b14d8 - 0x2b1538
void sub_002B14D8_0x2b14d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B14D8_0x2b14d8");
#endif

    switch (ctx->pc) {
        case 0x2b14f8u: goto label_2b14f8;
        case 0x2b1528u: goto label_2b1528;
        default: break;
    }

    ctx->pc = 0x2b14d8u;

    // 0x2b14d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b14d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b14dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b14e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b14e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b14e4: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x2b14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x2b14e8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x2b14e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b14ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b14ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14f0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B14F0u;
    SET_GPR_U32(ctx, 31, 0x2B14F8u);
    ctx->pc = 0x2B14F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14F0u;
    // 0x2b14f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B14F0u, 0x2B14F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14F8u;
label_2b14f8:
    // 0x2b14f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b14f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b14fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b14fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1500: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1500u;
        // 0x2b1504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1508u;
    // 0x2b1508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b150c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1514: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2b1518: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x2b1518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b151c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b151cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1520: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1520u;
    SET_GPR_U32(ctx, 31, 0x2B1528u);
    ctx->pc = 0x2B1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1520u;
    // 0x2b1524: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B1520u, 0x2B1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1528u;
label_2b1528:
    // 0x2b1528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b152c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b152cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1530: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1530u;
        // 0x2b1534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1538u;
}
