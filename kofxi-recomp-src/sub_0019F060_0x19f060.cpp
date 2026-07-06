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

// Function: sub_0019F060
// Address: 0x19f060 - 0x19f0c0
void sub_0019F060_0x19f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F060_0x19f060");
#endif

    switch (ctx->pc) {
        case 0x19f088u: goto label_19f088;
        case 0x19f094u: goto label_19f094;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a4u: goto label_19f0a4;
        default: break;
    }

    ctx->pc = 0x19f060u;

    // 0x19f060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f064: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x19f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x19f068: 0x344321a1  ori         $v1, $v0, 0x21A1
    ctx->pc = 0x19f068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8609);
    // 0x19f06c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f070: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19f074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f078: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19f07c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x19f080: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F080u;
    SET_GPR_U32(ctx, 31, 0x19F088u);
    ctx->pc = 0x19F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F080u;
    // 0x19f084: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x19F080u, 0x19F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F088u;
label_19f088:
    // 0x19f088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f08c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F08Cu;
    SET_GPR_U32(ctx, 31, 0x19F094u);
    ctx->pc = 0x19F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F08Cu;
    // 0x19f090: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x19F08Cu, 0x19F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F094u;
label_19f094:
    // 0x19f094: 0xc048c12  jal         func_123048
    ctx->pc = 0x19F094u;
    SET_GPR_U32(ctx, 31, 0x19F09Cu);
    ctx->pc = 0x19F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F094u;
    // 0x19f098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x19F094u, 0x19F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F09Cu;
label_19f09c:
    // 0x19f09c: 0xc046ac8  jal         func_11AB20
    ctx->pc = 0x19F09Cu;
    SET_GPR_U32(ctx, 31, 0x19F0A4u);
    ctx->pc = 0x19F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F09Cu;
    // 0x19f0a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB20u, 0x19F09Cu, 0x19F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0A4u;
label_19f0a4:
    // 0x19f0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0ACu;
        // 0x19f0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0B4u;
    // 0x19f0b4: 0x0  nop
    ctx->pc = 0x19f0b4u;
    // NOP
    // 0x19f0b8: 0x0  nop
    ctx->pc = 0x19f0b8u;
    // NOP
    // 0x19f0bc: 0x0  nop
    ctx->pc = 0x19f0bcu;
    // NOP
}
