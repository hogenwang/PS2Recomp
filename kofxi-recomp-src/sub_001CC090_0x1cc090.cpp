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

// Function: sub_001CC090
// Address: 0x1cc090 - 0x1cc0e0
void sub_001CC090_0x1cc090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC090_0x1cc090");
#endif

    switch (ctx->pc) {
        case 0x1cc0c0u: goto label_1cc0c0;
        default: break;
    }

    ctx->pc = 0x1cc090u;

    // 0x1cc090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc094: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cc094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cc098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc09c: 0x2450cc00  addiu       $s0, $v0, -0x3400
    ctx->pc = 0x1cc09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953984));
    // 0x1cc0a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc0a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC0A4u;
    {
        const bool branch_taken_0x1cc0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0A4u;
        // 0x1cc0a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0a4) {
            ctx->pc = 0x1CC0C4u;
            goto label_1cc0c4;
        }
    }
    ctx->pc = 0x1CC0ACu;
    // 0x1cc0ac: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1cc0b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0b4: 0x2484cc08  addiu       $a0, $a0, -0x33F8
    ctx->pc = 0x1cc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953992));
    // 0x1cc0b8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CC0B8u;
    SET_GPR_U32(ctx, 31, 0x1CC0C0u);
    ctx->pc = 0x1CC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC0B8u;
    // 0x1cc0bc: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CC0B8u, 0x1CC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC0C0u;
label_1cc0c0:
    // 0x1cc0c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cc0c4:
    // 0x1cc0c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc0c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc0cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cc0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0D4u;
        // 0x1cc0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC0DCu;
    // 0x1cc0dc: 0x0  nop
    ctx->pc = 0x1cc0dcu;
    // NOP
    if (ctx->pc == 0x1cc0dcu) { ctx->pc = 0x1cc0e0u; }
}
