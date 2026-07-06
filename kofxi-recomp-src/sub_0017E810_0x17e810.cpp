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

// Function: sub_0017E810
// Address: 0x17e810 - 0x17e850
void sub_0017E810_0x17e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E810_0x17e810");
#endif

    switch (ctx->pc) {
        case 0x17e824u: goto label_17e824;
        case 0x17e82cu: goto label_17e82c;
        case 0x17e834u: goto label_17e834;
        case 0x17e83cu: goto label_17e83c;
        default: break;
    }

    ctx->pc = 0x17e810u;

    // 0x17e810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e81c: 0xc061b84  jal         func_186E10
    ctx->pc = 0x17E81Cu;
    SET_GPR_U32(ctx, 31, 0x17E824u);
    ctx->pc = 0x17E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E81Cu;
    // 0x17e820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E10u, 0x17E81Cu, 0x17E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E824u;
label_17e824:
    // 0x17e824: 0xc061210  jal         func_184840
    ctx->pc = 0x17E824u;
    SET_GPR_U32(ctx, 31, 0x17E82Cu);
    ctx->pc = 0x17E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E824u;
    // 0x17e828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184840u, 0x17E824u, 0x17E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E82Cu;
label_17e82c:
    // 0x17e82c: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x17E82Cu;
    SET_GPR_U32(ctx, 31, 0x17E834u);
    ctx->pc = 0x17E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E82Cu;
    // 0x17e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DE0u, 0x17E82Cu, 0x17E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E834u;
label_17e834:
    // 0x17e834: 0xc0625fc  jal         func_1897F0
    ctx->pc = 0x17E834u;
    SET_GPR_U32(ctx, 31, 0x17E83Cu);
    ctx->pc = 0x17E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E834u;
    // 0x17e838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1897F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1897F0u, 0x17E834u, 0x17E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E83Cu;
label_17e83c:
    // 0x17e83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e844: 0x3e00008  jr          $ra
    ctx->pc = 0x17E844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E844u;
        // 0x17e848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E84Cu;
    // 0x17e84c: 0x0  nop
    ctx->pc = 0x17e84cu;
    // NOP
}
