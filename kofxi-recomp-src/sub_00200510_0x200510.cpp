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

// Function: sub_00200510
// Address: 0x200510 - 0x200568
void sub_00200510_0x200510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200510_0x200510");
#endif

    switch (ctx->pc) {
        case 0x20054cu: goto label_20054c;
        default: break;
    }

    ctx->pc = 0x200510u;

    // 0x200510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20051c: 0x808014a  j           func_200528
    ctx->pc = 0x20051Cu;
    ctx->pc = 0x200520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20051Cu;
    // 0x200520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200528u;
    goto label_200528;
    ctx->pc = 0x200524u;
    // 0x200524: 0x0  nop
    ctx->pc = 0x200524u;
    // NOP
label_200528:
    // 0x200528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20052c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200534: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x200534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x200538: 0x261017c8  addiu       $s0, $s0, 0x17C8
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6088));
    // 0x20053c: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x200540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200544: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x200544u;
    SET_GPR_U32(ctx, 31, 0x20054Cu);
    ctx->pc = 0x200548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200544u;
    // 0x200548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x200544u, 0x20054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20054Cu;
label_20054c:
    // 0x20054c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x200550: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x200550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x200554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20055c: 0x3e00008  jr          $ra
    ctx->pc = 0x20055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20055Cu;
        // 0x200560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200564u;
    // 0x200564: 0x0  nop
    ctx->pc = 0x200564u;
    // NOP
}
