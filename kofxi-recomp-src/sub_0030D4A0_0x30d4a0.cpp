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

// Function: sub_0030D4A0
// Address: 0x30d4a0 - 0x30d4f0
void sub_0030D4A0_0x30d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D4A0_0x30d4a0");
#endif

    switch (ctx->pc) {
        case 0x30d4b4u: goto label_30d4b4;
        case 0x30d4bcu: goto label_30d4bc;
        case 0x30d4c4u: goto label_30d4c4;
        case 0x30d4ccu: goto label_30d4cc;
        case 0x30d4d4u: goto label_30d4d4;
        case 0x30d4dcu: goto label_30d4dc;
        default: break;
    }

    ctx->pc = 0x30d4a0u;

    // 0x30d4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d4ac: 0xc0c34fc  jal         func_30D3F0
    ctx->pc = 0x30D4ACu;
    SET_GPR_U32(ctx, 31, 0x30D4B4u);
    ctx->pc = 0x30D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4ACu;
    // 0x30d4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3F0u, 0x30D4ACu, 0x30D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4B4u;
label_30d4b4:
    // 0x30d4b4: 0xc0c2e98  jal         func_30BA60
    ctx->pc = 0x30D4B4u;
    SET_GPR_U32(ctx, 31, 0x30D4BCu);
    ctx->pc = 0x30D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4B4u;
    // 0x30d4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA60u, 0x30D4B4u, 0x30D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4BCu;
label_30d4bc:
    // 0x30d4bc: 0xc0c3018  jal         func_30C060
    ctx->pc = 0x30D4BCu;
    SET_GPR_U32(ctx, 31, 0x30D4C4u);
    ctx->pc = 0x30D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4BCu;
    // 0x30d4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C060u, 0x30D4BCu, 0x30D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4C4u;
label_30d4c4:
    // 0x30d4c4: 0xc0c30a8  jal         func_30C2A0
    ctx->pc = 0x30D4C4u;
    SET_GPR_U32(ctx, 31, 0x30D4CCu);
    ctx->pc = 0x30D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4C4u;
    // 0x30d4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C2A0u, 0x30D4C4u, 0x30D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4CCu;
label_30d4cc:
    // 0x30d4cc: 0xc0c31c0  jal         func_30C700
    ctx->pc = 0x30D4CCu;
    SET_GPR_U32(ctx, 31, 0x30D4D4u);
    ctx->pc = 0x30D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4CCu;
    // 0x30d4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C700u, 0x30D4CCu, 0x30D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4D4u;
label_30d4d4:
    // 0x30d4d4: 0xc0c34ac  jal         func_30D2B0
    ctx->pc = 0x30D4D4u;
    SET_GPR_U32(ctx, 31, 0x30D4DCu);
    ctx->pc = 0x30D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4D4u;
    // 0x30d4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2B0u, 0x30D4D4u, 0x30D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4DCu;
label_30d4dc:
    // 0x30d4dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x30D4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4E4u;
        // 0x30d4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D4ECu;
    // 0x30d4ec: 0x0  nop
    ctx->pc = 0x30d4ecu;
    // NOP
    if (ctx->pc == 0x30d4ecu) { ctx->pc = 0x30d4f0u; }
}
