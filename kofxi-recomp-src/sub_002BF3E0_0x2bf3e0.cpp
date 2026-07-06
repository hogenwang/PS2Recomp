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

// Function: sub_002BF3E0
// Address: 0x2bf3e0 - 0x2bf418
void sub_002BF3E0_0x2bf3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF3E0_0x2bf3e0");
#endif

    switch (ctx->pc) {
        case 0x2bf408u: goto label_2bf408;
        default: break;
    }

    ctx->pc = 0x2bf3e0u;

    // 0x2bf3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf3e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF3E4u;
    {
        const bool branch_taken_0x2bf3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E4u;
        // 0x2bf3e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3e4) {
            ctx->pc = 0x2BF3F8u;
            goto label_2bf3f8;
        }
    }
    ctx->pc = 0x2BF3ECu;
    // 0x2bf3ec: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2bf3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bf3f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF3F0u;
    {
        const bool branch_taken_0x2bf3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3f0) {
            ctx->pc = 0x2BF400u;
            goto label_2bf400;
        }
    }
    ctx->pc = 0x2BF3F8u;
label_2bf3f8:
    // 0x2bf3f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF3F8u;
    {
        const bool branch_taken_0x2bf3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3F8u;
        // 0x2bf3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3f8) {
            ctx->pc = 0x2BF408u;
            goto label_2bf408;
        }
    }
    ctx->pc = 0x2BF400u;
label_2bf400:
    // 0x2bf400: 0xc0b132a  jal         func_2C4CA8
    ctx->pc = 0x2BF400u;
    SET_GPR_U32(ctx, 31, 0x2BF408u);
    ctx->pc = 0x2BF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF400u;
    // 0x2bf404: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4CA8u, 0x2BF400u, 0x2BF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF408u;
label_2bf408:
    // 0x2bf408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf40c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF40Cu;
        // 0x2bf410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF414u;
    // 0x2bf414: 0x0  nop
    ctx->pc = 0x2bf414u;
    // NOP
    if (ctx->pc == 0x2bf414u) { ctx->pc = 0x2bf418u; }
}
