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

// Function: sub_0019B790
// Address: 0x19b790 - 0x19b800
void sub_0019B790_0x19b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B790_0x19b790");
#endif

    switch (ctx->pc) {
        case 0x19b7b0u: goto label_19b7b0;
        case 0x19b7c0u: goto label_19b7c0;
        case 0x19b7d8u: goto label_19b7d8;
        case 0x19b7e0u: goto label_19b7e0;
        default: break;
    }

    ctx->pc = 0x19b790u;

    // 0x19b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b794: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19b798: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19b79c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b7a0: 0x2484ef10  addiu       $a0, $a0, -0x10F0
    ctx->pc = 0x19b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962960));
    // 0x19b7a4: 0x24a560a8  addiu       $a1, $a1, 0x60A8
    ctx->pc = 0x19b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24744));
    // 0x19b7a8: 0xc067dd4  jal         func_19F750
    ctx->pc = 0x19B7A8u;
    SET_GPR_U32(ctx, 31, 0x19B7B0u);
    ctx->pc = 0x19B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7A8u;
    // 0x19b7ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F750u, 0x19B7A8u, 0x19B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7B0u;
label_19b7b0:
    // 0x19b7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7b4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19b7b8: 0xc067ccc  jal         func_19F330
    ctx->pc = 0x19B7B8u;
    SET_GPR_U32(ctx, 31, 0x19B7C0u);
    ctx->pc = 0x19B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7B8u;
    // 0x19b7bc: 0x944460ac  lhu         $a0, 0x60AC($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F330u, 0x19B7B8u, 0x19B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7C0u;
label_19b7c0:
    // 0x19b7c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19b7c4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x19b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x19b7c8: 0x844560b2  lh          $a1, 0x60B2($v0)
    ctx->pc = 0x19b7c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24754)));
    // 0x19b7cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7d0: 0xc067cc8  jal         func_19F320
    ctx->pc = 0x19B7D0u;
    SET_GPR_U32(ctx, 31, 0x19B7D8u);
    ctx->pc = 0x19B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7D0u;
    // 0x19b7d4: 0x24c6d540  addiu       $a2, $a2, -0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F320u, 0x19B7D0u, 0x19B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7D8u;
label_19b7d8:
    // 0x19b7d8: 0xc066e00  jal         func_19B800
    ctx->pc = 0x19B7D8u;
    SET_GPR_U32(ctx, 31, 0x19B7E0u);
    ctx->pc = 0x19B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7D8u;
    // 0x19b7dc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x19B7D8u, 0x19B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7E0u;
label_19b7e0:
    // 0x19b7e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19b7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b7e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7ECu;
        // 0x19b7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B7F4u;
    // 0x19b7f4: 0x0  nop
    ctx->pc = 0x19b7f4u;
    // NOP
    // 0x19b7f8: 0x0  nop
    ctx->pc = 0x19b7f8u;
    // NOP
    // 0x19b7fc: 0x0  nop
    ctx->pc = 0x19b7fcu;
    // NOP
}
