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

// Function: sub_002C0D00
// Address: 0x2c0d00 - 0x2c0d68
void sub_002C0D00_0x2c0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0D00_0x2c0d00");
#endif

    switch (ctx->pc) {
        case 0x2c0d38u: goto label_2c0d38;
        case 0x2c0d54u: goto label_2c0d54;
        default: break;
    }

    ctx->pc = 0x2c0d00u;

    // 0x2c0d00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D00u;
    {
        const bool branch_taken_0x2c0d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D00u;
        // 0x2c0d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d00) {
            ctx->pc = 0x2C0D10u;
            goto label_2c0d10;
        }
    }
    ctx->pc = 0x2C0D08u;
    // 0x2c0d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D08u;
        // 0x2c0d0c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0D10u;
label_2c0d10:
    // 0x2c0d10: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0D18u;
    // 0x2c0d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0d28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c0d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0d30: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C0D30u;
    SET_GPR_U32(ctx, 31, 0x2C0D38u);
    ctx->pc = 0x2C0D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D30u;
    // 0x2c0d34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A708u, 0x2C0D30u, 0x2C0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D38u;
label_2c0d38:
    // 0x2c0d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D38u;
    {
        const bool branch_taken_0x2c0d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D38u;
        // 0x2c0d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d38) {
            ctx->pc = 0x2C0D48u;
            goto label_2c0d48;
        }
    }
    ctx->pc = 0x2C0D40u;
    // 0x2c0d40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0D40u;
    {
        const bool branch_taken_0x2c0d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D40u;
        // 0x2c0d44: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d40) {
            ctx->pc = 0x2C0D54u;
            goto label_2c0d54;
        }
    }
    ctx->pc = 0x2C0D48u;
label_2c0d48:
    // 0x2c0d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d4c: 0xc0b035a  jal         func_2C0D68
    ctx->pc = 0x2C0D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C0D54u);
    ctx->pc = 0x2C0D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D4Cu;
    // 0x2c0d50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D68u, 0x2C0D4Cu, 0x2C0D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D54u;
label_2c0d54:
    // 0x2c0d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0d58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c0d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0d60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D60u;
        // 0x2c0d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0D68u;
}
