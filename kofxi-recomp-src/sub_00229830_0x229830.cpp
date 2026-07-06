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

// Function: sub_00229830
// Address: 0x229830 - 0x229898
void sub_00229830_0x229830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229830_0x229830");
#endif

    ctx->pc = 0x229830u;

    // 0x229830: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x229830u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229834: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x229834u;
    {
        const bool branch_taken_0x229834 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x229838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229834u;
        // 0x229838: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229834) {
            ctx->pc = 0x22988Cu;
            goto label_22988c;
        }
    }
    ctx->pc = 0x22983Cu;
    // 0x22983c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x229840: 0x8c6aa78c  lw          $t2, -0x5874($v1)
    ctx->pc = 0x229840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944652)));
    // 0x229844: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x229844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x229848: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x229848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x22984c: 0x8c49a788  lw          $t1, -0x5878($v0)
    ctx->pc = 0x22984cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944648)));
    // 0x229850: 0x8c8ba790  lw          $t3, -0x5870($a0)
    ctx->pc = 0x229850u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944656)));
    // 0x229854: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x229854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x229858: 0x8ca3a798  lw          $v1, -0x5868($a1)
    ctx->pc = 0x229858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944664)));
    // 0x22985c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x22985cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229860: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x229864: 0x8cc4a794  lw          $a0, -0x586C($a2)
    ctx->pc = 0x229864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944660)));
    // 0x229868: 0x8ce5a7a0  lw          $a1, -0x5860($a3)
    ctx->pc = 0x229868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944672)));
    // 0x22986c: 0x8d02a79c  lw          $v0, -0x5864($t0)
    ctx->pc = 0x22986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294944668)));
    // 0x229870: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x229870u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x229874: 0xad820018  sw          $v0, 0x18($t4)
    ctx->pc = 0x229874u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 2));
    // 0x229878: 0xad8a0004  sw          $t2, 0x4($t4)
    ctx->pc = 0x229878u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 10));
    // 0x22987c: 0xad8b0008  sw          $t3, 0x8($t4)
    ctx->pc = 0x22987cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 11));
    // 0x229880: 0xad83000c  sw          $v1, 0xC($t4)
    ctx->pc = 0x229880u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
    // 0x229884: 0xad840010  sw          $a0, 0x10($t4)
    ctx->pc = 0x229884u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 4));
    // 0x229888: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x229888u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
label_22988c:
    // 0x22988c: 0x3e00008  jr          $ra
    ctx->pc = 0x22988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229894u;
    // 0x229894: 0x0  nop
    ctx->pc = 0x229894u;
    // NOP
    if (ctx->pc == 0x229894u) { ctx->pc = 0x229898u; }
}
