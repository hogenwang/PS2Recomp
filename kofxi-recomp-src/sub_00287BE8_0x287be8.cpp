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

// Function: sub_00287BE8
// Address: 0x287be8 - 0x287c30
void sub_00287BE8_0x287be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287BE8_0x287be8");
#endif

    switch (ctx->pc) {
        case 0x287c08u: goto label_287c08;
        case 0x287c10u: goto label_287c10;
        case 0x287c18u: goto label_287c18;
        default: break;
    }

    ctx->pc = 0x287be8u;

    // 0x287be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x287bf8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x287bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x287bfc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x287c00: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x287C00u;
    SET_GPR_U32(ctx, 31, 0x287C08u);
    ctx->pc = 0x287C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C00u;
    // 0x287c04: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x287C00u, 0x287C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C08u;
label_287c08:
    // 0x287c08: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x287C08u;
    SET_GPR_U32(ctx, 31, 0x287C10u);
    ctx->pc = 0x287C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C08u;
    // 0x287c0c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x287C08u, 0x287C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C10u;
label_287c10:
    // 0x287c10: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x287C10u;
    SET_GPR_U32(ctx, 31, 0x287C18u);
    ctx->pc = 0x287C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C10u;
    // 0x287c14: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x287C10u, 0x287C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C18u;
label_287c18:
    // 0x287c18: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x287c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x287c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287c24: 0x3e00008  jr          $ra
    ctx->pc = 0x287C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C24u;
        // 0x287c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C2Cu;
    // 0x287c2c: 0x0  nop
    ctx->pc = 0x287c2cu;
    // NOP
    if (ctx->pc == 0x287c2cu) { ctx->pc = 0x287c30u; }
}
