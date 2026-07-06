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

// Function: sub_001E3E18
// Address: 0x1e3e18 - 0x1e3e90
void sub_001E3E18_0x1e3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E18_0x1e3e18");
#endif

    switch (ctx->pc) {
        case 0x1e3e34u: goto label_1e3e34;
        case 0x1e3e44u: goto label_1e3e44;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e74u: goto label_1e3e74;
        default: break;
    }

    ctx->pc = 0x1e3e18u;

    // 0x1e3e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3e2c: 0xc078fa4  jal         func_1E3E90
    ctx->pc = 0x1E3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3E34u);
    ctx->pc = 0x1E3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E2Cu;
    // 0x1e3e30: 0x24b10060  addiu       $s1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3E90u, 0x1E3E2Cu, 0x1E3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E34u;
label_1e3e34:
    // 0x1e3e34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e3e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3e3c: 0xc078fc0  jal         func_1E3F00
    ctx->pc = 0x1E3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E3E44u);
    ctx->pc = 0x1E3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E3Cu;
    // 0x1e3e40: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3F00u, 0x1E3E3Cu, 0x1E3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E44u;
label_1e3e44:
    // 0x1e3e44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e3e48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e3e4c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1e3e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1e3e50: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e3e54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3e58: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1e3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1e3e5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e3e60: 0xc078fdc  jal         func_1E3F70
    ctx->pc = 0x1E3E60u;
    SET_GPR_U32(ctx, 31, 0x1E3E68u);
    ctx->pc = 0x1E3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E60u;
    // 0x1e3e64: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3F70u, 0x1E3E60u, 0x1E3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E68u;
label_1e3e68:
    // 0x1e3e68: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1e3e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e3e6c: 0xc078fdc  jal         func_1E3F70
    ctx->pc = 0x1E3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E3E74u);
    ctx->pc = 0x1E3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E6Cu;
    // 0x1e3e70: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3F70u, 0x1E3E6Cu, 0x1E3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E74u;
label_1e3e74:
    // 0x1e3e74: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1e3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1e3e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E84u;
        // 0x1e3e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3E8Cu;
    // 0x1e3e8c: 0x0  nop
    ctx->pc = 0x1e3e8cu;
    // NOP
    if (ctx->pc == 0x1e3e8cu) { ctx->pc = 0x1e3e90u; }
}
