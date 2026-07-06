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

// Function: sub_00267518
// Address: 0x267518 - 0x267568
void sub_00267518_0x267518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267518_0x267518");
#endif

    switch (ctx->pc) {
        case 0x267534u: goto label_267534;
        case 0x267544u: goto label_267544;
        default: break;
    }

    ctx->pc = 0x267518u;

    // 0x267518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26751c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267520: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26752c: 0xc099f30  jal         func_267CC0
    ctx->pc = 0x26752Cu;
    SET_GPR_U32(ctx, 31, 0x267534u);
    ctx->pc = 0x267530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26752Cu;
    // 0x267530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267CC0u, 0x26752Cu, 0x267534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267534u;
label_267534:
    // 0x267534: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267534u;
    {
        const bool branch_taken_0x267534 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267534u;
        // 0x267538: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267534) {
            ctx->pc = 0x267554u;
            goto label_267554;
        }
    }
    ctx->pc = 0x26753Cu;
    // 0x26753c: 0xc09a060  jal         func_268180
    ctx->pc = 0x26753Cu;
    SET_GPR_U32(ctx, 31, 0x267544u);
    ctx->pc = 0x267540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26753Cu;
    // 0x267540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x26753Cu, 0x267544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267544u;
label_267544:
    // 0x267544: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x267544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267548: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x267548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26754c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x26754cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x267550: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x267550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_267554:
    // 0x267554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x267558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26755c: 0x3e00008  jr          $ra
    ctx->pc = 0x26755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26755Cu;
        // 0x267560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26755Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267564u;
    // 0x267564: 0x0  nop
    ctx->pc = 0x267564u;
    // NOP
}
