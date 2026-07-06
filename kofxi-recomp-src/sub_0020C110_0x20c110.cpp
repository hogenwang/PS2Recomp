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

// Function: sub_0020C110
// Address: 0x20c110 - 0x20c180
void sub_0020C110_0x20c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C110_0x20c110");
#endif

    switch (ctx->pc) {
        case 0x20c144u: goto label_20c144;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c158u: goto label_20c158;
        case 0x20c164u: goto label_20c164;
        default: break;
    }

    ctx->pc = 0x20c110u;

    // 0x20c110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20c114: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x20c114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20c118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c11c: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x20c120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c12c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c130: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c134: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c138: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c13c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20C13Cu;
    SET_GPR_U32(ctx, 31, 0x20C144u);
    ctx->pc = 0x20C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C13Cu;
    // 0x20c140: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x20C13Cu, 0x20C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C144u;
label_20c144:
    // 0x20c144: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C144u;
    SET_GPR_U32(ctx, 31, 0x20C14Cu);
    ctx->pc = 0x20C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C144u;
    // 0x20c148: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20C144u, 0x20C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C14Cu;
label_20c14c:
    // 0x20c14c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c150: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20C150u;
    SET_GPR_U32(ctx, 31, 0x20C158u);
    ctx->pc = 0x20C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C150u;
    // 0x20c154: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x20C150u, 0x20C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C158u;
label_20c158:
    // 0x20c158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c15c: 0xc040454  jal         func_101150
    ctx->pc = 0x20C15Cu;
    SET_GPR_U32(ctx, 31, 0x20C164u);
    ctx->pc = 0x20C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C15Cu;
    // 0x20c160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x20C15Cu, 0x20C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C164u;
label_20c164:
    // 0x20c164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c16c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C16Cu;
        // 0x20c170: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C174u;
    // 0x20c174: 0x0  nop
    ctx->pc = 0x20c174u;
    // NOP
    // 0x20c178: 0x0  nop
    ctx->pc = 0x20c178u;
    // NOP
    // 0x20c17c: 0x0  nop
    ctx->pc = 0x20c17cu;
    // NOP
    if (ctx->pc == 0x20c17cu) { ctx->pc = 0x20c180u; }
}
