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

// Function: sub_001C16A8
// Address: 0x1c16a8 - 0x1c1700
void sub_001C16A8_0x1c16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C16A8_0x1c16a8");
#endif

    switch (ctx->pc) {
        case 0x1c16bcu: goto label_1c16bc;
        case 0x1c16c4u: goto label_1c16c4;
        case 0x1c16e0u: goto label_1c16e0;
        case 0x1c16e8u: goto label_1c16e8;
        default: break;
    }

    ctx->pc = 0x1c16a8u;

    // 0x1c16a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c16ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c16acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c16b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c16b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c16b4: 0xc070506  jal         func_1C1418
    ctx->pc = 0x1C16B4u;
    SET_GPR_U32(ctx, 31, 0x1C16BCu);
    ctx->pc = 0x1C16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16B4u;
    // 0x1c16b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1418u, 0x1C16B4u, 0x1C16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16BCu;
label_1c16bc:
    // 0x1c16bc: 0xc044900  jal         func_112400
    ctx->pc = 0x1C16BCu;
    SET_GPR_U32(ctx, 31, 0x1C16C4u);
    ctx->pc = 0x1C16C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16BCu;
    // 0x1c16c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x1C16BCu, 0x1C16C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16C4u;
label_1c16c4:
    // 0x1c16c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c16c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c16c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16cc: 0x24849a30  addiu       $a0, $a0, -0x65D0
    ctx->pc = 0x1c16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941232));
    // 0x1c16d0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C16D0u;
    {
        const bool branch_taken_0x1c16d0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16D0u;
        // 0x1c16d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16d0) {
            ctx->pc = 0x1C16E0u;
            goto label_1c16e0;
        }
    }
    ctx->pc = 0x1C16D8u;
    // 0x1c16d8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C16D8u;
    SET_GPR_U32(ctx, 31, 0x1C16E0u);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C16D8u, 0x1C16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16E0u;
label_1c16e0:
    // 0x1c16e0: 0xc070514  jal         func_1C1450
    ctx->pc = 0x1C16E0u;
    SET_GPR_U32(ctx, 31, 0x1C16E8u);
    ctx->pc = 0x1C1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1450u, 0x1C16E0u, 0x1C16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16E8u;
label_1c16e8:
    // 0x1c16e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c16e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c16ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c16f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c16f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c16f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F4u;
        // 0x1c16f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C16F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C16FCu;
    // 0x1c16fc: 0x0  nop
    ctx->pc = 0x1c16fcu;
    // NOP
    if (ctx->pc == 0x1c16fcu) { ctx->pc = 0x1c1700u; }
}
