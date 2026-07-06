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

// Function: sub_0025F2E0
// Address: 0x25f2e0 - 0x25f348
void sub_0025F2E0_0x25f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F2E0_0x25f2e0");
#endif

    switch (ctx->pc) {
        case 0x25f2f8u: goto label_25f2f8;
        case 0x25f30cu: goto label_25f30c;
        case 0x25f320u: goto label_25f320;
        case 0x25f328u: goto label_25f328;
        case 0x25f334u: goto label_25f334;
        default: break;
    }

    ctx->pc = 0x25f2e0u;

    // 0x25f2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f2e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f2ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25f2f0: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25F2F0u;
    SET_GPR_U32(ctx, 31, 0x25F2F8u);
    ctx->pc = 0x25F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2F0u;
    // 0x25f2f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25F2F0u, 0x25F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2F8u;
label_25f2f8:
    // 0x25f2f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2fc: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x25F2FCu;
    {
        const bool branch_taken_0x25f2fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2FCu;
        // 0x25f300: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2fc) {
            ctx->pc = 0x25F334u;
            goto label_25f334;
        }
    }
    ctx->pc = 0x25F304u;
    // 0x25f304: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25F304u;
    SET_GPR_U32(ctx, 31, 0x25F30Cu);
    ctx->pc = 0x25F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F304u;
    // 0x25f308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25F304u, 0x25F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F30Cu;
label_25f30c:
    // 0x25f30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f310: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F310u;
    {
        const bool branch_taken_0x25f310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F310u;
        // 0x25f314: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f310) {
            ctx->pc = 0x25F328u;
            goto label_25f328;
        }
    }
    ctx->pc = 0x25F318u;
    // 0x25f318: 0xc08b8b8  jal         func_22E2E0
    ctx->pc = 0x25F318u;
    SET_GPR_U32(ctx, 31, 0x25F320u);
    ctx->pc = 0x25F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F318u;
    // 0x25f31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2E0u, 0x25F318u, 0x25F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F320u;
label_25f320:
    // 0x25f320: 0xc08b84c  jal         func_22E130
    ctx->pc = 0x25F320u;
    SET_GPR_U32(ctx, 31, 0x25F328u);
    ctx->pc = 0x25F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F320u;
    // 0x25f324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E130u, 0x25F320u, 0x25F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F328u;
label_25f328:
    // 0x25f328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f32c: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25F32Cu;
    SET_GPR_U32(ctx, 31, 0x25F334u);
    ctx->pc = 0x25F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F32Cu;
    // 0x25f330: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25F32Cu, 0x25F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F334u;
label_25f334:
    // 0x25f334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f338: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f340: 0x3e00008  jr          $ra
    ctx->pc = 0x25F340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F340u;
        // 0x25f344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F348u;
}
