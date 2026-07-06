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

// Function: sub_00276D80
// Address: 0x276d80 - 0x276de0
void sub_00276D80_0x276d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276D80_0x276d80");
#endif

    switch (ctx->pc) {
        case 0x276da8u: goto label_276da8;
        case 0x276db8u: goto label_276db8;
        case 0x276dc0u: goto label_276dc0;
        default: break;
    }

    ctx->pc = 0x276d80u;

    // 0x276d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276d88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x276d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x276d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x276d98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x276d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x276d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x276da0: 0xc09d3a4  jal         func_274E90
    ctx->pc = 0x276DA0u;
    SET_GPR_U32(ctx, 31, 0x276DA8u);
    ctx->pc = 0x276DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DA0u;
    // 0x276da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E90u, 0x276DA0u, 0x276DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DA8u;
label_276da8:
    // 0x276da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x276dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276db0: 0xc09db16  jal         func_276C58
    ctx->pc = 0x276DB0u;
    SET_GPR_U32(ctx, 31, 0x276DB8u);
    ctx->pc = 0x276DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DB0u;
    // 0x276db4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276C58u, 0x276DB0u, 0x276DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DB8u;
label_276db8:
    // 0x276db8: 0xc09d204  jal         func_274810
    ctx->pc = 0x276DB8u;
    SET_GPR_U32(ctx, 31, 0x276DC0u);
    ctx->pc = 0x276DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DB8u;
    // 0x276dbc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274810u, 0x276DB8u, 0x276DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DC0u;
label_276dc0:
    // 0x276dc0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x276dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276dc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276dcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276dd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x276dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x276DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DD4u;
        // 0x276dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276DDCu;
    // 0x276ddc: 0x0  nop
    ctx->pc = 0x276ddcu;
    // NOP
}
