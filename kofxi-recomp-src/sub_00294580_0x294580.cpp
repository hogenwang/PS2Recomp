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

// Function: sub_00294580
// Address: 0x294580 - 0x2945d0
void sub_00294580_0x294580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294580_0x294580");
#endif

    switch (ctx->pc) {
        case 0x294580u: goto label_294580;
        case 0x294584u: goto label_294584;
        case 0x294588u: goto label_294588;
        case 0x29458cu: goto label_29458c;
        case 0x294590u: goto label_294590;
        case 0x294594u: goto label_294594;
        case 0x294598u: goto label_294598;
        case 0x29459cu: goto label_29459c;
        case 0x2945a0u: goto label_2945a0;
        case 0x2945a4u: goto label_2945a4;
        case 0x2945a8u: goto label_2945a8;
        case 0x2945acu: goto label_2945ac;
        case 0x2945b0u: goto label_2945b0;
        case 0x2945b4u: goto label_2945b4;
        case 0x2945b8u: goto label_2945b8;
        case 0x2945bcu: goto label_2945bc;
        case 0x2945c0u: goto label_2945c0;
        case 0x2945c4u: goto label_2945c4;
        case 0x2945c8u: goto label_2945c8;
        case 0x2945ccu: goto label_2945cc;
        default: break;
    }

    ctx->pc = 0x294580u;

label_294580:
    // 0x294580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_294584:
    // 0x294584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_294588:
    // 0x294588: 0xc0a3dd0  jal         func_28F740
label_29458c:
    if (ctx->pc == 0x29458Cu) {
        ctx->pc = 0x294590u;
        goto label_294590;
    }
    ctx->pc = 0x294588u;
    SET_GPR_U32(ctx, 31, 0x294590u);
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x294588u, 0x294590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294590u;
label_294590:
    // 0x294590: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x294590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_294594:
    // 0x294594: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_294598:
    if (ctx->pc == 0x294598u) {
        ctx->pc = 0x294598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294594u;
        // 0x294598: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29459Cu;
        goto label_29459c;
    }
    ctx->pc = 0x294594u;
    {
        const bool branch_taken_0x294594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294594u;
        // 0x294598: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294594) {
            ctx->pc = 0x2945B8u;
            goto label_2945b8;
        }
    }
    ctx->pc = 0x29459Cu;
label_29459c:
    // 0x29459c: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x29459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2945a0:
    // 0x2945a0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2945a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2945a4:
    // 0x2945a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2945a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2945a8:
    // 0x2945a8: 0xc0a5648  jal         func_295920
label_2945ac:
    if (ctx->pc == 0x2945ACu) {
        ctx->pc = 0x2945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A8u;
        // 0x2945ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945B0u;
        goto label_2945b0;
    }
    ctx->pc = 0x2945A8u;
    SET_GPR_U32(ctx, 31, 0x2945B0u);
    ctx->pc = 0x2945ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945A8u;
    // 0x2945ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2945A8u, 0x2945B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945B0u;
label_2945b0:
    // 0x2945b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2945b4:
    if (ctx->pc == 0x2945B4u) {
        ctx->pc = 0x2945B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945B0u;
        // 0x2945b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945B8u;
        goto label_2945b8;
    }
    ctx->pc = 0x2945B0u;
    {
        const bool branch_taken_0x2945b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2945B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945B0u;
        // 0x2945b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945b0) {
            ctx->pc = 0x2945C0u;
            goto label_2945c0;
        }
    }
    ctx->pc = 0x2945B8u;
label_2945b8:
    // 0x2945b8: 0x40f809  jalr        $v0
label_2945bc:
    if (ctx->pc == 0x2945BCu) {
        ctx->pc = 0x2945C0u;
        goto label_2945c0;
    }
    ctx->pc = 0x2945B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2945C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945B8u, 0x2945C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2945C0u;
label_2945c0:
    // 0x2945c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2945c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2945c4:
    // 0x2945c4: 0x3e00008  jr          $ra
label_2945c8:
    if (ctx->pc == 0x2945C8u) {
        ctx->pc = 0x2945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945C4u;
        // 0x2945c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945CCu;
        goto label_2945cc;
    }
    ctx->pc = 0x2945C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945C4u;
        // 0x2945c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2945CCu;
label_2945cc:
    // 0x2945cc: 0x0  nop
    ctx->pc = 0x2945ccu;
    // NOP
    if (ctx->pc == 0x2945ccu) { ctx->pc = 0x2945d0u; }
}
