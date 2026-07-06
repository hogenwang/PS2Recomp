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

// Function: sub_002702D0
// Address: 0x2702d0 - 0x270330
void sub_002702D0_0x2702d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002702D0_0x2702d0");
#endif

    switch (ctx->pc) {
        case 0x2702f8u: goto label_2702f8;
        case 0x27030cu: goto label_27030c;
        default: break;
    }

    ctx->pc = 0x2702d0u;

    // 0x2702d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2702d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2702d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2702d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2702d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2702d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702dc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2702DCu;
    {
        const bool branch_taken_0x2702dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702DCu;
        // 0x2702e0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702dc) {
            ctx->pc = 0x270320u;
            goto label_270320;
        }
    }
    ctx->pc = 0x2702E4u;
    // 0x2702e4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2702e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2702e8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2702E8u;
    {
        const bool branch_taken_0x2702e8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2702e8) {
            ctx->pc = 0x2702ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702E8u;
            // 0x2702ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2702FCu;
            goto label_2702fc;
        }
    }
    ctx->pc = 0x2702F0u;
    // 0x2702f0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2702F0u;
    SET_GPR_U32(ctx, 31, 0x2702F8u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2702F0u, 0x2702F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702F8u;
label_2702f8:
    // 0x2702f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2702f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2702fc:
    // 0x2702fc: 0x58800004  blezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2702FCu;
    {
        const bool branch_taken_0x2702fc = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2702fc) {
            ctx->pc = 0x270300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702FCu;
            // 0x270300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x270304u;
    // 0x270304: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x270304u;
    SET_GPR_U32(ctx, 31, 0x27030Cu);
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x270304u, 0x27030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27030Cu;
label_27030c:
    // 0x27030c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270310:
    // 0x270310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270318: 0x8098560  j           func_261580
    ctx->pc = 0x270318u;
    ctx->pc = 0x27031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270318u;
    // 0x27031c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    sub_00261580_0x261580(rdram, ctx, runtime); return;
    ctx->pc = 0x270320u;
label_270320:
    // 0x270320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270328: 0x3e00008  jr          $ra
    ctx->pc = 0x270328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270328u;
        // 0x27032c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270330u;
}
