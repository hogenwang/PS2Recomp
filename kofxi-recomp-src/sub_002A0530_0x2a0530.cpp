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

// Function: sub_002A0530
// Address: 0x2a0530 - 0x2a0560
void sub_002A0530_0x2a0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0530_0x2a0530");
#endif

    switch (ctx->pc) {
        case 0x2a0530u: goto label_2a0530;
        case 0x2a0534u: goto label_2a0534;
        case 0x2a0538u: goto label_2a0538;
        case 0x2a053cu: goto label_2a053c;
        case 0x2a0540u: goto label_2a0540;
        case 0x2a0544u: goto label_2a0544;
        case 0x2a0548u: goto label_2a0548;
        case 0x2a054cu: goto label_2a054c;
        case 0x2a0550u: goto label_2a0550;
        case 0x2a0554u: goto label_2a0554;
        case 0x2a0558u: goto label_2a0558;
        case 0x2a055cu: goto label_2a055c;
        default: break;
    }

    ctx->pc = 0x2a0530u;

label_2a0530:
    // 0x2a0530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a0534:
    // 0x2a0534: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a0534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0538:
    // 0x2a0538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a053c:
    // 0x2a053c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a053cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0540:
    // 0x2a0540: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a0544:
    // 0x2a0544: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a0548:
    // 0x2a0548: 0x40f809  jalr        $v0
label_2a054c:
    if (ctx->pc == 0x2A054Cu) {
        ctx->pc = 0x2A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0548u;
        // 0x2a054c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0550u;
        goto label_2a0550;
    }
    ctx->pc = 0x2A0548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0550u);
        ctx->pc = 0x2A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0548u;
        // 0x2a054c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0548u, 0x2A0550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0550u;
label_2a0550:
    // 0x2a0550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0554:
    // 0x2a0554: 0x3e00008  jr          $ra
label_2a0558:
    if (ctx->pc == 0x2A0558u) {
        ctx->pc = 0x2A0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0554u;
        // 0x2a0558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A055Cu;
        goto label_2a055c;
    }
    ctx->pc = 0x2A0554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0554u;
        // 0x2a0558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A055Cu;
label_2a055c:
    // 0x2a055c: 0x0  nop
    ctx->pc = 0x2a055cu;
    // NOP
    if (ctx->pc == 0x2a055cu) { ctx->pc = 0x2a0560u; }
}
