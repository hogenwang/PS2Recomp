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

// Function: sub_0021AA38
// Address: 0x21aa38 - 0x21ac08
void sub_0021AA38_0x21aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AA38_0x21aa38");
#endif

    switch (ctx->pc) {
        case 0x21aa54u: goto label_21aa54;
        case 0x21aa64u: goto label_21aa64;
        case 0x21aa74u: goto label_21aa74;
        case 0x21aa84u: goto label_21aa84;
        case 0x21aae4u: goto label_21aae4;
        case 0x21aaf8u: goto label_21aaf8;
        case 0x21ab0cu: goto label_21ab0c;
        case 0x21ab20u: goto label_21ab20;
        case 0x21ab30u: goto label_21ab30;
        case 0x21ab9cu: goto label_21ab9c;
        case 0x21abb0u: goto label_21abb0;
        case 0x21abc4u: goto label_21abc4;
        case 0x21abd8u: goto label_21abd8;
        case 0x21abe0u: goto label_21abe0;
        default: break;
    }

    ctx->pc = 0x21aa38u;

label_21aa38:
    // 0x21aa38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21aa3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21aa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21aa40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21aa44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21aa44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21aa4c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AA4Cu;
    SET_GPR_U32(ctx, 31, 0x21AA54u);
    ctx->pc = 0x21AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA4Cu;
    // 0x21aa50: 0x248414f0  addiu       $a0, $a0, 0x14F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21AA4Cu, 0x21AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA54u;
label_21aa54:
    // 0x21aa54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21aa58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21aa5c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AA5Cu;
    SET_GPR_U32(ctx, 31, 0x21AA64u);
    ctx->pc = 0x21AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA5Cu;
    // 0x21aa60: 0x24841470  addiu       $a0, $a0, 0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21AA5Cu, 0x21AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA64u;
label_21aa64:
    // 0x21aa64: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21aa68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21aa6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AA6Cu;
    SET_GPR_U32(ctx, 31, 0x21AA74u);
    ctx->pc = 0x21AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA6Cu;
    // 0x21aa70: 0x24841480  addiu       $a0, $a0, 0x1480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21AA6Cu, 0x21AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA74u;
label_21aa74:
    // 0x21aa74: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21aa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21aa78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21aa7c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AA7Cu;
    SET_GPR_U32(ctx, 31, 0x21AA84u);
    ctx->pc = 0x21AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA7Cu;
    // 0x21aa80: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21AA7Cu, 0x21AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA84u;
label_21aa84:
    // 0x21aa84: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21aa88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21aa8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21aa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21aa90: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21aa94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21aa94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aa98: 0x8043e52  j           func_10F948
    ctx->pc = 0x21AA98u;
    ctx->pc = 0x21AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA98u;
    // 0x21aa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21AAA0u;
    // 0x21aaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21aaa4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21aaa4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21aaa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21aaac: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21aab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21aab4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21aab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21aabc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21aabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aac0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21aac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21aac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aac8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21aacc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21aaccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21aad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad4: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21aad8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21aad8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21aadc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21AADCu;
    SET_GPR_U32(ctx, 31, 0x21AAE4u);
    ctx->pc = 0x21AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AADCu;
    // 0x21aae0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21AADCu, 0x21AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAE4u;
label_21aae4:
    // 0x21aae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21aae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aaec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21aaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aaf0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21AAF0u;
    SET_GPR_U32(ctx, 31, 0x21AAF8u);
    ctx->pc = 0x21AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAF0u;
    // 0x21aaf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21AAF0u, 0x21AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAF8u;
label_21aaf8:
    // 0x21aaf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aafc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21aafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ab00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab04: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21AB04u;
    SET_GPR_U32(ctx, 31, 0x21AB0Cu);
    ctx->pc = 0x21AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB04u;
    // 0x21ab08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21AB04u, 0x21AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB0Cu;
label_21ab0c:
    // 0x21ab0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ab0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ab10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab18: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21AB18u;
    SET_GPR_U32(ctx, 31, 0x21AB20u);
    ctx->pc = 0x21AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB18u;
    // 0x21ab1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21AB18u, 0x21AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB20u;
label_21ab20:
    // 0x21ab20: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21ab20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ab24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab28: 0xc086a8e  jal         func_21AA38
    ctx->pc = 0x21AB28u;
    SET_GPR_U32(ctx, 31, 0x21AB30u);
    ctx->pc = 0x21AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB28u;
    // 0x21ab2c: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AA38u;
    goto label_21aa38;
    ctx->pc = 0x21AB30u;
label_21ab30:
    // 0x21ab30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21ab30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ab34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ab38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ab38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ab3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ab3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ab40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21ab40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ab44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21ab44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ab48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB4Cu;
        // 0x21ab50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AB54u;
    // 0x21ab54: 0x0  nop
    ctx->pc = 0x21ab54u;
    // NOP
    // 0x21ab58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ab5c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ab60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21ab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21ab64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ab68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ab6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ab70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ab70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21ab78: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21ab78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21ab80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21ab80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab84: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21ab88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21ab88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab8c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ab90: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ab94: 0xc084612  jal         func_211848
    ctx->pc = 0x21AB94u;
    SET_GPR_U32(ctx, 31, 0x21AB9Cu);
    ctx->pc = 0x21AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB94u;
    // 0x21ab98: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21AB94u, 0x21AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB9Cu;
label_21ab9c:
    // 0x21ab9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aba0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21aba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aba4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21aba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aba8: 0xc084612  jal         func_211848
    ctx->pc = 0x21ABA8u;
    SET_GPR_U32(ctx, 31, 0x21ABB0u);
    ctx->pc = 0x21ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ABA8u;
    // 0x21abac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21ABA8u, 0x21ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ABB0u;
label_21abb0:
    // 0x21abb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21abb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abb8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21abb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abbc: 0xc084612  jal         func_211848
    ctx->pc = 0x21ABBCu;
    SET_GPR_U32(ctx, 31, 0x21ABC4u);
    ctx->pc = 0x21ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ABBCu;
    // 0x21abc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21ABBCu, 0x21ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ABC4u;
label_21abc4:
    // 0x21abc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21abc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21abc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abd0: 0xc084612  jal         func_211848
    ctx->pc = 0x21ABD0u;
    SET_GPR_U32(ctx, 31, 0x21ABD8u);
    ctx->pc = 0x21ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ABD0u;
    // 0x21abd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21ABD0u, 0x21ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ABD8u;
label_21abd8:
    // 0x21abd8: 0xc086a8e  jal         func_21AA38
    ctx->pc = 0x21ABD8u;
    SET_GPR_U32(ctx, 31, 0x21ABE0u);
    ctx->pc = 0x21ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ABD8u;
    // 0x21abdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AA38u;
    goto label_21aa38;
    ctx->pc = 0x21ABE0u;
label_21abe0:
    // 0x21abe0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21abe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21abe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21abe8: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21abec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21abecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21abf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21abf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21abf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21abf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21abf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21abf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21abfc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21abfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ac00: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC00u;
        // 0x21ac04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC08u;
}
