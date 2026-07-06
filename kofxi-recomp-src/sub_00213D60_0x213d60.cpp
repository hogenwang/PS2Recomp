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

// Function: sub_00213D60
// Address: 0x213d60 - 0x213e60
void sub_00213D60_0x213d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213D60_0x213d60");
#endif

    switch (ctx->pc) {
        case 0x213d9cu: goto label_213d9c;
        case 0x213db0u: goto label_213db0;
        case 0x213dc4u: goto label_213dc4;
        case 0x213dd8u: goto label_213dd8;
        case 0x213decu: goto label_213dec;
        case 0x213e00u: goto label_213e00;
        case 0x213e14u: goto label_213e14;
        case 0x213e28u: goto label_213e28;
        case 0x213e38u: goto label_213e38;
        default: break;
    }

    ctx->pc = 0x213d60u;

    // 0x213d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213d64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213d70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213d74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x213d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213d7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x213d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d8c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x213d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213d90: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x213d90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213d94: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213D94u;
    SET_GPR_U32(ctx, 31, 0x213D9Cu);
    ctx->pc = 0x213D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D94u;
    // 0x213d98: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x213D94u, 0x213D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D9Cu;
label_213d9c:
    // 0x213d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213da0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213da4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213da8: 0xc08449a  jal         func_211268
    ctx->pc = 0x213DA8u;
    SET_GPR_U32(ctx, 31, 0x213DB0u);
    ctx->pc = 0x213DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DA8u;
    // 0x213dac: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x213DA8u, 0x213DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DB0u;
label_213db0:
    // 0x213db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213db8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dbc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213DBCu;
    SET_GPR_U32(ctx, 31, 0x213DC4u);
    ctx->pc = 0x213DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DBCu;
    // 0x213dc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213DBCu, 0x213DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DC4u;
label_213dc4:
    // 0x213dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dd0: 0xc08449a  jal         func_211268
    ctx->pc = 0x213DD0u;
    SET_GPR_U32(ctx, 31, 0x213DD8u);
    ctx->pc = 0x213DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DD0u;
    // 0x213dd4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x213DD0u, 0x213DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DD8u;
label_213dd8:
    // 0x213dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213de0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213de4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213DE4u;
    SET_GPR_U32(ctx, 31, 0x213DECu);
    ctx->pc = 0x213DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DE4u;
    // 0x213de8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x213DE4u, 0x213DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DECu;
label_213dec:
    // 0x213dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213df0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213df4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213df8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213DF8u;
    SET_GPR_U32(ctx, 31, 0x213E00u);
    ctx->pc = 0x213DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DF8u;
    // 0x213dfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213DF8u, 0x213E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E00u;
label_213e00:
    // 0x213e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e0c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213E0Cu;
    SET_GPR_U32(ctx, 31, 0x213E14u);
    ctx->pc = 0x213E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E0Cu;
    // 0x213e10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213E0Cu, 0x213E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E14u;
label_213e14:
    // 0x213e14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e20: 0xc08449a  jal         func_211268
    ctx->pc = 0x213E20u;
    SET_GPR_U32(ctx, 31, 0x213E28u);
    ctx->pc = 0x213E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E20u;
    // 0x213e24: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x213E20u, 0x213E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E28u;
label_213e28:
    // 0x213e28: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x213e28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213e2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e30: 0xc084f2c  jal         func_213CB0
    ctx->pc = 0x213E30u;
    SET_GPR_U32(ctx, 31, 0x213E38u);
    ctx->pc = 0x213E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E30u;
    // 0x213e34: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213CB0u, 0x213E30u, 0x213E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E38u;
label_213e38:
    // 0x213e38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x213e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213e44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213e48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213e4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213e50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213e54: 0x3e00008  jr          $ra
    ctx->pc = 0x213E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E54u;
        // 0x213e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E5Cu;
    // 0x213e5c: 0x0  nop
    ctx->pc = 0x213e5cu;
    // NOP
    if (ctx->pc == 0x213e5cu) { ctx->pc = 0x213e60u; }
}
