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

// Function: sub_002C4DC8
// Address: 0x2c4dc8 - 0x2c4e90
void sub_002C4DC8_0x2c4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4DC8_0x2c4dc8");
#endif

    switch (ctx->pc) {
        case 0x2c4e00u: goto label_2c4e00;
        case 0x2c4e10u: goto label_2c4e10;
        case 0x2c4e24u: goto label_2c4e24;
        case 0x2c4e4cu: goto label_2c4e4c;
        case 0x2c4e58u: goto label_2c4e58;
        case 0x2c4e64u: goto label_2c4e64;
        default: break;
    }

    ctx->pc = 0x2c4dc8u;

    // 0x2c4dc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4dcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c4dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c4dd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c4dd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c4ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4de0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c4de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c4de4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4DE4u;
    {
        const bool branch_taken_0x2c4de4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DE4u;
        // 0x2c4de8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4de4) {
            ctx->pc = 0x2C4DF4u;
            goto label_2c4df4;
        }
    }
    ctx->pc = 0x2C4DECu;
    // 0x2c4dec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C4DECu;
    {
        const bool branch_taken_0x2c4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DECu;
        // 0x2c4df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dec) {
            ctx->pc = 0x2C4E70u;
            goto label_2c4e70;
        }
    }
    ctx->pc = 0x2C4DF4u;
label_2c4df4:
    // 0x2c4df4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4df8: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C4DF8u;
    SET_GPR_U32(ctx, 31, 0x2C4E00u);
    ctx->pc = 0x2C4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DF8u;
    // 0x2c4dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24F0u, 0x2C4DF8u, 0x2C4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E00u;
label_2c4e00:
    // 0x2c4e00: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c4e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e08: 0xc0a099e  jal         func_282678
    ctx->pc = 0x2C4E08u;
    SET_GPR_U32(ctx, 31, 0x2C4E10u);
    ctx->pc = 0x2C4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E08u;
    // 0x2c4e0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282678u, 0x2C4E08u, 0x2C4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E10u;
label_2c4e10:
    // 0x2c4e10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c4e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c4e14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e1c: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E24u);
    ctx->pc = 0x2C4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E1Cu;
    // 0x2c4e20: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2C4E1Cu, 0x2C4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E24u;
label_2c4e24:
    // 0x2c4e24: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4E24u;
    {
        const bool branch_taken_0x2c4e24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E24u;
        // 0x2c4e28: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e24) {
            ctx->pc = 0x2C4E70u;
            goto label_2c4e70;
        }
    }
    ctx->pc = 0x2C4E2Cu;
    // 0x2c4e2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c4e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4e3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c4e40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c4e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c4e44: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C4E44u;
    SET_GPR_U32(ctx, 31, 0x2C4E4Cu);
    ctx->pc = 0x2C4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E44u;
    // 0x2c4e48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2C4E44u, 0x2C4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E4Cu;
label_2c4e4c:
    // 0x2c4e4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4e50: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C4E50u;
    SET_GPR_U32(ctx, 31, 0x2C4E58u);
    ctx->pc = 0x2C4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E50u;
    // 0x2c4e54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24F0u, 0x2C4E50u, 0x2C4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E58u;
label_2c4e58:
    // 0x2c4e58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4e5c: 0xc0a099e  jal         func_282678
    ctx->pc = 0x2C4E5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E64u);
    ctx->pc = 0x2C4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E5Cu;
    // 0x2c4e60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282678u, 0x2C4E5Cu, 0x2C4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E64u;
label_2c4e64:
    // 0x2c4e64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4e68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c4e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e6c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c4e70:
    // 0x2c4e70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c4e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4e74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c4e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4e78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c4e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4e7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c4e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4e80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c4e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4e84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E84u;
        // 0x2c4e88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4E8Cu;
    // 0x2c4e8c: 0x0  nop
    ctx->pc = 0x2c4e8cu;
    // NOP
    if (ctx->pc == 0x2c4e8cu) { ctx->pc = 0x2c4e90u; }
}
