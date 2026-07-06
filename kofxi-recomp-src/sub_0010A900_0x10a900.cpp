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

// Function: sub_0010A900
// Address: 0x10a900 - 0x10a948
void sub_0010A900_0x10a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A900_0x10a900");
#endif

    switch (ctx->pc) {
        case 0x10a928u: goto label_10a928;
        case 0x10a938u: goto label_10a938;
        default: break;
    }

    ctx->pc = 0x10a900u;

    // 0x10a900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a904: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10a904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a910: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x10a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x10a914: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x10a914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x10a918: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A918u;
    {
        const bool branch_taken_0x10a918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a918) {
            ctx->pc = 0x10A930u;
            goto label_10a930;
        }
    }
    ctx->pc = 0x10A920u;
    // 0x10a920: 0xc0428d6  jal         func_10A358
    ctx->pc = 0x10A920u;
    SET_GPR_U32(ctx, 31, 0x10A928u);
    ctx->pc = 0x10A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A920u;
    // 0x10a924: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A358u, 0x10A920u, 0x10A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A928u;
label_10a928:
    // 0x10a928: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A928u;
    {
        const bool branch_taken_0x10a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A928u;
        // 0x10a92c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a928) {
            ctx->pc = 0x10A93Cu;
            goto label_10a93c;
        }
    }
    ctx->pc = 0x10A930u;
label_10a930:
    // 0x10a930: 0xc04287a  jal         func_10A1E8
    ctx->pc = 0x10A930u;
    SET_GPR_U32(ctx, 31, 0x10A938u);
    ctx->pc = 0x10A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A930u;
    // 0x10a934: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A1E8u, 0x10A930u, 0x10A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A938u;
label_10a938:
    // 0x10a938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a93c:
    // 0x10a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A93Cu;
        // 0x10a940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A944u;
    // 0x10a944: 0x0  nop
    ctx->pc = 0x10a944u;
    // NOP
}
