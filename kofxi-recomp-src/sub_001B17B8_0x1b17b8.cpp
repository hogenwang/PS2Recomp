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

// Function: sub_001B17B8
// Address: 0x1b17b8 - 0x1b1820
void sub_001B17B8_0x1b17b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B17B8_0x1b17b8");
#endif

    switch (ctx->pc) {
        case 0x1b17d8u: goto label_1b17d8;
        case 0x1b17fcu: goto label_1b17fc;
        case 0x1b1804u: goto label_1b1804;
        case 0x1b180cu: goto label_1b180c;
        default: break;
    }

    ctx->pc = 0x1b17b8u;

    // 0x1b17b8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1b17b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1b17bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b17bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17c0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1b17c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b17c4: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x1b17c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1b17c8: 0x27a90108  addiu       $t1, $sp, 0x108
    ctx->pc = 0x1b17c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1b17cc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1b17ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1b17d0: 0xc06c550  jal         func_1B1540
    ctx->pc = 0x1B17D0u;
    SET_GPR_U32(ctx, 31, 0x1B17D8u);
    ctx->pc = 0x1B17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17D0u;
    // 0x1b17d4: 0x27aa010c  addiu       $t2, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1540u, 0x1B17D0u, 0x1B17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17D8u;
label_1b17d8:
    // 0x1b17d8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1b17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1b17dc: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1b17dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b17e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B17E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17E0u;
        // 0x1b17e4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B17E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B17E8u;
    // 0x1b17e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b17e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b17ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b17ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b17f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b17f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b17f4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B17F4u;
    SET_GPR_U32(ctx, 31, 0x1B17FCu);
    ctx->pc = 0x1B17F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17F4u;
    // 0x1b17f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B17F4u, 0x1B17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17FCu;
label_1b17fc:
    // 0x1b17fc: 0xc06c608  jal         func_1B1820
    ctx->pc = 0x1B17FCu;
    SET_GPR_U32(ctx, 31, 0x1B1804u);
    ctx->pc = 0x1B1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17FCu;
    // 0x1b1800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1820u, 0x1B17FCu, 0x1B1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1804u;
label_1b1804:
    // 0x1b1804: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1804u;
    SET_GPR_U32(ctx, 31, 0x1B180Cu);
    ctx->pc = 0x1B1808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1804u;
    // 0x1b1808: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B1804u, 0x1B180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B180Cu;
label_1b180c:
    // 0x1b180c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1810: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1818: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1818u;
        // 0x1b181c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1820u;
}
