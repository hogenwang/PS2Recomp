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

// Function: sub_0021BAA0
// Address: 0x21baa0 - 0x21bc40
void sub_0021BAA0_0x21baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BAA0_0x21baa0");
#endif

    switch (ctx->pc) {
        case 0x21babcu: goto label_21babc;
        case 0x21baccu: goto label_21bacc;
        case 0x21bae0u: goto label_21bae0;
        case 0x21bb44u: goto label_21bb44;
        case 0x21bb58u: goto label_21bb58;
        case 0x21bb6cu: goto label_21bb6c;
        case 0x21bb7cu: goto label_21bb7c;
        case 0x21bbe4u: goto label_21bbe4;
        case 0x21bbf8u: goto label_21bbf8;
        case 0x21bc0cu: goto label_21bc0c;
        case 0x21bc14u: goto label_21bc14;
        default: break;
    }

    ctx->pc = 0x21baa0u;

label_21baa0:
    // 0x21baa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21baa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21baa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21baac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21baacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bab0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bab4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BAB4u;
    SET_GPR_U32(ctx, 31, 0x21BABCu);
    ctx->pc = 0x21BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAB4u;
    // 0x21bab8: 0x24841600  addiu       $a0, $a0, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BAB4u, 0x21BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BABCu;
label_21babc:
    // 0x21babc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21babcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21bac0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bac4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BAC4u;
    SET_GPR_U32(ctx, 31, 0x21BACCu);
    ctx->pc = 0x21BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAC4u;
    // 0x21bac8: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BAC4u, 0x21BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BACCu;
label_21bacc:
    // 0x21bacc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21baccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bad0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x21bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21bad4: 0x24841620  addiu       $a0, $a0, 0x1620
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5664));
    // 0x21bad8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BAD8u;
    SET_GPR_U32(ctx, 31, 0x21BAE0u);
    ctx->pc = 0x21BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAD8u;
    // 0x21badc: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21BAD8u, 0x21BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAE0u;
label_21bae0:
    // 0x21bae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21bae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bae8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21baec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21baecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21baf0: 0x24841490  addiu       $a0, $a0, 0x1490
    ctx->pc = 0x21baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
    // 0x21baf4: 0x8043e52  j           func_10F948
    ctx->pc = 0x21BAF4u;
    ctx->pc = 0x21BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAF4u;
    // 0x21baf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21BAFCu;
    // 0x21bafc: 0x0  nop
    ctx->pc = 0x21bafcu;
    // NOP
    // 0x21bb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bb04: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bb04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bb08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21bb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bb10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bb14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21bb18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21bb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb1c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21bb20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21bb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bb28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21bb28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21bb30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb34: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x21bb34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21bb38: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21bb38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21bb3c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21BB3Cu;
    SET_GPR_U32(ctx, 31, 0x21BB44u);
    ctx->pc = 0x21BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB3Cu;
    // 0x21bb40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21BB3Cu, 0x21BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB44u;
label_21bb44:
    // 0x21bb44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21bb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb50: 0xc08449a  jal         func_211268
    ctx->pc = 0x21BB50u;
    SET_GPR_U32(ctx, 31, 0x21BB58u);
    ctx->pc = 0x21BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB50u;
    // 0x21bb54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21BB50u, 0x21BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB58u;
label_21bb58:
    // 0x21bb58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21bb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb64: 0xc08449a  jal         func_211268
    ctx->pc = 0x21BB64u;
    SET_GPR_U32(ctx, 31, 0x21BB6Cu);
    ctx->pc = 0x21BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB64u;
    // 0x21bb68: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21BB64u, 0x21BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB6Cu;
label_21bb6c:
    // 0x21bb6c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21bb70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21bb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb74: 0xc086ea8  jal         func_21BAA0
    ctx->pc = 0x21BB74u;
    SET_GPR_U32(ctx, 31, 0x21BB7Cu);
    ctx->pc = 0x21BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB74u;
    // 0x21bb78: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BAA0u;
    goto label_21baa0;
    ctx->pc = 0x21BB7Cu;
label_21bb7c:
    // 0x21bb7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21bb7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bb84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bb88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bb8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21bb8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21bb90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21bb90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bb94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21bb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21bb98: 0x3e00008  jr          $ra
    ctx->pc = 0x21BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB98u;
        // 0x21bb9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BBA0u;
    // 0x21bba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bba4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bba4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bba8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21bbac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bbb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bbb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bbb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21bbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21bbc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21bbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21bbc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21bbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbcc: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21bbd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbd4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21bbd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21bbd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21bbdc: 0xc084612  jal         func_211848
    ctx->pc = 0x21BBDCu;
    SET_GPR_U32(ctx, 31, 0x21BBE4u);
    ctx->pc = 0x21BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBDCu;
    // 0x21bbe0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21BBDCu, 0x21BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BBE4u;
label_21bbe4:
    // 0x21bbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbf0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21BBF0u;
    SET_GPR_U32(ctx, 31, 0x21BBF8u);
    ctx->pc = 0x21BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBF0u;
    // 0x21bbf4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21BBF0u, 0x21BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BBF8u;
label_21bbf8:
    // 0x21bbf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc04: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21BC04u;
    SET_GPR_U32(ctx, 31, 0x21BC0Cu);
    ctx->pc = 0x21BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC04u;
    // 0x21bc08: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21BC04u, 0x21BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC0Cu;
label_21bc0c:
    // 0x21bc0c: 0xc086ea8  jal         func_21BAA0
    ctx->pc = 0x21BC0Cu;
    SET_GPR_U32(ctx, 31, 0x21BC14u);
    ctx->pc = 0x21BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC0Cu;
    // 0x21bc10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BAA0u;
    goto label_21baa0;
    ctx->pc = 0x21BC14u;
label_21bc14:
    // 0x21bc14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21bc18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bc1c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21bc20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bc24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bc28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21bc28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21bc2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21bc2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bc30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21bc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21bc34: 0x3e00008  jr          $ra
    ctx->pc = 0x21BC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC34u;
        // 0x21bc38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BC3Cu;
    // 0x21bc3c: 0x0  nop
    ctx->pc = 0x21bc3cu;
    // NOP
    if (ctx->pc == 0x21bc3cu) { ctx->pc = 0x21bc40u; }
}
