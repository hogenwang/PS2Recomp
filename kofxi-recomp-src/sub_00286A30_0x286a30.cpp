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

// Function: sub_00286A30
// Address: 0x286a30 - 0x286a78
void sub_00286A30_0x286a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286A30_0x286a30");
#endif

    switch (ctx->pc) {
        case 0x286a40u: goto label_286a40;
        default: break;
    }

    ctx->pc = 0x286a30u;

    // 0x286a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x286a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286a38: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x286A38u;
    SET_GPR_U32(ctx, 31, 0x286A40u);
    ctx->pc = 0x286A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A38u;
    // 0x286a3c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x286A38u, 0x286A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A40u;
label_286a40:
    // 0x286a40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x286a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x286A44u;
    {
        const bool branch_taken_0x286a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A44u;
        // 0x286a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a44) {
            ctx->pc = 0x286A68u;
            goto label_286a68;
        }
    }
    ctx->pc = 0x286A4Cu;
    // 0x286a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286a50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x286a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x286a54: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x286a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x286a58: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x286a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x286a5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x286a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a60: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x286a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x286a64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x286a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_286a68:
    // 0x286a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x286A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A6Cu;
        // 0x286a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286A74u;
    // 0x286a74: 0x0  nop
    ctx->pc = 0x286a74u;
    // NOP
    if (ctx->pc == 0x286a74u) { ctx->pc = 0x286a78u; }
}
