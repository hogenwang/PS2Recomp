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

// Function: sub_00217F08
// Address: 0x217f08 - 0x2181e0
void sub_00217F08_0x217f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F08_0x217f08");
#endif

    switch (ctx->pc) {
        case 0x217f24u: goto label_217f24;
        case 0x217f34u: goto label_217f34;
        case 0x217f44u: goto label_217f44;
        case 0x217fa4u: goto label_217fa4;
        case 0x217fb8u: goto label_217fb8;
        case 0x217fccu: goto label_217fcc;
        case 0x217fdcu: goto label_217fdc;
        case 0x218044u: goto label_218044;
        case 0x218058u: goto label_218058;
        case 0x21806cu: goto label_21806c;
        case 0x218074u: goto label_218074;
        case 0x2180e4u: goto label_2180e4;
        case 0x2180f8u: goto label_2180f8;
        case 0x21810cu: goto label_21810c;
        case 0x21811cu: goto label_21811c;
        case 0x218184u: goto label_218184;
        case 0x218198u: goto label_218198;
        case 0x2181acu: goto label_2181ac;
        case 0x2181b4u: goto label_2181b4;
        default: break;
    }

    ctx->pc = 0x217f08u;

label_217f08:
    // 0x217f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217f1c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217F1Cu;
    SET_GPR_U32(ctx, 31, 0x217F24u);
    ctx->pc = 0x217F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F1Cu;
    // 0x217f20: 0x24840f98  addiu       $a0, $a0, 0xF98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217F1Cu, 0x217F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F24u;
label_217f24:
    // 0x217f24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217f28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217f2c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217F2Cu;
    SET_GPR_U32(ctx, 31, 0x217F34u);
    ctx->pc = 0x217F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F2Cu;
    // 0x217f30: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217F2Cu, 0x217F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F34u;
label_217f34:
    // 0x217f34: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x217f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217f38: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217f3c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217F3Cu;
    SET_GPR_U32(ctx, 31, 0x217F44u);
    ctx->pc = 0x217F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F3Cu;
    // 0x217f40: 0x24840f78  addiu       $a0, $a0, 0xF78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217F3Cu, 0x217F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F44u;
label_217f44:
    // 0x217f44: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x217f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x217f48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217f4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217f50: 0x24840f88  addiu       $a0, $a0, 0xF88
    ctx->pc = 0x217f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3976));
    // 0x217f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f58: 0x8043e52  j           func_10F948
    ctx->pc = 0x217F58u;
    ctx->pc = 0x217F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F58u;
    // 0x217f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x217F60u;
    // 0x217f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217f64: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217f64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217f68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x217f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217f74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217f78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f7c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217f80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217f88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x217f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217f90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f94: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x217f94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217f98: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217f9c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217F9Cu;
    SET_GPR_U32(ctx, 31, 0x217FA4u);
    ctx->pc = 0x217FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F9Cu;
    // 0x217fa0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217F9Cu, 0x217FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FA4u;
label_217fa4:
    // 0x217fa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fb0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217FB0u;
    SET_GPR_U32(ctx, 31, 0x217FB8u);
    ctx->pc = 0x217FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FB0u;
    // 0x217fb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217FB0u, 0x217FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FB8u;
label_217fb8:
    // 0x217fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fc4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217FC4u;
    SET_GPR_U32(ctx, 31, 0x217FCCu);
    ctx->pc = 0x217FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FC4u;
    // 0x217fc8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217FC4u, 0x217FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FCCu;
label_217fcc:
    // 0x217fcc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217fccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fd4: 0xc085fc2  jal         func_217F08
    ctx->pc = 0x217FD4u;
    SET_GPR_U32(ctx, 31, 0x217FDCu);
    ctx->pc = 0x217FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FD4u;
    // 0x217fd8: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217F08u;
    goto label_217f08;
    ctx->pc = 0x217FDCu;
label_217fdc:
    // 0x217fdc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x217fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ff4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x217ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x217FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FF8u;
        // 0x217ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218000u;
    // 0x218000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218004: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218004u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218008: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21800c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218014: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21801c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218020: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218024: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21802c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21802cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218030: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218034: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x218034u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218038: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21803c: 0xc084612  jal         func_211848
    ctx->pc = 0x21803Cu;
    SET_GPR_U32(ctx, 31, 0x218044u);
    ctx->pc = 0x218040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21803Cu;
    // 0x218040: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21803Cu, 0x218044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218044u;
