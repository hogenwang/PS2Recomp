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

// Function: sub_001D9A20
// Address: 0x1d9a20 - 0x1d9a70
void sub_001D9A20_0x1d9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9A20_0x1d9a20");
#endif

    switch (ctx->pc) {
        case 0x1d9a48u: goto label_1d9a48;
        case 0x1d9a58u: goto label_1d9a58;
        default: break;
    }

    ctx->pc = 0x1d9a20u;

    // 0x1d9a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d9a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9a34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9A34u;
    {
        const bool branch_taken_0x1d9a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A34u;
        // 0x1d9a38: 0x2444025c  addiu       $a0, $v0, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a34) {
            ctx->pc = 0x1D9A50u;
            goto label_1d9a50;
        }
    }
    ctx->pc = 0x1D9A3Cu;
    // 0x1d9a3c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d9a40: 0xc07669c  jal         func_1D9A70
    ctx->pc = 0x1D9A40u;
    SET_GPR_U32(ctx, 31, 0x1D9A48u);
    ctx->pc = 0x1D9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A40u;
    // 0x1d9a44: 0x2484e6b0  addiu       $a0, $a0, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A70u, 0x1D9A40u, 0x1D9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A48u;
label_1d9a48:
    // 0x1d9a48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9A48u;
    {
        const bool branch_taken_0x1d9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A48u;
        // 0x1d9a4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a48) {
            ctx->pc = 0x1D9A5Cu;
            goto label_1d9a5c;
        }
    }
    ctx->pc = 0x1D9A50u;
label_1d9a50:
    // 0x1d9a50: 0xc07669c  jal         func_1D9A70
    ctx->pc = 0x1D9A50u;
    SET_GPR_U32(ctx, 31, 0x1D9A58u);
    ctx->pc = 0x1D9A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A70u, 0x1D9A50u, 0x1D9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A58u;
label_1d9a58:
    // 0x1d9a58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a5c:
    // 0x1d9a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A64u;
        // 0x1d9a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A6Cu;
    // 0x1d9a6c: 0x0  nop
    ctx->pc = 0x1d9a6cu;
    // NOP
}
