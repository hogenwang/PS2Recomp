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

// Function: sub_001F13D8
// Address: 0x1f13d8 - 0x1f1428
void sub_001F13D8_0x1f13d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F13D8_0x1f13d8");
#endif

    switch (ctx->pc) {
        case 0x1f13f4u: goto label_1f13f4;
        default: break;
    }

    ctx->pc = 0x1f13d8u;

    // 0x1f13d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f13dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f13dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f13e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f13e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f13e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f13e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f13e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13ec: 0xc07aa2a  jal         func_1EA8A8
    ctx->pc = 0x1F13ECu;
    SET_GPR_U32(ctx, 31, 0x1F13F4u);
    ctx->pc = 0x1F13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13ECu;
    // 0x1f13f0: 0x8c852020  lw          $a1, 0x2020($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA8A8u, 0x1F13ECu, 0x1F13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13F4u;
label_1f13f4:
    // 0x1f13f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F13F4u;
    {
        const bool branch_taken_0x1f13f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F4u;
        // 0x1f13f8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f4) {
            ctx->pc = 0x1F1408u;
            goto label_1f1408;
        }
    }
    ctx->pc = 0x1F13FCu;
    // 0x1f13fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f1400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1400u;
    {
        const bool branch_taken_0x1f1400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1400u;
        // 0x1f1404: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1400) {
            ctx->pc = 0x1F1414u;
            goto label_1f1414;
        }
    }
    ctx->pc = 0x1F1408u;
label_1f1408:
    // 0x1f1408: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f140c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f140cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f1410: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f1410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f1414:
    // 0x1f1414: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f1414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1418: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f1418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f141c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F141Cu;
        // 0x1f1420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1424u;
    // 0x1f1424: 0x0  nop
    ctx->pc = 0x1f1424u;
    // NOP
}
