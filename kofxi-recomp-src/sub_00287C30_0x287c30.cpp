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

// Function: sub_00287C30
// Address: 0x287c30 - 0x287c88
void sub_00287C30_0x287c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C30_0x287c30");
#endif

    switch (ctx->pc) {
        case 0x287c48u: goto label_287c48;
        case 0x287c50u: goto label_287c50;
        case 0x287c58u: goto label_287c58;
        default: break;
    }

    ctx->pc = 0x287c30u;

    // 0x287c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x287c40: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x287C40u;
    SET_GPR_U32(ctx, 31, 0x287C48u);
    ctx->pc = 0x287C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C40u;
    // 0x287c44: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x287C40u, 0x287C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C48u;
label_287c48:
    // 0x287c48: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x287C48u;
    SET_GPR_U32(ctx, 31, 0x287C50u);
    ctx->pc = 0x287C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C48u;
    // 0x287c4c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x287C48u, 0x287C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C50u;
label_287c50:
    // 0x287c50: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x287C50u;
    SET_GPR_U32(ctx, 31, 0x287C58u);
    ctx->pc = 0x287C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C50u;
    // 0x287c54: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x287C50u, 0x287C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C58u;
label_287c58:
    // 0x287c58: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x287c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x287c5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x287c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x287c60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287C60u;
    {
        const bool branch_taken_0x287c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C60u;
        // 0x287c64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c60) {
            ctx->pc = 0x287C78u;
            goto label_287c78;
        }
    }
    ctx->pc = 0x287C68u;
    // 0x287c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287c70: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x287C70u;
    ctx->pc = 0x287C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C70u;
    // 0x287c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x287C78u;
label_287c78:
    // 0x287c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x287C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C7Cu;
        // 0x287c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C84u;
    // 0x287c84: 0x0  nop
    ctx->pc = 0x287c84u;
    // NOP
}
