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

// Function: sub_0017E9C0
// Address: 0x17e9c0 - 0x17ea30
void sub_0017E9C0_0x17e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E9C0_0x17e9c0");
#endif

    switch (ctx->pc) {
        case 0x17e9f0u: goto label_17e9f0;
        case 0x17ea14u: goto label_17ea14;
        default: break;
    }

    ctx->pc = 0x17e9c0u;

    // 0x17e9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e9cc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17e9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e9d4: 0xa480050c  sh          $zero, 0x50C($a0)
    ctx->pc = 0x17e9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1292), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e9d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9dc: 0xac800510  sw          $zero, 0x510($a0)
    ctx->pc = 0x17e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1296), GPR_U32(ctx, 0));
    // 0x17e9e0: 0xac800518  sw          $zero, 0x518($a0)
    ctx->pc = 0x17e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1304), GPR_U32(ctx, 0));
    // 0x17e9e4: 0xac80051c  sw          $zero, 0x51C($a0)
    ctx->pc = 0x17e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1308), GPR_U32(ctx, 0));
    // 0x17e9e8: 0xc067d64  jal         func_19F590
    ctx->pc = 0x17E9E8u;
    SET_GPR_U32(ctx, 31, 0x17E9F0u);
    ctx->pc = 0x17E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9E8u;
    // 0x17e9ec: 0x26040520  addiu       $a0, $s0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x17E9E8u, 0x17E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9F0u;
label_17e9f0:
    // 0x17e9f0: 0xae000530  sw          $zero, 0x530($s0)
    ctx->pc = 0x17e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 0));
    // 0x17e9f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e9f8: 0xa6000534  sh          $zero, 0x534($s0)
    ctx->pc = 0x17e9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1332), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea00: 0xae000538  sw          $zero, 0x538($s0)
    ctx->pc = 0x17ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 0));
    // 0x17ea04: 0xa600053c  sh          $zero, 0x53C($s0)
    ctx->pc = 0x17ea04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x17ea08: 0xa202057c  sb          $v0, 0x57C($s0)
    ctx->pc = 0x17ea08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ea0c: 0xc05fa60  jal         func_17E980
    ctx->pc = 0x17EA0Cu;
    SET_GPR_U32(ctx, 31, 0x17EA14u);
    ctx->pc = 0x17EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA0Cu;
    // 0x17ea10: 0xa200057f  sb          $zero, 0x57F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1407), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E980u, 0x17EA0Cu, 0x17EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA14u;
label_17ea14:
    // 0x17ea14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ea14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ea18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ea18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA1Cu;
        // 0x17ea20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA24u;
    // 0x17ea24: 0x0  nop
    ctx->pc = 0x17ea24u;
    // NOP
    // 0x17ea28: 0x0  nop
    ctx->pc = 0x17ea28u;
    // NOP
    // 0x17ea2c: 0x0  nop
    ctx->pc = 0x17ea2cu;
    // NOP
    if (ctx->pc == 0x17ea2cu) { ctx->pc = 0x17ea30u; }
}
