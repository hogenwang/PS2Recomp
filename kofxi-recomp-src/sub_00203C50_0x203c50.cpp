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

// Function: sub_00203C50
// Address: 0x203c50 - 0x203cb0
void sub_00203C50_0x203c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203C50_0x203c50");
#endif

    switch (ctx->pc) {
        case 0x203c64u: goto label_203c64;
        case 0x203c78u: goto label_203c78;
        case 0x203c8cu: goto label_203c8c;
        case 0x203c94u: goto label_203c94;
        default: break;
    }

    ctx->pc = 0x203c50u;

    // 0x203c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203c54: 0x3404c800  ori         $a0, $zero, 0xC800
    ctx->pc = 0x203c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
    // 0x203c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203c5c: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x203C5Cu;
    SET_GPR_U32(ctx, 31, 0x203C64u);
    ctx->pc = 0x203C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C5Cu;
    // 0x203c60: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x203C5Cu, 0x203C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C64u;
label_203c64:
    // 0x203c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x203c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x203c6c: 0x2484f788  addiu       $a0, $a0, -0x878
    ctx->pc = 0x203c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965128));
    // 0x203c70: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x203C70u;
    SET_GPR_U32(ctx, 31, 0x203C78u);
    ctx->pc = 0x203C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C70u;
    // 0x203c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x203C70u, 0x203C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C78u;
label_203c78:
    // 0x203c78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x203c7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c80: 0x2484f240  addiu       $a0, $a0, -0xDC0
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963776));
    // 0x203c84: 0xc049c48  jal         func_127120
    ctx->pc = 0x203C84u;
    SET_GPR_U32(ctx, 31, 0x203C8Cu);
    ctx->pc = 0x203C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C84u;
    // 0x203c88: 0x3406c000  ori         $a2, $zero, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x203C84u, 0x203C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C8Cu;
label_203c8c:
    // 0x203c8c: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x203C8Cu;
    SET_GPR_U32(ctx, 31, 0x203C94u);
    ctx->pc = 0x203C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C8Cu;
    // 0x203c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x203C8Cu, 0x203C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C94u;
label_203c94:
    // 0x203c94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x203C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203CA4u;
    // 0x203ca4: 0x0  nop
    ctx->pc = 0x203ca4u;
    // NOP
    // 0x203ca8: 0x0  nop
    ctx->pc = 0x203ca8u;
    // NOP
    // 0x203cac: 0x0  nop
    ctx->pc = 0x203cacu;
    // NOP
    if (ctx->pc == 0x203cacu) { ctx->pc = 0x203cb0u; }
}
