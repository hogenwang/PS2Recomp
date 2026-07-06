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

// Function: sub_0019F0C0
// Address: 0x19f0c0 - 0x19f120
void sub_0019F0C0_0x19f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F0C0_0x19f0c0");
#endif

    switch (ctx->pc) {
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f104u: goto label_19f104;
        default: break;
    }

    ctx->pc = 0x19f0c0u;

    // 0x19f0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f0c4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x19f0c8: 0x344321a1  ori         $v1, $v0, 0x21A1
    ctx->pc = 0x19f0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8609);
    // 0x19f0cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f0d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19f0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f0d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19f0dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19f0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x19f0e0: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F0E0u;
    SET_GPR_U32(ctx, 31, 0x19F0E8u);
    ctx->pc = 0x19F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0E0u;
    // 0x19f0e4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x19F0E0u, 0x19F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0E8u;
label_19f0e8:
    // 0x19f0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0ec: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F0ECu;
    SET_GPR_U32(ctx, 31, 0x19F0F4u);
    ctx->pc = 0x19F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0ECu;
    // 0x19f0f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x19F0ECu, 0x19F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0F4u;
label_19f0f4:
    // 0x19f0f4: 0xc048c12  jal         func_123048
    ctx->pc = 0x19F0F4u;
    SET_GPR_U32(ctx, 31, 0x19F0FCu);
    ctx->pc = 0x19F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0F4u;
    // 0x19f0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x19F0F4u, 0x19F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0FCu;
label_19f0fc:
    // 0x19f0fc: 0xc046b5c  jal         func_11AD70
    ctx->pc = 0x19F0FCu;
    SET_GPR_U32(ctx, 31, 0x19F104u);
    ctx->pc = 0x19F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0FCu;
    // 0x19f100: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD70u, 0x19F0FCu, 0x19F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F104u;
label_19f104:
    // 0x19f104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f10c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F10Cu;
        // 0x19f110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F114u;
    // 0x19f114: 0x0  nop
    ctx->pc = 0x19f114u;
    // NOP
    // 0x19f118: 0x0  nop
    ctx->pc = 0x19f118u;
    // NOP
    // 0x19f11c: 0x0  nop
    ctx->pc = 0x19f11cu;
    // NOP
}
