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

// Function: sub_001224C0
// Address: 0x1224c0 - 0x122500
void sub_001224C0_0x1224c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001224C0_0x1224c0");
#endif

    switch (ctx->pc) {
        case 0x1224d8u: goto label_1224d8;
        case 0x1224f0u: goto label_1224f0;
        default: break;
    }

    ctx->pc = 0x1224c0u;

    // 0x1224c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1224c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1224c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1224c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1224c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1224cc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1224ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1224d0: 0xc04890e  jal         func_122438
    ctx->pc = 0x1224D0u;
    SET_GPR_U32(ctx, 31, 0x1224D8u);
    ctx->pc = 0x1224D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224D0u;
    // 0x1224d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x1224D0u, 0x1224D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224D8u;
label_1224d8:
    // 0x1224d8: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x1224d8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1224dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1224e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1224e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1224e4: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x1224e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x1224e8: 0xc048c06  jal         func_123018
    ctx->pc = 0x1224E8u;
    SET_GPR_U32(ctx, 31, 0x1224F0u);
    ctx->pc = 0x1224ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224E8u;
    // 0x1224ec: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123018u, 0x1224E8u, 0x1224F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224F0u;
label_1224f0:
    // 0x1224f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1224f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1224f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1224F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1224F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224F4u;
        // 0x1224f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1224F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1224FCu;
    // 0x1224fc: 0x0  nop
    ctx->pc = 0x1224fcu;
    // NOP
}
