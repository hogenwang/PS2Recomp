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

// Function: sub_0029D130
// Address: 0x29d130 - 0x29d168
void sub_0029D130_0x29d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D130_0x29d130");
#endif

    switch (ctx->pc) {
        case 0x29d15cu: goto label_29d15c;
        default: break;
    }

    ctx->pc = 0x29d130u;

    // 0x29d130: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29d130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d134: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29d134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d13c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x29d13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d140: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x29d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x29d144: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x29d148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d14c: 0x24845548  addiu       $a0, $a0, 0x5548
    ctx->pc = 0x29d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21832));
    // 0x29d150: 0x24a5c568  addiu       $a1, $a1, -0x3A98
    ctx->pc = 0x29d150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952296));
    // 0x29d154: 0xc0a74b2  jal         func_29D2C8
    ctx->pc = 0x29D154u;
    SET_GPR_U32(ctx, 31, 0x29D15Cu);
    ctx->pc = 0x29D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D154u;
    // 0x29d158: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C8u, 0x29D154u, 0x29D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D15Cu;
label_29d15c:
    // 0x29d15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d160: 0x3e00008  jr          $ra
    ctx->pc = 0x29D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D160u;
        // 0x29d164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D168u;
}
