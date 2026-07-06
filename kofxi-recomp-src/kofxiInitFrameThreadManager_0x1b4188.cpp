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

// Function: kofxiInitFrameThreadManager
// Address: 0x1b4188 - 0x1b41e8
void kofxiInitFrameThreadManager_0x1b4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiInitFrameThreadManager_0x1b4188");
#endif

    switch (ctx->pc) {
        case 0x1b41dcu: goto label_1b41dc;
        default: break;
    }

    ctx->pc = 0x1b4188u;

    // 0x1b4188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b418c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b418cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4190: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4190u;
    {
        const bool branch_taken_0x1b4190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4190u;
        // 0x1b4194: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4190) {
            ctx->pc = 0x1B41D0u;
            goto label_1b41d0;
        }
    }
    ctx->pc = 0x1B4198u;
    // 0x1b4198: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1b4198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b419c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1b419cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b41a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b41a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b41ac: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b41b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b41b4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b41b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b41bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b41c0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1b41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1b41c4: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1b41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1b41c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B41C8u;
    {
        const bool branch_taken_0x1b41c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41C8u;
        // 0x1b41cc: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c8) {
            ctx->pc = 0x1B41D4u;
            goto label_1b41d4;
        }
    }
    ctx->pc = 0x1B41D0u;
label_1b41d0:
    // 0x1b41d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b41d4:
    // 0x1b41d4: 0xc06cd9c  jal         func_1B3670
    ctx->pc = 0x1B41D4u;
    SET_GPR_U32(ctx, 31, 0x1B41DCu);
    ctx->pc = 0x1B41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41D4u;
    // 0x1b41d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3670u, 0x1B41D4u, 0x1B41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41DCu;
label_1b41dc:
    // 0x1b41dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b41dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b41e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B41E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41E0u;
        // 0x1b41e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B41E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B41E8u;
}
