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

// Function: sub_0018E750
// Address: 0x18e750 - 0x18e7a0
void sub_0018E750_0x18e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E750_0x18e750");
#endif

    switch (ctx->pc) {
        case 0x18e768u: goto label_18e768;
        case 0x18e770u: goto label_18e770;
        case 0x18e780u: goto label_18e780;
        default: break;
    }

    ctx->pc = 0x18e750u;

    // 0x18e750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e760: 0xc0690dc  jal         func_1A4370
    ctx->pc = 0x18E760u;
    SET_GPR_U32(ctx, 31, 0x18E768u);
    ctx->pc = 0x18E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E760u;
    // 0x18e764: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4370u, 0x18E760u, 0x18E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E768u;
label_18e768:
    // 0x18e768: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x18E768u;
    SET_GPR_U32(ctx, 31, 0x18E770u);
    ctx->pc = 0x18E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E768u;
    // 0x18e76c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x18E768u, 0x18E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E770u;
label_18e770:
    // 0x18e770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e778: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x18E778u;
    SET_GPR_U32(ctx, 31, 0x18E780u);
    ctx->pc = 0x18E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E778u;
    // 0x18e77c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x18E778u, 0x18E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E780u;
label_18e780:
    // 0x18e780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e790: 0x3e00008  jr          $ra
    ctx->pc = 0x18E790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E790u;
        // 0x18e794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E798u;
    // 0x18e798: 0x0  nop
    ctx->pc = 0x18e798u;
    // NOP
    // 0x18e79c: 0x0  nop
    ctx->pc = 0x18e79cu;
    // NOP
    if (ctx->pc == 0x18e79cu) { ctx->pc = 0x18e7a0u; }
}
