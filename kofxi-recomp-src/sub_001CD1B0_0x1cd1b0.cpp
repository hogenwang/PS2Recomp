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

// Function: sub_001CD1B0
// Address: 0x1cd1b0 - 0x1cd208
void sub_001CD1B0_0x1cd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD1B0_0x1cd1b0");
#endif

    switch (ctx->pc) {
        case 0x1cd1f0u: goto label_1cd1f0;
        default: break;
    }

    ctx->pc = 0x1cd1b0u;

    // 0x1cd1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd1b4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd1bc: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd1c0: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd1c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd1c8: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd1cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd1d0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd1d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1d8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1cd1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1cd1dc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cd1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd1e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1e4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1cd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1cd1e8: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD1E8u;
    SET_GPR_U32(ctx, 31, 0x1CD1F0u);
    ctx->pc = 0x1CD1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1E8u;
    // 0x1cd1ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CD1E8u, 0x1CD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1F0u;
label_1cd1f0:
    // 0x1cd1f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd1f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1FCu;
        // 0x1cd200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD204u;
    // 0x1cd204: 0x0  nop
    ctx->pc = 0x1cd204u;
    // NOP
    if (ctx->pc == 0x1cd204u) { ctx->pc = 0x1cd208u; }
}
