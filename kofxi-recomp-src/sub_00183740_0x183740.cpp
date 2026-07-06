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

// Function: sub_00183740
// Address: 0x183740 - 0x1837b0
void sub_00183740_0x183740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183740_0x183740");
#endif

    switch (ctx->pc) {
        case 0x18375cu: goto label_18375c;
        case 0x183774u: goto label_183774;
        case 0x18378cu: goto label_18378c;
        default: break;
    }

    ctx->pc = 0x183740u;

    // 0x183740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18374c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183754: 0xc060d5c  jal         func_183570
    ctx->pc = 0x183754u;
    SET_GPR_U32(ctx, 31, 0x18375Cu);
    ctx->pc = 0x183758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183754u;
    // 0x183758: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183570u, 0x183754u, 0x18375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18375Cu;
label_18375c:
    // 0x18375c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18375Cu;
    {
        const bool branch_taken_0x18375c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18375c) {
            ctx->pc = 0x183760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18375Cu;
            // 0x183760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18376Cu;
            goto label_18376c;
        }
    }
    ctx->pc = 0x183764u;
    // 0x183764: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x183764u;
    {
        const bool branch_taken_0x183764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183764u;
        // 0x183768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183764) {
            ctx->pc = 0x183790u;
            goto label_183790;
        }
    }
    ctx->pc = 0x18376Cu;
label_18376c:
    // 0x18376c: 0xc060d80  jal         func_183600
    ctx->pc = 0x18376Cu;
    SET_GPR_U32(ctx, 31, 0x183774u);
    ctx->pc = 0x183770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18376Cu;
    // 0x183770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183600u, 0x18376Cu, 0x183774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183774u;
label_183774:
    // 0x183774: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x183774u;
    {
        const bool branch_taken_0x183774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183774) {
            ctx->pc = 0x183778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183774u;
            // 0x183778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183784u;
            goto label_183784;
        }
    }
    ctx->pc = 0x18377Cu;
    // 0x18377c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18377Cu;
    {
        const bool branch_taken_0x18377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18377Cu;
        // 0x183780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18377c) {
            ctx->pc = 0x183790u;
            goto label_183790;
        }
    }
    ctx->pc = 0x183784u;
label_183784:
    // 0x183784: 0xc060da4  jal         func_183690
    ctx->pc = 0x183784u;
    SET_GPR_U32(ctx, 31, 0x18378Cu);
    ctx->pc = 0x183788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183784u;
    // 0x183788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183690u, 0x183784u, 0x18378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18378Cu;
label_18378c:
    // 0x18378c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18378cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_183790:
    // 0x183790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18379c: 0x3e00008  jr          $ra
    ctx->pc = 0x18379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18379Cu;
        // 0x1837a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18379Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837A4u;
    // 0x1837a4: 0x0  nop
    ctx->pc = 0x1837a4u;
    // NOP
    // 0x1837a8: 0x0  nop
    ctx->pc = 0x1837a8u;
    // NOP
    // 0x1837ac: 0x0  nop
    ctx->pc = 0x1837acu;
    // NOP
}
