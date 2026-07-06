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

// Function: sub_00202D40
// Address: 0x202d40 - 0x202e00
void sub_00202D40_0x202d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D40_0x202d40");
#endif

    switch (ctx->pc) {
        case 0x202d50u: goto label_202d50;
        case 0x202d98u: goto label_202d98;
        case 0x202dacu: goto label_202dac;
        case 0x202dbcu: goto label_202dbc;
        case 0x202dd0u: goto label_202dd0;
        case 0x202ddcu: goto label_202ddc;
        case 0x202decu: goto label_202dec;
        default: break;
    }

    ctx->pc = 0x202d40u;

    // 0x202d40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x202d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x202d44: 0x3e00008  jr          $ra
    ctx->pc = 0x202D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D44u;
        // 0x202d48: 0x2442f3d0  addiu       $v0, $v0, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D4Cu;
    // 0x202d4c: 0x0  nop
    ctx->pc = 0x202d4cu;
    // NOP
label_202d50:
    // 0x202d50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x202d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x202d54: 0x24422070  addiu       $v0, $v0, 0x2070
    ctx->pc = 0x202d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x202d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202d5c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x202D5Cu;
    {
        const bool branch_taken_0x202d5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x202D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D5Cu;
        // 0x202d60: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d5c) {
            ctx->pc = 0x202D68u;
            goto label_202d68;
        }
    }
    ctx->pc = 0x202D64u;
    // 0x202d64: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x202d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_202d68:
    // 0x202d68: 0x3e00008  jr          $ra
    ctx->pc = 0x202D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D70u;
    // 0x202d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202d74: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202d78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x202d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x202d7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x202d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d80: 0x24a5f408  addiu       $a1, $a1, -0xBF8
    ctx->pc = 0x202d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964232));
    // 0x202d84: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x202d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202d88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x202d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x202d8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202d90: 0xc04a966  jal         func_12A598
    ctx->pc = 0x202D90u;
    SET_GPR_U32(ctx, 31, 0x202D98u);
    ctx->pc = 0x202D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D90u;
    // 0x202d94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x202D90u, 0x202D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D98u;
label_202d98:
    // 0x202d98: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202d9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202da0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x202da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x202da4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x202DA4u;
    SET_GPR_U32(ctx, 31, 0x202DACu);
    ctx->pc = 0x202DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DA4u;
    // 0x202da8: 0x24a5f418  addiu       $a1, $a1, -0xBE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x202DA4u, 0x202DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DACu;
label_202dac:
    // 0x202dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202db0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x202db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202db4: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x202DB4u;
    SET_GPR_U32(ctx, 31, 0x202DBCu);
    ctx->pc = 0x202DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB4u;
    // 0x202db8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x202DB4u, 0x202DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DBCu;
label_202dbc:
    // 0x202dbc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202dc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x202dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202dc8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x202DC8u;
    SET_GPR_U32(ctx, 31, 0x202DD0u);
    ctx->pc = 0x202DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DC8u;
    // 0x202dcc: 0x24a5f420  addiu       $a1, $a1, -0xBE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x202DC8u, 0x202DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DD0u;
label_202dd0:
    // 0x202dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202dd4: 0xc080b80  jal         func_202E00
    ctx->pc = 0x202DD4u;
    SET_GPR_U32(ctx, 31, 0x202DDCu);
    ctx->pc = 0x202DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DD4u;
    // 0x202dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E00u, 0x202DD4u, 0x202DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DDCu;
label_202ddc:
    // 0x202ddc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202de4: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x202DE4u;
    SET_GPR_U32(ctx, 31, 0x202DECu);
    ctx->pc = 0x202DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DE4u;
    // 0x202de8: 0x24a5f428  addiu       $a1, $a1, -0xBD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x202DE4u, 0x202DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DECu;
label_202dec:
    // 0x202dec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x202decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202df0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x202df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202df8: 0x3e00008  jr          $ra
    ctx->pc = 0x202DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DF8u;
        // 0x202dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202E00u;
}
