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

// Function: sub_002BFFF8
// Address: 0x2bfff8 - 0x2c0088
void sub_002BFFF8_0x2bfff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFFF8_0x2bfff8");
#endif

    switch (ctx->pc) {
        case 0x2c0008u: goto label_2c0008;
        case 0x2c0028u: goto label_2c0028;
        case 0x2c004cu: goto label_2c004c;
        case 0x2c0070u: goto label_2c0070;
        default: break;
    }

    ctx->pc = 0x2bfff8u;

    // 0x2bfff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0000: 0xc0a5cd6  jal         func_297358
    ctx->pc = 0x2C0000u;
    SET_GPR_U32(ctx, 31, 0x2C0008u);
    ctx->pc = 0x2C0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0000u;
    // 0x2c0004: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297358u, 0x2C0000u, 0x2C0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0008u;
label_2c0008:
    // 0x2c0008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c000c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C000Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C000Cu;
        // 0x2c0010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C000Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0014u;
    // 0x2c0014: 0x0  nop
    ctx->pc = 0x2c0014u;
    // NOP
    // 0x2c0018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c001c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0020: 0xc0a5d12  jal         func_297448
    ctx->pc = 0x2C0020u;
    SET_GPR_U32(ctx, 31, 0x2C0028u);
    ctx->pc = 0x2C0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0020u;
    // 0x2c0024: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297448u, 0x2C0020u, 0x2C0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0028u;
label_2c0028:
    // 0x2c0028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c002c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C002Cu;
        // 0x2c0030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C002Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0034u;
    // 0x2c0034: 0x0  nop
    ctx->pc = 0x2c0034u;
    // NOP
    // 0x2c0038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c003c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0044: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C0044u;
    SET_GPR_U32(ctx, 31, 0x2C004Cu);
    ctx->pc = 0x2C0048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0044u;
    // 0x2c0048: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C0044u, 0x2C004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C004Cu;
label_2c004c:
    // 0x2c004c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c004cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0050: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0050u;
    {
        const bool branch_taken_0x2c0050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0050u;
        // 0x2c0054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0050) {
            ctx->pc = 0x2C0074u;
            goto label_2c0074;
        }
    }
    ctx->pc = 0x2C0058u;
    // 0x2c0058: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c0058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c005c: 0x240500ea  addiu       $a1, $zero, 0xEA
    ctx->pc = 0x2c005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x2c0060: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c0060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c0064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0068: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C0068u;
    SET_GPR_U32(ctx, 31, 0x2C0070u);
    ctx->pc = 0x2C006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0068u;
    // 0x2c006c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C0068u, 0x2C0070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0070u;
label_2c0070:
    // 0x2c0070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0074:
    // 0x2c0074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c007c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C007Cu;
        // 0x2c0080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C007Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0084u;
    // 0x2c0084: 0x0  nop
    ctx->pc = 0x2c0084u;
    // NOP
}
