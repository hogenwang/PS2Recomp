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

// Function: sub_00296F20
// Address: 0x296f20 - 0x296f88
void sub_00296F20_0x296f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296F20_0x296f20");
#endif

    switch (ctx->pc) {
        case 0x296f38u: goto label_296f38;
        case 0x296f44u: goto label_296f44;
        case 0x296f54u: goto label_296f54;
        case 0x296f64u: goto label_296f64;
        case 0x296f74u: goto label_296f74;
        default: break;
    }

    ctx->pc = 0x296f20u;

    // 0x296f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296f28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296f2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296f30: 0xc0a5b00  jal         func_296C00
    ctx->pc = 0x296F30u;
    SET_GPR_U32(ctx, 31, 0x296F38u);
    ctx->pc = 0x296F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F30u;
    // 0x296f34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C00u, 0x296F30u, 0x296F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F38u;
label_296f38:
    // 0x296f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f3c: 0xc0a69f0  jal         func_29A7C0
    ctx->pc = 0x296F3Cu;
    SET_GPR_U32(ctx, 31, 0x296F44u);
    ctx->pc = 0x296F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F3Cu;
    // 0x296f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A7C0u, 0x296F3Cu, 0x296F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F44u;
label_296f44:
    // 0x296f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x296f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296f4c: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x296F4Cu;
    SET_GPR_U32(ctx, 31, 0x296F54u);
    ctx->pc = 0x296F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F4Cu;
    // 0x296f50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x296F4Cu, 0x296F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F54u;
label_296f54:
    // 0x296f54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x296F54u;
    {
        const bool branch_taken_0x296f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F54u;
        // 0x296f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f54) {
            ctx->pc = 0x296F74u;
            goto label_296f74;
        }
    }
    ctx->pc = 0x296F5Cu;
    // 0x296f5c: 0xc0a6a1e  jal         func_29A878
    ctx->pc = 0x296F5Cu;
    SET_GPR_U32(ctx, 31, 0x296F64u);
    ctx->pc = 0x296F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F5Cu;
    // 0x296f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A878u, 0x296F5Cu, 0x296F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F64u;
label_296f64:
    // 0x296f64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x296f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f6c: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x296F6Cu;
    SET_GPR_U32(ctx, 31, 0x296F74u);
    ctx->pc = 0x296F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F6Cu;
    // 0x296f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x296F6Cu, 0x296F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F74u;
label_296f74:
    // 0x296f74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296f78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296f80: 0x3e00008  jr          $ra
    ctx->pc = 0x296F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F80u;
        // 0x296f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296F88u;
}
