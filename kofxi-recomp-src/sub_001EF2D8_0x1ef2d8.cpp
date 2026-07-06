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

// Function: sub_001EF2D8
// Address: 0x1ef2d8 - 0x1ef338
void sub_001EF2D8_0x1ef2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF2D8_0x1ef2d8");
#endif

    switch (ctx->pc) {
        case 0x1ef2ecu: goto label_1ef2ec;
        case 0x1ef31cu: goto label_1ef31c;
        default: break;
    }

    ctx->pc = 0x1ef2d8u;

    // 0x1ef2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef2e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ef2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ef2e4: 0xc07b8e4  jal         func_1EE390
    ctx->pc = 0x1EF2E4u;
    SET_GPR_U32(ctx, 31, 0x1EF2ECu);
    ctx->pc = 0x1EF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2E4u;
    // 0x1ef2e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE390u, 0x1EF2E4u, 0x1EF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2ECu;
label_1ef2ec:
    // 0x1ef2ec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1ef2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2f8: 0x1cc00002  bgtz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF2F8u;
    {
        const bool branch_taken_0x1ef2f8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1EF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2F8u;
        // 0x1ef2fc: 0x8e070a64  lw          $a3, 0xA64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2f8) {
            ctx->pc = 0x1EF304u;
            goto label_1ef304;
        }
    }
    ctx->pc = 0x1EF300u;
    // 0x1ef300: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1ef300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ef304:
    // 0x1ef304: 0x6102a  slt         $v0, $zero, $a2
    ctx->pc = 0x1ef304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ef308: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x1ef308u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x1ef30c: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x1ef30cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ef310: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ef310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef314: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1EF314u;
    SET_GPR_U32(ctx, 31, 0x1EF31Cu);
    ctx->pc = 0x1EF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF314u;
    // 0x1ef318: 0xe3800a  movz        $s0, $a3, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADE0u, 0x1EF314u, 0x1EF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF31Cu;
label_1ef31c:
    // 0x1ef31c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1ef31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ef320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef328: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ef32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF32Cu;
        // 0x1ef330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF334u;
    // 0x1ef334: 0x0  nop
    ctx->pc = 0x1ef334u;
    // NOP
    if (ctx->pc == 0x1ef334u) { ctx->pc = 0x1ef338u; }
}
