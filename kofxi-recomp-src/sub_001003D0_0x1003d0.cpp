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

// Function: sub_001003D0
// Address: 0x1003d0 - 0x100438
void sub_001003D0_0x1003d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003D0_0x1003d0");
#endif

    ctx->pc = 0x1003d0u;

    // 0x1003d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1003d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1003d8: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x1003d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x1003dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1003e0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1003e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1003e4: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x1003e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x1003e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1003ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1003ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1003f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1003f4: 0xf  sync
    ctx->pc = 0x1003f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1003f8: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x1003f8u;
    SET_GPR_U32(ctx, 4, ctx->vu0_itop);
    // 0x1003fc: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x1003fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x100400: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x100400u;
    ctx->vu0_itop = GPR_U32(ctx, 4) & 0x3FF;
    // 0x100404: 0x40f  sync.p
    ctx->pc = 0x100404u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x100408: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x100408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10040c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10040cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x100410: 0x24a58420  addiu       $a1, $a1, -0x7BE0
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935584));
    // 0x100414: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
    // 0x100418: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x100418u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10041c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10041cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x100420: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x100420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x100424: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x100424u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x100428: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x100428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10042c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10042cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x100430: 0x3e00008  jr          $ra
    ctx->pc = 0x100430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100430u;
        // 0x100434: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100438u;
}
