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

// Function: sub_00156520
// Address: 0x156520 - 0x156590
void sub_00156520_0x156520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156520_0x156520");
#endif

    switch (ctx->pc) {
        case 0x156544u: goto label_156544;
        case 0x156550u: goto label_156550;
        case 0x156560u: goto label_156560;
        case 0x156568u: goto label_156568;
        case 0x156570u: goto label_156570;
        case 0x156578u: goto label_156578;
        default: break;
    }

    ctx->pc = 0x156520u;

    // 0x156520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15652c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x156530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156534: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x156534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15653c: 0xc057c28  jal         func_15F0A0
    ctx->pc = 0x15653Cu;
    SET_GPR_U32(ctx, 31, 0x156544u);
    ctx->pc = 0x156540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15653Cu;
    // 0x156540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F0A0u, 0x15653Cu, 0x156544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156544u;
label_156544:
    // 0x156544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156548: 0xc057be0  jal         func_15EF80
    ctx->pc = 0x156548u;
    SET_GPR_U32(ctx, 31, 0x156550u);
    ctx->pc = 0x15654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156548u;
    // 0x15654c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF80u, 0x156548u, 0x156550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156550u;
label_156550:
    // 0x156550: 0x9226008c  lbu         $a2, 0x8C($s1)
    ctx->pc = 0x156550u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x156554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156558: 0xc058528  jal         func_1614A0
    ctx->pc = 0x156558u;
    SET_GPR_U32(ctx, 31, 0x156560u);
    ctx->pc = 0x15655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156558u;
    // 0x15655c: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614A0u, 0x156558u, 0x156560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156560u;
label_156560:
    // 0x156560: 0xc058690  jal         func_161A40
    ctx->pc = 0x156560u;
    SET_GPR_U32(ctx, 31, 0x156568u);
    ctx->pc = 0x156564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156560u;
    // 0x156564: 0x262405f8  addiu       $a0, $s1, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161A40u, 0x156560u, 0x156568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156568u;
label_156568:
    // 0x156568: 0xc057b84  jal         func_15EE10
    ctx->pc = 0x156568u;
    SET_GPR_U32(ctx, 31, 0x156570u);
    ctx->pc = 0x15656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156568u;
    // 0x15656c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EE10u, 0x156568u, 0x156570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156570u;
label_156570:
    // 0x156570: 0xc057bbc  jal         func_15EEF0
    ctx->pc = 0x156570u;
    SET_GPR_U32(ctx, 31, 0x156578u);
    ctx->pc = 0x156574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156570u;
    // 0x156574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EEF0u, 0x156570u, 0x156578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156578u;
label_156578:
    // 0x156578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15657c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x156580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156588: 0x3e00008  jr          $ra
    ctx->pc = 0x156588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156588u;
        // 0x15658c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156590u;
}
