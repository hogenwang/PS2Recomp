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

// Function: sub_001D0328
// Address: 0x1d0328 - 0x1d0378
void sub_001D0328_0x1d0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0328_0x1d0328");
#endif

    switch (ctx->pc) {
        case 0x1d0328u: goto label_1d0328;
        case 0x1d032cu: goto label_1d032c;
        case 0x1d0330u: goto label_1d0330;
        case 0x1d0334u: goto label_1d0334;
        case 0x1d0338u: goto label_1d0338;
        case 0x1d033cu: goto label_1d033c;
        case 0x1d0340u: goto label_1d0340;
        case 0x1d0344u: goto label_1d0344;
        case 0x1d0348u: goto label_1d0348;
        case 0x1d034cu: goto label_1d034c;
        case 0x1d0350u: goto label_1d0350;
        case 0x1d0354u: goto label_1d0354;
        case 0x1d0358u: goto label_1d0358;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0360u: goto label_1d0360;
        case 0x1d0364u: goto label_1d0364;
        case 0x1d0368u: goto label_1d0368;
        case 0x1d036cu: goto label_1d036c;
        case 0x1d0370u: goto label_1d0370;
        case 0x1d0374u: goto label_1d0374;
        default: break;
    }

    ctx->pc = 0x1d0328u;

label_1d0328:
    // 0x1d0328: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d032c:
    // 0x1d032c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0330:
    // 0x1d0330: 0x8c42e688  lw          $v0, -0x1978($v0)
    ctx->pc = 0x1d0330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
label_1d0334:
    // 0x1d0334: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0338:
    if (ctx->pc == 0x1D0338u) {
        ctx->pc = 0x1D0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0334u;
        // 0x1d0338: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D033Cu;
        goto label_1d033c;
    }
    ctx->pc = 0x1D0334u;
    {
        const bool branch_taken_0x1d0334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0334u;
        // 0x1d0338: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0334) {
            ctx->pc = 0x1D0344u;
            goto label_1d0344;
        }
    }
    ctx->pc = 0x1D033Cu;
label_1d033c:
    // 0x1d033c: 0x40f809  jalr        $v0
label_1d0340:
    if (ctx->pc == 0x1D0340u) {
        ctx->pc = 0x1D0344u;
        goto label_1d0344;
    }
    ctx->pc = 0x1D033Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0344u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D033Cu, 0x1D0344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0344u;
label_1d0344:
    // 0x1d0344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0348:
    // 0x1d0348: 0x3e00008  jr          $ra
label_1d034c:
    if (ctx->pc == 0x1D034Cu) {
        ctx->pc = 0x1D034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0348u;
        // 0x1d034c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0350u;
        goto label_1d0350;
    }
    ctx->pc = 0x1D0348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0348u;
        // 0x1d034c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0350u;
label_1d0350:
    // 0x1d0350: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d0354:
    // 0x1d0354: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0358:
    // 0x1d0358: 0x8c42e68c  lw          $v0, -0x1974($v0)
    ctx->pc = 0x1d0358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960780)));
label_1d035c:
    // 0x1d035c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0360:
    if (ctx->pc == 0x1D0360u) {
        ctx->pc = 0x1D0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D035Cu;
        // 0x1d0360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0364u;
        goto label_1d0364;
    }
    ctx->pc = 0x1D035Cu;
    {
        const bool branch_taken_0x1d035c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D035Cu;
        // 0x1d0360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d035c) {
            ctx->pc = 0x1D036Cu;
            goto label_1d036c;
        }
    }
    ctx->pc = 0x1D0364u;
label_1d0364:
    // 0x1d0364: 0x40f809  jalr        $v0
label_1d0368:
    if (ctx->pc == 0x1D0368u) {
        ctx->pc = 0x1D036Cu;
        goto label_1d036c;
    }
    ctx->pc = 0x1D0364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D036Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0364u, 0x1D036Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D036Cu;
label_1d036c:
    // 0x1d036c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0370:
    // 0x1d0370: 0x3e00008  jr          $ra
label_1d0374:
    if (ctx->pc == 0x1D0374u) {
        ctx->pc = 0x1D0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0370u;
        // 0x1d0374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0378u;
        goto label_fallthrough_0x1d0370;
    }
    ctx->pc = 0x1D0370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0370u;
        // 0x1d0374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0370:
    ctx->pc = 0x1D0378u;
}
