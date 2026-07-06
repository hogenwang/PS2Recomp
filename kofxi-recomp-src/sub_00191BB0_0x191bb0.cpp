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

// Function: sub_00191BB0
// Address: 0x191bb0 - 0x191c00
void sub_00191BB0_0x191bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191BB0_0x191bb0");
#endif

    switch (ctx->pc) {
        case 0x191bd8u: goto label_191bd8;
        case 0x191becu: goto label_191bec;
        default: break;
    }

    ctx->pc = 0x191bb0u;

    // 0x191bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191bb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191bb8: 0x10850009  beq         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x191BB8u;
    {
        const bool branch_taken_0x191bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x191BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB8u;
        // 0x191bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bb8) {
            ctx->pc = 0x191BE0u;
            goto label_191be0;
        }
    }
    ctx->pc = 0x191BC0u;
    // 0x191bc0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x191BC0u;
    {
        const bool branch_taken_0x191bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bc0) {
            ctx->pc = 0x191BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191BC0u;
            // 0x191bc4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191BD0u;
            goto label_191bd0;
        }
    }
    ctx->pc = 0x191BC8u;
    // 0x191bc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x191BC8u;
    {
        const bool branch_taken_0x191bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BC8u;
        // 0x191bcc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bc8) {
            ctx->pc = 0x191BF0u;
            goto label_191bf0;
        }
    }
    ctx->pc = 0x191BD0u;
label_191bd0:
    // 0x191bd0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191BD0u;
    SET_GPR_U32(ctx, 31, 0x191BD8u);
    ctx->pc = 0x191BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BD0u;
    // 0x191bd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191BD0u, 0x191BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BD8u;
label_191bd8:
    // 0x191bd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191BD8u;
    {
        const bool branch_taken_0x191bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bd8) {
            ctx->pc = 0x191BECu;
            goto label_191bec;
        }
    }
    ctx->pc = 0x191BE0u;
label_191be0:
    // 0x191be0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x191be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191be4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191BE4u;
    SET_GPR_U32(ctx, 31, 0x191BECu);
    ctx->pc = 0x191BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BE4u;
    // 0x191be8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191BE4u, 0x191BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BECu;
label_191bec:
    // 0x191bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191bf0:
    // 0x191bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x191BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BF0u;
        // 0x191bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191BF8u;
    // 0x191bf8: 0x0  nop
    ctx->pc = 0x191bf8u;
    // NOP
    // 0x191bfc: 0x0  nop
    ctx->pc = 0x191bfcu;
    // NOP
}
