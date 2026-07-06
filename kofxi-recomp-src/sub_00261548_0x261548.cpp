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

// Function: sub_00261548
// Address: 0x261548 - 0x261580
void sub_00261548_0x261548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261548_0x261548");
#endif

    switch (ctx->pc) {
        case 0x261548u: goto label_261548;
        case 0x26154cu: goto label_26154c;
        case 0x261550u: goto label_261550;
        case 0x261554u: goto label_261554;
        case 0x261558u: goto label_261558;
        case 0x26155cu: goto label_26155c;
        case 0x261560u: goto label_261560;
        case 0x261564u: goto label_261564;
        case 0x261568u: goto label_261568;
        case 0x26156cu: goto label_26156c;
        case 0x261570u: goto label_261570;
        case 0x261574u: goto label_261574;
        case 0x261578u: goto label_261578;
        case 0x26157cu: goto label_26157c;
        default: break;
    }

    ctx->pc = 0x261548u;

label_261548:
    // 0x261548: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_26154c:
    // 0x26154c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26154cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_261550:
    // 0x261550: 0x8c4219f0  lw          $v0, 0x19F0($v0)
    ctx->pc = 0x261550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6640)));
label_261554:
    // 0x261554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_261558:
    if (ctx->pc == 0x261558u) {
        ctx->pc = 0x261558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261554u;
        // 0x261558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26155Cu;
        goto label_26155c;
    }
    ctx->pc = 0x261554u;
    {
        const bool branch_taken_0x261554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261554u;
        // 0x261558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261554) {
            ctx->pc = 0x26156Cu;
            goto label_26156c;
        }
    }
    ctx->pc = 0x26155Cu;
label_26155c:
    // 0x26155c: 0x40f809  jalr        $v0
label_261560:
    if (ctx->pc == 0x261560u) {
        ctx->pc = 0x261564u;
        goto label_261564;
    }
    ctx->pc = 0x26155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26155Cu, 0x261564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261564u;
label_261564:
    // 0x261564: 0x10000004  b           . + 4 + (0x4 << 2)
label_261568:
    if (ctx->pc == 0x261568u) {
        ctx->pc = 0x261568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261564u;
        // 0x261568: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26156Cu;
        goto label_26156c;
    }
    ctx->pc = 0x261564u;
    {
        const bool branch_taken_0x261564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261564u;
        // 0x261568: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261564) {
            ctx->pc = 0x261578u;
            goto label_261578;
        }
    }
    ctx->pc = 0x26156Cu;
label_26156c:
    // 0x26156c: 0xc08a626  jal         func_229898
label_261570:
    if (ctx->pc == 0x261570u) {
        ctx->pc = 0x261574u;
        goto label_261574;
    }
    ctx->pc = 0x26156Cu;
    SET_GPR_U32(ctx, 31, 0x261574u);
    ctx->pc = 0x229898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229898u, 0x26156Cu, 0x261574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261574u;
label_261574:
    // 0x261574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261578:
    // 0x261578: 0x3e00008  jr          $ra
label_26157c:
    if (ctx->pc == 0x26157Cu) {
        ctx->pc = 0x26157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261578u;
        // 0x26157c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261580u;
        goto label_fallthrough_0x261578;
    }
    ctx->pc = 0x261578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261578u;
        // 0x26157c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261578:
    ctx->pc = 0x261580u;
}