label_218044:
    // 0x218044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218048: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21804c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218050: 0xc084612  jal         func_211848
    ctx->pc = 0x218050u;
    SET_GPR_U32(ctx, 31, 0x218058u);
    ctx->pc = 0x218054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218050u;
    // 0x218054: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x218050u, 0x218058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218058u;
label_218058:
    // 0x218058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21805c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21805cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218064: 0xc084612  jal         func_211848
    ctx->pc = 0x218064u;
    SET_GPR_U32(ctx, 31, 0x21806Cu);
    ctx->pc = 0x218068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218064u;
    // 0x218068: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x218064u, 0x21806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21806Cu;
label_21806c:
    // 0x21806c: 0xc085fc2  jal         func_217F08
    ctx->pc = 0x21806Cu;
    SET_GPR_U32(ctx, 31, 0x218074u);
    ctx->pc = 0x218070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21806Cu;
    // 0x218070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217F08u;
    goto label_217f08;
    ctx->pc = 0x218074u;
label_218074:
    // 0x218074: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21807c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21807cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x218080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218088: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21808c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21808cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218090: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218094: 0x3e00008  jr          $ra
    ctx->pc = 0x218094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218094u;
        // 0x218098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21809Cu;
    // 0x21809c: 0x0  nop
    ctx->pc = 0x21809cu;
    // NOP
    // 0x2180a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2180a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2180a4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2180a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2180a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2180a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2180ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2180acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2180b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2180b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2180b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2180b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2180b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2180b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180bc: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2180bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2180c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2180c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2180c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2180c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2180c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2180ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2180d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2180d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180d4: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x2180d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2180d8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2180d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2180dc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2180DCu;
    SET_GPR_U32(ctx, 31, 0x2180E4u);
    ctx->pc = 0x2180E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180DCu;
    // 0x2180e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2180DCu, 0x2180E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E4u;
label_2180e4:
    // 0x2180e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2180e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2180e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2180ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180f0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180F0u;
    // 0x2180f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2180F0u, 0x2180F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180F8u;
label_2180f8:
    // 0x2180f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2180f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2180fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218104: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218104u;
    SET_GPR_U32(ctx, 31, 0x21810Cu);
    ctx->pc = 0x218108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218104u;
    // 0x218108: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x218104u, 0x21810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21810Cu;
label_21810c:
    // 0x21810c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21810cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x218110: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218114: 0xc086078  jal         func_2181E0
    ctx->pc = 0x218114u;
    SET_GPR_U32(ctx, 31, 0x21811Cu);
    ctx->pc = 0x218118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218114u;
    // 0x218118: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2181E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2181E0u, 0x218114u, 0x21811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21811Cu;
label_21811c:
    // 0x21811c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21811cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21812c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21812cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218134: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218138: 0x3e00008  jr          $ra
    ctx->pc = 0x218138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218138u;
        // 0x21813c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218140u;
    // 0x218140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218144: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218144u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218148: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21814c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21815c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218160: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218164: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218168: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21816c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21816cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218170: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218174: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x218174u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218178: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21817c: 0xc084612  jal         func_211848
    ctx->pc = 0x21817Cu;
    SET_GPR_U32(ctx, 31, 0x218184u);
    ctx->pc = 0x218180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21817Cu;
    // 0x218180: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21817Cu, 0x218184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218184u;
label_218184:
    // 0x218184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21818c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21818cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218190: 0xc084612  jal         func_211848
    ctx->pc = 0x218190u;
    SET_GPR_U32(ctx, 31, 0x218198u);
    ctx->pc = 0x218194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218190u;
    // 0x218194: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x218190u, 0x218198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218198u;
label_218198:
    // 0x218198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21819c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21819cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2181a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181a4: 0xc084612  jal         func_211848
    ctx->pc = 0x2181A4u;
    SET_GPR_U32(ctx, 31, 0x2181ACu);
    ctx->pc = 0x2181A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181A4u;
    // 0x2181a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2181A4u, 0x2181ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181ACu;
label_2181ac:
    // 0x2181ac: 0xc086078  jal         func_2181E0
    ctx->pc = 0x2181ACu;
    SET_GPR_U32(ctx, 31, 0x2181B4u);
    ctx->pc = 0x2181B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181ACu;
    // 0x2181b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2181E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2181E0u, 0x2181ACu, 0x2181B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181B4u;
label_2181b4:
    // 0x2181b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2181b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2181b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2181b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2181bc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2181bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2181c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2181c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2181c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2181c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2181c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2181c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2181cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2181ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2181d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2181d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2181d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2181D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2181D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181D4u;
        // 0x2181d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2181D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2181DCu;
    // 0x2181dc: 0x0  nop
    ctx->pc = 0x2181dcu;
    // NOP
}
