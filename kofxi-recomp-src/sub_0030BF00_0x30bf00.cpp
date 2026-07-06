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

// Function: sub_0030BF00
// Address: 0x30bf00 - 0x30bf50
void sub_0030BF00_0x30bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BF00_0x30bf00");
#endif

    switch (ctx->pc) {
        case 0x30bf14u: goto label_30bf14;
        case 0x30bf20u: goto label_30bf20;
        case 0x30bf28u: goto label_30bf28;
        case 0x30bf34u: goto label_30bf34;
        default: break;
    }

    ctx->pc = 0x30bf00u;

    // 0x30bf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30bf04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30bf08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bf0c: 0xc0c2ec8  jal         func_30BB20
    ctx->pc = 0x30BF0Cu;
    SET_GPR_U32(ctx, 31, 0x30BF14u);
    ctx->pc = 0x30BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF0Cu;
    // 0x30bf10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB20u, 0x30BF0Cu, 0x30BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF14u;
label_30bf14:
    // 0x30bf14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30bf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bf18: 0xc0c2f10  jal         func_30BC40
    ctx->pc = 0x30BF18u;
    SET_GPR_U32(ctx, 31, 0x30BF20u);
    ctx->pc = 0x30BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF18u;
    // 0x30bf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BC40u, 0x30BF18u, 0x30BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF20u;
label_30bf20:
    // 0x30bf20: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30BF20u;
    SET_GPR_U32(ctx, 31, 0x30BF28u);
    ctx->pc = 0x30BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF20u;
    // 0x30bf24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x30BF20u, 0x30BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF28u;
label_30bf28:
    // 0x30bf28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bf2c: 0xc0c2f74  jal         func_30BDD0
    ctx->pc = 0x30BF2Cu;
    SET_GPR_U32(ctx, 31, 0x30BF34u);
    ctx->pc = 0x30BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF2Cu;
    // 0x30bf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BDD0u, 0x30BF2Cu, 0x30BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF34u;
label_30bf34:
    // 0x30bf34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bf38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x30BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF3Cu;
        // 0x30bf40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BF44u;
    // 0x30bf44: 0x0  nop
    ctx->pc = 0x30bf44u;
    // NOP
    // 0x30bf48: 0x0  nop
    ctx->pc = 0x30bf48u;
    // NOP
    // 0x30bf4c: 0x0  nop
    ctx->pc = 0x30bf4cu;
    // NOP
    if (ctx->pc == 0x30bf4cu) { ctx->pc = 0x30bf50u; }
}
